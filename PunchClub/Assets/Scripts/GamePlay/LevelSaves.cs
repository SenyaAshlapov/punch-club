using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;

using UnityEngine;

public class LevelSaves : MonoBehaviour
{
    private string _savePlayerDataPath;
    private string _savePlayerDataFile = "PlayerSaves.json";

    [SerializeField]private int _defaultDamage;
    [SerializeField]private int _defaultHealth;
    
    public PlayerData LoadPlayerData()
    {
        _savePlayerDataPath = Path.Combine(Application.dataPath, _savePlayerDataFile);
        PlayerData player = new PlayerData();

        if(!File.Exists(_savePlayerDataPath))
        {          
            player.Level = 1;
            player.PlayerHealth = _defaultHealth;
            player.PlayerDamage = _defaultDamage;
            player.Money = 0;
       
            SavePlayerData(player);         
        }

        string playerJsonData = File.ReadAllText(_savePlayerDataPath);
        player = JsonUtility.FromJson<PlayerData>(playerJsonData);

        return player;
    }
    
    public void SavePlayerData(PlayerData playerData)
    {
        string playerJsonData = JsonUtility.ToJson(playerData, true);

        try
        {
            File.WriteAllText(_savePlayerDataPath, playerJsonData);
        } 
        catch(Exception exception)
        {
            Debug.Log(exception);
        }
    }
}

[System.Serializable]
public struct PlayerData
{
    public int Level;
    public int PlayerHealth;
    public int PlayerDamage;
    public int Money;
}
