using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement; 

public class UIController : MonoBehaviour
{
    public delegate void UIEvent();
    public static UIEvent StartGame;

    [SerializeField]private GameObject _gamePlayUI;
    [SerializeField]private GameObject _marketUI;
    [SerializeField]private GameObject _failUI;
    [SerializeField]private GameObject _winUI;

    private GameObject _currentUI = null;


    private void Awake() 
    {
        Player.PlayerDead += showFailUI;
        Enemy.EnemyDead += showWinUI;

        CamerasChanger.ChangeCameraToGamePlay += showGamePlayUI;
        CamerasChanger.ChangingCameraToGamePlay += hideAllUI;

        _currentUI = _marketUI;

    }

    private void OnDestroy() 
    {   
        Player.PlayerDead -= showFailUI;
        Enemy.EnemyDead -= showWinUI;

        CamerasChanger.ChangeCameraToGamePlay -= showGamePlayUI;
        CamerasChanger.ChangingCameraToGamePlay -= hideAllUI;
    }

    private void showMarketUI()
    {
        _currentUI.SetActive(false);
        _marketUI.SetActive(true);
        _currentUI = _marketUI;
    }

    private void showGamePlayUI()
    {
        _currentUI.SetActive(false);
        _gamePlayUI.SetActive(true);
        _currentUI = _gamePlayUI;
    }

    private void showFailUI()
    {
        _currentUI.SetActive(false);
        _failUI.SetActive(true);
        _currentUI = _failUI;
    }

    private void showWinUI()
    {
        _currentUI.SetActive(false);
        _winUI.SetActive(true);
        _currentUI = _winUI;
    }

    private void hideAllUI()
    {

        _currentUI.SetActive(false);
    }

    public void RestartGame()
    {
        SceneManager.LoadScene("Game");
    }

    public void StartGamePlay()
    {
        StartGame?.Invoke();
    }
}
