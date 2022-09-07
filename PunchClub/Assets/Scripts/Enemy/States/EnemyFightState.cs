using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFightState : IState
{
    private Player _player;
    private Enemy _enemy;
    private Animator _animator;

    public EnemyFightState(Player player, Enemy enemy, Animator animator)
    {
        _player = player;
        _enemy = enemy;
        _animator = animator;
    }

    public void Enter()
    {
        _animator.Play("Main.Fight", 0, 0.25f);
        _enemy.EnemyFighting.StartFight(_player);
    }

    public void Loop()
    {
        _enemy.transform.LookAt(_player.transform, Vector3.up);
    }

    public void Exit()
    {
        _enemy.EnemyFighting.StopFight();
    }
}
