using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destroyer : MonoBehaviour
{
    [SerializeField]private float _timeToDestroy;
    
    void Start()
    {
        StartCoroutine("destroy");
    }

    private IEnumerator destroy()
    {
        yield return new WaitForSeconds(_timeToDestroy);
        Destroy(this.gameObject);
    }
}
