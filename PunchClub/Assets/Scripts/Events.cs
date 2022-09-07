using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Events : MonoBehaviour
{
    public delegate void SingleEvent();
    
    public static SingleEvent PauseSuperPunchAnimation;
    public static SingleEvent CreateRedZone;
    public static SingleEvent DeleteRedZone;
    public static SingleEvent CastSuperPunch;
}
