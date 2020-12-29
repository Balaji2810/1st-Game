using System;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ADManager : MonoBehaviour
{

	public enum Device {Android,IOS,WEB,None};

	public Device CurrentDevice = Device.None;
	public string Android_Key, IOS_Key, Web_Key;
	public static ADManager instance;

	

	string App_Key;


	void Awake()
	{
		if (instance != null)
		{
			Destroy(gameObject);
		}
		else
		{
			instance = this;
			DontDestroyOnLoad(gameObject);
		}


		if (CurrentDevice==Device.None)
        {
			App_Key = "unexpected_platform";
			return;
        }
		if(CurrentDevice==Device.Android)
        {
			App_Key = Android_Key;
        }
		if(CurrentDevice == Device.IOS)
        {
			App_Key = IOS_Key;
        }

		IronSource.Agent.validateIntegration();
		IronSource.Agent.init(App_Key);

		//ShowBanner();
	}

	void OnEnable()
	{

		//Add Rewarded Video Events
		IronSourceEvents.onRewardedVideoAdRewardedEvent += RewardedVideoAdRewardedEvent;

		// Add Interstitial Events
		IronSourceEvents.onInterstitialAdReadyEvent += InterstitialAdReadyEvent;

	}
	void InterstitialAdReadyEvent()
	{
		if (IronSource.Agent.isInterstitialReady()&& !GameObject.Find("GameManager").GetComponent<GameManager>().Startgame)
		{

			IronSource.Agent.showInterstitial();
		}
	}

	
	void RewardedVideoAdRewardedEvent(IronSourcePlacement ssp)
	{

		RewardVideoPlayed = true;
		if (rType == 2)
		{
			GameObject multiply = GameObject.Find("multiply");
			GameObject getFame = GameObject.Find("get fames");
			getFame.SetActive(false);
			ulong mul = ulong.Parse(multiply.GetComponent<TextMeshProUGUI>().text[1].ToString());
			if(mul>4||mul<1)
            {
				mul = 1;
            }
			ulong fame = mul*(ulong)GameObject.Find("FileHandler").GetComponent<FileHandler>().load("fames","temp");
			GameObject.Find("FileHandler").GetComponent<FileHandler>().save("fames", fame,"temp");
			multiply.GetComponent<TextMeshProUGUI>().text = "+"+((mul-1)*(fame/mul)).ToString();

		}
		else
        {
			GameObject.Find("continue").GetComponent<Continue>().CharacterContinue();
        }
	}

	void OnApplicationPause(bool isPaused)
	{
		IronSource.Agent.onApplicationPause(isPaused);
	}

	public Color fade;

	bool RewardVideoPlayed  = false;
	int rType;
	public bool ShowRewardVideo(int type)
    {
		
		GameObject getFame = GameObject.Find("get fames");
		rType = type;
		if(type==2)
        {
			getFame.GetComponent<Button>().interactable = false;
			getFame.GetComponent<Image>().color = fade;
		}
		
		if (CurrentDevice == Device.Android || CurrentDevice == Device.IOS)
        {
			if (IronSource.Agent.isRewardedVideoAvailable())
			{
				IronSource.Agent.showRewardedVideo();
				return true;
				
			}
		}
		return false;
	}

	public void ShowBanner()
    {
		if (CurrentDevice == Device.Android || CurrentDevice == Device.IOS)
		{
			IronSource.Agent.loadBanner(IronSourceBannerSize.SMART, IronSourceBannerPosition.BOTTOM);
		}
		
	}

	public void HideBanner()
	{
		if (CurrentDevice == Device.Android || CurrentDevice == Device.IOS)
		{
			IronSource.Agent.destroyBanner();
		}
		
	}

	public int purchaseCount=1;

	public void ShowInterstitial(int type=1)
	{
		GameManager gm = GameObject.Find("GameManager").GetComponent<GameManager>();
		if(type==2)
        {
			ulong fames = (ulong)GameObject.Find("FileHandler").GetComponent<FileHandler>().load("fames", "temp");
			ulong currentFames = (ulong)GameObject.Find("FileHandler").GetComponent<FileHandler>().load("fames");
			GameObject.Find("FileHandler").GetComponent<FileHandler>().save("fames", fames+ currentFames);
		}
		if (RewardVideoPlayed|| PlayerPrefs.GetInt("buyCrystals", 0)>=purchaseCount)
        {
			RewardVideoPlayed = false;
			gm.goto_home();
			return;
		}
		
		
		if (CurrentDevice == Device.Android || CurrentDevice == Device.IOS)
		{
			if (IronSource.Agent.isInterstitialReady())
			{
				IronSource.Agent.showInterstitial();
			}
            else 
			{
				IronSource.Agent.loadInterstitial();
			}
			

		}
		gm.goto_home();
	}

}
