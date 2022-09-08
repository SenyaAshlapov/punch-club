using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerWaitState : IState
{
    private Animator _animator;

    public PlayerWaitState(Animator animator)
    {
        _animator = animator;
    }
    
    public void Enter()
    {
        _animator.Play("Main.Wait", 0, 0);
    }
    public void Loop()
    {

    }
    public void Exit()
    {

    }
}
