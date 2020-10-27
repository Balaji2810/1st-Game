using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class settings_button : MonoBehaviour
{
    public string traget,animationName;

    public enum play {off=0,on=1};
    public play status =play.on;
    private void OnEnable()
    {
        if(PlayerPrefs.GetInt(traget, -1)==-1)
        {
            PlayerPrefs.SetInt(traget, (int)status);
        }

        palyAnimation();
    }

    void palyAnimation()
    {
        if (PlayerPrefs.GetInt(traget) == 1)
        {
            gameObject.GetComponent<Animation>().Play(animationName + "_on");
        }
        else
        {
            gameObject.GetComponent<Animation>().Play(animationName + "_off");
        }
    }

    public void onClick()
    {
        if (PlayerPrefs.GetInt(traget) == 1)
        {
            PlayerPrefs.SetInt(traget, 0);
            FindObjectOfType<AudioManager>().Stop("Theme");
        }
        else
        {
            PlayerPrefs.SetInt(traget, 1);
            FindObjectOfType<AudioManager>().Play("Theme");
        }

        palyAnimation();
    }
}
