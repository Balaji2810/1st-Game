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

    public GameObject go;
    public void onClick()
    {
        if (PlayerPrefs.GetInt(traget) == 1)
        {
            PlayerPrefs.SetInt(traget, 0);
            
            switch(traget)
            {
                case "music":
                    {
                        FindObjectOfType<AudioManager>().Stop("Theme");
                    }
                    break;
                case "60fps":
                    {
                        Application.targetFrameRate = 30;
                    }
                    break;
                case "showFPS":
                case "fog&others":
                    {
                        go.SetActive(false);
                    }
                    break;
                case "HDCharacter":
                    {
                        GameObject go1;
                        go1 = GameObject.Find(PlayerPrefs.GetString("name", null));

                        if (go1 != null)
                        {
                            Destroy(go1);
                        }
                        PlayerPrefs.SetInt("HDCharacter",0);
                        GameObject.Find("GameManager").GetComponent<GameManager>().loadPlayer();
                    }
                    break;
            }
        }
        else
        {
            PlayerPrefs.SetInt(traget, 1);
            switch (traget)
            {
                case "music":
                    {
                        FindObjectOfType<AudioManager>().Play("Theme");
                    }
                    break;
                case "60fps":
                    {
                        Application.targetFrameRate = 60;
                    }
                    break;
                case "showFPS":
                case "fog&others":
                    {
                        go.SetActive(true);
                    }
                    break;
                case "HDCharacter":
                    {
                        GameObject go1;
                        go1 = GameObject.Find(PlayerPrefs.GetString("name", null));

                        if (go1 != null)
                        {
                            Destroy(go1);
                        }
                        PlayerPrefs.SetInt("HDCharacter", 1);
                        GameObject.Find("GameManager").GetComponent<GameManager>().loadPlayer();
                    }
                    break;
            }
            
        }

        palyAnimation();
    }
}
