using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySuperPunchState : IState
{
    private Player _player;
    private Enemy _enemy;
    private Animator _animator;

    public EnemySuperPunchState(Player player, Enemy enemy, Animator animator)
    {
        _player = player;
        _enemy = enemy;
        _animator = animator;
    }

    public void Enter()
    {
        Debug.Log("Super punch");
        _enemy.EnemySuperPunch.SuperPunch(_animator);
    }

    public void Loop()
    {

    }

    public void Exit()
    {
        
    }
}
