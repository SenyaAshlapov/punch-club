using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class CamerasChanger : MonoBehaviour
{
    [SerializeField]private float _speed;

    [SerializeField]private GameObject _marketCamera;
    [SerializeField]private GameObject _gamePlayCamera;

    [SerializeField]private CinemachineVirtualCamera _trackedDollyCamera;
    private CinemachineTrackedDolly _trackedDolly;


    void Start()
    {
        changeCameraToGamePlay();
    }

    private void changeCameraToGamePlay() => StartCoroutine("changeCamera");

    private IEnumerator changeCamera()
    {
        float progress = 0;
        _trackedDolly = _trackedDollyCamera.GetCinemachineComponent<CinemachineTrackedDolly> ();

        while(progress < 3)
        {
            progress += _speed * Time.deltaTime;
            _trackedDolly.m_PathPosition = progress;
            yield return new WaitForSeconds(0.01f);
        }
        _marketCamera.SetActive(false);
        _gamePlayCamera.SetActive(true);

        yield return null;

    }
}
