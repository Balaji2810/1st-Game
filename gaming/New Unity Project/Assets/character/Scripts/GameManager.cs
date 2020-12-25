using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;
using Unity.UIElements.Runtime;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using System.Runtime.CompilerServices;
using UnityEngine.UI;
using System.Linq.Expressions;
using System;

public class GameManager : MonoBehaviour
{
    public string playerName = "player";
    public bool Startgame = false;
    public FileHandler File;

    public CharacterFix fix;
    public GameObject ball;

    public GameObject main, game, info, pause, resume, setting;
    public Text resumeCount;
    public TimeManager timeManage;


    public Text currentPoints;

    public int frameTraget;
    private void Awake()
    {
        loadPlayer();

       //FPS : 60 
       //Application.targetFrameRate = 200;    
       
    }

    public void buyCrystals(int crystals) 
    {
        ulong currentcrystals = (ulong)GameObject.Find("FileHandler").GetComponent<FileHandler>().load("crystals");
        GameObject.Find("FileHandler").GetComponent<FileHandler>().save("crystals", (ulong)crystals + currentcrystals);
        int temp = PlayerPrefs.GetInt("buyCrystals", 0);
        PlayerPrefs.SetInt("buyCrystals", temp + 1);
    }
    
    

    public GameObject Char;
    public void loadPlayer(float pos = 4)
    {

        GameObject go;
        go = GameObject.Find(PlayerPrefs.GetString("name", null));

        if (go != null)
        {
            Destroy(go);
        }

       
        {
            go = Instantiate(Char);
        }

        go.transform.position = new Vector3(0, 0.55f, pos);
        PlayerPrefs.SetString("name", go.name);
        
    }

    [NonSerializable]
    public float deadLocation;

    
    public void updatePoints()
    {
        //currentPoints.text =( GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>().controller.velocity.z).ToString();//Mathf.Ceil(1.0f / Time.deltaTime).ToString();
        currentPoints.text = numberMiniFormat(File.load("fames", "temp"));
    }



    public void goto_main(GameObject go)
    {
        main.SetActive(true);
        go.SetActive(false);
    }

    public void goto_setting()
    {
        main.SetActive(false);
        setting.SetActive(true);
    }


    public void goto_info()
    {
        main.SetActive(false);
        info.SetActive(true);
        
    }

    public void goto_build()
    {
        SceneManager.LoadScene("Asset", LoadSceneMode.Single);
    }

    public void goto_pause()
    {
        game.SetActive(false);
        pause.SetActive(true);
        timeManage.pause(true);

    }

    public string numberMiniFormat(ulong  num)
    {
        string value = "0";
        if(num<10000)
        {
            value = num + "";
        }
        else if(num< 1000000)
        {
            value = (num / 1000f).ToString("F1").Replace(".0","") + "K";
            print(num + "  " + value);
            
        }
        else if(num < 1000000000)
        {
            value = (num / 1000000f).ToString("F1").Replace(".0", "") + "M";
        }
        else if(num < 1000000000000)
        {
            value = (num / 1000000000f).ToString("F1").Replace(".0", "") + "B";
        }
        else if(num < 1000000000000000)
        {
            value = (num / 1000000000000f).ToString("F1").Replace(".0", "") + "T";
        }
        else if(num < 1000000000000000000)
        {
            value = (num / 1000000000000000f).ToString("F1").Replace(".0", "") + "q";
        }
        else
        {
            value = (num / 1000000000000000000f).ToString("F1").Replace(".0", "") + "Q";
        }
        return value;
    }

    public void goto_resume()
    {
        pause.SetActive(false);
        resume.SetActive(true);
        StartCoroutine(count(3));
    }

    public void ShowInterstitial(int type=1)
    {
        GameObject.Find("ADManager").GetComponent<ADManager>().ShowInterstitial(type);
    }

    public void ShowRewardVideo(int type)
    {
        GameObject.Find("ADManager").GetComponent<ADManager>().ShowRewardVideo(type);
    }

    public void goto_home()
    {
        timeManage.pause(false);
        SceneManager.LoadScene("Game", LoadSceneMode.Single);
    }

    public GameObject shop;
    public void goto_shop()
    {
        main.SetActive(false);
        shop.SetActive(true);
    }

    public GameObject NoAds;
    public void goto_NoAds()
    {
        main.SetActive(false);
        NoAds.SetActive(true);
    }

    IEnumerator count(int type)
    {
        if (type == 3)
        {
            resumeCount.text = "3";
            yield return StartCoroutine(WaitForRealSeconds(0.75f));
            StartCoroutine(count(2));
        }
        else if (type == 2)
        {
            resumeCount.text = "2";
            yield return StartCoroutine(WaitForRealSeconds(0.75f));
            StartCoroutine(count(1));
        }
        else if (type == 1)
        {
            resumeCount.text = "1";
            yield return StartCoroutine(WaitForRealSeconds(0.75f));
            StartCoroutine(count(0));
        }
        else
        {
            resumeCount.text = "Go!!";
            yield return StartCoroutine(WaitForRealSeconds(0.25f));
            resume.SetActive(false);
            game.SetActive(true);
            timeManage.pause(false);
        }






    }

    public static IEnumerator WaitForRealSeconds(float time)
    {
        float start = Time.realtimeSinceStartup;
        while (Time.realtimeSinceStartup < start + time)
        {
            yield return null;
        }
    }

    public FameGenerator FG;
    public void StartRound()
    {
        File.deleteFile("temp");
        fix.FixCharacter();
        Destroy(ball);
        Startgame = true;
        main.SetActive(false);
        updatePoints();
        game.SetActive(true);
        GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<CharacterControl>().CanDie=true;
        FG.startFun();
    }



}

internal class NonSerializableAttribute : Attribute
{
}