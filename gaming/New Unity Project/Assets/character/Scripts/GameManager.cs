using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;
using Unity.UIElements.Runtime;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using System.Runtime.CompilerServices;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public string playerName = "player";
    public bool Startgame = false;
    public FileHandler File;
    public PanelRenderer m_MainMenuScreen;
    public PanelRenderer m_GameScreen;
    public CharacterFix fix;
    public GameObject ball;

    public GameObject info;
    public ScrollRect SR;


    private Label currentPoints;

    private void Awake()
    {
        PlayerPrefs.SetString("name", playerName);
    }
    private void OnEnable()
    {
        m_MainMenuScreen.postUxmlReload = BindMainMenuScreen;
        m_GameScreen.postUxmlReload = BindGameScreen;
        
    }

    


    // Start is called before the first frame update
    void Start()
    {
        GoToMainMenu();
        

       
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

    private void GoToMainMenu()
    {
        SetScreenEnableState(m_MainMenuScreen, true);
        SetScreenEnableState(m_GameScreen, false);
    }


    int lastScreenWidth = 0;
    int lastScreenHeight = 0;

    // Update is called once per frame
    void Update()
    {
        if(currentPoints != null)
        {
           currentPoints.text = File.load("points", "temp").ToString();
        }

        if (lastScreenWidth != Screen.width || lastScreenHeight != Screen.height)
        {
            lastScreenWidth = Screen.width;
            lastScreenHeight = Screen.height;

            int size = (lastScreenWidth < lastScreenHeight) ? lastScreenWidth: lastScreenHeight;
            size = (int) (size * 0.125f);


            var main_ui_list = new List<(string,int)>();
            //main ui elements
            main_ui_list.Add(("settings",1));
            main_ui_list.Add(("shop", 1));
            main_ui_list.Add(("no_ads", 1));
            main_ui_list.Add(("info", 1));
            main_ui_list.Add(("assets", 2));
            main_ui_list.Add(("play", 2));

            var game_ui_list = new List<(string, int)>();
            game_ui_list.Add(("points_back", 2));
            game_ui_list.Add(("points", 1));
            game_ui_list.Add(("pause", 1));

            resizeUI(m_MainMenuScreen, main_ui_list, size);
            resizeUI(m_GameScreen, game_ui_list, size);
        }
    }

    void resizeUI(PanelRenderer ui,List<(string,int)> elements,int size)
    {
        var radius = size * 0.15f;
        var text = size * 0.5f;
        var border = size * 0.02f;
        for(int i=0;i<elements.Count;i++)
        {
            ui.visualTree.Q(elements[i].Item1).style.height = size;
            ui.visualTree.Q(elements[i].Item1).style.width = size*elements[i].Item2;
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

    public void back_main()
    {
        m_MainMenuScreen.visualTree.Q<VisualElement>("main").style.display = DisplayStyle.Flex;
        info.SetActive(false);
    }

    private IEnumerable<Object> BindMainMenuScreen()
    {
        var root = m_MainMenuScreen.visualTree;
        
        

        var startButton = root.Q<UnityEngine.UIElements.Button>("play");
        if (startButton != null)
        {
            startButton.clickable.clicked += () =>
            {
                StartRound();
            };
        }

        var info_b = root.Q<UnityEngine.UIElements.Button>("info");
        if (info_b != null)
        {
            info_b.clickable.clicked += () =>
            {
                root.Q<VisualElement>("main").style.display = DisplayStyle.None;
                info.SetActive(true);
                SR.verticalNormalizedPosition = 1;
            };
        }

        var assets = root.Q<UnityEngine.UIElements.Button>("assets");
        if (assets != null)
        {
            assets.clickable.clicked += () =>
            {
                SceneManager.LoadScene("Asset", LoadSceneMode.Single);
            };
        }



        return null;
    }

    private IEnumerable<Object> BindGameScreen()
    {
        var root = m_GameScreen.visualTree;
        
        currentPoints = root.Q<Label>("points");

        var pause = root.Q<UnityEngine.UIElements.Button>("pause");
        if (pause != null)
        {
            pause.clickable.clicked += () =>
            {
                print("pause clicked");
            };
        }



        return null;
    }


    private void StartRound()
    {
        File.deleteFile("temp");
        fix.FixCharacter();
        Destroy(ball);
        Startgame = true;
        StartCoroutine(TransitionScreens(m_MainMenuScreen, m_GameScreen));
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
}
