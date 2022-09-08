using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public delegate void PlayerEvent();
    public static PlayerEvent PlayerDead;



    #region Movement
    [Space(10)]
    [Header("Movment")]
    [SerializeField]private Transform _playerTransform;
    [SerializeField]private Animator _playerAnimator;
    public PlayerMovement PlayerMovement;

    [SerializeField]private float _speed;

    private Transform mainCamera;
    private PlayerInput _playerInput;

    #endregion

    #region Fighting
    [Space(10)]
    [Header("Fighting")]
    [SerializeField]private Enemy _enemy;
    [SerializeField]private float _distance;
    [SerializeField]private float _health;
    [SerializeField]private float _damage;
    [SerializeField]private float _timeBetweenPunches;

    public PlayerFighting PlayerFighting;
    private bool _isDead = false;
    private bool _isWin = false;
    #endregion

    #region Ragdoll
    [Space(10)]
    [Header("Ragdoll")]
    [SerializeField]private List<Rigidbody> _ragdollRB = new List<Rigidbody>();
    [SerializeField]private BoxCollider _playerCollider;

    [SerializeField]private float _nockdownTime;
    [SerializeField]private float _thrust;
    #endregion

    #region States
    private IState _currentState;

    private PlayerWaitState _waitState;
    private PlayerIdleState _idleState;
    private PlayerFightState _fightState;
    private PlayerNockdownState _nockdownState;
    private PlayerWinState _winState;
    #endregion

    [Header("UI")]
    [SerializeField]private HealthBar  _hpBar;
    [Space(5)]
    [SerializeField]private LevelSaves _levelSaves;

    void OnEnable()
    {
        _playerInput.Enable();
    }

    private void OnDisable() {
        _playerInput.Disable();
    }


    private void Awake()
    {
        ActivityRagdoll(false);
        PlayerSingleton.SingltonePlayer.SetPlayer(this);

        _playerInput = new PlayerInput();

        EnemySuperPunch.SuperPunchHit += superPunchHit;
        Enemy.EnemyDead += Win;
        UIController.StartGame += StartGame;
    }

    private void OnDestroy() 
    {
        EnemySuperPunch.SuperPunchHit -= superPunchHit;
        Enemy.EnemyDead -= Win;
    }

    void Start()
    {   

        PlayerMovement.InitPlayerMovement(
            _playerAnimator, 
            _playerInput, 
            _speed,
            _playerTransform, 
            _enemy.transform);

        PlayerFighting.InitPlayerFighting(
            _playerAnimator,
            _damage, 
            _timeBetweenPunches,
            _enemy);
         

        _idleState = new PlayerIdleState(this);
        _fightState = new PlayerFightState(this);
        _nockdownState = new PlayerNockdownState(this, _playerAnimator);
        _winState = new PlayerWinState(_playerAnimator);
        _waitState = new PlayerWaitState(_playerAnimator);

        _currentState = _waitState;

        
    }

    private void Update() 
    {
        _currentState.Loop();

        if(_isWin == false && _isDead == false)
        {
            if(checkDistanceToEnemy() <= _distance && _currentState != _fightState)
            {
                changeState(_fightState);
            }
            if(checkDistanceToEnemy() > _distance && _currentState != _idleState)
            {
                changeState(_idleState);
            }  
        }
    }

    public void GetDamage(float damage)
    {
        _health -= damage;
        if(_health < 0 && _isDead == false)
        {
            _health = 0;
            _isDead = true;
            Dead();
            PlayerDead?.Invoke();        
        }
        _hpBar.UpdateHpUI(_health);
    }

    private void changeState(IState newState)
    {
        _currentState.Exit();
        newState.Enter();
        _currentState = newState;
    }

    private float checkDistanceToEnemy()
    {
        float distance =  Vector3.Distance(_enemy.transform.position, transform.position);
        return distance;
    }

    private void loadPlayerData()
    {
        PlayerData data = _levelSaves.LoadPlayerData();

        _health = data.PlayerHealth;
        _damage = data.PlayerDamage;
    }

    private void superPunchHit(float damage)
    {
        GetDamage(damage);
        StartCoroutine("nockDown");
    }

    private void StartGame()
    {
        changeState(_idleState);
        loadPlayerData();
        _hpBar.InitHpUI(_health);
    }

    private void Win()  
    {
        _isWin = true;
        changeState(_winState);
    }

    private void Dead()
    {
        ActivityRagdoll(true);
        _playerAnimator.enabled = false;
    }

    public void ActivityRagdoll(bool activity)
    {

        foreach(Rigidbody rb in _ragdollRB)
        {
            rb.isKinematic = !activity;
        }
        _playerCollider.enabled = !activity;

        if(activity == true)
        {
            foreach(Rigidbody rb in _ragdollRB)
            {
                rb.AddForce(0, _thrust, 0, ForceMode.Impulse);
            }      
        }    
    }

    private IEnumerator nockDown()
    {
        ActivityRagdoll(true);
        _playerAnimator.enabled = false;

        foreach(Rigidbody rb in _ragdollRB)
        {
            rb.AddForce(0, _thrust, 0, ForceMode.Impulse);
        }

        yield return new WaitForSeconds(_nockdownTime);
        
        ActivityRagdoll(false);
        _playerAnimator.enabled = true;
    }

}
