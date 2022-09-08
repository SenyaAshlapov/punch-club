using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerNockdownState : IState
{
    private Player _player;
    private Animator _animator;

    public PlayerNockdownState(Player newPlayer, Animator animator)
    {
        _player = newPlayer;
        _animator = animator;
    }
    
    public void Enter()
    {
        _player.ActivityRagdoll(true);
        _animator.enabled = false;
    }
    public void Loop()
    {

    }
    public void Exit()
    {
        _player.ActivityRagdoll(false);
        _animator.enabled = true;
    }
    
}
