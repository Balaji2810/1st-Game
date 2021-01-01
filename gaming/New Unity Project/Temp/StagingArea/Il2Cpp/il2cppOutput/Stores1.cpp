#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Purchasing.AppleStoreImpl
struct AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Purchasing.AsyncWebUtil
struct AsyncWebUtil_t7B4F6A055FDCCB92A0A2D0884BE99B19462E1D54;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9;
// UnityEngine.Purchasing.CloudCatalogImpl
struct CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// UnityEngine.Purchasing.EventQueue
struct EventQueue_t16E6EFFAA46948AF1C707211EEAAA6E7C12D05DD;
// UnityEngine.Purchasing.FacebookStoreImpl
struct FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E;
// UnityEngine.Purchasing.FakeStore
struct FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// UnityEngine.Purchasing.Models.GoogleBillingResult
struct GoogleBillingResult_t67D619683106C9DD80E0143AB2497AB820B66D49;
// UnityEngine.Purchasing.GoogleFetchPurchases
struct GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910;
// UnityEngine.Purchasing.GoogleFinishTransactionService
struct GoogleFinishTransactionService_t48E8CEF99FF4FD0B1A2D7C1AF39235EBF744E751;
// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService
struct GooglePlayStoreRetrieveProductsService_tCBD4802AACDB554BC1C502CBC64E8DCB7CFCB12B;
// UnityEngine.Purchasing.Models.GooglePurchase
struct GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314;
// UnityEngine.Purchasing.Models.GooglePurchaseResult
struct GooglePurchaseResult_tD281D28FFEDF055C61EAF87CD825B6691B000658;
// UnityEngine.Purchasing.GooglePurchaseService
struct GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5;
// UnityEngine.Purchasing.GoogleQueryPurchasesService
struct GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Purchasing.IAsyncWebUtil
struct IAsyncWebUtil_t8FBA5E0BCC0DE2AB76FF44C1362C0854F96AB449;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Purchasing.Interfaces.IGoogleBillingClient
struct IGoogleBillingClient_tB0F821489CAFA12AC224E96E61F0E4EB66BA3853;
// UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService
struct IGoogleCachedQuerySkuDetailsService_t434E7B87A8B9AB58D506A33EBD0A72B10DC15522;
// UnityEngine.Purchasing.IGoogleFetchPurchases
struct IGoogleFetchPurchases_tAB96709F3B129319A247AA426C220D545BB80AE2;
// UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService
struct IGooglePlayStoreFinishTransactionService_t2AEA7460645932C92CFE0781783F7AAA409A2899;
// UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService
struct IGooglePlayStoreService_t8F5B4D849DC82A4AABB5E1F4AC9797148AAD1C72;
// UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback
struct IGooglePurchaseCallback_t6AF10D1C912E82629C115031F487E126745C2884;
// UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService
struct IGoogleQueryPurchasesService_t42AA5FC34559B4FD0C483EBDAA27EABCE8378DAB;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_t0A4DE9788DEF93F48D310CE8846854DAE7A9C1BA;
// UnityEngine.Purchasing.INativeUDPStore
struct INativeUDPStore_tE0C4800C551B8A89508ED702D5B54B05C9370EDC;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t55347A5ACE1DB3892EEB13D922FD591E238B75E1;
// UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService
struct IQuerySkuDetailsService_tF5495E043421A0B6F639FA5F005C664A1EE86893;
// UnityEngine.Purchasing.IUnityCallback
struct IUnityCallback_tBE0CD3CFCB5225BC3F45B081FA92513154F5EA81;
// Uniject.IUtil
struct IUtil_t2C633973FC1C950F61FB242F38B58391A32D7BD0;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Purchasing.JSONStore
struct JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_t02FAC497FA67546A9155357F19A9D1D698B79911;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.Purchasing.Price
struct Price_t8AB7440A322DAC83E0208A0E89D9C401BD99C657;
// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02;
// UnityEngine.Purchasing.ProfileData
struct ProfileData_t7A282992FFB308B713376A4148AE8A61EDB18B7B;
// UnityEngine.Purchasing.QuerySkuDetailsService
struct QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.ResolveEventHandler
struct ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Purchasing.ScriptingStoreCallback
struct ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091;
// UnityEngine.Purchasing.ScriptingUnityCallback
struct ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0;
// UnityEngine.Purchasing.StoreCatalogImpl
struct StoreCatalogImpl_t51EBB89B1D94DBC59BBB48FDE290B008E1D03D3E;
// UnityEngine.Purchasing.UDPImpl
struct UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5;
// UnityEngine.Purchasing.UIFakeStore
struct UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64;
// UnityEngine.Purchasing.Extension.UnityUtil
struct UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560;
// UnityEngine.Purchasing.AppleStoreImpl/<>c
struct U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F;
// UnityEngine.Purchasing.AppleStoreImpl/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t3ECBF0002F748AFE3F69A84CD21B4C2CAC9255DE;
// UnityEngine.Purchasing.AppleStoreImpl/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t49ED0ABE26A0C9B03AF0C8FE27947989F39BA511;
// UnityEngine.Purchasing.AppleStoreImpl/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_t29DB0733107531E57FDC0DE7AF5D3DA2626FBBF1;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// UnityEngine.Purchasing.AsyncWebUtil/<DoInvoke>d__4
struct U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871;
// UnityEngine.Purchasing.AsyncWebUtil/<Process>d__2
struct U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.Purchasing.CloudCatalogImpl/<>c
struct U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F;
// UnityEngine.Purchasing.CloudCatalogImpl/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t679E57D2834C11DAE4B4EED44D21B8521D6A5960;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// UnityEngine.Purchasing.FacebookStoreImpl/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t8BA187E4F08FD14CB561B8A85308A6614A282AF2;
// UnityEngine.Purchasing.FakeStore/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t4877482C1A597CE9EA826A3F8CF26BD92F23F639;
// UnityEngine.Purchasing.FakeStore/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tCC954902BA0A504041EC9E77E5EFBD4D607EA6CF;
// UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB41C2F40C630200D9ACE9EC64085C3FB8AFE22E4;
// UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t0AB6CBFC47CB2D168AF2228D38826F1F4200A103;
// UnityEngine.Purchasing.GoogleFetchPurchases/<>c
struct U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC;
// UnityEngine.Purchasing.GoogleFetchPurchases/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t69B90CDD2D28AD402A9253682B2C62165BFF734E;
// UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t73E14EB796A01760EC9D9203BC3EE387CC927319;
// UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tF5CC1011A36F7F148767476CFC5FD2CFE7D232C3;
// UnityEngine.Purchasing.GooglePlayStoreExtensions/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t66B0E134073B1712E021BA3D83CE3AA2F5B4CE4E;
// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t9F4F0C84DCC8EA85C5A37A5AC2B8F4164B061A5B;
// UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tA4FD1BE082CB561F3BFBB5DDB13E0A712B3CFCB2;
// UnityEngine.Purchasing.GooglePurchaseService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t5579282DB2370B9C4D137BD8EF3C9A749B8955D7;
// UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE;
// UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F;
// UnityEngine.Purchasing.LocalizedProductDescription/<>c
struct U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// UnityEngine.Purchasing.ProductCatalog/<>c
struct U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52;
// UnityEngine.Purchasing.QuerySkuDetailsService/<>c
struct U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA;
// UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tDCF4DD300FCB9D5B28162FFEDB742BB2CBD24F92;
// UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t24B245DD3FF7C86A62595CFCB8B86AA4392DBBFC;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tC53D4D465AC20C1554B98F68B65F07243C55C722;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t1F9ECD658852CC94305AD1E9F4250AC5ADF467C2;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t4696ECA9E5908925826E0CADA88D96FBCB87972F;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t0F3B406AA3F5477A31A14C6AD62F03D2E82F489F;
// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t58134579F55AF68E4EE6D55AC933939CDD671AA2;
// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t0CE366BBEB8F6F8A8DF579BA61A65C46F99DD34F;
// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tD2BFE44550006EC0AD2636A0508E7DCE25EBB458;
// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tC16BD3CBD6634E7D764DC55DB28F9A9F6A743CD7;
// UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration
struct MicrosoftConfiguration_t1D1BA624256301F1D85882DC858D25EF05F822DA;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C;
// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0;
// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1;
// UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13;
// UnityEngine.Purchasing.UIFakeStore/<>c
struct U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17;
// UnityEngine.Purchasing.UIFakeStore/DialogRequest
struct DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00;
// UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier
struct LifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E;
// UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__49
struct U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF;
// UnityEngine.Purchasing.WinRTStore/<>c
struct U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795;
// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>
struct Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999;
// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>
struct Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E;
// System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>
struct Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5;
// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>
struct Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.Purchasing.Product>
struct Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`2<System.Boolean,System.Int32>
struct Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3;
// System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>
struct Action_3_tDAA4AD214D2CEC03F07814ABAC061922F0E100B0;
// System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>
struct Action_4_t28CF4A06D662386572B79C451FFDCC866ECFE3ED;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Comparison`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>
struct Comparison_1_t73B44CEE2A42A20A3279AEC3D9B969E65D457104;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_tF73786AF84CB91EFD0BA1C0CD6AF7EE4C03B4863;
// System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]>
struct Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1;
// System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean>
struct Func_2_t0C7F6B3122AD28DD8D7D52468817E59C3555573A;
// System.Func`2<UnityEngine.Purchasing.ProductCatalogItem,System.Boolean>
struct Func_2_tE6ECEAEE694A30C51ED7DA45F161F05B793AD1B1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>
struct Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22;
// System.Func`3<System.Char,System.Int32,System.String>
struct Func_3_tD7998F8986F826E7DF513F88544C5878AFBA6BB2;
// System.Func`3<System.String,System.String,System.String>
struct Func_3_tEE1408F82AE5A0B981F1AA5408368EAFD620A1B8;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Models.GooglePurchase>
struct IEnumerable_1_tFA8AFB3605996764FE6B5DBDCB3F20AF86FCAA99;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>
struct IEnumerable_1_tB3F4FE9423F20C9D8337F7B224FE58B3F54208E9;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>
struct IEnumerable_1_t525A9FD9C59E65C6778A42487409EC6AA6F489E4;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct IEnumerable_1_t0C8B930DB1279BB60E258E583540584E64D303E2;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Purchasing.ProductDefinition>
struct IEqualityComparer_1_tEC1CF82C4A359B52B4A2DAEC1258EFB33652D833;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Reflection.Assembly>
struct IEqualityComparer_1_t7117D4422D84CB7EDA8E4D5752231FCAEC754B33;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductDefinition>
struct IList_1_tDC1792FC74233BD232D090860F9B0FBC88301C34;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Reflection.Assembly,System.Type[]>
struct KeyCollection_tB4EC393E771E7B5CB381A0962BACDD6BF1F6E716;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>
struct List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription>
struct List_1_tF2B54FD349165553F2FED06542A308F343FF791C;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_t9142463137C9E616A651ACDE957BA2630FCD06E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_t5B36FF776A56A7F895DBF7C8ED681CF083C126B3;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<UnityEngine.AndroidJavaClass>
struct List_1_t75EFA6BB9024C1D2BBB00545C10AE41E4E36F73E;
// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF;
// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>
struct List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.String>
struct Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Reflection.Assembly,System.Type[]>
struct ValueCollection_t6D0EEE5ED3A61D752FCCCD2F0A897BA1E03E650B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A;
// UnityEngine.Purchasing.Extension.AbstractStore
struct AbstractStore_tB0FD374A2E9858EB3A2DC721CBA280409F9485C0;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Action`1<System.Boolean>[]
struct Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// System.Collections.Generic.Dictionary`2/Entry<System.Reflection.Assembly,System.Type[]>[]
struct EntryU5BU5D_tCF772A8709FB3BD7265DAB4A81CA41511B9C7FD1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Purchasing.Models.GooglePurchase[]
struct GooglePurchaseU5BU5D_t11AC9B93A03816B7111400328F6BADC32C09C81F;
// System.Text.RegularExpressions.Group
struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// UnityEngine.Purchasing.INativeAppleStore
struct INativeAppleStore_tA4C4E3ED01031F6CE9086CB6589DBCF6EECB4465;
// UnityEngine.Purchasing.INativeFacebookStore
struct INativeFacebookStore_tE1B6B607D30066039FA6DA2D12EE41DC611A117C;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_tABCA5D5CA28C31F44D2DFF71BA514124369EF51F;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_tCEF0F12ABAEB669C05EFD4FA40A31BAAC6F4B51E;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F;
// UnityEngine.Purchasing.Default.IWindowsIAP
struct IWindowsIAP_tB6710D4F5A80FF23C19AF48441915E3C6D88A730;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_tF5A86B09324F457929EC459E991709F1A12ADD1D;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5;
// UnityEngine.Purchasing.Product
struct Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572;
// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75;
// UnityEngine.Purchasing.Extension.ProductDescription[]
struct ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RuntimePlatform[]
struct RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Purchasing.ProductDefinition>[]
struct SlotU5BU5D_tDB8A48C4E210B3D540FE4F6DC3D0B18D36E9A46E;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F;
// UnityEngine.Purchasing.Default.WinProductDescription[]
struct WinProductDescriptionU5BU5D_t3543C774BA9D0BB5CFFDA5076F1CFEDC71133E10;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;

IL2CPP_EXTERN_C RuntimeClass* ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncWebUtil_t8FBA5E0BCC0DE2AB76FF44C1362C0854F96AB449_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB3F4FE9423F20C9D8337F7B224FE58B3F54208E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFA8AFB3605996764FE6B5DBDCB3F20AF86FCAA99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t35CDF3F7D38B97AE7FDA9DFDEC193E0222669756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4911D25D63389A1D197DED0519AA46CD156EA82A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGoogleBillingClient_tB0F821489CAFA12AC224E96E61F0E4EB66BA3853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeUDPStore_tE0C4800C551B8A89508ED702D5B54B05C9370EDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityCallback_tBE0CD3CFCB5225BC3F45B081FA92513154F5EA81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWindowsIAP_tB6710D4F5A80FF23C19AF48441915E3C6D88A730_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Promo_t3A312B3AA59F603895E220B66BD471F2F3512EBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIapBridgeInterface_t4A247198BE28801A0EE23D0707585381DCFBE14D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserInfoInterface_tA23675037C19143C240BB58D5440F1F5C863E8C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01CD201F38240EC1287B9A436D7523B66DFD6785;
IL2CPP_EXTERN_C String_t* _stringLiteral0E62453B16F3139996684F414345A0A54FA64728;
IL2CPP_EXTERN_C String_t* _stringLiteral11B510549CC70A2858AAF7B540021613382B46CD;
IL2CPP_EXTERN_C String_t* _stringLiteral1317CF02F3F3926703DF869C594244C35D400F6A;
IL2CPP_EXTERN_C String_t* _stringLiteral15F3B67F570CD6F1C7255E182D23851EEF865FFA;
IL2CPP_EXTERN_C String_t* _stringLiteral189B430829CD4A9227FD38F8494AD158D2EEE455;
IL2CPP_EXTERN_C String_t* _stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44;
IL2CPP_EXTERN_C String_t* _stringLiteral1EB0CBA679551FF4CC0974D54AD492880818D55E;
IL2CPP_EXTERN_C String_t* _stringLiteral1F129F58A8DCA2BAC1980E37CE73EDC57F778345;
IL2CPP_EXTERN_C String_t* _stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2;
IL2CPP_EXTERN_C String_t* _stringLiteral2252E2C069AF487A613B11F90C8542CE9619C9F4;
IL2CPP_EXTERN_C String_t* _stringLiteral225F2252D4E72B635011BD459E4D4D62E56F10A6;
IL2CPP_EXTERN_C String_t* _stringLiteral283A5E2C7FF2F98F76268C8CFB12CA428D08EF99;
IL2CPP_EXTERN_C String_t* _stringLiteral2893C94DD1BA3D3505F83D21547DDE4D6792189A;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral2DBBF7161508469CCE1CFF74946814970CC72810;
IL2CPP_EXTERN_C String_t* _stringLiteral3E829957FE88E1CE9D2236E12F26B8CBD0BA47FC;
IL2CPP_EXTERN_C String_t* _stringLiteral4B410F5F43A4714AE6474DB2282523C7FBE75CD1;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral5C50A72309B2048E977F7FB4C5C82C2225169C31;
IL2CPP_EXTERN_C String_t* _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
IL2CPP_EXTERN_C String_t* _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83;
IL2CPP_EXTERN_C String_t* _stringLiteral64044D148C628EA17CF351D97671758DA3E29368;
IL2CPP_EXTERN_C String_t* _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54;
IL2CPP_EXTERN_C String_t* _stringLiteral6BA9601CDD4A40F35F1F5E500F83CC1A34057835;
IL2CPP_EXTERN_C String_t* _stringLiteral6DD7DCD5917CA3E2AB88F5CE8B766A16904CF914;
IL2CPP_EXTERN_C String_t* _stringLiteral74320907E0EFDCA8532E8CBD2C1A2910BB8C42D7;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7C5772F71F711EF3E76278A66E8A773669717691;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF9A5D883AC2EEA2F31FEECA02D6C53D5F533B1;
IL2CPP_EXTERN_C String_t* _stringLiteral81FB557C2939F7A4BC33B9B431146C35D6316664;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteral8ACABC276DC388B208E8435441C4EA853959724F;
IL2CPP_EXTERN_C String_t* _stringLiteral8C99461589CBC42FE28D0A29D20F63D0EE7E6E00;
IL2CPP_EXTERN_C String_t* _stringLiteral9783048DDA4A8100EAD15B60BE4922DE458E77F8;
IL2CPP_EXTERN_C String_t* _stringLiteral9819F74EC3C2710BD7434CCFE9C082141C6EC99C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC851683B68F4EEDE7D8DC452DCD5513988E98C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBF8439ADD05997F24462AA527B58CF0412767D94;
IL2CPP_EXTERN_C String_t* _stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD;
IL2CPP_EXTERN_C String_t* _stringLiteralC4116742826A60367A25FCA4CAFF8074E4FCE360;
IL2CPP_EXTERN_C String_t* _stringLiteralC48267E9D4A956D768936FE15F1BE6FA5C677BA9;
IL2CPP_EXTERN_C String_t* _stringLiteralC4FD5B06A6B7174802B6D991C7560C98FB781820;
IL2CPP_EXTERN_C String_t* _stringLiteralC53354E87BDA5285431DDA542D48714F94E95113;
IL2CPP_EXTERN_C String_t* _stringLiteralCDDD56D3BC1AD3B110D775A588AB446B05F8AD98;
IL2CPP_EXTERN_C String_t* _stringLiteralCE6487548A3FC344BD8779B96FB24FEC9373778F;
IL2CPP_EXTERN_C String_t* _stringLiteralCFEF3227A766442073C70EFE7DC19B6BA9C63006;
IL2CPP_EXTERN_C String_t* _stringLiteralD016F89FD67D342DCC411DCF51E41A3D635BEF7D;
IL2CPP_EXTERN_C String_t* _stringLiteralD07477ECD3017EFC4D04A75EB58245BE024730D9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA70E7C4104A19077F6AAA2BAD500E400AB5F6D2;
IL2CPP_EXTERN_C String_t* _stringLiteralDBB9A1698C46426EE577A5E7E5643C626D347AAA;
IL2CPP_EXTERN_C String_t* _stringLiteralE54C55E69941E58F10CBFD556EFAF10DA23C5E71;
IL2CPP_EXTERN_C String_t* _stringLiteralEF46440585636401EBFA364B46D4E49202AC59EF;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m819A05351F202EF5B8F9AB2F363759B0B09D1319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m913D2068E9319AFAC415744AA84697B23D903429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m9DE3234C946104479E5DBB5BC6D687E240784865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Exists_TisString_t_mF7446ECB8294FA934B9B79F60C8CBC9742B248EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9A6E5C2A0932D66C3D38B64E417811BBD0DEE219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB38D1CF73CA97BB4BFDEB225D4E5B6D19D2EC4BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7014A9CFBFA547D372F27C460AE178B8C68BA11C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5BA78C0FB3D4A7DA96583CBC6E15D720CBFC1C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_TisString_t_mE10749212FEC943C5795066B7C4EE3889419D71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_TisWinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F_m901D387665C6D3FCE15C68AE6080D62280504DDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_m01CB0FE7A5C88E38388186F22671F013D3C90AD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisWinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F_m7E433C14BB06A80766621A9758A5BCBFC2E9F4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisGooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314_m7CD89F87C48902C4A87FAB0BFD255B65CB7CABC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_m7CE07966681ACF1DED7378614CCBC463B2986B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6775B2FD06AA0EE939145FBF06D60F85A31F0B67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m8B51BBBDA54A8483EFC7DE813AA1583F688FA57C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mEBB5050D6438799252C280D3936760BBA42FDEAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E_mB7D226D9E5FAC06C614579EFD1E655C565F51C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_mA75F757D3020A7DEC836E6846AC19BFD52F3BDCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m5B261754EA79A73B0F71BCCCD7890E8DB7CF4D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0120737C67D1EC6FCE04C67135E2BB71DDB96496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2B431C2AA07C86E91C68213E8D805060678F9203_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_mDB05072B2E0AA4C53DE8066A87A90F9A039DC7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m86D8489A40D06A5D059BF6951FDB7880C5C42CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m9AB7D63ECD528DA81E0BFA47AB1F1F59B9CB76B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m6B6D8E35C0E83BBC784E881CCFA837ED78F48F14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_mA4F682996967E9BEB7B5E33240AA00E9156E8E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_m529B54873453FC1159C1E19489562CB985BDD818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m58D873A1B64EF9D302C5E23BE1C2DE2ACF20448F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_m7AC256A6D8BB308AB1A1E8C512BF1C41F3ECC1F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m173E736672AFB37CF15038AE1A8DD1A9B2236D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m40D09A941BE7B5778638D7D6EF658C89CDC4F809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_mA65E85AE35F533491D7788A0A6605E1D7D74207F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__2_m2A7749155D8410BF168186BCA783BBBD47201066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mC9B923B6358257D442FE6A337295FDFC9FDD516F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m63F3B59612C7BC7E726657C78A97B76564C2D39A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m59185CCC02C3FE34C2A8683EDA69A8AC11C6B851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m5DA90193424C5C6369346942F7B20BD5A29D8972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_m9302EBEE3A27C59DBDFA895D8AC0B1D2D574A931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m589DDC53D995FB3BE7A71CC4E6ACEAF8EA11B34B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_1_mE417A1D0652B28295179F1515CC321D7E85FA2A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m17DCC3074704531E05FD6BCDA8EF784229169389_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_3_mC8DA5DD905A138D2ECFE276CABEF9C8C3A53ADBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t U3CDelayedCoroutineU3Ed__49_MoveNext_m4D5880AC77AF2375F3CA55641BCD024B2AAC9F23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_m529B54873453FC1159C1E19489562CB985BDD818_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDoInvokeU3Ed__4_MoveNext_m9F4F75B32F5147C3BB4420BEE81604B1E8FF7592_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m58D873A1B64EF9D302C5E23BE1C2DE2ACF20448F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CProcessU3Ed__2_MoveNext_m4BF7DF1659F52EAC56DEDE2BEF9A66AF014C49E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_m7AC256A6D8BB308AB1A1E8C512BF1C41F3ECC1F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_0_mAC3655F1AFFF5ADED6D221B1FFEA7BB927DD9B3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CDecodeNonLatinCharactersU3Eb__11_0_mC6308C3C1692E6D2B1AEBC046E292C47FBB79847_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_mA65E85AE35F533491D7788A0A6605E1D7D74207F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m6EF48E070C2DAA1B780224CE4E57C9EACEF48D86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__0_mEB0F1FE8EC6BE8046FCFE63CD42E39483B99162F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__1_m752291E9DD14061B94887FACB88C05AC1C041876_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_0_U3CStoreRetrieveProductsU3Eb__0_m03D8EA93D28F3BEF232FD8AD8AB16E1ED630579E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass15_0_U3CFakePurchaseU3Eb__0_m34959F6F7D57D35D0EB1AA752A442CFFE212D1E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass2_0_U3CContainsSkuU3Eb__0_m13EBEAB4E48019EC24614D197C83CEEF5F580989_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass37_0_U3CMessageCallbackU3Eb__0_mD3ED860FC01CA128B360566A12368C063BA49ED3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass3_0_U3CFinishTransactionU3Eb__0_mFC30A9A5BC70E79C52FC7E10E0CE9B0DD774B537_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass3_0_U3COnSetupFailedU3Eb__0_mE77E7D74CF363C9057F8B3EBB6DC777250423BF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass3_0_U3CQueryPurchasesU3Eb__0_m4797FF90FB9E4E7CD2A9C2613FB419A71F2C8B18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass4_0_U3COnProductsRetrievedU3Eb__0_m9CC85BA8C6D061C53390B35167FFA5ECD73F0B1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass4_0_U3CUpdateCachedQueriedSkuU3Eb__0_m387448638A6158D9D413EFC8F76D9B2D0A035FE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass5_0_U3COnPurchaseSucceededU3Eb__0_m019E5AEFC2A76F73527D673F01E782B410EE5E2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_mBFA9EC335F595ECBB5E5881550B0BEDF12CF6FBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass5_0_U3CRetrieveProductsU3Eb__1_mF230D9AA962EF5C18A8A83DEFE801F4B304F1BD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass6_0_U3CMessageCallbackU3Eb__0_m2623D68F261E9EEACB5D2F610F69F0F3704C9BD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m3DD4203BD8EEDE5995997F06D172CBEBC2DF693A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass6_0_U3COnPurchaseFailedU3Eb__0_m8735482CD1DAE2F2C98D77548F1D2EDE455EC86B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_mDE4398568DE9EC940FC042D38FE7F3BB401077DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m59185CCC02C3FE34C2A8683EDA69A8AC11C6B851_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m5DA90193424C5C6369346942F7B20BD5A29D8972_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_m9302EBEE3A27C59DBDFA895D8AC0B1D2D574A931_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CRestoreTransactionsU3Eb__0_mA93D4A676104B0EB8142101FF84CCF93A01070A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass9_0_U3COnPurchaseFailedU3Eb__0_m0DB5F3DEE86D1669E6FD76E2042D6C6FF86E8140_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m05457177E1FA6B466B7C23B03AFE9111B976E2AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m1A6D52C8735A819280EDC827CB2E845AF7DDD80B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m25FCFAD57F86318C41C505C8751F620CF1AB56E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m5A7D7189B89B7036F25B5F8B66E96DB01AA3811E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m6E9B4E9E0A54373D356A2011B8BE5C3B653CCDF3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m6FC73205E50A3D0227EBE34C2ED1101CE0A6316E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mC4EFA583FB0145FFEF21D90C3781889412855EAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mDA72C8D23743746AC4CD9D90704A958DF9D8DB4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_DictionaryToStringProperty_m7994C9973D80D9C122FEA25667B8A5C8AF212050_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_FinishTransaction_m9930DAAD0C7AD078B279B3B236951C302BBC87F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_Purchase_m066B0ADA48FC39756DA1F70AE36A9BA296104EB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_RetrieveProducts_m84FC370283AF731FDCA74F9BB681CF500BE4F74E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPReflectionUtils_GetTypeByName_m2D706B5311D5E3D7E3C8C373CEFF748F2BEE42C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPReflectionUtils_GetTypes_m8AC1A6E80E2FB05E577F9C38452A2F10427E2F61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPReflectionUtils__cctor_m3A5C4299B976A685962591D0E34C747354D151F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CancelButtonClicked_mD2A026FA6BBE33C81C6BBA3F1CBEA29E23285E25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CloseDialog_m0BC4FBED90982409408EB9A82CA61B08ADD2B968_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CreatePurchaseQuestion_mF82069AB8BFB007FD4CCB038821DC7E21DACE464_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CreateRetrieveProductsQuestion_mBBDC4F25739EA0BD25CFD0DD5F378B7750D7FF71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetCancelButtonGameObject_mB7B3AC8C1B6FE9983B7F4D51AE8835F70F4B180F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetCancelButtonText_m308D2A419A2EBBE6C7710F7ACDF308D40D0D2453_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetCancelButton_m5801E7B85A37C94981E6F20C33E18B9D7AAF66FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetDropdownContainerGameObject_m29AD74E9C24BEA69069CBE44C510FE69BE51A443_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetOkayButtonText_m36EDCB2BD98EBC72FB2A77EBD04BD8F0AC938B2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetOkayButton_mCE50A662A84D45C331211032FC1CCA4D0187A774_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_InstantiateDialog_m97B69A01780B2888A4173342B5C94065ACCC2890_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_OkayButtonClicked_m86FC1B4FAB78AC4FF5D3440ABD6FFEC41DF3E72B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_StartUI_mCE845B933A4DF891F0926D7C49EE4F97528861B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UdpIapBridgeInterface_GetClassType_m0CB7252C564FE1FDEF51C378E5726197E29AEFC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UdpIapBridgeInterface_GetFinishTransactionMethod_m08A9FCC95EE1DC8B978DB79F42E70DEA38E0ADDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UdpIapBridgeInterface_GetInitMethod_m1268A547D7F96A2D8F8D1D10D5B8435D27DD1BF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UdpIapBridgeInterface_GetPurchaseMethod_m04429796099497D106906C22524B1915DD623107_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UdpIapBridgeInterface_GetRetrieveProductsMethod_m0EE4750DDBB15287A54F034E250DFF44B876A6EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityActivity_GetCurrentActivity_m0A189C445F71C361C96784CA2C15569A4D40BEBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityActivity_GetUnityPlayerClass_m79E6A7344C141D41D1CF3A3AAAA5D851C9B70896_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_AddPauseListener_mBCD51B5FA47F1FC3F535BAF1A9BA7F8A1648AC6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_DebugLog_m0D9666F278F66A91CE2CA73CB1236C43574D79B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_DelayedCoroutine_mC01CE141F48420F1FE664FEFED36940F601AC125_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_GetWaitForSeconds_m28B6A34D4438EDD6EAFFAB4B46AE78D2248A1D2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_OnApplicationPause_mE74C4D1F59A1256F09149DF9940B986CEDFE1527_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_PcPlatform_mE81A7BFC1D011FE21F3FD51D33ED54D51CA58F91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_RunOnMainThread_mB26B68B44BFC4595FAE89297DE908CCFBF1BFBC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_Start_mEA4BE994252936CE71FD8FDFBEFB4E964F1217BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_Update_mE583F6CA38B794C402EBF81148EF4EBBEA8F3C3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil__cctor_mBF38EC9EE232DD52A6EF82841258F2845E09433B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil__ctor_m202A4CA90B5291DFA291B90DA497384DA1FAD8B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_get_currentTime_m9998B93D0649A38DEB71AF1611A364755614F18E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_get_screenOrientation_mCB40D3613AA1964BF193EF27B3ED38E5FAD46B0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_get_sessionId_m1D9F7C8D0FC79414BC733BA80911868B1AF888C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityUtil_get_userId_mB2DA0FDEB40C38D9F17447D93B4EC6980D8649F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UserInfoInterface_GetClassType_m9812080125843B27829B95984F673CF85B386C0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_FinishTransaction_mFFFD6CBE162D548780D3BE76436678D59F077299_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_Purchase_m5DF86881261AB077860AA9B5257A12622D302A28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_RestoreTransactions_mC7888F4B07B2FC149635B4D3378DC23F423C3ABB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_RetrieveProducts_m1A5E0FDBBAA8785ADC29AD871DE4508A57E76763_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_init_m9167BBFC6511F83A1DA15507B11E4CCA4B9DC5EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_restoreTransactions_m886EF0C361C58352C64114E9E6B9F700AB07E4C9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]>
struct  Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCF772A8709FB3BD7265DAB4A81CA41511B9C7FD1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB4EC393E771E7B5CB381A0962BACDD6BF1F6E716 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6D0EEE5ED3A61D752FCCCD2F0A897BA1E03E650B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789, ___entries_1)); }
	inline EntryU5BU5D_tCF772A8709FB3BD7265DAB4A81CA41511B9C7FD1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCF772A8709FB3BD7265DAB4A81CA41511B9C7FD1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCF772A8709FB3BD7265DAB4A81CA41511B9C7FD1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789, ___keys_7)); }
	inline KeyCollection_tB4EC393E771E7B5CB381A0962BACDD6BF1F6E716 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB4EC393E771E7B5CB381A0962BACDD6BF1F6E716 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB4EC393E771E7B5CB381A0962BACDD6BF1F6E716 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789, ___values_8)); }
	inline ValueCollection_t6D0EEE5ED3A61D752FCCCD2F0A897BA1E03E650B * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6D0EEE5ED3A61D752FCCCD2F0A897BA1E03E650B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6D0EEE5ED3A61D752FCCCD2F0A897BA1E03E650B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct  Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___entries_1)); }
	inline EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___keys_7)); }
	inline KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___values_8)); }
	inline ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____slots_8)); }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct  HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tDB8A48C4E210B3D540FE4F6DC3D0B18D36E9A46E* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1, ____slots_8)); }
	inline SlotU5BU5D_tDB8A48C4E210B3D540FE4F6DC3D0B18D36E9A46E* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tDB8A48C4E210B3D540FE4F6DC3D0B18D36E9A46E** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tDB8A48C4E210B3D540FE4F6DC3D0B18D36E9A46E* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action>
struct  List_1_t458734AF850139150AB40DFB2B5D1BCE23178235  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____items_1)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct  List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0, ____items_1)); }
	inline Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* get__items_1() const { return ____items_1; }
	inline Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0_StaticFields, ____emptyArray_5)); }
	inline Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Action_1U5BU5D_t69AC41BEB00BB16CBD8804AAA794B9CB8586FEB0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct  List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____items_1)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__items_1() const { return ____items_1; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_StaticFields, ____emptyArray_5)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct  List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WinProductDescriptionU5BU5D_t3543C774BA9D0BB5CFFDA5076F1CFEDC71133E10* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF, ____items_1)); }
	inline WinProductDescriptionU5BU5D_t3543C774BA9D0BB5CFFDA5076F1CFEDC71133E10* get__items_1() const { return ____items_1; }
	inline WinProductDescriptionU5BU5D_t3543C774BA9D0BB5CFFDA5076F1CFEDC71133E10** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WinProductDescriptionU5BU5D_t3543C774BA9D0BB5CFFDA5076F1CFEDC71133E10* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WinProductDescriptionU5BU5D_t3543C774BA9D0BB5CFFDA5076F1CFEDC71133E10* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF_StaticFields, ____emptyArray_5)); }
	inline WinProductDescriptionU5BU5D_t3543C774BA9D0BB5CFFDA5076F1CFEDC71133E10* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WinProductDescriptionU5BU5D_t3543C774BA9D0BB5CFFDA5076F1CFEDC71133E10** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WinProductDescriptionU5BU5D_t3543C774BA9D0BB5CFFDA5076F1CFEDC71133E10* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct  List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____items_1)); }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* get__items_1() const { return ____items_1; }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF_StaticFields, ____emptyArray_5)); }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>
struct  List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GooglePurchaseU5BU5D_t11AC9B93A03816B7111400328F6BADC32C09C81F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654, ____items_1)); }
	inline GooglePurchaseU5BU5D_t11AC9B93A03816B7111400328F6BADC32C09C81F* get__items_1() const { return ____items_1; }
	inline GooglePurchaseU5BU5D_t11AC9B93A03816B7111400328F6BADC32C09C81F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GooglePurchaseU5BU5D_t11AC9B93A03816B7111400328F6BADC32C09C81F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GooglePurchaseU5BU5D_t11AC9B93A03816B7111400328F6BADC32C09C81F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654_StaticFields, ____emptyArray_5)); }
	inline GooglePurchaseU5BU5D_t11AC9B93A03816B7111400328F6BADC32C09C81F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GooglePurchaseU5BU5D_t11AC9B93A03816B7111400328F6BADC32C09C81F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GooglePurchaseU5BU5D_t11AC9B93A03816B7111400328F6BADC32C09C81F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>
struct  List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E, ____items_1)); }
	inline RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52* get__items_1() const { return ____items_1; }
	inline RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E_StaticFields, ____emptyArray_5)); }
	inline RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown_OptionData>
struct  List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____items_1)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields, ____emptyArray_5)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct  ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.RegularExpressions.Capture
struct  Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Text.RegularExpressions.GroupCollection
struct  GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* ____groups_2;

public:
	inline static int32_t get_offset_of__match_0() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____match_0)); }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * get__match_0() const { return ____match_0; }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B ** get_address_of__match_0() { return &____match_0; }
	inline void set__match_0(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * value)
	{
		____match_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____match_0), (void*)value);
	}

	inline static int32_t get_offset_of__captureMap_1() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____captureMap_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__captureMap_1() const { return ____captureMap_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__captureMap_1() { return &____captureMap_1; }
	inline void set__captureMap_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____captureMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____captureMap_1), (void*)value);
	}

	inline static int32_t get_offset_of__groups_2() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____groups_2)); }
	inline GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* get__groups_2() const { return ____groups_2; }
	inline GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5** get_address_of__groups_2() { return &____groups_2; }
	inline void set__groups_2(GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* value)
	{
		____groups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groups_2), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.Purchasing.AppleStoreImpl_<>c
struct  U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F_StaticFields
{
public:
	// UnityEngine.Purchasing.AppleStoreImpl_<>c UnityEngine.Purchasing.AppleStoreImpl_<>c::<>9
	U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F * ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt> UnityEngine.Purchasing.AppleStoreImpl_<>c::<>9__24_1
	Comparison_1_t73B44CEE2A42A20A3279AEC3D9B969E65D457104 * ___U3CU3E9__24_1_1;
	// System.Comparison`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt> UnityEngine.Purchasing.AppleStoreImpl_<>c::<>9__41_1
	Comparison_1_t73B44CEE2A42A20A3279AEC3D9B969E65D457104 * ___U3CU3E9__41_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F_StaticFields, ___U3CU3E9__24_1_1)); }
	inline Comparison_1_t73B44CEE2A42A20A3279AEC3D9B969E65D457104 * get_U3CU3E9__24_1_1() const { return ___U3CU3E9__24_1_1; }
	inline Comparison_1_t73B44CEE2A42A20A3279AEC3D9B969E65D457104 ** get_address_of_U3CU3E9__24_1_1() { return &___U3CU3E9__24_1_1; }
	inline void set_U3CU3E9__24_1_1(Comparison_1_t73B44CEE2A42A20A3279AEC3D9B969E65D457104 * value)
	{
		___U3CU3E9__24_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F_StaticFields, ___U3CU3E9__41_1_2)); }
	inline Comparison_1_t73B44CEE2A42A20A3279AEC3D9B969E65D457104 * get_U3CU3E9__41_1_2() const { return ___U3CU3E9__41_1_2; }
	inline Comparison_1_t73B44CEE2A42A20A3279AEC3D9B969E65D457104 ** get_address_of_U3CU3E9__41_1_2() { return &___U3CU3E9__41_1_2; }
	inline void set_U3CU3E9__41_1_2(Comparison_1_t73B44CEE2A42A20A3279AEC3D9B969E65D457104 * value)
	{
		___U3CU3E9__41_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_1_2), (void*)value);
	}
};


// UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass24_0
struct  U3CU3Ec__DisplayClass24_0_t3ECBF0002F748AFE3F69A84CD21B4C2CAC9255DE  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.ProductDescription UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass24_0::productDescription
	ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 * ___productDescription_0;

public:
	inline static int32_t get_offset_of_productDescription_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_t3ECBF0002F748AFE3F69A84CD21B4C2CAC9255DE, ___productDescription_0)); }
	inline ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 * get_productDescription_0() const { return ___productDescription_0; }
	inline ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 ** get_address_of_productDescription_0() { return &___productDescription_0; }
	inline void set_productDescription_0(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 * value)
	{
		___productDescription_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productDescription_0), (void*)value);
	}
};


// UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0
struct  U3CU3Ec__DisplayClass37_0_t49ED0ABE26A0C9B03AF0C8FE27947989F39BA511  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::subject
	String_t* ___subject_0;
	// System.String UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::payload
	String_t* ___payload_1;
	// System.String UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::receipt
	String_t* ___receipt_2;
	// System.String UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::transactionId
	String_t* ___transactionId_3;

public:
	inline static int32_t get_offset_of_subject_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t49ED0ABE26A0C9B03AF0C8FE27947989F39BA511, ___subject_0)); }
	inline String_t* get_subject_0() const { return ___subject_0; }
	inline String_t** get_address_of_subject_0() { return &___subject_0; }
	inline void set_subject_0(String_t* value)
	{
		___subject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_0), (void*)value);
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t49ED0ABE26A0C9B03AF0C8FE27947989F39BA511, ___payload_1)); }
	inline String_t* get_payload_1() const { return ___payload_1; }
	inline String_t** get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(String_t* value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_1), (void*)value);
	}

	inline static int32_t get_offset_of_receipt_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t49ED0ABE26A0C9B03AF0C8FE27947989F39BA511, ___receipt_2)); }
	inline String_t* get_receipt_2() const { return ___receipt_2; }
	inline String_t** get_address_of_receipt_2() { return &___receipt_2; }
	inline void set_receipt_2(String_t* value)
	{
		___receipt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receipt_2), (void*)value);
	}

	inline static int32_t get_offset_of_transactionId_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t49ED0ABE26A0C9B03AF0C8FE27947989F39BA511, ___transactionId_3)); }
	inline String_t* get_transactionId_3() const { return ___transactionId_3; }
	inline String_t** get_address_of_transactionId_3() { return &___transactionId_3; }
	inline void set_transactionId_3(String_t* value)
	{
		___transactionId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionId_3), (void*)value);
	}
};


// UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass41_0
struct  U3CU3Ec__DisplayClass41_0_t29DB0733107531E57FDC0DE7AF5D3DA2626FBBF1  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass41_0::id
	String_t* ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_t29DB0733107531E57FDC0DE7AF5D3DA2626FBBF1, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}
};


// UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4
struct  U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Action UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::a
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___a_2;
	// System.Int32 UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::delayInSeconds
	int32_t ___delayInSeconds_3;
	// UnityEngine.Purchasing.AsyncWebUtil UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::<>4__this
	AsyncWebUtil_t7B4F6A055FDCCB92A0A2D0884BE99B19462E1D54 * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_a_2() { return static_cast<int32_t>(offsetof(U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871, ___a_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_a_2() const { return ___a_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_a_2() { return &___a_2; }
	inline void set_a_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___a_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a_2), (void*)value);
	}

	inline static int32_t get_offset_of_delayInSeconds_3() { return static_cast<int32_t>(offsetof(U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871, ___delayInSeconds_3)); }
	inline int32_t get_delayInSeconds_3() const { return ___delayInSeconds_3; }
	inline int32_t* get_address_of_delayInSeconds_3() { return &___delayInSeconds_3; }
	inline void set_delayInSeconds_3(int32_t value)
	{
		___delayInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871, ___U3CU3E4__this_4)); }
	inline AsyncWebUtil_t7B4F6A055FDCCB92A0A2D0884BE99B19462E1D54 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline AsyncWebUtil_t7B4F6A055FDCCB92A0A2D0884BE99B19462E1D54 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(AsyncWebUtil_t7B4F6A055FDCCB92A0A2D0884BE99B19462E1D54 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2
struct  U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.WWW UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::request
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___request_2;
	// System.Action`1<System.String> UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::responseHandler
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___responseHandler_3;
	// System.Action`1<System.String> UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::errorHandler
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___errorHandler_4;
	// System.Int32 UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::maxTimeoutInSeconds
	int32_t ___maxTimeoutInSeconds_5;
	// UnityEngine.Purchasing.AsyncWebUtil UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::<>4__this
	AsyncWebUtil_t7B4F6A055FDCCB92A0A2D0884BE99B19462E1D54 * ___U3CU3E4__this_6;
	// System.Single UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::<timer>5__1
	float ___U3CtimerU3E5__1_7;
	// System.Boolean UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::<hasTimedOut>5__2
	bool ___U3ChasTimedOutU3E5__2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_request_2() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73, ___request_2)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_request_2() const { return ___request_2; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_request_2() { return &___request_2; }
	inline void set_request_2(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___request_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_2), (void*)value);
	}

	inline static int32_t get_offset_of_responseHandler_3() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73, ___responseHandler_3)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_responseHandler_3() const { return ___responseHandler_3; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_responseHandler_3() { return &___responseHandler_3; }
	inline void set_responseHandler_3(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___responseHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_errorHandler_4() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73, ___errorHandler_4)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_errorHandler_4() const { return ___errorHandler_4; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_errorHandler_4() { return &___errorHandler_4; }
	inline void set_errorHandler_4(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___errorHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_maxTimeoutInSeconds_5() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73, ___maxTimeoutInSeconds_5)); }
	inline int32_t get_maxTimeoutInSeconds_5() const { return ___maxTimeoutInSeconds_5; }
	inline int32_t* get_address_of_maxTimeoutInSeconds_5() { return &___maxTimeoutInSeconds_5; }
	inline void set_maxTimeoutInSeconds_5(int32_t value)
	{
		___maxTimeoutInSeconds_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_6() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73, ___U3CU3E4__this_6)); }
	inline AsyncWebUtil_t7B4F6A055FDCCB92A0A2D0884BE99B19462E1D54 * get_U3CU3E4__this_6() const { return ___U3CU3E4__this_6; }
	inline AsyncWebUtil_t7B4F6A055FDCCB92A0A2D0884BE99B19462E1D54 ** get_address_of_U3CU3E4__this_6() { return &___U3CU3E4__this_6; }
	inline void set_U3CU3E4__this_6(AsyncWebUtil_t7B4F6A055FDCCB92A0A2D0884BE99B19462E1D54 * value)
	{
		___U3CU3E4__this_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimerU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73, ___U3CtimerU3E5__1_7)); }
	inline float get_U3CtimerU3E5__1_7() const { return ___U3CtimerU3E5__1_7; }
	inline float* get_address_of_U3CtimerU3E5__1_7() { return &___U3CtimerU3E5__1_7; }
	inline void set_U3CtimerU3E5__1_7(float value)
	{
		___U3CtimerU3E5__1_7 = value;
	}

	inline static int32_t get_offset_of_U3ChasTimedOutU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73, ___U3ChasTimedOutU3E5__2_8)); }
	inline bool get_U3ChasTimedOutU3E5__2_8() const { return ___U3ChasTimedOutU3E5__2_8; }
	inline bool* get_address_of_U3ChasTimedOutU3E5__2_8() { return &___U3ChasTimedOutU3E5__2_8; }
	inline void set_U3ChasTimedOutU3E5__2_8(bool value)
	{
		___U3ChasTimedOutU3E5__2_8 = value;
	}
};


// UnityEngine.Purchasing.CloudCatalogImpl
struct  CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.CloudCatalogImpl::m_AsyncUtil
	RuntimeObject* ___m_AsyncUtil_0;
	// System.String UnityEngine.Purchasing.CloudCatalogImpl::m_CacheFileName
	String_t* ___m_CacheFileName_1;
	// UnityEngine.ILogger UnityEngine.Purchasing.CloudCatalogImpl::m_Logger
	RuntimeObject* ___m_Logger_2;
	// System.String UnityEngine.Purchasing.CloudCatalogImpl::m_CatalogURL
	String_t* ___m_CatalogURL_3;
	// System.String UnityEngine.Purchasing.CloudCatalogImpl::m_StoreName
	String_t* ___m_StoreName_4;

public:
	inline static int32_t get_offset_of_m_AsyncUtil_0() { return static_cast<int32_t>(offsetof(CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32, ___m_AsyncUtil_0)); }
	inline RuntimeObject* get_m_AsyncUtil_0() const { return ___m_AsyncUtil_0; }
	inline RuntimeObject** get_address_of_m_AsyncUtil_0() { return &___m_AsyncUtil_0; }
	inline void set_m_AsyncUtil_0(RuntimeObject* value)
	{
		___m_AsyncUtil_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AsyncUtil_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheFileName_1() { return static_cast<int32_t>(offsetof(CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32, ___m_CacheFileName_1)); }
	inline String_t* get_m_CacheFileName_1() const { return ___m_CacheFileName_1; }
	inline String_t** get_address_of_m_CacheFileName_1() { return &___m_CacheFileName_1; }
	inline void set_m_CacheFileName_1(String_t* value)
	{
		___m_CacheFileName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheFileName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_2() { return static_cast<int32_t>(offsetof(CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32, ___m_Logger_2)); }
	inline RuntimeObject* get_m_Logger_2() const { return ___m_Logger_2; }
	inline RuntimeObject** get_address_of_m_Logger_2() { return &___m_Logger_2; }
	inline void set_m_Logger_2(RuntimeObject* value)
	{
		___m_Logger_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CatalogURL_3() { return static_cast<int32_t>(offsetof(CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32, ___m_CatalogURL_3)); }
	inline String_t* get_m_CatalogURL_3() const { return ___m_CatalogURL_3; }
	inline String_t** get_address_of_m_CatalogURL_3() { return &___m_CatalogURL_3; }
	inline void set_m_CatalogURL_3(String_t* value)
	{
		___m_CatalogURL_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CatalogURL_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreName_4() { return static_cast<int32_t>(offsetof(CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32, ___m_StoreName_4)); }
	inline String_t* get_m_StoreName_4() const { return ___m_StoreName_4; }
	inline String_t** get_address_of_m_StoreName_4() { return &___m_StoreName_4; }
	inline void set_m_StoreName_4(String_t* value)
	{
		___m_StoreName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoreName_4), (void*)value);
	}
};


// UnityEngine.Purchasing.CloudCatalogImpl_<>c
struct  U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F_StaticFields
{
public:
	// UnityEngine.Purchasing.CloudCatalogImpl_<>c UnityEngine.Purchasing.CloudCatalogImpl_<>c::<>9
	U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F * ___U3CU3E9_0;
	// System.Func`3<System.Char,System.Int32,System.String> UnityEngine.Purchasing.CloudCatalogImpl_<>c::<>9__12_0
	Func_3_tD7998F8986F826E7DF513F88544C5878AFBA6BB2 * ___U3CU3E9__12_0_1;
	// System.Func`3<System.String,System.String,System.String> UnityEngine.Purchasing.CloudCatalogImpl_<>c::<>9__12_1
	Func_3_tEE1408F82AE5A0B981F1AA5408368EAFD620A1B8 * ___U3CU3E9__12_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_3_tD7998F8986F826E7DF513F88544C5878AFBA6BB2 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_3_tD7998F8986F826E7DF513F88544C5878AFBA6BB2 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_3_tD7998F8986F826E7DF513F88544C5878AFBA6BB2 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F_StaticFields, ___U3CU3E9__12_1_2)); }
	inline Func_3_tEE1408F82AE5A0B981F1AA5408368EAFD620A1B8 * get_U3CU3E9__12_1_2() const { return ___U3CU3E9__12_1_2; }
	inline Func_3_tEE1408F82AE5A0B981F1AA5408368EAFD620A1B8 ** get_address_of_U3CU3E9__12_1_2() { return &___U3CU3E9__12_1_2; }
	inline void set_U3CU3E9__12_1_2(Func_3_tEE1408F82AE5A0B981F1AA5408368EAFD620A1B8 * value)
	{
		___U3CU3E9__12_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_1_2), (void*)value);
	}
};


// UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_t679E57D2834C11DAE4B4EED44D21B8521D6A5960  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.CloudCatalogImpl UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<>4__this
	CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * ___U3CU3E4__this_0;
	// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>> UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::callback
	Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 * ___callback_1;
	// System.Int32 UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::delayInSeconds
	int32_t ___delayInSeconds_2;
	// System.Action UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<>9__2
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t679E57D2834C11DAE4B4EED44D21B8521D6A5960, ___U3CU3E4__this_0)); }
	inline CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t679E57D2834C11DAE4B4EED44D21B8521D6A5960, ___callback_1)); }
	inline Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 * get_callback_1() const { return ___callback_1; }
	inline Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}

	inline static int32_t get_offset_of_delayInSeconds_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t679E57D2834C11DAE4B4EED44D21B8521D6A5960, ___delayInSeconds_2)); }
	inline int32_t get_delayInSeconds_2() const { return ___delayInSeconds_2; }
	inline int32_t* get_address_of_delayInSeconds_2() { return &___delayInSeconds_2; }
	inline void set_delayInSeconds_2(int32_t value)
	{
		___delayInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t679E57D2834C11DAE4B4EED44D21B8521D6A5960, ___U3CU3E9__2_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__2_3() const { return ___U3CU3E9__2_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__2_3() { return &___U3CU3E9__2_3; }
	inline void set_U3CU3E9__2_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_3), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct  AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IPurchasingBinder UnityEngine.Purchasing.Extension.AbstractPurchasingModule::m_Binder
	RuntimeObject* ___m_Binder_0;

public:
	inline static int32_t get_offset_of_m_Binder_0() { return static_cast<int32_t>(offsetof(AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04, ___m_Binder_0)); }
	inline RuntimeObject* get_m_Binder_0() const { return ___m_Binder_0; }
	inline RuntimeObject** get_address_of_m_Binder_0() { return &___m_Binder_0; }
	inline void set_m_Binder_0(RuntimeObject* value)
	{
		___m_Binder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Binder_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.AbstractStore
struct  AbstractStore_tB0FD374A2E9858EB3A2DC721CBA280409F9485C0  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49
struct  U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Collections.IEnumerator UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::coroutine
	RuntimeObject* ___coroutine_2;
	// System.Int32 UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::delay
	int32_t ___delay_3;
	// UnityEngine.Purchasing.Extension.UnityUtil UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::<>4__this
	UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_coroutine_2() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF, ___coroutine_2)); }
	inline RuntimeObject* get_coroutine_2() const { return ___coroutine_2; }
	inline RuntimeObject** get_address_of_coroutine_2() { return &___coroutine_2; }
	inline void set_coroutine_2(RuntimeObject* value)
	{
		___coroutine_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coroutine_2), (void*)value);
	}

	inline static int32_t get_offset_of_delay_3() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF, ___delay_3)); }
	inline int32_t get_delay_3() const { return ___delay_3; }
	inline int32_t* get_address_of_delay_3() { return &___delay_3; }
	inline void set_delay_3(int32_t value)
	{
		___delay_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF, ___U3CU3E4__this_4)); }
	inline UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t8BA187E4F08FD14CB561B8A85308A6614A282AF2  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::subject
	String_t* ___subject_0;
	// System.String UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::payload
	String_t* ___payload_1;
	// System.String UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::receipt
	String_t* ___receipt_2;
	// System.String UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::transactionId
	String_t* ___transactionId_3;

public:
	inline static int32_t get_offset_of_subject_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t8BA187E4F08FD14CB561B8A85308A6614A282AF2, ___subject_0)); }
	inline String_t* get_subject_0() const { return ___subject_0; }
	inline String_t** get_address_of_subject_0() { return &___subject_0; }
	inline void set_subject_0(String_t* value)
	{
		___subject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_0), (void*)value);
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t8BA187E4F08FD14CB561B8A85308A6614A282AF2, ___payload_1)); }
	inline String_t* get_payload_1() const { return ___payload_1; }
	inline String_t** get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(String_t* value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_1), (void*)value);
	}

	inline static int32_t get_offset_of_receipt_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t8BA187E4F08FD14CB561B8A85308A6614A282AF2, ___receipt_2)); }
	inline String_t* get_receipt_2() const { return ___receipt_2; }
	inline String_t** get_address_of_receipt_2() { return &___receipt_2; }
	inline void set_receipt_2(String_t* value)
	{
		___receipt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receipt_2), (void*)value);
	}

	inline static int32_t get_offset_of_transactionId_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t8BA187E4F08FD14CB561B8A85308A6614A282AF2, ___transactionId_3)); }
	inline String_t* get_transactionId_3() const { return ___transactionId_3; }
	inline String_t** get_address_of_transactionId_3() { return &___transactionId_3; }
	inline void set_transactionId_3(String_t* value)
	{
		___transactionId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionId_3), (void*)value);
	}
};


// UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t4877482C1A597CE9EA826A3F8CF26BD92F23F639  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.FakeStore UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0::<>4__this
	FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0::products
	List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * ___products_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t4877482C1A597CE9EA826A3F8CF26BD92F23F639, ___U3CU3E4__this_0)); }
	inline FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_products_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t4877482C1A597CE9EA826A3F8CF26BD92F23F639, ___products_1)); }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * get_products_1() const { return ___products_1; }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF ** get_address_of_products_1() { return &___products_1; }
	inline void set_products_1(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * value)
	{
		___products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_1), (void*)value);
	}
};


// UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0
struct  U3CU3Ec__DisplayClass15_0_tCC954902BA0A504041EC9E77E5EFBD4D607EA6CF  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.FakeStore UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0::<>4__this
	FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * ___U3CU3E4__this_0;
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0::product
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_tCC954902BA0A504041EC9E77E5EFBD4D607EA6CF, ___U3CU3E4__this_0)); }
	inline FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_product_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_tCC954902BA0A504041EC9E77E5EFBD4D607EA6CF, ___product_1)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_product_1() const { return ___product_1; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_product_1() { return &___product_1; }
	inline void set_product_1(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___product_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_tB41C2F40C630200D9ACE9EC64085C3FB8AFE22E4  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass2_0::sku
	String_t* ___sku_0;

public:
	inline static int32_t get_offset_of_sku_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tB41C2F40C630200D9ACE9EC64085C3FB8AFE22E4, ___sku_0)); }
	inline String_t* get_sku_0() const { return ___sku_0; }
	inline String_t** get_address_of_sku_0() { return &___sku_0; }
	inline void set_sku_0(String_t* value)
	{
		___sku_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sku_0), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t0AB6CBFC47CB2D168AF2228D38826F1F4200A103  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass4_0::queriedSku
	String_t* ___queriedSku_0;

public:
	inline static int32_t get_offset_of_queriedSku_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t0AB6CBFC47CB2D168AF2228D38826F1F4200A103, ___queriedSku_0)); }
	inline String_t* get_queriedSku_0() const { return ___queriedSku_0; }
	inline String_t** get_address_of_queriedSku_0() { return &___queriedSku_0; }
	inline void set_queriedSku_0(String_t* value)
	{
		___queriedSku_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queriedSku_0), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFetchPurchases
struct  GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService UnityEngine.Purchasing.GoogleFetchPurchases::m_GooglePlayStoreService
	RuntimeObject* ___m_GooglePlayStoreService_0;
	// UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService UnityEngine.Purchasing.GoogleFetchPurchases::m_TransactionService
	RuntimeObject* ___m_TransactionService_1;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.GoogleFetchPurchases::m_StoreCallback
	RuntimeObject* ___m_StoreCallback_2;

public:
	inline static int32_t get_offset_of_m_GooglePlayStoreService_0() { return static_cast<int32_t>(offsetof(GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910, ___m_GooglePlayStoreService_0)); }
	inline RuntimeObject* get_m_GooglePlayStoreService_0() const { return ___m_GooglePlayStoreService_0; }
	inline RuntimeObject** get_address_of_m_GooglePlayStoreService_0() { return &___m_GooglePlayStoreService_0; }
	inline void set_m_GooglePlayStoreService_0(RuntimeObject* value)
	{
		___m_GooglePlayStoreService_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GooglePlayStoreService_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransactionService_1() { return static_cast<int32_t>(offsetof(GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910, ___m_TransactionService_1)); }
	inline RuntimeObject* get_m_TransactionService_1() const { return ___m_TransactionService_1; }
	inline RuntimeObject** get_address_of_m_TransactionService_1() { return &___m_TransactionService_1; }
	inline void set_m_TransactionService_1(RuntimeObject* value)
	{
		___m_TransactionService_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransactionService_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreCallback_2() { return static_cast<int32_t>(offsetof(GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910, ___m_StoreCallback_2)); }
	inline RuntimeObject* get_m_StoreCallback_2() const { return ___m_StoreCallback_2; }
	inline RuntimeObject** get_address_of_m_StoreCallback_2() { return &___m_StoreCallback_2; }
	inline void set_m_StoreCallback_2(RuntimeObject* value)
	{
		___m_StoreCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoreCallback_2), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFetchPurchases_<>c
struct  U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC_StaticFields
{
public:
	// UnityEngine.Purchasing.GoogleFetchPurchases_<>c UnityEngine.Purchasing.GoogleFetchPurchases_<>c::<>9
	U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean> UnityEngine.Purchasing.GoogleFetchPurchases_<>c::<>9__8_0
	Func_2_t0C7F6B3122AD28DD8D7D52468817E59C3555573A * ___U3CU3E9__8_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_t0C7F6B3122AD28DD8D7D52468817E59C3555573A * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_t0C7F6B3122AD28DD8D7D52468817E59C3555573A ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_t0C7F6B3122AD28DD8D7D52468817E59C3555573A * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t69B90CDD2D28AD402A9253682B2C62165BFF734E  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.GoogleFetchPurchases UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0::<>4__this
	GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910 * ___U3CU3E4__this_0;
	// System.Action UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0::onQueryPurchaseSucceed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onQueryPurchaseSucceed_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t69B90CDD2D28AD402A9253682B2C62165BFF734E, ___U3CU3E4__this_0)); }
	inline GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_onQueryPurchaseSucceed_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t69B90CDD2D28AD402A9253682B2C62165BFF734E, ___onQueryPurchaseSucceed_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onQueryPurchaseSucceed_1() const { return ___onQueryPurchaseSucceed_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onQueryPurchaseSucceed_1() { return &___onQueryPurchaseSucceed_1; }
	inline void set_onQueryPurchaseSucceed_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onQueryPurchaseSucceed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onQueryPurchaseSucceed_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFinishTransactionService
struct  GoogleFinishTransactionService_t48E8CEF99FF4FD0B1A2D7C1AF39235EBF744E751  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Interfaces.IGoogleBillingClient UnityEngine.Purchasing.GoogleFinishTransactionService::m_BillingClient
	RuntimeObject* ___m_BillingClient_0;
	// UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService UnityEngine.Purchasing.GoogleFinishTransactionService::m_GoogleQueryPurchasesService
	RuntimeObject* ___m_GoogleQueryPurchasesService_1;

public:
	inline static int32_t get_offset_of_m_BillingClient_0() { return static_cast<int32_t>(offsetof(GoogleFinishTransactionService_t48E8CEF99FF4FD0B1A2D7C1AF39235EBF744E751, ___m_BillingClient_0)); }
	inline RuntimeObject* get_m_BillingClient_0() const { return ___m_BillingClient_0; }
	inline RuntimeObject** get_address_of_m_BillingClient_0() { return &___m_BillingClient_0; }
	inline void set_m_BillingClient_0(RuntimeObject* value)
	{
		___m_BillingClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BillingClient_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_GoogleQueryPurchasesService_1() { return static_cast<int32_t>(offsetof(GoogleFinishTransactionService_t48E8CEF99FF4FD0B1A2D7C1AF39235EBF744E751, ___m_GoogleQueryPurchasesService_1)); }
	inline RuntimeObject* get_m_GoogleQueryPurchasesService_1() const { return ___m_GoogleQueryPurchasesService_1; }
	inline RuntimeObject** get_address_of_m_GoogleQueryPurchasesService_1() { return &___m_GoogleQueryPurchasesService_1; }
	inline void set_m_GoogleQueryPurchasesService_1(RuntimeObject* value)
	{
		___m_GoogleQueryPurchasesService_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GoogleQueryPurchasesService_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t73E14EB796A01760EC9D9203BC3EE387CC927319  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::product
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product_0;
	// UnityEngine.Purchasing.GoogleFinishTransactionService UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::<>4__this
	GoogleFinishTransactionService_t48E8CEF99FF4FD0B1A2D7C1AF39235EBF744E751 * ___U3CU3E4__this_1;
	// System.String UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::purchaseToken
	String_t* ___purchaseToken_2;
	// System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String> UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::onConsume
	Action_4_t28CF4A06D662386572B79C451FFDCC866ECFE3ED * ___onConsume_3;
	// System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult> UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::onAcknowledge
	Action_3_tDAA4AD214D2CEC03F07814ABAC061922F0E100B0 * ___onAcknowledge_4;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t73E14EB796A01760EC9D9203BC3EE387CC927319, ___product_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t73E14EB796A01760EC9D9203BC3EE387CC927319, ___U3CU3E4__this_1)); }
	inline GoogleFinishTransactionService_t48E8CEF99FF4FD0B1A2D7C1AF39235EBF744E751 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline GoogleFinishTransactionService_t48E8CEF99FF4FD0B1A2D7C1AF39235EBF744E751 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(GoogleFinishTransactionService_t48E8CEF99FF4FD0B1A2D7C1AF39235EBF744E751 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseToken_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t73E14EB796A01760EC9D9203BC3EE387CC927319, ___purchaseToken_2)); }
	inline String_t* get_purchaseToken_2() const { return ___purchaseToken_2; }
	inline String_t** get_address_of_purchaseToken_2() { return &___purchaseToken_2; }
	inline void set_purchaseToken_2(String_t* value)
	{
		___purchaseToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchaseToken_2), (void*)value);
	}

	inline static int32_t get_offset_of_onConsume_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t73E14EB796A01760EC9D9203BC3EE387CC927319, ___onConsume_3)); }
	inline Action_4_t28CF4A06D662386572B79C451FFDCC866ECFE3ED * get_onConsume_3() const { return ___onConsume_3; }
	inline Action_4_t28CF4A06D662386572B79C451FFDCC866ECFE3ED ** get_address_of_onConsume_3() { return &___onConsume_3; }
	inline void set_onConsume_3(Action_4_t28CF4A06D662386572B79C451FFDCC866ECFE3ED * value)
	{
		___onConsume_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onConsume_3), (void*)value);
	}

	inline static int32_t get_offset_of_onAcknowledge_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t73E14EB796A01760EC9D9203BC3EE387CC927319, ___onAcknowledge_4)); }
	inline Action_3_tDAA4AD214D2CEC03F07814ABAC061922F0E100B0 * get_onAcknowledge_4() const { return ___onAcknowledge_4; }
	inline Action_3_tDAA4AD214D2CEC03F07814ABAC061922F0E100B0 ** get_address_of_onAcknowledge_4() { return &___onAcknowledge_4; }
	inline void set_onAcknowledge_4(Action_3_tDAA4AD214D2CEC03F07814ABAC061922F0E100B0 * value)
	{
		___onAcknowledge_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAcknowledge_4), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_tF5CC1011A36F7F148767476CFC5FD2CFE7D232C3  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass4_0::product
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product_0;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tF5CC1011A36F7F148767476CFC5FD2CFE7D232C3, ___product_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePlayStoreExtensions_<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_t66B0E134073B1712E021BA3D83CE3AA2F5B4CE4E  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> UnityEngine.Purchasing.GooglePlayStoreExtensions_<>c__DisplayClass8_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t66B0E134073B1712E021BA3D83CE3AA2F5B4CE4E, ___callback_0)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService
struct  GooglePlayStoreRetrieveProductsService_tCBD4802AACDB554BC1C502CBC64E8DCB7CFCB12B  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::m_GooglePlayStoreService
	RuntimeObject* ___m_GooglePlayStoreService_0;
	// UnityEngine.Purchasing.IGoogleFetchPurchases UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::m_GoogleFetchPurchases
	RuntimeObject* ___m_GoogleFetchPurchases_1;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::m_StoreCallback
	RuntimeObject* ___m_StoreCallback_2;

public:
	inline static int32_t get_offset_of_m_GooglePlayStoreService_0() { return static_cast<int32_t>(offsetof(GooglePlayStoreRetrieveProductsService_tCBD4802AACDB554BC1C502CBC64E8DCB7CFCB12B, ___m_GooglePlayStoreService_0)); }
	inline RuntimeObject* get_m_GooglePlayStoreService_0() const { return ___m_GooglePlayStoreService_0; }
	inline RuntimeObject** get_address_of_m_GooglePlayStoreService_0() { return &___m_GooglePlayStoreService_0; }
	inline void set_m_GooglePlayStoreService_0(RuntimeObject* value)
	{
		___m_GooglePlayStoreService_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GooglePlayStoreService_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_GoogleFetchPurchases_1() { return static_cast<int32_t>(offsetof(GooglePlayStoreRetrieveProductsService_tCBD4802AACDB554BC1C502CBC64E8DCB7CFCB12B, ___m_GoogleFetchPurchases_1)); }
	inline RuntimeObject* get_m_GoogleFetchPurchases_1() const { return ___m_GoogleFetchPurchases_1; }
	inline RuntimeObject** get_address_of_m_GoogleFetchPurchases_1() { return &___m_GoogleFetchPurchases_1; }
	inline void set_m_GoogleFetchPurchases_1(RuntimeObject* value)
	{
		___m_GoogleFetchPurchases_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GoogleFetchPurchases_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreCallback_2() { return static_cast<int32_t>(offsetof(GooglePlayStoreRetrieveProductsService_tCBD4802AACDB554BC1C502CBC64E8DCB7CFCB12B, ___m_StoreCallback_2)); }
	inline RuntimeObject* get_m_StoreCallback_2() const { return ___m_StoreCallback_2; }
	inline RuntimeObject** get_address_of_m_StoreCallback_2() { return &___m_StoreCallback_2; }
	inline void set_m_StoreCallback_2(RuntimeObject* value)
	{
		___m_StoreCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoreCallback_2), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_t9F4F0C84DCC8EA85C5A37A5AC2B8F4164B061A5B  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0::retrievedProducts
	List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * ___retrievedProducts_0;
	// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0::<>4__this
	GooglePlayStoreRetrieveProductsService_tCBD4802AACDB554BC1C502CBC64E8DCB7CFCB12B * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_retrievedProducts_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t9F4F0C84DCC8EA85C5A37A5AC2B8F4164B061A5B, ___retrievedProducts_0)); }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * get_retrievedProducts_0() const { return ___retrievedProducts_0; }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF ** get_address_of_retrievedProducts_0() { return &___retrievedProducts_0; }
	inline void set_retrievedProducts_0(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * value)
	{
		___retrievedProducts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___retrievedProducts_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t9F4F0C84DCC8EA85C5A37A5AC2B8F4164B061A5B, ___U3CU3E4__this_1)); }
	inline GooglePlayStoreRetrieveProductsService_tCBD4802AACDB554BC1C502CBC64E8DCB7CFCB12B * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline GooglePlayStoreRetrieveProductsService_tCBD4802AACDB554BC1C502CBC64E8DCB7CFCB12B ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(GooglePlayStoreRetrieveProductsService_tCBD4802AACDB554BC1C502CBC64E8DCB7CFCB12B * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePurchaseService
struct  GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Interfaces.IGoogleBillingClient UnityEngine.Purchasing.GooglePurchaseService::m_BillingClient
	RuntimeObject* ___m_BillingClient_0;
	// UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback UnityEngine.Purchasing.GooglePurchaseService::m_GooglePurchaseCallback
	RuntimeObject* ___m_GooglePurchaseCallback_1;
	// UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService UnityEngine.Purchasing.GooglePurchaseService::m_QuerySkuDetailsService
	RuntimeObject* ___m_QuerySkuDetailsService_2;

public:
	inline static int32_t get_offset_of_m_BillingClient_0() { return static_cast<int32_t>(offsetof(GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5, ___m_BillingClient_0)); }
	inline RuntimeObject* get_m_BillingClient_0() const { return ___m_BillingClient_0; }
	inline RuntimeObject** get_address_of_m_BillingClient_0() { return &___m_BillingClient_0; }
	inline void set_m_BillingClient_0(RuntimeObject* value)
	{
		___m_BillingClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BillingClient_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_GooglePurchaseCallback_1() { return static_cast<int32_t>(offsetof(GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5, ___m_GooglePurchaseCallback_1)); }
	inline RuntimeObject* get_m_GooglePurchaseCallback_1() const { return ___m_GooglePurchaseCallback_1; }
	inline RuntimeObject** get_address_of_m_GooglePurchaseCallback_1() { return &___m_GooglePurchaseCallback_1; }
	inline void set_m_GooglePurchaseCallback_1(RuntimeObject* value)
	{
		___m_GooglePurchaseCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GooglePurchaseCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_QuerySkuDetailsService_2() { return static_cast<int32_t>(offsetof(GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5, ___m_QuerySkuDetailsService_2)); }
	inline RuntimeObject* get_m_QuerySkuDetailsService_2() const { return ___m_QuerySkuDetailsService_2; }
	inline RuntimeObject** get_address_of_m_QuerySkuDetailsService_2() { return &___m_QuerySkuDetailsService_2; }
	inline void set_m_QuerySkuDetailsService_2(RuntimeObject* value)
	{
		___m_QuerySkuDetailsService_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_QuerySkuDetailsService_2), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t5579282DB2370B9C4D137BD8EF3C9A749B8955D7  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.GooglePurchaseService UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::<>4__this
	GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5 * ___U3CU3E4__this_0;
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::oldProduct
	Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___oldProduct_1;
	// System.Int32 UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::desiredProrationMode
	int32_t ___desiredProrationMode_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t5579282DB2370B9C4D137BD8EF3C9A749B8955D7, ___U3CU3E4__this_0)); }
	inline GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_oldProduct_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t5579282DB2370B9C4D137BD8EF3C9A749B8955D7, ___oldProduct_1)); }
	inline Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * get_oldProduct_1() const { return ___oldProduct_1; }
	inline Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E ** get_address_of_oldProduct_1() { return &___oldProduct_1; }
	inline void set_oldProduct_1(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * value)
	{
		___oldProduct_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldProduct_1), (void*)value);
	}

	inline static int32_t get_offset_of_desiredProrationMode_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t5579282DB2370B9C4D137BD8EF3C9A749B8955D7, ___desiredProrationMode_2)); }
	inline int32_t get_desiredProrationMode_2() const { return ___desiredProrationMode_2; }
	inline int32_t* get_address_of_desiredProrationMode_2() { return &___desiredProrationMode_2; }
	inline void set_desiredProrationMode_2(int32_t value)
	{
		___desiredProrationMode_2 = value;
	}
};


// UnityEngine.Purchasing.GoogleQueryPurchasesService
struct  GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Interfaces.IGoogleBillingClient UnityEngine.Purchasing.GoogleQueryPurchasesService::m_BillingClient
	RuntimeObject* ___m_BillingClient_0;
	// UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService UnityEngine.Purchasing.GoogleQueryPurchasesService::m_CachedQuerySkuDetailsService
	RuntimeObject* ___m_CachedQuerySkuDetailsService_1;

public:
	inline static int32_t get_offset_of_m_BillingClient_0() { return static_cast<int32_t>(offsetof(GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A, ___m_BillingClient_0)); }
	inline RuntimeObject* get_m_BillingClient_0() const { return ___m_BillingClient_0; }
	inline RuntimeObject** get_address_of_m_BillingClient_0() { return &___m_BillingClient_0; }
	inline void set_m_BillingClient_0(RuntimeObject* value)
	{
		___m_BillingClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BillingClient_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedQuerySkuDetailsService_1() { return static_cast<int32_t>(offsetof(GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A, ___m_CachedQuerySkuDetailsService_1)); }
	inline RuntimeObject* get_m_CachedQuerySkuDetailsService_1() const { return ___m_CachedQuerySkuDetailsService_1; }
	inline RuntimeObject** get_address_of_m_CachedQuerySkuDetailsService_1() { return &___m_CachedQuerySkuDetailsService_1; }
	inline void set_m_CachedQuerySkuDetailsService_1(RuntimeObject* value)
	{
		___m_CachedQuerySkuDetailsService_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedQuerySkuDetailsService_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.GoogleQueryPurchasesService UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0::<>4__this
	GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A * ___U3CU3E4__this_0;
	// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>> UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0::onQueryPurchaseSucceed
	Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E * ___onQueryPurchaseSucceed_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE, ___U3CU3E4__this_0)); }
	inline GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_onQueryPurchaseSucceed_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE, ___onQueryPurchaseSucceed_1)); }
	inline Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E * get_onQueryPurchaseSucceed_1() const { return ___onQueryPurchaseSucceed_1; }
	inline Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E ** get_address_of_onQueryPurchaseSucceed_1() { return &___onQueryPurchaseSucceed_1; }
	inline void set_onQueryPurchaseSucceed_1(Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E * value)
	{
		___onQueryPurchaseSucceed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onQueryPurchaseSucceed_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1
struct  U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase> UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1::googlePurchasesInSubs
	List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * ___googlePurchasesInSubs_0;
	// UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0 UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_googlePurchasesInSubs_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F, ___googlePurchasesInSubs_0)); }
	inline List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * get_googlePurchasesInSubs_0() const { return ___googlePurchasesInSubs_0; }
	inline List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 ** get_address_of_googlePurchasesInSubs_0() { return &___googlePurchasesInSubs_0; }
	inline void set_googlePurchasesInSubs_0(List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * value)
	{
		___googlePurchasesInSubs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googlePurchasesInSubs_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// UnityEngine.Purchasing.LocalizedProductDescription_<>c
struct  U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16_StaticFields
{
public:
	// UnityEngine.Purchasing.LocalizedProductDescription_<>c UnityEngine.Purchasing.LocalizedProductDescription_<>c::<>9
	U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16 * ___U3CU3E9_0;
	// System.Text.RegularExpressions.MatchEvaluator UnityEngine.Purchasing.LocalizedProductDescription_<>c::<>9__11_0
	MatchEvaluator_tF5A86B09324F457929EC459E991709F1A12ADD1D * ___U3CU3E9__11_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16_StaticFields, ___U3CU3E9__11_0_1)); }
	inline MatchEvaluator_tF5A86B09324F457929EC459E991709F1A12ADD1D * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline MatchEvaluator_tF5A86B09324F457929EC459E991709F1A12ADD1D ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(MatchEvaluator_tF5A86B09324F457929EC459E991709F1A12ADD1D * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.Models.GooglePurchase
struct  GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GooglePurchase::javaPurchase
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaPurchase_0;
	// System.Int32 UnityEngine.Purchasing.Models.GooglePurchase::purchaseState
	int32_t ___purchaseState_1;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::sku
	String_t* ___sku_2;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::orderId
	String_t* ___orderId_3;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::receipt
	String_t* ___receipt_4;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::signature
	String_t* ___signature_5;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::originalJson
	String_t* ___originalJson_6;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::purchaseToken
	String_t* ___purchaseToken_7;

public:
	inline static int32_t get_offset_of_javaPurchase_0() { return static_cast<int32_t>(offsetof(GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314, ___javaPurchase_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_javaPurchase_0() const { return ___javaPurchase_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_javaPurchase_0() { return &___javaPurchase_0; }
	inline void set_javaPurchase_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___javaPurchase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaPurchase_0), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseState_1() { return static_cast<int32_t>(offsetof(GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314, ___purchaseState_1)); }
	inline int32_t get_purchaseState_1() const { return ___purchaseState_1; }
	inline int32_t* get_address_of_purchaseState_1() { return &___purchaseState_1; }
	inline void set_purchaseState_1(int32_t value)
	{
		___purchaseState_1 = value;
	}

	inline static int32_t get_offset_of_sku_2() { return static_cast<int32_t>(offsetof(GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314, ___sku_2)); }
	inline String_t* get_sku_2() const { return ___sku_2; }
	inline String_t** get_address_of_sku_2() { return &___sku_2; }
	inline void set_sku_2(String_t* value)
	{
		___sku_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sku_2), (void*)value);
	}

	inline static int32_t get_offset_of_orderId_3() { return static_cast<int32_t>(offsetof(GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314, ___orderId_3)); }
	inline String_t* get_orderId_3() const { return ___orderId_3; }
	inline String_t** get_address_of_orderId_3() { return &___orderId_3; }
	inline void set_orderId_3(String_t* value)
	{
		___orderId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderId_3), (void*)value);
	}

	inline static int32_t get_offset_of_receipt_4() { return static_cast<int32_t>(offsetof(GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314, ___receipt_4)); }
	inline String_t* get_receipt_4() const { return ___receipt_4; }
	inline String_t** get_address_of_receipt_4() { return &___receipt_4; }
	inline void set_receipt_4(String_t* value)
	{
		___receipt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receipt_4), (void*)value);
	}

	inline static int32_t get_offset_of_signature_5() { return static_cast<int32_t>(offsetof(GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314, ___signature_5)); }
	inline String_t* get_signature_5() const { return ___signature_5; }
	inline String_t** get_address_of_signature_5() { return &___signature_5; }
	inline void set_signature_5(String_t* value)
	{
		___signature_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_5), (void*)value);
	}

	inline static int32_t get_offset_of_originalJson_6() { return static_cast<int32_t>(offsetof(GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314, ___originalJson_6)); }
	inline String_t* get_originalJson_6() const { return ___originalJson_6; }
	inline String_t** get_address_of_originalJson_6() { return &___originalJson_6; }
	inline void set_originalJson_6(String_t* value)
	{
		___originalJson_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalJson_6), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseToken_7() { return static_cast<int32_t>(offsetof(GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314, ___purchaseToken_7)); }
	inline String_t* get_purchaseToken_7() const { return ___purchaseToken_7; }
	inline String_t** get_address_of_purchaseToken_7() { return &___purchaseToken_7; }
	inline void set_purchaseToken_7(String_t* value)
	{
		___purchaseToken_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchaseToken_7), (void*)value);
	}
};


// UnityEngine.Purchasing.Models.GooglePurchaseResult
struct  GooglePurchaseResult_tD281D28FFEDF055C61EAF87CD825B6691B000658  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Models.GooglePurchaseResult::m_ResponseCode
	int32_t ___m_ResponseCode_0;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase> UnityEngine.Purchasing.Models.GooglePurchaseResult::m_Purchases
	List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * ___m_Purchases_1;

public:
	inline static int32_t get_offset_of_m_ResponseCode_0() { return static_cast<int32_t>(offsetof(GooglePurchaseResult_tD281D28FFEDF055C61EAF87CD825B6691B000658, ___m_ResponseCode_0)); }
	inline int32_t get_m_ResponseCode_0() const { return ___m_ResponseCode_0; }
	inline int32_t* get_address_of_m_ResponseCode_0() { return &___m_ResponseCode_0; }
	inline void set_m_ResponseCode_0(int32_t value)
	{
		___m_ResponseCode_0 = value;
	}

	inline static int32_t get_offset_of_m_Purchases_1() { return static_cast<int32_t>(offsetof(GooglePurchaseResult_tD281D28FFEDF055C61EAF87CD825B6691B000658, ___m_Purchases_1)); }
	inline List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * get_m_Purchases_1() const { return ___m_Purchases_1; }
	inline List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 ** get_address_of_m_Purchases_1() { return &___m_Purchases_1; }
	inline void set_m_Purchases_1(List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * value)
	{
		___m_Purchases_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Purchases_1), (void*)value);
	}
};


// UnityEngine.Purchasing.Product
struct  Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CdefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CdefinitionU3Ek__BackingField_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_U3CdefinitionU3Ek__BackingField_0() const { return ___U3CdefinitionU3Ek__BackingField_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_U3CdefinitionU3Ek__BackingField_0() { return &___U3CdefinitionU3Ek__BackingField_0; }
	inline void set_U3CdefinitionU3Ek__BackingField_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___U3CdefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CavailableToPurchaseU3Ek__BackingField_2)); }
	inline bool get_U3CavailableToPurchaseU3Ek__BackingField_2() const { return ___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return &___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline void set_U3CavailableToPurchaseU3Ek__BackingField_2(bool value)
	{
		___U3CavailableToPurchaseU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CtransactionIDU3Ek__BackingField_3)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_3() const { return ___U3CtransactionIDU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_3() { return &___U3CtransactionIDU3Ek__BackingField_3; }
	inline void set_U3CtransactionIDU3Ek__BackingField_3(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CreceiptU3Ek__BackingField_4)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_4() const { return ___U3CreceiptU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_4() { return &___U3CreceiptU3Ek__BackingField_4; }
	inline void set_U3CreceiptU3Ek__BackingField_4(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalog_<>c
struct  U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52_StaticFields
{
public:
	// UnityEngine.Purchasing.ProductCatalog_<>c UnityEngine.Purchasing.ProductCatalog_<>c::<>9
	U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductCatalogItem,System.Boolean> UnityEngine.Purchasing.ProductCatalog_<>c::<>9__8_0
	Func_2_tE6ECEAEE694A30C51ED7DA45F161F05B793AD1B1 * ___U3CU3E9__8_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_tE6ECEAEE694A30C51ED7DA45F161F05B793AD1B1 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_tE6ECEAEE694A30C51ED7DA45F161F05B793AD1B1 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_tE6ECEAEE694A30C51ED7DA45F161F05B793AD1B1 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.QuerySkuDetailsService
struct  QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaClass> UnityEngine.Purchasing.QuerySkuDetailsService::m_CachedQueriedSku
	List_1_t75EFA6BB9024C1D2BBB00545C10AE41E4E36F73E * ___m_CachedQueriedSku_0;
	// UnityEngine.Purchasing.Interfaces.IGoogleBillingClient UnityEngine.Purchasing.QuerySkuDetailsService::m_BillingClient
	RuntimeObject* ___m_BillingClient_1;
	// UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService UnityEngine.Purchasing.QuerySkuDetailsService::m_GoogleCachedQuerySkuDetailsService
	RuntimeObject* ___m_GoogleCachedQuerySkuDetailsService_2;
	// System.Int32 UnityEngine.Purchasing.QuerySkuDetailsService::m_NumberReceivedCallbacks
	int32_t ___m_NumberReceivedCallbacks_3;
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject> UnityEngine.Purchasing.QuerySkuDetailsService::m_QueriedSkuDetails
	List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___m_QueriedSkuDetails_4;

public:
	inline static int32_t get_offset_of_m_CachedQueriedSku_0() { return static_cast<int32_t>(offsetof(QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367, ___m_CachedQueriedSku_0)); }
	inline List_1_t75EFA6BB9024C1D2BBB00545C10AE41E4E36F73E * get_m_CachedQueriedSku_0() const { return ___m_CachedQueriedSku_0; }
	inline List_1_t75EFA6BB9024C1D2BBB00545C10AE41E4E36F73E ** get_address_of_m_CachedQueriedSku_0() { return &___m_CachedQueriedSku_0; }
	inline void set_m_CachedQueriedSku_0(List_1_t75EFA6BB9024C1D2BBB00545C10AE41E4E36F73E * value)
	{
		___m_CachedQueriedSku_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedQueriedSku_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BillingClient_1() { return static_cast<int32_t>(offsetof(QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367, ___m_BillingClient_1)); }
	inline RuntimeObject* get_m_BillingClient_1() const { return ___m_BillingClient_1; }
	inline RuntimeObject** get_address_of_m_BillingClient_1() { return &___m_BillingClient_1; }
	inline void set_m_BillingClient_1(RuntimeObject* value)
	{
		___m_BillingClient_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BillingClient_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_GoogleCachedQuerySkuDetailsService_2() { return static_cast<int32_t>(offsetof(QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367, ___m_GoogleCachedQuerySkuDetailsService_2)); }
	inline RuntimeObject* get_m_GoogleCachedQuerySkuDetailsService_2() const { return ___m_GoogleCachedQuerySkuDetailsService_2; }
	inline RuntimeObject** get_address_of_m_GoogleCachedQuerySkuDetailsService_2() { return &___m_GoogleCachedQuerySkuDetailsService_2; }
	inline void set_m_GoogleCachedQuerySkuDetailsService_2(RuntimeObject* value)
	{
		___m_GoogleCachedQuerySkuDetailsService_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GoogleCachedQuerySkuDetailsService_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumberReceivedCallbacks_3() { return static_cast<int32_t>(offsetof(QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367, ___m_NumberReceivedCallbacks_3)); }
	inline int32_t get_m_NumberReceivedCallbacks_3() const { return ___m_NumberReceivedCallbacks_3; }
	inline int32_t* get_address_of_m_NumberReceivedCallbacks_3() { return &___m_NumberReceivedCallbacks_3; }
	inline void set_m_NumberReceivedCallbacks_3(int32_t value)
	{
		___m_NumberReceivedCallbacks_3 = value;
	}

	inline static int32_t get_offset_of_m_QueriedSkuDetails_4() { return static_cast<int32_t>(offsetof(QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367, ___m_QueriedSkuDetails_4)); }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * get_m_QueriedSkuDetails_4() const { return ___m_QueriedSkuDetails_4; }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B ** get_address_of_m_QueriedSkuDetails_4() { return &___m_QueriedSkuDetails_4; }
	inline void set_m_QueriedSkuDetails_4(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * value)
	{
		___m_QueriedSkuDetails_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_QueriedSkuDetails_4), (void*)value);
	}
};


// UnityEngine.Purchasing.QuerySkuDetailsService_<>c
struct  U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA_StaticFields
{
public:
	// UnityEngine.Purchasing.QuerySkuDetailsService_<>c UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<>9
	U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<>9__14_0
	Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * ___U3CU3E9__14_0_1;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<>9__14_1
	Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * ___U3CU3E9__14_1_2;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<>9__15_0
	Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * ___U3CU3E9__15_0_3;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<>9__15_1
	Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * ___U3CU3E9__15_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA_StaticFields, ___U3CU3E9__14_1_2)); }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * get_U3CU3E9__14_1_2() const { return ___U3CU3E9__14_1_2; }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 ** get_address_of_U3CU3E9__14_1_2() { return &___U3CU3E9__14_1_2; }
	inline void set_U3CU3E9__14_1_2(Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * value)
	{
		___U3CU3E9__14_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA_StaticFields, ___U3CU3E9__15_0_3)); }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * get_U3CU3E9__15_0_3() const { return ___U3CU3E9__15_0_3; }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 ** get_address_of_U3CU3E9__15_0_3() { return &___U3CU3E9__15_0_3; }
	inline void set_U3CU3E9__15_0_3(Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * value)
	{
		___U3CU3E9__15_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA_StaticFields, ___U3CU3E9__15_1_4)); }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * get_U3CU3E9__15_1_4() const { return ___U3CU3E9__15_1_4; }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 ** get_address_of_U3CU3E9__15_1_4() { return &___U3CU3E9__15_1_4; }
	inline void set_U3CU3E9__15_1_4(Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * value)
	{
		___U3CU3E9__15_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_1_4), (void*)value);
	}
};


// UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_tDCF4DD300FCB9D5B28162FFEDB742BB2CBD24F92  : public RuntimeObject
{
public:
	// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>> UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass12_0::onSkuDetailsResponse
	Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 * ___onSkuDetailsResponse_0;

public:
	inline static int32_t get_offset_of_onSkuDetailsResponse_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tDCF4DD300FCB9D5B28162FFEDB742BB2CBD24F92, ___onSkuDetailsResponse_0)); }
	inline Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 * get_onSkuDetailsResponse_0() const { return ___onSkuDetailsResponse_0; }
	inline Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 ** get_address_of_onSkuDetailsResponse_0() { return &___onSkuDetailsResponse_0; }
	inline void set_onSkuDetailsResponse_0(Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 * value)
	{
		___onSkuDetailsResponse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSkuDetailsResponse_0), (void*)value);
	}
};


// UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0
struct  U3CU3Ec__DisplayClass16_0_t24B245DD3FF7C86A62595CFCB8B86AA4392DBBFC  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.QuerySkuDetailsService UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0::<>4__this
	QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367 * ___U3CU3E4__this_0;
	// System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>> UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0::onSkuDetailsResponse
	Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 * ___onSkuDetailsResponse_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t24B245DD3FF7C86A62595CFCB8B86AA4392DBBFC, ___U3CU3E4__this_0)); }
	inline QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_onSkuDetailsResponse_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t24B245DD3FF7C86A62595CFCB8B86AA4392DBBFC, ___onSkuDetailsResponse_1)); }
	inline Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 * get_onSkuDetailsResponse_1() const { return ___onSkuDetailsResponse_1; }
	inline Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 ** get_address_of_onSkuDetailsResponse_1() { return &___onSkuDetailsResponse_1; }
	inline void set_onSkuDetailsResponse_1(Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 * value)
	{
		___onSkuDetailsResponse_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSkuDetailsResponse_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback
struct  ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback::m_ForwardTo
	RuntimeObject* ___m_ForwardTo_0;
	// Uniject.IUtil UnityEngine.Purchasing.ScriptingStoreCallback::m_Util
	RuntimeObject* ___m_Util_1;

public:
	inline static int32_t get_offset_of_m_ForwardTo_0() { return static_cast<int32_t>(offsetof(ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091, ___m_ForwardTo_0)); }
	inline RuntimeObject* get_m_ForwardTo_0() const { return ___m_ForwardTo_0; }
	inline RuntimeObject** get_address_of_m_ForwardTo_0() { return &___m_ForwardTo_0; }
	inline void set_m_ForwardTo_0(RuntimeObject* value)
	{
		___m_ForwardTo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ForwardTo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Util_1() { return static_cast<int32_t>(offsetof(ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091, ___m_Util_1)); }
	inline RuntimeObject* get_m_Util_1() const { return ___m_Util_1; }
	inline RuntimeObject** get_address_of_m_Util_1() { return &___m_Util_1; }
	inline void set_m_Util_1(RuntimeObject* value)
	{
		___m_Util_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Util_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t1F9ECD658852CC94305AD1E9F4250AC5ADF467C2  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0::<>4__this
	ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0::products
	List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * ___products_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t1F9ECD658852CC94305AD1E9F4250AC5ADF467C2, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_products_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t1F9ECD658852CC94305AD1E9F4250AC5ADF467C2, ___products_1)); }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * get_products_1() const { return ___products_1; }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF ** get_address_of_products_1() { return &___products_1; }
	inline void set_products_1(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * value)
	{
		___products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t4696ECA9E5908925826E0CADA88D96FBCB87972F  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::<>4__this
	ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::id
	String_t* ___id_1;
	// System.String UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::receipt
	String_t* ___receipt_2;
	// System.String UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::transactionID
	String_t* ___transactionID_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t4696ECA9E5908925826E0CADA88D96FBCB87972F, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t4696ECA9E5908925826E0CADA88D96FBCB87972F, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_receipt_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t4696ECA9E5908925826E0CADA88D96FBCB87972F, ___receipt_2)); }
	inline String_t* get_receipt_2() const { return ___receipt_2; }
	inline String_t** get_address_of_receipt_2() { return &___receipt_2; }
	inline void set_receipt_2(String_t* value)
	{
		___receipt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receipt_2), (void*)value);
	}

	inline static int32_t get_offset_of_transactionID_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t4696ECA9E5908925826E0CADA88D96FBCB87972F, ___transactionID_3)); }
	inline String_t* get_transactionID_3() const { return ___transactionID_3; }
	inline String_t** get_address_of_transactionID_3() { return &___transactionID_3; }
	inline void set_transactionID_3(String_t* value)
	{
		___transactionID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionID_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t0F3B406AA3F5477A31A14C6AD62F03D2E82F489F  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass9_0::<>4__this
	ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * ___U3CU3E4__this_0;
	// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass9_0::desc
	PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * ___desc_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t0F3B406AA3F5477A31A14C6AD62F03D2E82F489F, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_desc_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t0F3B406AA3F5477A31A14C6AD62F03D2E82F489F, ___desc_1)); }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * get_desc_1() const { return ___desc_1; }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 ** get_address_of_desc_1() { return &___desc_1; }
	inline void set_desc_1(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * value)
	{
		___desc_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___desc_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingUnityCallback
struct  ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.IUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback::forwardTo
	RuntimeObject* ___forwardTo_0;
	// Uniject.IUtil UnityEngine.Purchasing.ScriptingUnityCallback::util
	RuntimeObject* ___util_1;

public:
	inline static int32_t get_offset_of_forwardTo_0() { return static_cast<int32_t>(offsetof(ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A, ___forwardTo_0)); }
	inline RuntimeObject* get_forwardTo_0() const { return ___forwardTo_0; }
	inline RuntimeObject** get_address_of_forwardTo_0() { return &___forwardTo_0; }
	inline void set_forwardTo_0(RuntimeObject* value)
	{
		___forwardTo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forwardTo_0), (void*)value);
	}

	inline static int32_t get_offset_of_util_1() { return static_cast<int32_t>(offsetof(ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A, ___util_1)); }
	inline RuntimeObject* get_util_1() const { return ___util_1; }
	inline RuntimeObject** get_address_of_util_1() { return &___util_1; }
	inline void set_util_1(RuntimeObject* value)
	{
		___util_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___util_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t58134579F55AF68E4EE6D55AC933939CDD671AA2  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass3_0::<>4__this
	ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass3_0::json
	String_t* ___json_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t58134579F55AF68E4EE6D55AC933939CDD671AA2, ___U3CU3E4__this_0)); }
	inline ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t58134579F55AF68E4EE6D55AC933939CDD671AA2, ___json_1)); }
	inline String_t* get_json_1() const { return ___json_1; }
	inline String_t** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(String_t* value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t0CE366BBEB8F6F8A8DF579BA61A65C46F99DD34F  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass4_0::<>4__this
	ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass4_0::json
	String_t* ___json_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t0CE366BBEB8F6F8A8DF579BA61A65C46F99DD34F, ___U3CU3E4__this_0)); }
	inline ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t0CE366BBEB8F6F8A8DF579BA61A65C46F99DD34F, ___json_1)); }
	inline String_t* get_json_1() const { return ___json_1; }
	inline String_t** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(String_t* value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_tD2BFE44550006EC0AD2636A0508E7DCE25EBB458  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass5_0::<>4__this
	ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass5_0::id
	String_t* ___id_1;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass5_0::receipt
	String_t* ___receipt_2;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass5_0::transactionID
	String_t* ___transactionID_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD2BFE44550006EC0AD2636A0508E7DCE25EBB458, ___U3CU3E4__this_0)); }
	inline ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD2BFE44550006EC0AD2636A0508E7DCE25EBB458, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_receipt_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD2BFE44550006EC0AD2636A0508E7DCE25EBB458, ___receipt_2)); }
	inline String_t* get_receipt_2() const { return ___receipt_2; }
	inline String_t** get_address_of_receipt_2() { return &___receipt_2; }
	inline void set_receipt_2(String_t* value)
	{
		___receipt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receipt_2), (void*)value);
	}

	inline static int32_t get_offset_of_transactionID_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD2BFE44550006EC0AD2636A0508E7DCE25EBB458, ___transactionID_3)); }
	inline String_t* get_transactionID_3() const { return ___transactionID_3; }
	inline String_t** get_address_of_transactionID_3() { return &___transactionID_3; }
	inline void set_transactionID_3(String_t* value)
	{
		___transactionID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionID_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_tC16BD3CBD6634E7D764DC55DB28F9A9F6A743CD7  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass6_0::<>4__this
	ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass6_0::json
	String_t* ___json_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tC16BD3CBD6634E7D764DC55DB28F9A9F6A743CD7, ___U3CU3E4__this_0)); }
	inline ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tC16BD3CBD6634E7D764DC55DB28F9A9F6A743CD7, ___json_1)); }
	inline String_t* get_json_1() const { return ___json_1; }
	inline String_t** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(String_t* value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_1), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration
struct  MicrosoftConfiguration_t1D1BA624256301F1D85882DC858D25EF05F822DA  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration::useMock
	bool ___useMock_0;
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration::module
	StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * ___module_1;

public:
	inline static int32_t get_offset_of_useMock_0() { return static_cast<int32_t>(offsetof(MicrosoftConfiguration_t1D1BA624256301F1D85882DC858D25EF05F822DA, ___useMock_0)); }
	inline bool get_useMock_0() const { return ___useMock_0; }
	inline bool* get_address_of_useMock_0() { return &___useMock_0; }
	inline void set_useMock_0(bool value)
	{
		___useMock_0 = value;
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(MicrosoftConfiguration_t1D1BA624256301F1D85882DC858D25EF05F822DA, ___module_1)); }
	inline StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * get_module_1() const { return ___module_1; }
	inline StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance
struct  StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::<storeName>k__BackingField
	String_t* ___U3CstoreNameU3Ek__BackingField_0;
	// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::<instance>k__BackingField
	RuntimeObject* ___U3CinstanceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstoreNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C, ___U3CstoreNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreNameU3Ek__BackingField_0() const { return ___U3CstoreNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreNameU3Ek__BackingField_0() { return &___U3CstoreNameU3Ek__BackingField_0; }
	inline void set_U3CstoreNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C, ___U3CinstanceU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CinstanceU3Ek__BackingField_1() const { return ___U3CinstanceU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CinstanceU3Ek__BackingField_1() { return &___U3CinstanceU3Ek__BackingField_1; }
	inline void set_U3CinstanceU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CinstanceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.UDPImpl UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<>4__this
	UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * ___U3CU3E4__this_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::products
	ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * ___products_1;
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::retrieveCallback
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___retrieveCallback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0, ___U3CU3E4__this_0)); }
	inline UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_products_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0, ___products_1)); }
	inline ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * get_products_1() const { return ___products_1; }
	inline ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 ** get_address_of_products_1() { return &___products_1; }
	inline void set_products_1(ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * value)
	{
		___products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_1), (void*)value);
	}

	inline static int32_t get_offset_of_retrieveCallback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0, ___retrieveCallback_2)); }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * get_retrieveCallback_2() const { return ___retrieveCallback_2; }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 ** get_address_of_retrieveCallback_2() { return &___retrieveCallback_2; }
	inline void set_retrieveCallback_2(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * value)
	{
		___retrieveCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___retrieveCallback_2), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::product
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product_0;
	// UnityEngine.Purchasing.UDPImpl UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::<>4__this
	UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1, ___product_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1, ___U3CU3E4__this_1)); }
	inline UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPReflectionUtils
struct  UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B  : public RuntimeObject
{
public:

public:
};

struct UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]> UnityEngine.Purchasing.UDPReflectionUtils::s_assemblyTypeCache
	Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 * ___s_assemblyTypeCache_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> UnityEngine.Purchasing.UDPReflectionUtils::s_typeCache
	Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * ___s_typeCache_1;
	// System.String[] UnityEngine.Purchasing.UDPReflectionUtils::k_whiteListedAssemblies
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___k_whiteListedAssemblies_2;

public:
	inline static int32_t get_offset_of_s_assemblyTypeCache_0() { return static_cast<int32_t>(offsetof(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields, ___s_assemblyTypeCache_0)); }
	inline Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 * get_s_assemblyTypeCache_0() const { return ___s_assemblyTypeCache_0; }
	inline Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 ** get_address_of_s_assemblyTypeCache_0() { return &___s_assemblyTypeCache_0; }
	inline void set_s_assemblyTypeCache_0(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 * value)
	{
		___s_assemblyTypeCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_assemblyTypeCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_typeCache_1() { return static_cast<int32_t>(offsetof(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields, ___s_typeCache_1)); }
	inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * get_s_typeCache_1() const { return ___s_typeCache_1; }
	inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 ** get_address_of_s_typeCache_1() { return &___s_typeCache_1; }
	inline void set_s_typeCache_1(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * value)
	{
		___s_typeCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typeCache_1), (void*)value);
	}

	inline static int32_t get_offset_of_k_whiteListedAssemblies_2() { return static_cast<int32_t>(offsetof(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields, ___k_whiteListedAssemblies_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_k_whiteListedAssemblies_2() const { return ___k_whiteListedAssemblies_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_k_whiteListedAssemblies_2() { return &___k_whiteListedAssemblies_2; }
	inline void set_k_whiteListedAssemblies_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___k_whiteListedAssemblies_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_whiteListedAssemblies_2), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPReflectionUtils_<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13  : public RuntimeObject
{
public:
	// System.Reflection.Assembly UnityEngine.Purchasing.UDPReflectionUtils_<>c__DisplayClass6_0::assembly
	Assembly_t * ___assembly_0;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13, ___assembly_0)); }
	inline Assembly_t * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_0), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore_<>c
struct  U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_StaticFields
{
public:
	// UnityEngine.Purchasing.UIFakeStore_<>c UnityEngine.Purchasing.UIFakeStore_<>c::<>9
	U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.UIFakeStore_<>c::<>9__18_0
	Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * ___U3CU3E9__18_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore_DialogRequest
struct  DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UIFakeStore_DialogRequest::QueryText
	String_t* ___QueryText_0;
	// System.String UnityEngine.Purchasing.UIFakeStore_DialogRequest::OkayButtonText
	String_t* ___OkayButtonText_1;
	// System.String UnityEngine.Purchasing.UIFakeStore_DialogRequest::CancelButtonText
	String_t* ___CancelButtonText_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Purchasing.UIFakeStore_DialogRequest::Options
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___Options_3;
	// System.Action`2<System.Boolean,System.Int32> UnityEngine.Purchasing.UIFakeStore_DialogRequest::Callback
	Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 * ___Callback_4;

public:
	inline static int32_t get_offset_of_QueryText_0() { return static_cast<int32_t>(offsetof(DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00, ___QueryText_0)); }
	inline String_t* get_QueryText_0() const { return ___QueryText_0; }
	inline String_t** get_address_of_QueryText_0() { return &___QueryText_0; }
	inline void set_QueryText_0(String_t* value)
	{
		___QueryText_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QueryText_0), (void*)value);
	}

	inline static int32_t get_offset_of_OkayButtonText_1() { return static_cast<int32_t>(offsetof(DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00, ___OkayButtonText_1)); }
	inline String_t* get_OkayButtonText_1() const { return ___OkayButtonText_1; }
	inline String_t** get_address_of_OkayButtonText_1() { return &___OkayButtonText_1; }
	inline void set_OkayButtonText_1(String_t* value)
	{
		___OkayButtonText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OkayButtonText_1), (void*)value);
	}

	inline static int32_t get_offset_of_CancelButtonText_2() { return static_cast<int32_t>(offsetof(DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00, ___CancelButtonText_2)); }
	inline String_t* get_CancelButtonText_2() const { return ___CancelButtonText_2; }
	inline String_t** get_address_of_CancelButtonText_2() { return &___CancelButtonText_2; }
	inline void set_CancelButtonText_2(String_t* value)
	{
		___CancelButtonText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CancelButtonText_2), (void*)value);
	}

	inline static int32_t get_offset_of_Options_3() { return static_cast<int32_t>(offsetof(DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00, ___Options_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_Options_3() const { return ___Options_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_Options_3() { return &___Options_3; }
	inline void set_Options_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___Options_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Options_3), (void*)value);
	}

	inline static int32_t get_offset_of_Callback_4() { return static_cast<int32_t>(offsetof(DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00, ___Callback_4)); }
	inline Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 * get_Callback_4() const { return ___Callback_4; }
	inline Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 ** get_address_of_Callback_4() { return &___Callback_4; }
	inline void set_Callback_4(Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 * value)
	{
		___Callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_4), (void*)value);
	}
};


// UnityEngine.Purchasing.UdpIapBridgeInterface
struct  UdpIapBridgeInterface_t4A247198BE28801A0EE23D0707585381DCFBE14D  : public RuntimeObject
{
public:

public:
};

struct UdpIapBridgeInterface_t4A247198BE28801A0EE23D0707585381DCFBE14D_StaticFields
{
public:
	// System.Type UnityEngine.Purchasing.UdpIapBridgeInterface::s_typeCache
	Type_t * ___s_typeCache_0;

public:
	inline static int32_t get_offset_of_s_typeCache_0() { return static_cast<int32_t>(offsetof(UdpIapBridgeInterface_t4A247198BE28801A0EE23D0707585381DCFBE14D_StaticFields, ___s_typeCache_0)); }
	inline Type_t * get_s_typeCache_0() const { return ___s_typeCache_0; }
	inline Type_t ** get_address_of_s_typeCache_0() { return &___s_typeCache_0; }
	inline void set_s_typeCache_0(Type_t * value)
	{
		___s_typeCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typeCache_0), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityActivity
struct  UnityActivity_t6081146011A4B64A7C2A64A330160C6FE62A42AF  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.UserInfoInterface
struct  UserInfoInterface_tA23675037C19143C240BB58D5440F1F5C863E8C3  : public RuntimeObject
{
public:

public:
};

struct UserInfoInterface_tA23675037C19143C240BB58D5440F1F5C863E8C3_StaticFields
{
public:
	// System.Type UnityEngine.Purchasing.UserInfoInterface::s_typeCache
	Type_t * ___s_typeCache_0;

public:
	inline static int32_t get_offset_of_s_typeCache_0() { return static_cast<int32_t>(offsetof(UserInfoInterface_tA23675037C19143C240BB58D5440F1F5C863E8C3_StaticFields, ___s_typeCache_0)); }
	inline Type_t * get_s_typeCache_0() const { return ___s_typeCache_0; }
	inline Type_t ** get_address_of_s_typeCache_0() { return &___s_typeCache_0; }
	inline void set_s_typeCache_0(Type_t * value)
	{
		___s_typeCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typeCache_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Utils.GooglePurchaseHelper_<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_tA4FD1BE082CB561F3BFBB5DDB13E0A712B3CFCB2  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Utils.GooglePurchaseHelper_<>c__DisplayClass0_0::sku
	String_t* ___sku_0;

public:
	inline static int32_t get_offset_of_sku_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tA4FD1BE082CB561F3BFBB5DDB13E0A712B3CFCB2, ___sku_0)); }
	inline String_t* get_sku_0() const { return ___sku_0; }
	inline String_t** get_address_of_sku_0() { return &___sku_0; }
	inline void set_sku_0(String_t* value)
	{
		___sku_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sku_0), (void*)value);
	}
};


// UnityEngine.Purchasing.WinRTStore_<>c
struct  U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields
{
public:
	// UnityEngine.Purchasing.WinRTStore_<>c UnityEngine.Purchasing.WinRTStore_<>c::<>9
	U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.WinRTStore_<>c::<>9__8_0
	Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * ___U3CU3E9__8_0_1;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription> UnityEngine.Purchasing.WinRTStore_<>c::<>9__8_1
	Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * ___U3CU3E9__8_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields, ___U3CU3E9__8_1_2)); }
	inline Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * get_U3CU3E9__8_1_2() const { return ___U3CU3E9__8_1_2; }
	inline Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 ** get_address_of_U3CU3E9__8_1_2() { return &___U3CU3E9__8_1_2; }
	inline void set_U3CU3E9__8_1_2(Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * value)
	{
		___U3CU3E9__8_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_1_2), (void*)value);
	}
};


// UnityEngine.UI.Dropdown_OptionData
struct  OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown_OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown_OptionData::m_Image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Image_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Action`1<System.Boolean>>
struct  Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3, ___list_0)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_list_0() const { return ___list_0; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3, ___current_3)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_current_3() const { return ___current_3; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.String>
struct  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Text.RegularExpressions.Group
struct  Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883  : public Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6
{
public:
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::_name
	String_t* ____name_7;

public:
	inline static int32_t get_offset_of__caps_4() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____caps_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__caps_4() const { return ____caps_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__caps_4() { return &____caps_4; }
	inline void set__caps_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____caps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caps_4), (void*)value);
	}

	inline static int32_t get_offset_of__capcount_5() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____capcount_5)); }
	inline int32_t get__capcount_5() const { return ____capcount_5; }
	inline int32_t* get_address_of__capcount_5() { return &____capcount_5; }
	inline void set__capcount_5(int32_t value)
	{
		____capcount_5 = value;
	}

	inline static int32_t get_offset_of__capcoll_6() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____capcoll_6)); }
	inline CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * get__capcoll_6() const { return ____capcoll_6; }
	inline CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 ** get_address_of__capcoll_6() { return &____capcoll_6; }
	inline void set__capcoll_6(CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * value)
	{
		____capcoll_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capcoll_6), (void*)value);
	}

	inline static int32_t get_offset_of__name_7() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____name_7)); }
	inline String_t* get__name_7() const { return ____name_7; }
	inline String_t** get_address_of__name_7() { return &____name_7; }
	inline void set__name_7(String_t* value)
	{
		____name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_7), (void*)value);
	}
};

struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::_emptygroup
	Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * ____emptygroup_3;

public:
	inline static int32_t get_offset_of__emptygroup_3() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883_StaticFields, ____emptygroup_3)); }
	inline Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * get__emptygroup_3() const { return ____emptygroup_3; }
	inline Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 ** get_address_of__emptygroup_3() { return &____emptygroup_3; }
	inline void set__emptygroup_3(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * value)
	{
		____emptygroup_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptygroup_3), (void*)value);
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Purchasing.WinRTStore
struct  WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560  : public AbstractStore_tB0FD374A2E9858EB3A2DC721CBA280409F9485C0
{
public:
	// UnityEngine.Purchasing.Default.IWindowsIAP UnityEngine.Purchasing.WinRTStore::win8
	RuntimeObject* ___win8_0;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.WinRTStore::callback
	RuntimeObject* ___callback_1;
	// Uniject.IUtil UnityEngine.Purchasing.WinRTStore::util
	RuntimeObject* ___util_2;
	// UnityEngine.ILogger UnityEngine.Purchasing.WinRTStore::logger
	RuntimeObject* ___logger_3;
	// System.Boolean UnityEngine.Purchasing.WinRTStore::m_CanReceivePurchases
	bool ___m_CanReceivePurchases_4;

public:
	inline static int32_t get_offset_of_win8_0() { return static_cast<int32_t>(offsetof(WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560, ___win8_0)); }
	inline RuntimeObject* get_win8_0() const { return ___win8_0; }
	inline RuntimeObject** get_address_of_win8_0() { return &___win8_0; }
	inline void set_win8_0(RuntimeObject* value)
	{
		___win8_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win8_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560, ___callback_1)); }
	inline RuntimeObject* get_callback_1() const { return ___callback_1; }
	inline RuntimeObject** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(RuntimeObject* value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}

	inline static int32_t get_offset_of_util_2() { return static_cast<int32_t>(offsetof(WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560, ___util_2)); }
	inline RuntimeObject* get_util_2() const { return ___util_2; }
	inline RuntimeObject** get_address_of_util_2() { return &___util_2; }
	inline void set_util_2(RuntimeObject* value)
	{
		___util_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___util_2), (void*)value);
	}

	inline static int32_t get_offset_of_logger_3() { return static_cast<int32_t>(offsetof(WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560, ___logger_3)); }
	inline RuntimeObject* get_logger_3() const { return ___logger_3; }
	inline RuntimeObject** get_address_of_logger_3() { return &___logger_3; }
	inline void set_logger_3(RuntimeObject* value)
	{
		___logger_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanReceivePurchases_4() { return static_cast<int32_t>(offsetof(WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560, ___m_CanReceivePurchases_4)); }
	inline bool get_m_CanReceivePurchases_4() const { return ___m_CanReceivePurchases_4; }
	inline bool* get_address_of_m_CanReceivePurchases_4() { return &___m_CanReceivePurchases_4; }
	inline void set_m_CanReceivePurchases_4(bool value)
	{
		___m_CanReceivePurchases_4 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WWW
struct  WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.AppDomain
struct  AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___DomainUnload_13)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ProcessExit_14)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ResourceResolve_15)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___TypeResolve_16)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___FirstChanceException_18)); }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___compatibility_switch_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ___default_domain_10)); }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Text.RegularExpressions.Match
struct  Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B  : public Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883
{
public:
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * ____groupcoll_9;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_13;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_14;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ____matches_15;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____matchcount_16;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_17;

public:
	inline static int32_t get_offset_of__groupcoll_9() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____groupcoll_9)); }
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * get__groupcoll_9() const { return ____groupcoll_9; }
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 ** get_address_of__groupcoll_9() { return &____groupcoll_9; }
	inline void set__groupcoll_9(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * value)
	{
		____groupcoll_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groupcoll_9), (void*)value);
	}

	inline static int32_t get_offset_of__regex_10() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____regex_10)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_10() const { return ____regex_10; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_10() { return &____regex_10; }
	inline void set__regex_10(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_10), (void*)value);
	}

	inline static int32_t get_offset_of__textbeg_11() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textbeg_11)); }
	inline int32_t get__textbeg_11() const { return ____textbeg_11; }
	inline int32_t* get_address_of__textbeg_11() { return &____textbeg_11; }
	inline void set__textbeg_11(int32_t value)
	{
		____textbeg_11 = value;
	}

	inline static int32_t get_offset_of__textpos_12() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textpos_12)); }
	inline int32_t get__textpos_12() const { return ____textpos_12; }
	inline int32_t* get_address_of__textpos_12() { return &____textpos_12; }
	inline void set__textpos_12(int32_t value)
	{
		____textpos_12 = value;
	}

	inline static int32_t get_offset_of__textend_13() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textend_13)); }
	inline int32_t get__textend_13() const { return ____textend_13; }
	inline int32_t* get_address_of__textend_13() { return &____textend_13; }
	inline void set__textend_13(int32_t value)
	{
		____textend_13 = value;
	}

	inline static int32_t get_offset_of__textstart_14() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textstart_14)); }
	inline int32_t get__textstart_14() const { return ____textstart_14; }
	inline int32_t* get_address_of__textstart_14() { return &____textstart_14; }
	inline void set__textstart_14(int32_t value)
	{
		____textstart_14 = value;
	}

	inline static int32_t get_offset_of__matches_15() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____matches_15)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get__matches_15() const { return ____matches_15; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of__matches_15() { return &____matches_15; }
	inline void set__matches_15(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		____matches_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_15), (void*)value);
	}

	inline static int32_t get_offset_of__matchcount_16() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____matchcount_16)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__matchcount_16() const { return ____matchcount_16; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__matchcount_16() { return &____matchcount_16; }
	inline void set__matchcount_16(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____matchcount_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matchcount_16), (void*)value);
	}

	inline static int32_t get_offset_of__balancing_17() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____balancing_17)); }
	inline bool get__balancing_17() const { return ____balancing_17; }
	inline bool* get_address_of__balancing_17() { return &____balancing_17; }
	inline void set__balancing_17(bool value)
	{
		____balancing_17 = value;
	}
};

struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::_empty
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ____empty_8;

public:
	inline static int32_t get_offset_of__empty_8() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B_StaticFields, ____empty_8)); }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * get__empty_8() const { return ____empty_8; }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B ** get_address_of__empty_8() { return &____empty_8; }
	inline void set__empty_8(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * value)
	{
		____empty_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____empty_8), (void*)value);
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.DeviceType
struct  DeviceType_tBE460E2D86295964F19F6708DBDC3568ECCBE9DF 
{
public:
	// System.Int32 UnityEngine.DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_tBE460E2D86295964F19F6708DBDC3568ECCBE9DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct  LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Purchasing.AppStore
struct  AppStore_t30E3E0418133E855B43E91AA5B26509B3644617F 
{
public:
	// System.Int32 UnityEngine.Purchasing.AppStore::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppStore_t30E3E0418133E855B43E91AA5B26509B3644617F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.Default.WinProductDescription
struct  WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F, ___U3CplatformSpecificIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CplatformSpecificIDU3Ek__BackingField_0() const { return ___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return &___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline void set_U3CplatformSpecificIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CplatformSpecificIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplatformSpecificIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F, ___U3CpriceU3Ek__BackingField_1)); }
	inline String_t* get_U3CpriceU3Ek__BackingField_1() const { return ___U3CpriceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpriceU3Ek__BackingField_1() { return &___U3CpriceU3Ek__BackingField_1; }
	inline void set_U3CpriceU3Ek__BackingField_1(String_t* value)
	{
		___U3CpriceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpriceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F, ___U3CtitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CtitleU3Ek__BackingField_2() const { return ___U3CtitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtitleU3Ek__BackingField_2() { return &___U3CtitleU3Ek__BackingField_2; }
	inline void set_U3CtitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CtitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtitleU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F, ___U3CdescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CdescriptionU3Ek__BackingField_3() const { return ___U3CdescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CdescriptionU3Ek__BackingField_3() { return &___U3CdescriptionU3Ek__BackingField_3; }
	inline void set_U3CdescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CdescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdescriptionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F, ___U3CISOCurrencyCodeU3Ek__BackingField_4)); }
	inline String_t* get_U3CISOCurrencyCodeU3Ek__BackingField_4() const { return ___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return &___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline void set_U3CISOCurrencyCodeU3Ek__BackingField_4(String_t* value)
	{
		___U3CISOCurrencyCodeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CISOCurrencyCodeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceDecimalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F, ___U3CpriceDecimalU3Ek__BackingField_5)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_U3CpriceDecimalU3Ek__BackingField_5() const { return ___U3CpriceDecimalU3Ek__BackingField_5; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_U3CpriceDecimalU3Ek__BackingField_5() { return &___U3CpriceDecimalU3Ek__BackingField_5; }
	inline void set_U3CpriceDecimalU3Ek__BackingField_5(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___U3CpriceDecimalU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F, ___U3CreceiptU3Ek__BackingField_6)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_6() const { return ___U3CreceiptU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_6() { return &___U3CreceiptU3Ek__BackingField_6; }
	inline void set_U3CreceiptU3Ek__BackingField_6(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F, ___U3CtransactionIDU3Ek__BackingField_7)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_7() const { return ___U3CtransactionIDU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_7() { return &___U3CtransactionIDU3Ek__BackingField_7; }
	inline void set_U3CtransactionIDU3Ek__BackingField_7(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconsumableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F, ___U3CconsumableU3Ek__BackingField_8)); }
	inline bool get_U3CconsumableU3Ek__BackingField_8() const { return ___U3CconsumableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CconsumableU3Ek__BackingField_8() { return &___U3CconsumableU3Ek__BackingField_8; }
	inline void set_U3CconsumableU3Ek__BackingField_8(bool value)
	{
		___U3CconsumableU3Ek__BackingField_8 = value;
	}
};


// UnityEngine.Purchasing.FakeStore_DialogType
struct  DialogType_tCD1B9BAD497BDEB925F3EF85AF6BB9E8B77BA49E 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStore_DialogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DialogType_tCD1B9BAD497BDEB925F3EF85AF6BB9E8B77BA49E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.FakeStoreUIMode
struct  FakeStoreUIMode_t6DE57BD89F0FBB38187E1AD5C09C019BAEE81102 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStoreUIMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FakeStoreUIMode_t6DE57BD89F0FBB38187E1AD5C09C019BAEE81102, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.InitializationFailureReason
struct  InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B 
{
public:
	// System.Int32 UnityEngine.Purchasing.InitializationFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.ProductCatalogPayout_ProductCatalogPayoutType
struct  ProductCatalogPayoutType_t6B43EE6D91328DF6F9A791133691483AB26E9FA1 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductCatalogPayout_ProductCatalogPayoutType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductCatalogPayoutType_t6B43EE6D91328DF6F9A791133691483AB26E9FA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.ProductType
struct  ProductType_tBF332314E0B8C2094184DDA4751FDB3518A79D5A 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductType_tBF332314E0B8C2094184DDA4751FDB3518A79D5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseFailureReason
struct  PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct  AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<quantity>k__BackingField
	int32_t ___U3CquantityU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productID>k__BackingField
	String_t* ___U3CproductIDU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalTransactionIdentifier>k__BackingField
	String_t* ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<purchaseDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CpurchaseDateU3Ek__BackingField_4;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalPurchaseDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CoriginalPurchaseDateU3Ek__BackingField_5;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<subscriptionExpirationDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CsubscriptionExpirationDateU3Ek__BackingField_6;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<cancellationDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CcancellationDateU3Ek__BackingField_7;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isFreeTrial>k__BackingField
	int32_t ___U3CisFreeTrialU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productType>k__BackingField
	int32_t ___U3CproductTypeU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isIntroductoryPricePeriod>k__BackingField
	int32_t ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CquantityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CquantityU3Ek__BackingField_0)); }
	inline int32_t get_U3CquantityU3Ek__BackingField_0() const { return ___U3CquantityU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CquantityU3Ek__BackingField_0() { return &___U3CquantityU3Ek__BackingField_0; }
	inline void set_U3CquantityU3Ek__BackingField_0(int32_t value)
	{
		___U3CquantityU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproductIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CproductIDU3Ek__BackingField_1)); }
	inline String_t* get_U3CproductIDU3Ek__BackingField_1() const { return ___U3CproductIDU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CproductIDU3Ek__BackingField_1() { return &___U3CproductIDU3Ek__BackingField_1; }
	inline void set_U3CproductIDU3Ek__BackingField_1(String_t* value)
	{
		___U3CproductIDU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIDU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CtransactionIDU3Ek__BackingField_2)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_2() const { return ___U3CtransactionIDU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_2() { return &___U3CtransactionIDU3Ek__BackingField_2; }
	inline void set_U3CtransactionIDU3Ek__BackingField_2(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3)); }
	inline String_t* get_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() const { return ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return &___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline void set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(String_t* value)
	{
		___U3CoriginalTransactionIdentifierU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginalTransactionIdentifierU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpurchaseDateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CpurchaseDateU3Ek__BackingField_4)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CpurchaseDateU3Ek__BackingField_4() const { return ___U3CpurchaseDateU3Ek__BackingField_4; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CpurchaseDateU3Ek__BackingField_4() { return &___U3CpurchaseDateU3Ek__BackingField_4; }
	inline void set_U3CpurchaseDateU3Ek__BackingField_4(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CpurchaseDateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CoriginalPurchaseDateU3Ek__BackingField_5)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CoriginalPurchaseDateU3Ek__BackingField_5() const { return ___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return &___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline void set_U3CoriginalPurchaseDateU3Ek__BackingField_5(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CoriginalPurchaseDateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CsubscriptionExpirationDateU3Ek__BackingField_6)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CsubscriptionExpirationDateU3Ek__BackingField_6() const { return ___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return &___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline void set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CsubscriptionExpirationDateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CcancellationDateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CcancellationDateU3Ek__BackingField_7)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CcancellationDateU3Ek__BackingField_7() const { return ___U3CcancellationDateU3Ek__BackingField_7; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CcancellationDateU3Ek__BackingField_7() { return &___U3CcancellationDateU3Ek__BackingField_7; }
	inline void set_U3CcancellationDateU3Ek__BackingField_7(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CcancellationDateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CisFreeTrialU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CisFreeTrialU3Ek__BackingField_8)); }
	inline int32_t get_U3CisFreeTrialU3Ek__BackingField_8() const { return ___U3CisFreeTrialU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CisFreeTrialU3Ek__BackingField_8() { return &___U3CisFreeTrialU3Ek__BackingField_8; }
	inline void set_U3CisFreeTrialU3Ek__BackingField_8(int32_t value)
	{
		___U3CisFreeTrialU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CproductTypeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CproductTypeU3Ek__BackingField_9)); }
	inline int32_t get_U3CproductTypeU3Ek__BackingField_9() const { return ___U3CproductTypeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CproductTypeU3Ek__BackingField_9() { return &___U3CproductTypeU3Ek__BackingField_9; }
	inline void set_U3CproductTypeU3Ek__BackingField_9(int32_t value)
	{
		___U3CproductTypeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D, ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10)); }
	inline int32_t get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() const { return ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return &___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline void set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(int32_t value)
	{
		___U3CisIntroductoryPricePeriodU3Ek__BackingField_10 = value;
	}
};


// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode
struct  StoreSpecificPurchaseErrorCode_t8E5BBF13BACCCE7AB2D929FBF172CF833E9CBA4C 
{
public:
	// System.Int32 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreSpecificPurchaseErrorCode_t8E5BBF13BACCCE7AB2D929FBF172CF833E9CBA4C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ScreenOrientation
struct  ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Dropdown_DropdownEvent
struct  DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB  : public UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF
{
public:

public:
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Purchasing.Extension.ProductDescription
struct  ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.Extension.ProductDescription::type
	int32_t ___type_1;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::<metadata>k__BackingField
	ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * ___U3CmetadataU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<transactionId>k__BackingField
	String_t* ___U3CtransactionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75, ___U3CstoreSpecificIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_0() const { return ___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return &___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75, ___U3CmetadataU3Ek__BackingField_2)); }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * get_U3CmetadataU3Ek__BackingField_2() const { return ___U3CmetadataU3Ek__BackingField_2; }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 ** get_address_of_U3CmetadataU3Ek__BackingField_2() { return &___U3CmetadataU3Ek__BackingField_2; }
	inline void set_U3CmetadataU3Ek__BackingField_2(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * value)
	{
		___U3CmetadataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75, ___U3CreceiptU3Ek__BackingField_3)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_3() const { return ___U3CreceiptU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_3() { return &___U3CreceiptU3Ek__BackingField_3; }
	inline void set_U3CreceiptU3Ek__BackingField_3(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75, ___U3CtransactionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CtransactionIdU3Ek__BackingField_4() const { return ___U3CtransactionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CtransactionIdU3Ek__BackingField_4() { return &___U3CtransactionIdU3Ek__BackingField_4; }
	inline void set_U3CtransactionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CtransactionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIdU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct  PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<productId>k__BackingField
	String_t* ___U3CproductIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<reason>k__BackingField
	int32_t ___U3CreasonU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CproductIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8, ___U3CproductIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CproductIdU3Ek__BackingField_0() const { return ___U3CproductIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CproductIdU3Ek__BackingField_0() { return &___U3CproductIdU3Ek__BackingField_0; }
	inline void set_U3CproductIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CproductIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8, ___U3CreasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CreasonU3Ek__BackingField_1() const { return ___U3CreasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreasonU3Ek__BackingField_1() { return &___U3CreasonU3Ek__BackingField_1; }
	inline void set_U3CreasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CreasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmessageU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Purchasing.JSONStore
struct  JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1  : public AbstractStore_tB0FD374A2E9858EB3A2DC721CBA280409F9485C0
{
public:
	// UnityEngine.Purchasing.StoreCatalogImpl UnityEngine.Purchasing.JSONStore::m_managedStore
	StoreCatalogImpl_t51EBB89B1D94DBC59BBB48FDE290B008E1D03D3E * ___m_managedStore_0;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.JSONStore::unity
	RuntimeObject* ___unity_1;
	// UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.JSONStore::store
	RuntimeObject* ___store_2;
	// System.Boolean UnityEngine.Purchasing.JSONStore::isManagedStoreEnabled
	bool ___isManagedStoreEnabled_3;
	// UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.JSONStore::m_profileData
	ProfileData_t7A282992FFB308B713376A4148AE8A61EDB18B7B * ___m_profileData_4;
	// System.Boolean UnityEngine.Purchasing.JSONStore::isRefreshing
	bool ___isRefreshing_5;
	// System.Boolean UnityEngine.Purchasing.JSONStore::shouldLogPromoInitialization
	bool ___shouldLogPromoInitialization_6;
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.JSONStore::m_Module
	StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * ___m_Module_7;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.JSONStore::m_BuilderProducts
	HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * ___m_BuilderProducts_8;
	// UnityEngine.ILogger UnityEngine.Purchasing.JSONStore::m_Logger
	RuntimeObject* ___m_Logger_9;
	// UnityEngine.Purchasing.EventQueue UnityEngine.Purchasing.JSONStore::m_EventQueue
	EventQueue_t16E6EFFAA46948AF1C707211EEAAA6E7C12D05DD * ___m_EventQueue_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONStore::promoPayload
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___promoPayload_11;
	// System.Boolean UnityEngine.Purchasing.JSONStore::catalogDisabled
	bool ___catalogDisabled_12;
	// System.Boolean UnityEngine.Purchasing.JSONStore::eventsDisabled
	bool ___eventsDisabled_13;
	// System.Boolean UnityEngine.Purchasing.JSONStore::testStore
	bool ___testStore_14;
	// System.String UnityEngine.Purchasing.JSONStore::iapBaseUrl
	String_t* ___iapBaseUrl_15;
	// System.String UnityEngine.Purchasing.JSONStore::eventBaseUrl
	String_t* ___eventBaseUrl_16;
	// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONStore::lastPurchaseFailureDescription
	PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * ___lastPurchaseFailureDescription_17;
	// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::_lastPurchaseErrorCode
	int32_t ____lastPurchaseErrorCode_18;
	// System.String UnityEngine.Purchasing.JSONStore::m_persistentDataPath
	String_t* ___m_persistentDataPath_19;
	// System.String UnityEngine.Purchasing.JSONStore::kStoreSpecificErrorCodeKey
	String_t* ___kStoreSpecificErrorCodeKey_20;

public:
	inline static int32_t get_offset_of_m_managedStore_0() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___m_managedStore_0)); }
	inline StoreCatalogImpl_t51EBB89B1D94DBC59BBB48FDE290B008E1D03D3E * get_m_managedStore_0() const { return ___m_managedStore_0; }
	inline StoreCatalogImpl_t51EBB89B1D94DBC59BBB48FDE290B008E1D03D3E ** get_address_of_m_managedStore_0() { return &___m_managedStore_0; }
	inline void set_m_managedStore_0(StoreCatalogImpl_t51EBB89B1D94DBC59BBB48FDE290B008E1D03D3E * value)
	{
		___m_managedStore_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_managedStore_0), (void*)value);
	}

	inline static int32_t get_offset_of_unity_1() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___unity_1)); }
	inline RuntimeObject* get_unity_1() const { return ___unity_1; }
	inline RuntimeObject** get_address_of_unity_1() { return &___unity_1; }
	inline void set_unity_1(RuntimeObject* value)
	{
		___unity_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unity_1), (void*)value);
	}

	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___store_2)); }
	inline RuntimeObject* get_store_2() const { return ___store_2; }
	inline RuntimeObject** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(RuntimeObject* value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_2), (void*)value);
	}

	inline static int32_t get_offset_of_isManagedStoreEnabled_3() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___isManagedStoreEnabled_3)); }
	inline bool get_isManagedStoreEnabled_3() const { return ___isManagedStoreEnabled_3; }
	inline bool* get_address_of_isManagedStoreEnabled_3() { return &___isManagedStoreEnabled_3; }
	inline void set_isManagedStoreEnabled_3(bool value)
	{
		___isManagedStoreEnabled_3 = value;
	}

	inline static int32_t get_offset_of_m_profileData_4() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___m_profileData_4)); }
	inline ProfileData_t7A282992FFB308B713376A4148AE8A61EDB18B7B * get_m_profileData_4() const { return ___m_profileData_4; }
	inline ProfileData_t7A282992FFB308B713376A4148AE8A61EDB18B7B ** get_address_of_m_profileData_4() { return &___m_profileData_4; }
	inline void set_m_profileData_4(ProfileData_t7A282992FFB308B713376A4148AE8A61EDB18B7B * value)
	{
		___m_profileData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_profileData_4), (void*)value);
	}

	inline static int32_t get_offset_of_isRefreshing_5() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___isRefreshing_5)); }
	inline bool get_isRefreshing_5() const { return ___isRefreshing_5; }
	inline bool* get_address_of_isRefreshing_5() { return &___isRefreshing_5; }
	inline void set_isRefreshing_5(bool value)
	{
		___isRefreshing_5 = value;
	}

	inline static int32_t get_offset_of_shouldLogPromoInitialization_6() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___shouldLogPromoInitialization_6)); }
	inline bool get_shouldLogPromoInitialization_6() const { return ___shouldLogPromoInitialization_6; }
	inline bool* get_address_of_shouldLogPromoInitialization_6() { return &___shouldLogPromoInitialization_6; }
	inline void set_shouldLogPromoInitialization_6(bool value)
	{
		___shouldLogPromoInitialization_6 = value;
	}

	inline static int32_t get_offset_of_m_Module_7() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___m_Module_7)); }
	inline StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * get_m_Module_7() const { return ___m_Module_7; }
	inline StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 ** get_address_of_m_Module_7() { return &___m_Module_7; }
	inline void set_m_Module_7(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * value)
	{
		___m_Module_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Module_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_BuilderProducts_8() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___m_BuilderProducts_8)); }
	inline HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * get_m_BuilderProducts_8() const { return ___m_BuilderProducts_8; }
	inline HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 ** get_address_of_m_BuilderProducts_8() { return &___m_BuilderProducts_8; }
	inline void set_m_BuilderProducts_8(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * value)
	{
		___m_BuilderProducts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BuilderProducts_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_9() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___m_Logger_9)); }
	inline RuntimeObject* get_m_Logger_9() const { return ___m_Logger_9; }
	inline RuntimeObject** get_address_of_m_Logger_9() { return &___m_Logger_9; }
	inline void set_m_Logger_9(RuntimeObject* value)
	{
		___m_Logger_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventQueue_10() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___m_EventQueue_10)); }
	inline EventQueue_t16E6EFFAA46948AF1C707211EEAAA6E7C12D05DD * get_m_EventQueue_10() const { return ___m_EventQueue_10; }
	inline EventQueue_t16E6EFFAA46948AF1C707211EEAAA6E7C12D05DD ** get_address_of_m_EventQueue_10() { return &___m_EventQueue_10; }
	inline void set_m_EventQueue_10(EventQueue_t16E6EFFAA46948AF1C707211EEAAA6E7C12D05DD * value)
	{
		___m_EventQueue_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventQueue_10), (void*)value);
	}

	inline static int32_t get_offset_of_promoPayload_11() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___promoPayload_11)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_promoPayload_11() const { return ___promoPayload_11; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_promoPayload_11() { return &___promoPayload_11; }
	inline void set_promoPayload_11(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___promoPayload_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promoPayload_11), (void*)value);
	}

	inline static int32_t get_offset_of_catalogDisabled_12() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___catalogDisabled_12)); }
	inline bool get_catalogDisabled_12() const { return ___catalogDisabled_12; }
	inline bool* get_address_of_catalogDisabled_12() { return &___catalogDisabled_12; }
	inline void set_catalogDisabled_12(bool value)
	{
		___catalogDisabled_12 = value;
	}

	inline static int32_t get_offset_of_eventsDisabled_13() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___eventsDisabled_13)); }
	inline bool get_eventsDisabled_13() const { return ___eventsDisabled_13; }
	inline bool* get_address_of_eventsDisabled_13() { return &___eventsDisabled_13; }
	inline void set_eventsDisabled_13(bool value)
	{
		___eventsDisabled_13 = value;
	}

	inline static int32_t get_offset_of_testStore_14() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___testStore_14)); }
	inline bool get_testStore_14() const { return ___testStore_14; }
	inline bool* get_address_of_testStore_14() { return &___testStore_14; }
	inline void set_testStore_14(bool value)
	{
		___testStore_14 = value;
	}

	inline static int32_t get_offset_of_iapBaseUrl_15() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___iapBaseUrl_15)); }
	inline String_t* get_iapBaseUrl_15() const { return ___iapBaseUrl_15; }
	inline String_t** get_address_of_iapBaseUrl_15() { return &___iapBaseUrl_15; }
	inline void set_iapBaseUrl_15(String_t* value)
	{
		___iapBaseUrl_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iapBaseUrl_15), (void*)value);
	}

	inline static int32_t get_offset_of_eventBaseUrl_16() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___eventBaseUrl_16)); }
	inline String_t* get_eventBaseUrl_16() const { return ___eventBaseUrl_16; }
	inline String_t** get_address_of_eventBaseUrl_16() { return &___eventBaseUrl_16; }
	inline void set_eventBaseUrl_16(String_t* value)
	{
		___eventBaseUrl_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventBaseUrl_16), (void*)value);
	}

	inline static int32_t get_offset_of_lastPurchaseFailureDescription_17() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___lastPurchaseFailureDescription_17)); }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * get_lastPurchaseFailureDescription_17() const { return ___lastPurchaseFailureDescription_17; }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 ** get_address_of_lastPurchaseFailureDescription_17() { return &___lastPurchaseFailureDescription_17; }
	inline void set_lastPurchaseFailureDescription_17(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * value)
	{
		___lastPurchaseFailureDescription_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastPurchaseFailureDescription_17), (void*)value);
	}

	inline static int32_t get_offset_of__lastPurchaseErrorCode_18() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ____lastPurchaseErrorCode_18)); }
	inline int32_t get__lastPurchaseErrorCode_18() const { return ____lastPurchaseErrorCode_18; }
	inline int32_t* get_address_of__lastPurchaseErrorCode_18() { return &____lastPurchaseErrorCode_18; }
	inline void set__lastPurchaseErrorCode_18(int32_t value)
	{
		____lastPurchaseErrorCode_18 = value;
	}

	inline static int32_t get_offset_of_m_persistentDataPath_19() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___m_persistentDataPath_19)); }
	inline String_t* get_m_persistentDataPath_19() const { return ___m_persistentDataPath_19; }
	inline String_t** get_address_of_m_persistentDataPath_19() { return &___m_persistentDataPath_19; }
	inline void set_m_persistentDataPath_19(String_t* value)
	{
		___m_persistentDataPath_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_persistentDataPath_19), (void*)value);
	}

	inline static int32_t get_offset_of_kStoreSpecificErrorCodeKey_20() { return static_cast<int32_t>(offsetof(JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1, ___kStoreSpecificErrorCodeKey_20)); }
	inline String_t* get_kStoreSpecificErrorCodeKey_20() const { return ___kStoreSpecificErrorCodeKey_20; }
	inline String_t** get_address_of_kStoreSpecificErrorCodeKey_20() { return &___kStoreSpecificErrorCodeKey_20; }
	inline void set_kStoreSpecificErrorCodeKey_20(String_t* value)
	{
		___kStoreSpecificErrorCodeKey_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kStoreSpecificErrorCodeKey_20), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalogItem
struct  ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogItem::id
	String_t* ___id_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductCatalogItem::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::storeIDs
	List_1_t5B36FF776A56A7F895DBF7C8ED681CF083C126B3 * ___storeIDs_2;
	// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::defaultDescription
	LocalizedProductDescription_t02FAC497FA67546A9155357F19A9D1D698B79911 * ___defaultDescription_3;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::applePriceTier
	int32_t ___applePriceTier_4;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::googlePrice
	Price_t8AB7440A322DAC83E0208A0E89D9C401BD99C657 * ___googlePrice_5;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription> UnityEngine.Purchasing.ProductCatalogItem::descriptions
	List_1_tF2B54FD349165553F2FED06542A308F343FF791C * ___descriptions_6;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::udpPrice
	Price_t8AB7440A322DAC83E0208A0E89D9C401BD99C657 * ___udpPrice_7;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::payouts
	List_1_t9142463137C9E616A651ACDE957BA2630FCD06E5 * ___payouts_8;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_storeIDs_2() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8, ___storeIDs_2)); }
	inline List_1_t5B36FF776A56A7F895DBF7C8ED681CF083C126B3 * get_storeIDs_2() const { return ___storeIDs_2; }
	inline List_1_t5B36FF776A56A7F895DBF7C8ED681CF083C126B3 ** get_address_of_storeIDs_2() { return &___storeIDs_2; }
	inline void set_storeIDs_2(List_1_t5B36FF776A56A7F895DBF7C8ED681CF083C126B3 * value)
	{
		___storeIDs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeIDs_2), (void*)value);
	}

	inline static int32_t get_offset_of_defaultDescription_3() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8, ___defaultDescription_3)); }
	inline LocalizedProductDescription_t02FAC497FA67546A9155357F19A9D1D698B79911 * get_defaultDescription_3() const { return ___defaultDescription_3; }
	inline LocalizedProductDescription_t02FAC497FA67546A9155357F19A9D1D698B79911 ** get_address_of_defaultDescription_3() { return &___defaultDescription_3; }
	inline void set_defaultDescription_3(LocalizedProductDescription_t02FAC497FA67546A9155357F19A9D1D698B79911 * value)
	{
		___defaultDescription_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultDescription_3), (void*)value);
	}

	inline static int32_t get_offset_of_applePriceTier_4() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8, ___applePriceTier_4)); }
	inline int32_t get_applePriceTier_4() const { return ___applePriceTier_4; }
	inline int32_t* get_address_of_applePriceTier_4() { return &___applePriceTier_4; }
	inline void set_applePriceTier_4(int32_t value)
	{
		___applePriceTier_4 = value;
	}

	inline static int32_t get_offset_of_googlePrice_5() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8, ___googlePrice_5)); }
	inline Price_t8AB7440A322DAC83E0208A0E89D9C401BD99C657 * get_googlePrice_5() const { return ___googlePrice_5; }
	inline Price_t8AB7440A322DAC83E0208A0E89D9C401BD99C657 ** get_address_of_googlePrice_5() { return &___googlePrice_5; }
	inline void set_googlePrice_5(Price_t8AB7440A322DAC83E0208A0E89D9C401BD99C657 * value)
	{
		___googlePrice_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googlePrice_5), (void*)value);
	}

	inline static int32_t get_offset_of_descriptions_6() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8, ___descriptions_6)); }
	inline List_1_tF2B54FD349165553F2FED06542A308F343FF791C * get_descriptions_6() const { return ___descriptions_6; }
	inline List_1_tF2B54FD349165553F2FED06542A308F343FF791C ** get_address_of_descriptions_6() { return &___descriptions_6; }
	inline void set_descriptions_6(List_1_tF2B54FD349165553F2FED06542A308F343FF791C * value)
	{
		___descriptions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptions_6), (void*)value);
	}

	inline static int32_t get_offset_of_udpPrice_7() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8, ___udpPrice_7)); }
	inline Price_t8AB7440A322DAC83E0208A0E89D9C401BD99C657 * get_udpPrice_7() const { return ___udpPrice_7; }
	inline Price_t8AB7440A322DAC83E0208A0E89D9C401BD99C657 ** get_address_of_udpPrice_7() { return &___udpPrice_7; }
	inline void set_udpPrice_7(Price_t8AB7440A322DAC83E0208A0E89D9C401BD99C657 * value)
	{
		___udpPrice_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___udpPrice_7), (void*)value);
	}

	inline static int32_t get_offset_of_payouts_8() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8, ___payouts_8)); }
	inline List_1_t9142463137C9E616A651ACDE957BA2630FCD06E5 * get_payouts_8() const { return ___payouts_8; }
	inline List_1_t9142463137C9E616A651ACDE957BA2630FCD06E5 ** get_address_of_payouts_8() { return &___payouts_8; }
	inline void set_payouts_8(List_1_t9142463137C9E616A651ACDE957BA2630FCD06E5 * value)
	{
		___payouts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payouts_8), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductDefinition
struct  ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___m_Payouts_4)); }
	inline List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Payouts_4), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_tC53D4D465AC20C1554B98F68B65F07243C55C722  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0::<>4__this
	ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * ___U3CU3E4__this_0;
	// UnityEngine.Purchasing.InitializationFailureReason UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0::reason
	int32_t ___reason_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tC53D4D465AC20C1554B98F68B65F07243C55C722, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tC53D4D465AC20C1554B98F68B65F07243C55C722, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule
struct  StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0  : public AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04
{
public:
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::m_AppStorePlatform
	int32_t ___m_AppStorePlatform_1;
	// UnityEngine.Purchasing.INativeStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_NativeStoreProvider
	RuntimeObject* ___m_NativeStoreProvider_2;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_3;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::m_UseCloudCatalog
	bool ___m_UseCloudCatalog_4;
	// System.String UnityEngine.Purchasing.StandardPurchasingModule::<m_persistentDataPath>k__BackingField
	String_t* ___U3Cm_persistentDataPathU3Ek__BackingField_5;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::<util>k__BackingField
	RuntimeObject* ___U3CutilU3Ek__BackingField_7;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::<logger>k__BackingField
	RuntimeObject* ___U3CloggerU3Ek__BackingField_8;
	// UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.StandardPurchasingModule::<webUtil>k__BackingField
	RuntimeObject* ___U3CwebUtilU3Ek__BackingField_9;
	// UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::<storeInstance>k__BackingField
	StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C * ___U3CstoreInstanceU3Ek__BackingField_10;
	// UnityEngine.Purchasing.CloudCatalogImpl UnityEngine.Purchasing.StandardPurchasingModule::m_CloudCatalog
	CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * ___m_CloudCatalog_12;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_13;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreAlways>k__BackingField
	bool ___U3CuseFakeStoreAlwaysU3Ek__BackingField_14;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * ___windowsStore_15;

public:
	inline static int32_t get_offset_of_m_AppStorePlatform_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___m_AppStorePlatform_1)); }
	inline int32_t get_m_AppStorePlatform_1() const { return ___m_AppStorePlatform_1; }
	inline int32_t* get_address_of_m_AppStorePlatform_1() { return &___m_AppStorePlatform_1; }
	inline void set_m_AppStorePlatform_1(int32_t value)
	{
		___m_AppStorePlatform_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeStoreProvider_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___m_NativeStoreProvider_2)); }
	inline RuntimeObject* get_m_NativeStoreProvider_2() const { return ___m_NativeStoreProvider_2; }
	inline RuntimeObject** get_address_of_m_NativeStoreProvider_2() { return &___m_NativeStoreProvider_2; }
	inline void set_m_NativeStoreProvider_2(RuntimeObject* value)
	{
		___m_NativeStoreProvider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NativeStoreProvider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___m_RuntimePlatform_3)); }
	inline int32_t get_m_RuntimePlatform_3() const { return ___m_RuntimePlatform_3; }
	inline int32_t* get_address_of_m_RuntimePlatform_3() { return &___m_RuntimePlatform_3; }
	inline void set_m_RuntimePlatform_3(int32_t value)
	{
		___m_RuntimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_m_UseCloudCatalog_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___m_UseCloudCatalog_4)); }
	inline bool get_m_UseCloudCatalog_4() const { return ___m_UseCloudCatalog_4; }
	inline bool* get_address_of_m_UseCloudCatalog_4() { return &___m_UseCloudCatalog_4; }
	inline void set_m_UseCloudCatalog_4(bool value)
	{
		___m_UseCloudCatalog_4 = value;
	}

	inline static int32_t get_offset_of_U3Cm_persistentDataPathU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___U3Cm_persistentDataPathU3Ek__BackingField_5)); }
	inline String_t* get_U3Cm_persistentDataPathU3Ek__BackingField_5() const { return ___U3Cm_persistentDataPathU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3Cm_persistentDataPathU3Ek__BackingField_5() { return &___U3Cm_persistentDataPathU3Ek__BackingField_5; }
	inline void set_U3Cm_persistentDataPathU3Ek__BackingField_5(String_t* value)
	{
		___U3Cm_persistentDataPathU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cm_persistentDataPathU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CutilU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___U3CutilU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CutilU3Ek__BackingField_7() const { return ___U3CutilU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CutilU3Ek__BackingField_7() { return &___U3CutilU3Ek__BackingField_7; }
	inline void set_U3CutilU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CutilU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CutilU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloggerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___U3CloggerU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CloggerU3Ek__BackingField_8() const { return ___U3CloggerU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CloggerU3Ek__BackingField_8() { return &___U3CloggerU3Ek__BackingField_8; }
	inline void set_U3CloggerU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CloggerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloggerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebUtilU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___U3CwebUtilU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CwebUtilU3Ek__BackingField_9() const { return ___U3CwebUtilU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CwebUtilU3Ek__BackingField_9() { return &___U3CwebUtilU3Ek__BackingField_9; }
	inline void set_U3CwebUtilU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CwebUtilU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebUtilU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreInstanceU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___U3CstoreInstanceU3Ek__BackingField_10)); }
	inline StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C * get_U3CstoreInstanceU3Ek__BackingField_10() const { return ___U3CstoreInstanceU3Ek__BackingField_10; }
	inline StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C ** get_address_of_U3CstoreInstanceU3Ek__BackingField_10() { return &___U3CstoreInstanceU3Ek__BackingField_10; }
	inline void set_U3CstoreInstanceU3Ek__BackingField_10(StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C * value)
	{
		___U3CstoreInstanceU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreInstanceU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CloudCatalog_12() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___m_CloudCatalog_12)); }
	inline CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * get_m_CloudCatalog_12() const { return ___m_CloudCatalog_12; }
	inline CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 ** get_address_of_m_CloudCatalog_12() { return &___m_CloudCatalog_12; }
	inline void set_m_CloudCatalog_12(CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * value)
	{
		___m_CloudCatalog_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CloudCatalog_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___U3CuseFakeStoreUIModeU3Ek__BackingField_13)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_13() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_13() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_13; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_13(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___U3CuseFakeStoreAlwaysU3Ek__BackingField_14)); }
	inline bool get_U3CuseFakeStoreAlwaysU3Ek__BackingField_14() const { return ___U3CuseFakeStoreAlwaysU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_14() { return &___U3CuseFakeStoreAlwaysU3Ek__BackingField_14; }
	inline void set_U3CuseFakeStoreAlwaysU3Ek__BackingField_14(bool value)
	{
		___U3CuseFakeStoreAlwaysU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_windowsStore_15() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0, ___windowsStore_15)); }
	inline WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * get_windowsStore_15() const { return ___windowsStore_15; }
	inline WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 ** get_address_of_windowsStore_15() { return &___windowsStore_15; }
	inline void set_windowsStore_15(WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * value)
	{
		___windowsStore_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowsStore_15), (void*)value);
	}
};

struct StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0_StaticFields
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * ___ModuleInstance_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_tF73786AF84CB91EFD0BA1C0CD6AF7EE4C03B4863 * ___AndroidStoreNameMap_11;

public:
	inline static int32_t get_offset_of_ModuleInstance_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0_StaticFields, ___ModuleInstance_6)); }
	inline StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * get_ModuleInstance_6() const { return ___ModuleInstance_6; }
	inline StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 ** get_address_of_ModuleInstance_6() { return &___ModuleInstance_6; }
	inline void set_ModuleInstance_6(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * value)
	{
		___ModuleInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ModuleInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_AndroidStoreNameMap_11() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0_StaticFields, ___AndroidStoreNameMap_11)); }
	inline Dictionary_2_tF73786AF84CB91EFD0BA1C0CD6AF7EE4C03B4863 * get_AndroidStoreNameMap_11() const { return ___AndroidStoreNameMap_11; }
	inline Dictionary_2_tF73786AF84CB91EFD0BA1C0CD6AF7EE4C03B4863 ** get_address_of_AndroidStoreNameMap_11() { return &___AndroidStoreNameMap_11; }
	inline void set_AndroidStoreNameMap_11(Dictionary_2_tF73786AF84CB91EFD0BA1C0CD6AF7EE4C03B4863 * value)
	{
		___AndroidStoreNameMap_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AndroidStoreNameMap_11), (void*)value);
	}
};


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_1)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;
};

// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct  Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>
struct  Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>
struct  Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>
struct  Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>
struct  Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct  Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.Int32>
struct  Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct  Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>
struct  Action_3_tDAA4AD214D2CEC03F07814ABAC061922F0E100B0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>
struct  Action_4_t28CF4A06D662386572B79C451FFDCC866ECFE3ED  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.FormatException
struct  FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean>
struct  Func_2_t0C7F6B3122AD28DD8D7D52468817E59C3555573A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct  Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>
struct  Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct  Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Predicate`1<System.String>
struct  Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.Serialization.SerializationException
struct  SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

struct SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_StaticFields
{
public:
	// System.String System.Runtime.Serialization.SerializationException::_nullMessage
	String_t* ____nullMessage_17;

public:
	inline static int32_t get_offset_of__nullMessage_17() { return static_cast<int32_t>(offsetof(SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_StaticFields, ____nullMessage_17)); }
	inline String_t* get__nullMessage_17() const { return ____nullMessage_17; }
	inline String_t** get_address_of__nullMessage_17() { return &____nullMessage_17; }
	inline void set__nullMessage_17(String_t* value)
	{
		____nullMessage_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullMessage_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Purchasing.AppleStoreImpl
struct  AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D  : public JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1
{
public:
	// System.Action`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.AppleStoreImpl::m_DeferredCallback
	Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * ___m_DeferredCallback_21;
	// System.Action UnityEngine.Purchasing.AppleStoreImpl::m_RefreshReceiptError
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_RefreshReceiptError_22;
	// System.Action`1<System.String> UnityEngine.Purchasing.AppleStoreImpl::m_RefreshReceiptSuccess
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___m_RefreshReceiptSuccess_23;
	// System.Action`1<System.Boolean> UnityEngine.Purchasing.AppleStoreImpl::m_RestoreCallback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___m_RestoreCallback_24;
	// System.Action`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.AppleStoreImpl::m_PromotionalPurchaseCallback
	Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * ___m_PromotionalPurchaseCallback_25;
	// UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.AppleStoreImpl::m_Native
	RuntimeObject* ___m_Native_26;
	// System.String UnityEngine.Purchasing.AppleStoreImpl::products_json
	String_t* ___products_json_29;
	// System.Boolean UnityEngine.Purchasing.AppleStoreImpl::shouldLogPromoInitialization
	bool ___shouldLogPromoInitialization_30;

public:
	inline static int32_t get_offset_of_m_DeferredCallback_21() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D, ___m_DeferredCallback_21)); }
	inline Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * get_m_DeferredCallback_21() const { return ___m_DeferredCallback_21; }
	inline Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 ** get_address_of_m_DeferredCallback_21() { return &___m_DeferredCallback_21; }
	inline void set_m_DeferredCallback_21(Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * value)
	{
		___m_DeferredCallback_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeferredCallback_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_RefreshReceiptError_22() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D, ___m_RefreshReceiptError_22)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_RefreshReceiptError_22() const { return ___m_RefreshReceiptError_22; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_RefreshReceiptError_22() { return &___m_RefreshReceiptError_22; }
	inline void set_m_RefreshReceiptError_22(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_RefreshReceiptError_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RefreshReceiptError_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_RefreshReceiptSuccess_23() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D, ___m_RefreshReceiptSuccess_23)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_m_RefreshReceiptSuccess_23() const { return ___m_RefreshReceiptSuccess_23; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_m_RefreshReceiptSuccess_23() { return &___m_RefreshReceiptSuccess_23; }
	inline void set_m_RefreshReceiptSuccess_23(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___m_RefreshReceiptSuccess_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RefreshReceiptSuccess_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_RestoreCallback_24() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D, ___m_RestoreCallback_24)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_m_RestoreCallback_24() const { return ___m_RestoreCallback_24; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_m_RestoreCallback_24() { return &___m_RestoreCallback_24; }
	inline void set_m_RestoreCallback_24(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___m_RestoreCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RestoreCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_PromotionalPurchaseCallback_25() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D, ___m_PromotionalPurchaseCallback_25)); }
	inline Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * get_m_PromotionalPurchaseCallback_25() const { return ___m_PromotionalPurchaseCallback_25; }
	inline Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 ** get_address_of_m_PromotionalPurchaseCallback_25() { return &___m_PromotionalPurchaseCallback_25; }
	inline void set_m_PromotionalPurchaseCallback_25(Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * value)
	{
		___m_PromotionalPurchaseCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PromotionalPurchaseCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_Native_26() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D, ___m_Native_26)); }
	inline RuntimeObject* get_m_Native_26() const { return ___m_Native_26; }
	inline RuntimeObject** get_address_of_m_Native_26() { return &___m_Native_26; }
	inline void set_m_Native_26(RuntimeObject* value)
	{
		___m_Native_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Native_26), (void*)value);
	}

	inline static int32_t get_offset_of_products_json_29() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D, ___products_json_29)); }
	inline String_t* get_products_json_29() const { return ___products_json_29; }
	inline String_t** get_address_of_products_json_29() { return &___products_json_29; }
	inline void set_products_json_29(String_t* value)
	{
		___products_json_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_json_29), (void*)value);
	}

	inline static int32_t get_offset_of_shouldLogPromoInitialization_30() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D, ___shouldLogPromoInitialization_30)); }
	inline bool get_shouldLogPromoInitialization_30() const { return ___shouldLogPromoInitialization_30; }
	inline bool* get_address_of_shouldLogPromoInitialization_30() { return &___shouldLogPromoInitialization_30; }
	inline void set_shouldLogPromoInitialization_30(bool value)
	{
		___shouldLogPromoInitialization_30 = value;
	}
};

struct AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D_StaticFields
{
public:
	// Uniject.IUtil UnityEngine.Purchasing.AppleStoreImpl::util
	RuntimeObject* ___util_27;
	// UnityEngine.Purchasing.AppleStoreImpl UnityEngine.Purchasing.AppleStoreImpl::instance
	AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D * ___instance_28;

public:
	inline static int32_t get_offset_of_util_27() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D_StaticFields, ___util_27)); }
	inline RuntimeObject* get_util_27() const { return ___util_27; }
	inline RuntimeObject** get_address_of_util_27() { return &___util_27; }
	inline void set_util_27(RuntimeObject* value)
	{
		___util_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___util_27), (void*)value);
	}

	inline static int32_t get_offset_of_instance_28() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D_StaticFields, ___instance_28)); }
	inline AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D * get_instance_28() const { return ___instance_28; }
	inline AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D ** get_address_of_instance_28() { return &___instance_28; }
	inline void set_instance_28(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D * value)
	{
		___instance_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_28), (void*)value);
	}
};


// UnityEngine.Purchasing.FacebookStoreImpl
struct  FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E  : public JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1
{
public:
	// UnityEngine.Purchasing.INativeFacebookStore UnityEngine.Purchasing.FacebookStoreImpl::m_Native
	RuntimeObject* ___m_Native_21;

public:
	inline static int32_t get_offset_of_m_Native_21() { return static_cast<int32_t>(offsetof(FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E, ___m_Native_21)); }
	inline RuntimeObject* get_m_Native_21() const { return ___m_Native_21; }
	inline RuntimeObject** get_address_of_m_Native_21() { return &___m_Native_21; }
	inline void set_m_Native_21(RuntimeObject* value)
	{
		___m_Native_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Native_21), (void*)value);
	}
};

struct FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E_StaticFields
{
public:
	// Uniject.IUtil UnityEngine.Purchasing.FacebookStoreImpl::util
	RuntimeObject* ___util_22;
	// UnityEngine.Purchasing.FacebookStoreImpl UnityEngine.Purchasing.FacebookStoreImpl::instance
	FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E * ___instance_23;

public:
	inline static int32_t get_offset_of_util_22() { return static_cast<int32_t>(offsetof(FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E_StaticFields, ___util_22)); }
	inline RuntimeObject* get_util_22() const { return ___util_22; }
	inline RuntimeObject** get_address_of_util_22() { return &___util_22; }
	inline void set_util_22(RuntimeObject* value)
	{
		___util_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___util_22), (void*)value);
	}

	inline static int32_t get_offset_of_instance_23() { return static_cast<int32_t>(offsetof(FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E_StaticFields, ___instance_23)); }
	inline FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E * get_instance_23() const { return ___instance_23; }
	inline FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E ** get_address_of_instance_23() { return &___instance_23; }
	inline void set_instance_23(FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E * value)
	{
		___instance_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_23), (void*)value);
	}
};


// UnityEngine.Purchasing.FakeStore
struct  FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59  : public JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1
{
public:
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.FakeStore::m_Biller
	RuntimeObject* ___m_Biller_21;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Purchasing.FakeStore::m_PurchasedProducts
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_PurchasedProducts_22;
	// System.Boolean UnityEngine.Purchasing.FakeStore::purchaseCalled
	bool ___purchaseCalled_23;
	// System.String UnityEngine.Purchasing.FakeStore::<unavailableProductId>k__BackingField
	String_t* ___U3CunavailableProductIdU3Ek__BackingField_24;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.FakeStore::UIMode
	int32_t ___UIMode_25;

public:
	inline static int32_t get_offset_of_m_Biller_21() { return static_cast<int32_t>(offsetof(FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59, ___m_Biller_21)); }
	inline RuntimeObject* get_m_Biller_21() const { return ___m_Biller_21; }
	inline RuntimeObject** get_address_of_m_Biller_21() { return &___m_Biller_21; }
	inline void set_m_Biller_21(RuntimeObject* value)
	{
		___m_Biller_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Biller_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_PurchasedProducts_22() { return static_cast<int32_t>(offsetof(FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59, ___m_PurchasedProducts_22)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_PurchasedProducts_22() const { return ___m_PurchasedProducts_22; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_PurchasedProducts_22() { return &___m_PurchasedProducts_22; }
	inline void set_m_PurchasedProducts_22(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_PurchasedProducts_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchasedProducts_22), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseCalled_23() { return static_cast<int32_t>(offsetof(FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59, ___purchaseCalled_23)); }
	inline bool get_purchaseCalled_23() const { return ___purchaseCalled_23; }
	inline bool* get_address_of_purchaseCalled_23() { return &___purchaseCalled_23; }
	inline void set_purchaseCalled_23(bool value)
	{
		___purchaseCalled_23 = value;
	}

	inline static int32_t get_offset_of_U3CunavailableProductIdU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59, ___U3CunavailableProductIdU3Ek__BackingField_24)); }
	inline String_t* get_U3CunavailableProductIdU3Ek__BackingField_24() const { return ___U3CunavailableProductIdU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CunavailableProductIdU3Ek__BackingField_24() { return &___U3CunavailableProductIdU3Ek__BackingField_24; }
	inline void set_U3CunavailableProductIdU3Ek__BackingField_24(String_t* value)
	{
		___U3CunavailableProductIdU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunavailableProductIdU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_UIMode_25() { return static_cast<int32_t>(offsetof(FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59, ___UIMode_25)); }
	inline int32_t get_UIMode_25() const { return ___UIMode_25; }
	inline int32_t* get_address_of_UIMode_25() { return &___UIMode_25; }
	inline void set_UIMode_25(int32_t value)
	{
		___UIMode_25 = value;
	}
};


// UnityEngine.Purchasing.UDPImpl
struct  UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5  : public JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1
{
public:
	// UnityEngine.Purchasing.INativeUDPStore UnityEngine.Purchasing.UDPImpl::m_Bindings
	RuntimeObject* ___m_Bindings_21;
	// System.Object UnityEngine.Purchasing.UDPImpl::m_UserInfo
	RuntimeObject * ___m_UserInfo_22;
	// System.String UnityEngine.Purchasing.UDPImpl::m_LastInitError
	String_t* ___m_LastInitError_23;
	// System.Boolean UnityEngine.Purchasing.UDPImpl::m_Initialized
	bool ___m_Initialized_24;

public:
	inline static int32_t get_offset_of_m_Bindings_21() { return static_cast<int32_t>(offsetof(UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5, ___m_Bindings_21)); }
	inline RuntimeObject* get_m_Bindings_21() const { return ___m_Bindings_21; }
	inline RuntimeObject** get_address_of_m_Bindings_21() { return &___m_Bindings_21; }
	inline void set_m_Bindings_21(RuntimeObject* value)
	{
		___m_Bindings_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserInfo_22() { return static_cast<int32_t>(offsetof(UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5, ___m_UserInfo_22)); }
	inline RuntimeObject * get_m_UserInfo_22() const { return ___m_UserInfo_22; }
	inline RuntimeObject ** get_address_of_m_UserInfo_22() { return &___m_UserInfo_22; }
	inline void set_m_UserInfo_22(RuntimeObject * value)
	{
		___m_UserInfo_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserInfo_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastInitError_23() { return static_cast<int32_t>(offsetof(UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5, ___m_LastInitError_23)); }
	inline String_t* get_m_LastInitError_23() const { return ___m_LastInitError_23; }
	inline String_t** get_address_of_m_LastInitError_23() { return &___m_LastInitError_23; }
	inline void set_m_LastInitError_23(String_t* value)
	{
		___m_LastInitError_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastInitError_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_Initialized_24() { return static_cast<int32_t>(offsetof(UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5, ___m_Initialized_24)); }
	inline bool get_m_Initialized_24() const { return ___m_Initialized_24; }
	inline bool* get_address_of_m_Initialized_24() { return &___m_Initialized_24; }
	inline void set_m_Initialized_24(bool value)
	{
		___m_Initialized_24 = value;
	}
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.Canvas
struct  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Purchasing.UIFakeStore
struct  UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11  : public FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59
{
public:
	// UnityEngine.Purchasing.UIFakeStore_DialogRequest UnityEngine.Purchasing.UIFakeStore::m_CurrentDialog
	DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * ___m_CurrentDialog_26;
	// System.Int32 UnityEngine.Purchasing.UIFakeStore::m_LastSelectedDropdownIndex
	int32_t ___m_LastSelectedDropdownIndex_27;
	// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::UIFakeStoreCanvasPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___UIFakeStoreCanvasPrefab_28;
	// UnityEngine.Canvas UnityEngine.Purchasing.UIFakeStore::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_29;
	// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::m_EventSystem
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_EventSystem_30;
	// System.String UnityEngine.Purchasing.UIFakeStore::m_ParentGameObjectPath
	String_t* ___m_ParentGameObjectPath_31;

public:
	inline static int32_t get_offset_of_m_CurrentDialog_26() { return static_cast<int32_t>(offsetof(UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11, ___m_CurrentDialog_26)); }
	inline DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * get_m_CurrentDialog_26() const { return ___m_CurrentDialog_26; }
	inline DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 ** get_address_of_m_CurrentDialog_26() { return &___m_CurrentDialog_26; }
	inline void set_m_CurrentDialog_26(DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * value)
	{
		___m_CurrentDialog_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentDialog_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastSelectedDropdownIndex_27() { return static_cast<int32_t>(offsetof(UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11, ___m_LastSelectedDropdownIndex_27)); }
	inline int32_t get_m_LastSelectedDropdownIndex_27() const { return ___m_LastSelectedDropdownIndex_27; }
	inline int32_t* get_address_of_m_LastSelectedDropdownIndex_27() { return &___m_LastSelectedDropdownIndex_27; }
	inline void set_m_LastSelectedDropdownIndex_27(int32_t value)
	{
		___m_LastSelectedDropdownIndex_27 = value;
	}

	inline static int32_t get_offset_of_UIFakeStoreCanvasPrefab_28() { return static_cast<int32_t>(offsetof(UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11, ___UIFakeStoreCanvasPrefab_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_UIFakeStoreCanvasPrefab_28() const { return ___UIFakeStoreCanvasPrefab_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_UIFakeStoreCanvasPrefab_28() { return &___UIFakeStoreCanvasPrefab_28; }
	inline void set_UIFakeStoreCanvasPrefab_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___UIFakeStoreCanvasPrefab_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UIFakeStoreCanvasPrefab_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_29() { return static_cast<int32_t>(offsetof(UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11, ___m_Canvas_29)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_29() const { return ___m_Canvas_29; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_29() { return &___m_Canvas_29; }
	inline void set_m_Canvas_29(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_30() { return static_cast<int32_t>(offsetof(UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11, ___m_EventSystem_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_EventSystem_30() const { return ___m_EventSystem_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_EventSystem_30() { return &___m_EventSystem_30; }
	inline void set_m_EventSystem_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_EventSystem_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentGameObjectPath_31() { return static_cast<int32_t>(offsetof(UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11, ___m_ParentGameObjectPath_31)); }
	inline String_t* get_m_ParentGameObjectPath_31() const { return ___m_ParentGameObjectPath_31; }
	inline String_t** get_address_of_m_ParentGameObjectPath_31() { return &___m_ParentGameObjectPath_31; }
	inline void set_m_ParentGameObjectPath_31(String_t* value)
	{
		___m_ParentGameObjectPath_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentGameObjectPath_31), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.Purchasing.Extension.UnityUtil
struct  UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> UnityEngine.Purchasing.Extension.UnityUtil::pauseListeners
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___pauseListeners_7;

public:
	inline static int32_t get_offset_of_pauseListeners_7() { return static_cast<int32_t>(offsetof(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4, ___pauseListeners_7)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_pauseListeners_7() const { return ___pauseListeners_7; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_pauseListeners_7() { return &___pauseListeners_7; }
	inline void set_pauseListeners_7(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___pauseListeners_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseListeners_7), (void*)value);
	}
};

struct UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Action> UnityEngine.Purchasing.Extension.UnityUtil::s_Callbacks
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___s_Callbacks_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Purchasing.Extension.UnityUtil::s_CallbacksPending
	bool ___s_CallbacksPending_5;
	// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform> UnityEngine.Purchasing.Extension.UnityUtil::s_PcControlledPlatforms
	List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * ___s_PcControlledPlatforms_6;

public:
	inline static int32_t get_offset_of_s_Callbacks_4() { return static_cast<int32_t>(offsetof(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields, ___s_Callbacks_4)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_s_Callbacks_4() const { return ___s_Callbacks_4; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_s_Callbacks_4() { return &___s_Callbacks_4; }
	inline void set_s_Callbacks_4(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___s_Callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Callbacks_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_CallbacksPending_5() { return static_cast<int32_t>(offsetof(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields, ___s_CallbacksPending_5)); }
	inline bool get_s_CallbacksPending_5() const { return ___s_CallbacksPending_5; }
	inline bool* get_address_of_s_CallbacksPending_5() { return &___s_CallbacksPending_5; }
	inline void set_s_CallbacksPending_5(bool value)
	{
		___s_CallbacksPending_5 = value;
	}

	inline static int32_t get_offset_of_s_PcControlledPlatforms_6() { return static_cast<int32_t>(offsetof(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields, ___s_PcControlledPlatforms_6)); }
	inline List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * get_s_PcControlledPlatforms_6() const { return ___s_PcControlledPlatforms_6; }
	inline List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E ** get_address_of_s_PcControlledPlatforms_6() { return &___s_PcControlledPlatforms_6; }
	inline void set_s_PcControlledPlatforms_6(List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * value)
	{
		___s_PcControlledPlatforms_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PcControlledPlatforms_6), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier
struct  LifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::OnDestroyCallback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDestroyCallback_4;

public:
	inline static int32_t get_offset_of_OnDestroyCallback_4() { return static_cast<int32_t>(offsetof(LifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E, ___OnDestroyCallback_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDestroyCallback_4() const { return ___OnDestroyCallback_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDestroyCallback_4() { return &___OnDestroyCallback_4; }
	inline void set_OnDestroyCallback_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDestroyCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDestroyCallback_4), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule_MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_PointerData_14)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_MouseState_15)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.Dropdown
struct  Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown_OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown_DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown_DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown_OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_34;

public:
	inline static int32_t get_offset_of_s_NoOptionData_34() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_34)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_34() const { return ___s_NoOptionData_34; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_34() { return &___s_NoOptionData_34; }
	inline void set_s_NoOptionData_34(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_34), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.EventSystems.StandaloneInputModule
struct  StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD  : public PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMoveVector_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMousePosition_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_MousePosition_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Assembly_t * m_Items[1];

public:
	inline Assembly_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * m_Items[1];

public:
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mAC24FA5902DAAC2873D8C570991B04EC720C74B1_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Array::Exists<System.Object>(!!0[],System.Predicate`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_Exists_TisRuntimeObject_m9AA264847158B90F544A82EA38EB195134BCA83D_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisRuntimeObject_mF375ED41FA1B229A77C94F562939FC8A559C749D_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2D719EE02B7FE98B5D6E9515334C594836D2C0C7_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m9DE3234C946104479E5DBB5BC6D687E240784865_gshared (Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 * __this, bool ___arg10, int32_t ___arg21, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32Enum>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m793EB605F2702C16DE665C690BFA9B9675529D94_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mC5E1C7D45426A545720C4B0E300A6142AB811980_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m0BB3ADCD79FCC4B488A2ED84D8315497F978B39D (U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8 (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mAC24FA5902DAAC2873D8C570991B04EC720C74B1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m7C57FE2C6D54FD70FFFF2BD54E6E65EB9F1D44A5 (U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* Type_GetProperties_m4126C117279AD617D8D167367DF953C451FC49E3 (Type_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_GetString_mC82798300001EEFDC1A8CD64ACAD09D96DA59345 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dic0, String_t* ___key1, String_t* ___defaultValue2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.JSONStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONStore__ctor_m468C71DF5781A82BA1F6BE74025B887483A67464 (JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9A6E5C2A0932D66C3D38B64E417811BBD0DEE219 (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Item(!0)
inline Type_t * Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> UnityEngine.Purchasing.UDPReflectionUtils::GetAllAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UDPReflectionUtils_GetAllAssemblies_m7412ADCBB87CAB9FE0D0CCD64E4074B45FACC5A9 (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mCFDCDD2397A277EBAA33DBC3349486A6FB336CB8 (U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m6B6D8E35C0E83BBC784E881CCFA837ED78F48F14 (Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Array::Exists<System.String>(!!0[],System.Predicate`1<!!0>)
inline bool Array_Exists_TisString_t_mF7446ECB8294FA934B9B79F60C8CBC9742B248EC (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3 * ___match1, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3 *, const RuntimeMethod*))Array_Exists_TisRuntimeObject_m9AA264847158B90F544A82EA38EB195134BCA83D_gshared)(___array0, ___match1, method);
}
// System.Collections.Generic.IEnumerable`1<System.Type> UnityEngine.Purchasing.UDPReflectionUtils::GetTypes(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UDPReflectionUtils_GetTypes_m8AC1A6E80E2FB05E577F9C38452A2F10427E2F61 (Assembly_t * ___assembly0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3 (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, String_t* ___key0, Type_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, String_t*, Type_t *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E (const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD (AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mB38D1CF73CA97BB4BFDEB225D4E5B6D19D2EC4BF (Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 * __this, Assembly_t * ___key0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 *, Assembly_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m5BA78C0FB3D4A7DA96583CBC6E15D720CBFC1C63 (Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 * __this, Assembly_t * ___key0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 *, Assembly_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]>::.ctor()
inline void Dictionary_2__ctor_m7014A9CFBFA547D372F27C460AE178B8C68BA11C (Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234 (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.FakeStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FakeStore__ctor_mE1D9B6636A05051A48E8AF1BFFB3EAA1ABD40EA5 (FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIFakeStore_IsShowingDialog_m9B21893E2FED340C154F42020F7A6053A8A6A740 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore/DialogRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogRequest__ctor_m0EE18E18F5572DE6E01C5C7FB85CF48E1EF2E30E (DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_InstantiateDialog_m97B69A01780B2888A4173342B5C94065ACCC2890 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Canvas>(!!0)
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Object_Instantiate_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m9AB7D63ECD528DA81E0BFA47AB1F1F59B9CB76B8 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___original0, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier>()
inline LifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E * GameObject_AddComponent_TisLifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E_mB7D226D9E5FAC06C614579EFD1E655C565F51C3A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801 (const RuntimeMethod* method)
{
	return ((  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___components1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD * GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * UIFakeStore_GetOkayButtonText_m36EDCB2BD98EBC72FB2A77EBD04BD8F0AC938B2A (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * UIFakeStore_GetCancelButtonText_m308D2A419A2EBBE6C7710F7ACDF308D40D0D2453 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Clear()
inline void List_1_Clear_m0120737C67D1EC6FCE04C67135E2BB71DDB96496 (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675 (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(!0)
inline void List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown::RefreshShownValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_RefreshShownValue_m1D58FF9265C31D85B65F52410EA8A8234F974FBA (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * UIFakeStore_GetOkayButton_mCE50A662A84D45C331211032FC1CCA4D0187A774 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4 (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * UIFakeStore_GetCancelButton_m5801E7B85A37C94981E6F20C33E18B9D7AAF66FF (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2 (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * UIFakeStore_GetDropdownContainerGameObject_m29AD74E9C24BEA69069CBE44C510FE69BE51A443 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * UIFakeStore_GetCancelButtonGameObject_mB7B3AC8C1B6FE9983B7F4D51AE8835F70F4B180F (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<UnityEngine.Purchasing.ProductDefinition>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_m01CB0FE7A5C88E38388186F22671F013D3C90AD3 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisRuntimeObject_mF375ED41FA1B229A77C94F562939FC8A559C749D_gshared)(___source0, ___count1, method);
}
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8B51BBBDA54A8483EFC7DE813AA1583F688FA57C (Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Purchasing.ProductDefinition,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_TisString_t_mE10749212FEC943C5795066B7C4EE3889419D71F (RuntimeObject* ___source0, Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_mA4F682996967E9BEB7B5E33240AA00E9156E8E5F (ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m2D719EE02B7FE98B5D6E9515334C594836D2C0C7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Dropdown>()
inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_mA75F757D3020A7DEC836E6846AC19BFD52F3BDCD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Int32>::Invoke(!0,!1)
inline void Action_2_Invoke_m9DE3234C946104479E5DBB5BC6D687E240784865 (Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 * __this, bool ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 *, bool, int32_t, const RuntimeMethod*))Action_2_Invoke_m9DE3234C946104479E5DBB5BC6D687E240784865_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CloseDialog_m0BC4FBED90982409408EB9A82CA61B08ADD2B968 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_OkayButtonClicked_m86FC1B4FAB78AC4FF5D3440ABD6FFEC41DF3E72B (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CancelButtonClicked_mD2A026FA6BBE33C81C6BBA3F1CBEA29E23285E25 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_DropdownValueChanged_m34CE15E3D67653F6CBED4D29E6F3EC291473A21B (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, int32_t ___selectedItem0, const RuntimeMethod* method);
// System.Type UnityEngine.Purchasing.UDPReflectionUtils::GetTypeByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UDPReflectionUtils_GetTypeByName_m2D706B5311D5E3D7E3C8C373CEFF748F2BEE42C1 (String_t* ___typeName0, const RuntimeMethod* method);
// System.Type UnityEngine.Purchasing.UdpIapBridgeInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UdpIapBridgeInterface_GetClassType_m0CB7252C564FE1FDEF51C378E5726197E29AEFC9 (const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaClass UnityEngine.Purchasing.UnityActivity::GetUnityPlayerClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * UnityActivity_GetUnityPlayerClass_m79E6A7344C141D41D1CF3A3AAAA5D851C9B70896 (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m12CA3C3D8C75E44FBFA73E2E34D9E743AF732B1E (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_cloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_cloudProjectId_m4428D3F30727F38D42D63962932341043560E43D (const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_m5709C9DC233D10A7E9AF4BCC9639E3F18FE36831 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_m3D7E3915FF7D40E0E5569C7A80BCFE7C2D2528C9 (const RuntimeMethod* method);
// System.UInt64 System.UInt64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_mF4BDC98BB5988FA03D4750E7F44A38766C48ADAD (String_t* ___s0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m99131C20271BDA64F3A537AA009B252DCEDC5977 (const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_deviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceName_m6F221639891D4A635206A39DB2D65584BB708425 (const RuntimeMethod* method);
// UnityEngine.DeviceType UnityEngine.SystemInfo::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_deviceType_mC7A6628167ECFF848FE509510A6E3E2FA0820100 (const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_mF4A5701333A7EB228DDBEF6548200F204B58BEAF (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55 (const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m1C42BB2AF3CA157B8015FA7AB36F8BB1329660E7 (const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Purchasing.Extension.UnityUtil::DelayedCoroutine(System.Collections.IEnumerator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityUtil_DelayedCoroutine_mC01CE141F48420F1FE664FEFED36940F601AC125 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, RuntimeObject* ___coroutine0, int32_t ___delay1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>::Contains(!0)
inline bool List_1_Contains_m2B431C2AA07C86E91C68213E8D805060678F9203 (List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E *, int32_t, const RuntimeMethod*))List_1_Contains_m793EB605F2702C16DE665C690BFA9B9675529D94_gshared)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__49__ctor_m9BC1D238D5E2CF7E2E7E1D4BA14C29F841ED03A1 (U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::CopyTo(!0[])
inline void List_1_CopyTo_mDB05072B2E0AA4C53DE8066A87A90F9A039DC7CF (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ___array0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2*, const RuntimeMethod*))List_1_CopyTo_mC5E1C7D45426A545720C4B0E300A6142AB811980_gshared)(__this, ___array0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Add(!0)
inline void List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4 (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::GetEnumerator()
inline Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3  List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8 (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3  (*) (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::get_Current()
inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_inline (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 * __this, const RuntimeMethod* method)
{
	return ((  Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * (*) (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::Dispose()
inline void Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8 (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::.ctor()
inline void List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>::.ctor()
inline void List_1__ctor_m86D8489A40D06A5D059BF6951FDB7880C5C42CBA (List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>::Add(!0)
inline void List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08 (List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E *, int32_t, const RuntimeMethod*))List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Purchasing.Extension.AbstractStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractStore__ctor_mC8C41E364D4E2A414AC8E3439755882A337CCE97 (AbstractStore_tB0FD374A2E9858EB3A2DC721CBA280409F9485C0 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEBB5050D6438799252C280D3936760BBA42FDEAA (Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.Purchasing.ProductDefinition>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_m7CE07966681ACF1DED7378614CCBC463B2986B07 (RuntimeObject* ___source0, Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6775B2FD06AA0EE939145FBF06D60F85A31F0B67 (Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_TisWinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F_m901D387665C6D3FCE15C68AE6080D62280504DDB (RuntimeObject* ___source0, Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Purchasing.Default.WinProductDescription>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF * Enumerable_ToList_TisWinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F_m7E433C14BB06A80766621A9758A5BCBFC2E9F4D9 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_init_m9167BBFC6511F83A1DA15507B11E4CCA4B9DC5EF (WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * __this, int32_t ___delay0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.AppleStoreImpl/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m89594A4C59A21839FBF5CC7E4B97E1ED9AD7C8A3 (U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_purchaseDate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_purchaseDate_m902295CB992329CB42872065028D14CD5A6D7E8A_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::CompareTo(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_m47E3FE0BCF859DE421259D6D1A601DC3C4BE1C5D_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_storeSpecificId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDescription_get_storeSpecificId_m805EE28C57C25664093C7F5C2FB24EAADFEAFB09_inline (ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.AppleStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleStoreImpl_ProcessMessage_mB2029E81C2ECA053473F597EE88D040D2DFB0D97 (AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Boolean UnityEngine.WWW::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_isDone_m916B54D53395990DB59C64413798FBCAFB08E0E3 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.String UnityEngine.WWW::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW_Dispose_mF5A8B944281564903043545BC1E7F1CAD941519F (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CloudCatalogImpl/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC4034B7A1713A7695527D7EBAA975CE5904D4033 (U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F * __this, const RuntimeMethod* method);
// System.Boolean System.Char::IsUpper(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsUpper_m72EAD892A02AD10D2050EA09BF3735DDE6921892 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Char System.Char::ToLower(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToLower_m1125EA9F4935D6A0F8244D73AA4940C1D0C5D165 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.CloudCatalogImpl::ParseProductsFromJSON(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * CloudCatalogImpl_ParseProductsFromJSON_m43CAC03ABEF817C6CF7B57F19A99D7812430F26A (String_t* ___json0, String_t* ___storeName1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CloudCatalogImpl::TryPersistCatalog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudCatalogImpl_TryPersistCatalog_m941C70FD0C37D99AACF0D9C58C4116F347594604 (CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * __this, String_t* ___response0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>::Invoke(!0)
inline void Action_1_Invoke_m819A05351F202EF5B8F9AB2F363759B0B09D1319 (Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 * __this, HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 *, HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.CloudCatalogImpl::TryLoadCachedCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * CloudCatalogImpl_TryLoadCachedCatalog_m243E8ABDC81A03B747D0838C86CD1F85ED9602D9 (CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>::get_Count()
inline int32_t HashSet_1_get_Count_m5B261754EA79A73B0F71BCCCD7890E8DB7CF4D59_inline (HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CloudCatalogImpl::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudCatalogImpl_FetchProducts_m60504124B6DF71CF8B26DFBAD5FEDBCC8C0A96FE (CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * __this, Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 * ___callback0, int32_t ___delayInSeconds1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.FacebookStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacebookStoreImpl_ProcessMessage_mA1118ED988CBB48AE6463A8E9A8F990AB8CBA1EA (FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Promo::ProvideProductsToAds(UnityEngine.Purchasing.JSONStore,UnityEngine.Purchasing.Extension.IStoreCallback,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promo_ProvideProductsToAds_m6A13572A6F9344445A55D9159F9C66EDFF701E03 (JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1 * ___purchaser0, RuntimeObject* ___manager1, bool ___shouldLog2, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.FakeStore::<>n__0(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FakeStore_U3CU3En__0_mF2B26EDE30304CCA40E18D645D165921F0C3E847 (FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * __this, String_t* ___id0, String_t* ___receipt1, String_t* ___transactionID2, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68 (Type_t * ___enumType0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::.ctor(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseFailureDescription__ctor_m82E2FF9C0415A1D1001A8C0F80016441A08140D5 (PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * __this, String_t* ___productId0, int32_t ___reason1, String_t* ___message2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONStore_OnPurchaseFailed_m27CFA14695D83566F21BCBE94F85BE9327D6B780 (JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1 * __this, PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * ___failure0, String_t* ___json1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB0958FB91982CB49681A96A4EC74CC83378CEAEF (U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases::OnFetchedPurchaseSuccessful(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleFetchPurchases_OnFetchedPurchaseSuccessful_m6F95AF92964FB93B48794F59EF870717C6F2CA95 (GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910 * __this, List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * ___purchases0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onQueryPurchaseSucceed1, const RuntimeMethod* method);
// System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean> UnityEngine.Purchasing.GoogleFinishTransactionService::PurchaseNeedsAcknowledgement(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t0C7F6B3122AD28DD8D7D52468817E59C3555573A * GoogleFinishTransactionService_PurchaseNeedsAcknowledgement_mA965E7B825EB77A26623CBBC1D470484657D0C49 (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.Purchasing.Models.GooglePurchase>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisGooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314_m7CD89F87C48902C4A87FAB0BFD255B65CB7CABC7 (RuntimeObject* ___source0, Func_2_t0C7F6B3122AD28DD8D7D52468817E59C3555573A * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0C7F6B3122AD28DD8D7D52468817E59C3555573A *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// System.Void UnityEngine.Purchasing.GooglePurchaseService::OnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,UnityEngine.Purchasing.Product,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePurchaseService_OnQuerySkuDetailsResponse_m1443302EF8ACAAE16FD9D43A522BB4F81E3A629B (GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5 * __this, List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___skus0, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___oldProduct1, int32_t ___desiredProrationMode2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m32EF4809692FB5EA008B0CD2C01AA39DFD987585 (U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::InApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSkuTypeEnum_InApp_m4F9E9F5E2BA2C101E2A6C7B9E92AF017A70882EE (const RuntimeMethod* method);
// UnityEngine.Purchasing.Models.GooglePurchaseResult UnityEngine.Purchasing.GoogleQueryPurchasesService::QueryPurchasesWithSkuType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GooglePurchaseResult_tD281D28FFEDF055C61EAF87CD825B6691B000658 * GoogleQueryPurchasesService_QueryPurchasesWithSkuType_mB1E5C83EC06ABAF8A69080E1CF6D7B34BF09E389 (GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A * __this, String_t* ___skuType0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m913D2068E9319AFAC415744AA84697B23D903429 (Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::HandleGooglePurchaseResult(UnityEngine.Purchasing.Models.GooglePurchaseResult,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleQueryPurchasesService_HandleGooglePurchaseResult_m7EBDADE862A1CF59F35091B2AD49B3017960B657 (GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A * __this, GooglePurchaseResult_tD281D28FFEDF055C61EAF87CD825B6691B000658 * ___purchaseResult0, Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E * ___onPurchaseSucceed1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::HandleOnQueryPurchaseReceived(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>,System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>,System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleQueryPurchasesService_HandleOnQueryPurchaseReceived_m6930C59EEFEE7CB773482A96FDCB6CA111D8B585 (Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E * ___onQueryPurchaseSucceed0, List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * ___googlePurchasesInSubs1, List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * ___googlePurchasesInApps2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.LocalizedProductDescription/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5521CA424C8103923ACE80EDFB5F10916D9C9C2 (U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16 * __this, const RuntimeMethod* method);
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * GroupCollection_get_Item_m58F451BF6490EB64CA9C1A05844A790967166A6D (GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * __this, String_t* ___groupname0, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A (Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE2DF841397B10B947C6729D5B811D0C25D211A56 (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.ProductCatalog/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1D58784C432D777FD3D1CEDF680AEFDD648CDADE (U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52 * __this, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6C0E80B5B4BEE9054DDEB8D1A37899C48916B961 (U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertOnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m477B1A227BB146FAC0FBD37EA6E3157FBFFF73B5 (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___skus0, Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 * ___onProductsReceived1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService::ConsolidateOnSkuDetailsReceived(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuerySkuDetailsService_ConsolidateOnSkuDetailsReceived_mBDF6D3104F81E4F419DB03BD538207D63D3A23C8 (QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaBillingResult0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetails1, Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 * ___onSkuDetailsResponse2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::UseMockWindowsStore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardPurchasingModule_UseMockWindowsStore_m4DA7505AA377B212EAA2259C6AFA71CA792C4196 (StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::HashtableFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * MiniJsonExtensions_HashtableFromJson_mB8AD661936F30FBB6505D5ECDD74DA27E0AD386F (String_t* ___json0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Type UnityEngine.Purchasing.UserInfoInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UserInfoInterface_GetClassType_m9812080125843B27829B95984F673CF85B386C0C (const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_DictionaryToStringProperty_m7994C9973D80D9C122FEA25667B8A5C8AF212050 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dic0, RuntimeObject * ___info1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_m52DC16B5D637A42662C913903880AECA584CD9E2 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m68499DF5F7137E155BF18558709A290681667B71 (U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01C91D60F6B78EBAB4D09FEB118B3237078C0CF5 (U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 * __this, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_mB9DFF414FB23863B982F9D863D6E57867995C7F3 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, int32_t ___lo0, int32_t ___mid1, int32_t ___hi2, bool ___isNegative3, uint8_t ___scale4, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription__ctor_m6133BB09C2299027F76001EC4DC35E55221A1E05 (WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F * __this, String_t* ___id0, String_t* ___price1, String_t* ___title2, String_t* ___description3, String_t* ___isoCode4, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___priceD5, String_t* ___receipt6, String_t* ___transactionId7, bool ___consumable8, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.UDPImpl::SetNativeStore(UnityEngine.Purchasing.INativeUDPStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_SetNativeStore_mA858DAA1F1D08922058475F299FEA5DD5F51D0AD (UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * __this, RuntimeObject* ___nativeUdpStore0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___nativeUdpStore0;
		__this->set_m_Bindings_21(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_Initialize_m64A8C93DCE3EECFF3507BE934B86F215099E0201 (UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___callback0;
		((JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1 *)__this)->set_unity_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_RetrieveProducts_m84FC370283AF731FDCA74F9BB681CF500BE4F74E (UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * __this, ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * ___products0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_RetrieveProducts_m84FC370283AF731FDCA74F9BB681CF500BE4F74E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * L_0 = (U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_m0BB3ADCD79FCC4B488A2ED84D8315497F978B39D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * L_2 = V_0;
		ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * L_3 = ___products0;
		NullCheck(L_2);
		L_2->set_products_1(L_3);
		U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * L_4 = V_0;
		U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * L_5 = V_0;
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_6 = (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *)il2cpp_codegen_object_new(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3_il2cpp_TypeInfo_var);
		Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m59185CCC02C3FE34C2A8683EDA69A8AC11C6B851_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_retrieveCallback_2(L_6);
		bool L_7 = __this->get_m_Initialized_24();
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_9 = __this->get_m_Bindings_21();
		U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * L_10 = V_0;
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_11 = (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *)il2cpp_codegen_object_new(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3_il2cpp_TypeInfo_var);
		Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m5DA90193424C5C6369346942F7B20BD5A29D8972_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8_RuntimeMethod_var);
		NullCheck(L_9);
		InterfaceActionInvoker1< Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.INativeUDPStore::Initialize(System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_tE0C4800C551B8A89508ED702D5B54B05C9370EDC_il2cpp_TypeInfo_var, L_9, L_11);
		goto IL_006a;
	}

IL_0050:
	{
		RuntimeObject* L_12 = __this->get_m_Bindings_21();
		U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * L_13 = V_0;
		NullCheck(L_13);
		ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * L_14 = L_13->get_products_1();
		U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * L_15 = V_0;
		NullCheck(L_15);
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_16 = L_15->get_retrieveCallback_2();
		NullCheck(L_12);
		InterfaceActionInvoker2< ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 *, Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * >::Invoke(2 /* System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_tE0C4800C551B8A89508ED702D5B54B05C9370EDC_il2cpp_TypeInfo_var, L_12, L_14, L_16);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_Purchase_m066B0ADA48FC39756DA1F70AE36A9BA296104EB7 (UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_Purchase_m066B0ADA48FC39756DA1F70AE36A9BA296104EB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1 * L_0 = (U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m7C57FE2C6D54FD70FFFF2BD54E6E65EB9F1D44A5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1 * L_1 = V_0;
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_2 = ___product0;
		NullCheck(L_1);
		L_1->set_product_0(L_2);
		U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U3CU3E4__this_1(__this);
		RuntimeObject* L_4 = __this->get_m_Bindings_21();
		U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1 * L_5 = V_0;
		NullCheck(L_5);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_6 = L_5->get_product_0();
		NullCheck(L_6);
		String_t* L_7 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_6, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1 * L_8 = V_0;
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_9 = (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *)il2cpp_codegen_object_new(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3_il2cpp_TypeInfo_var);
		Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_m9302EBEE3A27C59DBDFA895D8AC0B1D2D574A931_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8_RuntimeMethod_var);
		String_t* L_10 = ___developerPayload1;
		NullCheck(L_4);
		InterfaceActionInvoker3< String_t*, Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *, String_t* >::Invoke(1 /* System.Void UnityEngine.Purchasing.INativeUDPStore::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String) */, INativeUDPStore_tE0C4800C551B8A89508ED702D5B54B05C9370EDC_il2cpp_TypeInfo_var, L_4, L_7, L_9, L_10);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_FinishTransaction_m9930DAAD0C7AD078B279B3B236951C302BBC87F9 (UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_FinishTransaction_m9930DAAD0C7AD078B279B3B236951C302BBC87F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___product0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___transactionId1;
		G_B3_0 = ((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 1;
	}

IL_000b:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002f;
	}

IL_0012:
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_3 = ___product0;
		NullCheck(L_3);
		int32_t L_4 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_m_Bindings_21();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_7 = ___product0;
		String_t* L_8 = ___transactionId1;
		NullCheck(L_6);
		InterfaceActionInvoker2< ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 *, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.INativeUDPStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String) */, INativeUDPStore_tE0C4800C551B8A89508ED702D5B54B05C9370EDC_il2cpp_TypeInfo_var, L_6, L_7, L_8);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_DictionaryToStringProperty_m7994C9973D80D9C122FEA25667B8A5C8AF212050 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dic0, RuntimeObject * ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_DictionaryToStringProperty_m7994C9973D80D9C122FEA25667B8A5C8AF212050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_0 = NULL;
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t * V_3 = NULL;
	bool V_4 = false;
	{
		RuntimeObject * L_0 = ___info1;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_2 = Type_GetProperties_m4126C117279AD617D8D167367DF953C451FC49E3(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_3 = V_0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_0050;
	}

IL_0014:
	{
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		PropertyInfo_t * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		PropertyInfo_t * L_8 = V_3;
		NullCheck(L_8);
		Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_8);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_9) == ((RuntimeObject*)(Type_t *)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		PropertyInfo_t * L_13 = V_3;
		RuntimeObject * L_14 = ___info1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_15 = ___dic0;
		PropertyInfo_t * L_16 = V_3;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		String_t* L_18 = MiniJsonExtensions_GetString_mC82798300001EEFDC1A8CD64ACAD09D96DA59345(L_15, L_17, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(26 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_13, L_14, L_18, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_20 = V_2;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl__ctor_mBFAB48314D09093BC4A4E6E2F1ED06A48161EC73 (UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_UserInfo_22(NULL);
		__this->set_m_Initialized_24((bool)0);
		JSONStore__ctor_m468C71DF5781A82BA1F6BE74025B887483A67464(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type UnityEngine.Purchasing.UDPReflectionUtils::GetTypeByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UDPReflectionUtils_GetTypeByName_m2D706B5311D5E3D7E3C8C373CEFF748F2BEE42C1 (String_t* ___typeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPReflectionUtils_GetTypeByName_m2D706B5311D5E3D7E3C8C373CEFF748F2BEE42C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Type_t * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13 * V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	Type_t * V_8 = NULL;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var);
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_0 = ((UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var))->get_s_typeCache_1();
		String_t* L_1 = ___typeName0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m9A6E5C2A0932D66C3D38B64E417811BBD0DEE219(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m9A6E5C2A0932D66C3D38B64E417811BBD0DEE219_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var);
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_4 = ((UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var))->get_s_typeCache_1();
		String_t* L_5 = ___typeName0;
		NullCheck(L_4);
		Type_t * L_6 = Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C_RuntimeMethod_var);
		V_2 = L_6;
		goto IL_00ef;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = UDPReflectionUtils_GetAllAssemblies_m7412ADCBB87CAB9FE0D0CCD64E4074B45FACC5A9(/*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>::GetEnumerator() */, IEnumerable_1_tB3F4FE9423F20C9D8337F7B224FE58B3F54208E9_il2cpp_TypeInfo_var, L_8);
		V_3 = L_9;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d3;
		}

IL_0034:
		{
			U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13 * L_10 = (U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass6_0__ctor_mCFDCDD2397A277EBAA33DBC3349486A6FB336CB8(L_10, /*hidden argument*/NULL);
			V_4 = L_10;
			U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13 * L_11 = V_4;
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			Assembly_t * L_13 = InterfaceFuncInvoker0< Assembly_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.Assembly>::get_Current() */, IEnumerator_1_t4911D25D63389A1D197DED0519AA46CD156EA82A_il2cpp_TypeInfo_var, L_12);
			NullCheck(L_11);
			L_11->set_assembly_0(L_13);
			IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = ((UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var))->get_k_whiteListedAssemblies_2();
			U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13 * L_15 = V_4;
			Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3 * L_16 = (Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3 *)il2cpp_codegen_object_new(Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m6B6D8E35C0E83BBC784E881CCFA837ED78F48F14(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m63F3B59612C7BC7E726657C78A97B76564C2D39A_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m6B6D8E35C0E83BBC784E881CCFA837ED78F48F14_RuntimeMethod_var);
			bool L_17 = Array_Exists_TisString_t_mF7446ECB8294FA934B9B79F60C8CBC9742B248EC(L_14, L_16, /*hidden argument*/Array_Exists_TisString_t_mF7446ECB8294FA934B9B79F60C8CBC9742B248EC_RuntimeMethod_var);
			V_5 = L_17;
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_00d2;
			}
		}

IL_0066:
		{
			U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13 * L_19 = V_4;
			NullCheck(L_19);
			Assembly_t * L_20 = L_19->get_assembly_0();
			IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var);
			RuntimeObject* L_21 = UDPReflectionUtils_GetTypes_m8AC1A6E80E2FB05E577F9C38452A2F10427E2F61(L_20, /*hidden argument*/NULL);
			V_6 = L_21;
			RuntimeObject* L_22 = V_6;
			NullCheck(L_22);
			RuntimeObject* L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var, L_22);
			V_7 = L_23;
		}

IL_007f:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00b9;
			}

IL_0081:
			{
				RuntimeObject* L_24 = V_7;
				NullCheck(L_24);
				Type_t * L_25 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var, L_24);
				V_8 = L_25;
				Type_t * L_26 = V_8;
				NullCheck(L_26);
				String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_26);
				String_t* L_28 = ___typeName0;
				bool L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_27, L_28, /*hidden argument*/NULL);
				V_9 = L_29;
				bool L_30 = V_9;
				if (!L_30)
				{
					goto IL_00b8;
				}
			}

IL_009e:
			{
				IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var);
				Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_31 = ((UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var))->get_s_typeCache_1();
				Type_t * L_32 = V_8;
				NullCheck(L_32);
				String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_32);
				Type_t * L_34 = V_8;
				NullCheck(L_31);
				Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3(L_31, L_33, L_34, /*hidden argument*/Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3_RuntimeMethod_var);
				Type_t * L_35 = V_8;
				V_2 = L_35;
				IL2CPP_LEAVE(0xEF, FINALLY_00c4);
			}

IL_00b8:
			{
			}

IL_00b9:
			{
				RuntimeObject* L_36 = V_7;
				NullCheck(L_36);
				bool L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_0081;
				}
			}

IL_00c2:
			{
				IL2CPP_LEAVE(0xD1, FINALLY_00c4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00c4;
		}

FINALLY_00c4:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_38 = V_7;
				if (!L_38)
				{
					goto IL_00d0;
				}
			}

IL_00c8:
			{
				RuntimeObject* L_39 = V_7;
				NullCheck(L_39);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_39);
			}

IL_00d0:
			{
				IL2CPP_END_FINALLY(196)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(196)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xEF, FINALLY_00e0);
			IL2CPP_JUMP_TBL(0xD1, IL_00d1)
		}

IL_00d1:
		{
		}

IL_00d2:
		{
		}

IL_00d3:
		{
			RuntimeObject* L_40 = V_3;
			NullCheck(L_40);
			bool L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_40);
			if (L_41)
			{
				goto IL_0034;
			}
		}

IL_00de:
		{
			IL2CPP_LEAVE(0xEB, FINALLY_00e0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e0;
	}

FINALLY_00e0:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_42 = V_3;
			if (!L_42)
			{
				goto IL_00ea;
			}
		}

IL_00e3:
		{
			RuntimeObject* L_43 = V_3;
			NullCheck(L_43);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_43);
		}

IL_00ea:
		{
			IL2CPP_END_FINALLY(224)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(224)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xEF, IL_00ef)
		IL2CPP_JUMP_TBL(0xEB, IL_00eb)
	}

IL_00eb:
	{
		V_2 = (Type_t *)NULL;
		goto IL_00ef;
	}

IL_00ef:
	{
		Type_t * L_44 = V_2;
		return L_44;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> UnityEngine.Purchasing.UDPReflectionUtils::GetAllAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UDPReflectionUtils_GetAllAssemblies_m7412ADCBB87CAB9FE0D0CCD64E4074B45FACC5A9 (const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_0 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
		NullCheck(L_0);
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_1 = AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD(L_0, /*hidden argument*/NULL);
		V_0 = (RuntimeObject*)L_1;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> UnityEngine.Purchasing.UDPReflectionUtils::GetTypes(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UDPReflectionUtils_GetTypes_m8AC1A6E80E2FB05E577F9C38452A2F10427E2F61 (Assembly_t * ___assembly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPReflectionUtils_GetTypes_m8AC1A6E80E2FB05E577F9C38452A2F10427E2F61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var);
		Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 * L_0 = ((UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var))->get_s_assemblyTypeCache_0();
		Assembly_t * L_1 = ___assembly0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mB38D1CF73CA97BB4BFDEB225D4E5B6D19D2EC4BF(L_0, L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mB38D1CF73CA97BB4BFDEB225D4E5B6D19D2EC4BF_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Assembly_t * L_4 = ___assembly0;
		NullCheck(L_4);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_5 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(13 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_4);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var);
		Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 * L_6 = ((UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var))->get_s_assemblyTypeCache_0();
		Assembly_t * L_7 = ___assembly0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8 = V_0;
		NullCheck(L_6);
		Dictionary_2_set_Item_m5BA78C0FB3D4A7DA96583CBC6E15D720CBFC1C63(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_set_Item_m5BA78C0FB3D4A7DA96583CBC6E15D720CBFC1C63_RuntimeMethod_var);
	}

IL_002b:
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = V_0;
		V_2 = (RuntimeObject*)L_9;
		goto IL_002f;
	}

IL_002f:
	{
		RuntimeObject* L_10 = V_2;
		return L_10;
	}
}
// System.Void UnityEngine.Purchasing.UDPReflectionUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPReflectionUtils__cctor_m3A5C4299B976A685962591D0E34C747354D151F5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPReflectionUtils__cctor_m3A5C4299B976A685962591D0E34C747354D151F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 * L_0 = (Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789 *)il2cpp_codegen_object_new(Dictionary_2_t978025EA060EDB5EA759F7A386B52ACD798FE789_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7014A9CFBFA547D372F27C460AE178B8C68BA11C(L_0, /*hidden argument*/Dictionary_2__ctor_m7014A9CFBFA547D372F27C460AE178B8C68BA11C_RuntimeMethod_var);
		((UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var))->set_s_assemblyTypeCache_0(L_0);
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_1 = (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *)il2cpp_codegen_object_new(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234(L_1, /*hidden argument*/Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234_RuntimeMethod_var);
		((UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var))->set_s_typeCache_1(L_1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralCFEF3227A766442073C70EFE7DC19B6BA9C63006);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCFEF3227A766442073C70EFE7DC19B6BA9C63006);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral15F3B67F570CD6F1C7255E182D23851EEF865FFA);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral15F3B67F570CD6F1C7255E182D23851EEF865FFA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralDA70E7C4104A19077F6AAA2BAD500E400AB5F6D2);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA70E7C4104A19077F6AAA2BAD500E400AB5F6D2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2DBBF7161508469CCE1CFF74946814970CC72810);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2DBBF7161508469CCE1CFF74946814970CC72810);
		((UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var))->set_k_whiteListedAssemblies_2(L_6);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.UIFakeStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore__ctor_m50CCD47DA90EBFE7392209F40FB0BFEE559173C3 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	{
		FakeStore__ctor_mE1D9B6636A05051A48E8AF1BFFB3EAA1ABD40EA5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.String,System.String,System.String,System.Collections.Generic.List`1<System.String>,System.Action`2<System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIFakeStore_StartUI_mCE845B933A4DF891F0926D7C49EE4F97528861B9 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, String_t* ___queryText0, String_t* ___okayButtonText1, String_t* ___cancelButtonText2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___options3, Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_StartUI_mCE845B933A4DF891F0926D7C49EE4F97528861B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0 = UIFakeStore_IsShowingDialog_m9B21893E2FED340C154F42020F7A6053A8A6A740(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_004d;
	}

IL_0010:
	{
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_2 = (DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 *)il2cpp_codegen_object_new(DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00_il2cpp_TypeInfo_var);
		DialogRequest__ctor_m0EE18E18F5572DE6E01C5C7FB85CF48E1EF2E30E(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_3 = V_0;
		String_t* L_4 = ___queryText0;
		NullCheck(L_3);
		L_3->set_QueryText_0(L_4);
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_5 = V_0;
		String_t* L_6 = ___okayButtonText1;
		NullCheck(L_5);
		L_5->set_OkayButtonText_1(L_6);
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_7 = V_0;
		String_t* L_8 = ___cancelButtonText2;
		NullCheck(L_7);
		L_7->set_CancelButtonText_2(L_8);
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_9 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = ___options3;
		NullCheck(L_9);
		L_9->set_Options_3(L_10);
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_11 = V_0;
		Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 * L_12 = ___callback4;
		NullCheck(L_11);
		L_11->set_Callback_4(L_12);
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_13 = V_0;
		__this->set_m_CurrentDialog_26(L_13);
		UIFakeStore_InstantiateDialog_m97B69A01780B2888A4173342B5C94065ACCC2890(__this, /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_004d;
	}

IL_004d:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_InstantiateDialog_m97B69A01780B2888A4173342B5C94065ACCC2890 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_InstantiateDialog_m97B69A01780B2888A4173342B5C94065ACCC2890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * V_0 = NULL;
	LifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_4 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_9;
	memset((&V_9), 0, sizeof(V_9));
	String_t* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_0 = __this->get_m_CurrentDialog_26();
		V_6 = (bool)((((RuntimeObject*)(DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(__this, _stringLiteral2252E2C069AF487A613B11F90C8542CE9619C9F4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_2, /*hidden argument*/NULL);
		goto IL_02af;
	}

IL_0027:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_UIFakeStoreCanvasPrefab_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_4;
		bool L_5 = V_7;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_6 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral225F2252D4E72B635011BD459E4D4D62E56F10A6, /*hidden argument*/NULL);
		__this->set_UIFakeStoreCanvasPrefab_28(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_6, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
	}

IL_0050:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_UIFakeStoreCanvasPrefab_28();
		NullCheck(L_7);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_8 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_7, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		V_0 = L_8;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_10 = Object_Instantiate_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m9AB7D63ECD528DA81E0BFA47AB1F1F59B9CB76B8(L_9, /*hidden argument*/Object_Instantiate_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m9AB7D63ECD528DA81E0BFA47AB1F1F59B9CB76B8_RuntimeMethod_var);
		__this->set_m_Canvas_29(L_10);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_11 = __this->get_m_Canvas_29();
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		LifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E * L_13 = GameObject_AddComponent_TisLifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E_mB7D226D9E5FAC06C614579EFD1E655C565F51C3A(L_12, /*hidden argument*/GameObject_AddComponent_TisLifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E_mB7D226D9E5FAC06C614579EFD1E655C565F51C3A_RuntimeMethod_var);
		V_1 = L_13;
		LifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E * L_14 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_15, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m589DDC53D995FB3BE7A71CC4E6ACEAF8EA11B34B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_OnDestroyCallback_4(L_15);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_16 = __this->get_m_Canvas_29();
		NullCheck(L_16);
		String_t* L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
		String_t* L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, _stringLiteral7C5772F71F711EF3E76278A66E8A773669717691, /*hidden argument*/NULL);
		__this->set_m_ParentGameObjectPath_31(L_18);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_19 = Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801(/*hidden argument*/Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var);
		bool L_20 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_20;
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_0104;
		}
	}
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_22 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_23 = L_22;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8(L_26, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, L_23, /*hidden argument*/NULL);
		__this->set_m_EventSystem_30(L_26);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_m_EventSystem_30();
		NullCheck(L_27);
		GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895(L_27, /*hidden argument*/GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_m_EventSystem_30();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_30 = __this->get_m_Canvas_29();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_29, L_31, /*hidden argument*/NULL);
	}

IL_0104:
	{
		String_t* L_32 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_33 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_32, _stringLiteralC4116742826A60367A25FCA4CAFF8074E4FCE360, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_2;
		NullCheck(L_35);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_35, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		V_3 = L_36;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = V_3;
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_38 = __this->get_m_CurrentDialog_26();
		NullCheck(L_38);
		String_t* L_39 = L_38->get_QueryText_0();
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_39);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_40 = UIFakeStore_GetOkayButtonText_m36EDCB2BD98EBC72FB2A77EBD04BD8F0AC938B2A(__this, /*hidden argument*/NULL);
		V_4 = L_40;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_41 = V_4;
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_42 = __this->get_m_CurrentDialog_26();
		NullCheck(L_42);
		String_t* L_43 = L_42->get_OkayButtonText_1();
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_43);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_44 = UIFakeStore_GetCancelButtonText_m308D2A419A2EBBE6C7710F7ACDF308D40D0D2453(__this, /*hidden argument*/NULL);
		V_5 = L_44;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = V_5;
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_46 = __this->get_m_CurrentDialog_26();
		NullCheck(L_46);
		String_t* L_47 = L_46->get_CancelButtonText_2();
		NullCheck(L_45);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, L_47);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_48 = UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_49 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		List_1_Clear_m0120737C67D1EC6FCE04C67135E2BB71DDB96496(L_49, /*hidden argument*/List_1_Clear_m0120737C67D1EC6FCE04C67135E2BB71DDB96496_RuntimeMethod_var);
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_50 = __this->get_m_CurrentDialog_26();
		NullCheck(L_50);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_51 = L_50->get_Options_3();
		NullCheck(L_51);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_52 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_51, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_9 = L_52;
	}

IL_018d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01b2;
		}

IL_018f:
		{
			String_t* L_53 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_9), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_10 = L_53;
			Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_54 = UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE(__this, /*hidden argument*/NULL);
			NullCheck(L_54);
			List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_55 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_54, /*hidden argument*/NULL);
			String_t* L_56 = V_10;
			OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_57 = (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *)il2cpp_codegen_object_new(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
			OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675(L_57, L_56, /*hidden argument*/NULL);
			NullCheck(L_55);
			List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC(L_55, L_57, /*hidden argument*/List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
		}

IL_01b2:
		{
			bool L_58 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_9), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_58)
			{
				goto IL_018f;
			}
		}

IL_01bb:
		{
			IL2CPP_LEAVE(0x1CC, FINALLY_01bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01bd;
	}

FINALLY_01bd:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_9), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(445)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(445)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1CC, IL_01cc)
	}

IL_01cc:
	{
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_59 = __this->get_m_CurrentDialog_26();
		NullCheck(L_59);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_60 = L_59->get_Options_3();
		NullCheck(L_60);
		int32_t L_61 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_60, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		V_11 = (bool)((((int32_t)L_61) > ((int32_t)0))? 1 : 0);
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_01ee;
		}
	}
	{
		__this->set_m_LastSelectedDropdownIndex_27(0);
	}

IL_01ee:
	{
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_63 = UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE(__this, /*hidden argument*/NULL);
		NullCheck(L_63);
		Dropdown_RefreshShownValue_m1D58FF9265C31D85B65F52410EA8A8234F974FBA(L_63, /*hidden argument*/NULL);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_64 = UIFakeStore_GetOkayButton_mCE50A662A84D45C331211032FC1CCA4D0187A774(__this, /*hidden argument*/NULL);
		NullCheck(L_64);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_65 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_64, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_66 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_66, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_1_mE417A1D0652B28295179F1515CC321D7E85FA2A2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_65);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_65, L_66, /*hidden argument*/NULL);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_67 = UIFakeStore_GetCancelButton_m5801E7B85A37C94981E6F20C33E18B9D7AAF66FF(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_68 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_67, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_69 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_69, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m17DCC3074704531E05FD6BCDA8EF784229169389_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_68);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_68, L_69, /*hidden argument*/NULL);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_70 = UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_71 = Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA(L_70, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_72 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)il2cpp_codegen_object_new(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F(L_72, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_3_mC8DA5DD905A138D2ECFE276CABEF9C8C3A53ADBF_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		NullCheck(L_71);
		UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2(L_71, L_72, /*hidden argument*/UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var);
		int32_t L_73 = ((FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 *)__this)->get_UIMode_25();
		V_12 = (bool)((((int32_t)L_73) == ((int32_t)1))? 1 : 0);
		bool L_74 = V_12;
		if (!L_74)
		{
			goto IL_0281;
		}
	}
	{
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_75 = UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_76 = Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_76, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = UIFakeStore_GetDropdownContainerGameObject_m29AD74E9C24BEA69069CBE44C510FE69BE51A443(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_77, /*hidden argument*/NULL);
		goto IL_02af;
	}

IL_0281:
	{
		int32_t L_78 = ((FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 *)__this)->get_UIMode_25();
		V_13 = (bool)((((int32_t)L_78) == ((int32_t)2))? 1 : 0);
		bool L_79 = V_13;
		if (!L_79)
		{
			goto IL_02af;
		}
	}
	{
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_80 = UIFakeStore_GetCancelButton_m5801E7B85A37C94981E6F20C33E18B9D7AAF66FF(__this, /*hidden argument*/NULL);
		NullCheck(L_80);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_81 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_80, /*hidden argument*/NULL);
		NullCheck(L_81);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_81, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = UIFakeStore_GetCancelButtonGameObject_mB7B3AC8C1B6FE9983B7F4D51AE8835F70F4B180F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_82, /*hidden argument*/NULL);
	}

IL_02af:
	{
		return;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore::CreatePurchaseQuestion(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIFakeStore_CreatePurchaseQuestion_mF82069AB8BFB007FD4CCB038821DC7E21DACE464 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___definition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CreatePurchaseQuestion_mF82069AB8BFB007FD4CCB038821DC7E21DACE464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___definition0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral1EB0CBA679551FF4CC0974D54AD492880818D55E, L_1, _stringLiteral81FB557C2939F7A4BC33B9B431146C35D6316664, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore::CreateRetrieveProductsQuestion(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIFakeStore_CreateRetrieveProductsQuestion_mBBDC4F25739EA0BD25CFD0DD5F378B7750D7FF71 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * ___definitions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CreateRetrieveProductsQuestion_mBBDC4F25739EA0BD25CFD0DD5F378B7750D7FF71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	{
		V_0 = _stringLiteralBC851683B68F4EEDE7D8DC452DCD5513988E98C6;
		String_t* L_0 = V_0;
		ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * L_1 = ___definitions0;
		RuntimeObject* L_2 = Enumerable_Take_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_m01CB0FE7A5C88E38388186F22671F013D3C90AD3(L_1, 2, /*hidden argument*/Enumerable_Take_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_m01CB0FE7A5C88E38388186F22671F013D3C90AD3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_il2cpp_TypeInfo_var);
		Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * L_3 = ((U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
		Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
		G_B1_3 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
			G_B2_3 = L_0;
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_il2cpp_TypeInfo_var);
		U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17 * L_5 = ((U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * L_6 = (Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 *)il2cpp_codegen_object_new(Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06_il2cpp_TypeInfo_var);
		Func_2__ctor_m8B51BBBDA54A8483EFC7DE813AA1583F688FA57C(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m173E736672AFB37CF15038AE1A8DD1A9B2236D5F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m8B51BBBDA54A8483EFC7DE813AA1583F688FA57C_RuntimeMethod_var);
		Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * L_7 = L_6;
		((U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0033:
	{
		RuntimeObject* L_8 = Enumerable_Select_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_TisString_t_mE10749212FEC943C5795066B7C4EE3889419D71F(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_TisString_t_mE10749212FEC943C5795066B7C4EE3889419D71F_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_8, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		String_t* L_10 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(G_B2_2, L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B2_3, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * L_12 = ___definitions0;
		NullCheck(L_12);
		int32_t L_13 = ReadOnlyCollection_1_get_Count_mA4F682996967E9BEB7B5E33240AA00E9156E8E5F(L_12, /*hidden argument*/ReadOnlyCollection_1_get_Count_mA4F682996967E9BEB7B5E33240AA00E9156E8E5F_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_13) > ((int32_t)2))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_15 = V_0;
		String_t* L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, _stringLiteral8ACABC276DC388B208E8435441C4EA853959724F, /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_0063:
	{
		String_t* L_17 = V_0;
		String_t* L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, _stringLiteralCDDD56D3BC1AD3B110D775A588AB446B05F8AD98, /*hidden argument*/NULL);
		V_0 = L_18;
		String_t* L_19 = V_0;
		V_2 = L_19;
		goto IL_0073;
	}

IL_0073:
	{
		String_t* L_20 = V_2;
		return L_20;
	}
}
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * UIFakeStore_GetOkayButton_mCE50A662A84D45C331211032FC1CCA4D0187A774 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetOkayButton_mCE50A662A84D45C331211032FC1CCA4D0187A774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral6BA9601CDD4A40F35F1F5E500F83CC1A34057835, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_2, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * UIFakeStore_GetCancelButton_m5801E7B85A37C94981E6F20C33E18B9D7AAF66FF (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetCancelButton_m5801E7B85A37C94981E6F20C33E18B9D7AAF66FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	bool V_1 = false;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_2 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralDBB9A1698C46426EE577A5E7E5643C626D347AAA, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		NullCheck(L_6);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_6, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0031;
	}

IL_002c:
	{
		V_2 = (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *)NULL;
		goto IL_0031;
	}

IL_0031:
	{
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * UIFakeStore_GetCancelButtonGameObject_mB7B3AC8C1B6FE9983B7F4D51AE8835F70F4B180F (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetCancelButtonGameObject_mB7B3AC8C1B6FE9983B7F4D51AE8835F70F4B180F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralDBB9A1698C46426EE577A5E7E5643C626D347AAA, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * UIFakeStore_GetOkayButtonText_m36EDCB2BD98EBC72FB2A77EBD04BD8F0AC938B2A (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetOkayButtonText_m36EDCB2BD98EBC72FB2A77EBD04BD8F0AC938B2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral2893C94DD1BA3D3505F83D21547DDE4D6792189A, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * UIFakeStore_GetCancelButtonText_m308D2A419A2EBBE6C7710F7ACDF308D40D0D2453 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetCancelButtonText_m308D2A419A2EBBE6C7710F7ACDF308D40D0D2453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral11B510549CC70A2858AAF7B540021613382B46CD, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	bool V_1 = false;
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * V_2 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralCE6487548A3FC344BD8779B96FB24FEC9373778F, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		NullCheck(L_6);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_7 = GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_mA75F757D3020A7DEC836E6846AC19BFD52F3BDCD(L_6, /*hidden argument*/GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_mA75F757D3020A7DEC836E6846AC19BFD52F3BDCD_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0031;
	}

IL_002c:
	{
		V_2 = (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 *)NULL;
		goto IL_0031;
	}

IL_0031:
	{
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * UIFakeStore_GetDropdownContainerGameObject_m29AD74E9C24BEA69069CBE44C510FE69BE51A443 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetDropdownContainerGameObject_m29AD74E9C24BEA69069CBE44C510FE69BE51A443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral6DD7DCD5917CA3E2AB88F5CE8B766A16904CF914, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_OkayButtonClicked_m86FC1B4FAB78AC4FF5D3440ABD6FFEC41DF3E72B (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_OkayButtonClicked_m86FC1B4FAB78AC4FF5D3440ABD6FFEC41DF3E72B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->get_m_LastSelectedDropdownIndex_27();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ((FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 *)__this)->get_UIMode_25();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0022:
	{
		int32_t L_3 = __this->get_m_LastSelectedDropdownIndex_27();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_4;
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_5 = __this->get_m_CurrentDialog_26();
		NullCheck(L_5);
		Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 * L_6 = L_5->get_Callback_4();
		bool L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		Action_2_Invoke_m9DE3234C946104479E5DBB5BC6D687E240784865(L_6, L_7, L_8, /*hidden argument*/Action_2_Invoke_m9DE3234C946104479E5DBB5BC6D687E240784865_RuntimeMethod_var);
		UIFakeStore_CloseDialog_m0BC4FBED90982409408EB9A82CA61B08ADD2B968(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CancelButtonClicked_mD2A026FA6BBE33C81C6BBA3F1CBEA29E23285E25 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CancelButtonClicked_mD2A026FA6BBE33C81C6BBA3F1CBEA29E23285E25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_LastSelectedDropdownIndex_27();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_1 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_1;
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_2 = __this->get_m_CurrentDialog_26();
		NullCheck(L_2);
		Action_2_tEAEF8572B7E84EE5B7507B5BAFD24D2E9B875E17 * L_3 = L_2->get_Callback_4();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Action_2_Invoke_m9DE3234C946104479E5DBB5BC6D687E240784865(L_3, (bool)0, L_4, /*hidden argument*/Action_2_Invoke_m9DE3234C946104479E5DBB5BC6D687E240784865_RuntimeMethod_var);
		UIFakeStore_CloseDialog_m0BC4FBED90982409408EB9A82CA61B08ADD2B968(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_DropdownValueChanged_m34CE15E3D67653F6CBED4D29E6F3EC291473A21B (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, int32_t ___selectedItem0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___selectedItem0;
		__this->set_m_LastSelectedDropdownIndex_27(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CloseDialog_m0BC4FBED90982409408EB9A82CA61B08ADD2B968 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CloseDialog_m0BC4FBED90982409408EB9A82CA61B08ADD2B968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		__this->set_m_CurrentDialog_26((DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 *)NULL);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = UIFakeStore_GetOkayButton_mCE50A662A84D45C331211032FC1CCA4D0187A774(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_1, /*hidden argument*/NULL);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = UIFakeStore_GetCancelButton_m5801E7B85A37C94981E6F20C33E18B9D7AAF66FF(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = UIFakeStore_GetCancelButton_m5801E7B85A37C94981E6F20C33E18B9D7AAF66FF(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_6 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_6, /*hidden argument*/NULL);
	}

IL_003b:
	{
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_7 = UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_10 = UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_11 = Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_11, /*hidden argument*/NULL);
	}

IL_005e:
	{
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_12 = __this->get_m_Canvas_29();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIFakeStore_IsShowingDialog_m9B21893E2FED340C154F42020F7A6053A8A6A740 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * L_0 = __this->get_m_CurrentDialog_26();
		V_0 = (bool)((!(((RuntimeObject*)(DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m589DDC53D995FB3BE7A71CC4E6ACEAF8EA11B34B (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentDialog_26((DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 *)NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_1_mE417A1D0652B28295179F1515CC321D7E85FA2A2 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	{
		UIFakeStore_OkayButtonClicked_m86FC1B4FAB78AC4FF5D3440ABD6FFEC41DF3E72B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m17DCC3074704531E05FD6BCDA8EF784229169389 (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, const RuntimeMethod* method)
{
	{
		UIFakeStore_CancelButtonClicked_mD2A026FA6BBE33C81C6BBA3F1CBEA29E23285E25(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_3_mC8DA5DD905A138D2ECFE276CABEF9C8C3A53ADBF (UIFakeStore_tE0F45908C1701DDCF54D68B37481755F9F3B1B11 * __this, int32_t ___selectedItem0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___selectedItem0;
		UIFakeStore_DropdownValueChanged_m34CE15E3D67653F6CBED4D29E6F3EC291473A21B(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type UnityEngine.Purchasing.UdpIapBridgeInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UdpIapBridgeInterface_GetClassType_m0CB7252C564FE1FDEF51C378E5726197E29AEFC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UdpIapBridgeInterface_GetClassType_m0CB7252C564FE1FDEF51C378E5726197E29AEFC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Type_t * V_1 = NULL;
	{
		Type_t * L_0 = ((UdpIapBridgeInterface_t4A247198BE28801A0EE23D0707585381DCFBE14D_StaticFields*)il2cpp_codegen_static_fields_for(UdpIapBridgeInterface_t4A247198BE28801A0EE23D0707585381DCFBE14D_il2cpp_TypeInfo_var))->get_s_typeCache_0();
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var);
		Type_t * L_2 = UDPReflectionUtils_GetTypeByName_m2D706B5311D5E3D7E3C8C373CEFF748F2BEE42C1(_stringLiteral9819F74EC3C2710BD7434CCFE9C082141C6EC99C, /*hidden argument*/NULL);
		((UdpIapBridgeInterface_t4A247198BE28801A0EE23D0707585381DCFBE14D_StaticFields*)il2cpp_codegen_static_fields_for(UdpIapBridgeInterface_t4A247198BE28801A0EE23D0707585381DCFBE14D_il2cpp_TypeInfo_var))->set_s_typeCache_0(L_2);
	}

IL_001e:
	{
		Type_t * L_3 = ((UdpIapBridgeInterface_t4A247198BE28801A0EE23D0707585381DCFBE14D_StaticFields*)il2cpp_codegen_static_fields_for(UdpIapBridgeInterface_t4A247198BE28801A0EE23D0707585381DCFBE14D_il2cpp_TypeInfo_var))->get_s_typeCache_0();
		V_1 = L_3;
		goto IL_0026;
	}

IL_0026:
	{
		Type_t * L_4 = V_1;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetInitMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetInitMethod_m1268A547D7F96A2D8F8D1D10D5B8435D27DD1BF5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UdpIapBridgeInterface_GetInitMethod_m1268A547D7F96A2D8F8D1D10D5B8435D27DD1BF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = UdpIapBridgeInterface_GetClassType_m0CB7252C564FE1FDEF51C378E5726197E29AEFC9(/*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_0, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		MethodInfo_t * L_2 = V_0;
		return L_2;
	}
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetPurchaseMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetPurchaseMethod_m04429796099497D106906C22524B1915DD623107 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UdpIapBridgeInterface_GetPurchaseMethod_m04429796099497D106906C22524B1915DD623107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = UdpIapBridgeInterface_GetClassType_m0CB7252C564FE1FDEF51C378E5726197E29AEFC9(/*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_0, _stringLiteral1317CF02F3F3926703DF869C594244C35D400F6A, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		MethodInfo_t * L_2 = V_0;
		return L_2;
	}
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetRetrieveProductsMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetRetrieveProductsMethod_m0EE4750DDBB15287A54F034E250DFF44B876A6EA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UdpIapBridgeInterface_GetRetrieveProductsMethod_m0EE4750DDBB15287A54F034E250DFF44B876A6EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = UdpIapBridgeInterface_GetClassType_m0CB7252C564FE1FDEF51C378E5726197E29AEFC9(/*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_0, _stringLiteralBF8439ADD05997F24462AA527B58CF0412767D94, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		MethodInfo_t * L_2 = V_0;
		return L_2;
	}
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetFinishTransactionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetFinishTransactionMethod_m08A9FCC95EE1DC8B978DB79F42E70DEA38E0ADDF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UdpIapBridgeInterface_GetFinishTransactionMethod_m08A9FCC95EE1DC8B978DB79F42E70DEA38E0ADDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = UdpIapBridgeInterface_GetClassType_m0CB7252C564FE1FDEF51C378E5726197E29AEFC9(/*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_0, _stringLiteral5C50A72309B2048E977F7FB4C5C82C2225169C31, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		MethodInfo_t * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AndroidJavaClass UnityEngine.Purchasing.UnityActivity::GetUnityPlayerClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * UnityActivity_GetUnityPlayerClass_m79E6A7344C141D41D1CF3A3AAAA5D851C9B70896 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityActivity_GetUnityPlayerClass_m79E6A7344C141D41D1CF3A3AAAA5D851C9B70896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	{
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.Purchasing.UnityActivity::GetCurrentActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * UnityActivity_GetCurrentActivity_m0A189C445F71C361C96784CA2C15569A4D40BEBF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityActivity_GetCurrentActivity_m0A189C445F71C361C96784CA2C15569A4D40BEBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = UnityActivity_GetUnityPlayerClass_m79E6A7344C141D41D1CF3A3AAAA5D851C9B70896(/*hidden argument*/NULL);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.DateTime UnityEngine.Purchasing.Extension.UnityUtil::get_currentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  UnityUtil_get_currentTime_m9998B93D0649A38DEB71AF1611A364755614F18E (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_get_currentTime_m9998B93D0649A38DEB71AF1611A364755614F18E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityUtil_get_persistentDataPath_m72263BE99AE655FD4EA6FAE6B4B2D8DE3EF8FC05 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityUtil_get_deviceUniqueIdentifier_mC61FA371D829BFEFB8647D3B70DD8BED00C00F28 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m12CA3C3D8C75E44FBFA73E2E34D9E743AF732B1E(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityUtil_get_unityVersion_m194DC2558985510A07DEE40C4733A4363CF6C6CF (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_cloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityUtil_get_cloudProjectId_mDC60D1298E34A64A14186C66734EB1B0568105A7 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = Application_get_cloudProjectId_m4428D3F30727F38D42D63962932341043560E43D(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_userId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityUtil_get_userId_mB2DA0FDEB40C38D9F17447D93B4EC6980D8649F1 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_get_userId_mB2DA0FDEB40C38D9F17447D93B4EC6980D8649F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_1 = PlayerPrefs_GetString_m5709C9DC233D10A7E9AF4BCC9639E3F18FE36831(_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_gameVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityUtil_get_gameVersion_m510DE87814E2179619B8C6AA7FE89B59222F74BF (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = Application_get_version_m3D7E3915FF7D40E0E5569C7A80BCFE7C2D2528C9(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.UInt64 UnityEngine.Purchasing.Extension.UnityUtil::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityUtil_get_sessionId_m1D9F7C8D0FC79414BC733BA80911868B1AF888C7 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_get_sessionId_m1D9F7C8D0FC79414BC733BA80911868B1AF888C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		String_t* L_0 = PlayerPrefs_GetString_m5709C9DC233D10A7E9AF4BCC9639E3F18FE36831(_stringLiteralC53354E87BDA5285431DDA542D48714F94E95113, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		uint64_t L_1 = UInt64_Parse_mF4BDC98BB5988FA03D4750E7F44A38766C48ADAD(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		uint64_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.RuntimePlatform UnityEngine.Purchasing.Extension.UnityUtil::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityUtil_get_platform_mC684411D906C87AC88535B27B310B9DC7E2FAD53 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityUtil_get_isEditor_m1A99D3D2BE4F86E659CE5176FC201BCE7005635D (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityUtil_get_deviceModel_mAE6DFEE2720F614D5869A45AC84B52956572AE67 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = SystemInfo_get_deviceModel_m99131C20271BDA64F3A537AA009B252DCEDC5977(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityUtil_get_deviceName_mA2B1B09E3CEBFFAC5FBEE63FCCE5DBDB34828374 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = SystemInfo_get_deviceName_m6F221639891D4A635206A39DB2D65584BB708425(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.DeviceType UnityEngine.Purchasing.Extension.UnityUtil::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityUtil_get_deviceType_m7C1D01F35954F8C35000C3DAEC32E38A6DABE1AB (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = SystemInfo_get_deviceType_mC7A6628167ECFF848FE509510A6E3E2FA0820100(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityUtil_get_operatingSystem_mA83BED6B5DEB6B816B599002FB077FDFAA10E743 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = SystemInfo_get_operatingSystem_mF4A5701333A7EB228DDBEF6548200F204B58BEAF(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Purchasing.Extension.UnityUtil::get_screenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityUtil_get_screenWidth_mDE7F3D9FA2E37FB133E165984FF2A490A80DA7B5 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Purchasing.Extension.UnityUtil::get_screenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityUtil_get_screenHeight_m5820A1087B63691F4871EFF1C175B472E36A11C0 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Purchasing.Extension.UnityUtil::get_screenDpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityUtil_get_screenDpi_mD2325284983D575D946428CB48462960927ABD78 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_screenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityUtil_get_screenOrientation_mCB40D3613AA1964BF193EF27B3ED38E5FAD46B0C (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_get_screenOrientation_mCB40D3613AA1964BF193EF27B3ED38E5FAD46B0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = Screen_get_orientation_m1C42BB2AF3CA157B8015FA7AB36F8BB1329660E7(/*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject * L_1 = Box(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		V_0 = *(int32_t*)UnBox(L_1);
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.Object UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnityUtil_Uniject_IUtil_InitiateCoroutine_mBC52C1AC3552B7490D348A9F386DC1EEEE55D0C8 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, RuntimeObject* ___start0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___start0;
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityUtil_Uniject_IUtil_InitiateCoroutine_mC6A4B59AE744544A6C5D6539A10A1230DF9B1A3A (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, RuntimeObject* ___start0, int32_t ___delay1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___start0;
		int32_t L_1 = ___delay1;
		UnityUtil_DelayedCoroutine_mC01CE141F48420F1FE664FEFED36940F601AC125(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::RunOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityUtil_RunOnMainThread_mB26B68B44BFC4595FAE89297DE908CCFBF1BFBC2 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___runnable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_RunOnMainThread_mB26B68B44BFC4595FAE89297DE908CCFBF1BFBC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = ((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->get_s_Callbacks_4();
		V_0 = L_0;
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = ((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->get_s_Callbacks_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___runnable0;
		NullCheck(L_2);
		List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9(L_2, L_3, /*hidden argument*/List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var);
		il2cpp_codegen_memory_barrier();
		((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->set_s_CallbacksPending_5(1);
		IL2CPP_LEAVE(0x2E, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		return;
	}
}
// System.Object UnityEngine.Purchasing.Extension.UnityUtil::GetWaitForSeconds(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnityUtil_GetWaitForSeconds_m28B6A34D4438EDD6EAFFAB4B46AE78D2248A1D2E (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, int32_t ___seconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_GetWaitForSeconds_m28B6A34D4438EDD6EAFFAB4B46AE78D2248A1D2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = ___seconds0;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_1 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_1, (((float)((float)L_0))), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityUtil_Start_mEA4BE994252936CE71FD8FDFBEFB4E964F1217BE (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_Start_mEA4BE994252936CE71FD8FDFBEFB4E964F1217BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::PcPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityUtil_PcPlatform_mE81A7BFC1D011FE21F3FD51D33ED54D51CA58F91 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_PcPlatform_mE81A7BFC1D011FE21F3FD51D33ED54D51CA58F91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var);
		List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * L_0 = ((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->get_s_PcControlledPlatforms_6();
		int32_t L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m2B431C2AA07C86E91C68213E8D805060678F9203(L_0, L_1, /*hidden argument*/List_1_Contains_m2B431C2AA07C86E91C68213E8D805060678F9203_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::DebugLog(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityUtil_DebugLog_m0D9666F278F66A91CE2CA73CB1236C43574D79B0 (String_t* ___message0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_DebugLog_m0D9666F278F66A91CE2CA73CB1236C43574D79B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * V_0 = NULL;
	FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = ___message0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___args1;
		String_t* L_2 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE54C55E69941E58F10CBFD556EFAF10DA23C5E71, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		goto IL_0034;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001c;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0028;
		throw e;
	}

CATCH_001c:
	{ // begin catch(System.ArgumentNullException)
		V_0 = ((ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)__exception_local);
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		goto IL_0034;
	} // end catch (depth: 1)

CATCH_0028:
	{ // begin catch(System.FormatException)
		V_1 = ((FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)__exception_local);
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		goto IL_0034;
	} // end catch (depth: 1)

IL_0034:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.Purchasing.Extension.UnityUtil::DelayedCoroutine(System.Collections.IEnumerator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityUtil_DelayedCoroutine_mC01CE141F48420F1FE664FEFED36940F601AC125 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, RuntimeObject* ___coroutine0, int32_t ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_DelayedCoroutine_mC01CE141F48420F1FE664FEFED36940F601AC125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * L_0 = (U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF *)il2cpp_codegen_object_new(U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF_il2cpp_TypeInfo_var);
		U3CDelayedCoroutineU3Ed__49__ctor_m9BC1D238D5E2CF7E2E7E1D4BA14C29F841ED03A1(L_0, 0, /*hidden argument*/NULL);
		U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_4(__this);
		U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * L_2 = L_1;
		RuntimeObject* L_3 = ___coroutine0;
		NullCheck(L_2);
		L_2->set_coroutine_2(L_3);
		U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * L_4 = L_2;
		int32_t L_5 = ___delay1;
		NullCheck(L_4);
		L_4->set_delay_3(L_5);
		return L_4;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityUtil_Update_mE583F6CA38B794C402EBF81148EF4EBBEA8F3C3F (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_Update_mE583F6CA38B794C402EBF81148EF4EBBEA8F3C3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* V_0 = NULL;
	bool V_1 = false;
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_2 = NULL;
	bool V_3 = false;
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* V_4 = NULL;
	int32_t V_5 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var);
		bool L_0 = ((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->get_s_CallbacksPending_5();
		il2cpp_codegen_memory_barrier();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0095;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = ((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->get_s_Callbacks_4();
		V_2 = L_2;
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = V_2;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var);
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = ((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->get_s_Callbacks_4();
			NullCheck(L_4);
			int32_t L_5 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_4, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
			V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_0035;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0067);
		}

IL_0035:
		{
			IL2CPP_RUNTIME_CLASS_INIT(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var);
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_7 = ((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->get_s_Callbacks_4();
			NullCheck(L_7);
			int32_t L_8 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_7, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
			ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* L_9 = (ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2*)(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2*)SZArrayNew(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2_il2cpp_TypeInfo_var, (uint32_t)L_8);
			V_0 = L_9;
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_10 = ((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->get_s_Callbacks_4();
			ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* L_11 = V_0;
			NullCheck(L_10);
			List_1_CopyTo_mDB05072B2E0AA4C53DE8066A87A90F9A039DC7CF(L_10, L_11, /*hidden argument*/List_1_CopyTo_mDB05072B2E0AA4C53DE8066A87A90F9A039DC7CF_RuntimeMethod_var);
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_12 = ((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->get_s_Callbacks_4();
			NullCheck(L_12);
			List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_12, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
			il2cpp_codegen_memory_barrier();
			((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->set_s_CallbacksPending_5(0);
			IL2CPP_LEAVE(0x6F, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_13 = V_2;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(103)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* L_14 = V_0;
		V_4 = L_14;
		V_5 = 0;
		goto IL_008d;
	}

IL_0078:
	{
		ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_6 = L_18;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_19 = V_6;
		NullCheck(L_19);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_008d:
	{
		int32_t L_21 = V_5;
		ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* L_22 = V_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_0078;
		}
	}

IL_0095:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::AddPauseListener(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityUtil_AddPauseListener_mBCD51B5FA47F1FC3F535BAF1A9BA7F8A1648AC6B (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___runnable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_AddPauseListener_mBCD51B5FA47F1FC3F535BAF1A9BA7F8A1648AC6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_0 = __this->get_pauseListeners_7();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = ___runnable0;
		NullCheck(L_0);
		List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4(L_0, L_1, /*hidden argument*/List_1_Add_mEAE0414857D574E424C8D40ECB427A9F543855A4_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityUtil_OnApplicationPause_mE74C4D1F59A1256F09149DF9940B986CEDFE1527 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil_OnApplicationPause_mE74C4D1F59A1256F09149DF9940B986CEDFE1527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_0 = __this->get_pauseListeners_7();
		NullCheck(L_0);
		Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3  L_1 = List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8(L_0, /*hidden argument*/List_1_GetEnumerator_m0A31317196A78F9BA6700E626FF5029C947556B8_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_0010:
		{
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_inline((Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m560126102B63687EC50AF3B267D0E100E44454A3_RuntimeMethod_var);
			V_1 = L_2;
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = V_1;
			bool L_4 = ___paused0;
			NullCheck(L_3);
			Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_3, L_4, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		}

IL_0022:
		{
			bool L_5 = Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E((Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB4CB2670D35163CCF2741F0EE653AF3413031A4E_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0010;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8((Enumerator_t8F61EC698678644CB896EC8AC1BF48A20E5F56A3 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m233F1EA76E37C5C9E0271CB0F064E4AD702D67A8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::IsClassOrSubclass(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityUtil_IsClassOrSubclass_m9EFB978D2A0A70FF6D8782B01559393F13CDBFA2 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, Type_t * ___potentialBase0, Type_t * ___potentialDescendant1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = ___potentialDescendant1;
		Type_t * L_1 = ___potentialBase0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(109 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		Type_t * L_3 = ___potentialDescendant1;
		Type_t * L_4 = ___potentialBase0;
		G_B3_0 = ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 1;
	}

IL_0011:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityUtil__ctor_m202A4CA90B5291DFA291B90DA497384DA1FAD8B0 (UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil__ctor_m202A4CA90B5291DFA291B90DA497384DA1FAD8B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * L_0 = (List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 *)il2cpp_codegen_object_new(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0_il2cpp_TypeInfo_var);
		List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE(L_0, /*hidden argument*/List_1__ctor_m0C462876A94F8289B3B6331FFD5322C397A3F5CE_RuntimeMethod_var);
		__this->set_pauseListeners_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityUtil__cctor_mBF38EC9EE232DD52A6EF82841258F2845E09433B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityUtil__cctor_mBF38EC9EE232DD52A6EF82841258F2845E09433B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_0, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->set_s_Callbacks_4(L_0);
		List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * L_1 = (List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E *)il2cpp_codegen_object_new(List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E_il2cpp_TypeInfo_var);
		List_1__ctor_m86D8489A40D06A5D059BF6951FDB7880C5C42CBA(L_1, /*hidden argument*/List_1__ctor_m86D8489A40D06A5D059BF6951FDB7880C5C42CBA_RuntimeMethod_var);
		List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08(L_2, ((int32_t)13), /*hidden argument*/List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08_RuntimeMethod_var);
		List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08(L_3, 0, /*hidden argument*/List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08_RuntimeMethod_var);
		List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08(L_4, 1, /*hidden argument*/List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08_RuntimeMethod_var);
		List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08(L_5, 7, /*hidden argument*/List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08_RuntimeMethod_var);
		List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08(L_6, 2, /*hidden argument*/List_1_Add_mD1C066A14FFF462F2226F718EAC7A80029E87A08_RuntimeMethod_var);
		((UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_StaticFields*)il2cpp_codegen_static_fields_for(UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4_il2cpp_TypeInfo_var))->set_s_PcControlledPlatforms_6(L_6);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type UnityEngine.Purchasing.UserInfoInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UserInfoInterface_GetClassType_m9812080125843B27829B95984F673CF85B386C0C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserInfoInterface_GetClassType_m9812080125843B27829B95984F673CF85B386C0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Type_t * V_1 = NULL;
	{
		Type_t * L_0 = ((UserInfoInterface_tA23675037C19143C240BB58D5440F1F5C863E8C3_StaticFields*)il2cpp_codegen_static_fields_for(UserInfoInterface_tA23675037C19143C240BB58D5440F1F5C863E8C3_il2cpp_TypeInfo_var))->get_s_typeCache_0();
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t57108B930F6364D0C564CF93E0D9AF90C741A13B_il2cpp_TypeInfo_var);
		Type_t * L_2 = UDPReflectionUtils_GetTypeByName_m2D706B5311D5E3D7E3C8C373CEFF748F2BEE42C1(_stringLiteral3E829957FE88E1CE9D2236E12F26B8CBD0BA47FC, /*hidden argument*/NULL);
		((UserInfoInterface_tA23675037C19143C240BB58D5440F1F5C863E8C3_StaticFields*)il2cpp_codegen_static_fields_for(UserInfoInterface_tA23675037C19143C240BB58D5440F1F5C863E8C3_il2cpp_TypeInfo_var))->set_s_typeCache_0(L_2);
	}

IL_001e:
	{
		Type_t * L_3 = ((UserInfoInterface_tA23675037C19143C240BB58D5440F1F5C863E8C3_StaticFields*)il2cpp_codegen_static_fields_for(UserInfoInterface_tA23675037C19143C240BB58D5440F1F5C863E8C3_il2cpp_TypeInfo_var))->get_s_typeCache_0();
		V_1 = L_3;
		goto IL_0026;
	}

IL_0026:
	{
		Type_t * L_4 = V_1;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.WinRTStore::.ctor(UnityEngine.Purchasing.Default.IWindowsIAP,Uniject.IUtil,UnityEngine.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore__ctor_mF12552330A2AC5C7B8780743DB0C0B918138A3C9 (WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * __this, RuntimeObject* ___win80, RuntimeObject* ___util1, RuntimeObject* ___logger2, const RuntimeMethod* method)
{
	{
		__this->set_m_CanReceivePurchases_4((bool)0);
		AbstractStore__ctor_mC8C41E364D4E2A414AC8E3439755882A337CCE97(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___win80;
		__this->set_win8_0(L_0);
		RuntimeObject* L_1 = ___util1;
		__this->set_util_2(L_1);
		RuntimeObject* L_2 = ___logger2;
		__this->set_logger_3(L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::SetWindowsIAP(UnityEngine.Purchasing.Default.IWindowsIAP)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_SetWindowsIAP_mCC698FCB8D20A192D523A91E96C652260CA328E2 (WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * __this, RuntimeObject* ___iap0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___iap0;
		__this->set_win8_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_Initialize_mF69BA990E528A14F670FB8BEFA1E0364EA146B52 (WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * __this, RuntimeObject* ___biller0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___biller0;
		__this->set_callback_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_RetrieveProducts_m1A5E0FDBBAA8785ADC29AD871DE4508A57E76763 (WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * __this, ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * ___productDefs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_RetrieveProducts_m1A5E0FDBBAA8785ADC29AD871DE4508A57E76763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * G_B2_0 = NULL;
	ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * G_B2_1 = NULL;
	Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * G_B1_0 = NULL;
	ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * G_B1_1 = NULL;
	Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * L_0 = ___productDefs0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var);
		Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * L_1 = ((U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var))->get_U3CU3E9__8_0_1();
		Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var);
		U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 * L_3 = ((U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * L_4 = (Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 *)il2cpp_codegen_object_new(Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851_il2cpp_TypeInfo_var);
		Func_2__ctor_mEBB5050D6438799252C280D3936760BBA42FDEAA(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m40D09A941BE7B5778638D7D6EF658C89CDC4F809_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mEBB5050D6438799252C280D3936760BBA42FDEAA_RuntimeMethod_var);
		Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * L_5 = L_4;
		((U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var))->set_U3CU3E9__8_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		RuntimeObject* L_6 = Enumerable_Where_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_m7CE07966681ACF1DED7378614CCBC463B2986B07(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Where_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_m7CE07966681ACF1DED7378614CCBC463B2986B07_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var);
		Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * L_7 = ((U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var))->get_U3CU3E9__8_1_2();
		Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var);
		U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 * L_9 = ((U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * L_10 = (Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 *)il2cpp_codegen_object_new(Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22_il2cpp_TypeInfo_var);
		Func_2__ctor_m6775B2FD06AA0EE939145FBF06D60F85A31F0B67(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_mA65E85AE35F533491D7788A0A6605E1D7D74207F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6775B2FD06AA0EE939145FBF06D60F85A31F0B67_RuntimeMethod_var);
		Func_2_t153A502B40E9E889BC4C416BDECE9CC53EDD6C22 * L_11 = L_10;
		((U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var))->set_U3CU3E9__8_1_2(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		RuntimeObject* L_12 = Enumerable_Select_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_TisWinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F_m901D387665C6D3FCE15C68AE6080D62280504DDB(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572_TisWinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F_m901D387665C6D3FCE15C68AE6080D62280504DDB_RuntimeMethod_var);
		V_0 = L_12;
		RuntimeObject* L_13 = __this->get_win8_0();
		RuntimeObject* L_14 = V_0;
		List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF * L_15 = Enumerable_ToList_TisWinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F_m7E433C14BB06A80766621A9758A5BCBFC2E9F4D9(L_14, /*hidden argument*/Enumerable_ToList_TisWinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F_m7E433C14BB06A80766621A9758A5BCBFC2E9F4D9_RuntimeMethod_var);
		NullCheck(L_13);
		InterfaceActionInvoker1< List_1_tD838E538A8421535FD97FDD6B6A64203708A4CAF * >::Invoke(0 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::BuildDummyProducts(System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>) */, IWindowsIAP_tB6710D4F5A80FF23C19AF48441915E3C6D88A730_il2cpp_TypeInfo_var, L_13, L_15);
		WinRTStore_init_m9167BBFC6511F83A1DA15507B11E4CCA4B9DC5EF(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_FinishTransaction_mFFFD6CBE162D548780D3BE76436678D59F077299 (WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_FinishTransaction_mFFFD6CBE162D548780D3BE76436678D59F077299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_win8_0();
		String_t* L_1 = ___transactionId1;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::FinaliseTransaction(System.String) */, IWindowsIAP_tB6710D4F5A80FF23C19AF48441915E3C6D88A730_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_init_m9167BBFC6511F83A1DA15507B11E4CCA4B9DC5EF (WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * __this, int32_t ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_init_m9167BBFC6511F83A1DA15507B11E4CCA4B9DC5EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_win8_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::Initialize(UnityEngine.Purchasing.Default.IWindowsIAPCallback) */, IWindowsIAP_tB6710D4F5A80FF23C19AF48441915E3C6D88A730_il2cpp_TypeInfo_var, L_0, __this);
		RuntimeObject* L_1 = __this->get_win8_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_tB6710D4F5A80FF23C19AF48441915E3C6D88A730_il2cpp_TypeInfo_var, L_1, (bool)1);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_Purchase_m5DF86881261AB077860AA9B5257A12622D302A28 (WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_Purchase_m5DF86881261AB077860AA9B5257A12622D302A28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_win8_0();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_1 = ___product0;
		NullCheck(L_1);
		String_t* L_2 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::Purchase(System.String) */, IWindowsIAP_tB6710D4F5A80FF23C19AF48441915E3C6D88A730_il2cpp_TypeInfo_var, L_0, L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::restoreTransactions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_restoreTransactions_m886EF0C361C58352C64114E9E6B9F700AB07E4C9 (WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * __this, bool ___pausing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_restoreTransactions_m886EF0C361C58352C64114E9E6B9F700AB07E4C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___pausing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = __this->get_m_CanReceivePurchases_4();
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_4 = __this->get_win8_0();
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_tB6710D4F5A80FF23C19AF48441915E3C6D88A730_il2cpp_TypeInfo_var, L_4, (bool)0);
	}

IL_0023:
	{
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::RestoreTransactions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_RestoreTransactions_mC7888F4B07B2FC149635B4D3378DC23F423C3ABB (WinRTStore_t9002B73D3DE24EF9710DCC0B9A79827CD328D560 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_RestoreTransactions_mC7888F4B07B2FC149635B4D3378DC23F423C3ABB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_logger_3();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(3 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_0, _stringLiteralEF46440585636401EBFA364B46D4E49202AC59EF);
		RuntimeObject* L_1 = __this->get_win8_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_tB6710D4F5A80FF23C19AF48441915E3C6D88A730_il2cpp_TypeInfo_var, L_1, (bool)0);
		__this->set_m_CanReceivePurchases_4((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDA72C8D23743746AC4CD9D90704A958DF9D8DB4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mDA72C8D23743746AC4CD9D90704A958DF9D8DB4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F * L_0 = (U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F *)il2cpp_codegen_object_new(U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m89594A4C59A21839FBF5CC7E4B97E1ED9AD7C8A3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m89594A4C59A21839FBF5CC7E4B97E1ED9AD7C8A3 (U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.AppleStoreImpl_<>c::<OnProductsRetrieved>b__24_1(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3COnProductsRetrievedU3Eb__24_1_m7F1BEB6A2D34A9B3E63BE4E5700834D102C50B83 (U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F * __this, AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * ___b0, AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * ___a1, const RuntimeMethod* method)
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_0 = ___a1;
		NullCheck(L_0);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = AppleInAppPurchaseReceipt_get_purchaseDate_m902295CB992329CB42872065028D14CD5A6D7E8A_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_2 = ___b0;
		NullCheck(L_2);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = AppleInAppPurchaseReceipt_get_purchaseDate_m902295CB992329CB42872065028D14CD5A6D7E8A_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 UnityEngine.Purchasing.AppleStoreImpl_<>c::<isValidPurchaseState>b__41_1(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CisValidPurchaseStateU3Eb__41_1_m732B3E61CB9326E541D12FDB0FA2F130EE317675 (U3CU3Ec_t70CE9C30C95B627706CB452DEE04B83D94BC5A5F * __this, AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * ___b0, AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * ___a1, const RuntimeMethod* method)
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_0 = ___a1;
		NullCheck(L_0);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = AppleInAppPurchaseReceipt_get_purchaseDate_m902295CB992329CB42872065028D14CD5A6D7E8A_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_2 = ___b0;
		NullCheck(L_2);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = AppleInAppPurchaseReceipt_get_purchaseDate_m902295CB992329CB42872065028D14CD5A6D7E8A_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m1CA12AACD13F8E35A2F4D013144BB4AF5B2E6028 (U3CU3Ec__DisplayClass24_0_t3ECBF0002F748AFE3F69A84CD21B4C2CAC9255DE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass24_0::<OnProductsRetrieved>b__0(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass24_0_U3COnProductsRetrievedU3Eb__0_mEDAF72D89D95587C8B9A4C5B364E08D3388D7B0B (U3CU3Ec__DisplayClass24_0_t3ECBF0002F748AFE3F69A84CD21B4C2CAC9255DE * __this, AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * ___r0, const RuntimeMethod* method)
{
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_0 = ___r0;
		NullCheck(L_0);
		String_t* L_1 = AppleInAppPurchaseReceipt_get_productID_m47E3FE0BCF859DE421259D6D1A601DC3C4BE1C5D_inline(L_0, /*hidden argument*/NULL);
		ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 * L_2 = __this->get_productDescription_0();
		NullCheck(L_2);
		String_t* L_3 = ProductDescription_get_storeSpecificId_m805EE28C57C25664093C7F5C2FB24EAADFEAFB09_inline(L_2, /*hidden argument*/NULL);
		bool L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_mE8F75A76304E0C485482C4D7F344BEE0AF27E6A0 (U3CU3Ec__DisplayClass37_0_t49ED0ABE26A0C9B03AF0C8FE27947989F39BA511 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::<MessageCallback>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0_U3CMessageCallbackU3Eb__0_mD3ED860FC01CA128B360566A12368C063BA49ED3 (U3CU3Ec__DisplayClass37_0_t49ED0ABE26A0C9B03AF0C8FE27947989F39BA511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass37_0_U3CMessageCallbackU3Eb__0_mD3ED860FC01CA128B360566A12368C063BA49ED3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D * L_0 = ((AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D_StaticFields*)il2cpp_codegen_static_fields_for(AppleStoreImpl_t7F3A786AD2279CC7F121667D80817826EE173D4D_il2cpp_TypeInfo_var))->get_instance_28();
		String_t* L_1 = __this->get_subject_0();
		String_t* L_2 = __this->get_payload_1();
		String_t* L_3 = __this->get_receipt_2();
		String_t* L_4 = __this->get_transactionId_3();
		NullCheck(L_0);
		AppleStoreImpl_ProcessMessage_mB2029E81C2ECA053473F597EE88D040D2DFB0D97(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_mB0B720A40C66E799F8B88CEC9227E4DACBB7BE58 (U3CU3Ec__DisplayClass41_0_t29DB0733107531E57FDC0DE7AF5D3DA2626FBBF1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass41_0::<isValidPurchaseState>b__0(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass41_0_U3CisValidPurchaseStateU3Eb__0_m6F553E73A8A90A7B3B36C1BB4C1270B5CEC6C0A0 (U3CU3Ec__DisplayClass41_0_t29DB0733107531E57FDC0DE7AF5D3DA2626FBBF1 * __this, AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * ___r0, const RuntimeMethod* method)
{
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_0 = ___r0;
		NullCheck(L_0);
		String_t* L_1 = AppleInAppPurchaseReceipt_get_productID_m47E3FE0BCF859DE421259D6D1A601DC3C4BE1C5D_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_id_0();
		bool L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoInvokeU3Ed__4__ctor_mB54E18AE9C5FC2823403F9D38584F802F952BC7B (U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoInvokeU3Ed__4_System_IDisposable_Dispose_mBC7895D54ABD1F5C9E1BDF690BB575E786721EF3 (U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoInvokeU3Ed__4_MoveNext_m9F4F75B32F5147C3BB4420BEE81604B1E8FF7592 (U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoInvokeU3Ed__4_MoveNext_m9F4F75B32F5147C3BB4420BEE81604B1E8FF7592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003b;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_3 = __this->get_delayInSeconds_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (((float)((float)L_3))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = __this->get_a_2();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoInvokeU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE461C5FE718AC9715C306995F919872740849616 (U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m58D873A1B64EF9D302C5E23BE1C2DE2ACF20448F (U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m58D873A1B64EF9D302C5E23BE1C2DE2ACF20448F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m58D873A1B64EF9D302C5E23BE1C2DE2ACF20448F_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_get_Current_m1E9415E1CE5ED0950B4F0BFDA0440A70C6ADEA12 (U3CDoInvokeU3Ed__4_t7F820501DB63CFB312D0668FD3FCCEF57066E871 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessU3Ed__2__ctor_m1260393B26580C7B6E5117CD6B04E621A728062C (U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessU3Ed__2_System_IDisposable_Dispose_m722F493AFFB96818C2D64956C49455E5FCE7732D (U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProcessU3Ed__2_MoveNext_m4BF7DF1659F52EAC56DEDE2BEF9A66AF014C49E3 (U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CProcessU3Ed__2_MoveNext_m4BF7DF1659F52EAC56DEDE2BEF9A66AF014C49E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B16_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0074;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		__this->set_U3CtimerU3E5__1_7((0.0f));
		__this->set_U3ChasTimedOutU3E5__2_8((bool)0);
		goto IL_007c;
	}

IL_0034:
	{
		float L_3 = __this->get_U3CtimerU3E5__1_7();
		int32_t L_4 = __this->get_maxTimeoutInSeconds_5();
		V_1 = (bool)((((float)L_3) > ((float)(((float)((float)L_4)))))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		__this->set_U3ChasTimedOutU3E5__2_8((bool)1);
		goto IL_008e;
	}

IL_0052:
	{
		float L_6 = __this->get_U3CtimerU3E5__1_7();
		float L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimerU3E5__1_7(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0074:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_007c:
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_8 = __this->get_request_2();
		NullCheck(L_8);
		bool L_9 = WWW_get_isDone_m916B54D53395990DB59C64413798FBCAFB08E0E3(L_8, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0034;
		}
	}

IL_008e:
	{
		bool L_11 = __this->get_U3ChasTimedOutU3E5__2_8();
		if (L_11)
		{
			goto IL_00ab;
		}
	}
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_12 = __this->get_request_2();
		NullCheck(L_12);
		String_t* L_13 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_12, /*hidden argument*/NULL);
		bool L_14 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_13, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B16_0 = 1;
	}

IL_00ac:
	{
		V_3 = (bool)G_B16_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00cb;
		}
	}
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_16 = __this->get_errorHandler_4();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_17 = __this->get_request_2();
		NullCheck(L_17);
		String_t* L_18 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_16, L_18, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		goto IL_00e4;
	}

IL_00cb:
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_19 = __this->get_responseHandler_3();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_20 = __this->get_request_2();
		NullCheck(L_20);
		String_t* L_21 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_19, L_21, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_00e4:
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_22 = __this->get_request_2();
		NullCheck(L_22);
		WWW_Dispose_mF5A8B944281564903043545BC1E7F1CAD941519F(L_22, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7C6889E55EBB9AC236EE47C200C28FDF605774C4 (U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_m7AC256A6D8BB308AB1A1E8C512BF1C41F3ECC1F0 (U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_m7AC256A6D8BB308AB1A1E8C512BF1C41F3ECC1F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_m7AC256A6D8BB308AB1A1E8C512BF1C41F3ECC1F0_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessU3Ed__2_System_Collections_IEnumerator_get_Current_mA461BD85F6B147E973E33240C162D62CC53D819C (U3CProcessU3Ed__2_t8DF6EC4EE4A3EAB4F41A7D81ECF6CD06B232CE73 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6E9B4E9E0A54373D356A2011B8BE5C3B653CCDF3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m6E9B4E9E0A54373D356A2011B8BE5C3B653CCDF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F * L_0 = (U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F *)il2cpp_codegen_object_new(U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC4034B7A1713A7695527D7EBAA975CE5904D4033(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC4034B7A1713A7695527D7EBAA975CE5904D4033 (U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.CloudCatalogImpl_<>c::<CamelCaseToSnakeCase>b__12_0(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_0_mAC3655F1AFFF5ADED6D221B1FFEA7BB927DD9B3B (U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F * __this, Il2CppChar ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_0_mAC3655F1AFFF5ADED6D221B1FFEA7BB927DD9B3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* G_B4_0 = NULL;
	{
		Il2CppChar L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsUpper_m72EAD892A02AD10D2050EA09BF3735DDE6921892(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___b1;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		Il2CppChar L_3 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		Il2CppChar L_4 = Char_ToLower_m1125EA9F4935D6A0F8244D73AA4940C1D0C5D165(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_0), /*hidden argument*/NULL);
		G_B4_0 = L_5;
		goto IL_0034;
	}

IL_001c:
	{
		Il2CppChar L_6 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		Il2CppChar L_7 = Char_ToLower_m1125EA9F4935D6A0F8244D73AA4940C1D0C5D165(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_0), /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
	}

IL_0034:
	{
		return G_B4_0;
	}
}
// System.String UnityEngine.Purchasing.CloudCatalogImpl_<>c::<CamelCaseToSnakeCase>b__12_1(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_1_mED960CAD4EC9E818A60A6916EBB9C08D14B14C80 (U3CU3Ec_t890961FEB8A800F05665DD49E755EB65DFFA719F * __this, String_t* ___a0, String_t* ___b1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___a0;
		String_t* L_1 = ___b1;
		String_t* L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mA4005593B5D4D816B214180BFC2EBF29D284CDE2 (U3CU3Ec__DisplayClass10_0_t679E57D2834C11DAE4B4EED44D21B8521D6A5960 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__0_mEB0F1FE8EC6BE8046FCFE63CD42E39483B99162F (U3CU3Ec__DisplayClass10_0_t679E57D2834C11DAE4B4EED44D21B8521D6A5960 * __this, String_t* ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__0_mEB0F1FE8EC6BE8046FCFE63CD42E39483B99162F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * V_0 = NULL;
	SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_Logger_2();
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(3 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_1, _stringLiteralC48267E9D4A956D768936FE15F1BE6FA5C677BA9);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		String_t* L_2 = ___response0;
		CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		String_t* L_4 = L_3->get_m_StoreName_4();
		HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * L_5 = CloudCatalogImpl_ParseProductsFromJSON_m43CAC03ABEF817C6CF7B57F19A99D7812430F26A(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * L_6 = __this->get_U3CU3E4__this_0();
		String_t* L_7 = ___response0;
		NullCheck(L_6);
		CloudCatalogImpl_TryPersistCatalog_m941C70FD0C37D99AACF0D9C58C4116F347594604(L_6, L_7, /*hidden argument*/NULL);
		Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 * L_8 = __this->get_callback_1();
		HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * L_9 = V_0;
		NullCheck(L_8);
		Action_1_Invoke_m819A05351F202EF5B8F9AB2F363759B0B09D1319(L_8, L_9, /*hidden argument*/Action_1_Invoke_m819A05351F202EF5B8F9AB2F363759B0B09D1319_RuntimeMethod_var);
		goto IL_008c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0047;
		throw e;
	}

CATCH_0047:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		V_1 = ((SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 *)__exception_local);
		CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * L_10 = __this->get_U3CU3E4__this_0();
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->get_m_Logger_2();
		SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 * L_12 = V_1;
		NullCheck(L_11);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.ILogger::LogError(System.String,System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_11, _stringLiteral01CD201F38240EC1287B9A436D7523B66DFD6785, L_12);
		CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * L_13 = __this->get_U3CU3E4__this_0();
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->get_m_Logger_2();
		String_t* L_15 = ___response0;
		NullCheck(L_14);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(3 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_14, L_15);
		Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 * L_16 = __this->get_callback_1();
		CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * L_17 = __this->get_U3CU3E4__this_0();
		NullCheck(L_17);
		HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * L_18 = CloudCatalogImpl_TryLoadCachedCatalog_m243E8ABDC81A03B747D0838C86CD1F85ED9602D9(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Action_1_Invoke_m819A05351F202EF5B8F9AB2F363759B0B09D1319(L_16, L_18, /*hidden argument*/Action_1_Invoke_m819A05351F202EF5B8F9AB2F363759B0B09D1319_RuntimeMethod_var);
		goto IL_008c;
	} // end catch (depth: 1)

IL_008c:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__1_m752291E9DD14061B94887FACB88C05AC1C041876 (U3CU3Ec__DisplayClass10_0_t679E57D2834C11DAE4B4EED44D21B8521D6A5960 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__1_m752291E9DD14061B94887FACB88C05AC1C041876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * V_0 = NULL;
	bool V_1 = false;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	int32_t G_B3_0 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	{
		CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * L_1 = CloudCatalogImpl_TryLoadCachedCatalog_m243E8ABDC81A03B747D0838C86CD1F85ED9602D9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = HashSet_1_get_Count_m5B261754EA79A73B0F71BCCCD7890E8DB7CF4D59_inline(L_3, /*hidden argument*/HashSet_1_get_Count_m5B261754EA79A73B0F71BCCCD7890E8DB7CF4D59_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->get_m_Logger_2();
		NullCheck(L_7);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(3 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_7, _stringLiteral64044D148C628EA17CF351D97671758DA3E29368);
		Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 * L_8 = __this->get_callback_1();
		HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * L_9 = V_0;
		NullCheck(L_8);
		Action_1_Invoke_m819A05351F202EF5B8F9AB2F363759B0B09D1319(L_8, L_9, /*hidden argument*/Action_1_Invoke_m819A05351F202EF5B8F9AB2F363759B0B09D1319_RuntimeMethod_var);
		goto IL_00a9;
	}

IL_0047:
	{
		int32_t L_10 = __this->get_delayInSeconds_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_11 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(5, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), /*hidden argument*/NULL);
		__this->set_delayInSeconds_2(L_11);
		int32_t L_12 = __this->get_delayInSeconds_2();
		int32_t L_13 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)300), L_12, /*hidden argument*/NULL);
		__this->set_delayInSeconds_2(L_13);
		CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * L_14 = __this->get_U3CU3E4__this_0();
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->get_m_AsyncUtil_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = __this->get_U3CU3E9__2_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = L_16;
		G_B6_0 = L_17;
		G_B6_1 = L_15;
		if (L_17)
		{
			G_B7_0 = L_17;
			G_B7_1 = L_15;
			goto IL_009c;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_18 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_18, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__2_m2A7749155D8410BF168186BCA783BBBD47201066_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_19 = L_18;
		V_2 = L_19;
		__this->set_U3CU3E9__2_3(L_19);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = V_2;
		G_B7_0 = L_20;
		G_B7_1 = G_B6_1;
	}

IL_009c:
	{
		int32_t L_21 = __this->get_delayInSeconds_2();
		NullCheck(G_B7_1);
		InterfaceActionInvoker2< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, int32_t >::Invoke(1 /* System.Void UnityEngine.Purchasing.IAsyncWebUtil::Schedule(System.Action,System.Int32) */, IAsyncWebUtil_t8FBA5E0BCC0DE2AB76FF44C1362C0854F96AB449_il2cpp_TypeInfo_var, G_B7_1, G_B7_0, L_21);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__2_m2A7749155D8410BF168186BCA783BBBD47201066 (U3CU3Ec__DisplayClass10_0_t679E57D2834C11DAE4B4EED44D21B8521D6A5960 * __this, const RuntimeMethod* method)
{
	{
		CloudCatalogImpl_tC74AAE6CFC00CDA04C27EC066DB1AD6868F66A32 * L_0 = __this->get_U3CU3E4__this_0();
		Action_1_tB603F9E9D8984BC150C1410A9EC36FB9EF27C999 * L_1 = __this->get_callback_1();
		int32_t L_2 = __this->get_delayInSeconds_2();
		NullCheck(L_0);
		CloudCatalogImpl_FetchProducts_m60504124B6DF71CF8B26DFBAD5FEDBCC8C0A96FE(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m79523A8E82472EA6F2D7C1117F05BD5491EF76AA (U3CU3Ec__DisplayClass6_0_t8BA187E4F08FD14CB561B8A85308A6614A282AF2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::<MessageCallback>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CMessageCallbackU3Eb__0_m2623D68F261E9EEACB5D2F610F69F0F3704C9BD6 (U3CU3Ec__DisplayClass6_0_t8BA187E4F08FD14CB561B8A85308A6614A282AF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass6_0_U3CMessageCallbackU3Eb__0_m2623D68F261E9EEACB5D2F610F69F0F3704C9BD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E * L_0 = ((FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E_StaticFields*)il2cpp_codegen_static_fields_for(FacebookStoreImpl_t75D23DFA4BD2C054679C270544ED712ACA1AA08E_il2cpp_TypeInfo_var))->get_instance_23();
		String_t* L_1 = __this->get_subject_0();
		String_t* L_2 = __this->get_payload_1();
		String_t* L_3 = __this->get_receipt_2();
		String_t* L_4 = __this->get_transactionId_3();
		NullCheck(L_0);
		FacebookStoreImpl_ProcessMessage_mA1118ED988CBB48AE6463A8E9A8F990AB8CBA1EA(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m38B90B6D962AA0B54D11F4A189A23EC2C521609D (U3CU3Ec__DisplayClass13_0_t4877482C1A597CE9EA826A3F8CF26BD92F23F639 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0::<StoreRetrieveProducts>b__0(System.Boolean,UnityEngine.Purchasing.InitializationFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CStoreRetrieveProductsU3Eb__0_m03D8EA93D28F3BEF232FD8AD8AB16E1ED630579E (U3CU3Ec__DisplayClass13_0_t4877482C1A597CE9EA826A3F8CF26BD92F23F639 * __this, bool ___allow0, int32_t ___failureReason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CStoreRetrieveProductsU3Eb__0_m03D8EA93D28F3BEF232FD8AD8AB16E1ED630579E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___allow0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->get_m_Biller_21();
		List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * L_4 = __this->get_products_1();
		NullCheck(L_3);
		InterfaceActionInvoker1< List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * >::Invoke(2 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_3, L_4);
		FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * L_5 = __this->get_U3CU3E4__this_0();
		FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->get_m_Biller_21();
		IL2CPP_RUNTIME_CLASS_INIT(Promo_t3A312B3AA59F603895E220B66BD471F2F3512EBE_il2cpp_TypeInfo_var);
		Promo_ProvideProductsToAds_m6A13572A6F9344445A55D9159F9C66EDFF701E03(L_5, L_7, (bool)0, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_0039:
	{
		FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * L_8 = __this->get_U3CU3E4__this_0();
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->get_m_Biller_21();
		int32_t L_10 = ___failureReason1;
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_9, L_10);
	}

IL_004d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mEF424506316CAF7F57E82EA801C33BB44E08CCD4 (U3CU3Ec__DisplayClass15_0_tCC954902BA0A504041EC9E77E5EFBD4D607EA6CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0::<FakePurchase>b__0(System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CFakePurchaseU3Eb__0_m34959F6F7D57D35D0EB1AA752A442CFFE212D1E2 (U3CU3Ec__DisplayClass15_0_tCC954902BA0A504041EC9E77E5EFBD4D607EA6CF * __this, bool ___allow0, int32_t ___failureReason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass15_0_U3CFakePurchaseU3Eb__0_m34959F6F7D57D35D0EB1AA752A442CFFE212D1E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * V_2 = NULL;
	bool V_3 = false;
	{
		bool L_0 = ___allow0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * L_2 = __this->get_U3CU3E4__this_0();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_3 = __this->get_product_1();
		NullCheck(L_3);
		String_t* L_4 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_5 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_2);
		FakeStore_U3CU3En__0_mF2B26EDE30304CCA40E18D645D165921F0C3E847(L_2, L_4, _stringLiteral189B430829CD4A9227FD38F8494AD158D2EEE455, L_6, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_0039:
	{
		int32_t L_7 = ___failureReason1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_10 = Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68(L_9, _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)((*(int32_t*)((int32_t*)UnBox(L_10, PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var))))))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		___failureReason1 = 4;
	}

IL_005f:
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_12 = __this->get_product_1();
		NullCheck(L_12);
		String_t* L_13 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_12, /*hidden argument*/NULL);
		int32_t L_14 = ___failureReason1;
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_15 = (PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 *)il2cpp_codegen_object_new(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8_il2cpp_TypeInfo_var);
		PurchaseFailureDescription__ctor_m82E2FF9C0415A1D1001A8C0F80016441A08140D5(L_15, L_13, L_14, _stringLiteralD016F89FD67D342DCC411DCF51E41A3D635BEF7D, /*hidden argument*/NULL);
		V_2 = L_15;
		FakeStore_tFB56503FDD6B956236EB64E66C47E1ACB69F5E59 * L_16 = __this->get_U3CU3E4__this_0();
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_17 = V_2;
		NullCheck(L_16);
		JSONStore_OnPurchaseFailed_m27CFA14695D83566F21BCBE94F85BE9327D6B780(L_16, L_17, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mB825A1428AFE583FF0B2C9FCB5B71C34C8F61F21 (U3CU3Ec__DisplayClass2_0_tB41C2F40C630200D9ACE9EC64085C3FB8AFE22E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass2_0::<ContainsSku>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CContainsSkuU3Eb__0_m13EBEAB4E48019EC24614D197C83CEEF5F580989 (U3CU3Ec__DisplayClass2_0_tB41C2F40C630200D9ACE9EC64085C3FB8AFE22E4 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetails0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass2_0_U3CContainsSkuU3Eb__0_m13EBEAB4E48019EC24614D197C83CEEF5F580989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___skuDetails0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_2 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_0, _stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		String_t* L_3 = __this->get_sku_0();
		bool L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m9D742816A4DA4DE0BAF3AEFC5524D419E92E7327 (U3CU3Ec__DisplayClass4_0_t0AB6CBFC47CB2D168AF2228D38826F1F4200A103 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass4_0::<UpdateCachedQueriedSku>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CUpdateCachedQueriedSkuU3Eb__0_m387448638A6158D9D413EFC8F76D9B2D0A035FE1 (U3CU3Ec__DisplayClass4_0_t0AB6CBFC47CB2D168AF2228D38826F1F4200A103 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetails0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass4_0_U3CUpdateCachedQueriedSkuU3Eb__0_m387448638A6158D9D413EFC8F76D9B2D0A035FE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___skuDetails0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_2 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_0, _stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		String_t* L_3 = __this->get_queriedSku_0();
		bool L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6FC73205E50A3D0227EBE34C2ED1101CE0A6316E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m6FC73205E50A3D0227EBE34C2ED1101CE0A6316E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC * L_0 = (U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC *)il2cpp_codegen_object_new(U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB0958FB91982CB49681A96A4EC74CC83378CEAEF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB0958FB91982CB49681A96A4EC74CC83378CEAEF (U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.GoogleFetchPurchases_<>c::<OnPurchasesRetrieved>b__8_0(UnityEngine.Purchasing.Models.GooglePurchase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnPurchasesRetrievedU3Eb__8_0_m28FD70D640E02323CD54AD43AAFC743490318469 (U3CU3Ec_t9C6DEF947B8F92061FB52939B824F7D7D24C79DC * __this, GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * ___purchase0, const RuntimeMethod* method)
{
	{
		GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * L_0 = ___purchase0;
		return (bool)((!(((RuntimeObject*)(GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mD0D90339AD39FF8803EDE1A7E66235569AA1E621 (U3CU3Ec__DisplayClass6_0_t69B90CDD2D28AD402A9253682B2C62165BFF734E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0::<FetchPurchases>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CFetchPurchasesU3Eb__0_m1DD9AC83ACD8542CCC8E51282F9B1DAD289B7E4D (U3CU3Ec__DisplayClass6_0_t69B90CDD2D28AD402A9253682B2C62165BFF734E * __this, List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * ___purchases0, const RuntimeMethod* method)
{
	{
		GoogleFetchPurchases_t6E4EDF289562CFAB1170FBD4FF918B914ED9C910 * L_0 = __this->get_U3CU3E4__this_0();
		List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * L_1 = ___purchases0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = __this->get_onQueryPurchaseSucceed_1();
		NullCheck(L_0);
		GoogleFetchPurchases_OnFetchedPurchaseSuccessful_m6F95AF92964FB93B48794F59EF870717C6F2CA95(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mD0EE7285E5348526453463C0E38FC360D46803FF (U3CU3Ec__DisplayClass3_0_t73E14EB796A01760EC9D9203BC3EE387CC927319 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::<FinishTransaction>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CFinishTransactionU3Eb__0_mFC30A9A5BC70E79C52FC7E10E0CE9B0DD774B537 (U3CU3Ec__DisplayClass3_0_t73E14EB796A01760EC9D9203BC3EE387CC927319 * __this, List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * ___purchases0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass3_0_U3CFinishTransactionU3Eb__0_mFC30A9A5BC70E79C52FC7E10E0CE9B0DD774B537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * L_0 = ___purchases0;
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_1 = __this->get_product_0();
		Func_2_t0C7F6B3122AD28DD8D7D52468817E59C3555573A * L_2 = GoogleFinishTransactionService_PurchaseNeedsAcknowledgement_mA965E7B825EB77A26623CBBC1D470484657D0C49(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3 = Enumerable_Where_TisGooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314_m7CD89F87C48902C4A87FAB0BFD255B65CB7CABC7(L_0, L_2, /*hidden argument*/Enumerable_Where_TisGooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314_m7CD89F87C48902C4A87FAB0BFD255B65CB7CABC7_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Models.GooglePurchase>::GetEnumerator() */, IEnumerable_1_tFA8AFB3605996764FE6B5DBDCB3F20AF86FCAA99_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_001b:
		{
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * L_6 = InterfaceFuncInvoker0< GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.Models.GooglePurchase>::get_Current() */, IEnumerator_1_t35CDF3F7D38B97AE7FDA9DFDEC193E0222669756_il2cpp_TypeInfo_var, L_5);
			V_1 = L_6;
			ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_7 = __this->get_product_0();
			NullCheck(L_7);
			int32_t L_8 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_7, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_005d;
			}
		}

IL_0035:
		{
			GoogleFinishTransactionService_t48E8CEF99FF4FD0B1A2D7C1AF39235EBF744E751 * L_10 = __this->get_U3CU3E4__this_1();
			NullCheck(L_10);
			RuntimeObject* L_11 = L_10->get_m_BillingClient_0();
			String_t* L_12 = __this->get_purchaseToken_2();
			ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_13 = __this->get_product_0();
			GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * L_14 = V_1;
			Action_4_t28CF4A06D662386572B79C451FFDCC866ECFE3ED * L_15 = __this->get_onConsume_3();
			NullCheck(L_11);
			InterfaceActionInvoker4< String_t*, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 *, GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 *, Action_4_t28CF4A06D662386572B79C451FFDCC866ECFE3ED * >::Invoke(4 /* System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::ConsumeAsync(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>) */, IGoogleBillingClient_tB0F821489CAFA12AC224E96E61F0E4EB66BA3853_il2cpp_TypeInfo_var, L_11, L_12, L_13, L_14, L_15);
			goto IL_0083;
		}

IL_005d:
		{
			GoogleFinishTransactionService_t48E8CEF99FF4FD0B1A2D7C1AF39235EBF744E751 * L_16 = __this->get_U3CU3E4__this_1();
			NullCheck(L_16);
			RuntimeObject* L_17 = L_16->get_m_BillingClient_0();
			String_t* L_18 = __this->get_purchaseToken_2();
			ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_19 = __this->get_product_0();
			GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * L_20 = V_1;
			Action_3_tDAA4AD214D2CEC03F07814ABAC061922F0E100B0 * L_21 = __this->get_onAcknowledge_4();
			NullCheck(L_17);
			InterfaceActionInvoker4< String_t*, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 *, GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 *, Action_3_tDAA4AD214D2CEC03F07814ABAC061922F0E100B0 * >::Invoke(5 /* System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::AcknowledgePurchase(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>) */, IGoogleBillingClient_tB0F821489CAFA12AC224E96E61F0E4EB66BA3853_il2cpp_TypeInfo_var, L_17, L_18, L_19, L_20, L_21);
		}

IL_0083:
		{
		}

IL_0084:
		{
			RuntimeObject* L_22 = V_0;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_001b;
			}
		}

IL_008c:
		{
			IL2CPP_LEAVE(0x99, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_0;
			if (!L_24)
			{
				goto IL_0098;
			}
		}

IL_0091:
		{
			RuntimeObject* L_25 = V_0;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_25);
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(142)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x99, IL_0099)
	}

IL_0099:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m4A65ABDED98348430C4EA68D4CC35D00F4785591 (U3CU3Ec__DisplayClass4_0_tF5CC1011A36F7F148767476CFC5FD2CFE7D232C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass4_0::<PurchaseNeedsAcknowledgement>b__0(UnityEngine.Purchasing.Models.GooglePurchase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CPurchaseNeedsAcknowledgementU3Eb__0_mE750F693E134F278FD59C0655D2D7A9B100342AC (U3CU3Ec__DisplayClass4_0_tF5CC1011A36F7F148767476CFC5FD2CFE7D232C3 * __this, GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * ___purchase0, const RuntimeMethod* method)
{
	int32_t G_B5_0 = 0;
	{
		GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * L_0 = ___purchase0;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * L_1 = ___purchase0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_sku_2();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_3 = __this->get_product_0();
		NullCheck(L_3);
		String_t* L_4 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_3, /*hidden argument*/NULL);
		bool L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * L_6 = ___purchase0;
		NullCheck(L_6);
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.Purchasing.Models.GooglePurchase::IsPurchased() */, L_6);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		GooglePurchase_t66C775FB87AE18C6B981ACCCFCD588EF09102314 * L_8 = ___purchase0;
		NullCheck(L_8);
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Purchasing.Models.GooglePurchase::IsAcknowledged() */, L_8);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		return (bool)G_B5_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions_<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m0DB70856B62108FB9BD4862146496C8F529051AA (U3CU3Ec__DisplayClass8_0_t66B0E134073B1712E021BA3D83CE3AA2F5B4CE4E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions_<>c__DisplayClass8_0::<RestoreTransactions>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CRestoreTransactionsU3Eb__0_mA93D4A676104B0EB8142101FF84CCF93A01070A9 (U3CU3Ec__DisplayClass8_0_t66B0E134073B1712E021BA3D83CE3AA2F5B4CE4E * __this, List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * ___purchase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CRestoreTransactionsU3Eb__0_mA93D4A676104B0EB8142101FF84CCF93A01070A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * L_0 = ___purchase0;
		V_0 = (bool)((!(((RuntimeObject*)(List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = __this->get_callback_0();
		NullCheck(L_2);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_2, (bool)1, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m22150CEE301B4B756E44038AB02807D7BA4551A2 (U3CU3Ec__DisplayClass5_0_t9F4F0C84DCC8EA85C5A37A5AC2B8F4164B061A5B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0::<RetrieveProducts>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CRetrieveProductsU3Eb__1_mF230D9AA962EF5C18A8A83DEFE801F4B304F1BD2 (U3CU3Ec__DisplayClass5_0_t9F4F0C84DCC8EA85C5A37A5AC2B8F4164B061A5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass5_0_U3CRetrieveProductsU3Eb__1_mF230D9AA962EF5C18A8A83DEFE801F4B304F1BD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GooglePlayStoreRetrieveProductsService_tCBD4802AACDB554BC1C502CBC64E8DCB7CFCB12B * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_StoreCallback_2();
		List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * L_2 = __this->get_retrievedProducts_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * >::Invoke(2 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.Utils.GooglePurchaseHelper_<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mC095A2AA1F871F95F6066BB6DBDE844E1AB3F5EA (U3CU3Ec__DisplayClass0_0_tA4FD1BE082CB561F3BFBB5DDB13E0A712B3CFCB2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Utils.GooglePurchaseHelper_<>c__DisplayClass0_0::<MakeGooglePurchase>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m6EF48E070C2DAA1B780224CE4E57C9EACEF48D86 (U3CU3Ec__DisplayClass0_0_tA4FD1BE082CB561F3BFBB5DDB13E0A712B3CFCB2 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetailJavaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m6EF48E070C2DAA1B780224CE4E57C9EACEF48D86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___skuDetailJavaObject0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_2 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_0, _stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = __this->get_sku_0();
		String_t* L_4 = V_0;
		bool L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m4C5EADDD74EED184A06861EBC194CE072B1944DA (U3CU3Ec__DisplayClass4_0_t5579282DB2370B9C4D137BD8EF3C9A749B8955D7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::<Purchase>b__0(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CPurchaseU3Eb__0_mAE10F36BC4EBC2960482BB66A76255CA3ED2AD60 (U3CU3Ec__DisplayClass4_0_t5579282DB2370B9C4D137BD8EF3C9A749B8955D7 * __this, List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___skus0, const RuntimeMethod* method)
{
	{
		GooglePurchaseService_t503E47C17039B32C1C0D1F313CCE186377A5D7E5 * L_0 = __this->get_U3CU3E4__this_0();
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_1 = ___skus0;
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_2 = __this->get_oldProduct_1();
		int32_t L_3 = __this->get_desiredProrationMode_2();
		NullCheck(L_0);
		GooglePurchaseService_OnQuerySkuDetailsResponse_m1443302EF8ACAAE16FD9D43A522BB4F81E3A629B(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mF06255FA3513B351C945F140B1CC9B7EB300F73E (U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0::<QueryPurchases>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CQueryPurchasesU3Eb__0_m4797FF90FB9E4E7CD2A9C2613FB419A71F2C8B18 (U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE * __this, List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * ___googlePurchasesInSubs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass3_0_U3CQueryPurchasesU3Eb__0_m4797FF90FB9E4E7CD2A9C2613FB419A71F2C8B18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F * L_0 = (U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_1__ctor_m32EF4809692FB5EA008B0CD2C01AA39DFD987585(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__locals1_1(__this);
		U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F * L_2 = V_0;
		List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * L_3 = ___googlePurchasesInSubs0;
		NullCheck(L_2);
		L_2->set_googlePurchasesInSubs_0(L_3);
		GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A * L_4 = __this->get_U3CU3E4__this_0();
		GoogleQueryPurchasesService_tF29E16FD00CD48407803FB5D1727E780015CC12A * L_5 = __this->get_U3CU3E4__this_0();
		String_t* L_6 = GoogleSkuTypeEnum_InApp_m4F9E9F5E2BA2C101E2A6C7B9E92AF017A70882EE(/*hidden argument*/NULL);
		NullCheck(L_5);
		GooglePurchaseResult_tD281D28FFEDF055C61EAF87CD825B6691B000658 * L_7 = GoogleQueryPurchasesService_QueryPurchasesWithSkuType_mB1E5C83EC06ABAF8A69080E1CF6D7B34BF09E389(L_5, L_6, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F * L_8 = V_0;
		Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E * L_9 = (Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E *)il2cpp_codegen_object_new(Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E_il2cpp_TypeInfo_var);
		Action_1__ctor_m913D2068E9319AFAC415744AA84697B23D903429(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mC9B923B6358257D442FE6A337295FDFC9FDD516F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m913D2068E9319AFAC415744AA84697B23D903429_RuntimeMethod_var);
		NullCheck(L_4);
		GoogleQueryPurchasesService_HandleGooglePurchaseResult_m7EBDADE862A1CF59F35091B2AD49B3017960B657(L_4, L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m32EF4809692FB5EA008B0CD2C01AA39DFD987585 (U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1::<QueryPurchases>b__1(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mC9B923B6358257D442FE6A337295FDFC9FDD516F (U3CU3Ec__DisplayClass3_1_t6854CDAA72B003C76B70FA058CDDCE216816F38F * __this, List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * ___googlePurchasesInApps0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass3_0_t01E590570EDEE33D7D9039AF9A6BE36262264BCE * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_0);
		Action_1_t5A53A7AA973017AB58DB9E86B6B14B586B26872E * L_1 = L_0->get_onQueryPurchaseSucceed_1();
		List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * L_2 = __this->get_googlePurchasesInSubs_0();
		List_1_t90D2CCBB63E5F8989B5B154462EAC23663A37654 * L_3 = ___googlePurchasesInApps0;
		GoogleQueryPurchasesService_HandleOnQueryPurchaseReceived_m6930C59EEFEE7CB773482A96FDCB6CA111D8B585(L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.LocalizedProductDescription_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m25FCFAD57F86318C41C505C8751F620CF1AB56E1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m25FCFAD57F86318C41C505C8751F620CF1AB56E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16 * L_0 = (U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16 *)il2cpp_codegen_object_new(U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF5521CA424C8103923ACE80EDFB5F10916D9C9C2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.LocalizedProductDescription_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5521CA424C8103923ACE80EDFB5F10916D9C9C2 (U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.LocalizedProductDescription_<>c::<DecodeNonLatinCharacters>b__11_0(System.Text.RegularExpressions.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CDecodeNonLatinCharactersU3Eb__11_0_mC6308C3C1692E6D2B1AEBC046E292C47FBB79847 (U3CU3Ec_tF8DC53C91FDF1D09436E9E3BE1D957F21AC92B16 * __this, Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CDecodeNonLatinCharactersU3Eb__11_0_mC6308C3C1692E6D2B1AEBC046E292C47FBB79847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_0 = ___m0;
		NullCheck(L_0);
		GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * L_1 = VirtFuncInvoker0< GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_0);
		NullCheck(L_1);
		Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * L_2 = GroupCollection_get_Item_m58F451BF6490EB64CA9C1A05844A790967166A6D(L_1, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_2, /*hidden argument*/NULL);
		int32_t L_4 = Int32_Parse_mE2DF841397B10B947C6729D5B811D0C25D211A56(L_3, ((int32_t)515), /*hidden argument*/NULL);
		V_0 = (((int32_t)((uint16_t)L_4)));
		String_t* L_5 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_002c;
	}

IL_002c:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ProductCatalog_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC4EFA583FB0145FFEF21D90C3781889412855EAF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mC4EFA583FB0145FFEF21D90C3781889412855EAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52 * L_0 = (U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52 *)il2cpp_codegen_object_new(U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1D58784C432D777FD3D1CEDF680AEFDD648CDADE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductCatalog_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1D58784C432D777FD3D1CEDF680AEFDD648CDADE (U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.ProductCatalog_<>c::<get_allValidProducts>b__8_0(UnityEngine.Purchasing.ProductCatalogItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_allValidProductsU3Eb__8_0_m45B81DA63553A9D8AEB53591683EB83EF08E3831 (U3CU3Ec_t60E0A71FF589768F4FCEB23D7D7787862517BE52 * __this, ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8 * ___x0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8 * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_id_0();
		bool L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ProductCatalogItem_t01F7466F25755D1961C861B5ADB6BD3FA9E4EAF8 * L_3 = ___x0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_id_0();
		NullCheck(L_4);
		String_t* L_5 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		return (bool)G_B3_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1A6D52C8735A819280EDC827CB2E845AF7DDD80B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m1A6D52C8735A819280EDC827CB2E845AF7DDD80B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA * L_0 = (U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA *)il2cpp_codegen_object_new(U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6C0E80B5B4BEE9054DDEB8D1A37899C48916B961(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6C0E80B5B4BEE9054DDEB8D1A37899C48916B961 (U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QueryInAppsAsync>b__14_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_0_m8BAF9F0A611E5DF1BD374A8A740895A1B176B84B (U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, const RuntimeMethod* method)
{
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___product0;
		NullCheck(L_0);
		int32_t L_1 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QueryInAppsAsync>b__14_1(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_1_m10EF5A691AD065B86E69B378A69CE393559E308F (U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, const RuntimeMethod* method)
{
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___product0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QuerySubsAsync>b__15_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_0_m5A808677445AF38E53F074B6179EBC415D300C28 (U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, const RuntimeMethod* method)
{
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___product0;
		NullCheck(L_0);
		int32_t L_1 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}
}
// System.String UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QuerySubsAsync>b__15_1(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_1_mBD59E7E0369FB09504CB33122B622671FD73EB42 (U3CU3Ec_t0E140F3387F847D97C8022CAF8629FE820D167AA * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, const RuntimeMethod* method)
{
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___product0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m7DF6C724D0E7ED8726D84EE57120442029A86124 (U3CU3Ec__DisplayClass12_0_tDCF4DD300FCB9D5B28162FFEDB742BB2CBD24F92 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass12_0::<QueryAsyncSku>b__0(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CQueryAsyncSkuU3Eb__0_m0BB58CA841CEB4A2C0119849AF4A61E662380FF1 (U3CU3Ec__DisplayClass12_0_tDCF4DD300FCB9D5B28162FFEDB742BB2CBD24F92 * __this, List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___skus0, const RuntimeMethod* method)
{
	{
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_0 = ___skus0;
		Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 * L_1 = __this->get_onSkuDetailsResponse_0();
		SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m477B1A227BB146FAC0FBD37EA6E3157FBFFF73B5(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m48AF69899B66897887FE1CD1AC4508A62F1DF8AF (U3CU3Ec__DisplayClass16_0_t24B245DD3FF7C86A62595CFCB8B86AA4392DBBFC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0::<QuerySkuDetails>b__0(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CQuerySkuDetailsU3Eb__0_m2E3FD031A4BD56F4FDFBE53CFD64A9495EE7F1D1 (U3CU3Ec__DisplayClass16_0_t24B245DD3FF7C86A62595CFCB8B86AA4392DBBFC * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___billingResult0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetails1, const RuntimeMethod* method)
{
	{
		QuerySkuDetailsService_tAB5D0239A133EF18633CD4E542ED3A6DC1068367 * L_0 = __this->get_U3CU3E4__this_0();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ___billingResult0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___skuDetails1;
		Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 * L_3 = __this->get_onSkuDetailsResponse_1();
		NullCheck(L_0);
		QuerySkuDetailsService_ConsolidateOnSkuDetailsReceived_mBDF6D3104F81E4F419DB03BD538207D63D3A23C8(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mCAD46EA5BAAAE466EC7FEEF0123E768C4AED83E6 (U3CU3Ec__DisplayClass5_0_tC53D4D465AC20C1554B98F68B65F07243C55C722 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0::<OnSetupFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_mBFA9EC335F595ECBB5E5881550B0BEDF12CF6FBA (U3CU3Ec__DisplayClass5_0_tC53D4D465AC20C1554B98F68B65F07243C55C722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_mBFA9EC335F595ECBB5E5881550B0BEDF12CF6FBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		int32_t L_2 = __this->get_reason_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m90B8C82B0CE291CDE483811B04EA42ED0173EEEB (U3CU3Ec__DisplayClass6_0_t1F9ECD658852CC94305AD1E9F4250AC5ADF467C2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0::<OnProductsRetrieved>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m3DD4203BD8EEDE5995997F06D172CBEBC2DF693A (U3CU3Ec__DisplayClass6_0_t1F9ECD658852CC94305AD1E9F4250AC5ADF467C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m3DD4203BD8EEDE5995997F06D172CBEBC2DF693A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * L_2 = __this->get_products_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * >::Invoke(2 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mB18203F20D588E1BC9BFB3CB731C04CED2F2B9E6 (U3CU3Ec__DisplayClass7_0_t4696ECA9E5908925826E0CADA88D96FBCB87972F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::<OnPurchaseSucceeded>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_mDE4398568DE9EC940FC042D38FE7F3BB401077DD (U3CU3Ec__DisplayClass7_0_t4696ECA9E5908925826E0CADA88D96FBCB87972F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_mDE4398568DE9EC940FC042D38FE7F3BB401077DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		String_t* L_2 = __this->get_id_1();
		String_t* L_3 = __this->get_receipt_2();
		String_t* L_4 = __this->get_transactionID_3();
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m458EAB3C0C7F0916B5FBF80E84D4FD881CB766E4 (U3CU3Ec__DisplayClass9_0_t0F3B406AA3F5477A31A14C6AD62F03D2E82F489F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass9_0::<OnPurchaseFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3COnPurchaseFailedU3Eb__0_m0DB5F3DEE86D1669E6FD76E2042D6C6FF86E8140 (U3CU3Ec__DisplayClass9_0_t0F3B406AA3F5477A31A14C6AD62F03D2E82F489F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass9_0_U3COnPurchaseFailedU3Eb__0_m0DB5F3DEE86D1669E6FD76E2042D6C6FF86E8140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptingStoreCallback_t93214E79AE2BA26AEB3212E44E2CB19F7DE38091 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_2 = __this->get_desc_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * >::Invoke(4 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mE00EB70073A750D81B067409BABD55B0C5FBD24C (U3CU3Ec__DisplayClass3_0_t58134579F55AF68E4EE6D55AC933939CDD671AA2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass3_0::<OnSetupFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnSetupFailedU3Eb__0_mE77E7D74CF363C9057F8B3EBB6DC777250423BF9 (U3CU3Ec__DisplayClass3_0_t58134579F55AF68E4EE6D55AC933939CDD671AA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass3_0_U3COnSetupFailedU3Eb__0_mE77E7D74CF363C9057F8B3EBB6DC777250423BF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_forwardTo_0();
		String_t* L_2 = __this->get_json_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Purchasing.IUnityCallback::OnSetupFailed(System.String) */, IUnityCallback_tBE0CD3CFCB5225BC3F45B081FA92513154F5EA81_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mFE3DEC2FD3C0BF62CD036A2B8340C1DD0F0D443A (U3CU3Ec__DisplayClass4_0_t0CE366BBEB8F6F8A8DF579BA61A65C46F99DD34F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass4_0::<OnProductsRetrieved>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnProductsRetrievedU3Eb__0_m9CC85BA8C6D061C53390B35167FFA5ECD73F0B1B (U3CU3Ec__DisplayClass4_0_t0CE366BBEB8F6F8A8DF579BA61A65C46F99DD34F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass4_0_U3COnProductsRetrievedU3Eb__0_m9CC85BA8C6D061C53390B35167FFA5ECD73F0B1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_forwardTo_0();
		String_t* L_2 = __this->get_json_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Purchasing.IUnityCallback::OnProductsRetrieved(System.String) */, IUnityCallback_tBE0CD3CFCB5225BC3F45B081FA92513154F5EA81_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7109250E5751DB60FA734C15A560DC7C3B38C42B (U3CU3Ec__DisplayClass5_0_tD2BFE44550006EC0AD2636A0508E7DCE25EBB458 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass5_0::<OnPurchaseSucceeded>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnPurchaseSucceededU3Eb__0_m019E5AEFC2A76F73527D673F01E782B410EE5E2B (U3CU3Ec__DisplayClass5_0_tD2BFE44550006EC0AD2636A0508E7DCE25EBB458 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass5_0_U3COnPurchaseSucceededU3Eb__0_m019E5AEFC2A76F73527D673F01E782B410EE5E2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_forwardTo_0();
		String_t* L_2 = __this->get_id_1();
		String_t* L_3 = __this->get_receipt_2();
		String_t* L_4 = __this->get_transactionID_3();
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(2 /* System.Void UnityEngine.Purchasing.IUnityCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IUnityCallback_tBE0CD3CFCB5225BC3F45B081FA92513154F5EA81_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mE17005CFA1B140C66AD3884C7572B854555CA590 (U3CU3Ec__DisplayClass6_0_tC16BD3CBD6634E7D764DC55DB28F9A9F6A743CD7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass6_0::<OnPurchaseFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3COnPurchaseFailedU3Eb__0_m8735482CD1DAE2F2C98D77548F1D2EDE455EC86B (U3CU3Ec__DisplayClass6_0_tC16BD3CBD6634E7D764DC55DB28F9A9F6A743CD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass6_0_U3COnPurchaseFailedU3Eb__0_m8735482CD1DAE2F2C98D77548F1D2EDE455EC86B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptingUnityCallback_t75AE3C5DC447B4D5F1443410A5D36098EBBFBB4A * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_forwardTo_0();
		String_t* L_2 = __this->get_json_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.IUnityCallback::OnPurchaseFailed(System.String) */, IUnityCallback_tBE0CD3CFCB5225BC3F45B081FA92513154F5EA81_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration::.ctor(UnityEngine.Purchasing.StandardPurchasingModule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftConfiguration__ctor_mB5FC6B9C40C41E4C4BC1BD9726B10D1CF19BAD13 (MicrosoftConfiguration_t1D1BA624256301F1D85882DC858D25EF05F822DA * __this, StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * ___module0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * L_0 = ___module0;
		__this->set_module_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration::set_useMockBillingSystem(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftConfiguration_set_useMockBillingSystem_m54FE78CBDD1386E8974B944BC7AE944BB75F31F3 (MicrosoftConfiguration_t1D1BA624256301F1D85882DC858D25EF05F822DA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		StandardPurchasingModule_tC29B1718A83AF1D604E3E7A700C18B1A2723F1F0 * L_0 = __this->get_module_1();
		bool L_1 = ___value0;
		NullCheck(L_0);
		StandardPurchasingModule_UseMockWindowsStore_m4DA7505AA377B212EAA2259C6AFA71CA792C4196(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___value0;
		__this->set_useMock_0(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::get_storeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreInstance_get_storeName_mB93ABA8F50209F113F01717BAAF03C194FC569C5 (StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CstoreNameU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StoreInstance_get_instance_mBB6EE49D643F2037A9D8AE5B834366897E1FDC24 (StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CinstanceU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::.ctor(System.String,UnityEngine.Purchasing.Extension.IStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreInstance__ctor_m057D521AC3051D91937571F946480A20FCC28AED (StoreInstance_t145AB8BCBD64960BB867DF69B585A0CC1F27EA3C * __this, String_t* ___name0, RuntimeObject* ___instance1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_U3CstoreNameU3Ek__BackingField_0(L_0);
		RuntimeObject* L_1 = ___instance1;
		__this->set_U3CinstanceU3Ek__BackingField_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m0BB3ADCD79FCC4B488A2ED84D8315497F978B39D (U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<RetrieveProducts>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m59185CCC02C3FE34C2A8683EDA69A8AC11C6B851 (U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * __this, bool ___success0, String_t* ___json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m59185CCC02C3FE34C2A8683EDA69A8AC11C6B851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___success0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___json1;
		bool L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_4 = __this->get_U3CU3E4__this_0();
		String_t* L_5 = ___json1;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String) */, L_4, L_5);
		goto IL_0043;
	}

IL_0025:
	{
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		RuntimeObject* L_7 = ((JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1 *)L_6)->get_m_Logger_9();
		String_t* L_8 = ___json1;
		String_t* L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1F129F58A8DCA2BAC1980E37CE73EDC57F778345, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(3 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_7, L_9);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<RetrieveProducts>b__1(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m5DA90193424C5C6369346942F7B20BD5A29D8972 (U3CU3Ec__DisplayClass7_0_t3142C06925307A8CFE5695A8FF1AF6D8ECAC84E0 * __this, bool ___success0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m5DA90193424C5C6369346942F7B20BD5A29D8972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_2 = NULL;
	bool V_3 = false;
	Type_t * V_4 = NULL;
	bool V_5 = false;
	{
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		L_0->set_m_LastInitError_23(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_1 = __this->get_U3CU3E4__this_0();
		NullCheck(L_1);
		L_1->set_m_UserInfo_22(NULL);
		bool L_2 = ___success0;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_4 = ___message1;
		bool L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_7 = ___message1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = MiniJsonExtensions_HashtableFromJson_mB8AD661936F30FBB6505D5ECDD74DA27E0AD386F(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_9, _stringLiteral7FF9A5D883AC2EEA2F31FEECA02D6C53D5F533B1, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		Type_t * L_12 = UserInfoInterface_GetClassType_m9812080125843B27829B95984F673CF85B386C0C(/*hidden argument*/NULL);
		V_4 = L_12;
		Type_t * L_13 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(Type_t *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0083;
		}
	}
	{
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_15 = __this->get_U3CU3E4__this_0();
		Type_t * L_16 = V_4;
		RuntimeObject * L_17 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_m_UserInfo_22(L_17);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_18 = V_2;
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_19 = __this->get_U3CU3E4__this_0();
		NullCheck(L_19);
		RuntimeObject * L_20 = L_19->get_m_UserInfo_22();
		UDPImpl_DictionaryToStringProperty_m7994C9973D80D9C122FEA25667B8A5C8AF212050(L_18, L_20, /*hidden argument*/NULL);
	}

IL_0083:
	{
	}

IL_0084:
	{
	}

IL_0085:
	{
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_21 = __this->get_U3CU3E4__this_0();
		NullCheck(L_21);
		L_21->set_m_Initialized_24((bool)1);
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_22 = __this->get_U3CU3E4__this_0();
		NullCheck(L_22);
		RuntimeObject* L_23 = L_22->get_m_Bindings_21();
		ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * L_24 = __this->get_products_1();
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_25 = __this->get_retrieveCallback_2();
		NullCheck(L_23);
		InterfaceActionInvoker2< ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 *, Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * >::Invoke(2 /* System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_tE0C4800C551B8A89508ED702D5B54B05C9370EDC_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		goto IL_00d1;
	}

IL_00b1:
	{
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_26 = __this->get_U3CU3E4__this_0();
		String_t* L_27 = ___message1;
		NullCheck(L_26);
		L_26->set_m_LastInitError_23(L_27);
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_28 = __this->get_U3CU3E4__this_0();
		NullCheck(L_28);
		RuntimeObject* L_29 = ((JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1 *)L_28)->get_unity_1();
		NullCheck(L_29);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_29, 2);
	}

IL_00d1:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m7C57FE2C6D54FD70FFFF2BD54E6E65EB9F1D44A5 (U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::<Purchase>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_m9302EBEE3A27C59DBDFA895D8AC0B1D2D574A931 (U3CU3Ec__DisplayClass8_0_t9ABBC4BAFCAD0201A1935C7859A166D3B90022B1 * __this, bool ___success0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_m9302EBEE3A27C59DBDFA895D8AC0B1D2D574A931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_10 = NULL;
	String_t* V_11 = NULL;
	PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * V_12 = NULL;
	bool V_13 = false;
	{
		String_t* L_0 = ___message1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = MiniJsonExtensions_HashtableFromJson_mB8AD661936F30FBB6505D5ECDD74DA27E0AD386F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = ___success0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00e7;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		String_t* L_5 = MiniJsonExtensions_GetString_mC82798300001EEFDC1A8CD64ACAD09D96DA59345(L_4, _stringLiteralD07477ECD3017EFC4D04A75EB58245BE024730D9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_2 = L_5;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		String_t* L_7 = MiniJsonExtensions_GetString_mC82798300001EEFDC1A8CD64ACAD09D96DA59345(L_6, _stringLiteral0E62453B16F3139996684F414345A0A54FA64728, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_3 = L_7;
		String_t* L_8 = V_2;
		bool L_9 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_8, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_11 = V_0;
		String_t* L_12 = V_2;
		NullCheck(L_11);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_11, _stringLiteral4B410F5F43A4714AE6474DB2282523C7FBE75CD1, L_12, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
	}

IL_0051:
	{
		String_t* L_13 = V_3;
		bool L_14 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_13, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_006f;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_16 = V_0;
		String_t* L_17 = V_3;
		NullCheck(L_16);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_16, _stringLiteralC4FD5B06A6B7174802B6D991C7560C98FB781820, L_17, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
	}

IL_006f:
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_18 = __this->get_product_0();
		NullCheck(L_18);
		String_t* L_19 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_18, /*hidden argument*/NULL);
		String_t* L_20 = V_3;
		NullCheck(L_19);
		bool L_21 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_19, L_20, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00ba;
		}
	}
	{
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_23 = __this->get_U3CU3E4__this_1();
		NullCheck(L_23);
		RuntimeObject* L_24 = ((JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1 *)L_23)->get_m_Logger_9();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_25;
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_27 = __this->get_product_0();
		NullCheck(L_27);
		String_t* L_28 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_26;
		String_t* L_30 = V_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		NullCheck(L_24);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(7 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_24, 0, _stringLiteral9783048DDA4A8100EAD15B60BE4922DE458E77F8, L_29);
	}

IL_00ba:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_31 = V_0;
		String_t* L_32 = MiniJsonExtensions_toJson_m52DC16B5D637A42662C913903880AECA584CD9E2(L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_33 = __this->get_U3CU3E4__this_1();
		NullCheck(L_33);
		RuntimeObject* L_34 = ((JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1 *)L_33)->get_unity_1();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_35 = __this->get_product_0();
		NullCheck(L_35);
		String_t* L_36 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_35, /*hidden argument*/NULL);
		String_t* L_37 = V_4;
		String_t* L_38 = V_2;
		NullCheck(L_34);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_34, L_36, L_37, L_38);
		goto IL_0184;
	}

IL_00e7:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_39 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_41 = Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68(L_40, _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C, /*hidden argument*/NULL);
		V_8 = ((*(int32_t*)((int32_t*)UnBox(L_41, PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var))));
		RuntimeObject * L_42 = Box(PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var, (&V_8));
		NullCheck(L_42);
		String_t* L_43 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		V_8 = *(int32_t*)UnBox(L_42);
		V_9 = L_43;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_44 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_44, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_45 = L_44;
		String_t* L_46 = V_9;
		NullCheck(L_45);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_45, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, L_46, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		V_10 = L_45;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_47 = V_0;
		NullCheck(L_47);
		bool L_48 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_47, _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		V_13 = L_48;
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_0152;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_50 = V_10;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_51 = V_0;
		NullCheck(L_51);
		RuntimeObject * L_52 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_51, _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		NullCheck(L_50);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_50, _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83, L_52, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
	}

IL_0152:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_53 = V_10;
		String_t* L_54 = MiniJsonExtensions_toJson_m52DC16B5D637A42662C913903880AECA584CD9E2(L_53, /*hidden argument*/NULL);
		V_11 = L_54;
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_55 = __this->get_product_0();
		NullCheck(L_55);
		String_t* L_56 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_55, /*hidden argument*/NULL);
		int32_t L_57 = V_8;
		String_t* L_58 = ___message1;
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_59 = (PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 *)il2cpp_codegen_object_new(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8_il2cpp_TypeInfo_var);
		PurchaseFailureDescription__ctor_m82E2FF9C0415A1D1001A8C0F80016441A08140D5(L_59, L_56, L_57, L_58, /*hidden argument*/NULL);
		V_12 = L_59;
		UDPImpl_t60852A3102303478D6A84336B9E4D3076AE090F5 * L_60 = __this->get_U3CU3E4__this_1();
		NullCheck(L_60);
		RuntimeObject* L_61 = ((JSONStore_t55D7DA5D987295A1DF499A980496BC28D3E04BA1 *)L_60)->get_unity_1();
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_62 = V_12;
		NullCheck(L_61);
		InterfaceActionInvoker1< PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * >::Invoke(4 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_61, L_62);
	}

IL_0184:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.UDPReflectionUtils_<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mCFDCDD2397A277EBAA33DBC3349486A6FB336CB8 (U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UDPReflectionUtils_<>c__DisplayClass6_0::<GetTypeByName>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m63F3B59612C7BC7E726657C78A97B76564C2D39A (U3CU3Ec__DisplayClass6_0_tDBC2E3E1ED4FBFCD94FDFBD6118A736C304E8A13 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		Assembly_t * L_0 = __this->get_assembly_0();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_0);
		String_t* L_2 = ___x0;
		NullCheck(L_1);
		bool L_3 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5A7D7189B89B7036F25B5F8B66E96DB01AA3811E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m5A7D7189B89B7036F25B5F8B66E96DB01AA3811E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17 * L_0 = (U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17 *)il2cpp_codegen_object_new(U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m68499DF5F7137E155BF18558709A290681667B71(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m68499DF5F7137E155BF18558709A290681667B71 (U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore_<>c::<CreateRetrieveProductsQuestion>b__18_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m173E736672AFB37CF15038AE1A8DD1A9B2236D5F (U3CU3Ec_tCA14D41863E837EEE61BF7349266CBC871ACCB17 * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___pid0, const RuntimeMethod* method)
{
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___pid0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.UIFakeStore_DialogRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogRequest__ctor_m0EE18E18F5572DE6E01C5C7FB85CF48E1EF2E30E (DialogRequest_t05F779F855915A68EF1C996D7D874FC743568C00 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleNotifier_OnDestroy_m9EAB496743EFA56C16A181757BA8F187FE6B434F (LifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnDestroyCallback_4();
		V_0 = (bool)((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = __this->get_OnDestroyCallback_4();
		NullCheck(L_2);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleNotifier__ctor_m70AAC206750C96D72C7EB9BB33250D89ABED44B0 (LifecycleNotifier_t5EC9CC91EFE3FE566F5728A09DA1C36D7C0C494E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__49__ctor_m9BC1D238D5E2CF7E2E7E1D4BA14C29F841ED03A1 (U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__49_System_IDisposable_Dispose_m83AF2B9F1E8D0771BB8FCD7C7B9F8EC3E5E9C96F (U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedCoroutineU3Ed__49_MoveNext_m4D5880AC77AF2375F3CA55641BCD024B2AAC9F23 (U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayedCoroutineU3Ed__49_MoveNext_m4D5880AC77AF2375F3CA55641BCD024B2AAC9F23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003b;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_3 = __this->get_delay_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (((float)((float)L_3))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityUtil_t0747348F8F8CB8DEC55084A9B88BB6D08E0F2BE4 * L_5 = __this->get_U3CU3E4__this_4();
		RuntimeObject* L_6 = __this->get_coroutine_2();
		NullCheck(L_5);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_5, L_6, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedCoroutineU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m445D9FD9420A7720B165A946B9C273FC7589FEF2 (U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_m529B54873453FC1159C1E19489562CB985BDD818 (U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_m529B54873453FC1159C1E19489562CB985BDD818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_m529B54873453FC1159C1E19489562CB985BDD818_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_get_Current_m62DEE0F6821DBD1124B4D945389AF85CE4BAA675 (U3CDelayedCoroutineU3Ed__49_tCE782E64CB4FD7D8C760F538E5E25BA1DADDE8AF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.WinRTStore_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m05457177E1FA6B466B7C23B03AFE9111B976E2AA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m05457177E1FA6B466B7C23B03AFE9111B976E2AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 * L_0 = (U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 *)il2cpp_codegen_object_new(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m01C91D60F6B78EBAB4D09FEB118B3237078C0CF5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01C91D60F6B78EBAB4D09FEB118B3237078C0CF5 (U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m40D09A941BE7B5778638D7D6EF658C89CDC4F809 (U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___def0, const RuntimeMethod* method)
{
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___def0;
		NullCheck(L_0);
		int32_t L_1 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_1(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F * U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_mA65E85AE35F533491D7788A0A6605E1D7D74207F (U3CU3Ec_t4D4BF8535314A8FEBC460293B62A10889399D795 * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___def0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_mA65E85AE35F533491D7788A0A6605E1D7D74207F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___def0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_0, /*hidden argument*/NULL);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_2 = ___def0;
		NullCheck(L_2);
		String_t* L_3 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8C99461589CBC42FE28D0A29D20F63D0EE7E6E00, L_3, /*hidden argument*/NULL);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_5 = ___def0;
		NullCheck(L_5);
		String_t* L_6 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral74320907E0EFDCA8532E8CBD2C1A2910BB8C42D7, L_6, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Decimal__ctor_mB9DFF414FB23863B982F9D863D6E57867995C7F3((&L_8), 1, 0, 0, (bool)0, (uint8_t)2, /*hidden argument*/NULL);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_9 = ___def0;
		NullCheck(L_9);
		int32_t L_10 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_9, /*hidden argument*/NULL);
		WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F * L_11 = (WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F *)il2cpp_codegen_object_new(WinProductDescription_t80619908A2949D2EB7850F591529BCA81FC7730F_il2cpp_TypeInfo_var);
		WinProductDescription__ctor_m6133BB09C2299027F76001EC4DC35E55221A1E05(L_11, L_1, _stringLiteral283A5E2C7FF2F98F76268C8CFB12CA428D08EF99, L_4, L_7, _stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD, L_8, (String_t*)NULL, (String_t*)NULL, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public string storeSpecificId { get; private set; }
		String_t* L_0 = __this->get_U3CstoreSpecificIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public ProductType type { get; private set; }
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; private set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_purchaseDate_m902295CB992329CB42872065028D14CD5A6D7E8A_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CpurchaseDateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_m47E3FE0BCF859DE421259D6D1A601DC3C4BE1C5D_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CproductIDU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDescription_get_storeSpecificId_m805EE28C57C25664093C7F5C2FB24EAADFEAFB09_inline (ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 * __this, const RuntimeMethod* method)
{
	{
		// public string storeSpecificId { get; private set; }
		String_t* L_0 = __this->get_U3CstoreSpecificIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
