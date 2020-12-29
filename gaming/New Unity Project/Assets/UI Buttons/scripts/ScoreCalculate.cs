
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ScoreCalculate : MonoBehaviour
{
    public Text fames;
    public TextMeshProUGUI highscoretext,multiplyText;
    public GameObject cup, highscore,multiplyObj,getFames,home,scoreObj;

    int[] multiply = {1,2,3,4,1,2,3,1,2,3,4,1,3,2,4,3,2,3};
    void Start()
    {
        
        Invoke("showScore", 1f);
    }

    ulong score;
    void showScore()
    {
        scoreObj.SetActive(true);

        score = GameObject.Find("FileHandler").GetComponent<FileHandler>().load("fames", "temp");//Random.Range(50, 3000);
        
        StartCoroutine(countScore(0, score));
    }

    void highScore()
    {
        if(score>System.Convert.ToUInt64(PlayerPrefs.GetString("highscore","0")))
        {
            cup.SetActive(true);
            PlayerPrefs.SetString("highscore", score+"");
        }
        else if(PlayerPrefs.GetString("highscore","0")=="0" && score==0)
        {
            highscore.SetActive(true);
            highscoretext.text = "Better Luck Next Time";
        }
        else
        {
            highscore.SetActive(true);
            highscoretext.text = "High Score\n" + PlayerPrefs.GetString("highscore");
        }
        if(score==0)
        {
            StartCoroutine(enableObject(home, 0.5f));
        }
        else
        {
            Invoke("getmultiply", 0.25f);
        }
        
    }

    IEnumerator countScore(ulong start, ulong max)
    {   
        
        
        if(start==max)
        {
            Invoke("highScore",0.25f);
        }
        var percent = max * 0.01f;
        float d = 0;
        while(start!=max)
        {
            d += percent;
            start = (ulong)Mathf.Clamp(d, 0, max);
            fames.text = GameObject.Find("GameManager").GetComponent<GameManager>().numberMiniFormat(start);
            if (start == max)
            {
                Invoke("highScore", 0.25f);
            }
            yield return new WaitForSeconds(4/100);
        }
        

    }

    int mulIndex;
    void getmultiply()
    {
        multiplyObj.SetActive(true);
        mulIndex = Random.Range(0, multiply.Length);
        StartCoroutine(countMultiple(0, 27));

    }

    IEnumerator enableObject(GameObject obj,float delay=2.5f)
    {
        yield return new WaitForSeconds(delay);
        obj.SetActive(true);
    }
    IEnumerator countMultiple(int start, int max)
    {
        yield return new WaitForSeconds(0.1f);

        multiplyText.text = "x"+multiply[(mulIndex+start) % multiply.Length].ToString();
        if (start == max)
        {
            StartCoroutine(enableObject(getFames,0.5f));
            
            if((int)multiplyText.text[1]>50) // 50 represents ASCII code
            {
                getFames.GetComponent<Animation>().Play();
            }
            StartCoroutine(enableObject(home,2));
        }
        else
        {
            StartCoroutine(countMultiple(start + 1, max));
        }
    }

}
