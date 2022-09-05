using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimation 
{

    public void AnimateMovement(Vector2 input, Animator playerAnimator)
    {
        playerAnimator.SetFloat("horizontal", input.x);
        playerAnimator.SetFloat("vertical", input.y);
    }
}
