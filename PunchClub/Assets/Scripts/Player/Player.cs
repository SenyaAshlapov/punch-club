using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{


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
    [SerializeField]private Transform _playerModelTransform;
    [SerializeField]private float _speed;

    public PlayerMovement PlayerMovement;
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
        _enemy = EnemySingletone.SingltoneEnemy.GetEnemy();

        PlayerMovement = new PlayerMovement(_playerAnimator, _playerInput, _speed, _playerTransform, _playerModelTransform, _enemy.transform);

        _idleState = new PlayerIdleState(this);
        _fightState = new PlayerFightState(this);
        _nockdownState = new PlayerNockdownState(this);

        _currentState = _idleState;
    }

    private void Update() 
    {
        _currentState.Loop();
    }

    private void changeState(IState newState)
    {
        _currentState.Exit();
        newState.Enter();
        _currentState = newState;
    }

}
