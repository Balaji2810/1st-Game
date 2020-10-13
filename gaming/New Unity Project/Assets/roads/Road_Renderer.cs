using System.Collections;
using System.Collections.Generic;
using Unity.UIElements.Runtime;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class Road_Renderer : MonoBehaviour
{
    public PanelRenderer AssetUI;
    public GameObject Asset;

    public GameObject info;
    public ScrollRect SR;




    private void OnEnable()
    {

        AssetUI.postUxmlReload = BindAssetUI;


    }


    private Label key, items, points, cost, title, about;

    private int keyIndex, itemIndex;

    public RoadsAssets assetManager;
    public AvailablePrefabs AP;

    
    List<string> keys;

    public Dictionary<string, AvailablePrefabs.data> AllObjectValues;

    string previousChild;

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

        if (AP.AllObjectValues[previousChild].status == "disabled")
        {
            AssetUI.visualTree.Q("active_label").style.visibility = Visibility.Hidden;
            AssetUI.visualTree.Q("active_button_on").style.visibility = Visibility.Hidden;
            AssetUI.visualTree.Q("empty").style.visibility = Visibility.Hidden;
            AssetUI.visualTree.Q("cost_lable").style.visibility = Visibility.Hidden;
            AssetUI.visualTree.Q("cost").style.visibility = Visibility.Hidden;
            AssetUI.visualTree.Q("buy_button").style.visibility = Visibility.Hidden;
            AssetUI.visualTree.Q("active_button_off").style.visibility = Visibility.Hidden;
        }
        else
        {
            AssetUI.visualTree.Q("active_label").style.visibility = Visibility.Visible;
            AssetUI.visualTree.Q("active_button_on").style.visibility = Visibility.Visible;
            AssetUI.visualTree.Q("empty").style.visibility = Visibility.Visible;
            AssetUI.visualTree.Q("cost_lable").style.visibility = Visibility.Visible;
            AssetUI.visualTree.Q("cost").style.visibility = Visibility.Visible;
            AssetUI.visualTree.Q("buy_button").style.visibility = Visibility.Visible;
            AssetUI.visualTree.Q("active_button_off").style.visibility = Visibility.Visible;
        }

        if (AP.AllObjectValues[previousChild].status == "not_owned")
        {
            AssetUI.visualTree.Q("active_label").style.display = DisplayStyle.None;
            AssetUI.visualTree.Q("active_button_on").style.display = DisplayStyle.None;
            AssetUI.visualTree.Q("active_button_off").style.display = DisplayStyle.None;
            AssetUI.visualTree.Q("empty").style.display = DisplayStyle.None;

            AssetUI.visualTree.Q("cost_lable").style.display = DisplayStyle.Flex;
            AssetUI.visualTree.Q("cost").style.display = DisplayStyle.Flex;
            AssetUI.visualTree.Q("buy_button").style.display = DisplayStyle.Flex;
        }
        else
        {
            AssetUI.visualTree.Q("cost_lable").style.display = DisplayStyle.None;
            AssetUI.visualTree.Q("cost").style.display = DisplayStyle.None;
            AssetUI.visualTree.Q("buy_button").style.display = DisplayStyle.None;

            if (AP.AllObjectValues[previousChild].status == "active")
            {
                AssetUI.visualTree.Q("active_button_off").style.display = DisplayStyle.None;
                AssetUI.visualTree.Q("active_button_on").style.display = DisplayStyle.Flex;
            }
            else
            {
                AssetUI.visualTree.Q("active_button_on").style.display = DisplayStyle.None;
                AssetUI.visualTree.Q("active_button_off").style.display = DisplayStyle.Flex;
            }

            AssetUI.visualTree.Q("active_label").style.display = DisplayStyle.Flex;
            AssetUI.visualTree.Q("empty").style.display = DisplayStyle.Flex;
        }

    }



    int mod(int x, int m)
    {
        return (x % m + m) % m;
    }

    public void go_back()
    {
        info.SetActive(false);
        SetScreenEnableState(AssetUI, true);
    }

    private IEnumerable<Object> BindAssetUI()
    {
        var root = AssetUI.visualTree;

        key = root.Q<Label>("key_mid_lable");
        items = root.Q<Label>("item_mid_lable");
        points = root.Q<Label>("points");
        cost = root.Q<Label>("cost");

        var info_button = root.Q<UnityEngine.UIElements.Button>("info_button");
        if (info_button != null)
        {
            info_button.clickable.clicked += () =>
            {
                SetScreenEnableState(AssetUI, false);
                info.SetActive(true);
                SR.verticalNormalizedPosition = 1;
            };
        }

        var tech = root.Q<UnityEngine.UIElements.Button>("tech");
        if (tech != null)
        {
            tech.clickable.clicked += () =>
            {
                root.Q<VisualElement>("outter").style.display = DisplayStyle.None;
                root.Q<VisualElement>("tech_options").style.display = DisplayStyle.Flex;
            };
        }

        var goto_obstacles = root.Q<UnityEngine.UIElements.Button>("goto_obstacles");
        if (goto_obstacles != null)
        {
            goto_obstacles.clickable.clicked += () =>
            {
                SceneManager.LoadScene("Asset", LoadSceneMode.Single);
            };
        }

        var roads = root.Q<UnityEngine.UIElements.Button>("goto_roads");
        if (roads != null)
        {
            roads.clickable.clicked += () =>
            {
                root.Q<VisualElement>("outter").style.display = DisplayStyle.Flex;
                root.Q<VisualElement>("tech_options").style.display = DisplayStyle.None;
            };
        }

        var keyLeft = root.Q<UnityEngine.UIElements.Button>("key_left_button");
        if (keyLeft != null)
        {
            keyLeft.clickable.clicked += () =>
            {
                getKey(mod(--keyIndex, assetManager.keys.Count));
            };
        }

        var keyRight = root.Q<UnityEngine.UIElements.Button>("key_right_button");
        if (keyRight != null)
        {
            keyRight.clickable.clicked += () =>
            {
                getKey(mod(++keyIndex, assetManager.keys.Count));
            };
        }

        

        var goto_home = root.Q<UnityEngine.UIElements.Button>("goto_home");
        if (goto_home != null)
        {
            goto_home.clickable.clicked += () =>
            {
                SceneManager.LoadScene("Game", LoadSceneMode.Single);

            };
        }

        var on = root.Q<UnityEngine.UIElements.Button>("active_button_on");
        var off = root.Q<UnityEngine.UIElements.Button>("active_button_off");

        if (on != null)
        {
            on.clickable.clicked += () =>
            {
                on.style.display = DisplayStyle.None;
                off.style.display = DisplayStyle.Flex;
            };
        }


        if (off != null)
        {
            off.clickable.clicked += () =>
            {
                off.style.display = DisplayStyle.None;
                on.style.display = DisplayStyle.Flex;
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

            var ui_list = new List<(string, float, float)>();
            //ui_list.Add(("goto_home", 1, 1));
            ui_list.Add(("goto_home", 1, 1));
            ui_list.Add(("info_button", 1, 1));
            ui_list.Add(("key_left_button", 1, 1));
            ui_list.Add(("key_right_button", 1, 1));
            ui_list.Add(("active_button_on", 1, 1));
            ui_list.Add(("active_button_off", 1, 1));
            ui_list.Add(("buy_button", 1, 1));
            ui_list.Add(("empty", 1, 1));
            ui_list.Add(("cost_lable", 1, 1));
            ui_list.Add(("key_mid_lable", 2, 1));
            ui_list.Add(("cost", 2, 1));
            ui_list.Add(("points_label", 2, 1));
            ui_list.Add(("points", 1, 1));
            ui_list.Add(("active_label", 2, 1));
            ui_list.Add(("tech", 1, 1));
            ui_list.Add(("goto_roads", 3, 1));
            ui_list.Add(("goto_obstacles", 3, 1));


            resizeUI(1, ui_list, size);


        }

    }

    void resizeUI(int type, List<(string, float, float)> elements, int size)
    {
        try
        {
            PanelRenderer ui;
            
            
                ui = AssetUI;
            
            var radius = size * 0.15f;
            var text = size * 0.5f;
            var border = size * 0.02f;
            for (int i = 0; i < elements.Count; i++)
            {
                ui.visualTree.Q(elements[i].Item1).style.height = size * elements[i].Item3;
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
        catch
        {
            StartCoroutine(delay(type, elements, size, 1));
        }
    }



    IEnumerator delay(int type, List<(string, float, float)> elements, int size, int opt)
    {
        yield return new WaitForSeconds(0.1f);

        if (opt == 1)
        {
            resizeUI(type, elements, size);
        }
        else
        {
            resizeUI(type, elements, size);
        }
    }
}
