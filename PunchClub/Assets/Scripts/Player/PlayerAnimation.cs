using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimation 
{
    private int _fightLayerIndex;
    private Animator _currentAnimator;

    public PlayerAnimation(Animator animator)
    {
        _currentAnimator = animator;
        _fightLayerIndex = _currentAnimator.GetLayerIndex("PlayerUpper");
    }

    public void AnimateMovement(Vector2 input)
    {
        _currentAnimator.SetFloat("horizontal", input.x);
        _currentAnimator.SetFloat("vertical", input.y);
    }

    public void AnimateFighting(float layerWeight)
    {
        _currentAnimator.SetLayerWeight(_fightLayerIndex, layerWeight);
    }
    
}
