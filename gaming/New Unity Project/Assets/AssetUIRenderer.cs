
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class AssetUIRenderer : MonoBehaviour
{
    
    public GameObject Asset;

    public GameObject main;
    public TextMeshProUGUI key, item,points,cost,crystals;
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

    public string numberMiniFormat(ulong num)
    {
        string value = "0";
        if (num < 10000)
        {
            value = num + "";
        }
        else if (num < 1000000)
        {
            value = (num / 1000f).ToString("F1").Replace(".0", "") + "K";
            print(num + "  " + value);

        }
        else if (num < 1000000000)
        {
            value = (num / 1000000f).ToString("F1").Replace(".0", "") + "M";
        }
        else if (num < 1000000000000)
        {
            value = (num / 1000000000f).ToString("F1").Replace(".0", "") + "B";
        }
        else if (num < 1000000000000000)
        {
            value = (num / 1000000000000f).ToString("F1").Replace(".0", "") + "T";
        }
        else if (num < 1000000000000000000)
        {
            value = (num / 1000000000000000f).ToString("F1").Replace(".0", "") + "q";
        }
        else
        {
            value = (num / 1000000000000000000f).ToString("F1").Replace(".0", "") + "Q";
        }
        return value;
    }

    void getItem(string key,int i_index)
    {
        item.text = AllAssets[key][i_index];

       
       Asset.transform.Find(previousChild).gameObject.SetActive(false);
       previousChild = item.text;
       //points.text = AP.AllObjectValues[previousChild].points.ToString();
       cost.text = numberMiniFormat(AP.AllObjectValues[previousChild].cost)+"\nBuy";
        crystals.text = numberMiniFormat(AP.AllObjectValues[previousChild].crystal)+"\nBuy";
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
        LoadManager.instance.LoadScene("roads");
        //SceneManager.LoadScene("roads", LoadSceneMode.Single);
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
        LoadManager.instance.LoadScene("Game");
        //SceneManager.LoadScene("Game", LoadSceneMode.Single);
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

    public GameObject NotEnoughFames, NotEnoughCrystals, loadFame, loadCrystal;

    public void BuyButton(string name)
    {
        ES3Settings settings = new ES3Settings(ES3.EncryptionType.AES, file.password);
        if (file.exist(previousChild))
        {
            //FileHandler file = GameObject.Find("FileHandler").GetComponent<FileHandler>();
            var currentValue = file.load(name);
            AvailablePrefabs.data temp = (AvailablePrefabs.data)ES3.Load(previousChild, file.filename, settings);
            if (name == "fames")
            {
                if (currentValue >= temp.cost)
                {
                    file.save(name, currentValue - temp.cost);
                    loadFame.GetComponent<load_fame_and_gems>().fun();
                }
                else
                {
                    NotEnoughFames.SetActive(true);
                    NotEnoughCrystals.SetActive(false);
                    return;
                }
            }
            else if (name == "crystals")
            {
                if (currentValue >= temp.crystal)
                {
                    file.save(name, currentValue - temp.crystal);
                    loadCrystal.GetComponent<load_fame_and_gems>().fun();
                }
                else
                {
                    NotEnoughCrystals.SetActive(true);
                    NotEnoughFames.SetActive(false);
                    return;
                }
            }
            else
            {
                Debug.LogWarning("Unknown name for fetching data");
                return;
            }
            temp.status = "active";
            AP.AllObjectValues[previousChild] = temp;
            ES3.Save(previousChild, temp, file.filename, settings);
            getItem(key.text, itemIndex);
        }


    }

}
