using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement
{
    private Transform mainCamera;
    private PlayerInput _playerInput;
    private float _speed;
    private Transform _playerTransform;
    private Transform _playerModelTransform;
    private Transform _enemyTransform;
    private Animator _playerAnimator;
    private PlayerAnimation _animation;


    public PlayerMovement(Animator playerAnimator, PlayerInput playerInput, float speed, Transform playerTransform, Transform playerModelTransform, Transform enemyTransform)
    {
        _animation = new PlayerAnimation();

        _playerAnimator = playerAnimator;
        _playerInput = playerInput;
        _speed = speed;
        _playerTransform = playerTransform;
        _playerModelTransform = playerModelTransform;
        _enemyTransform = enemyTransform;

    }

    public void Move()
    {
        mainCamera = Camera.main.transform;
        Vector2 sticDirection = _playerInput.Player.Move.ReadValue<Vector2>();

        Vector3 forwardVector = mainCamera.forward;
        Vector3 rightVector = mainCamera.right;

        forwardVector.y = 0;
        rightVector.y = 0;

        Vector3 moveDirection = sticDirection.x * rightVector.normalized + sticDirection.y * forwardVector.normalized;

        _playerTransform.position += moveDirection * _speed * Time.deltaTime;

        _playerTransform.LookAt(_enemyTransform.transform, Vector3.up);

        _animation.AnimateMovement(sticDirection, _playerAnimator);
    }
}
