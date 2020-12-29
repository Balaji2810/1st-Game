using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class settings_button : MonoBehaviour
{
    public string traget,animationName;

    public enum play {off=0,on=1,low,mid,high,swipe,drag};
    public play status =play.on;
    private void OnEnable()
    {
        if((int)status>1)
        {
            if (status==play.swipe || status==play.drag)
            {
                
                if (PlayerPrefs.GetInt(traget, -1) == -1)
                {
                    switch (status)
                    {
                        case play.swipe:
                            PlayerPrefs.SetInt(traget, 0);
                            break;
                        case play.drag:
                            PlayerPrefs.SetInt(traget, 1);
                            break;
                    }
                }
                
                GetComponent<TMP_Dropdown>().value = PlayerPrefs.GetInt(traget);
                GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<CharacterControl>().MoveType();
            }
            else
            {
                if (PlayerPrefs.GetFloat(traget, 0f) == 0f)
                {
                    //PlayerPrefs.SetFloat(traget, 0.02f);
                    switch (status)
                    {
                        case play.low:
                            PlayerPrefs.SetFloat(traget, 0.02f);
                            break;
                        case play.mid:
                            PlayerPrefs.SetFloat(traget, 0.005f);
                            break;
                        case play.high:
                            PlayerPrefs.SetFloat(traget, 0.0025f);
                            break;
                    }
                }
                switch (PlayerPrefs.GetFloat(traget))
                {
                    case 0.02f:
                        GetComponent<TMP_Dropdown>().value = 0;
                        
                        break;
                    case 0.005f:
                        GetComponent<TMP_Dropdown>().value = 1;
                        
                        break;
                    case 0.0025f:
                        GetComponent<TMP_Dropdown>().value = 3;
                       
                        break;
                }
                Time.fixedDeltaTime = PlayerPrefs.GetFloat(traget);
            }

        }
        else
        {
            if (PlayerPrefs.GetInt(traget, -1) == -1)
            {
                PlayerPrefs.SetInt(traget, (int)status);
            }

            palyAnimation();
        }
        
    }

    public void Control()
    {
        
        PlayerPrefs.SetInt(traget, GetComponent<TMP_Dropdown>().value);
        GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<CharacterControl>().MoveType();
    }

    public void Physcis()
    {
       switch(GetComponent<TMP_Dropdown>().value)
        {
            case 0:
                PlayerPrefs.SetFloat(traget,0.02f);
                break;
            case 1:
                PlayerPrefs.SetFloat(traget,0.005f);
                break;
            case 2:
                PlayerPrefs.SetFloat(traget,0.0025f);
                break;
        }
        Time.fixedDeltaTime = PlayerPrefs.GetFloat(traget);
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
                case "glow":
                    {
                        go.GetComponent<CameraSettings>().settings();
                    }
                    break;
                case "fog&others":
                    {
                        go.SetActive(false);
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
                case "glow":
                    {
                        go.GetComponent<CameraSettings>().settings();
                    }
                    break;
                case "fog&others":
                    {
                        go.SetActive(true);
                    }
                    break;
                
            }
            
        }

        palyAnimation();
    }
}
