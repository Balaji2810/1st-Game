using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UI.ProceduralImage;

public class Continue : MonoBehaviour
{
    public GameObject score;
    public float delay = 6;
    public GameObject close, crystal,video,notEnoughCrystals,RoadGen;
    public Color fade;
    bool interrupt = false;
    void Update()
    {
        if(delay<0&&!interrupt)
        {
            gotoScore();
        }
        delay -= Time.deltaTime;
    }
    public GameObject matrialManager;
    public void CharacterContinue()
    { 
        float pos =10;
        GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<CharacterControl>().SpeedMod=3;
        var temp = new List<float>();
        foreach (Transform child in RoadGen.transform)
        {
            if(child.gameObject.activeSelf)
            {
               temp.Add(child.position.z);
               
            }
        }
        temp.Sort();
        GameObject.Find("GameManager").GetComponent<GameManager>().Startgame = false;
        GameObject.Find("GameManager").GetComponent<GameManager>().loadPlayer(temp[0]+pos);
        matrialManager.SetActive(true);
        gameObject.SetActive(false);
        
    }

    public void videoButton()
    {
        video.GetComponent<Button>().interactable = false;
        video.GetComponent<ProceduralImage>().color = fade;     
        stop();
        GameObject.Find("ADManager").GetComponent<ADManager>().ShowRewardVideo(1);
    }

    public void crystalButton()
    {
        crystal.GetComponent<Button>().interactable = false;
        crystal.GetComponent<ProceduralImage>().color = fade;
        ulong currentCrystal = GameObject.Find("FileHandler").GetComponent<FileHandler>().load("crystals");
        if(currentCrystal<10)
        {
            notEnoughCrystals.SetActive(true);
        }
        else
        {
            GameObject.Find("FileHandler").GetComponent<FileHandler>().save("crystals", currentCrystal-10);
            
            CharacterContinue();
            
        }
        stop();
    }

    public void stop()
    {
        //count.SetActive(false);
        close.SetActive(true);
        interrupt = true;
    }

    public void gotoScore()
    {
        score.SetActive(true);
        gameObject.SetActive(false);
    }
}
