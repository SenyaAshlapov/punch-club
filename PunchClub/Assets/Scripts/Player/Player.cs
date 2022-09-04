using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    //[SerializeField]private CharacterController _playerChareacterController;
    [SerializeField]private Transform _playerTransform;
    [SerializeField]private Rigidbody _playerRigidBody;
    [SerializeField]private float _speed;

    private Transform mainCamera;

    private Enemy _enemy;
    private PlayerInput _playerInput;

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
    }

    private void Update() {
        transform.LookAt(_enemy.transform, Vector3.up);
        movment();
    }

    private void movment()
    { 
        mainCamera = Camera.main.transform;

        Vector2 sticDirection = _playerInput.Player.Move.ReadValue<Vector2>();
        float distance = Vector3.Distance(_enemy.transform.position, _playerTransform.position);

        Vector3 forwardVector = mainCamera.forward;
        Vector3 rightVector = mainCamera.right;

        forwardVector.y = 0;
        rightVector.y = 0;

        Vector3 moveDirection = sticDirection.x * rightVector.normalized + sticDirection.y * forwardVector.normalized;

        //_playerRigidBody.velocity = moveDirection * _speed;
        _playerTransform.position += moveDirection * _speed * Time.deltaTime;
    }
}
