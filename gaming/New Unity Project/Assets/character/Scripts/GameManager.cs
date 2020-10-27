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

public class GameManager : MonoBehaviour
{
    public string playerName = "player";
    public bool Startgame = false;
    public FileHandler File;
    
    public CharacterFix fix;
    public GameObject ball;

    public GameObject main,game,info,pause,resume,setting;
    public Text resumeCount;
    public ScrollRect SR;
    public TimeManager timeManage;


    public Text currentPoints;

    public int frameTraget;
    private void Awake()
    {
        PlayerPrefs.SetString("name", playerName);
        Application.targetFrameRate = frameTraget;
        //QualitySettings.vSyncCount = 2;
        
    }
    

    // Update is called once per frame
    public void  updatePoints()
    {
     //currentPoints.text =( GameObject.Find(PlayerPrefs.GetString("name", "player") + " Root").GetComponentInChildren<PlayerStatus>().controller.velocity.z).ToString();//Mathf.Ceil(1.0f / Time.deltaTime).ToString();
     currentPoints.text = File.load("points", "temp").ToString();
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
        SR.verticalNormalizedPosition = 1;
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


    public void goto_resume()
    {
        pause.SetActive(false);
        resume.SetActive(true);
        StartCoroutine(count(3));
    }

    public void goto_home()
    {
        timeManage.pause(false);
        SceneManager.LoadScene("Game", LoadSceneMode.Single);
    }

    IEnumerator count(int type)
    {
        if(type==3)
        {
            resumeCount.text = "3";
            yield return StartCoroutine(WaitForRealSeconds(0.75f));
            StartCoroutine(count(2));
        }
        else if(type==2)
        {
            resumeCount.text = "2";
            yield return StartCoroutine(WaitForRealSeconds(0.75f));
            StartCoroutine(count(1));
        }
        else if(type==1)
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


    public void StartRound()
    {
        File.deleteFile("temp");
        fix.FixCharacter();
        Destroy(ball);
        Startgame = true;
        main.SetActive(false);
        updatePoints();
        game.SetActive(true);
    }


    
}
