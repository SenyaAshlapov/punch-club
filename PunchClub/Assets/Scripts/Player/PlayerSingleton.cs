using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSingleton : MonoBehaviour
{
    public static PlayerSingleton SingltonePlayer = new PlayerSingleton();

    public static Player SinglePlayer = null;

    public void SetPlayer(Player newPlayer)
    {
        if(SinglePlayer == null)
            SinglePlayer = newPlayer;
        Debug.Log(SinglePlayer == null);
    }

    public Player GetPlayer()
    {
        Debug.Log(SinglePlayer == null);
        return SinglePlayer;
    }
    

}
