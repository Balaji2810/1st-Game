using System.Collections;
using System.Collections.Generic;
using Unity.UIElements.Runtime;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UIElements;

public class AssetUIRenderer : MonoBehaviour
{
    public PanelRenderer AssetUI,info;
    public GameObject Asset;

    private void OnEnable()
    {
        AssetUI.postUxmlReload = BindAssetUI;
        info.postUxmlReload = Bindinfo;

    }


    private Label key,items,points,cost,title,about;

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
        //AllObjectValues = AP.getObjectDetails(3);
        keyIndex = 0;
        keys = assetManager.keys;
        AllAssets = assetManager.getAllAssets();
        previousChild = AllAssets[keys[0]][0];
        getKey(keyIndex);
        SetScreenEnableState(AssetUI, true);
        SetScreenEnableState(info, false);
    }

    string key_text, items_text;
    void getKey(int index)
    {
        
        key.text = keys[index];
       
        itemIndex = 0;
        getItem(key.text, itemIndex);
    }

    void getItem(string key,int i_index)
    {
        items.text = AllAssets[key][i_index];

       
       Asset.transform.Find(previousChild).gameObject.SetActive(false);
       previousChild = items.text;
       points.text = AP.AllObjectValues[previousChild].points.ToString();
       cost.text = AP.AllObjectValues[previousChild].cost.ToString();
       Asset.transform.Find(previousChild).gameObject.SetActive(true);
       //cost.style.display = DisplayStyle.None;
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
        points = root.Q<Label>("points");
        cost = root.Q<Label>("cost");

        var info_button = root.Q<Button>("info_button");
        if (info_button != null)
        {
            info_button.clickable.clicked += () =>
            {
                            
                StartCoroutine(TransitionScreens(AssetUI, info));
            };
        }

        

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

        var goto_home = root.Q<Button>("goto_home");
        if (goto_home != null)
        {
            goto_home.clickable.clicked += () =>
            {
                SceneManager.LoadScene("Game", LoadSceneMode.Single);
            };
        }


        return null;
    }

    void SetScreenEnableState(PanelRenderer screen, bool state)
    {
        if (state)
        {
            screen.visualTree.style.display = DisplayStyle.Flex;
            screen.enabled = true;
            screen.gameObject.GetComponent<UIElementsEventSystem>().enabled = true;
        }
        else
        {
            screen.visualTree.style.display = DisplayStyle.None;
            screen.enabled = false;
            screen.gameObject.GetComponent<UIElementsEventSystem>().enabled = false;
        }
    }

    private IEnumerable<Object> Bindinfo()
    {
        var root = info.visualTree;

        title = root.Q<Label>("asset_title");
        about = root.Q<Label>("about");

        var back = root.Q<Button>("go_back");
        if (back != null)
        {
            back.clickable.clicked += () =>
            {
                StartCoroutine(TransitionScreens(info, AssetUI));

            };
        }



        return null;
    }

    IEnumerator TransitionScreens(PanelRenderer from, PanelRenderer to)
    {
        from.visualTree.style.display = DisplayStyle.None;
        from.gameObject.GetComponent<UIElementsEventSystem>().enabled = false;

        to.enabled = true;

        yield return null;
        yield return null;
        yield return null;

        to.visualTree.style.display = DisplayStyle.Flex;
        to.visualTree.style.visibility = Visibility.Hidden;
        to.gameObject.GetComponent<UIElementsEventSystem>().enabled = true;

        yield return null;
        yield return null;
        yield return null;

        to.visualTree.style.visibility = Visibility.Visible;

        yield return null;
        yield return null;
        yield return null;
        yield return null;
        yield return null;

        from.enabled = false;
    }

    int lastScreenWidth = 0;
    int lastScreenHeight = 0;

    private void Update()
    {
        if (lastScreenWidth != Screen.width || lastScreenHeight != Screen.height)
        {
            lastScreenWidth = Screen.width;
            lastScreenHeight = Screen.height;

            int size = (lastScreenWidth < lastScreenHeight) ? lastScreenWidth : lastScreenHeight;
            size = (int)(size * 0.125f);

            var ui_list = new List<(string, float)>();
            ui_list.Add(("goto_home", 1));
            ui_list.Add(("info_button", 1));
            ui_list.Add(("key_left_button", 1));
            ui_list.Add(("item_left_button", 1));
            ui_list.Add(("key_right_button", 1));
            ui_list.Add(("item_right_button", 1));
            ui_list.Add(("active_button", 1));
            ui_list.Add(("buy_button", 1.5F));
            ui_list.Add(("empty", 1));
            ui_list.Add(("cost_lable", 2));
            ui_list.Add(("key_mid_lable", 2));
            ui_list.Add(("item_mid_lable", 2));
            ui_list.Add(("cost", 2));
            ui_list.Add(("points_label", 2));
            ui_list.Add(("points", 1));
            ui_list.Add(("active_label", 2));
            

            resizeUI(AssetUI, ui_list, size);
        }

    }

    void resizeUI(PanelRenderer ui, List<(string, float)> elements, int size)
    {
        var radius = size * 0.15f;
        var text = size * 0.5f;
        var border = size * 0.02f;
        for (int i = 0; i < elements.Count; i++)
        {
            ui.visualTree.Q(elements[i].Item1).style.height = size;
            ui.visualTree.Q(elements[i].Item1).style.width = size * elements[i].Item2;
            ui.visualTree.Q(elements[i].Item1).style.borderBottomLeftRadius = radius;
            ui.visualTree.Q(elements[i].Item1).style.borderBottomRightRadius = radius;
            ui.visualTree.Q(elements[i].Item1).style.borderTopLeftRadius = radius;
            ui.visualTree.Q(elements[i].Item1).style.borderTopRightRadius = radius;
            ui.visualTree.Q(elements[i].Item1).style.fontSize = text;
            ui.visualTree.Q(elements[i].Item1).style.borderBottomWidth = border;
            ui.visualTree.Q(elements[i].Item1).style.borderRightWidth = border;
            ui.visualTree.Q(elements[i].Item1).style.borderLeftWidth = border;
            ui.visualTree.Q(elements[i].Item1).style.borderTopWidth = border;
        }
    }
}
