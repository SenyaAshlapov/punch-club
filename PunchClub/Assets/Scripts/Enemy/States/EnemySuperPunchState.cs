using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySuperPunchState : IState
{
    private Animator _animator;
    private float _damage;
    private Enemy _enemy;

    public EnemySuperPunchState(Enemy enemy, Animator animator, float damage)
    {
        _enemy = enemy;
        _damage = damage;
        _animator = animator;
    }

    public void Enter()
    {
        _enemy.EnemySuperPunch.SuperPunch(_animator, _damage);
    }

    public void Loop()
    {

    }

    public void Exit()
    {
    }

}
