using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerFightState : IState
{
    private Player _player;

    public PlayerFightState(Player newPlayer)
    {
        _player = newPlayer;
    }
    
    public void Enter()
    {

    }
    public void Loop()
    {
        _player.PlayerMovement.Move();
    }
    public void Exit()
    {

    }
}
