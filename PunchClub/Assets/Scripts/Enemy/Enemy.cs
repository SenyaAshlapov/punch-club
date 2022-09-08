using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public delegate void EnemyEvent();
    public static EnemyEvent EnemyDead;

    [SerializeField]private LevelSaves _levelSaves;

    private Player _player;
    [SerializeField]private List<Rigidbody> _ragdollRB = new List<Rigidbody>();
    [SerializeField]private BoxCollider _enemyCollider;

    [SerializeField]private float _health;
    [SerializeField]private float _damage;
    [SerializeField]private float _distance;
    [SerializeField]private float _thrust;

    [Space(10)]
    [SerializeField]private float _timeBetweenPunches;
    [SerializeField]private float _timeBetweenSuperPunches;
    [SerializeField]private float _restTime;
    
    [Space(5)]
    [SerializeField]private Animator _enemyAnimator;

    public EnemyFighting EnemyFighting;
    public EnemySuperPunch EnemySuperPunch;

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

    [SerializeField]private HealthBar _hpBar;

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

        _player = PlayerSingleton.SingltonePlayer.GetPlayer();

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
            
            if(checkDistanceToPlayer() <= _distance && _currentState != _fightState)
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


}
