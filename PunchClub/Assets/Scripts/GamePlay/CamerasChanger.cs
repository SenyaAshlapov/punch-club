using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class CamerasChanger : MonoBehaviour
{
    [SerializeField]private float _playCameraSpeed;
    [SerializeField]private float _marketCameraSpeed;

    [SerializeField]private GameObject _marketCamera;
    [SerializeField]private GameObject _gamePlayCamera;

    [SerializeField]private CinemachineVirtualCamera _trackedDollyCamera;
    private CinemachineTrackedDolly _trackedDolly;


    void Start()
    {
        changeCameraToGamePlay();
    }

    private void Awake() 
    {
        Enemy.EnemyDead += changeCameraToVanFace;
    }

    private void OnDestroy() 
    {
        Enemy.EnemyDead -= changeCameraToVanFace;
    }

    private void changeCameraToGamePlay() => StartCoroutine("cameraToGamePlay");
    private void changeCameraToVanFace() => StartCoroutine("cameraToVanFacey");

    private IEnumerator cameraToGamePlay()
    {
        float progress = 0;
        _trackedDolly = _trackedDollyCamera.GetCinemachineComponent<CinemachineTrackedDolly> ();

        while(progress < 3)
        {
            progress += _playCameraSpeed * Time.deltaTime;
            _trackedDolly.m_PathPosition = progress;
            yield return new WaitForSeconds(0.01f);
        }
        _marketCamera.SetActive(false);
        _gamePlayCamera.SetActive(true);

        yield return null;

    }

    private IEnumerator cameraToVanFacey()
    {
        _marketCamera.SetActive(true);
        _gamePlayCamera.SetActive(false);
        float progress = 3;
        _trackedDolly = _trackedDollyCamera.GetCinemachineComponent<CinemachineTrackedDolly> ();

        while(progress > 0)
        {
            progress -= _marketCameraSpeed * Time.deltaTime;
            _trackedDolly.m_PathPosition = progress;
            yield return new WaitForSeconds(0.01f);
        }



        yield return null;

    }


}
