using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraLooker : MonoBehaviour
{
    [SerializeField]private Transform _objectTransform;
    private void Update() 
    {  
        _objectTransform.LookAt(Camera.main.transform.position);
        _objectTransform.Rotate(0,180,0);
    }
}
