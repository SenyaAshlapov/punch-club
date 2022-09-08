using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFighting : MonoBehaviour
{
    private float _damage;
    [SerializeField]private float _timeBetweenPunches;
    
    public void StartFight(Player player, float damage)
    {
        _damage = damage;
        StartCoroutine(fight(player));
    }

    public void StopFight()
    {
        StopCoroutine("fight");
    }

    private IEnumerator fight(Player player)
    {
        while(true)
        {
            player.GetDamage(_damage);

            yield return new WaitForSeconds(_timeBetweenPunches);
        }
    }
}
