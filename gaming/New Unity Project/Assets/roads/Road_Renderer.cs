using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Road_Renderer : MonoBehaviour
{
    
    public GameObject Asset;
    public GameObject main;
    public GameObject info;
    

    public FileHandler file;
    public TextMeshProUGUI key,points,cost;
    public GameObject bottom1, bottom2, bottomEmpty, ActiveButton_on, ActiveButton_Off;



    public RoadsAssets assetManager;
    public AvailablePrefabs AP;

    
    List<string> keys;

    public Dictionary<string, AvailablePrefabs.data> AllObjectValues;

    string previousChild;

    int keyIndex;
    // Start is called before the first frame update
    void Start()
    {
        keyIndex = 0;
        keys = assetManager.keys;
        
        previousChild = keys[0];
        getKey(keyIndex);

    }

    IEnumerator DelayFunction(float time, int index)
    {
        yield return new WaitForSeconds(time);

        getKey(index);
    }

    void getKey(int index)
    {
        try
        {
            string temp = keys[index];


            getItem(index);
        }
        catch
        {
            StartCoroutine(DelayFunction(0.01f, index));
        }

    }

    void getItem(int index)
    {
        key.text = keys[index];


        Asset.transform.Find(previousChild).gameObject.SetActive(false);
        previousChild = key.text;
        points.text = AP.AllObjectValues[previousChild].points.ToString();
        cost.text = AP.AllObjectValues[previousChild].cost.ToString();
        Asset.transform.Find(previousChild).gameObject.SetActive(true);

        if (AP.AllObjectValues[previousChild].status == "disabled" || AP.AllObjectValues[previousChild].status == "none")
        {
            bottom1.SetActive(false);
            bottom2.SetActive(false);
            bottomEmpty.SetActive(true);
        }
        else
        {
            bottomEmpty.SetActive(false);

            if (AP.AllObjectValues[previousChild].status == "not_owned")
            {
                bottom2.SetActive(false);
                bottom1.SetActive(true);
            }
            else
            {
                bottom1.SetActive(false);
                bottom2.SetActive(true);

                if (AP.AllObjectValues[previousChild].status == "active")
                {
                    ActiveButton_Off.SetActive(false);
                    ActiveButton_on.SetActive(true);
                }
                else
                {
                    ActiveButton_on.SetActive(false);
                    ActiveButton_Off.SetActive(true);
                }
            }
        }

    }



    int mod(int x, int m)
    {
        return (x % m + m) % m;
    }

    public void go_back()
    {
        info.SetActive(false);
        main.SetActive(true);
    }

    public void goto_info()
    {
        main.SetActive(false);
        info.SetActive(true);
        
    }

    public void goto_obstacles()
    {
        SceneManager.LoadScene("Asset", LoadSceneMode.Single);
    }

    public void goto_roads()
    {
        
    }

    public void topLeft()
    {
        getKey(mod(--keyIndex, assetManager.keys.Count));
    }

    public void topRight()
    {
        getKey(mod(++keyIndex, assetManager.keys.Count));
    }


    public void goto_home()
    {
        SceneManager.LoadScene("Game", LoadSceneMode.Single);
    }

    public void ActiveButton_On_Clicked()
    {
        ES3Settings settings = new ES3Settings(ES3.EncryptionType.AES, file.password);
        if (file.exist(previousChild))
        {
            AvailablePrefabs.data temp = (AvailablePrefabs.data)ES3.Load(previousChild, file.filename, settings);
            temp.status = "deactive";
            AP.AllObjectValues[previousChild] = temp;
            ActiveButton_on.SetActive(false);
            ActiveButton_Off.SetActive(true);
            ES3.Save(previousChild, temp, file.filename, settings);

        }

    }

    public void ActiveButton_Off_Clicked()
    {
        ES3Settings settings = new ES3Settings(ES3.EncryptionType.AES, file.password);
        if (file.exist(previousChild))
        {
            AvailablePrefabs.data temp = (AvailablePrefabs.data)ES3.Load(previousChild, file.filename, settings);
            temp.status = "active";
            AP.AllObjectValues[previousChild] = temp;
            ActiveButton_Off.SetActive(false);
            ActiveButton_on.SetActive(true);
            ES3.Save(previousChild, temp, file.filename, settings);

        }


    }


}
