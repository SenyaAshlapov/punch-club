using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour
{
    [SerializeField]private Image _hpBarImage;
    [SerializeField]private Text _hpText;
    [SerializeField]private GameObject _hpBar;
    
    private float _maxHp;

    private void Awake()
    {
        Player.PlayerDead += hideHpBar;
        Enemy.EnemyDead += hideHpBar;
        CamerasChanger.ChangeCameraToGamePlay += showHpBar;
    }

    private void OnDestroy()
    {
        Player.PlayerDead -= hideHpBar;
        Enemy.EnemyDead -= hideHpBar;
        CamerasChanger.ChangeCameraToGamePlay -= showHpBar;
    }

    public void InitHpUI(float maxHp)
    {
        _maxHp = maxHp;
        _hpText.text = _maxHp.ToString();
    }

    public void UpdateHpUI(float newHp)
    {
        float newAmount = newHp/_maxHp;

        _hpBarImage.fillAmount = newAmount;
        _hpText.text = newHp.ToString();

    }
    private void showHpBar()
    {
        _hpBar.SetActive(true);
    }

    private void hideHpBar()
    {
        _hpBar.SetActive(false);
    }
}
