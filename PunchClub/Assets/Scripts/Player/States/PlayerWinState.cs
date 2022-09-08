using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerWinState : IState
{
    private Animator _animator;

    public PlayerWinState(Animator animator)
    {
        _animator = animator;
    }
    
    public void Enter()
    {
        Debug.Log("win");
        _animator.Play("Main.Win", 0, 0.5f);
    }

    public void Loop()
    {

    }

    public void Exit()
    {

    }
}
