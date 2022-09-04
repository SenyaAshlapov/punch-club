using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    private Player _player;

    private void Awake() 
    {
        EnemySingletone.SingltoneEnemy.SetEnemy(this);
    }
    private void Start() 
    {
        
        _player = PlayerSingleton.SingltonePlayer.GetPlayer();
    }

    private void Update() 
    {
        transform.LookAt(_player.transform, Vector3.up);
    }
}
