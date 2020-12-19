
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class AssetUIRenderer : MonoBehaviour
{
    
    public GameObject Asset;

    public GameObject main;
    public TextMeshProUGUI key, item,points,cost;
    public GameObject info;
    

    public FileHandler file;
    public GameObject bottom1, bottom2,bottomEmpty,ActiveButton_on,ActiveButton_Off;
    


    private int keyIndex, itemIndex;

    public AssetManager assetManager;
    public AvailablePrefabs AP;

    Dictionary<string, List<string>> AllAssets;
    List<string> keys;

    public Dictionary<string, AvailablePrefabs.data> AllObjectValues;

    string previousChild;

    // Start is called before the first frame update
    void Start()
    {   
        keyIndex = 0;
        keys = assetManager.keys;
        AllAssets = assetManager.getAllAssets();
        previousChild = AllAssets[keys[0]][0];
        getKey(keyIndex);
        
    }

   

    void getKey(int index)
    {
      
            key.text = keys[index];

            itemIndex = 0;
            getItem(key.text, itemIndex);
       
    }

    void getItem(string key,int i_index)
    {
        item.text = AllAssets[key][i_index];

       
       Asset.transform.Find(previousChild).gameObject.SetActive(false);
       previousChild = item.text;
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
        
     }

    public void goto_roads()
    {
        SceneManager.LoadScene("roads", LoadSceneMode.Single);
    }

    public void topLeft()
    {
        getKey(mod(--keyIndex, assetManager.keys.Count));
    }

    public void topRight()
    {
        getKey(mod(++keyIndex, assetManager.keys.Count));
    }

    public void midLeft()
    {
        getItem(key.text, mod(--itemIndex, AllAssets[key.text].Count));
    }

    public void midRight()
    {
        getItem(key.text, mod(++itemIndex, AllAssets[key.text].Count));
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
