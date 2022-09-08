using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyRestState : IState
{
    private Animator _animator;

    public EnemyRestState( Animator animator)
    {
        _animator = animator;
    }

    public void Enter()
    {
        _animator.Play("Main.Rest",0,0);
    }

    public void Loop()
    {

    }

    public void Exit()
    {
    }
}
