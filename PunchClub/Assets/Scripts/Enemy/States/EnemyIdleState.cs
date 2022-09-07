using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyIdleState : IState
{
    private Player _player;
    private Enemy _enemy;
    private Animator _animator;

    public EnemyIdleState(Player player, Enemy enemy, Animator animator)
    {
        _player = player;
        _enemy = enemy;
        _animator = animator;
    }

    public void Enter()
    {
       _animator.Play("Main.Idle", 0, 0.25f);
    }

    public void Loop()
    {
        _enemy.transform.LookAt(_player.transform, Vector3.up);
    }
    public void Exit()
    {
        
    }
}
