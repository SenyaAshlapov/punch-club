using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{

    [SerializeField]private LevelSaves _levelSaves;
    private Transform mainCamera;

    private Enemy _enemy;
    private PlayerInput _playerInput;

    #region States
    private IState _currentState;

    private PlayerIdleState _idleState;
    private PlayerFightState _fightState;
    private PlayerNockdownState _nockdownState;
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
        PlayerSingleton.SingltonePlayer.SetPlayer(this);

        _playerInput = new PlayerInput();
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
        _nockdownState = new PlayerNockdownState(this);

        _currentState = _idleState;
    }

    private void Update() 
    {
        _currentState.Loop();

        if(checkDistanceToEnemy() <= _distance && _currentState != _fightState)
        {
            changeState(_fightState);
        }
        if(checkDistanceToEnemy() > _distance && _currentState != _idleState)
        {
            changeState(_idleState);
        }   
    }

    public void GetDamage(float damage)
    {
        _health -= damage;
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

}
