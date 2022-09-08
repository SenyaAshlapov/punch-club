using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFightState : IState
{
    private Player _player;
    private Enemy _enemy;
    private Animator _animator;
    private float _damage;

    public EnemyFightState(Player player, Enemy enemy, Animator animator, float damage)
    {
        _player = player;
        _enemy = enemy;
        _animator = animator;
        _damage = damage;
    }

    public void Enter()
    {
        _animator.Play("Main.Fight", 0, 0.25f);
        _enemy.EnemyFighting.StartFight(_player, _damage);
    }

    public void Loop()
    {
        Debug.Log("fight");
        //_enemy.transform.LookAt(_player.transform, Vector3.up);
        _enemy.lookAtPlayer();
    }

    public void Exit()
    {
        _enemy.EnemyFighting.StopFight();
        Debug.Log("stop Fight");
    }
}
