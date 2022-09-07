using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    private Player _player;

    [SerializeField]private float _health;
    [SerializeField]private float _damage;
    [SerializeField]private float _timeBetweenPunches;
    [SerializeField]private float _distance;
    private bool _isPunch = false;

    [SerializeField]private Animator _enemyAnimator;

    public EnemyFighting EnemyFighting;

    #region States
    private IState _currentState;

    private EnemyIdleState _idleState;
    private EnemyFightState _fightState;
    #endregion

    private void Awake() 
    {
        EnemySingletone.SingltoneEnemy.SetEnemy(this);
    }
    private void Start() 
    {
        _player = PlayerSingleton.SingltonePlayer.GetPlayer();

        _idleState = new EnemyIdleState(_player, this, _enemyAnimator);
        _fightState = new EnemyFightState(_player, this, _enemyAnimator);

        _currentState = _idleState;
    }

    private void Update() 
    {
        _currentState.Loop();

        if(checkDistanceToPlayer() <= _distance && _currentState != _fightState)
        {
            changeState(_fightState);
        }
        if(checkDistanceToPlayer() > _distance && _currentState != _idleState)
        {
            changeState(_idleState);
        }
    }

    public void GetDamage(float damage)
    {
        _health -= damage;
        Debug.Log(_health);
    }
        
    private void changeState(IState newState)
    {
        _currentState.Exit();
        newState.Enter();
        _currentState = newState;
    }


    private float checkDistanceToPlayer()
    {
        float distance =  Vector3.Distance(_player.transform.position, transform.position);
        return distance;
    }


}
