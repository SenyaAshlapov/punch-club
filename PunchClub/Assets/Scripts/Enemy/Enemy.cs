using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public delegate void EnemyEvent();
    public static EnemyEvent EnemyDead;

    #region Movement
    [Space(10)]
    [Header("Movement")]

    [SerializeField]private Player _player;
    [SerializeField]private Animator _enemyAnimator;
    [SerializeField]private Transform _rayPoint;
    [SerializeField]private float _rotationSpeed;
    #endregion

    #region Fighting
    [Space(10)]
    [Header("Fighting")]

    [SerializeField]private BoxCollider _enemyCollider;
    
    public EnemyFighting EnemyFighting;
    public EnemySuperPunch EnemySuperPunch;
    
    [SerializeField]private float _health;
    [SerializeField]private float _damage;
    [SerializeField]private float _distance;
    [SerializeField]private float _timeBetweenSuperPunches;
    [SerializeField]private float _restTime;
    #endregion

    #region Ragdoll
    [Space(10)]
    [Header("Ragdoll")]

    [SerializeField]private List<Rigidbody> _ragdollRB = new List<Rigidbody>();
    [SerializeField]private float _thrust;
    #endregion

    #region States
    private IState _currentState;

    private EnemyIdleState _idleState;
    private EnemyFightState _fightState;
    private EnemySuperPunchState _superPunchState;
    private EnemyRestState _restState;
    #endregion

    private bool _isRest = false;
    private bool _isSuperPunch = false;
    private bool _isDead = false;
    private bool _isFreaze = false;

    [Space(10)]
    [Header("UI")]
    [SerializeField]private HealthBar _hpBar;
    [Space(5)]
    [SerializeField]private LevelSaves _levelSaves;

    private void Awake() 
    {
        EnemySingletone.SingltoneEnemy.SetEnemy(this);
        EnemySuperPunch.SuperPunchEnd += endSuperPunch;
        Player.PlayerDead += freaze;

        activityRagdoll(false);
    }


    void OnDestroy()
    {
        EnemySuperPunch.SuperPunchEnd -= endSuperPunch;
        Player.PlayerDead -= freaze;
    }

    private void Start() 
    {
        loadLevel();


        _idleState = new EnemyIdleState(_player, this, _enemyAnimator);
        _fightState = new EnemyFightState(_player, this, _enemyAnimator, _damage);
        _superPunchState = new EnemySuperPunchState(this, _enemyAnimator, _damage);
        _restState = new EnemyRestState(_enemyAnimator);

        _currentState = _idleState;

        StartCoroutine(superPunchTimer());

        _hpBar.InitHpUI(_health);
    }

    private void Update() 
    {
        bool isHitPlayer = checkHitPlayer();
        if(_isDead == false && _isFreaze == false)
        {
            _currentState.Loop();
        }
            

        if(_isRest == false && _isSuperPunch == false && _isDead == false )
        {

            if(checkDistanceToPlayer() > _distance && _currentState != _idleState)
            {
                changeState(_idleState);
            }
            
            if(checkDistanceToPlayer() <= _distance && _currentState != _fightState && isHitPlayer == true)
            {
                changeState(_fightState);
            } 
        }
    }

    public void GetDamage(float damage)
    {
        if(_isFreaze == false && _isDead == false )
            _health -= damage;

        if(_health <= 0 && _isDead == false )
        {
            EnemyDead?.Invoke();
            _health = 0;
            enemyDead();          
        }
        _hpBar.UpdateHpUI(_health); 
    }
        
    private void changeState(IState newState)
    {
        _currentState.Exit();
        newState.Enter();
        _currentState = newState;
    }


    private float checkDistanceToPlayer()
    {
        float distance =  Vector3.Distance(_player.transform.position, transform.position);
        return distance;
    }

    private void endSuperPunch()
    {      
        StartCoroutine(restAfterSuperPunch());
    }
    
    private IEnumerator superPunchTimer()
    {
        yield return new WaitForSeconds(_timeBetweenSuperPunches);
        _isSuperPunch = true;
        changeState(_superPunchState);
        yield return null;
    }

    private IEnumerator restAfterSuperPunch()
    {
        _isSuperPunch = false;
        _isRest = true;
        changeState(_restState);
        yield return new WaitForSeconds(_restTime);
        _isRest = false;

        StartCoroutine(superPunchTimer());
        yield return null;
    } 

    private void enemyDead()
    {
        _isDead = true;
        _enemyAnimator.enabled = false;
        activityRagdoll(true);
    }

    private void activityRagdoll(bool activity)
    {

        foreach(Rigidbody rb in _ragdollRB)
        {
            rb.isKinematic = !activity;
        }
        _enemyCollider.enabled = !activity;

        if(activity == true)
        {
            foreach(Rigidbody rb in _ragdollRB)
            {
                rb.AddForce(0, _thrust, 0, ForceMode.Impulse);
            }
        }
        
    }

    private void freaze() 
    {
        changeState(_idleState);
        _isFreaze = true;
    } 

    private void loadLevel()
    {
        PlayerData data = _levelSaves.LoadPlayerData();

        _health = data.Level * 24;
        _damage = data.Level * 2.5f;
    }

    public void lookAtPlayer()
    {
        Vector3 direction = _player.transform.position - transform.position;
        Quaternion rotation = Quaternion.LookRotation(direction);
        transform.rotation = Quaternion.Lerp(transform.rotation, rotation, Time.deltaTime * _rotationSpeed);
    }

    private bool checkHitPlayer()
    {

        Ray ray = new Ray(_rayPoint.position, _rayPoint.forward);

        RaycastHit hit;

        if(Physics.Raycast(ray, out hit))
        {
            if(hit.collider.gameObject.GetComponent<Player>())
            {
                return true;
            }
            
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }

    }


}
