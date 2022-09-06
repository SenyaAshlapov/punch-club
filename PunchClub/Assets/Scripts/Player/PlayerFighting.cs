using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerFighting : MonoBehaviour
{
    
    private PlayerAnimation _animation;
    private float _damage;
    private float _timeBetweenPunches;
    private Enemy _enemy;

    private Coroutine _lastRoutine = null;

    public void InitPlayerFighting(Animator playerAnimator, float damage, float timeBetweenPunches, Enemy enemy)
    {
        _animation = new PlayerAnimation(playerAnimator);
        _timeBetweenPunches = timeBetweenPunches;
        _damage = damage;
        _enemy = enemy;
    } 

    public void StartFight()
    {
        Debug.Log("start");
        _animation.AnimateFighting(1);
        _lastRoutine = StartCoroutine(punching());
        
    }

    public void StopFight()
    {
        _animation.AnimateFighting(0);
        StopCoroutine(_lastRoutine);
    }

    private IEnumerator punching()
    {
        float punchCount = 1;
        float totalDamage = 0;

        while (true)
        {
            totalDamage = _damage * punchCount;
            _enemy.GetDamage(totalDamage);
            punchCount += 0.1f;

            yield return new WaitForSeconds(_timeBetweenPunches);
        } 
        yield return null;

    }
}
