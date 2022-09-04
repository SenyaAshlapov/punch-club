using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySingletone : MonoBehaviour
{
    public static EnemySingletone SingltoneEnemy = new EnemySingletone();

    public static Enemy SingleEnemy = null;

    public void SetEnemy(Enemy newEnemy)
    {
        if(SingleEnemy == null)
            SingleEnemy = newEnemy;
        Debug.Log(SingleEnemy == null);
    }

    public Enemy GetEnemy()
    {
        Debug.Log(SingleEnemy == null);
        return SingleEnemy;
    }
}
