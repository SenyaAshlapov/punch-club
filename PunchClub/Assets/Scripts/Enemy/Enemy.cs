using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField]private float _health;
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

    public void GetDamage(float damage)
    {
        _health -= damage;
        Debug.Log(_health);
    }
}
