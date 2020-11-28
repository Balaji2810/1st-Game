using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class slide_button : MonoBehaviour
{
    public Animation anim;
    bool slide = false;

    //-133.55
    public void sliding()
    {
        if (slide)
        {
            slide = false;
            anim.Play("slide_back");
        }
        else
        {
            slide = true;
            anim.Play("slide");
        }
    }
}
