using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class CamerasChanger : MonoBehaviour
{
    public delegate void CameraEvent();
    public static CameraEvent ChangeCameraToGamePlay;
    public static CameraEvent ChangingCameraToGamePlay;


    [SerializeField]private float _playCameraSpeed;
    [SerializeField]private float _marketCameraSpeed;

    [SerializeField]private GameObject _marketCamera;
    [SerializeField]private GameObject _gamePlayCamera;

    [SerializeField]private CinemachineVirtualCamera _trackedDollyCamera;
    private CinemachineTrackedDolly _trackedDolly;



    private void Awake() 
    {
        Enemy.EnemyDead += changeCameraToVanFace;
        UIController.StartGame += changeCameraToGamePlay;
    }

    private void OnDestroy() 
    {
        Enemy.EnemyDead -= changeCameraToVanFace;
        UIController.StartGame -= changeCameraToGamePlay;
    }

    private void changeCameraToGamePlay() => StartCoroutine("cameraToGamePlay");
    private void changeCameraToVanFace() => StartCoroutine("cameraToVanFacey");

    private IEnumerator cameraToGamePlay()
    {
        ChangingCameraToGamePlay?.Invoke();
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

        ChangeCameraToGamePlay?.Invoke();

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
