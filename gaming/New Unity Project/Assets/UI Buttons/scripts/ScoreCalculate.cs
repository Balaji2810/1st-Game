
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

    int score;
    void showScore()
    {
        scoreObj.SetActive(true);

        score = GameObject.Find("FileHandler").GetComponent<FileHandler>().load("fames", "temp");//Random.Range(50, 3000);
        
        StartCoroutine(countScore(0, score));
    }

    void highScore()
    {
        if(score>PlayerPrefs.GetInt("highscore",0))
        {
            cup.SetActive(true);
            PlayerPrefs.SetInt("highscore", score);
        }
        else if(PlayerPrefs.GetInt("highscore", 0)>0)
        {
            highscore.SetActive(true);
            highscoretext.text = "High Score\n"+PlayerPrefs.GetInt("highscore").ToString();
        }
        Invoke("getmultiply", 0.25f);
    }

    IEnumerator countScore(int start, int max)
    {   
        yield return new WaitForSeconds(1/(1000));
        start = Mathf.Clamp(start, 0, max);
        fames.text = start.ToString();
        if(start==max)
        {
            Invoke("highScore",0.25f);
        }
        else
        {
            StartCoroutine(countScore(start+11,max));
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
            
            if((int)multiplyText.text[1]>50)
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
