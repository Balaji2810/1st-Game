using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class slide_button : MonoBehaviour
{
    public Animation animation;
    bool slide = false;
    

    public void sliding()
    {
        if (slide)
        {
            slide = false;
            animation.Play("slide_back");
        }
        else
        {
            slide = true;
            animation.Play("slide");
        }
    }
}
