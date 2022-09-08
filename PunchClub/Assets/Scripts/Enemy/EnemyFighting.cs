using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFighting : MonoBehaviour
{
    private float _damage;
    [SerializeField]private float _timeBetweenPunches;
    private bool _isCanFight = false;
    
    public void StartFight(Player player, float damage)
    {
        _isCanFight = true;
        _damage = damage;
        StartCoroutine(fight(player));
    }

    public void StopFight()
    {
        _isCanFight = false;
        StopCoroutine("fight");
        Debug.Log("fight is stoped");
    }

    private IEnumerator fight(Player player)
    {
        while(_isCanFight == true)
        {
            player.GetDamage(_damage);

            yield return new WaitForSeconds(_timeBetweenPunches);
        }
    }
}
