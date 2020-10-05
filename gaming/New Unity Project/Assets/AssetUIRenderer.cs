using System.Collections;
using System.Collections.Generic;
using Unity.UIElements.Runtime;
using UnityEngine;
using UnityEngine.UIElements;

public class AssetUIRenderer : MonoBehaviour
{
    public PanelRenderer AssetUI;


    private void OnEnable()
    {
        AssetUI.postUxmlReload = BindAssetUI;
        

    }


    private Label key,items;

    private int keyIndex, itemIndex;

    public AssetManager assetManager;

    Dictionary<string, List<string>> AllAssets;
    List<string> keys;

    // Start is called before the first frame update
    void Start()
    {
        keyIndex = 0;
        keys = assetManager.keys;
        AllAssets = assetManager.getAllAssets();
        getKey(keyIndex);
    }

    string key_text, items_text;
    void getKey(int index)
    {
        print((-1) % 8);
        key.text = keys[index];
       
        itemIndex = 0;
        getItem(key.text, itemIndex);
    }

    void getItem(string key,int i_index)
    {
        items.text = AllAssets[key][i_index];
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    int mod(int x, int m)
    {
        return (x % m + m) % m;
    }


    private IEnumerable<Object> BindAssetUI()
    {
        var root = AssetUI.visualTree;

        key = root.Q<Label>("key_mid_lable");
        items = root.Q<Label>("item_mid_lable");

        var keyLeft = root.Q<Button>("key_left_button");
        if (keyLeft != null)
        {
            keyLeft.clickable.clicked += () =>
            {
                getKey(mod(--keyIndex,assetManager.keys.Count));
            };
        }

        var keyRight = root.Q<Button>("key_right_button");
        if (keyRight != null)
        {
            keyRight.clickable.clicked += () =>
            {
                getKey(mod(++keyIndex, assetManager.keys.Count));
            };
        }

        var itemLeft = root.Q<Button>("item_left_button");
        if (itemLeft != null)
        {
            itemLeft.clickable.clicked += () =>
            {
                getItem(key.text, mod(--itemIndex, AllAssets[key.text].Count));
            };
        }

        var itemRight = root.Q<Button>("item_right_button");
        if (itemRight != null)
        {
            itemRight.clickable.clicked += () =>
            {
                getItem(key.text, mod(++itemIndex, AllAssets[key.text].Count));
            };
        }



        return null;
    }
}
