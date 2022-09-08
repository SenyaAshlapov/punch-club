using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public delegate void PlayerEvent();
    public static PlayerEvent PlayerDead;

    [SerializeField]private List<Rigidbody> _ragdollRB = new List<Rigidbody>();
    [SerializeField]private BoxCollider _playerCollider;
    [SerializeField]private float _thrust;

    [SerializeField]private LevelSaves _levelSaves;
    private Transform mainCamera;

    private Enemy _enemy;
    private PlayerInput _playerInput;

    #region States
    private IState _currentState;

    private PlayerIdleState _idleState;
    private PlayerFightState _fightState;
    private PlayerNockdownState _nockdownState;
    private PlayerWinState _winState;
    #endregion

    #region Movement
    [SerializeField]private Transform _playerTransform;
    [SerializeField]private float _speed;

    public PlayerMovement PlayerMovement;
    #endregion

    #region Fighting
    [SerializeField]private float _distance;
    [SerializeField]private float _health;
    [SerializeField]private float _damage;
    [SerializeField]private float _timeBetweenPunches;

    public PlayerFighting PlayerFighting;
    private bool _isDead = false;
    private bool _isWin = false;
    #endregion

    [SerializeField]private Animator _playerAnimator;

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
    }

    private void OnDestroy() 
    {
        EnemySuperPunch.SuperPunchHit -= superPunchHit;
    }

    void Start()
    {   

        loadPlayerData();

        _enemy = EnemySingletone.SingltoneEnemy.GetEnemy();

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

        _currentState = _idleState;
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
        if(_health <= 0 && _isDead == false)
        {
            _health = 0;
            _isDead = true;
            Dead();
            PlayerDead?.Invoke();
        }
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
        //карутина с регдолом
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

}
