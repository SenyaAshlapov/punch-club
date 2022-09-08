using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Market : MonoBehaviour
{
    [SerializeField]private LevelSaves _levelSaves;

    [SerializeField]private Text _moneyText;


    private void Start() 
    {
        updateMoney();
    }
    public void LevelUpHealth()
    {
        PlayerData data = _levelSaves.LoadPlayerData();

        if(data.Money >= 100)
        {
            data.Money -= 100;
            data.PlayerHealth += 10;

            _levelSaves.SavePlayerData(data);
            updateMoney();
        }
    }
    public void LevelUpDamage()
    {
        PlayerData data = _levelSaves.LoadPlayerData();

        if(data.Money >= 100)
        {
            data.Money -= 100;
            data.PlayerDamage += 10;
            
            _levelSaves.SavePlayerData(data);
            updateMoney();
        }
    }

    private void updateMoney()
    {
        PlayerData data = _levelSaves.LoadPlayerData();

        _moneyText.text = data.Money.ToString();
    }
}
