#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_tF2F9D9635A3932E24843C5F557F6080A2C9F7F95;
// Unity.UIElements.Runtime.IPanelTransform
struct IPanelTransform_tA69B12E8BD538FDF2F14712F21C4FEE2023968CE;
// Unity.UIElements.Runtime.InGamePanelScalerInspector
struct InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57;
// Unity.UIElements.Runtime.InputWrapper
struct InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.UIElements.Runtime.NavigationCancelEvent
struct NavigationCancelEvent_t6D8664F136E91A5FC7DD9736D468ADE6124E6A65;
// Unity.UIElements.Runtime.NavigationMoveEvent
struct NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6;
// Unity.UIElements.Runtime.NavigationSubmitEvent
struct NavigationSubmitEvent_t61EA218A23166F922C9828F5F4EEF3F0E1191CA6;
// Unity.UIElements.Runtime.PanelRenderer
struct PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517;
// Unity.UIElements.Runtime.PanelScaler
struct PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE;
// Unity.UIElements.Runtime.UIElementsEventSystem
struct UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.UIElements.Runtime.WorldQuadDisplay
struct WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Unity.UIElements.Runtime.PanelRenderer/PanelOwner
struct PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6;
// Unity.UIElements.Runtime.PanelScaler/IScaleModeImpl
struct IScaleModeImpl_t15C6FE392D842EF07A3A4DA8AC0BEB8AAAE07C1B;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t4B5D11A4BFD62938CB8E23BE6080E1802E80C757;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector>
struct Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement>
struct Dictionary_2_t34DB4E0D28CB7603D84FB2DF8D2823291BB35710;
// UnityEngine.UIElements.EventBase`1<Unity.UIElements.Runtime.NavigationMoveEvent>
struct EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC;
// UnityEngine.UIElements.EventBase`1<System.Object>
struct EventBase_1_t96045F377456C52401528D3B6A3635C4C071779A;
// System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>>
struct Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<UnityEngine.Object>
struct HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Object>
struct IEnumerable_1_tE06D8FC7400A44A0C92248F3553317760FCABF28;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Object>
struct IEqualityComparer_1_t827C4E5D8D207BC9E618771E0B2E8878F3738F13;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t5D9124F36ADC50D7FBCB5390DA772BDB26966C45;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35;
// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset>
struct List_1_t7271728A3B465793D693B51F9BB84572F502B89B;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementAsset>
struct List_1_tC1B59BA76E76895A80433B017153237CD73A70DF;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/SlotDefinition>
struct List_1_t3CB0238CE1A3B7A1421CCF75C059A941921D0C1D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/UsingEntry>
struct List_1_tBAC0AF6F8B367BBA8A9DC316B12FA9E863C72BF0;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9D216521E6A213FF8562D215598D336ABB5474F4;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// Unity.UIElements.Runtime.NavigationEventBase`1<Unity.UIElements.Runtime.NavigationCancelEvent>
struct NavigationEventBase_1_t9128BCF1AF775B7FEC84E9706AAC15CE1DD2A8B1;
// Unity.UIElements.Runtime.NavigationEventBase`1<Unity.UIElements.Runtime.NavigationMoveEvent>
struct NavigationEventBase_1_t8C9C2C3285DE7F4E6052012C12AFD3EB224F2BB9;
// Unity.UIElements.Runtime.NavigationEventBase`1<Unity.UIElements.Runtime.NavigationSubmitEvent>
struct NavigationEventBase_1_tC64CED1575E64DE8180504EF8041919CDC810013;
// Unity.UIElements.Runtime.NavigationEventBase`1<System.Object>
struct NavigationEventBase_1_tE84BECAB46459C7096D8BDD735D999CE518D0E17;
// UnityEngine.UIElements.ObjectPool`1<Unity.UIElements.Runtime.NavigationCancelEvent>
struct ObjectPool_1_tC5D49BD91858BBEA7337440D7CD18B5EE644DAA9;
// UnityEngine.UIElements.ObjectPool`1<Unity.UIElements.Runtime.NavigationMoveEvent>
struct ObjectPool_1_t21FAC1CEA3FCBF21D9ED3954E5B9C85A731242C3;
// UnityEngine.UIElements.ObjectPool`1<Unity.UIElements.Runtime.NavigationSubmitEvent>
struct ObjectPool_1_t806842A22FD3D695B3306B2D262433ACE0535B61;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.PointerCancelEvent>
struct ObjectPool_1_t2970711D8843F3BA618CD18FD275852D9AD08DFF;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.PointerDownEvent>
struct ObjectPool_1_t008FA497FB5A6C7ED27352D21573CA5B895E403F;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.PointerMoveEvent>
struct ObjectPool_1_t0AC910C3716928BC11AD8B4CA5AA6C184DFDB3A6;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.PointerStationaryEvent>
struct ObjectPool_1_tC4F8D01CE45CD5ECD1442D3B75480C89C4CEAF3A;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.PointerUpEvent>
struct ObjectPool_1_t6CF2EC0B1786D738EA6F897ED5A6A869F2C1D0CD;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.UIElements.StyleSheets.Dimension[]
struct DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.UIElements.EventBase
struct EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UIElements.IPanel
struct IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB;
// UnityEngine.UIElements.IStyle
struct IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED;
// Unity.UIElements.Runtime.InputWrapper[]
struct InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// UnityEngine.UIElements.PointerCancelEvent
struct PointerCancelEvent_tA658A77DCA611873210006D2D89D4B02F38EB2DB;
// UnityEngine.UIElements.PointerDownEvent
struct PointerDownEvent_tC94CCE820E4E6DCCD89A95DE94549BA550C27403;
// UnityEngine.UIElements.PointerMoveEvent
struct PointerMoveEvent_t9D1DF9F3D7FF1E2CCBEF6281558B6B88DAA90D28;
// UnityEngine.UIElements.PointerStationaryEvent
struct PointerStationaryEvent_tB5F216CAD6C42F3BF076F2EA0B1CC5F838EFE301;
// UnityEngine.UIElements.PointerUpEvent
struct PointerUpEvent_tFE3775D286474372874AF929B86FA46F4AC86333;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.UIElements.StyleSheets.ScalableImage[]
struct ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E;
// Unity.UIElements.Runtime.PanelScaler/ScaleMode[]
struct ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418;
// Unity.UIElements.Runtime.PanelScaler/ScreenMatchMode[]
struct ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Object>[]
struct SlotU5BU5D_t44C9D92F857446E8577E89F483F957B50A3A2E51;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIElements.StyleComplexSelector[]
struct StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F;
// UnityEngine.UIElements.StyleRule[]
struct StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F;
// UnityEngine.UIElements.StyleSheet[]
struct StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UIElements.VisualElement
struct VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6;

IL2CPP_EXTERN_C RuntimeClass* ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_t3E33D2CE9117EA09B981B3C3262D0B5D05262416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_tD72A4479F322480E3F8949F194BB8A1A5299F179_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanelTransform_tA69B12E8BD538FDF2F14712F21C4FEE2023968CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScaleModeImpl_t15C6FE392D842EF07A3A4DA8AC0BEB8AAAE07C1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9D216521E6A213FF8562D215598D336ABB5474F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A0F7C863EF12A337B4A3561E9FCD70501ED6EEA____89A0099374A5746F12D728CDE3233EB874AA88EE_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0640D3F6D6142ECE4768AA82EA7E11CD3BB2F5B6;
IL2CPP_EXTERN_C String_t* _stringLiteral08418E4E30452DB9A7F259FB8227C376A2C74A6F;
IL2CPP_EXTERN_C String_t* _stringLiteral0FB9BC08C5D5D8F0D4DA64623826F8A6A2C35DB4;
IL2CPP_EXTERN_C String_t* _stringLiteral152A2E93D632203F9F05A08D7A290E3EC97C7289;
IL2CPP_EXTERN_C String_t* _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral5DC135888D097499EC5BAB695F0D6E5CB1E68059;
IL2CPP_EXTERN_C String_t* _stringLiteral7CD93F26B73AFA65EC3F27CC8C21557FAA543373;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral838BABD2F37FDEE93E73FC6BDDE01AC2BA17D7D3;
IL2CPP_EXTERN_C String_t* _stringLiteral85B4E44A3D608F73A088A852E58663F0AA112682;
IL2CPP_EXTERN_C String_t* _stringLiteral87CC1E87301048A005420D13442996145FC976D5;
IL2CPP_EXTERN_C String_t* _stringLiteral903EA876E244AABF5641B47C1BBA53DF2C20F707;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteral9C292EA9ADF0C459290E0855AFC6E0EB52EB3108;
IL2CPP_EXTERN_C String_t* _stringLiteralA6E43235F271E3A68178E1CCD83793314BA320EE;
IL2CPP_EXTERN_C String_t* _stringLiteralA8967182BE82926011B875D652CDECEEF72CD255;
IL2CPP_EXTERN_C String_t* _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B;
IL2CPP_EXTERN_C String_t* _stringLiteralBD25E3A494BAB3D65BA826D5F40165921AED8347;
IL2CPP_EXTERN_C String_t* _stringLiteralC429FF940593BD22EDE76311DE76BE17391A7B6E;
IL2CPP_EXTERN_C String_t* _stringLiteralE28426DEED4719121BDF3CB4DD3CC3D8BE4EFDEB;
IL2CPP_EXTERN_C String_t* _stringLiteralE892B96FB84C3D6106B3CD51BD4E72F405B5DD4E;
IL2CPP_EXTERN_C String_t* _stringLiteralF1A9E1E6B69455E308044736665AAD29EB5551A6;
IL2CPP_EXTERN_C String_t* _stringLiteralFF27DB249D49F1593C0EDD4BFF72820BDAE2A194;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisScaleMode_tFCA174CC93461B5C6CBCA997C51609CEB267812B_m3253FC7F98EFA3630378F62E36B91E1AB3F6BA99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisScreenMatchMode_t8D0BE1D62FF7469C85B141D50A3C4823DD3C1274_m0CC1189B814DA3A6C2EBC34EC606D6D577953939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517_mDA3F0E605E993A05865C916EAA3907444FC06CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83_mDBB77C7B82A15259FE2750EECC642FC836BD114B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisInputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2_mF8E787D74386AD503CE89B75B3AE04D218E19CCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_GetPooled_m155D001A41BCAA2DCB10FECB25B1B078ED9C2227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_GetPooled_m7E088CBA72639F70195B20A26590B91D8AE5ECBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_GetPooled_mEEE019B76A607287F1F095D77CF21F9EC59879AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_Init_m545798B53E751466DF26E9304A9B39630F69A8F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m16B66B1F393FB53DCBD3DF14D4ED64688FEDAFC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisInputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2_m5FC9D2EAF19AE61B53F1D1BD79867FC986D85E9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m399E83585D5FCC3965C58C74C297068048C2B5D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m47BE8F26D40810EF4DCA2CF9D664944C572E5F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC986281A0F6F526F49A46B32BA044A00F562B121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8786AF4A4AE06CDD3B907914EE860C2748ED2EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavigationEventBase_1__ctor_m00FD20E8B50344B1FBF165BF6EB5B076EEBC6DD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavigationEventBase_1__ctor_m4A320E1477D733F00901BC41B172DFA214FB6071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavigationEventBase_1__ctor_m85DB76DFA84E6E9E6355F9A1DE589331846A032B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerEventBase_1_GetPooled_m28FD93EDC4F4BC729350516F04050427C2B94089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerEventBase_1_GetPooled_m4A7FCB55FEE6E8F7FFC0E5E4F5CDE9CF4E4F60CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerEventBase_1_GetPooled_m68160648176C72A6180CCDBA89315164BE5CD823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerEventBase_1_GetPooled_m91F7593672FA62E5A9BE1B6CFF361729EBA4DDB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerEventBase_1_GetPooled_mA8C5B1B36699CB9B36A2AE43471F6450DE619E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisPanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6_mC9BDD64235F3B16AC4E44A92E9DA6F05C7B46215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_mA8D1812B6E9B8E9C1A7A36C9081D50832941FC05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t InGamePanelScalerInspector_Edit_m36DE3171C00734DA803939745CC34538858D01DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InGamePanelScalerInspector_Edit_m3E755E960E58B9F479BE58A93E145E97DFA07698_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InGamePanelScalerInspector_Edit_m5333B673AA6818E80F13C412565184BE37ECDCEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InGamePanelScalerInspector_OnEnable_m0FD6BA36934779D524D7C918FD5410510ED13004_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InGamePanelScalerInspector_OnGUI_m07496E000A72254A4225AEFE9C1C60822E91D49E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InGamePanelScalerInspector__cctor_m72FADD2C3CB883EC8EFB0D28C9FBEA9F380CF24D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputWrapper_get_mousePosition_mF1C70196324E3887825FD0D7E48B025CA1254231_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationCancelEvent__ctor_mE0C11850EA7620563CC6ECFC53C88E626563C98A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationMoveEvent_DetermineMoveDirection_mD8658A2A5B225427BFCDDD1EBA093580AAAD0EE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationMoveEvent_GetPooled_mDAF84D543EF79673DBACD1B59171F6A65819C2D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationMoveEvent_Init_m08E35AE9B28774CFE20CF881318A74585CB4A7B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationMoveEvent__ctor_m4B7F1515FD0DDADF14559CAB8655B2DB0B39D708_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationSubmitEvent__ctor_m0034F27359D04E724EED5651B8AEC2F58EE626AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_Awake_mE3C2226546C27F4724CBE98A81CB5374E5347DBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_Deinitialize_m2BC06FD04251F1443E4BD940107722C9A16A7550_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_GetActiveRenderTargetSize_m85488D72DFB16B1A580557F0AB7DC3886A20B9D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_Initialize_m4CF5C04D025AC2CB51A1B2A22B308AAFEDC88EE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_OnEnable_m2027134A42EE91D92B04EFB38CE609F272D8644C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_OnRenderObject_mE9A968CC8498D4F62C3EE413F68B5C42F5B05821_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_OnValidate_mCFF8C045C41AB51D61CE14934C0AC1B8B6B6F356_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_RecreateUIFromUxml_m3C03814914985745293F1C6093192171BC861822_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_ScreenToPanel_m21E671A8E1E04953370551C79F1DEA4C899FD6A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_Update_mE22D8CD3BDFE8D82297677D682E9EA95CCC2069F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer__ctor_mBB7034EA3F0C3B09E41612B1CBAA89F9C191AF4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_get_trackedAssetHashes_m6516F33A74A5585F821255122AB7F0DEB3B1FE18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_get_trackedAssetList_mBE4C7DF68CDECD53E16FCAD52C1ECC5E798BF560_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelRenderer_get_trackedAssetSet_m8CB87046AA13DAB4C626591E0FA0BC7270E8048F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelScaler_ComputeScalingFactor_m87891D2126A51A75BD815614F1BEF4452A3B49F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanelScaler_get_impl_mD15B279BE24A275492B440905D834435B5472D6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScaleWithScreenSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_mFE14D5B257EBA3645D236281D2F80AE3652079B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_GetRawMoveVector_m155C433440E00EDED6C2A2B3145843189DAC317E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_MakeTouchEvent_mC1D76335D40DAB26402A6BECBB30DD7C895B4181_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_ProcessMouseEvents_mB274CDCFF9254F5B392E3DF72A3B5C704A666B54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_ProcessTouchEvents_mD00D7347E595F215FC712E93FD7AAA3357EE2BF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_ScreenToPanel_m5A19678380877C325F604431E5561D3A8917FA5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_ScreenToPanel_m797E8128E66FDF947AE5BB54E355E780F43B64D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_ScreenToPanel_m8C1D16AE1F2CCDF501CA59FB773060C427D0F0B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_ShouldSendMoveFromInput_mF43DE3E117B1C6C336ABCDCDB321FB140CB356D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_Update_mFC90F539C6ECEA09106711D1CA330DA621F46422_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem__ctor_m8C62405FD9884CCE7DA43330C0874C81AE74BFB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_get_focusedPanelRenderer_m0FDF6F7457719493E91BCC724844075D56B1E6CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24EUnity_UI_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldQuadDisplay_OnDisable_m6AA666DCC556082EE483ACBB25D515674DF8B1B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldQuadDisplay_Unity_UIElements_Runtime_IPanelTransform_ScreenToPanelUV_m468E9482A50AEDBA60BB04FBDED1F4A669E5EA8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldQuadDisplay_UpdateWorldGeometryAndMaterial_mAD2390DFA5C9F22268BA5B39AD1094E058DAE353_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldQuadDisplay_Update_mE0F16CAA73D10331639BB111CF640372E88B488B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldQuadDisplay__ctor_m91B341C99465A14787B8928D4D75E333503E657A_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770;
struct ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418;
struct ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tCBE25F21EED04015AADA3139ADAABE487CCD15C2 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.HashSet`1<UnityEngine.Object>
struct  HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t44C9D92F857446E8577E89F483F957B50A3A2E51* ____slots_8;
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
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673, ____slots_8)); }
	inline SlotU5BU5D_t44C9D92F857446E8577E89F483F957B50A3A2E51* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t44C9D92F857446E8577E89F483F957B50A3A2E51** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t44C9D92F857446E8577E89F483F957B50A3A2E51* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Object>
struct  List_1_t9D216521E6A213FF8562D215598D336ABB5474F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4, ____items_1)); }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9D216521E6A213FF8562D215598D336ABB5474F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
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

// UnityEngine.UIElements.CallbackEventHandler
struct  CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34 * ___m_CallbackRegistry_0;

public:
	inline static int32_t get_offset_of_m_CallbackRegistry_0() { return static_cast<int32_t>(offsetof(CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C, ___m_CallbackRegistry_0)); }
	inline EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34 * get_m_CallbackRegistry_0() const { return ___m_CallbackRegistry_0; }
	inline EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34 ** get_address_of_m_CallbackRegistry_0() { return &___m_CallbackRegistry_0; }
	inline void set_m_CallbackRegistry_0(EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34 * value)
	{
		___m_CallbackRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CallbackRegistry_0), (void*)value);
	}
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D24
struct  __StaticArrayInitTypeSizeU3D24_t92833D61E0D5F181522F4A155C5BC85CACD0323B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t92833D61E0D5F181522F4A155C5BC85CACD0323B__padding[24];
	};

public:
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


// Unity.UIElements.Runtime.PanelScaler_ConstantPhysicalSizeScaler
struct  ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 
{
public:
	// System.Single Unity.UIElements.Runtime.PanelScaler_ConstantPhysicalSizeScaler::referenceDpi
	float ___referenceDpi_0;
	// System.Single Unity.UIElements.Runtime.PanelScaler_ConstantPhysicalSizeScaler::fallbackDpi
	float ___fallbackDpi_1;

public:
	inline static int32_t get_offset_of_referenceDpi_0() { return static_cast<int32_t>(offsetof(ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96, ___referenceDpi_0)); }
	inline float get_referenceDpi_0() const { return ___referenceDpi_0; }
	inline float* get_address_of_referenceDpi_0() { return &___referenceDpi_0; }
	inline void set_referenceDpi_0(float value)
	{
		___referenceDpi_0 = value;
	}

	inline static int32_t get_offset_of_fallbackDpi_1() { return static_cast<int32_t>(offsetof(ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96, ___fallbackDpi_1)); }
	inline float get_fallbackDpi_1() const { return ___fallbackDpi_1; }
	inline float* get_address_of_fallbackDpi_1() { return &___fallbackDpi_1; }
	inline void set_fallbackDpi_1(float value)
	{
		___fallbackDpi_1 = value;
	}
};


// Unity.UIElements.Runtime.PanelScaler_ConstantPixelSizeScaler
struct  ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF 
{
public:
	// System.Single Unity.UIElements.Runtime.PanelScaler_ConstantPixelSizeScaler::scaleFactor
	float ___scaleFactor_0;

public:
	inline static int32_t get_offset_of_scaleFactor_0() { return static_cast<int32_t>(offsetof(ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF, ___scaleFactor_0)); }
	inline float get_scaleFactor_0() const { return ___scaleFactor_0; }
	inline float* get_address_of_scaleFactor_0() { return &___scaleFactor_0; }
	inline void set_scaleFactor_0(float value)
	{
		___scaleFactor_0 = value;
	}
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


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PropertyName
struct  PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.UIElements.Focusable
struct  Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14  : public CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C
{
public:
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;

public:
	inline static int32_t get_offset_of_U3CfocusableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14, ___U3CfocusableU3Ek__BackingField_1)); }
	inline bool get_U3CfocusableU3Ek__BackingField_1() const { return ___U3CfocusableU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CfocusableU3Ek__BackingField_1() { return &___U3CfocusableU3Ek__BackingField_1; }
	inline void set_U3CfocusableU3Ek__BackingField_1(bool value)
	{
		___U3CfocusableU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtabIndexU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14, ___U3CtabIndexU3Ek__BackingField_2)); }
	inline int32_t get_U3CtabIndexU3Ek__BackingField_2() const { return ___U3CtabIndexU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtabIndexU3Ek__BackingField_2() { return &___U3CtabIndexU3Ek__BackingField_2; }
	inline void set_U3CtabIndexU3Ek__BackingField_2(int32_t value)
	{
		___U3CtabIndexU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_DelegatesFocus_3() { return static_cast<int32_t>(offsetof(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14, ___m_DelegatesFocus_3)); }
	inline bool get_m_DelegatesFocus_3() const { return ___m_DelegatesFocus_3; }
	inline bool* get_address_of_m_DelegatesFocus_3() { return &___m_DelegatesFocus_3; }
	inline void set_m_DelegatesFocus_3(bool value)
	{
		___m_DelegatesFocus_3 = value;
	}

	inline static int32_t get_offset_of_m_ExcludeFromFocusRing_4() { return static_cast<int32_t>(offsetof(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14, ___m_ExcludeFromFocusRing_4)); }
	inline bool get_m_ExcludeFromFocusRing_4() const { return ___m_ExcludeFromFocusRing_4; }
	inline bool* get_address_of_m_ExcludeFromFocusRing_4() { return &___m_ExcludeFromFocusRing_4; }
	inline void set_m_ExcludeFromFocusRing_4(bool value)
	{
		___m_ExcludeFromFocusRing_4 = value;
	}

	inline static int32_t get_offset_of_isIMGUIContainer_5() { return static_cast<int32_t>(offsetof(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14, ___isIMGUIContainer_5)); }
	inline bool get_isIMGUIContainer_5() const { return ___isIMGUIContainer_5; }
	inline bool* get_address_of_isIMGUIContainer_5() { return &___isIMGUIContainer_5; }
	inline void set_isIMGUIContainer_5(bool value)
	{
		___isIMGUIContainer_5 = value;
	}
};


// UnityEngine.UIElements.VisualElement_Hierarchy
struct  Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement_Hierarchy::m_Owner
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Owner_0;

public:
	inline static int32_t get_offset_of_m_Owner_0() { return static_cast<int32_t>(offsetof(Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076, ___m_Owner_0)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_Owner_0() const { return ___m_Owner_0; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_Owner_0() { return &___m_Owner_0; }
	inline void set_m_Owner_0(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_Owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Owner_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshaled_pinvoke
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Owner_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshaled_com
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Owner_0;
};

// UnityEngine.UIElements.VisualElementStyleSheetSet
struct  VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElementStyleSheetSet::m_Element
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Element_0;

public:
	inline static int32_t get_offset_of_m_Element_0() { return static_cast<int32_t>(offsetof(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB, ___m_Element_0)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_Element_0() const { return ___m_Element_0; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_Element_0() { return &___m_Element_0; }
	inline void set_m_Element_0(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_Element_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Element_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElementStyleSheetSet
struct VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshaled_pinvoke
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Element_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElementStyleSheetSet
struct VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshaled_com
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Element_0;
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


// UnityEngine.Vector2Int
struct  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3A0F7C863EF12A337B4A3561E9FCD70501ED6EEA  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3A0F7C863EF12A337B4A3561E9FCD70501ED6EEA_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D24 <PrivateImplementationDetails>::89A0099374A5746F12D728CDE3233EB874AA88EE
	__StaticArrayInitTypeSizeU3D24_t92833D61E0D5F181522F4A155C5BC85CACD0323B  ___89A0099374A5746F12D728CDE3233EB874AA88EE_0;

public:
	inline static int32_t get_offset_of_U389A0099374A5746F12D728CDE3233EB874AA88EE_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A0F7C863EF12A337B4A3561E9FCD70501ED6EEA_StaticFields, ___89A0099374A5746F12D728CDE3233EB874AA88EE_0)); }
	inline __StaticArrayInitTypeSizeU3D24_t92833D61E0D5F181522F4A155C5BC85CACD0323B  get_U389A0099374A5746F12D728CDE3233EB874AA88EE_0() const { return ___89A0099374A5746F12D728CDE3233EB874AA88EE_0; }
	inline __StaticArrayInitTypeSizeU3D24_t92833D61E0D5F181522F4A155C5BC85CACD0323B * get_address_of_U389A0099374A5746F12D728CDE3233EB874AA88EE_0() { return &___89A0099374A5746F12D728CDE3233EB874AA88EE_0; }
	inline void set_U389A0099374A5746F12D728CDE3233EB874AA88EE_0(__StaticArrayInitTypeSizeU3D24_t92833D61E0D5F181522F4A155C5BC85CACD0323B  value)
	{
		___89A0099374A5746F12D728CDE3233EB874AA88EE_0 = value;
	}
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


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
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


// Unity.UIElements.Runtime.NavigationMoveEvent_Direction
struct  Direction_t022D671F575BEAE90BEF6E62F01C001805304BC9 
{
public:
	// System.Int32 Unity.UIElements.Runtime.NavigationMoveEvent_Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t022D671F575BEAE90BEF6E62F01C001805304BC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.UIElements.Runtime.PanelScaler_ScaleMode
struct  ScaleMode_tFCA174CC93461B5C6CBCA997C51609CEB267812B 
{
public:
	// System.Int32 Unity.UIElements.Runtime.PanelScaler_ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_tFCA174CC93461B5C6CBCA997C51609CEB267812B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.UIElements.Runtime.PanelScaler_ScreenMatchMode
struct  ScreenMatchMode_t8D0BE1D62FF7469C85B141D50A3C4823DD3C1274 
{
public:
	// System.Int32 Unity.UIElements.Runtime.PanelScaler_ScreenMatchMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenMatchMode_t8D0BE1D62FF7469C85B141D50A3C4823DD3C1274, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Event
struct  Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_Current_1)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_MasterEvent_2)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventModifiers
struct  EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventType
struct  EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutOption_Type
struct  Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct  HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IMECompositionMode
struct  IMECompositionMode_t8755B1BD5D22F5DE23A46F79403A234844D7A5C8 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IMECompositionMode_t8755B1BD5D22F5DE23A46F79403A234844D7A5C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_tA0F8964A9E51797792B4FCD070B5501858BEFC33 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_tA0F8964A9E51797792B4FCD070B5501858BEFC33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Plane
struct  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Profiling.Sampler
struct  Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Profiling.Sampler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90_StaticFields
{
public:
	// UnityEngine.Profiling.Sampler UnityEngine.Profiling.Sampler::s_InvalidSampler
	Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 * ___s_InvalidSampler_1;

public:
	inline static int32_t get_offset_of_s_InvalidSampler_1() { return static_cast<int32_t>(offsetof(Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90_StaticFields, ___s_InvalidSampler_1)); }
	inline Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 * get_s_InvalidSampler_1() const { return ___s_InvalidSampler_1; }
	inline Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 ** get_address_of_s_InvalidSampler_1() { return &___s_InvalidSampler_1; }
	inline void set_s_InvalidSampler_1(Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 * value)
	{
		___s_InvalidSampler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InvalidSampler_1), (void*)value);
	}
};


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase_EventPropagation
struct  EventPropagation_t9A8C835BE25DB3F80F1A3B7C5A2D20319578DFB0 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase_EventPropagation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventPropagation_t9A8C835BE25DB3F80F1A3B7C5A2D20319578DFB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase_LifeCycleStatus
struct  LifeCycleStatus_t05EC3A0D5AE0E801FE6B611D51023B1F4D093B0F 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase_LifeCycleStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LifeCycleStatus_t05EC3A0D5AE0E801FE6B611D51023B1F4D093B0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.LengthUnit
struct  LengthUnit_tF4EF49F000B90EAF1A1DA38A5D6BC9034A0BF9C4 
{
public:
	// System.Int32 UnityEngine.UIElements.LengthUnit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LengthUnit_tF4EF49F000B90EAF1A1DA38A5D6BC9034A0BF9C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.Overflow
struct  Overflow_t13B0AE840409CDFBB591C719077012A66802AD45 
{
public:
	// System.Int32 UnityEngine.UIElements.Overflow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Overflow_t13B0AE840409CDFBB591C719077012A66802AD45, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PickingMode
struct  PickingMode_tE4A9E47537EE069E6D01FE5BA8B42C6A73C41552 
{
public:
	// System.Int32 UnityEngine.UIElements.PickingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PickingMode_tE4A9E47537EE069E6D01FE5BA8B42C6A73C41552, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PropagationPhase
struct  PropagationPhase_tDAF453F45C8A7EC36F0ADFDF89D406305FBFAFB8 
{
public:
	// System.Int32 UnityEngine.UIElements.PropagationPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropagationPhase_tDAF453F45C8A7EC36F0ADFDF89D406305FBFAFB8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PseudoStates
struct  PseudoStates_t70E0AFDE5E4631CF8D6DC61F4EFC2A897592520F 
{
public:
	// System.Int32 UnityEngine.UIElements.PseudoStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PseudoStates_t70E0AFDE5E4631CF8D6DC61F4EFC2A897592520F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.RenderHints
struct  RenderHints_t2229F1931CE245189511EF02048FF877499D8D75 
{
public:
	// System.Int32 UnityEngine.UIElements.RenderHints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderHints_t2229F1931CE245189511EF02048FF877499D8D75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct  StyleKeyword_t01A121DD5B4904AB0EA0BFA6E26159EE9AF8B303 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t01A121DD5B4904AB0EA0BFA6E26159EE9AF8B303, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.UIR.Implementation.ClipMethod
struct  ClipMethod_tA71C87935076956E9F6744172102E0169C36420F 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.Implementation.ClipMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipMethod_tA71C87935076956E9F6744172102E0169C36420F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.UIR.OwnedState
struct  OwnedState_t1FC94DD26D85FF79463838D776B1DA18B4448AFA 
{
public:
	// System.Byte UnityEngine.UIElements.UIR.OwnedState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnedState_t1FC94DD26D85FF79463838D776B1DA18B4448AFA, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.UIR.RenderDataDirtyTypes
struct  RenderDataDirtyTypes_t3BD972F0D361E9B29AFF785A9931216726A34BF6 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.RenderDataDirtyTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderDataDirtyTypes_t3BD972F0D361E9B29AFF785A9931216726A34BF6, ___value___2)); }
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


// Unity.UIElements.Runtime.PanelScaler_ScaleWithScreenSizeScaler
struct  ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A 
{
public:
	// UnityEngine.Vector2Int Unity.UIElements.Runtime.PanelScaler_ScaleWithScreenSizeScaler::referenceResolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___referenceResolution_0;
	// Unity.UIElements.Runtime.PanelScaler_ScreenMatchMode Unity.UIElements.Runtime.PanelScaler_ScaleWithScreenSizeScaler::screenMatchMode
	int32_t ___screenMatchMode_1;
	// System.Single Unity.UIElements.Runtime.PanelScaler_ScaleWithScreenSizeScaler::match
	float ___match_2;

public:
	inline static int32_t get_offset_of_referenceResolution_0() { return static_cast<int32_t>(offsetof(ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A, ___referenceResolution_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_referenceResolution_0() const { return ___referenceResolution_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_referenceResolution_0() { return &___referenceResolution_0; }
	inline void set_referenceResolution_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___referenceResolution_0 = value;
	}

	inline static int32_t get_offset_of_screenMatchMode_1() { return static_cast<int32_t>(offsetof(ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A, ___screenMatchMode_1)); }
	inline int32_t get_screenMatchMode_1() const { return ___screenMatchMode_1; }
	inline int32_t* get_address_of_screenMatchMode_1() { return &___screenMatchMode_1; }
	inline void set_screenMatchMode_1(int32_t value)
	{
		___screenMatchMode_1 = value;
	}

	inline static int32_t get_offset_of_match_2() { return static_cast<int32_t>(offsetof(ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A, ___match_2)); }
	inline float get_match_2() const { return ___match_2; }
	inline float* get_address_of_match_2() { return &___match_2; }
	inline void set_match_2(float value)
	{
		___match_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption_Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Profiling.CustomSampler
struct  CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24  : public Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90
{
public:

public:
};

struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_StaticFields
{
public:
	// UnityEngine.Profiling.CustomSampler UnityEngine.Profiling.CustomSampler::s_InvalidCustomSampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___s_InvalidCustomSampler_2;

public:
	inline static int32_t get_offset_of_s_InvalidCustomSampler_2() { return static_cast<int32_t>(offsetof(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_StaticFields, ___s_InvalidCustomSampler_2)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_s_InvalidCustomSampler_2() const { return ___s_InvalidCustomSampler_2; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_s_InvalidCustomSampler_2() { return &___s_InvalidCustomSampler_2; }
	inline void set_s_InvalidCustomSampler_2(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___s_InvalidCustomSampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InvalidCustomSampler_2), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Shader
struct  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.UIElements.EventBase
struct  EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase_EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 * ___m_Path_6;
	// UnityEngine.UIElements.EventBase_LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 * ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CoriginalMousePositionU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CtimestampU3Ek__BackingField_2)); }
	inline int64_t get_U3CtimestampU3Ek__BackingField_2() const { return ___U3CtimestampU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CtimestampU3Ek__BackingField_2() { return &___U3CtimestampU3Ek__BackingField_2; }
	inline void set_U3CtimestampU3Ek__BackingField_2(int64_t value)
	{
		___U3CtimestampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CeventIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CeventIdU3Ek__BackingField_3)); }
	inline uint64_t get_U3CeventIdU3Ek__BackingField_3() const { return ___U3CeventIdU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CeventIdU3Ek__BackingField_3() { return &___U3CeventIdU3Ek__BackingField_3; }
	inline void set_U3CeventIdU3Ek__BackingField_3(uint64_t value)
	{
		___U3CeventIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtriggerEventIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CtriggerEventIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CtriggerEventIdU3Ek__BackingField_4() const { return ___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CtriggerEventIdU3Ek__BackingField_4() { return &___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline void set_U3CtriggerEventIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CtriggerEventIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpropagationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CpropagationU3Ek__BackingField_5)); }
	inline int32_t get_U3CpropagationU3Ek__BackingField_5() const { return ___U3CpropagationU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CpropagationU3Ek__BackingField_5() { return &___U3CpropagationU3Ek__BackingField_5; }
	inline void set_U3CpropagationU3Ek__BackingField_5(int32_t value)
	{
		___U3CpropagationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Path_6() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_Path_6)); }
	inline PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 * get_m_Path_6() const { return ___m_Path_6; }
	inline PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 ** get_address_of_m_Path_6() { return &___m_Path_6; }
	inline void set_m_Path_6(PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 * value)
	{
		___m_Path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3ClifeCycleStatusU3Ek__BackingField_7)); }
	inline int32_t get_U3ClifeCycleStatusU3Ek__BackingField_7() const { return ___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return &___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline void set_U3ClifeCycleStatusU3Ek__BackingField_7(int32_t value)
	{
		___U3ClifeCycleStatusU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CleafTargetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CleafTargetU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CleafTargetU3Ek__BackingField_8() const { return ___U3CleafTargetU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CleafTargetU3Ek__BackingField_8() { return &___U3CleafTargetU3Ek__BackingField_8; }
	inline void set_U3CleafTargetU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CleafTargetU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleafTargetU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Target_9() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_Target_9)); }
	inline RuntimeObject* get_m_Target_9() const { return ___m_Target_9; }
	inline RuntimeObject** get_address_of_m_Target_9() { return &___m_Target_9; }
	inline void set_m_Target_9(RuntimeObject* value)
	{
		___m_Target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CskipElementsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CskipElementsU3Ek__BackingField_10)); }
	inline List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 * get_U3CskipElementsU3Ek__BackingField_10() const { return ___U3CskipElementsU3Ek__BackingField_10; }
	inline List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 ** get_address_of_U3CskipElementsU3Ek__BackingField_10() { return &___U3CskipElementsU3Ek__BackingField_10; }
	inline void set_U3CskipElementsU3Ek__BackingField_10(List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 * value)
	{
		___U3CskipElementsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CskipElementsU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropagationPhaseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CpropagationPhaseU3Ek__BackingField_11)); }
	inline int32_t get_U3CpropagationPhaseU3Ek__BackingField_11() const { return ___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpropagationPhaseU3Ek__BackingField_11() { return &___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline void set_U3CpropagationPhaseU3Ek__BackingField_11(int32_t value)
	{
		___U3CpropagationPhaseU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTarget_12() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_CurrentTarget_12)); }
	inline RuntimeObject* get_m_CurrentTarget_12() const { return ___m_CurrentTarget_12; }
	inline RuntimeObject** get_address_of_m_CurrentTarget_12() { return &___m_CurrentTarget_12; }
	inline void set_m_CurrentTarget_12(RuntimeObject* value)
	{
		___m_CurrentTarget_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentTarget_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImguiEvent_13() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_ImguiEvent_13)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ImguiEvent_13() const { return ___m_ImguiEvent_13; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ImguiEvent_13() { return &___m_ImguiEvent_13; }
	inline void set_m_ImguiEvent_13(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ImguiEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImguiEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CoriginalMousePositionU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CoriginalMousePositionU3Ek__BackingField_14() const { return ___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return &___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline void set_U3CoriginalMousePositionU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CoriginalMousePositionU3Ek__BackingField_14 = value;
	}
};

struct EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;

public:
	inline static int32_t get_offset_of_s_LastTypeId_0() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967_StaticFields, ___s_LastTypeId_0)); }
	inline int64_t get_s_LastTypeId_0() const { return ___s_LastTypeId_0; }
	inline int64_t* get_address_of_s_LastTypeId_0() { return &___s_LastTypeId_0; }
	inline void set_s_LastTypeId_0(int64_t value)
	{
		___s_LastTypeId_0 = value;
	}

	inline static int32_t get_offset_of_s_NextEventId_1() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967_StaticFields, ___s_NextEventId_1)); }
	inline uint64_t get_s_NextEventId_1() const { return ___s_NextEventId_1; }
	inline uint64_t* get_address_of_s_NextEventId_1() { return &___s_NextEventId_1; }
	inline void set_s_NextEventId_1(uint64_t value)
	{
		___s_NextEventId_1 = value;
	}
};


// UnityEngine.UIElements.Length
struct  Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 
{
public:
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_0;
	// UnityEngine.UIElements.LengthUnit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_1;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696, ___m_Value_0)); }
	inline float get_m_Value_0() const { return ___m_Value_0; }
	inline float* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(float value)
	{
		___m_Value_0 = value;
	}

	inline static int32_t get_offset_of_m_Unit_1() { return static_cast<int32_t>(offsetof(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696, ___m_Unit_1)); }
	inline int32_t get_m_Unit_1() const { return ___m_Unit_1; }
	inline int32_t* get_address_of_m_Unit_1() { return &___m_Unit_1; }
	inline void set_m_Unit_1(int32_t value)
	{
		___m_Unit_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct  StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow>
struct  StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.UIR.BMPAlloc
struct  BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;

public:
	inline static int32_t get_offset_of_page_1() { return static_cast<int32_t>(offsetof(BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8, ___page_1)); }
	inline int32_t get_page_1() const { return ___page_1; }
	inline int32_t* get_address_of_page_1() { return &___page_1; }
	inline void set_page_1(int32_t value)
	{
		___page_1 = value;
	}

	inline static int32_t get_offset_of_pageLine_2() { return static_cast<int32_t>(offsetof(BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8, ___pageLine_2)); }
	inline uint16_t get_pageLine_2() const { return ___pageLine_2; }
	inline uint16_t* get_address_of_pageLine_2() { return &___pageLine_2; }
	inline void set_pageLine_2(uint16_t value)
	{
		___pageLine_2 = value;
	}

	inline static int32_t get_offset_of_bitIndex_3() { return static_cast<int32_t>(offsetof(BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8, ___bitIndex_3)); }
	inline uint8_t get_bitIndex_3() const { return ___bitIndex_3; }
	inline uint8_t* get_address_of_bitIndex_3() { return &___bitIndex_3; }
	inline void set_bitIndex_3(uint8_t value)
	{
		___bitIndex_3 = value;
	}

	inline static int32_t get_offset_of_ownedState_4() { return static_cast<int32_t>(offsetof(BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8, ___ownedState_4)); }
	inline uint8_t get_ownedState_4() const { return ___ownedState_4; }
	inline uint8_t* get_address_of_ownedState_4() { return &___ownedState_4; }
	inline void set_ownedState_4(uint8_t value)
	{
		___ownedState_4 = value;
	}
};

struct BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8_StaticFields
{
public:
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  ___Invalid_0;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8_StaticFields, ___Invalid_0)); }
	inline BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  get_Invalid_0() const { return ___Invalid_0; }
	inline BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8 * get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  value)
	{
		___Invalid_0 = value;
	}
};


// System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>>
struct  Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2  : public MulticastDelegate_t
{
public:

public:
};


// Unity.UIElements.Runtime.PanelRenderer_PanelOwner
struct  PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.UIElements.EventBase`1<Unity.UIElements.Runtime.NavigationCancelEvent>
struct  EventBase_1_tD72A4479F322480E3F8949F194BB8A1A5299F179  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_tD72A4479F322480E3F8949F194BB8A1A5299F179, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_tD72A4479F322480E3F8949F194BB8A1A5299F179_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tC5D49BD91858BBEA7337440D7CD18B5EE644DAA9 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_tD72A4479F322480E3F8949F194BB8A1A5299F179_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_tD72A4479F322480E3F8949F194BB8A1A5299F179_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_tC5D49BD91858BBEA7337440D7CD18B5EE644DAA9 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_tC5D49BD91858BBEA7337440D7CD18B5EE644DAA9 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_tC5D49BD91858BBEA7337440D7CD18B5EE644DAA9 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<Unity.UIElements.Runtime.NavigationMoveEvent>
struct  EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t21FAC1CEA3FCBF21D9ED3954E5B9C85A731242C3 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t21FAC1CEA3FCBF21D9ED3954E5B9C85A731242C3 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t21FAC1CEA3FCBF21D9ED3954E5B9C85A731242C3 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t21FAC1CEA3FCBF21D9ED3954E5B9C85A731242C3 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<Unity.UIElements.Runtime.NavigationSubmitEvent>
struct  EventBase_1_t3E33D2CE9117EA09B981B3C3262D0B5D05262416  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t3E33D2CE9117EA09B981B3C3262D0B5D05262416, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t3E33D2CE9117EA09B981B3C3262D0B5D05262416_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t806842A22FD3D695B3306B2D262433ACE0535B61 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t3E33D2CE9117EA09B981B3C3262D0B5D05262416_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t3E33D2CE9117EA09B981B3C3262D0B5D05262416_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t806842A22FD3D695B3306B2D262433ACE0535B61 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t806842A22FD3D695B3306B2D262433ACE0535B61 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t806842A22FD3D695B3306B2D262433ACE0535B61 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.PointerCancelEvent>
struct  EventBase_1_tECC7E5059207C18111D6E40AA14AB1D20052C511  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_tECC7E5059207C18111D6E40AA14AB1D20052C511, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_tECC7E5059207C18111D6E40AA14AB1D20052C511_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t2970711D8843F3BA618CD18FD275852D9AD08DFF * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_tECC7E5059207C18111D6E40AA14AB1D20052C511_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_tECC7E5059207C18111D6E40AA14AB1D20052C511_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t2970711D8843F3BA618CD18FD275852D9AD08DFF * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t2970711D8843F3BA618CD18FD275852D9AD08DFF ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t2970711D8843F3BA618CD18FD275852D9AD08DFF * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.PointerDownEvent>
struct  EventBase_1_tB3366DB1DC8FD5A912EFEECB9447711AE0D91C9F  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_tB3366DB1DC8FD5A912EFEECB9447711AE0D91C9F, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_tB3366DB1DC8FD5A912EFEECB9447711AE0D91C9F_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t008FA497FB5A6C7ED27352D21573CA5B895E403F * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_tB3366DB1DC8FD5A912EFEECB9447711AE0D91C9F_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_tB3366DB1DC8FD5A912EFEECB9447711AE0D91C9F_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t008FA497FB5A6C7ED27352D21573CA5B895E403F * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t008FA497FB5A6C7ED27352D21573CA5B895E403F ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t008FA497FB5A6C7ED27352D21573CA5B895E403F * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.PointerMoveEvent>
struct  EventBase_1_t952C1AD910F230396DF7AFA0C9B6354AFA90BAB1  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t952C1AD910F230396DF7AFA0C9B6354AFA90BAB1, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t952C1AD910F230396DF7AFA0C9B6354AFA90BAB1_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t0AC910C3716928BC11AD8B4CA5AA6C184DFDB3A6 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t952C1AD910F230396DF7AFA0C9B6354AFA90BAB1_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t952C1AD910F230396DF7AFA0C9B6354AFA90BAB1_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t0AC910C3716928BC11AD8B4CA5AA6C184DFDB3A6 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t0AC910C3716928BC11AD8B4CA5AA6C184DFDB3A6 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t0AC910C3716928BC11AD8B4CA5AA6C184DFDB3A6 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.PointerStationaryEvent>
struct  EventBase_1_tE528B4BB683BE1E118B2F81BF844F56CE6C68DAE  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_tE528B4BB683BE1E118B2F81BF844F56CE6C68DAE, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_tE528B4BB683BE1E118B2F81BF844F56CE6C68DAE_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tC4F8D01CE45CD5ECD1442D3B75480C89C4CEAF3A * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_tE528B4BB683BE1E118B2F81BF844F56CE6C68DAE_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_tE528B4BB683BE1E118B2F81BF844F56CE6C68DAE_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_tC4F8D01CE45CD5ECD1442D3B75480C89C4CEAF3A * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_tC4F8D01CE45CD5ECD1442D3B75480C89C4CEAF3A ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_tC4F8D01CE45CD5ECD1442D3B75480C89C4CEAF3A * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.PointerUpEvent>
struct  EventBase_1_tAAD9DE5EBEB5A723E65F22C92E59551DEFE02683  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_tAAD9DE5EBEB5A723E65F22C92E59551DEFE02683, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_tAAD9DE5EBEB5A723E65F22C92E59551DEFE02683_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t6CF2EC0B1786D738EA6F897ED5A6A869F2C1D0CD * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_tAAD9DE5EBEB5A723E65F22C92E59551DEFE02683_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_tAAD9DE5EBEB5A723E65F22C92E59551DEFE02683_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t6CF2EC0B1786D738EA6F897ED5A6A869F2C1D0CD * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t6CF2EC0B1786D738EA6F897ED5A6A869F2C1D0CD ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t6CF2EC0B1786D738EA6F897ED5A6A869F2C1D0CD * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.StyleLength
struct  StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleLength::m_Keyword
	int32_t ___m_Keyword_0;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleLength::m_Value
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF, ___m_Value_1)); }
	inline Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  get_m_Value_1() const { return ___m_Value_1; }
	inline Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 * get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleSheet
struct  StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.UIElements.StyleRule[] UnityEngine.UIElements.StyleSheet::m_Rules
	StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C* ___m_Rules_4;
	// UnityEngine.UIElements.StyleComplexSelector[] UnityEngine.UIElements.StyleSheet::m_ComplexSelectors
	StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F* ___m_ComplexSelectors_5;
	// System.Single[] UnityEngine.UIElements.StyleSheet::floats
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___floats_6;
	// UnityEngine.UIElements.StyleSheets.Dimension[] UnityEngine.UIElements.StyleSheet::dimensions
	DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A* ___dimensions_7;
	// UnityEngine.Color[] UnityEngine.UIElements.StyleSheet::colors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors_8;
	// System.String[] UnityEngine.UIElements.StyleSheet::strings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___strings_9;
	// UnityEngine.Object[] UnityEngine.UIElements.StyleSheet::assets
	ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ___assets_10;
	// System.Int32 UnityEngine.UIElements.StyleSheet::m_ContentHash
	int32_t ___m_ContentHash_11;
	// UnityEngine.UIElements.StyleSheets.ScalableImage[] UnityEngine.UIElements.StyleSheet::scalableImages
	ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E* ___scalableImages_12;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedNameSelectors
	Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * ___orderedNameSelectors_13;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedTypeSelectors
	Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * ___orderedTypeSelectors_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedClassSelectors
	Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * ___orderedClassSelectors_15;
	// System.Boolean UnityEngine.UIElements.StyleSheet::isUnityStyleSheet
	bool ___isUnityStyleSheet_16;

public:
	inline static int32_t get_offset_of_m_Rules_4() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___m_Rules_4)); }
	inline StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C* get_m_Rules_4() const { return ___m_Rules_4; }
	inline StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C** get_address_of_m_Rules_4() { return &___m_Rules_4; }
	inline void set_m_Rules_4(StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C* value)
	{
		___m_Rules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComplexSelectors_5() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___m_ComplexSelectors_5)); }
	inline StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F* get_m_ComplexSelectors_5() const { return ___m_ComplexSelectors_5; }
	inline StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F** get_address_of_m_ComplexSelectors_5() { return &___m_ComplexSelectors_5; }
	inline void set_m_ComplexSelectors_5(StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F* value)
	{
		___m_ComplexSelectors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComplexSelectors_5), (void*)value);
	}

	inline static int32_t get_offset_of_floats_6() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___floats_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_floats_6() const { return ___floats_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_floats_6() { return &___floats_6; }
	inline void set_floats_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___floats_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floats_6), (void*)value);
	}

	inline static int32_t get_offset_of_dimensions_7() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___dimensions_7)); }
	inline DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A* get_dimensions_7() const { return ___dimensions_7; }
	inline DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A** get_address_of_dimensions_7() { return &___dimensions_7; }
	inline void set_dimensions_7(DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A* value)
	{
		___dimensions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dimensions_7), (void*)value);
	}

	inline static int32_t get_offset_of_colors_8() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___colors_8)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_colors_8() const { return ___colors_8; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_colors_8() { return &___colors_8; }
	inline void set_colors_8(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___colors_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_8), (void*)value);
	}

	inline static int32_t get_offset_of_strings_9() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___strings_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_strings_9() const { return ___strings_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_strings_9() { return &___strings_9; }
	inline void set_strings_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___strings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strings_9), (void*)value);
	}

	inline static int32_t get_offset_of_assets_10() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___assets_10)); }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* get_assets_10() const { return ___assets_10; }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873** get_address_of_assets_10() { return &___assets_10; }
	inline void set_assets_10(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* value)
	{
		___assets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assets_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentHash_11() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___m_ContentHash_11)); }
	inline int32_t get_m_ContentHash_11() const { return ___m_ContentHash_11; }
	inline int32_t* get_address_of_m_ContentHash_11() { return &___m_ContentHash_11; }
	inline void set_m_ContentHash_11(int32_t value)
	{
		___m_ContentHash_11 = value;
	}

	inline static int32_t get_offset_of_scalableImages_12() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___scalableImages_12)); }
	inline ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E* get_scalableImages_12() const { return ___scalableImages_12; }
	inline ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E** get_address_of_scalableImages_12() { return &___scalableImages_12; }
	inline void set_scalableImages_12(ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E* value)
	{
		___scalableImages_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scalableImages_12), (void*)value);
	}

	inline static int32_t get_offset_of_orderedNameSelectors_13() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___orderedNameSelectors_13)); }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * get_orderedNameSelectors_13() const { return ___orderedNameSelectors_13; }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 ** get_address_of_orderedNameSelectors_13() { return &___orderedNameSelectors_13; }
	inline void set_orderedNameSelectors_13(Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * value)
	{
		___orderedNameSelectors_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderedNameSelectors_13), (void*)value);
	}

	inline static int32_t get_offset_of_orderedTypeSelectors_14() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___orderedTypeSelectors_14)); }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * get_orderedTypeSelectors_14() const { return ___orderedTypeSelectors_14; }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 ** get_address_of_orderedTypeSelectors_14() { return &___orderedTypeSelectors_14; }
	inline void set_orderedTypeSelectors_14(Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * value)
	{
		___orderedTypeSelectors_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderedTypeSelectors_14), (void*)value);
	}

	inline static int32_t get_offset_of_orderedClassSelectors_15() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___orderedClassSelectors_15)); }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * get_orderedClassSelectors_15() const { return ___orderedClassSelectors_15; }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 ** get_address_of_orderedClassSelectors_15() { return &___orderedClassSelectors_15; }
	inline void set_orderedClassSelectors_15(Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * value)
	{
		___orderedClassSelectors_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderedClassSelectors_15), (void*)value);
	}

	inline static int32_t get_offset_of_isUnityStyleSheet_16() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___isUnityStyleSheet_16)); }
	inline bool get_isUnityStyleSheet_16() const { return ___isUnityStyleSheet_16; }
	inline bool* get_address_of_isUnityStyleSheet_16() { return &___isUnityStyleSheet_16; }
	inline void set_isUnityStyleSheet_16(bool value)
	{
		___isUnityStyleSheet_16 = value;
	}
};

struct StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F_StaticFields
{
public:
	// System.String UnityEngine.UIElements.StyleSheet::kCustomPropertyMarker
	String_t* ___kCustomPropertyMarker_17;

public:
	inline static int32_t get_offset_of_kCustomPropertyMarker_17() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F_StaticFields, ___kCustomPropertyMarker_17)); }
	inline String_t* get_kCustomPropertyMarker_17() const { return ___kCustomPropertyMarker_17; }
	inline String_t** get_address_of_kCustomPropertyMarker_17() { return &___kCustomPropertyMarker_17; }
	inline void set_kCustomPropertyMarker_17(String_t* value)
	{
		___kCustomPropertyMarker_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kCustomPropertyMarker_17), (void*)value);
	}
};


// UnityEngine.UIElements.UIR.RenderChainVEData
struct  RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___firstCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___lastCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___firstClosingCommand_12;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___lastClosingCommand_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isStencilClipped
	bool ___isStencilClipped_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_16;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesAtlas
	bool ___usesAtlas_17;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_18;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_19;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED * ___data_20;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED * ___closingData_21;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___verticesSpace_22;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_23;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_24;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  ___transformID_25;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  ___clipRectID_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  ___opacityID_27;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_28;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___prevText_29;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___nextText_30;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t5D9124F36ADC50D7FBCB5390DA772BDB26966C45 * ___textEntries_31;

public:
	inline static int32_t get_offset_of_prev_0() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___prev_0)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_prev_0() const { return ___prev_0; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_prev_0() { return &___prev_0; }
	inline void set_prev_0(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___prev_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___next_1)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_next_1() const { return ___next_1; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}

	inline static int32_t get_offset_of_groupTransformAncestor_2() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___groupTransformAncestor_2)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_groupTransformAncestor_2() const { return ___groupTransformAncestor_2; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_groupTransformAncestor_2() { return &___groupTransformAncestor_2; }
	inline void set_groupTransformAncestor_2(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___groupTransformAncestor_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groupTransformAncestor_2), (void*)value);
	}

	inline static int32_t get_offset_of_boneTransformAncestor_3() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___boneTransformAncestor_3)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_boneTransformAncestor_3() const { return ___boneTransformAncestor_3; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_boneTransformAncestor_3() { return &___boneTransformAncestor_3; }
	inline void set_boneTransformAncestor_3(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___boneTransformAncestor_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boneTransformAncestor_3), (void*)value);
	}

	inline static int32_t get_offset_of_prevDirty_4() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___prevDirty_4)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_prevDirty_4() const { return ___prevDirty_4; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_prevDirty_4() { return &___prevDirty_4; }
	inline void set_prevDirty_4(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___prevDirty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevDirty_4), (void*)value);
	}

	inline static int32_t get_offset_of_nextDirty_5() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___nextDirty_5)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_nextDirty_5() const { return ___nextDirty_5; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_nextDirty_5() { return &___nextDirty_5; }
	inline void set_nextDirty_5(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___nextDirty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextDirty_5), (void*)value);
	}

	inline static int32_t get_offset_of_hierarchyDepth_6() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___hierarchyDepth_6)); }
	inline int32_t get_hierarchyDepth_6() const { return ___hierarchyDepth_6; }
	inline int32_t* get_address_of_hierarchyDepth_6() { return &___hierarchyDepth_6; }
	inline void set_hierarchyDepth_6(int32_t value)
	{
		___hierarchyDepth_6 = value;
	}

	inline static int32_t get_offset_of_dirtiedValues_7() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___dirtiedValues_7)); }
	inline int32_t get_dirtiedValues_7() const { return ___dirtiedValues_7; }
	inline int32_t* get_address_of_dirtiedValues_7() { return &___dirtiedValues_7; }
	inline void set_dirtiedValues_7(int32_t value)
	{
		___dirtiedValues_7 = value;
	}

	inline static int32_t get_offset_of_dirtyID_8() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___dirtyID_8)); }
	inline uint32_t get_dirtyID_8() const { return ___dirtyID_8; }
	inline uint32_t* get_address_of_dirtyID_8() { return &___dirtyID_8; }
	inline void set_dirtyID_8(uint32_t value)
	{
		___dirtyID_8 = value;
	}

	inline static int32_t get_offset_of_clipMethod_9() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___clipMethod_9)); }
	inline int32_t get_clipMethod_9() const { return ___clipMethod_9; }
	inline int32_t* get_address_of_clipMethod_9() { return &___clipMethod_9; }
	inline void set_clipMethod_9(int32_t value)
	{
		___clipMethod_9 = value;
	}

	inline static int32_t get_offset_of_firstCommand_10() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___firstCommand_10)); }
	inline RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * get_firstCommand_10() const { return ___firstCommand_10; }
	inline RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 ** get_address_of_firstCommand_10() { return &___firstCommand_10; }
	inline void set_firstCommand_10(RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * value)
	{
		___firstCommand_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstCommand_10), (void*)value);
	}

	inline static int32_t get_offset_of_lastCommand_11() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___lastCommand_11)); }
	inline RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * get_lastCommand_11() const { return ___lastCommand_11; }
	inline RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 ** get_address_of_lastCommand_11() { return &___lastCommand_11; }
	inline void set_lastCommand_11(RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * value)
	{
		___lastCommand_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastCommand_11), (void*)value);
	}

	inline static int32_t get_offset_of_firstClosingCommand_12() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___firstClosingCommand_12)); }
	inline RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * get_firstClosingCommand_12() const { return ___firstClosingCommand_12; }
	inline RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 ** get_address_of_firstClosingCommand_12() { return &___firstClosingCommand_12; }
	inline void set_firstClosingCommand_12(RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * value)
	{
		___firstClosingCommand_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstClosingCommand_12), (void*)value);
	}

	inline static int32_t get_offset_of_lastClosingCommand_13() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___lastClosingCommand_13)); }
	inline RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * get_lastClosingCommand_13() const { return ___lastClosingCommand_13; }
	inline RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 ** get_address_of_lastClosingCommand_13() { return &___lastClosingCommand_13; }
	inline void set_lastClosingCommand_13(RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * value)
	{
		___lastClosingCommand_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastClosingCommand_13), (void*)value);
	}

	inline static int32_t get_offset_of_isInChain_14() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___isInChain_14)); }
	inline bool get_isInChain_14() const { return ___isInChain_14; }
	inline bool* get_address_of_isInChain_14() { return &___isInChain_14; }
	inline void set_isInChain_14(bool value)
	{
		___isInChain_14 = value;
	}

	inline static int32_t get_offset_of_isStencilClipped_15() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___isStencilClipped_15)); }
	inline bool get_isStencilClipped_15() const { return ___isStencilClipped_15; }
	inline bool* get_address_of_isStencilClipped_15() { return &___isStencilClipped_15; }
	inline void set_isStencilClipped_15(bool value)
	{
		___isStencilClipped_15 = value;
	}

	inline static int32_t get_offset_of_isHierarchyHidden_16() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___isHierarchyHidden_16)); }
	inline bool get_isHierarchyHidden_16() const { return ___isHierarchyHidden_16; }
	inline bool* get_address_of_isHierarchyHidden_16() { return &___isHierarchyHidden_16; }
	inline void set_isHierarchyHidden_16(bool value)
	{
		___isHierarchyHidden_16 = value;
	}

	inline static int32_t get_offset_of_usesAtlas_17() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___usesAtlas_17)); }
	inline bool get_usesAtlas_17() const { return ___usesAtlas_17; }
	inline bool* get_address_of_usesAtlas_17() { return &___usesAtlas_17; }
	inline void set_usesAtlas_17(bool value)
	{
		___usesAtlas_17 = value;
	}

	inline static int32_t get_offset_of_disableNudging_18() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___disableNudging_18)); }
	inline bool get_disableNudging_18() const { return ___disableNudging_18; }
	inline bool* get_address_of_disableNudging_18() { return &___disableNudging_18; }
	inline void set_disableNudging_18(bool value)
	{
		___disableNudging_18 = value;
	}

	inline static int32_t get_offset_of_usesLegacyText_19() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___usesLegacyText_19)); }
	inline bool get_usesLegacyText_19() const { return ___usesLegacyText_19; }
	inline bool* get_address_of_usesLegacyText_19() { return &___usesLegacyText_19; }
	inline void set_usesLegacyText_19(bool value)
	{
		___usesLegacyText_19 = value;
	}

	inline static int32_t get_offset_of_data_20() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___data_20)); }
	inline MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED * get_data_20() const { return ___data_20; }
	inline MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED ** get_address_of_data_20() { return &___data_20; }
	inline void set_data_20(MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED * value)
	{
		___data_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_20), (void*)value);
	}

	inline static int32_t get_offset_of_closingData_21() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___closingData_21)); }
	inline MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED * get_closingData_21() const { return ___closingData_21; }
	inline MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED ** get_address_of_closingData_21() { return &___closingData_21; }
	inline void set_closingData_21(MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED * value)
	{
		___closingData_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closingData_21), (void*)value);
	}

	inline static int32_t get_offset_of_verticesSpace_22() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___verticesSpace_22)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_verticesSpace_22() const { return ___verticesSpace_22; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_verticesSpace_22() { return &___verticesSpace_22; }
	inline void set_verticesSpace_22(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___verticesSpace_22 = value;
	}

	inline static int32_t get_offset_of_displacementUVStart_23() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___displacementUVStart_23)); }
	inline int32_t get_displacementUVStart_23() const { return ___displacementUVStart_23; }
	inline int32_t* get_address_of_displacementUVStart_23() { return &___displacementUVStart_23; }
	inline void set_displacementUVStart_23(int32_t value)
	{
		___displacementUVStart_23 = value;
	}

	inline static int32_t get_offset_of_displacementUVEnd_24() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___displacementUVEnd_24)); }
	inline int32_t get_displacementUVEnd_24() const { return ___displacementUVEnd_24; }
	inline int32_t* get_address_of_displacementUVEnd_24() { return &___displacementUVEnd_24; }
	inline void set_displacementUVEnd_24(int32_t value)
	{
		___displacementUVEnd_24 = value;
	}

	inline static int32_t get_offset_of_transformID_25() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___transformID_25)); }
	inline BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  get_transformID_25() const { return ___transformID_25; }
	inline BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8 * get_address_of_transformID_25() { return &___transformID_25; }
	inline void set_transformID_25(BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  value)
	{
		___transformID_25 = value;
	}

	inline static int32_t get_offset_of_clipRectID_26() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___clipRectID_26)); }
	inline BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  get_clipRectID_26() const { return ___clipRectID_26; }
	inline BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8 * get_address_of_clipRectID_26() { return &___clipRectID_26; }
	inline void set_clipRectID_26(BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  value)
	{
		___clipRectID_26 = value;
	}

	inline static int32_t get_offset_of_opacityID_27() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___opacityID_27)); }
	inline BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  get_opacityID_27() const { return ___opacityID_27; }
	inline BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8 * get_address_of_opacityID_27() { return &___opacityID_27; }
	inline void set_opacityID_27(BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  value)
	{
		___opacityID_27 = value;
	}

	inline static int32_t get_offset_of_compositeOpacity_28() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___compositeOpacity_28)); }
	inline float get_compositeOpacity_28() const { return ___compositeOpacity_28; }
	inline float* get_address_of_compositeOpacity_28() { return &___compositeOpacity_28; }
	inline void set_compositeOpacity_28(float value)
	{
		___compositeOpacity_28 = value;
	}

	inline static int32_t get_offset_of_prevText_29() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___prevText_29)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_prevText_29() const { return ___prevText_29; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_prevText_29() { return &___prevText_29; }
	inline void set_prevText_29(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___prevText_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevText_29), (void*)value);
	}

	inline static int32_t get_offset_of_nextText_30() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___nextText_30)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_nextText_30() const { return ___nextText_30; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_nextText_30() { return &___nextText_30; }
	inline void set_nextText_30(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___nextText_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextText_30), (void*)value);
	}

	inline static int32_t get_offset_of_textEntries_31() { return static_cast<int32_t>(offsetof(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1, ___textEntries_31)); }
	inline List_1_t5D9124F36ADC50D7FBCB5390DA772BDB26966C45 * get_textEntries_31() const { return ___textEntries_31; }
	inline List_1_t5D9124F36ADC50D7FBCB5390DA772BDB26966C45 ** get_address_of_textEntries_31() { return &___textEntries_31; }
	inline void set_textEntries_31(List_1_t5D9124F36ADC50D7FBCB5390DA772BDB26966C45 * value)
	{
		___textEntries_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textEntries_31), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1_marshaled_pinvoke
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___prev_0;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___next_1;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___groupTransformAncestor_2;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___boneTransformAncestor_3;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___prevDirty_4;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	int32_t ___clipMethod_9;
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___firstCommand_10;
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___lastCommand_11;
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___firstClosingCommand_12;
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___lastClosingCommand_13;
	int32_t ___isInChain_14;
	int32_t ___isStencilClipped_15;
	int32_t ___isHierarchyHidden_16;
	int32_t ___usesAtlas_17;
	int32_t ___disableNudging_18;
	int32_t ___usesLegacyText_19;
	MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED * ___data_20;
	MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED * ___closingData_21;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___verticesSpace_22;
	int32_t ___displacementUVStart_23;
	int32_t ___displacementUVEnd_24;
	BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  ___transformID_25;
	BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  ___clipRectID_26;
	BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  ___opacityID_27;
	float ___compositeOpacity_28;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___prevText_29;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___nextText_30;
	List_1_t5D9124F36ADC50D7FBCB5390DA772BDB26966C45 * ___textEntries_31;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1_marshaled_com
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___prev_0;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___next_1;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___groupTransformAncestor_2;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___boneTransformAncestor_3;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___prevDirty_4;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	int32_t ___clipMethod_9;
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___firstCommand_10;
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___lastCommand_11;
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___firstClosingCommand_12;
	RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1 * ___lastClosingCommand_13;
	int32_t ___isInChain_14;
	int32_t ___isStencilClipped_15;
	int32_t ___isHierarchyHidden_16;
	int32_t ___usesAtlas_17;
	int32_t ___disableNudging_18;
	int32_t ___usesLegacyText_19;
	MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED * ___data_20;
	MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED * ___closingData_21;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___verticesSpace_22;
	int32_t ___displacementUVStart_23;
	int32_t ___displacementUVEnd_24;
	BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  ___transformID_25;
	BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  ___clipRectID_26;
	BMPAlloc_t2329D0F6C80ACB6A485F2EC900E52171ED651FA8  ___opacityID_27;
	float ___compositeOpacity_28;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___prevText_29;
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___nextText_30;
	List_1_t5D9124F36ADC50D7FBCB5390DA772BDB26966C45 * ___textEntries_31;
};

// UnityEngine.UIElements.VisualTreeAsset
struct  VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset_UsingEntry> UnityEngine.UIElements.VisualTreeAsset::m_Usings
	List_1_tBAC0AF6F8B367BBA8A9DC316B12FA9E863C72BF0 * ___m_Usings_5;
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.VisualTreeAsset::inlineSheet
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___inlineSheet_6;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementAsset> UnityEngine.UIElements.VisualTreeAsset::m_VisualElementAssets
	List_1_tC1B59BA76E76895A80433B017153237CD73A70DF * ___m_VisualElementAssets_7;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset> UnityEngine.UIElements.VisualTreeAsset::m_TemplateAssets
	List_1_t7271728A3B465793D693B51F9BB84572F502B89B * ___m_TemplateAssets_8;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset_SlotDefinition> UnityEngine.UIElements.VisualTreeAsset::m_Slots
	List_1_t3CB0238CE1A3B7A1421CCF75C059A941921D0C1D * ___m_Slots_9;
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset::m_ContentContainerId
	int32_t ___m_ContentContainerId_10;
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset::m_ContentHash
	int32_t ___m_ContentHash_11;

public:
	inline static int32_t get_offset_of_m_Usings_5() { return static_cast<int32_t>(offsetof(VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF, ___m_Usings_5)); }
	inline List_1_tBAC0AF6F8B367BBA8A9DC316B12FA9E863C72BF0 * get_m_Usings_5() const { return ___m_Usings_5; }
	inline List_1_tBAC0AF6F8B367BBA8A9DC316B12FA9E863C72BF0 ** get_address_of_m_Usings_5() { return &___m_Usings_5; }
	inline void set_m_Usings_5(List_1_tBAC0AF6F8B367BBA8A9DC316B12FA9E863C72BF0 * value)
	{
		___m_Usings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Usings_5), (void*)value);
	}

	inline static int32_t get_offset_of_inlineSheet_6() { return static_cast<int32_t>(offsetof(VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF, ___inlineSheet_6)); }
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * get_inlineSheet_6() const { return ___inlineSheet_6; }
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F ** get_address_of_inlineSheet_6() { return &___inlineSheet_6; }
	inline void set_inlineSheet_6(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * value)
	{
		___inlineSheet_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inlineSheet_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_VisualElementAssets_7() { return static_cast<int32_t>(offsetof(VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF, ___m_VisualElementAssets_7)); }
	inline List_1_tC1B59BA76E76895A80433B017153237CD73A70DF * get_m_VisualElementAssets_7() const { return ___m_VisualElementAssets_7; }
	inline List_1_tC1B59BA76E76895A80433B017153237CD73A70DF ** get_address_of_m_VisualElementAssets_7() { return &___m_VisualElementAssets_7; }
	inline void set_m_VisualElementAssets_7(List_1_tC1B59BA76E76895A80433B017153237CD73A70DF * value)
	{
		___m_VisualElementAssets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VisualElementAssets_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TemplateAssets_8() { return static_cast<int32_t>(offsetof(VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF, ___m_TemplateAssets_8)); }
	inline List_1_t7271728A3B465793D693B51F9BB84572F502B89B * get_m_TemplateAssets_8() const { return ___m_TemplateAssets_8; }
	inline List_1_t7271728A3B465793D693B51F9BB84572F502B89B ** get_address_of_m_TemplateAssets_8() { return &___m_TemplateAssets_8; }
	inline void set_m_TemplateAssets_8(List_1_t7271728A3B465793D693B51F9BB84572F502B89B * value)
	{
		___m_TemplateAssets_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TemplateAssets_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Slots_9() { return static_cast<int32_t>(offsetof(VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF, ___m_Slots_9)); }
	inline List_1_t3CB0238CE1A3B7A1421CCF75C059A941921D0C1D * get_m_Slots_9() const { return ___m_Slots_9; }
	inline List_1_t3CB0238CE1A3B7A1421CCF75C059A941921D0C1D ** get_address_of_m_Slots_9() { return &___m_Slots_9; }
	inline void set_m_Slots_9(List_1_t3CB0238CE1A3B7A1421CCF75C059A941921D0C1D * value)
	{
		___m_Slots_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Slots_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentContainerId_10() { return static_cast<int32_t>(offsetof(VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF, ___m_ContentContainerId_10)); }
	inline int32_t get_m_ContentContainerId_10() const { return ___m_ContentContainerId_10; }
	inline int32_t* get_address_of_m_ContentContainerId_10() { return &___m_ContentContainerId_10; }
	inline void set_m_ContentContainerId_10(int32_t value)
	{
		___m_ContentContainerId_10 = value;
	}

	inline static int32_t get_offset_of_m_ContentHash_11() { return static_cast<int32_t>(offsetof(VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF, ___m_ContentHash_11)); }
	inline int32_t get_m_ContentHash_11() const { return ___m_ContentHash_11; }
	inline int32_t* get_address_of_m_ContentHash_11() { return &___m_ContentHash_11; }
	inline void set_m_ContentHash_11(int32_t value)
	{
		___m_ContentHash_11 = value;
	}
};

struct VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeAsset::s_TemporarySlotInsertionPoints
	Dictionary_2_t34DB4E0D28CB7603D84FB2DF8D2823291BB35710 * ___s_TemporarySlotInsertionPoints_4;

public:
	inline static int32_t get_offset_of_s_TemporarySlotInsertionPoints_4() { return static_cast<int32_t>(offsetof(VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF_StaticFields, ___s_TemporarySlotInsertionPoints_4)); }
	inline Dictionary_2_t34DB4E0D28CB7603D84FB2DF8D2823291BB35710 * get_s_TemporarySlotInsertionPoints_4() const { return ___s_TemporarySlotInsertionPoints_4; }
	inline Dictionary_2_t34DB4E0D28CB7603D84FB2DF8D2823291BB35710 ** get_address_of_s_TemporarySlotInsertionPoints_4() { return &___s_TemporarySlotInsertionPoints_4; }
	inline void set_s_TemporarySlotInsertionPoints_4(Dictionary_2_t34DB4E0D28CB7603D84FB2DF8D2823291BB35710 * value)
	{
		___s_TemporarySlotInsertionPoints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TemporarySlotInsertionPoints_4), (void*)value);
	}
};


// Unity.UIElements.Runtime.NavigationEventBase`1<Unity.UIElements.Runtime.NavigationCancelEvent>
struct  NavigationEventBase_1_t9128BCF1AF775B7FEC84E9706AAC15CE1DD2A8B1  : public EventBase_1_tD72A4479F322480E3F8949F194BB8A1A5299F179
{
public:

public:
};


// Unity.UIElements.Runtime.NavigationEventBase`1<Unity.UIElements.Runtime.NavigationMoveEvent>
struct  NavigationEventBase_1_t8C9C2C3285DE7F4E6052012C12AFD3EB224F2BB9  : public EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC
{
public:

public:
};


// Unity.UIElements.Runtime.NavigationEventBase`1<Unity.UIElements.Runtime.NavigationSubmitEvent>
struct  NavigationEventBase_1_tC64CED1575E64DE8180504EF8041919CDC810013  : public EventBase_1_t3E33D2CE9117EA09B981B3C3262D0B5D05262416
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.UIElements.PointerEventBase`1<UnityEngine.UIElements.PointerCancelEvent>
struct  PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622  : public EventBase_1_tECC7E5059207C18111D6E40AA14AB1D20052C511
{
public:
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_18;
	// System.String UnityEngine.UIElements.PointerEventBase`1::<pointerType>k__BackingField
	String_t* ___U3CpointerTypeU3Ek__BackingField_19;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<isPrimary>k__BackingField
	bool ___U3CisPrimaryU3Ek__BackingField_20;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_22;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_23;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<localPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3ClocalPositionU3Ek__BackingField_24;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<deltaPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CdeltaPositionU3Ek__BackingField_25;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<deltaTime>k__BackingField
	float ___U3CdeltaTimeU3Ek__BackingField_26;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_27;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_28;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_29;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_30;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_31;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_32;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radius>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusU3Ek__BackingField_33;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radiusVariance>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusVarianceU3Ek__BackingField_34;
	// UnityEngine.EventModifiers UnityEngine.UIElements.PointerEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37;

public:
	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CpointerIdU3Ek__BackingField_18)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_18() const { return ___U3CpointerIdU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_18() { return &___U3CpointerIdU3Ek__BackingField_18; }
	inline void set_U3CpointerIdU3Ek__BackingField_18(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CpointerTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CpointerTypeU3Ek__BackingField_19)); }
	inline String_t* get_U3CpointerTypeU3Ek__BackingField_19() const { return ___U3CpointerTypeU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CpointerTypeU3Ek__BackingField_19() { return &___U3CpointerTypeU3Ek__BackingField_19; }
	inline void set_U3CpointerTypeU3Ek__BackingField_19(String_t* value)
	{
		___U3CpointerTypeU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerTypeU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisPrimaryU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CisPrimaryU3Ek__BackingField_20)); }
	inline bool get_U3CisPrimaryU3Ek__BackingField_20() const { return ___U3CisPrimaryU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CisPrimaryU3Ek__BackingField_20() { return &___U3CisPrimaryU3Ek__BackingField_20; }
	inline void set_U3CisPrimaryU3Ek__BackingField_20(bool value)
	{
		___U3CisPrimaryU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CbuttonU3Ek__BackingField_21)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_21() const { return ___U3CbuttonU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_21() { return &___U3CbuttonU3Ek__BackingField_21; }
	inline void set_U3CbuttonU3Ek__BackingField_21(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CpressedButtonsU3Ek__BackingField_22)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_22() const { return ___U3CpressedButtonsU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_22() { return &___U3CpressedButtonsU3Ek__BackingField_22; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_22(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CpositionU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3Ek__BackingField_23() const { return ___U3CpositionU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3Ek__BackingField_23() { return &___U3CpositionU3Ek__BackingField_23; }
	inline void set_U3CpositionU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPositionU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3ClocalPositionU3Ek__BackingField_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3ClocalPositionU3Ek__BackingField_24() const { return ___U3ClocalPositionU3Ek__BackingField_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3ClocalPositionU3Ek__BackingField_24() { return &___U3ClocalPositionU3Ek__BackingField_24; }
	inline void set_U3ClocalPositionU3Ek__BackingField_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3ClocalPositionU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaPositionU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CdeltaPositionU3Ek__BackingField_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CdeltaPositionU3Ek__BackingField_25() const { return ___U3CdeltaPositionU3Ek__BackingField_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CdeltaPositionU3Ek__BackingField_25() { return &___U3CdeltaPositionU3Ek__BackingField_25; }
	inline void set_U3CdeltaPositionU3Ek__BackingField_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CdeltaPositionU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaTimeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CdeltaTimeU3Ek__BackingField_26)); }
	inline float get_U3CdeltaTimeU3Ek__BackingField_26() const { return ___U3CdeltaTimeU3Ek__BackingField_26; }
	inline float* get_address_of_U3CdeltaTimeU3Ek__BackingField_26() { return &___U3CdeltaTimeU3Ek__BackingField_26; }
	inline void set_U3CdeltaTimeU3Ek__BackingField_26(float value)
	{
		___U3CdeltaTimeU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CclickCountU3Ek__BackingField_27)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_27() const { return ___U3CclickCountU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_27() { return &___U3CclickCountU3Ek__BackingField_27; }
	inline void set_U3CclickCountU3Ek__BackingField_27(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CpressureU3Ek__BackingField_28)); }
	inline float get_U3CpressureU3Ek__BackingField_28() const { return ___U3CpressureU3Ek__BackingField_28; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_28() { return &___U3CpressureU3Ek__BackingField_28; }
	inline void set_U3CpressureU3Ek__BackingField_28(float value)
	{
		___U3CpressureU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CtangentialPressureU3Ek__BackingField_29)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_29() const { return ___U3CtangentialPressureU3Ek__BackingField_29; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_29() { return &___U3CtangentialPressureU3Ek__BackingField_29; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_29(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CaltitudeAngleU3Ek__BackingField_30)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_30() const { return ___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_30() { return &___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_30(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CazimuthAngleU3Ek__BackingField_31)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_31() const { return ___U3CazimuthAngleU3Ek__BackingField_31; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_31() { return &___U3CazimuthAngleU3Ek__BackingField_31; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_31(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CtwistU3Ek__BackingField_32)); }
	inline float get_U3CtwistU3Ek__BackingField_32() const { return ___U3CtwistU3Ek__BackingField_32; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_32() { return &___U3CtwistU3Ek__BackingField_32; }
	inline void set_U3CtwistU3Ek__BackingField_32(float value)
	{
		___U3CtwistU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CradiusU3Ek__BackingField_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusU3Ek__BackingField_33() const { return ___U3CradiusU3Ek__BackingField_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusU3Ek__BackingField_33() { return &___U3CradiusU3Ek__BackingField_33; }
	inline void set_U3CradiusU3Ek__BackingField_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CradiusVarianceU3Ek__BackingField_34)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusVarianceU3Ek__BackingField_34() const { return ___U3CradiusVarianceU3Ek__BackingField_34; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusVarianceU3Ek__BackingField_34() { return &___U3CradiusVarianceU3Ek__BackingField_34; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_34(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CmodifiersU3Ek__BackingField_35)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_35() const { return ___U3CmodifiersU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_35() { return &___U3CmodifiersU3Ek__BackingField_35; }
	inline void set_U3CmodifiersU3Ek__BackingField_35(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622, ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37 = value;
	}
};


// UnityEngine.UIElements.PointerEventBase`1<UnityEngine.UIElements.PointerDownEvent>
struct  PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA  : public EventBase_1_tB3366DB1DC8FD5A912EFEECB9447711AE0D91C9F
{
public:
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_18;
	// System.String UnityEngine.UIElements.PointerEventBase`1::<pointerType>k__BackingField
	String_t* ___U3CpointerTypeU3Ek__BackingField_19;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<isPrimary>k__BackingField
	bool ___U3CisPrimaryU3Ek__BackingField_20;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_22;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_23;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<localPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3ClocalPositionU3Ek__BackingField_24;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<deltaPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CdeltaPositionU3Ek__BackingField_25;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<deltaTime>k__BackingField
	float ___U3CdeltaTimeU3Ek__BackingField_26;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_27;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_28;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_29;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_30;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_31;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_32;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radius>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusU3Ek__BackingField_33;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radiusVariance>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusVarianceU3Ek__BackingField_34;
	// UnityEngine.EventModifiers UnityEngine.UIElements.PointerEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37;

public:
	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CpointerIdU3Ek__BackingField_18)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_18() const { return ___U3CpointerIdU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_18() { return &___U3CpointerIdU3Ek__BackingField_18; }
	inline void set_U3CpointerIdU3Ek__BackingField_18(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CpointerTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CpointerTypeU3Ek__BackingField_19)); }
	inline String_t* get_U3CpointerTypeU3Ek__BackingField_19() const { return ___U3CpointerTypeU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CpointerTypeU3Ek__BackingField_19() { return &___U3CpointerTypeU3Ek__BackingField_19; }
	inline void set_U3CpointerTypeU3Ek__BackingField_19(String_t* value)
	{
		___U3CpointerTypeU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerTypeU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisPrimaryU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CisPrimaryU3Ek__BackingField_20)); }
	inline bool get_U3CisPrimaryU3Ek__BackingField_20() const { return ___U3CisPrimaryU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CisPrimaryU3Ek__BackingField_20() { return &___U3CisPrimaryU3Ek__BackingField_20; }
	inline void set_U3CisPrimaryU3Ek__BackingField_20(bool value)
	{
		___U3CisPrimaryU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CbuttonU3Ek__BackingField_21)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_21() const { return ___U3CbuttonU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_21() { return &___U3CbuttonU3Ek__BackingField_21; }
	inline void set_U3CbuttonU3Ek__BackingField_21(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CpressedButtonsU3Ek__BackingField_22)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_22() const { return ___U3CpressedButtonsU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_22() { return &___U3CpressedButtonsU3Ek__BackingField_22; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_22(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CpositionU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3Ek__BackingField_23() const { return ___U3CpositionU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3Ek__BackingField_23() { return &___U3CpositionU3Ek__BackingField_23; }
	inline void set_U3CpositionU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPositionU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3ClocalPositionU3Ek__BackingField_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3ClocalPositionU3Ek__BackingField_24() const { return ___U3ClocalPositionU3Ek__BackingField_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3ClocalPositionU3Ek__BackingField_24() { return &___U3ClocalPositionU3Ek__BackingField_24; }
	inline void set_U3ClocalPositionU3Ek__BackingField_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3ClocalPositionU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaPositionU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CdeltaPositionU3Ek__BackingField_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CdeltaPositionU3Ek__BackingField_25() const { return ___U3CdeltaPositionU3Ek__BackingField_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CdeltaPositionU3Ek__BackingField_25() { return &___U3CdeltaPositionU3Ek__BackingField_25; }
	inline void set_U3CdeltaPositionU3Ek__BackingField_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CdeltaPositionU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaTimeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CdeltaTimeU3Ek__BackingField_26)); }
	inline float get_U3CdeltaTimeU3Ek__BackingField_26() const { return ___U3CdeltaTimeU3Ek__BackingField_26; }
	inline float* get_address_of_U3CdeltaTimeU3Ek__BackingField_26() { return &___U3CdeltaTimeU3Ek__BackingField_26; }
	inline void set_U3CdeltaTimeU3Ek__BackingField_26(float value)
	{
		___U3CdeltaTimeU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CclickCountU3Ek__BackingField_27)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_27() const { return ___U3CclickCountU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_27() { return &___U3CclickCountU3Ek__BackingField_27; }
	inline void set_U3CclickCountU3Ek__BackingField_27(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CpressureU3Ek__BackingField_28)); }
	inline float get_U3CpressureU3Ek__BackingField_28() const { return ___U3CpressureU3Ek__BackingField_28; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_28() { return &___U3CpressureU3Ek__BackingField_28; }
	inline void set_U3CpressureU3Ek__BackingField_28(float value)
	{
		___U3CpressureU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CtangentialPressureU3Ek__BackingField_29)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_29() const { return ___U3CtangentialPressureU3Ek__BackingField_29; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_29() { return &___U3CtangentialPressureU3Ek__BackingField_29; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_29(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CaltitudeAngleU3Ek__BackingField_30)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_30() const { return ___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_30() { return &___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_30(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CazimuthAngleU3Ek__BackingField_31)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_31() const { return ___U3CazimuthAngleU3Ek__BackingField_31; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_31() { return &___U3CazimuthAngleU3Ek__BackingField_31; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_31(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CtwistU3Ek__BackingField_32)); }
	inline float get_U3CtwistU3Ek__BackingField_32() const { return ___U3CtwistU3Ek__BackingField_32; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_32() { return &___U3CtwistU3Ek__BackingField_32; }
	inline void set_U3CtwistU3Ek__BackingField_32(float value)
	{
		___U3CtwistU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CradiusU3Ek__BackingField_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusU3Ek__BackingField_33() const { return ___U3CradiusU3Ek__BackingField_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusU3Ek__BackingField_33() { return &___U3CradiusU3Ek__BackingField_33; }
	inline void set_U3CradiusU3Ek__BackingField_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CradiusVarianceU3Ek__BackingField_34)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusVarianceU3Ek__BackingField_34() const { return ___U3CradiusVarianceU3Ek__BackingField_34; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusVarianceU3Ek__BackingField_34() { return &___U3CradiusVarianceU3Ek__BackingField_34; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_34(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CmodifiersU3Ek__BackingField_35)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_35() const { return ___U3CmodifiersU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_35() { return &___U3CmodifiersU3Ek__BackingField_35; }
	inline void set_U3CmodifiersU3Ek__BackingField_35(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA, ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37 = value;
	}
};


// UnityEngine.UIElements.PointerEventBase`1<UnityEngine.UIElements.PointerMoveEvent>
struct  PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8  : public EventBase_1_t952C1AD910F230396DF7AFA0C9B6354AFA90BAB1
{
public:
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_18;
	// System.String UnityEngine.UIElements.PointerEventBase`1::<pointerType>k__BackingField
	String_t* ___U3CpointerTypeU3Ek__BackingField_19;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<isPrimary>k__BackingField
	bool ___U3CisPrimaryU3Ek__BackingField_20;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_22;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_23;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<localPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3ClocalPositionU3Ek__BackingField_24;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<deltaPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CdeltaPositionU3Ek__BackingField_25;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<deltaTime>k__BackingField
	float ___U3CdeltaTimeU3Ek__BackingField_26;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_27;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_28;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_29;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_30;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_31;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_32;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radius>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusU3Ek__BackingField_33;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radiusVariance>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusVarianceU3Ek__BackingField_34;
	// UnityEngine.EventModifiers UnityEngine.UIElements.PointerEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37;

public:
	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CpointerIdU3Ek__BackingField_18)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_18() const { return ___U3CpointerIdU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_18() { return &___U3CpointerIdU3Ek__BackingField_18; }
	inline void set_U3CpointerIdU3Ek__BackingField_18(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CpointerTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CpointerTypeU3Ek__BackingField_19)); }
	inline String_t* get_U3CpointerTypeU3Ek__BackingField_19() const { return ___U3CpointerTypeU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CpointerTypeU3Ek__BackingField_19() { return &___U3CpointerTypeU3Ek__BackingField_19; }
	inline void set_U3CpointerTypeU3Ek__BackingField_19(String_t* value)
	{
		___U3CpointerTypeU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerTypeU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisPrimaryU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CisPrimaryU3Ek__BackingField_20)); }
	inline bool get_U3CisPrimaryU3Ek__BackingField_20() const { return ___U3CisPrimaryU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CisPrimaryU3Ek__BackingField_20() { return &___U3CisPrimaryU3Ek__BackingField_20; }
	inline void set_U3CisPrimaryU3Ek__BackingField_20(bool value)
	{
		___U3CisPrimaryU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CbuttonU3Ek__BackingField_21)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_21() const { return ___U3CbuttonU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_21() { return &___U3CbuttonU3Ek__BackingField_21; }
	inline void set_U3CbuttonU3Ek__BackingField_21(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CpressedButtonsU3Ek__BackingField_22)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_22() const { return ___U3CpressedButtonsU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_22() { return &___U3CpressedButtonsU3Ek__BackingField_22; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_22(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CpositionU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3Ek__BackingField_23() const { return ___U3CpositionU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3Ek__BackingField_23() { return &___U3CpositionU3Ek__BackingField_23; }
	inline void set_U3CpositionU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPositionU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3ClocalPositionU3Ek__BackingField_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3ClocalPositionU3Ek__BackingField_24() const { return ___U3ClocalPositionU3Ek__BackingField_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3ClocalPositionU3Ek__BackingField_24() { return &___U3ClocalPositionU3Ek__BackingField_24; }
	inline void set_U3ClocalPositionU3Ek__BackingField_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3ClocalPositionU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaPositionU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CdeltaPositionU3Ek__BackingField_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CdeltaPositionU3Ek__BackingField_25() const { return ___U3CdeltaPositionU3Ek__BackingField_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CdeltaPositionU3Ek__BackingField_25() { return &___U3CdeltaPositionU3Ek__BackingField_25; }
	inline void set_U3CdeltaPositionU3Ek__BackingField_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CdeltaPositionU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaTimeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CdeltaTimeU3Ek__BackingField_26)); }
	inline float get_U3CdeltaTimeU3Ek__BackingField_26() const { return ___U3CdeltaTimeU3Ek__BackingField_26; }
	inline float* get_address_of_U3CdeltaTimeU3Ek__BackingField_26() { return &___U3CdeltaTimeU3Ek__BackingField_26; }
	inline void set_U3CdeltaTimeU3Ek__BackingField_26(float value)
	{
		___U3CdeltaTimeU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CclickCountU3Ek__BackingField_27)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_27() const { return ___U3CclickCountU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_27() { return &___U3CclickCountU3Ek__BackingField_27; }
	inline void set_U3CclickCountU3Ek__BackingField_27(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CpressureU3Ek__BackingField_28)); }
	inline float get_U3CpressureU3Ek__BackingField_28() const { return ___U3CpressureU3Ek__BackingField_28; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_28() { return &___U3CpressureU3Ek__BackingField_28; }
	inline void set_U3CpressureU3Ek__BackingField_28(float value)
	{
		___U3CpressureU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CtangentialPressureU3Ek__BackingField_29)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_29() const { return ___U3CtangentialPressureU3Ek__BackingField_29; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_29() { return &___U3CtangentialPressureU3Ek__BackingField_29; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_29(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CaltitudeAngleU3Ek__BackingField_30)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_30() const { return ___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_30() { return &___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_30(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CazimuthAngleU3Ek__BackingField_31)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_31() const { return ___U3CazimuthAngleU3Ek__BackingField_31; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_31() { return &___U3CazimuthAngleU3Ek__BackingField_31; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_31(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CtwistU3Ek__BackingField_32)); }
	inline float get_U3CtwistU3Ek__BackingField_32() const { return ___U3CtwistU3Ek__BackingField_32; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_32() { return &___U3CtwistU3Ek__BackingField_32; }
	inline void set_U3CtwistU3Ek__BackingField_32(float value)
	{
		___U3CtwistU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CradiusU3Ek__BackingField_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusU3Ek__BackingField_33() const { return ___U3CradiusU3Ek__BackingField_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusU3Ek__BackingField_33() { return &___U3CradiusU3Ek__BackingField_33; }
	inline void set_U3CradiusU3Ek__BackingField_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CradiusVarianceU3Ek__BackingField_34)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusVarianceU3Ek__BackingField_34() const { return ___U3CradiusVarianceU3Ek__BackingField_34; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusVarianceU3Ek__BackingField_34() { return &___U3CradiusVarianceU3Ek__BackingField_34; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_34(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CmodifiersU3Ek__BackingField_35)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_35() const { return ___U3CmodifiersU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_35() { return &___U3CmodifiersU3Ek__BackingField_35; }
	inline void set_U3CmodifiersU3Ek__BackingField_35(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8, ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37 = value;
	}
};


// UnityEngine.UIElements.PointerEventBase`1<UnityEngine.UIElements.PointerStationaryEvent>
struct  PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57  : public EventBase_1_tE528B4BB683BE1E118B2F81BF844F56CE6C68DAE
{
public:
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_18;
	// System.String UnityEngine.UIElements.PointerEventBase`1::<pointerType>k__BackingField
	String_t* ___U3CpointerTypeU3Ek__BackingField_19;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<isPrimary>k__BackingField
	bool ___U3CisPrimaryU3Ek__BackingField_20;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_22;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_23;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<localPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3ClocalPositionU3Ek__BackingField_24;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<deltaPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CdeltaPositionU3Ek__BackingField_25;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<deltaTime>k__BackingField
	float ___U3CdeltaTimeU3Ek__BackingField_26;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_27;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_28;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_29;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_30;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_31;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_32;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radius>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusU3Ek__BackingField_33;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radiusVariance>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusVarianceU3Ek__BackingField_34;
	// UnityEngine.EventModifiers UnityEngine.UIElements.PointerEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37;

public:
	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CpointerIdU3Ek__BackingField_18)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_18() const { return ___U3CpointerIdU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_18() { return &___U3CpointerIdU3Ek__BackingField_18; }
	inline void set_U3CpointerIdU3Ek__BackingField_18(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CpointerTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CpointerTypeU3Ek__BackingField_19)); }
	inline String_t* get_U3CpointerTypeU3Ek__BackingField_19() const { return ___U3CpointerTypeU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CpointerTypeU3Ek__BackingField_19() { return &___U3CpointerTypeU3Ek__BackingField_19; }
	inline void set_U3CpointerTypeU3Ek__BackingField_19(String_t* value)
	{
		___U3CpointerTypeU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerTypeU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisPrimaryU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CisPrimaryU3Ek__BackingField_20)); }
	inline bool get_U3CisPrimaryU3Ek__BackingField_20() const { return ___U3CisPrimaryU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CisPrimaryU3Ek__BackingField_20() { return &___U3CisPrimaryU3Ek__BackingField_20; }
	inline void set_U3CisPrimaryU3Ek__BackingField_20(bool value)
	{
		___U3CisPrimaryU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CbuttonU3Ek__BackingField_21)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_21() const { return ___U3CbuttonU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_21() { return &___U3CbuttonU3Ek__BackingField_21; }
	inline void set_U3CbuttonU3Ek__BackingField_21(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CpressedButtonsU3Ek__BackingField_22)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_22() const { return ___U3CpressedButtonsU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_22() { return &___U3CpressedButtonsU3Ek__BackingField_22; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_22(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CpositionU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3Ek__BackingField_23() const { return ___U3CpositionU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3Ek__BackingField_23() { return &___U3CpositionU3Ek__BackingField_23; }
	inline void set_U3CpositionU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPositionU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3ClocalPositionU3Ek__BackingField_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3ClocalPositionU3Ek__BackingField_24() const { return ___U3ClocalPositionU3Ek__BackingField_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3ClocalPositionU3Ek__BackingField_24() { return &___U3ClocalPositionU3Ek__BackingField_24; }
	inline void set_U3ClocalPositionU3Ek__BackingField_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3ClocalPositionU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaPositionU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CdeltaPositionU3Ek__BackingField_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CdeltaPositionU3Ek__BackingField_25() const { return ___U3CdeltaPositionU3Ek__BackingField_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CdeltaPositionU3Ek__BackingField_25() { return &___U3CdeltaPositionU3Ek__BackingField_25; }
	inline void set_U3CdeltaPositionU3Ek__BackingField_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CdeltaPositionU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaTimeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CdeltaTimeU3Ek__BackingField_26)); }
	inline float get_U3CdeltaTimeU3Ek__BackingField_26() const { return ___U3CdeltaTimeU3Ek__BackingField_26; }
	inline float* get_address_of_U3CdeltaTimeU3Ek__BackingField_26() { return &___U3CdeltaTimeU3Ek__BackingField_26; }
	inline void set_U3CdeltaTimeU3Ek__BackingField_26(float value)
	{
		___U3CdeltaTimeU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CclickCountU3Ek__BackingField_27)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_27() const { return ___U3CclickCountU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_27() { return &___U3CclickCountU3Ek__BackingField_27; }
	inline void set_U3CclickCountU3Ek__BackingField_27(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CpressureU3Ek__BackingField_28)); }
	inline float get_U3CpressureU3Ek__BackingField_28() const { return ___U3CpressureU3Ek__BackingField_28; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_28() { return &___U3CpressureU3Ek__BackingField_28; }
	inline void set_U3CpressureU3Ek__BackingField_28(float value)
	{
		___U3CpressureU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CtangentialPressureU3Ek__BackingField_29)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_29() const { return ___U3CtangentialPressureU3Ek__BackingField_29; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_29() { return &___U3CtangentialPressureU3Ek__BackingField_29; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_29(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CaltitudeAngleU3Ek__BackingField_30)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_30() const { return ___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_30() { return &___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_30(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CazimuthAngleU3Ek__BackingField_31)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_31() const { return ___U3CazimuthAngleU3Ek__BackingField_31; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_31() { return &___U3CazimuthAngleU3Ek__BackingField_31; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_31(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CtwistU3Ek__BackingField_32)); }
	inline float get_U3CtwistU3Ek__BackingField_32() const { return ___U3CtwistU3Ek__BackingField_32; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_32() { return &___U3CtwistU3Ek__BackingField_32; }
	inline void set_U3CtwistU3Ek__BackingField_32(float value)
	{
		___U3CtwistU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CradiusU3Ek__BackingField_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusU3Ek__BackingField_33() const { return ___U3CradiusU3Ek__BackingField_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusU3Ek__BackingField_33() { return &___U3CradiusU3Ek__BackingField_33; }
	inline void set_U3CradiusU3Ek__BackingField_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CradiusVarianceU3Ek__BackingField_34)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusVarianceU3Ek__BackingField_34() const { return ___U3CradiusVarianceU3Ek__BackingField_34; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusVarianceU3Ek__BackingField_34() { return &___U3CradiusVarianceU3Ek__BackingField_34; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_34(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CmodifiersU3Ek__BackingField_35)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_35() const { return ___U3CmodifiersU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_35() { return &___U3CmodifiersU3Ek__BackingField_35; }
	inline void set_U3CmodifiersU3Ek__BackingField_35(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57, ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37 = value;
	}
};


// UnityEngine.UIElements.PointerEventBase`1<UnityEngine.UIElements.PointerUpEvent>
struct  PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851  : public EventBase_1_tAAD9DE5EBEB5A723E65F22C92E59551DEFE02683
{
public:
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_18;
	// System.String UnityEngine.UIElements.PointerEventBase`1::<pointerType>k__BackingField
	String_t* ___U3CpointerTypeU3Ek__BackingField_19;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<isPrimary>k__BackingField
	bool ___U3CisPrimaryU3Ek__BackingField_20;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_22;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_23;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<localPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3ClocalPositionU3Ek__BackingField_24;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<deltaPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CdeltaPositionU3Ek__BackingField_25;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<deltaTime>k__BackingField
	float ___U3CdeltaTimeU3Ek__BackingField_26;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_27;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_28;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_29;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_30;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_31;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_32;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radius>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusU3Ek__BackingField_33;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radiusVariance>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusVarianceU3Ek__BackingField_34;
	// UnityEngine.EventModifiers UnityEngine.UIElements.PointerEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37;

public:
	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CpointerIdU3Ek__BackingField_18)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_18() const { return ___U3CpointerIdU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_18() { return &___U3CpointerIdU3Ek__BackingField_18; }
	inline void set_U3CpointerIdU3Ek__BackingField_18(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CpointerTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CpointerTypeU3Ek__BackingField_19)); }
	inline String_t* get_U3CpointerTypeU3Ek__BackingField_19() const { return ___U3CpointerTypeU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CpointerTypeU3Ek__BackingField_19() { return &___U3CpointerTypeU3Ek__BackingField_19; }
	inline void set_U3CpointerTypeU3Ek__BackingField_19(String_t* value)
	{
		___U3CpointerTypeU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerTypeU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisPrimaryU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CisPrimaryU3Ek__BackingField_20)); }
	inline bool get_U3CisPrimaryU3Ek__BackingField_20() const { return ___U3CisPrimaryU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CisPrimaryU3Ek__BackingField_20() { return &___U3CisPrimaryU3Ek__BackingField_20; }
	inline void set_U3CisPrimaryU3Ek__BackingField_20(bool value)
	{
		___U3CisPrimaryU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CbuttonU3Ek__BackingField_21)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_21() const { return ___U3CbuttonU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_21() { return &___U3CbuttonU3Ek__BackingField_21; }
	inline void set_U3CbuttonU3Ek__BackingField_21(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CpressedButtonsU3Ek__BackingField_22)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_22() const { return ___U3CpressedButtonsU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_22() { return &___U3CpressedButtonsU3Ek__BackingField_22; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_22(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CpositionU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3Ek__BackingField_23() const { return ___U3CpositionU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3Ek__BackingField_23() { return &___U3CpositionU3Ek__BackingField_23; }
	inline void set_U3CpositionU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPositionU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3ClocalPositionU3Ek__BackingField_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3ClocalPositionU3Ek__BackingField_24() const { return ___U3ClocalPositionU3Ek__BackingField_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3ClocalPositionU3Ek__BackingField_24() { return &___U3ClocalPositionU3Ek__BackingField_24; }
	inline void set_U3ClocalPositionU3Ek__BackingField_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3ClocalPositionU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaPositionU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CdeltaPositionU3Ek__BackingField_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CdeltaPositionU3Ek__BackingField_25() const { return ___U3CdeltaPositionU3Ek__BackingField_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CdeltaPositionU3Ek__BackingField_25() { return &___U3CdeltaPositionU3Ek__BackingField_25; }
	inline void set_U3CdeltaPositionU3Ek__BackingField_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CdeltaPositionU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaTimeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CdeltaTimeU3Ek__BackingField_26)); }
	inline float get_U3CdeltaTimeU3Ek__BackingField_26() const { return ___U3CdeltaTimeU3Ek__BackingField_26; }
	inline float* get_address_of_U3CdeltaTimeU3Ek__BackingField_26() { return &___U3CdeltaTimeU3Ek__BackingField_26; }
	inline void set_U3CdeltaTimeU3Ek__BackingField_26(float value)
	{
		___U3CdeltaTimeU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CclickCountU3Ek__BackingField_27)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_27() const { return ___U3CclickCountU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_27() { return &___U3CclickCountU3Ek__BackingField_27; }
	inline void set_U3CclickCountU3Ek__BackingField_27(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CpressureU3Ek__BackingField_28)); }
	inline float get_U3CpressureU3Ek__BackingField_28() const { return ___U3CpressureU3Ek__BackingField_28; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_28() { return &___U3CpressureU3Ek__BackingField_28; }
	inline void set_U3CpressureU3Ek__BackingField_28(float value)
	{
		___U3CpressureU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CtangentialPressureU3Ek__BackingField_29)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_29() const { return ___U3CtangentialPressureU3Ek__BackingField_29; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_29() { return &___U3CtangentialPressureU3Ek__BackingField_29; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_29(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CaltitudeAngleU3Ek__BackingField_30)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_30() const { return ___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_30() { return &___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_30(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CazimuthAngleU3Ek__BackingField_31)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_31() const { return ___U3CazimuthAngleU3Ek__BackingField_31; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_31() { return &___U3CazimuthAngleU3Ek__BackingField_31; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_31(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CtwistU3Ek__BackingField_32)); }
	inline float get_U3CtwistU3Ek__BackingField_32() const { return ___U3CtwistU3Ek__BackingField_32; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_32() { return &___U3CtwistU3Ek__BackingField_32; }
	inline void set_U3CtwistU3Ek__BackingField_32(float value)
	{
		___U3CtwistU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CradiusU3Ek__BackingField_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusU3Ek__BackingField_33() const { return ___U3CradiusU3Ek__BackingField_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusU3Ek__BackingField_33() { return &___U3CradiusU3Ek__BackingField_33; }
	inline void set_U3CradiusU3Ek__BackingField_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CradiusVarianceU3Ek__BackingField_34)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusVarianceU3Ek__BackingField_34() const { return ___U3CradiusVarianceU3Ek__BackingField_34; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusVarianceU3Ek__BackingField_34() { return &___U3CradiusVarianceU3Ek__BackingField_34; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_34(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CmodifiersU3Ek__BackingField_35)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_35() const { return ___U3CmodifiersU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_35() { return &___U3CmodifiersU3Ek__BackingField_35; }
	inline void set_U3CmodifiersU3Ek__BackingField_35(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851, ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37 = value;
	}
};


// UnityEngine.UIElements.VisualElement
struct  VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0  : public Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14
{
public:
	// System.Boolean UnityEngine.UIElements.VisualElement::<isCompositeRoot>k__BackingField
	bool ___U3CisCompositeRootU3Ek__BackingField_6;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_11;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_ClassList_12;
	// System.String UnityEngine.UIElements.VisualElement::m_TypeName
	String_t* ___m_TypeName_13;
	// System.String UnityEngine.UIElements.VisualElement::m_FullTypeName
	String_t* ___m_FullTypeName_14;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC * ___m_PropertyBag_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enableViewDataPersistence>k__BackingField
	bool ___U3CenableViewDataPersistenceU3Ek__BackingField_17;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lastLayout_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1  ___renderChainData_20;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_21;
	// UnityEngine.Quaternion UnityEngine.UIElements.VisualElement::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_22;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale_23;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isLayoutManual>k__BackingField
	bool ___U3CisLayoutManualU3Ek__BackingField_24;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_Layout_25;
	// System.Boolean UnityEngine.UIElements.VisualElement::isBoundingBoxDirty
	bool ___isBoundingBoxDirty_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_BoundingBox_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::isWorldBoundingBoxDirty
	bool ___isWorldBoundingBoxDirty_28;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_WorldBoundingBox_29;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldTransformDirty>k__BackingField
	bool ___U3CisWorldTransformDirtyU3Ek__BackingField_30;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldTransformInverseDirty>k__BackingField
	bool ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_31;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_WorldTransformCache_32;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_WorldTransformInverseCache_33;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldClipDirty>k__BackingField
	bool ___U3CisWorldClipDirtyU3Ek__BackingField_34;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_WorldClip_35;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_WorldClipMinusGroup_36;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_38;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_39;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_40;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_41;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___U3CyogaNodeU3Ek__BackingField_42;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_SharedStyle
	ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * ___m_SharedStyle_43;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * ___m_Style_44;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE * ___variableContext_45;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_46;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_47;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_48;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_49;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t4B5D11A4BFD62938CB8E23BE6080E1802E80C757 * ___U3CgenerateVisualContentU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_RequireMeasureFunction
	bool ___m_RequireMeasureFunction_51;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * ___m_RunningAnimations_52;
	// UnityEngine.UIElements.VisualElement_Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  ___U3ChierarchyU3Ek__BackingField_53;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_54;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_PhysicalParent_55;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_LogicalParent_56;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * ___m_Children_58;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * ___U3CelementPanelU3Ek__BackingField_59;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57 * ___inlineStyleAccess_60;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * ___styleSheetList_61;

public:
	inline static int32_t get_offset_of_U3CisCompositeRootU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CisCompositeRootU3Ek__BackingField_6)); }
	inline bool get_U3CisCompositeRootU3Ek__BackingField_6() const { return ___U3CisCompositeRootU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisCompositeRootU3Ek__BackingField_6() { return &___U3CisCompositeRootU3Ek__BackingField_6; }
	inline void set_U3CisCompositeRootU3Ek__BackingField_6(bool value)
	{
		___U3CisCompositeRootU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_Name_11() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Name_11)); }
	inline String_t* get_m_Name_11() const { return ___m_Name_11; }
	inline String_t** get_address_of_m_Name_11() { return &___m_Name_11; }
	inline void set_m_Name_11(String_t* value)
	{
		___m_Name_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClassList_12() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_ClassList_12)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_ClassList_12() const { return ___m_ClassList_12; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_ClassList_12() { return &___m_ClassList_12; }
	inline void set_m_ClassList_12(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_ClassList_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClassList_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeName_13() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_TypeName_13)); }
	inline String_t* get_m_TypeName_13() const { return ___m_TypeName_13; }
	inline String_t** get_address_of_m_TypeName_13() { return &___m_TypeName_13; }
	inline void set_m_TypeName_13(String_t* value)
	{
		___m_TypeName_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeName_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_FullTypeName_14() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_FullTypeName_14)); }
	inline String_t* get_m_FullTypeName_14() const { return ___m_FullTypeName_14; }
	inline String_t** get_address_of_m_FullTypeName_14() { return &___m_FullTypeName_14; }
	inline void set_m_FullTypeName_14(String_t* value)
	{
		___m_FullTypeName_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FullTypeName_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyBag_15() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_PropertyBag_15)); }
	inline List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC * get_m_PropertyBag_15() const { return ___m_PropertyBag_15; }
	inline List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC ** get_address_of_m_PropertyBag_15() { return &___m_PropertyBag_15; }
	inline void set_m_PropertyBag_15(List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC * value)
	{
		___m_PropertyBag_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyBag_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_ViewDataKey_16() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_ViewDataKey_16)); }
	inline String_t* get_m_ViewDataKey_16() const { return ___m_ViewDataKey_16; }
	inline String_t** get_address_of_m_ViewDataKey_16() { return &___m_ViewDataKey_16; }
	inline void set_m_ViewDataKey_16(String_t* value)
	{
		___m_ViewDataKey_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ViewDataKey_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CenableViewDataPersistenceU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CenableViewDataPersistenceU3Ek__BackingField_17)); }
	inline bool get_U3CenableViewDataPersistenceU3Ek__BackingField_17() const { return ___U3CenableViewDataPersistenceU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CenableViewDataPersistenceU3Ek__BackingField_17() { return &___U3CenableViewDataPersistenceU3Ek__BackingField_17; }
	inline void set_U3CenableViewDataPersistenceU3Ek__BackingField_17(bool value)
	{
		___U3CenableViewDataPersistenceU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_RenderHints_18() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_RenderHints_18)); }
	inline int32_t get_m_RenderHints_18() const { return ___m_RenderHints_18; }
	inline int32_t* get_address_of_m_RenderHints_18() { return &___m_RenderHints_18; }
	inline void set_m_RenderHints_18(int32_t value)
	{
		___m_RenderHints_18 = value;
	}

	inline static int32_t get_offset_of_lastLayout_19() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___lastLayout_19)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_lastLayout_19() const { return ___lastLayout_19; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_lastLayout_19() { return &___lastLayout_19; }
	inline void set_lastLayout_19(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___lastLayout_19 = value;
	}

	inline static int32_t get_offset_of_renderChainData_20() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___renderChainData_20)); }
	inline RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1  get_renderChainData_20() const { return ___renderChainData_20; }
	inline RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1 * get_address_of_renderChainData_20() { return &___renderChainData_20; }
	inline void set_renderChainData_20(RenderChainVEData_t656B15476E05EB7869DD55CC758974CE2A8FD8D1  value)
	{
		___renderChainData_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___prev_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___next_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___groupTransformAncestor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___boneTransformAncestor_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___prevDirty_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___nextDirty_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___firstCommand_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___lastCommand_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___firstClosingCommand_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___lastClosingCommand_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___data_20), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___closingData_21), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___prevText_29), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___nextText_30), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_20))->___textEntries_31), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Position_21() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Position_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_21() const { return ___m_Position_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_21() { return &___m_Position_21; }
	inline void set_m_Position_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_21 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_22() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Rotation_22)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_22() const { return ___m_Rotation_22; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_22() { return &___m_Rotation_22; }
	inline void set_m_Rotation_22(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_22 = value;
	}

	inline static int32_t get_offset_of_m_Scale_23() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Scale_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale_23() const { return ___m_Scale_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale_23() { return &___m_Scale_23; }
	inline void set_m_Scale_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale_23 = value;
	}

	inline static int32_t get_offset_of_U3CisLayoutManualU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CisLayoutManualU3Ek__BackingField_24)); }
	inline bool get_U3CisLayoutManualU3Ek__BackingField_24() const { return ___U3CisLayoutManualU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CisLayoutManualU3Ek__BackingField_24() { return &___U3CisLayoutManualU3Ek__BackingField_24; }
	inline void set_U3CisLayoutManualU3Ek__BackingField_24(bool value)
	{
		___U3CisLayoutManualU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_m_Layout_25() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Layout_25)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_Layout_25() const { return ___m_Layout_25; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_Layout_25() { return &___m_Layout_25; }
	inline void set_m_Layout_25(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_Layout_25 = value;
	}

	inline static int32_t get_offset_of_isBoundingBoxDirty_26() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___isBoundingBoxDirty_26)); }
	inline bool get_isBoundingBoxDirty_26() const { return ___isBoundingBoxDirty_26; }
	inline bool* get_address_of_isBoundingBoxDirty_26() { return &___isBoundingBoxDirty_26; }
	inline void set_isBoundingBoxDirty_26(bool value)
	{
		___isBoundingBoxDirty_26 = value;
	}

	inline static int32_t get_offset_of_m_BoundingBox_27() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_BoundingBox_27)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_BoundingBox_27() const { return ___m_BoundingBox_27; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_BoundingBox_27() { return &___m_BoundingBox_27; }
	inline void set_m_BoundingBox_27(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_BoundingBox_27 = value;
	}

	inline static int32_t get_offset_of_isWorldBoundingBoxDirty_28() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___isWorldBoundingBoxDirty_28)); }
	inline bool get_isWorldBoundingBoxDirty_28() const { return ___isWorldBoundingBoxDirty_28; }
	inline bool* get_address_of_isWorldBoundingBoxDirty_28() { return &___isWorldBoundingBoxDirty_28; }
	inline void set_isWorldBoundingBoxDirty_28(bool value)
	{
		___isWorldBoundingBoxDirty_28 = value;
	}

	inline static int32_t get_offset_of_m_WorldBoundingBox_29() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_WorldBoundingBox_29)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_WorldBoundingBox_29() const { return ___m_WorldBoundingBox_29; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_WorldBoundingBox_29() { return &___m_WorldBoundingBox_29; }
	inline void set_m_WorldBoundingBox_29(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_WorldBoundingBox_29 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldTransformDirtyU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CisWorldTransformDirtyU3Ek__BackingField_30)); }
	inline bool get_U3CisWorldTransformDirtyU3Ek__BackingField_30() const { return ___U3CisWorldTransformDirtyU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisWorldTransformDirtyU3Ek__BackingField_30() { return &___U3CisWorldTransformDirtyU3Ek__BackingField_30; }
	inline void set_U3CisWorldTransformDirtyU3Ek__BackingField_30(bool value)
	{
		___U3CisWorldTransformDirtyU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldTransformInverseDirtyU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_31)); }
	inline bool get_U3CisWorldTransformInverseDirtyU3Ek__BackingField_31() const { return ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CisWorldTransformInverseDirtyU3Ek__BackingField_31() { return &___U3CisWorldTransformInverseDirtyU3Ek__BackingField_31; }
	inline void set_U3CisWorldTransformInverseDirtyU3Ek__BackingField_31(bool value)
	{
		___U3CisWorldTransformInverseDirtyU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformCache_32() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_WorldTransformCache_32)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_WorldTransformCache_32() const { return ___m_WorldTransformCache_32; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_WorldTransformCache_32() { return &___m_WorldTransformCache_32; }
	inline void set_m_WorldTransformCache_32(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_WorldTransformCache_32 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformInverseCache_33() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_WorldTransformInverseCache_33)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_WorldTransformInverseCache_33() const { return ___m_WorldTransformInverseCache_33; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_WorldTransformInverseCache_33() { return &___m_WorldTransformInverseCache_33; }
	inline void set_m_WorldTransformInverseCache_33(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_WorldTransformInverseCache_33 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldClipDirtyU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CisWorldClipDirtyU3Ek__BackingField_34)); }
	inline bool get_U3CisWorldClipDirtyU3Ek__BackingField_34() const { return ___U3CisWorldClipDirtyU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CisWorldClipDirtyU3Ek__BackingField_34() { return &___U3CisWorldClipDirtyU3Ek__BackingField_34; }
	inline void set_U3CisWorldClipDirtyU3Ek__BackingField_34(bool value)
	{
		___U3CisWorldClipDirtyU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_m_WorldClip_35() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_WorldClip_35)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_WorldClip_35() const { return ___m_WorldClip_35; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_WorldClip_35() { return &___m_WorldClip_35; }
	inline void set_m_WorldClip_35(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_WorldClip_35 = value;
	}

	inline static int32_t get_offset_of_m_WorldClipMinusGroup_36() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_WorldClipMinusGroup_36)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_WorldClipMinusGroup_36() const { return ___m_WorldClipMinusGroup_36; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_WorldClipMinusGroup_36() { return &___m_WorldClipMinusGroup_36; }
	inline void set_m_WorldClipMinusGroup_36(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_WorldClipMinusGroup_36 = value;
	}

	inline static int32_t get_offset_of_triggerPseudoMask_38() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___triggerPseudoMask_38)); }
	inline int32_t get_triggerPseudoMask_38() const { return ___triggerPseudoMask_38; }
	inline int32_t* get_address_of_triggerPseudoMask_38() { return &___triggerPseudoMask_38; }
	inline void set_triggerPseudoMask_38(int32_t value)
	{
		___triggerPseudoMask_38 = value;
	}

	inline static int32_t get_offset_of_dependencyPseudoMask_39() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___dependencyPseudoMask_39)); }
	inline int32_t get_dependencyPseudoMask_39() const { return ___dependencyPseudoMask_39; }
	inline int32_t* get_address_of_dependencyPseudoMask_39() { return &___dependencyPseudoMask_39; }
	inline void set_dependencyPseudoMask_39(int32_t value)
	{
		___dependencyPseudoMask_39 = value;
	}

	inline static int32_t get_offset_of_m_PseudoStates_40() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_PseudoStates_40)); }
	inline int32_t get_m_PseudoStates_40() const { return ___m_PseudoStates_40; }
	inline int32_t* get_address_of_m_PseudoStates_40() { return &___m_PseudoStates_40; }
	inline void set_m_PseudoStates_40(int32_t value)
	{
		___m_PseudoStates_40 = value;
	}

	inline static int32_t get_offset_of_U3CpickingModeU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CpickingModeU3Ek__BackingField_41)); }
	inline int32_t get_U3CpickingModeU3Ek__BackingField_41() const { return ___U3CpickingModeU3Ek__BackingField_41; }
	inline int32_t* get_address_of_U3CpickingModeU3Ek__BackingField_41() { return &___U3CpickingModeU3Ek__BackingField_41; }
	inline void set_U3CpickingModeU3Ek__BackingField_41(int32_t value)
	{
		___U3CpickingModeU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CyogaNodeU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CyogaNodeU3Ek__BackingField_42)); }
	inline YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * get_U3CyogaNodeU3Ek__BackingField_42() const { return ___U3CyogaNodeU3Ek__BackingField_42; }
	inline YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 ** get_address_of_U3CyogaNodeU3Ek__BackingField_42() { return &___U3CyogaNodeU3Ek__BackingField_42; }
	inline void set_U3CyogaNodeU3Ek__BackingField_42(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * value)
	{
		___U3CyogaNodeU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyogaNodeU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedStyle_43() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_SharedStyle_43)); }
	inline ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * get_m_SharedStyle_43() const { return ___m_SharedStyle_43; }
	inline ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E ** get_address_of_m_SharedStyle_43() { return &___m_SharedStyle_43; }
	inline void set_m_SharedStyle_43(ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * value)
	{
		___m_SharedStyle_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedStyle_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_Style_44() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Style_44)); }
	inline ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * get_m_Style_44() const { return ___m_Style_44; }
	inline ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E ** get_address_of_m_Style_44() { return &___m_Style_44; }
	inline void set_m_Style_44(ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * value)
	{
		___m_Style_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_44), (void*)value);
	}

	inline static int32_t get_offset_of_variableContext_45() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___variableContext_45)); }
	inline StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE * get_variableContext_45() const { return ___variableContext_45; }
	inline StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE ** get_address_of_variableContext_45() { return &___variableContext_45; }
	inline void set_variableContext_45(StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE * value)
	{
		___variableContext_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableContext_45), (void*)value);
	}

	inline static int32_t get_offset_of_inheritedStylesHash_46() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___inheritedStylesHash_46)); }
	inline int32_t get_inheritedStylesHash_46() const { return ___inheritedStylesHash_46; }
	inline int32_t* get_address_of_inheritedStylesHash_46() { return &___inheritedStylesHash_46; }
	inline void set_inheritedStylesHash_46(int32_t value)
	{
		___inheritedStylesHash_46 = value;
	}

	inline static int32_t get_offset_of_controlid_47() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___controlid_47)); }
	inline uint32_t get_controlid_47() const { return ___controlid_47; }
	inline uint32_t* get_address_of_controlid_47() { return &___controlid_47; }
	inline void set_controlid_47(uint32_t value)
	{
		___controlid_47 = value;
	}

	inline static int32_t get_offset_of_imguiContainerDescendantCount_48() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___imguiContainerDescendantCount_48)); }
	inline int32_t get_imguiContainerDescendantCount_48() const { return ___imguiContainerDescendantCount_48; }
	inline int32_t* get_address_of_imguiContainerDescendantCount_48() { return &___imguiContainerDescendantCount_48; }
	inline void set_imguiContainerDescendantCount_48(int32_t value)
	{
		___imguiContainerDescendantCount_48 = value;
	}

	inline static int32_t get_offset_of_U3CenabledSelfU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CenabledSelfU3Ek__BackingField_49)); }
	inline bool get_U3CenabledSelfU3Ek__BackingField_49() const { return ___U3CenabledSelfU3Ek__BackingField_49; }
	inline bool* get_address_of_U3CenabledSelfU3Ek__BackingField_49() { return &___U3CenabledSelfU3Ek__BackingField_49; }
	inline void set_U3CenabledSelfU3Ek__BackingField_49(bool value)
	{
		___U3CenabledSelfU3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_U3CgenerateVisualContentU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CgenerateVisualContentU3Ek__BackingField_50)); }
	inline Action_1_t4B5D11A4BFD62938CB8E23BE6080E1802E80C757 * get_U3CgenerateVisualContentU3Ek__BackingField_50() const { return ___U3CgenerateVisualContentU3Ek__BackingField_50; }
	inline Action_1_t4B5D11A4BFD62938CB8E23BE6080E1802E80C757 ** get_address_of_U3CgenerateVisualContentU3Ek__BackingField_50() { return &___U3CgenerateVisualContentU3Ek__BackingField_50; }
	inline void set_U3CgenerateVisualContentU3Ek__BackingField_50(Action_1_t4B5D11A4BFD62938CB8E23BE6080E1802E80C757 * value)
	{
		___U3CgenerateVisualContentU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgenerateVisualContentU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_RequireMeasureFunction_51() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_RequireMeasureFunction_51)); }
	inline bool get_m_RequireMeasureFunction_51() const { return ___m_RequireMeasureFunction_51; }
	inline bool* get_address_of_m_RequireMeasureFunction_51() { return &___m_RequireMeasureFunction_51; }
	inline void set_m_RequireMeasureFunction_51(bool value)
	{
		___m_RequireMeasureFunction_51 = value;
	}

	inline static int32_t get_offset_of_m_RunningAnimations_52() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_RunningAnimations_52)); }
	inline List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * get_m_RunningAnimations_52() const { return ___m_RunningAnimations_52; }
	inline List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 ** get_address_of_m_RunningAnimations_52() { return &___m_RunningAnimations_52; }
	inline void set_m_RunningAnimations_52(List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * value)
	{
		___m_RunningAnimations_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RunningAnimations_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChierarchyU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3ChierarchyU3Ek__BackingField_53)); }
	inline Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  get_U3ChierarchyU3Ek__BackingField_53() const { return ___U3ChierarchyU3Ek__BackingField_53; }
	inline Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * get_address_of_U3ChierarchyU3Ek__BackingField_53() { return &___U3ChierarchyU3Ek__BackingField_53; }
	inline void set_U3ChierarchyU3Ek__BackingField_53(Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  value)
	{
		___U3ChierarchyU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ChierarchyU3Ek__BackingField_53))->___m_Owner_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CcacheAsBitmapU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CcacheAsBitmapU3Ek__BackingField_54)); }
	inline bool get_U3CcacheAsBitmapU3Ek__BackingField_54() const { return ___U3CcacheAsBitmapU3Ek__BackingField_54; }
	inline bool* get_address_of_U3CcacheAsBitmapU3Ek__BackingField_54() { return &___U3CcacheAsBitmapU3Ek__BackingField_54; }
	inline void set_U3CcacheAsBitmapU3Ek__BackingField_54(bool value)
	{
		___U3CcacheAsBitmapU3Ek__BackingField_54 = value;
	}

	inline static int32_t get_offset_of_m_PhysicalParent_55() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_PhysicalParent_55)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_PhysicalParent_55() const { return ___m_PhysicalParent_55; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_PhysicalParent_55() { return &___m_PhysicalParent_55; }
	inline void set_m_PhysicalParent_55(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_PhysicalParent_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PhysicalParent_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_LogicalParent_56() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_LogicalParent_56)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_LogicalParent_56() const { return ___m_LogicalParent_56; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_LogicalParent_56() { return &___m_LogicalParent_56; }
	inline void set_m_LogicalParent_56(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_LogicalParent_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LogicalParent_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_58() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Children_58)); }
	inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * get_m_Children_58() const { return ___m_Children_58; }
	inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 ** get_address_of_m_Children_58() { return &___m_Children_58; }
	inline void set_m_Children_58(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * value)
	{
		___m_Children_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelementPanelU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CelementPanelU3Ek__BackingField_59)); }
	inline BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * get_U3CelementPanelU3Ek__BackingField_59() const { return ___U3CelementPanelU3Ek__BackingField_59; }
	inline BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 ** get_address_of_U3CelementPanelU3Ek__BackingField_59() { return &___U3CelementPanelU3Ek__BackingField_59; }
	inline void set_U3CelementPanelU3Ek__BackingField_59(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * value)
	{
		___U3CelementPanelU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CelementPanelU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_inlineStyleAccess_60() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___inlineStyleAccess_60)); }
	inline InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57 * get_inlineStyleAccess_60() const { return ___inlineStyleAccess_60; }
	inline InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57 ** get_address_of_inlineStyleAccess_60() { return &___inlineStyleAccess_60; }
	inline void set_inlineStyleAccess_60(InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57 * value)
	{
		___inlineStyleAccess_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inlineStyleAccess_60), (void*)value);
	}

	inline static int32_t get_offset_of_styleSheetList_61() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___styleSheetList_61)); }
	inline List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * get_styleSheetList_61() const { return ___styleSheetList_61; }
	inline List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 ** get_address_of_styleSheetList_61() { return &___styleSheetList_61; }
	inline void set_styleSheetList_61(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * value)
	{
		___styleSheetList_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___styleSheetList_61), (void*)value);
	}
};

struct VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields
{
public:
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___s_EmptyClassList_8;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  ___userDataPropertyKey_9;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_10;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___s_InfiniteRect_37;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * ___s_EmptyList_57;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_InternalStyleSheetPath_62;

public:
	inline static int32_t get_offset_of_s_NextId_7() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_NextId_7)); }
	inline uint32_t get_s_NextId_7() const { return ___s_NextId_7; }
	inline uint32_t* get_address_of_s_NextId_7() { return &___s_NextId_7; }
	inline void set_s_NextId_7(uint32_t value)
	{
		___s_NextId_7 = value;
	}

	inline static int32_t get_offset_of_s_EmptyClassList_8() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_EmptyClassList_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_s_EmptyClassList_8() const { return ___s_EmptyClassList_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_s_EmptyClassList_8() { return &___s_EmptyClassList_8; }
	inline void set_s_EmptyClassList_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___s_EmptyClassList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyClassList_8), (void*)value);
	}

	inline static int32_t get_offset_of_userDataPropertyKey_9() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___userDataPropertyKey_9)); }
	inline PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  get_userDataPropertyKey_9() const { return ___userDataPropertyKey_9; }
	inline PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1 * get_address_of_userDataPropertyKey_9() { return &___userDataPropertyKey_9; }
	inline void set_userDataPropertyKey_9(PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  value)
	{
		___userDataPropertyKey_9 = value;
	}

	inline static int32_t get_offset_of_disabledUssClassName_10() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___disabledUssClassName_10)); }
	inline String_t* get_disabledUssClassName_10() const { return ___disabledUssClassName_10; }
	inline String_t** get_address_of_disabledUssClassName_10() { return &___disabledUssClassName_10; }
	inline void set_disabledUssClassName_10(String_t* value)
	{
		___disabledUssClassName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disabledUssClassName_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_InfiniteRect_37() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_InfiniteRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_s_InfiniteRect_37() const { return ___s_InfiniteRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_s_InfiniteRect_37() { return &___s_InfiniteRect_37; }
	inline void set_s_InfiniteRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___s_InfiniteRect_37 = value;
	}

	inline static int32_t get_offset_of_s_EmptyList_57() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_EmptyList_57)); }
	inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * get_s_EmptyList_57() const { return ___s_EmptyList_57; }
	inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 ** get_address_of_s_EmptyList_57() { return &___s_EmptyList_57; }
	inline void set_s_EmptyList_57(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * value)
	{
		___s_EmptyList_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyList_57), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalStyleSheetPath_62() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_InternalStyleSheetPath_62)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_InternalStyleSheetPath_62() const { return ___s_InternalStyleSheetPath_62; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_InternalStyleSheetPath_62() { return &___s_InternalStyleSheetPath_62; }
	inline void set_s_InternalStyleSheetPath_62(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_InternalStyleSheetPath_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalStyleSheetPath_62), (void*)value);
	}
};


// Unity.UIElements.Runtime.InGamePanelScalerInspector
struct  InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Unity.UIElements.Runtime.PanelScaler Unity.UIElements.Runtime.InGamePanelScalerInspector::scaler
	PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * ___scaler_4;

public:
	inline static int32_t get_offset_of_scaler_4() { return static_cast<int32_t>(offsetof(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102, ___scaler_4)); }
	inline PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * get_scaler_4() const { return ___scaler_4; }
	inline PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 ** get_address_of_scaler_4() { return &___scaler_4; }
	inline void set_scaler_4(PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * value)
	{
		___scaler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaler_4), (void*)value);
	}
};

struct InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields
{
public:
	// Unity.UIElements.Runtime.PanelScaler_ScaleMode[] Unity.UIElements.Runtime.InGamePanelScalerInspector::s_ScaleModes
	ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418* ___s_ScaleModes_5;
	// System.String[] Unity.UIElements.Runtime.InGamePanelScalerInspector::s_ScaleModeLabels
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_ScaleModeLabels_6;
	// Unity.UIElements.Runtime.PanelScaler_ScreenMatchMode[] Unity.UIElements.Runtime.InGamePanelScalerInspector::s_MatchModes
	ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9* ___s_MatchModes_7;
	// System.String[] Unity.UIElements.Runtime.InGamePanelScalerInspector::s_MatchModeLabels
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_MatchModeLabels_8;

public:
	inline static int32_t get_offset_of_s_ScaleModes_5() { return static_cast<int32_t>(offsetof(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields, ___s_ScaleModes_5)); }
	inline ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418* get_s_ScaleModes_5() const { return ___s_ScaleModes_5; }
	inline ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418** get_address_of_s_ScaleModes_5() { return &___s_ScaleModes_5; }
	inline void set_s_ScaleModes_5(ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418* value)
	{
		___s_ScaleModes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScaleModes_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScaleModeLabels_6() { return static_cast<int32_t>(offsetof(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields, ___s_ScaleModeLabels_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_ScaleModeLabels_6() const { return ___s_ScaleModeLabels_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_ScaleModeLabels_6() { return &___s_ScaleModeLabels_6; }
	inline void set_s_ScaleModeLabels_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_ScaleModeLabels_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScaleModeLabels_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_MatchModes_7() { return static_cast<int32_t>(offsetof(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields, ___s_MatchModes_7)); }
	inline ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9* get_s_MatchModes_7() const { return ___s_MatchModes_7; }
	inline ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9** get_address_of_s_MatchModes_7() { return &___s_MatchModes_7; }
	inline void set_s_MatchModes_7(ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9* value)
	{
		___s_MatchModes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MatchModes_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_MatchModeLabels_8() { return static_cast<int32_t>(offsetof(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields, ___s_MatchModeLabels_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_MatchModeLabels_8() const { return ___s_MatchModeLabels_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_MatchModeLabels_8() { return &___s_MatchModeLabels_8; }
	inline void set_s_MatchModeLabels_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_MatchModeLabels_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MatchModeLabels_8), (void*)value);
	}
};


// Unity.UIElements.Runtime.InputWrapper
struct  InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Unity.UIElements.Runtime.NavigationCancelEvent
struct  NavigationCancelEvent_t6D8664F136E91A5FC7DD9736D468ADE6124E6A65  : public NavigationEventBase_1_t9128BCF1AF775B7FEC84E9706AAC15CE1DD2A8B1
{
public:

public:
};


// Unity.UIElements.Runtime.NavigationMoveEvent
struct  NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6  : public NavigationEventBase_1_t8C9C2C3285DE7F4E6052012C12AFD3EB224F2BB9
{
public:
	// Unity.UIElements.Runtime.NavigationMoveEvent_Direction Unity.UIElements.Runtime.NavigationMoveEvent::<direction>k__BackingField
	int32_t ___U3CdirectionU3Ek__BackingField_18;
	// UnityEngine.Vector2 Unity.UIElements.Runtime.NavigationMoveEvent::<move>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CmoveU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CdirectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6, ___U3CdirectionU3Ek__BackingField_18)); }
	inline int32_t get_U3CdirectionU3Ek__BackingField_18() const { return ___U3CdirectionU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CdirectionU3Ek__BackingField_18() { return &___U3CdirectionU3Ek__BackingField_18; }
	inline void set_U3CdirectionU3Ek__BackingField_18(int32_t value)
	{
		___U3CdirectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CmoveU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6, ___U3CmoveU3Ek__BackingField_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CmoveU3Ek__BackingField_19() const { return ___U3CmoveU3Ek__BackingField_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CmoveU3Ek__BackingField_19() { return &___U3CmoveU3Ek__BackingField_19; }
	inline void set_U3CmoveU3Ek__BackingField_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CmoveU3Ek__BackingField_19 = value;
	}
};


// Unity.UIElements.Runtime.NavigationSubmitEvent
struct  NavigationSubmitEvent_t61EA218A23166F922C9828F5F4EEF3F0E1191CA6  : public NavigationEventBase_1_tC64CED1575E64DE8180504EF8041919CDC810013
{
public:

public:
};


// Unity.UIElements.Runtime.PanelRenderer
struct  PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UIElements.VisualTreeAsset Unity.UIElements.Runtime.PanelRenderer::uxml
	VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF * ___uxml_4;
	// UnityEngine.UIElements.StyleSheet Unity.UIElements.Runtime.PanelRenderer::unityStyleSheet
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___unityStyleSheet_5;
	// UnityEngine.UIElements.StyleSheet[] Unity.UIElements.Runtime.PanelRenderer::stylesheets
	StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* ___stylesheets_6;
	// UnityEngine.UIElements.VisualElement Unity.UIElements.Runtime.PanelRenderer::<visualTree>k__BackingField
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___U3CvisualTreeU3Ek__BackingField_7;
	// UnityEngine.UIElements.IPanel Unity.UIElements.Runtime.PanelRenderer::<panel>k__BackingField
	RuntimeObject* ___U3CpanelU3Ek__BackingField_8;
	// UnityEngine.RenderTexture Unity.UIElements.Runtime.PanelRenderer::targetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture_9;
	// UnityEngine.Component Unity.UIElements.Runtime.PanelRenderer::panelTransform
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___panelTransform_10;
	// System.Boolean Unity.UIElements.Runtime.PanelRenderer::enableLiveUpdates
	bool ___enableLiveUpdates_11;
	// System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>> Unity.UIElements.Runtime.PanelRenderer::<postUxmlReload>k__BackingField
	Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * ___U3CpostUxmlReloadU3Ek__BackingField_12;
	// Unity.UIElements.Runtime.IPanelTransform Unity.UIElements.Runtime.PanelRenderer::m_PanelTransform
	RuntimeObject* ___m_PanelTransform_13;
	// Unity.UIElements.Runtime.PanelScaler Unity.UIElements.Runtime.PanelRenderer::m_PanelScaler
	PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * ___m_PanelScaler_14;
	// Unity.UIElements.Runtime.PanelRenderer_PanelOwner Unity.UIElements.Runtime.PanelRenderer::m_PanelOwner
	PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6 * ___m_PanelOwner_15;
	// UnityEngine.RenderTexture Unity.UIElements.Runtime.PanelRenderer::m_TargetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_TargetTexture_16;
	// System.Int32 Unity.UIElements.Runtime.PanelRenderer::m_InitializedCounter
	int32_t ___m_InitializedCounter_17;
	// UnityEngine.Event Unity.UIElements.Runtime.PanelRenderer::m_Event
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_Event_18;
	// System.Single Unity.UIElements.Runtime.PanelRenderer::m_Scale
	float ___m_Scale_19;
	// UnityEngine.Vector2 Unity.UIElements.Runtime.PanelRenderer::m_TargetSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_TargetSize_20;
	// UnityEngine.Profiling.CustomSampler Unity.UIElements.Runtime.PanelRenderer::m_InitSampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___m_InitSampler_21;
	// UnityEngine.Profiling.CustomSampler Unity.UIElements.Runtime.PanelRenderer::m_UpdateSampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___m_UpdateSampler_22;
	// System.Boolean Unity.UIElements.Runtime.PanelRenderer::m_ShouldWarnWorldTransformMissing
	bool ___m_ShouldWarnWorldTransformMissing_23;
	// System.Collections.Generic.HashSet`1<UnityEngine.Object> Unity.UIElements.Runtime.PanelRenderer::m_TrackedAssetSet
	HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * ___m_TrackedAssetSet_24;
	// System.Collections.Generic.List`1<UnityEngine.Object> Unity.UIElements.Runtime.PanelRenderer::m_TrackedAssetList
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___m_TrackedAssetList_25;
	// System.Collections.Generic.List`1<System.Int32> Unity.UIElements.Runtime.PanelRenderer::m_TrackedAssetHashes
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_TrackedAssetHashes_26;

public:
	inline static int32_t get_offset_of_uxml_4() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___uxml_4)); }
	inline VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF * get_uxml_4() const { return ___uxml_4; }
	inline VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF ** get_address_of_uxml_4() { return &___uxml_4; }
	inline void set_uxml_4(VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF * value)
	{
		___uxml_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uxml_4), (void*)value);
	}

	inline static int32_t get_offset_of_unityStyleSheet_5() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___unityStyleSheet_5)); }
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * get_unityStyleSheet_5() const { return ___unityStyleSheet_5; }
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F ** get_address_of_unityStyleSheet_5() { return &___unityStyleSheet_5; }
	inline void set_unityStyleSheet_5(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * value)
	{
		___unityStyleSheet_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityStyleSheet_5), (void*)value);
	}

	inline static int32_t get_offset_of_stylesheets_6() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___stylesheets_6)); }
	inline StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* get_stylesheets_6() const { return ___stylesheets_6; }
	inline StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB** get_address_of_stylesheets_6() { return &___stylesheets_6; }
	inline void set_stylesheets_6(StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* value)
	{
		___stylesheets_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stylesheets_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvisualTreeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___U3CvisualTreeU3Ek__BackingField_7)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_U3CvisualTreeU3Ek__BackingField_7() const { return ___U3CvisualTreeU3Ek__BackingField_7; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_U3CvisualTreeU3Ek__BackingField_7() { return &___U3CvisualTreeU3Ek__BackingField_7; }
	inline void set_U3CvisualTreeU3Ek__BackingField_7(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___U3CvisualTreeU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvisualTreeU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpanelU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___U3CpanelU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CpanelU3Ek__BackingField_8() const { return ___U3CpanelU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CpanelU3Ek__BackingField_8() { return &___U3CpanelU3Ek__BackingField_8; }
	inline void set_U3CpanelU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CpanelU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpanelU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_targetTexture_9() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___targetTexture_9)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_targetTexture_9() const { return ___targetTexture_9; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_targetTexture_9() { return &___targetTexture_9; }
	inline void set_targetTexture_9(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___targetTexture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetTexture_9), (void*)value);
	}

	inline static int32_t get_offset_of_panelTransform_10() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___panelTransform_10)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_panelTransform_10() const { return ___panelTransform_10; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_panelTransform_10() { return &___panelTransform_10; }
	inline void set_panelTransform_10(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___panelTransform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelTransform_10), (void*)value);
	}

	inline static int32_t get_offset_of_enableLiveUpdates_11() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___enableLiveUpdates_11)); }
	inline bool get_enableLiveUpdates_11() const { return ___enableLiveUpdates_11; }
	inline bool* get_address_of_enableLiveUpdates_11() { return &___enableLiveUpdates_11; }
	inline void set_enableLiveUpdates_11(bool value)
	{
		___enableLiveUpdates_11 = value;
	}

	inline static int32_t get_offset_of_U3CpostUxmlReloadU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___U3CpostUxmlReloadU3Ek__BackingField_12)); }
	inline Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * get_U3CpostUxmlReloadU3Ek__BackingField_12() const { return ___U3CpostUxmlReloadU3Ek__BackingField_12; }
	inline Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 ** get_address_of_U3CpostUxmlReloadU3Ek__BackingField_12() { return &___U3CpostUxmlReloadU3Ek__BackingField_12; }
	inline void set_U3CpostUxmlReloadU3Ek__BackingField_12(Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * value)
	{
		___U3CpostUxmlReloadU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpostUxmlReloadU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_PanelTransform_13() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_PanelTransform_13)); }
	inline RuntimeObject* get_m_PanelTransform_13() const { return ___m_PanelTransform_13; }
	inline RuntimeObject** get_address_of_m_PanelTransform_13() { return &___m_PanelTransform_13; }
	inline void set_m_PanelTransform_13(RuntimeObject* value)
	{
		___m_PanelTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PanelTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_PanelScaler_14() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_PanelScaler_14)); }
	inline PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * get_m_PanelScaler_14() const { return ___m_PanelScaler_14; }
	inline PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 ** get_address_of_m_PanelScaler_14() { return &___m_PanelScaler_14; }
	inline void set_m_PanelScaler_14(PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * value)
	{
		___m_PanelScaler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PanelScaler_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_PanelOwner_15() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_PanelOwner_15)); }
	inline PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6 * get_m_PanelOwner_15() const { return ___m_PanelOwner_15; }
	inline PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6 ** get_address_of_m_PanelOwner_15() { return &___m_PanelOwner_15; }
	inline void set_m_PanelOwner_15(PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6 * value)
	{
		___m_PanelOwner_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PanelOwner_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetTexture_16() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_TargetTexture_16)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_TargetTexture_16() const { return ___m_TargetTexture_16; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_TargetTexture_16() { return &___m_TargetTexture_16; }
	inline void set_m_TargetTexture_16(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_TargetTexture_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetTexture_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitializedCounter_17() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_InitializedCounter_17)); }
	inline int32_t get_m_InitializedCounter_17() const { return ___m_InitializedCounter_17; }
	inline int32_t* get_address_of_m_InitializedCounter_17() { return &___m_InitializedCounter_17; }
	inline void set_m_InitializedCounter_17(int32_t value)
	{
		___m_InitializedCounter_17 = value;
	}

	inline static int32_t get_offset_of_m_Event_18() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_Event_18)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_Event_18() const { return ___m_Event_18; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_Event_18() { return &___m_Event_18; }
	inline void set_m_Event_18(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_Event_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Event_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Scale_19() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_Scale_19)); }
	inline float get_m_Scale_19() const { return ___m_Scale_19; }
	inline float* get_address_of_m_Scale_19() { return &___m_Scale_19; }
	inline void set_m_Scale_19(float value)
	{
		___m_Scale_19 = value;
	}

	inline static int32_t get_offset_of_m_TargetSize_20() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_TargetSize_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_TargetSize_20() const { return ___m_TargetSize_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_TargetSize_20() { return &___m_TargetSize_20; }
	inline void set_m_TargetSize_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_TargetSize_20 = value;
	}

	inline static int32_t get_offset_of_m_InitSampler_21() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_InitSampler_21)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_m_InitSampler_21() const { return ___m_InitSampler_21; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_m_InitSampler_21() { return &___m_InitSampler_21; }
	inline void set_m_InitSampler_21(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___m_InitSampler_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InitSampler_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateSampler_22() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_UpdateSampler_22)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_m_UpdateSampler_22() const { return ___m_UpdateSampler_22; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_m_UpdateSampler_22() { return &___m_UpdateSampler_22; }
	inline void set_m_UpdateSampler_22(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___m_UpdateSampler_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdateSampler_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldWarnWorldTransformMissing_23() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_ShouldWarnWorldTransformMissing_23)); }
	inline bool get_m_ShouldWarnWorldTransformMissing_23() const { return ___m_ShouldWarnWorldTransformMissing_23; }
	inline bool* get_address_of_m_ShouldWarnWorldTransformMissing_23() { return &___m_ShouldWarnWorldTransformMissing_23; }
	inline void set_m_ShouldWarnWorldTransformMissing_23(bool value)
	{
		___m_ShouldWarnWorldTransformMissing_23 = value;
	}

	inline static int32_t get_offset_of_m_TrackedAssetSet_24() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_TrackedAssetSet_24)); }
	inline HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * get_m_TrackedAssetSet_24() const { return ___m_TrackedAssetSet_24; }
	inline HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 ** get_address_of_m_TrackedAssetSet_24() { return &___m_TrackedAssetSet_24; }
	inline void set_m_TrackedAssetSet_24(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * value)
	{
		___m_TrackedAssetSet_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedAssetSet_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedAssetList_25() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_TrackedAssetList_25)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_m_TrackedAssetList_25() const { return ___m_TrackedAssetList_25; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_m_TrackedAssetList_25() { return &___m_TrackedAssetList_25; }
	inline void set_m_TrackedAssetList_25(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___m_TrackedAssetList_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedAssetList_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedAssetHashes_26() { return static_cast<int32_t>(offsetof(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517, ___m_TrackedAssetHashes_26)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_TrackedAssetHashes_26() const { return ___m_TrackedAssetHashes_26; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_TrackedAssetHashes_26() { return &___m_TrackedAssetHashes_26; }
	inline void set_m_TrackedAssetHashes_26(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_TrackedAssetHashes_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedAssetHashes_26), (void*)value);
	}
};


// Unity.UIElements.Runtime.PanelScaler
struct  PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Unity.UIElements.Runtime.PanelScaler_ConstantPixelSizeScaler Unity.UIElements.Runtime.PanelScaler::constantPixelSizeScaler
	ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  ___constantPixelSizeScaler_4;
	// Unity.UIElements.Runtime.PanelScaler_ConstantPhysicalSizeScaler Unity.UIElements.Runtime.PanelScaler::constantPhysicalSizeScaler
	ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  ___constantPhysicalSizeScaler_5;
	// Unity.UIElements.Runtime.PanelScaler_ScaleWithScreenSizeScaler Unity.UIElements.Runtime.PanelScaler::scaleWithScreenSizeScaler
	ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  ___scaleWithScreenSizeScaler_6;
	// Unity.UIElements.Runtime.PanelScaler_ScaleMode Unity.UIElements.Runtime.PanelScaler::scaleMode
	int32_t ___scaleMode_7;

public:
	inline static int32_t get_offset_of_constantPixelSizeScaler_4() { return static_cast<int32_t>(offsetof(PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83, ___constantPixelSizeScaler_4)); }
	inline ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  get_constantPixelSizeScaler_4() const { return ___constantPixelSizeScaler_4; }
	inline ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF * get_address_of_constantPixelSizeScaler_4() { return &___constantPixelSizeScaler_4; }
	inline void set_constantPixelSizeScaler_4(ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  value)
	{
		___constantPixelSizeScaler_4 = value;
	}

	inline static int32_t get_offset_of_constantPhysicalSizeScaler_5() { return static_cast<int32_t>(offsetof(PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83, ___constantPhysicalSizeScaler_5)); }
	inline ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  get_constantPhysicalSizeScaler_5() const { return ___constantPhysicalSizeScaler_5; }
	inline ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 * get_address_of_constantPhysicalSizeScaler_5() { return &___constantPhysicalSizeScaler_5; }
	inline void set_constantPhysicalSizeScaler_5(ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  value)
	{
		___constantPhysicalSizeScaler_5 = value;
	}

	inline static int32_t get_offset_of_scaleWithScreenSizeScaler_6() { return static_cast<int32_t>(offsetof(PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83, ___scaleWithScreenSizeScaler_6)); }
	inline ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  get_scaleWithScreenSizeScaler_6() const { return ___scaleWithScreenSizeScaler_6; }
	inline ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A * get_address_of_scaleWithScreenSizeScaler_6() { return &___scaleWithScreenSizeScaler_6; }
	inline void set_scaleWithScreenSizeScaler_6(ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  value)
	{
		___scaleWithScreenSizeScaler_6 = value;
	}

	inline static int32_t get_offset_of_scaleMode_7() { return static_cast<int32_t>(offsetof(PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83, ___scaleMode_7)); }
	inline int32_t get_scaleMode_7() const { return ___scaleMode_7; }
	inline int32_t* get_address_of_scaleMode_7() { return &___scaleMode_7; }
	inline void set_scaleMode_7(int32_t value)
	{
		___scaleMode_7 = value;
	}
};


// Unity.UIElements.Runtime.UIElementsEventSystem
struct  UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::m_SendNavigationEvents
	bool ___m_SendNavigationEvents_4;
	// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::m_SendIMGUIEvents
	bool ___m_SendIMGUIEvents_5;
	// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::m_SendInputEvents
	bool ___m_SendInputEvents_6;
	// System.String Unity.UIElements.Runtime.UIElementsEventSystem::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_7;
	// System.String Unity.UIElements.Runtime.UIElementsEventSystem::m_VerticalAxis
	String_t* ___m_VerticalAxis_8;
	// System.String Unity.UIElements.Runtime.UIElementsEventSystem::m_SubmitButton
	String_t* ___m_SubmitButton_9;
	// System.String Unity.UIElements.Runtime.UIElementsEventSystem::m_CancelButton
	String_t* ___m_CancelButton_10;
	// System.Single Unity.UIElements.Runtime.UIElementsEventSystem::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_11;
	// System.Single Unity.UIElements.Runtime.UIElementsEventSystem::m_RepeatDelay
	float ___m_RepeatDelay_12;
	// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::<isAppFocused>k__BackingField
	bool ___U3CisAppFocusedU3Ek__BackingField_13;
	// UnityEngine.Event Unity.UIElements.Runtime.UIElementsEventSystem::m_Event
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_Event_14;
	// Unity.UIElements.Runtime.InputWrapper Unity.UIElements.Runtime.UIElementsEventSystem::<inputOverride>k__BackingField
	InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * ___U3CinputOverrideU3Ek__BackingField_15;
	// Unity.UIElements.Runtime.InputWrapper Unity.UIElements.Runtime.UIElementsEventSystem::m_DefaultInput
	InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * ___m_DefaultInput_16;
	// Unity.UIElements.Runtime.PanelRenderer Unity.UIElements.Runtime.UIElementsEventSystem::m_PanelRenderer
	PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * ___m_PanelRenderer_17;
	// UnityEngine.Vector2 Unity.UIElements.Runtime.UIElementsEventSystem::m_LastMousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMousePosition_18;
	// System.Int32 Unity.UIElements.Runtime.UIElementsEventSystem::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_19;
	// UnityEngine.Vector2 Unity.UIElements.Runtime.UIElementsEventSystem::m_LastMoveVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMoveVector_20;
	// System.Single Unity.UIElements.Runtime.UIElementsEventSystem::m_PrevActionTime
	float ___m_PrevActionTime_21;

public:
	inline static int32_t get_offset_of_m_SendNavigationEvents_4() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_SendNavigationEvents_4)); }
	inline bool get_m_SendNavigationEvents_4() const { return ___m_SendNavigationEvents_4; }
	inline bool* get_address_of_m_SendNavigationEvents_4() { return &___m_SendNavigationEvents_4; }
	inline void set_m_SendNavigationEvents_4(bool value)
	{
		___m_SendNavigationEvents_4 = value;
	}

	inline static int32_t get_offset_of_m_SendIMGUIEvents_5() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_SendIMGUIEvents_5)); }
	inline bool get_m_SendIMGUIEvents_5() const { return ___m_SendIMGUIEvents_5; }
	inline bool* get_address_of_m_SendIMGUIEvents_5() { return &___m_SendIMGUIEvents_5; }
	inline void set_m_SendIMGUIEvents_5(bool value)
	{
		___m_SendIMGUIEvents_5 = value;
	}

	inline static int32_t get_offset_of_m_SendInputEvents_6() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_SendInputEvents_6)); }
	inline bool get_m_SendInputEvents_6() const { return ___m_SendInputEvents_6; }
	inline bool* get_address_of_m_SendInputEvents_6() { return &___m_SendInputEvents_6; }
	inline void set_m_SendInputEvents_6(bool value)
	{
		___m_SendInputEvents_6 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_7() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_HorizontalAxis_7)); }
	inline String_t* get_m_HorizontalAxis_7() const { return ___m_HorizontalAxis_7; }
	inline String_t** get_address_of_m_HorizontalAxis_7() { return &___m_HorizontalAxis_7; }
	inline void set_m_HorizontalAxis_7(String_t* value)
	{
		___m_HorizontalAxis_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_8() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_VerticalAxis_8)); }
	inline String_t* get_m_VerticalAxis_8() const { return ___m_VerticalAxis_8; }
	inline String_t** get_address_of_m_VerticalAxis_8() { return &___m_VerticalAxis_8; }
	inline void set_m_VerticalAxis_8(String_t* value)
	{
		___m_VerticalAxis_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_9() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_SubmitButton_9)); }
	inline String_t* get_m_SubmitButton_9() const { return ___m_SubmitButton_9; }
	inline String_t** get_address_of_m_SubmitButton_9() { return &___m_SubmitButton_9; }
	inline void set_m_SubmitButton_9(String_t* value)
	{
		___m_SubmitButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_10() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_CancelButton_10)); }
	inline String_t* get_m_CancelButton_10() const { return ___m_CancelButton_10; }
	inline String_t** get_address_of_m_CancelButton_10() { return &___m_CancelButton_10; }
	inline void set_m_CancelButton_10(String_t* value)
	{
		___m_CancelButton_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_11() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_InputActionsPerSecond_11)); }
	inline float get_m_InputActionsPerSecond_11() const { return ___m_InputActionsPerSecond_11; }
	inline float* get_address_of_m_InputActionsPerSecond_11() { return &___m_InputActionsPerSecond_11; }
	inline void set_m_InputActionsPerSecond_11(float value)
	{
		___m_InputActionsPerSecond_11 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_12() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_RepeatDelay_12)); }
	inline float get_m_RepeatDelay_12() const { return ___m_RepeatDelay_12; }
	inline float* get_address_of_m_RepeatDelay_12() { return &___m_RepeatDelay_12; }
	inline void set_m_RepeatDelay_12(float value)
	{
		___m_RepeatDelay_12 = value;
	}

	inline static int32_t get_offset_of_U3CisAppFocusedU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___U3CisAppFocusedU3Ek__BackingField_13)); }
	inline bool get_U3CisAppFocusedU3Ek__BackingField_13() const { return ___U3CisAppFocusedU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisAppFocusedU3Ek__BackingField_13() { return &___U3CisAppFocusedU3Ek__BackingField_13; }
	inline void set_U3CisAppFocusedU3Ek__BackingField_13(bool value)
	{
		___U3CisAppFocusedU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_m_Event_14() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_Event_14)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_Event_14() const { return ___m_Event_14; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_Event_14() { return &___m_Event_14; }
	inline void set_m_Event_14(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_Event_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Event_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinputOverrideU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___U3CinputOverrideU3Ek__BackingField_15)); }
	inline InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * get_U3CinputOverrideU3Ek__BackingField_15() const { return ___U3CinputOverrideU3Ek__BackingField_15; }
	inline InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 ** get_address_of_U3CinputOverrideU3Ek__BackingField_15() { return &___U3CinputOverrideU3Ek__BackingField_15; }
	inline void set_U3CinputOverrideU3Ek__BackingField_15(InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * value)
	{
		___U3CinputOverrideU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputOverrideU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_16() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_DefaultInput_16)); }
	inline InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * get_m_DefaultInput_16() const { return ___m_DefaultInput_16; }
	inline InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 ** get_address_of_m_DefaultInput_16() { return &___m_DefaultInput_16; }
	inline void set_m_DefaultInput_16(InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * value)
	{
		___m_DefaultInput_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_PanelRenderer_17() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_PanelRenderer_17)); }
	inline PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * get_m_PanelRenderer_17() const { return ___m_PanelRenderer_17; }
	inline PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 ** get_address_of_m_PanelRenderer_17() { return &___m_PanelRenderer_17; }
	inline void set_m_PanelRenderer_17(PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * value)
	{
		___m_PanelRenderer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PanelRenderer_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastMousePosition_18() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_LastMousePosition_18)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMousePosition_18() const { return ___m_LastMousePosition_18; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMousePosition_18() { return &___m_LastMousePosition_18; }
	inline void set_m_LastMousePosition_18(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMousePosition_18 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_19() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_ConsecutiveMoveCount_19)); }
	inline int32_t get_m_ConsecutiveMoveCount_19() const { return ___m_ConsecutiveMoveCount_19; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_19() { return &___m_ConsecutiveMoveCount_19; }
	inline void set_m_ConsecutiveMoveCount_19(int32_t value)
	{
		___m_ConsecutiveMoveCount_19 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_20() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_LastMoveVector_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMoveVector_20() const { return ___m_LastMoveVector_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMoveVector_20() { return &___m_LastMoveVector_20; }
	inline void set_m_LastMoveVector_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMoveVector_20 = value;
	}

	inline static int32_t get_offset_of_m_PrevActionTime_21() { return static_cast<int32_t>(offsetof(UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95, ___m_PrevActionTime_21)); }
	inline float get_m_PrevActionTime_21() const { return ___m_PrevActionTime_21; }
	inline float* get_address_of_m_PrevActionTime_21() { return &___m_PrevActionTime_21; }
	inline void set_m_PrevActionTime_21(float value)
	{
		___m_PrevActionTime_21 = value;
	}
};


// Unity.UIElements.Runtime.WorldQuadDisplay
struct  WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RenderTexture Unity.UIElements.Runtime.WorldQuadDisplay::targetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture_4;
	// UnityEngine.Vector2 Unity.UIElements.Runtime.WorldQuadDisplay::sizeInWorld
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___sizeInWorld_5;
	// UnityEngine.Camera Unity.UIElements.Runtime.WorldQuadDisplay::eventCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___eventCamera_6;
	// UnityEngine.RenderTexture Unity.UIElements.Runtime.WorldQuadDisplay::m_TargetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_TargetTexture_7;
	// UnityEngine.Material Unity.UIElements.Runtime.WorldQuadDisplay::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_8;
	// UnityEngine.Vector2 Unity.UIElements.Runtime.WorldQuadDisplay::m_SizeInWorld
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_SizeInWorld_9;
	// UnityEngine.MeshRenderer Unity.UIElements.Runtime.WorldQuadDisplay::m_Renderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___m_Renderer_10;
	// UnityEngine.MeshFilter Unity.UIElements.Runtime.WorldQuadDisplay::m_MeshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___m_MeshFilter_11;
	// UnityEngine.Mesh Unity.UIElements.Runtime.WorldQuadDisplay::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_12;
	// UnityEngine.Vector2[] Unity.UIElements.Runtime.WorldQuadDisplay::k_UV
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___k_UV_13;
	// System.Int32[] Unity.UIElements.Runtime.WorldQuadDisplay::k_Triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___k_Triangles_14;
	// UnityEngine.Vector3[] Unity.UIElements.Runtime.WorldQuadDisplay::m_Vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Vertices_15;
	// System.Boolean Unity.UIElements.Runtime.WorldQuadDisplay::m_ShouldEmitShaderNotFoundError
	bool ___m_ShouldEmitShaderNotFoundError_16;

public:
	inline static int32_t get_offset_of_targetTexture_4() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___targetTexture_4)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_targetTexture_4() const { return ___targetTexture_4; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_targetTexture_4() { return &___targetTexture_4; }
	inline void set_targetTexture_4(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___targetTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_sizeInWorld_5() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___sizeInWorld_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_sizeInWorld_5() const { return ___sizeInWorld_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_sizeInWorld_5() { return &___sizeInWorld_5; }
	inline void set_sizeInWorld_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___sizeInWorld_5 = value;
	}

	inline static int32_t get_offset_of_eventCamera_6() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___eventCamera_6)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_eventCamera_6() const { return ___eventCamera_6; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_eventCamera_6() { return &___eventCamera_6; }
	inline void set_eventCamera_6(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___eventCamera_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventCamera_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetTexture_7() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___m_TargetTexture_7)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_TargetTexture_7() const { return ___m_TargetTexture_7; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_TargetTexture_7() { return &___m_TargetTexture_7; }
	inline void set_m_TargetTexture_7(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_TargetTexture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetTexture_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Material_8() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___m_Material_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_8() const { return ___m_Material_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_8() { return &___m_Material_8; }
	inline void set_m_Material_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_SizeInWorld_9() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___m_SizeInWorld_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_SizeInWorld_9() const { return ___m_SizeInWorld_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_SizeInWorld_9() { return &___m_SizeInWorld_9; }
	inline void set_m_SizeInWorld_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_SizeInWorld_9 = value;
	}

	inline static int32_t get_offset_of_m_Renderer_10() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___m_Renderer_10)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_m_Renderer_10() const { return ___m_Renderer_10; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_m_Renderer_10() { return &___m_Renderer_10; }
	inline void set_m_Renderer_10(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___m_Renderer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Renderer_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_MeshFilter_11() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___m_MeshFilter_11)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_m_MeshFilter_11() const { return ___m_MeshFilter_11; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_m_MeshFilter_11() { return &___m_MeshFilter_11; }
	inline void set_m_MeshFilter_11(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___m_MeshFilter_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MeshFilter_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Mesh_12() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___m_Mesh_12)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_12() const { return ___m_Mesh_12; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_12() { return &___m_Mesh_12; }
	inline void set_m_Mesh_12(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_12), (void*)value);
	}

	inline static int32_t get_offset_of_k_UV_13() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___k_UV_13)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_k_UV_13() const { return ___k_UV_13; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_k_UV_13() { return &___k_UV_13; }
	inline void set_k_UV_13(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___k_UV_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_UV_13), (void*)value);
	}

	inline static int32_t get_offset_of_k_Triangles_14() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___k_Triangles_14)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_k_Triangles_14() const { return ___k_Triangles_14; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_k_Triangles_14() { return &___k_Triangles_14; }
	inline void set_k_Triangles_14(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___k_Triangles_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Triangles_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Vertices_15() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___m_Vertices_15)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Vertices_15() const { return ___m_Vertices_15; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Vertices_15() { return &___m_Vertices_15; }
	inline void set_m_Vertices_15(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Vertices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Vertices_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldEmitShaderNotFoundError_16() { return static_cast<int32_t>(offsetof(WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6, ___m_ShouldEmitShaderNotFoundError_16)); }
	inline bool get_m_ShouldEmitShaderNotFoundError_16() const { return ___m_ShouldEmitShaderNotFoundError_16; }
	inline bool* get_address_of_m_ShouldEmitShaderNotFoundError_16() { return &___m_ShouldEmitShaderNotFoundError_16; }
	inline void set_m_ShouldEmitShaderNotFoundError_16(bool value)
	{
		___m_ShouldEmitShaderNotFoundError_16 = value;
	}
};


// UnityEngine.UIElements.PointerCancelEvent
struct  PointerCancelEvent_tA658A77DCA611873210006D2D89D4B02F38EB2DB  : public PointerEventBase_1_t2BF8A1708DB1A2950C86041DF6601BCFE2E9D622
{
public:

public:
};


// UnityEngine.UIElements.PointerDownEvent
struct  PointerDownEvent_tC94CCE820E4E6DCCD89A95DE94549BA550C27403  : public PointerEventBase_1_tDCA21E36D8E54CBC88FF299F6E2B6EB82DBA23AA
{
public:

public:
};


// UnityEngine.UIElements.PointerMoveEvent
struct  PointerMoveEvent_t9D1DF9F3D7FF1E2CCBEF6281558B6B88DAA90D28  : public PointerEventBase_1_tFD66F5BF3D7A7FAA5A4FFB3E39BAF961DE360CB8
{
public:

public:
};


// UnityEngine.UIElements.PointerStationaryEvent
struct  PointerStationaryEvent_tB5F216CAD6C42F3BF076F2EA0B1CC5F838EFE301  : public PointerEventBase_1_tE116CF19D43685E77939BE45EF6503ACDAE79D57
{
public:

public:
};


// UnityEngine.UIElements.PointerUpEvent
struct  PointerUpEvent_tFE3775D286474372874AF929B86FA46F4AC86333  : public PointerEventBase_1_t00B2BF542429C487722ECFF7BBFCA5A6D30C2851
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.UIElements.Runtime.PanelScaler_ScaleMode[]
struct ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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
// Unity.UIElements.Runtime.PanelScaler_ScreenMatchMode[]
struct ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIElements.StyleSheet[]
struct StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * m_Items[1];

public:
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.UIElements.Runtime.InputWrapper[]
struct InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * m_Items[1];

public:
	inline InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Int32Enum>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m33DA97E5E0CA41ABA538DAA20AC82989DCE890F4_gshared (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___array0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.NavigationEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationEventBase_1__ctor_mB306CEEBD7380A9A1106517103473818ABAF49B3_gshared (NavigationEventBase_1_tE84BECAB46459C7096D8BDD735D999CE518D0E17 * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.EventBase`1<System.Object>::GetPooled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EventBase_1_GetPooled_m0981CD12ACF0B2A7CBD36F89C48E0E679C4D012D_gshared (const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Init_m3C2C7D21676F33AAD54804E58CBE3504A9FACDF0_gshared (EventBase_1_t96045F377456C52401528D3B6A3635C4C071779A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared (const RuntimeMethod* method);
// UnityEngine.UIElements.StyleEnum`1<!0> UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Implicit(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD  StyleEnum_1_op_Implicit_m420ECA2B8873B7F2379B76CB8A3F39B5B57C5C92_gshared (int32_t ___v0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.PointerEventBase`1<System.Object>::GetPooled(UnityEngine.Touch,UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerEventBase_1_GetPooled_m3134C2330BC8D2DFA706CFF7400004AD69033C19_gshared (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  ___touch0, int32_t ___modifiers1, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<Unity.UIElements.Runtime.PanelScaler>()
inline PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * Component_GetComponent_TisPanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83_mDBB77C7B82A15259FE2750EECC642FC836BD114B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.GUI::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GUI_get_backgroundColor_mE1842C85D434A0E7FE9610AE78CE73C836840DF8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.GUI::get_contentColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GUI_get_contentColor_m3EEF13AC6245E87901BB9B1615AFC7867D94EE0B (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_backgroundColor_mB2569F0207659CA64618904A3D2063CF3D9D359C (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_contentColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_contentColor_mC580BA6155FF1ED522B03FD7DC9AB112E5D43586 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_mE0941591491BBDAA25FF7CD48415750FD08D10ED (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<Unity.UIElements.Runtime.PanelScaler/ScaleMode>(!!0[],!!0)
inline int32_t Array_IndexOf_TisScaleMode_tFCA174CC93461B5C6CBCA997C51609CEB267812B_m3253FC7F98EFA3630378F62E36B91E1AB3F6BA99 (ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418* ___array0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m33DA97E5E0CA41ABA538DAA20AC82989DCE890F4_gshared)(___array0, ___value1, method);
}
// System.Int32 UnityEngine.GUILayout::SelectionGrid(System.Int32,System.String[],System.Int32,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayout_SelectionGrid_mC91F67BAD5270E7EA78245D649AFA8F06194932F (int32_t ___selected0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___texts1, int32_t ___xCount2, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options3, const RuntimeMethod* method);
// Unity.UIElements.Runtime.PanelScaler/ConstantPixelSizeScaler Unity.UIElements.Runtime.InGamePanelScalerInspector::Edit(Unity.UIElements.Runtime.PanelScaler/ConstantPixelSizeScaler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  InGamePanelScalerInspector_Edit_m5333B673AA6818E80F13C412565184BE37ECDCEF (InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102 * __this, ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  ___scalerImpl0, const RuntimeMethod* method);
// Unity.UIElements.Runtime.PanelScaler/ConstantPhysicalSizeScaler Unity.UIElements.Runtime.InGamePanelScalerInspector::Edit(Unity.UIElements.Runtime.PanelScaler/ConstantPhysicalSizeScaler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  InGamePanelScalerInspector_Edit_m3E755E960E58B9F479BE58A93E145E97DFA07698 (InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102 * __this, ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  ___scalerImpl0, const RuntimeMethod* method);
// Unity.UIElements.Runtime.PanelScaler/ScaleWithScreenSizeScaler Unity.UIElements.Runtime.InGamePanelScalerInspector::Edit(Unity.UIElements.Runtime.PanelScaler/ScaleWithScreenSizeScaler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  InGamePanelScalerInspector_Edit_m36DE3171C00734DA803939745CC34538858D01DD (InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102 * __this, ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  ___scalerImpl0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndVertical_mBCF5058C9591A4064722C2B763EF98D066BFDCAD (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D (float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<Unity.UIElements.Runtime.PanelScaler/ScreenMatchMode>(!!0[],!!0)
inline int32_t Array_IndexOf_TisScreenMatchMode_t8D0BE1D62FF7469C85B141D50A3C4823DD3C1274_m0CC1189B814DA3A6C2EBC34EC606D6D577953939 (ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9* ___array0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m33DA97E5E0CA41ABA538DAA20AC82989DCE890F4_gshared)(___array0, ___value1, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String UnityEngine.Input::get_compositionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Input_get_compositionString_mF957B324E35155878D307CE2AEE0AACC9BEC25BD (const RuntimeMethod* method);
// UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_imeCompositionMode_m04AD6A8C7FEE55E7C4F70885DB5AF222E9F904E5 (const RuntimeMethod* method);
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_imeCompositionMode_m7D4AA771F1F616FE74A97CA186C4B55EF268E112 (int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_compositionCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Input_get_compositionCursorPos_m70946478FB2B607BC3BC5EC1280AA217323518B3 (const RuntimeMethod* method);
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_compositionCursorPos_mA2A9D63F782E3C75F065F031C67C2A1363D47D9C (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_mousePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_touchSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_touchSupported_mE5B2F5199B4CC16D89AD2C3125B5CB38F4B4867B (const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.NavigationEventBase`1<Unity.UIElements.Runtime.NavigationCancelEvent>::.ctor()
inline void NavigationEventBase_1__ctor_m4A320E1477D733F00901BC41B172DFA214FB6071 (NavigationEventBase_1_t9128BCF1AF775B7FEC84E9706AAC15CE1DD2A8B1 * __this, const RuntimeMethod* method)
{
	((  void (*) (NavigationEventBase_1_t9128BCF1AF775B7FEC84E9706AAC15CE1DD2A8B1 *, const RuntimeMethod*))NavigationEventBase_1__ctor_mB306CEEBD7380A9A1106517103473818ABAF49B3_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.EventBase`1<Unity.UIElements.Runtime.NavigationMoveEvent>::GetPooled()
inline NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * EventBase_1_GetPooled_mEEE019B76A607287F1F095D77CF21F9EC59879AC (const RuntimeMethod* method)
{
	return ((  NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * (*) (const RuntimeMethod*))EventBase_1_GetPooled_m0981CD12ACF0B2A7CBD36F89C48E0E679C4D012D_gshared)(method);
}
// Unity.UIElements.Runtime.NavigationMoveEvent/Direction Unity.UIElements.Runtime.NavigationMoveEvent::DetermineMoveDirection(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavigationMoveEvent_DetermineMoveDirection_mD8658A2A5B225427BFCDDD1EBA093580AAAD0EE5 (float ___x0, float ___y1, float ___deadZone2, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.NavigationMoveEvent::set_direction(Unity.UIElements.Runtime.NavigationMoveEvent/Direction)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationMoveEvent_set_direction_m9EA969440F5DAC49ED27E85A847AE3974360F1C9_inline (NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.NavigationMoveEvent::set_move(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationMoveEvent_set_move_m3D4F6AEE8300C0262C223E404FF62F495DA5F654_inline (NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase`1<Unity.UIElements.Runtime.NavigationMoveEvent>::Init()
inline void EventBase_1_Init_m545798B53E751466DF26E9304A9B39630F69A8F9 (EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC * __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC *, const RuntimeMethod*))EventBase_1_Init_m3C2C7D21676F33AAD54804E58CBE3504A9FACDF0_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.NavigationEventBase`1<Unity.UIElements.Runtime.NavigationMoveEvent>::.ctor()
inline void NavigationEventBase_1__ctor_m00FD20E8B50344B1FBF165BF6EB5B076EEBC6DD0 (NavigationEventBase_1_t8C9C2C3285DE7F4E6052012C12AFD3EB224F2BB9 * __this, const RuntimeMethod* method)
{
	((  void (*) (NavigationEventBase_1_t8C9C2C3285DE7F4E6052012C12AFD3EB224F2BB9 *, const RuntimeMethod*))NavigationEventBase_1__ctor_mB306CEEBD7380A9A1106517103473818ABAF49B3_gshared)(__this, method);
}
// System.Void Unity.UIElements.Runtime.NavigationEventBase`1<Unity.UIElements.Runtime.NavigationSubmitEvent>::.ctor()
inline void NavigationEventBase_1__ctor_m85DB76DFA84E6E9E6355F9A1DE589331846A032B (NavigationEventBase_1_tC64CED1575E64DE8180504EF8041919CDC810013 * __this, const RuntimeMethod* method)
{
	((  void (*) (NavigationEventBase_1_tC64CED1575E64DE8180504EF8041919CDC810013 *, const RuntimeMethod*))NavigationEventBase_1__ctor_mB306CEEBD7380A9A1106517103473818ABAF49B3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Object>::.ctor()
inline void HashSet_1__ctor_m47BE8F26D40810EF4DCA2CF9D664944C572E5F55 (HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::.ctor()
inline void List_1__ctor_m8786AF4A4AE06CDD3B907914EE860C2748ED2EA4 (List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_type_m9B687D79D5616CF25226B6AA9E9AA3DD597090BE (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.IPanel Unity.UIElements.Runtime.PanelRenderer::get_panel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.InternalBridge::SetTargetTexture(UnityEngine.UIElements.IPanel,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_SetTargetTexture_mD30E091CED00CBBBAFF0D3748502A9CD9AE5837D (RuntimeObject* ___panel0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture1, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.PanelRenderer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_OnValidate_mCFF8C045C41AB51D61CE14934C0AC1B8B6B6F356 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.InternalBridge::RegisterPanel(System.Int32,UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_RegisterPanel_m627065C426A3A43CFCA481270FCA1140B35D8F38 (int32_t ___ownerID0, RuntimeObject* ___panel1, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.InternalBridge::UnregisterPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_UnregisterPanel_m4F76B3206890C3E417FF78CCEBA339407C73039D (int32_t ___ownerID0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.Profiling.CustomSampler UnityEngine.Profiling.CustomSampler::Create(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * CustomSampler_Create_m9010A07C27FDDC7ECC2065AFA232BBDC6955C1E6 (String_t* ___name0, bool ___collectGpuData1, const RuntimeMethod* method);
// System.Void UnityEngine.Profiling.CustomSampler::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSampler_Begin_m787879DEAFA0A72D73CD41AE6411E60F7171B6F0 (CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * __this, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.PanelRenderer::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_Initialize_m4CF5C04D025AC2CB51A1B2A22B308AAFEDC88EE9 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Profiling.CustomSampler::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSampler_End_mEA784673E7905D135318075BD797E47A175858A9 (CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * __this, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.PanelRenderer::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_Deinitialize_m2BC06FD04251F1443E4BD940107722C9A16A7550 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<Unity.UIElements.Runtime.PanelRenderer/PanelOwner>()
inline PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6 * ScriptableObject_CreateInstance_TisPanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6_mC9BDD64235F3B16AC4E44A92E9DA6F05C7B46215 (const RuntimeMethod* method)
{
	return ((  PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6 * (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared)(method);
}
// UnityEngine.UIElements.IPanel Unity.UIElements.Runtime.InternalBridge::CreatePanel(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalBridge_CreatePanel_m97E8597B4553D15ABD65A85A3F69D12DD5BCC09F (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___scriptableObject0, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.PanelRenderer::set_panel(UnityEngine.UIElements.IPanel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PanelRenderer_set_panel_mEC2D7BFF9F1C8DA9D46AF52BF331B2E087327AC8_inline (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_name_m6C1E013C250D02FB6E5F55D9FE4814828E95A129 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement__ctor_mF241C761EA438B36F62EE80FF48EB48F359615D0 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.PanelRenderer::set_visualTree(UnityEngine.UIElements.VisualElement)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PanelRenderer_set_visualTree_mD6C5A9A49E75AE46EE36EBA1E7780053BE808569_inline (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement Unity.UIElements.Runtime.PanelRenderer::get_visualTree()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E_inline (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.IStyle UnityEngine.UIElements.VisualElement::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleEnum`1<!0> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow>::op_Implicit(!0)
inline StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278  StyleEnum_1_op_Implicit_mA8D1812B6E9B8E9C1A7A36C9081D50832941FC05 (int32_t ___v0, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278  (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_m420ECA2B8873B7F2379B76CB8A3F39B5B57C5C92_gshared)(___v0, method);
}
// System.Void UnityEngine.UIElements.VisualElement::Add(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Add_m6767CBF5ADBBD46BF27AE263D91F12D00754C8F2 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child0, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.InternalBridge::MarkAsDefaultStyleSheet(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_MarkAsDefaultStyleSheet_m52180B42C001EA6D89A549A023790FF52CB40EBE (StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElementStyleSheetSet UnityEngine.UIElements.VisualElement::get_styleSheets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  VisualElement_get_styleSheets_m11E9A2C34DC70C14C5F2867B7EDC063931104EF0 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementStyleSheetSet::Add(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementStyleSheetSet_Add_mC83BEC196BA93122BBE9DECF16981584E2247AE3 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.PanelRenderer::RecreateUIFromUxml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_RecreateUIFromUxml_m3C03814914985745293F1C6093192171BC861822 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<UnityEngine.Object> Unity.UIElements.Runtime.PanelRenderer::get_trackedAssetSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * PanelRenderer_get_trackedAssetSet_m8CB87046AA13DAB4C626591E0FA0BC7270E8048F (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Object>::Clear()
inline void HashSet_1_Clear_m399E83585D5FCC3965C58C74C297068048C2B5D1 (HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 *, const RuntimeMethod*))HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.Object> Unity.UIElements.Runtime.PanelRenderer::get_trackedAssetList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * PanelRenderer_get_trackedAssetList_mBE4C7DF68CDECD53E16FCAD52C1ECC5E798BF560 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Clear()
inline void List_1_Clear_mC986281A0F6F526F49A46B32BA044A00F562B121 (List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.Int32> Unity.UIElements.Runtime.PanelRenderer::get_trackedAssetHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * PanelRenderer_get_trackedAssetHashes_m6516F33A74A5585F821255122AB7F0DEB3B1FE18 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.VisualElement::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Clear_m83B231BAFCDEFB15DE8C5EB0AA4AA573C52EE68A (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualTreeAsset::CloneTree(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeAsset_CloneTree_m4697500AB500480285C8C482D609779D41F9DCC4 (VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___target0, const RuntimeMethod* method);
// System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>> Unity.UIElements.Runtime.PanelRenderer::get_postUxmlReload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * PanelRenderer_get_postUxmlReload_mD73CF0B88065A5774D24CE8B4E757DDAF7EB7C1B_inline (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>>::Invoke()
inline RuntimeObject* Func_1_Invoke_m16B66B1F393FB53DCBD3DF14D4ED64688FEDAFC7 (Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector2 Unity.UIElements.Runtime.PanelRenderer::GetActiveRenderTargetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PanelRenderer_GetActiveRenderTargetSize_m85488D72DFB16B1A580557F0AB7DC3886A20B9D1 (const RuntimeMethod* method);
// System.Single Unity.UIElements.Runtime.PanelScaler::ComputeScalingFactor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanelScaler_ComputeScalingFactor_m87891D2126A51A75BD815614F1BEF4452A3B49F3 (PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.InternalBridge::SetScale(UnityEngine.UIElements.IPanel,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_SetScale_m74541B775BDAB7ADDFC6E51328AC24B6A86A05B3 (RuntimeObject* ___panel0, float ___scale1, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleLength::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  StyleLength_op_Implicit_mB5C67D1E3D3103BD9C97065A73285403762265C8 (float ___v0, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.InternalBridge::UpdatePanel(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_UpdatePanel_m60C13E8BC2B8EBE91BEEAF2E6D35F12398488DE5 (RuntimeObject* ___panel0, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.InternalBridge::RepaintPanel(UnityEngine.UIElements.IPanel,UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_RepaintPanel_m0CB27A74A564E1A625CECFDD9973F08FE205AB62 (RuntimeObject* ___panel0, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___e1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  VisualElement_get_layout_mDAE3AD984D0CE9D7B4F92518051D2060EA928E79 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m0971FA11B481976C1F56306C7BBA7157FF236532 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// Unity.UIElements.Runtime.PanelScaler/IScaleModeImpl Unity.UIElements.Runtime.PanelScaler::get_impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PanelScaler_get_impl_mD15B279BE24A275492B440905D834435B5472D6D (PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * __this, const RuntimeMethod* method);
// Unity.UIElements.Runtime.InputWrapper Unity.UIElements.Runtime.UIElementsEventSystem::get_inputOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * UIElementsEventSystem_get_inputOverride_m9D2EE575BBCDB5A7D3F369E6E94B58DC1FC4763A_inline (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<Unity.UIElements.Runtime.InputWrapper>()
inline InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770* Component_GetComponents_TisInputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2_mF8E787D74386AD503CE89B75B3AE04D218E19CCA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Unity.UIElements.Runtime.InputWrapper>()
inline InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * GameObject_AddComponent_TisInputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2_m5FC9D2EAF19AE61B53F1D1BD79867FC986D85E9C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Unity.UIElements.Runtime.PanelRenderer>()
inline PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * Component_GetComponent_TisPanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517_mDA3F0E605E993A05865C916EAA3907444FC06CD6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// Unity.UIElements.Runtime.PanelRenderer Unity.UIElements.Runtime.UIElementsEventSystem::get_focusedPanelRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * UIElementsEventSystem_get_focusedPanelRenderer_m0FDF6F7457719493E91BCC724844075D56B1E6CD (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::get_operatingSystemFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_operatingSystemFamily_m797937E766B7FF87A5F1630263C49B814131DD95 (const RuntimeMethod* method);
// UnityEngine.UIElements.IPanel Unity.UIElements.Runtime.UIElementsEventSystem::get_focusedPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::get_isAppFocused()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UIElementsEventSystem_get_isAppFocused_m8097F8BBA9BF844DE63919D378D1CDE774AFDCE8_inline (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ShouldIgnoreEventsOnAppNotFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ShouldIgnoreEventsOnAppNotFocused_m24A3199DC3B295A778AD1E9F4F815E0D0510B41F (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::get_sendIMGUIEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_get_sendIMGUIEvents_m8F060AB6AB1CD4B2C8FFF645936CBB801F2588CA (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Event_get_delta_m2DABF0C93F9A2FDB5B3C916E89BC17E77AEE2680 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ScreenToPanel(Unity.UIElements.Runtime.PanelRenderer,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ScreenToPanel_m797E8128E66FDF947AE5BB54E355E780F43B64D5 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * ___panelRenderer0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenDelta2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___panelPosition3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___panelDelta4, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_mousePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_mousePosition_mD6216A507F0F1FCBB3489323ADA044384548487B (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_delta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_delta_m4F99A0AC9104D2BE1903C74B77607CCD3697424D (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.EventBase Unity.UIElements.Runtime.InternalBridge::CreateEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * InternalBridge_CreateEvent_mE203BC547EA7B1FCCB1C2E236DCD5D5A5F09C1EE (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___evt0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_PopEvent_mCE0C136F327B5FC3822743208222799F7301170B (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___outEvent0, const RuntimeMethod* method);
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::get_sendInputEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_get_sendInputEvents_m4B33B3715D459BA2DBA4B0C50350E5940C7B738B (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::get_sendNavigationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_get_sendNavigationEvents_m47549336A1656C80F999A2861AB16A15B3A678AC (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ShouldSendMoveFromInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ShouldSendMoveFromInput_mF43DE3E117B1C6C336ABCDCDB321FB140CB356D4 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Unity.UIElements.Runtime.UIElementsEventSystem::GetRawMoveVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIElementsEventSystem_GetRawMoveVector_m155C433440E00EDED6C2A2B3145843189DAC317E (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// Unity.UIElements.Runtime.NavigationMoveEvent Unity.UIElements.Runtime.NavigationMoveEvent::GetPooled(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * NavigationMoveEvent_GetPooled_mDAF84D543EF79673DBACD1B59171F6A65819C2D5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___moveVector0, const RuntimeMethod* method);
// Unity.UIElements.Runtime.InputWrapper Unity.UIElements.Runtime.UIElementsEventSystem::get_input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.EventBase`1<Unity.UIElements.Runtime.NavigationSubmitEvent>::GetPooled()
inline NavigationSubmitEvent_t61EA218A23166F922C9828F5F4EEF3F0E1191CA6 * EventBase_1_GetPooled_m155D001A41BCAA2DCB10FECB25B1B078ED9C2227 (const RuntimeMethod* method)
{
	return ((  NavigationSubmitEvent_t61EA218A23166F922C9828F5F4EEF3F0E1191CA6 * (*) (const RuntimeMethod*))EventBase_1_GetPooled_m0981CD12ACF0B2A7CBD36F89C48E0E679C4D012D_gshared)(method);
}
// !0 UnityEngine.UIElements.EventBase`1<Unity.UIElements.Runtime.NavigationCancelEvent>::GetPooled()
inline NavigationCancelEvent_t6D8664F136E91A5FC7DD9736D468ADE6124E6A65 * EventBase_1_GetPooled_m7E088CBA72639F70195B20A26590B91D8AE5ECBF (const RuntimeMethod* method)
{
	return ((  NavigationCancelEvent_t6D8664F136E91A5FC7DD9736D468ADE6124E6A65 * (*) (const RuntimeMethod*))EventBase_1_GetPooled_m0981CD12ACF0B2A7CBD36F89C48E0E679C4D012D_gshared)(method);
}
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ProcessTouchEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ProcessTouchEvents_mD00D7347E595F215FC712E93FD7AAA3357EE2BF4 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::ProcessMouseEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsEventSystem_ProcessMouseEvents_mB274CDCFF9254F5B392E3DF72A3B5C704A666B54 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Touch::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_set_position_m74DE709CAB66F72A4E9A4F7A63430B710A5F847D (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_rawPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_rawPosition_mCC88EEAB263CA3D423C6079787BD44AFB3C61697 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Touch::set_rawPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_set_rawPosition_m8D8BE236924E5E57C74C7EDDE0DFAAC9E8CFFCB2 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Touch::set_deltaPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_set_deltaPosition_m81F7F3CD970CEB74678E098ADE7082BBC6F3DCAA (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.PointerEventBase`1<UnityEngine.UIElements.PointerDownEvent>::GetPooled(UnityEngine.Touch,UnityEngine.EventModifiers)
inline PointerDownEvent_tC94CCE820E4E6DCCD89A95DE94549BA550C27403 * PointerEventBase_1_GetPooled_m28FD93EDC4F4BC729350516F04050427C2B94089 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  ___touch0, int32_t ___modifiers1, const RuntimeMethod* method)
{
	return ((  PointerDownEvent_tC94CCE820E4E6DCCD89A95DE94549BA550C27403 * (*) (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C , int32_t, const RuntimeMethod*))PointerEventBase_1_GetPooled_m3134C2330BC8D2DFA706CFF7400004AD69033C19_gshared)(___touch0, ___modifiers1, method);
}
// !0 UnityEngine.UIElements.PointerEventBase`1<UnityEngine.UIElements.PointerMoveEvent>::GetPooled(UnityEngine.Touch,UnityEngine.EventModifiers)
inline PointerMoveEvent_t9D1DF9F3D7FF1E2CCBEF6281558B6B88DAA90D28 * PointerEventBase_1_GetPooled_m68160648176C72A6180CCDBA89315164BE5CD823 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  ___touch0, int32_t ___modifiers1, const RuntimeMethod* method)
{
	return ((  PointerMoveEvent_t9D1DF9F3D7FF1E2CCBEF6281558B6B88DAA90D28 * (*) (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C , int32_t, const RuntimeMethod*))PointerEventBase_1_GetPooled_m3134C2330BC8D2DFA706CFF7400004AD69033C19_gshared)(___touch0, ___modifiers1, method);
}
// !0 UnityEngine.UIElements.PointerEventBase`1<UnityEngine.UIElements.PointerStationaryEvent>::GetPooled(UnityEngine.Touch,UnityEngine.EventModifiers)
inline PointerStationaryEvent_tB5F216CAD6C42F3BF076F2EA0B1CC5F838EFE301 * PointerEventBase_1_GetPooled_mA8C5B1B36699CB9B36A2AE43471F6450DE619E5F (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  ___touch0, int32_t ___modifiers1, const RuntimeMethod* method)
{
	return ((  PointerStationaryEvent_tB5F216CAD6C42F3BF076F2EA0B1CC5F838EFE301 * (*) (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C , int32_t, const RuntimeMethod*))PointerEventBase_1_GetPooled_m3134C2330BC8D2DFA706CFF7400004AD69033C19_gshared)(___touch0, ___modifiers1, method);
}
// !0 UnityEngine.UIElements.PointerEventBase`1<UnityEngine.UIElements.PointerUpEvent>::GetPooled(UnityEngine.Touch,UnityEngine.EventModifiers)
inline PointerUpEvent_tFE3775D286474372874AF929B86FA46F4AC86333 * PointerEventBase_1_GetPooled_m91F7593672FA62E5A9BE1B6CFF361729EBA4DDB7 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  ___touch0, int32_t ___modifiers1, const RuntimeMethod* method)
{
	return ((  PointerUpEvent_tFE3775D286474372874AF929B86FA46F4AC86333 * (*) (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C , int32_t, const RuntimeMethod*))PointerEventBase_1_GetPooled_m3134C2330BC8D2DFA706CFF7400004AD69033C19_gshared)(___touch0, ___modifiers1, method);
}
// !0 UnityEngine.UIElements.PointerEventBase`1<UnityEngine.UIElements.PointerCancelEvent>::GetPooled(UnityEngine.Touch,UnityEngine.EventModifiers)
inline PointerCancelEvent_tA658A77DCA611873210006D2D89D4B02F38EB2DB * PointerEventBase_1_GetPooled_m4A7FCB55FEE6E8F7FFC0E5E4F5CDE9CF4E4F60CD (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  ___touch0, int32_t ___modifiers1, const RuntimeMethod* method)
{
	return ((  PointerCancelEvent_tA658A77DCA611873210006D2D89D4B02F38EB2DB * (*) (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C , int32_t, const RuntimeMethod*))PointerEventBase_1_GetPooled_m3134C2330BC8D2DFA706CFF7400004AD69033C19_gshared)(___touch0, ___modifiers1, method);
}
// UnityEngine.TouchType UnityEngine.Touch::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_type_m33FB24B6A53A307E8AC9881ED3B483DD4B44C050 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ScreenToPanel(Unity.UIElements.Runtime.PanelRenderer,UnityEngine.Touch&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ScreenToPanel_m8C1D16AE1F2CCDF501CA59FB773060C427D0F0B5 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * ___panelRenderer0, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * ___touch1, const RuntimeMethod* method);
// UnityEngine.UIElements.EventBase Unity.UIElements.Runtime.UIElementsEventSystem::MakeTouchEvent(UnityEngine.Touch,UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * UIElementsEventSystem_MakeTouchEvent_mC1D76335D40DAB26402A6BECBB30DD7C895B4181 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  ___touch0, int32_t ___modifiers1, const RuntimeMethod* method);
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ScreenToPanel(Unity.UIElements.Runtime.PanelRenderer,UnityEngine.Event&,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ScreenToPanel_m5A19678380877C325F604431E5561D3A8917FA5A (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * ___panelRenderer0, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** ___evt1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lastScreenPosition3, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_button(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_button_m3946222F432A2D3DC5FF493CC883DFB5DA9F1174 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_modifiers_m375A78874878A2BA7822E93CA62579B0E4CA7AA2 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_pressure(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_pressure_m8A58759BBEC3D6C0A33A10146E6634B41E17D739 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_clickCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_clickCount_mFB2FAE621779576AA952FB099323EBC5C7B80E40 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_character(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_character_mD0A42F6FCA52E9112469AD0C8ADB09A422134CA8 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_keyCode_m46A1716DB961C39116C5574601FB918FEAD7E9F3 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_displayIndex_mECFA15B9D33DF3F81E3567BFBED691B1691C8AA9 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_commandName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_commandName_m7B72EF13AA81C6BA3F2AA529C64A2A0513FBE53E (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::set_isAppFocused(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIElementsEventSystem_set_isAppFocused_m1763833C17662F4442FB92BA2FC8A1884AAF0B32_inline (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Boolean Unity.UIElements.Runtime.PanelRenderer::ScreenToPanel(UnityEngine.Vector2,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PanelRenderer_ScreenToPanel_m21E671A8E1E04953370551C79F1DEA4C899FD6A4 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___panelPosition1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m9752E145EA6D719B417AA27555DDC2A388AB4E0A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void Unity.UIElements.Runtime.WorldQuadDisplay::UpdateWorldGeometryAndMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldQuadDisplay_UpdateWorldGeometryAndMaterial_mAD2390DFA5C9F22268BA5B39AD1094E058DAE353 (WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6 * __this, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inNormal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inPoint1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float* ___enter1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, float ___distance0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Single Unity.UIElements.Runtime.PanelScaler/ConstantPhysicalSizeScaler::ComputeScalingFactor(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConstantPhysicalSizeScaler_ComputeScalingFactor_m1EEAAE780983812C1AED373BD800B9A8F1DBC6D6 (ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, float ___currentDpi1, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55 (const RuntimeMethod* method);
// System.Single Unity.UIElements.Runtime.PanelScaler/ConstantPhysicalSizeScaler::Unity.UIElements.Runtime.PanelScaler.IScaleModeImpl.ComputeScalingFactor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConstantPhysicalSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_mF99BEFA62FEA1FFA109ABFEC3DC04FEA23F055A8 (ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method);
// System.Single Unity.UIElements.Runtime.PanelScaler/ConstantPixelSizeScaler::Unity.UIElements.Runtime.PanelScaler.IScaleModeImpl.ComputeScalingFactor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConstantPixelSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_m9ADCEA6D6D1E42886EE05BABF337625649E9F4E3 (ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2Int::op_Implicit(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Single Unity.UIElements.Runtime.PanelScaler/ScaleWithScreenSizeScaler::Unity.UIElements.Runtime.PanelScaler.IScaleModeImpl.ComputeScalingFactor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleWithScreenSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_mFE14D5B257EBA3645D236281D2F80AE3652079B9 (ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.UIElements.Runtime.InGamePanelScalerInspector::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGamePanelScalerInspector_OnEnable_m0FD6BA36934779D524D7C918FD5410510ED13004 (InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InGamePanelScalerInspector_OnEnable_m0FD6BA36934779D524D7C918FD5410510ED13004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scaler = GetComponent<PanelScaler>();
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_0 = Component_GetComponent_TisPanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83_mDBB77C7B82A15259FE2750EECC642FC836BD114B(__this, /*hidden argument*/Component_GetComponent_TisPanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83_mDBB77C7B82A15259FE2750EECC642FC836BD114B_RuntimeMethod_var);
		__this->set_scaler_4(L_0);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.InGamePanelScalerInspector::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGamePanelScalerInspector_OnGUI_m07496E000A72254A4225AEFE9C1C60822E91D49E (InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InGamePanelScalerInspector_OnGUI_m07496E000A72254A4225AEFE9C1C60822E91D49E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// if (scaler == null)
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_0 = __this->get_scaler_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// GUILayout.Label("Failed to retrieve UIECanvasScaler component");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_3 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral85B4E44A3D608F73A088A852E58663F0AA112682, L_3, /*hidden argument*/NULL);
		// return;
		goto IL_0124;
	}

IL_0027:
	{
		// var bgColor = GUI.backgroundColor;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = GUI_get_backgroundColor_mE1842C85D434A0E7FE9610AE78CE73C836840DF8(/*hidden argument*/NULL);
		V_0 = L_4;
		// var contentColor = GUI.contentColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = GUI_get_contentColor_m3EEF13AC6245E87901BB9B1615AFC7867D94EE0B(/*hidden argument*/NULL);
		V_1 = L_5;
		// GUI.backgroundColor = Color.grey;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		GUI_set_backgroundColor_mB2569F0207659CA64618904A3D2063CF3D9D359C(L_6, /*hidden argument*/NULL);
		// GUI.contentColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		GUI_set_contentColor_mC580BA6155FF1ED522B03FD7DC9AB112E5D43586(L_7, /*hidden argument*/NULL);
		// GUILayout.BeginVertical();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_8 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginVertical_mE0941591491BBDAA25FF7CD48415750FD08D10ED(L_8, /*hidden argument*/NULL);
		// var index = Array.IndexOf(s_ScaleModes, scaler.scaleMode);
		IL2CPP_RUNTIME_CLASS_INIT(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var);
		ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418* L_9 = ((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->get_s_ScaleModes_5();
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_10 = __this->get_scaler_4();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_scaleMode_7();
		int32_t L_12 = Array_IndexOf_TisScaleMode_tFCA174CC93461B5C6CBCA997C51609CEB267812B_m3253FC7F98EFA3630378F62E36B91E1AB3F6BA99(L_9, L_11, /*hidden argument*/Array_IndexOf_TisScaleMode_tFCA174CC93461B5C6CBCA997C51609CEB267812B_m3253FC7F98EFA3630378F62E36B91E1AB3F6BA99_RuntimeMethod_var);
		V_2 = L_12;
		// index = GUILayout.SelectionGrid(index, s_ScaleModeLabels, s_ScaleModes.Length);
		int32_t L_13 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = ((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->get_s_ScaleModeLabels_6();
		ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418* L_15 = ((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->get_s_ScaleModes_5();
		NullCheck(L_15);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_16 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		int32_t L_17 = GUILayout_SelectionGrid_mC91F67BAD5270E7EA78245D649AFA8F06194932F(L_13, L_14, (((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))), L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// scaler.scaleMode = s_ScaleModes[index];
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_18 = __this->get_scaler_4();
		ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418* L_19 = ((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->get_s_ScaleModes_5();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (int32_t)(L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		L_18->set_scaleMode_7(L_22);
		// switch (scaler.scaleMode)
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_23 = __this->get_scaler_4();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_scaleMode_7();
		V_4 = L_24;
		int32_t L_25 = V_4;
		switch (L_25)
		{
			case 0:
			{
				goto IL_00b6;
			}
			case 1:
			{
				goto IL_00d4;
			}
			case 2:
			{
				goto IL_00f2;
			}
		}
	}
	{
		goto IL_0110;
	}

IL_00b6:
	{
		// scaler.constantPixelSizeScaler = Edit(scaler.constantPixelSizeScaler);
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_26 = __this->get_scaler_4();
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_27 = __this->get_scaler_4();
		NullCheck(L_27);
		ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  L_28 = L_27->get_constantPixelSizeScaler_4();
		ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  L_29 = InGamePanelScalerInspector_Edit_m5333B673AA6818E80F13C412565184BE37ECDCEF(__this, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set_constantPixelSizeScaler_4(L_29);
		// break;
		goto IL_0110;
	}

IL_00d4:
	{
		// scaler.constantPhysicalSizeScaler = Edit(scaler.constantPhysicalSizeScaler);
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_30 = __this->get_scaler_4();
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_31 = __this->get_scaler_4();
		NullCheck(L_31);
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_32 = L_31->get_constantPhysicalSizeScaler_5();
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_33 = InGamePanelScalerInspector_Edit_m3E755E960E58B9F479BE58A93E145E97DFA07698(__this, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		L_30->set_constantPhysicalSizeScaler_5(L_33);
		// break;
		goto IL_0110;
	}

IL_00f2:
	{
		// scaler.scaleWithScreenSizeScaler = Edit(scaler.scaleWithScreenSizeScaler);
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_34 = __this->get_scaler_4();
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_35 = __this->get_scaler_4();
		NullCheck(L_35);
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_36 = L_35->get_scaleWithScreenSizeScaler_6();
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_37 = InGamePanelScalerInspector_Edit_m36DE3171C00734DA803939745CC34538858D01DD(__this, L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		L_34->set_scaleWithScreenSizeScaler_6(L_37);
		// break;
		goto IL_0110;
	}

IL_0110:
	{
		// GUILayout.EndVertical();
		GUILayout_EndVertical_mBCF5058C9591A4064722C2B763EF98D066BFDCAD(/*hidden argument*/NULL);
		// GUI.backgroundColor = bgColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_backgroundColor_mB2569F0207659CA64618904A3D2063CF3D9D359C(L_38, /*hidden argument*/NULL);
		// GUI.contentColor = contentColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39 = V_1;
		GUI_set_contentColor_mC580BA6155FF1ED522B03FD7DC9AB112E5D43586(L_39, /*hidden argument*/NULL);
	}

IL_0124:
	{
		// }
		return;
	}
}
// Unity.UIElements.Runtime.PanelScaler_ConstantPixelSizeScaler Unity.UIElements.Runtime.InGamePanelScalerInspector::Edit(Unity.UIElements.Runtime.PanelScaler_ConstantPixelSizeScaler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  InGamePanelScalerInspector_Edit_m5333B673AA6818E80F13C412565184BE37ECDCEF (InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102 * __this, ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  ___scalerImpl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InGamePanelScalerInspector_Edit_m5333B673AA6818E80F13C412565184BE37ECDCEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GUILayout.Label($"Scale Factor {scalerImpl.scaleFactor}");
		ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  L_0 = ___scalerImpl0;
		float L_1 = L_0.get_scaleFactor_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralBD25E3A494BAB3D65BA826D5F40165921AED8347, L_3, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_5 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_4, L_5, /*hidden argument*/NULL);
		// scalerImpl.scaleFactor = GUILayout.HorizontalSlider(scalerImpl.scaleFactor, 0.001f, 4);
		ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  L_6 = ___scalerImpl0;
		float L_7 = L_6.get_scaleFactor_0();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_8 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		float L_9 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(L_7, (0.00100000005f), (4.0f), L_8, /*hidden argument*/NULL);
		(&___scalerImpl0)->set_scaleFactor_0(L_9);
		// return scalerImpl;
		ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  L_10 = ___scalerImpl0;
		V_0 = L_10;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  L_11 = V_0;
		return L_11;
	}
}
// Unity.UIElements.Runtime.PanelScaler_ConstantPhysicalSizeScaler Unity.UIElements.Runtime.InGamePanelScalerInspector::Edit(Unity.UIElements.Runtime.PanelScaler_ConstantPhysicalSizeScaler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  InGamePanelScalerInspector_Edit_m3E755E960E58B9F479BE58A93E145E97DFA07698 (InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102 * __this, ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  ___scalerImpl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InGamePanelScalerInspector_Edit_m3E755E960E58B9F479BE58A93E145E97DFA07698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GUILayout.Label($"Reference DPI {scalerImpl.referenceDpi}");
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_0 = ___scalerImpl0;
		float L_1 = L_0.get_referenceDpi_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral0FB9BC08C5D5D8F0D4DA64623826F8A6A2C35DB4, L_3, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_5 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_4, L_5, /*hidden argument*/NULL);
		// scalerImpl.referenceDpi = Mathf.RoundToInt(GUILayout.HorizontalSlider(scalerImpl.referenceDpi, 1, 300));
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_6 = ___scalerImpl0;
		float L_7 = L_6.get_referenceDpi_0();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_8 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		float L_9 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(L_7, (1.0f), (300.0f), L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_9, /*hidden argument*/NULL);
		(&___scalerImpl0)->set_referenceDpi_0((((float)((float)L_10))));
		// GUILayout.Label($"Fallback DPI {scalerImpl.fallbackDpi}");
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_11 = ___scalerImpl0;
		float L_12 = L_11.get_fallbackDpi_1();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral08418E4E30452DB9A7F259FB8227C376A2C74A6F, L_14, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_16 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_15, L_16, /*hidden argument*/NULL);
		// scalerImpl.fallbackDpi = Mathf.RoundToInt(GUILayout.HorizontalSlider(scalerImpl.fallbackDpi, 1, 300));
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_17 = ___scalerImpl0;
		float L_18 = L_17.get_fallbackDpi_1();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_19 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		float L_20 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(L_18, (1.0f), (300.0f), L_19, /*hidden argument*/NULL);
		int32_t L_21 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_20, /*hidden argument*/NULL);
		(&___scalerImpl0)->set_fallbackDpi_1((((float)((float)L_21))));
		// return scalerImpl;
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_22 = ___scalerImpl0;
		V_0 = L_22;
		goto IL_0093;
	}

IL_0093:
	{
		// }
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_23 = V_0;
		return L_23;
	}
}
// Unity.UIElements.Runtime.PanelScaler_ScaleWithScreenSizeScaler Unity.UIElements.Runtime.InGamePanelScalerInspector::Edit(Unity.UIElements.Runtime.PanelScaler_ScaleWithScreenSizeScaler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  InGamePanelScalerInspector_Edit_m36DE3171C00734DA803939745CC34538858D01DD (InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102 * __this, ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  ___scalerImpl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InGamePanelScalerInspector_Edit_m36DE3171C00734DA803939745CC34538858D01DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var refX = scalerImpl.referenceResolution.x;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_0 = (&___scalerImpl0)->get_address_of_referenceResolution_0();
		int32_t L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var refY = scalerImpl.referenceResolution.y;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_2 = (&___scalerImpl0)->get_address_of_referenceResolution_0();
		int32_t L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// GUILayout.Label($"Reference Resolution Width {refX}");
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral87CC1E87301048A005420D13442996145FC976D5, L_6, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_8 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_7, L_8, /*hidden argument*/NULL);
		// refX = Mathf.RoundToInt(GUILayout.HorizontalSlider(refX, 1, 1920));
		int32_t L_9 = V_0;
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_10 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		float L_11 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D((((float)((float)L_9))), (1.0f), (1920.0f), L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_12 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// GUILayout.Label($"Reference Resolution Height {refY}");
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5DC135888D097499EC5BAB695F0D6E5CB1E68059, L_15, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_17 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_16, L_17, /*hidden argument*/NULL);
		// refY = Mathf.RoundToInt(GUILayout.HorizontalSlider(refY, 1, 1080));
		int32_t L_18 = V_1;
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_19 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		float L_20 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D((((float)((float)L_18))), (1.0f), (1080.0f), L_19, /*hidden argument*/NULL);
		int32_t L_21 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		// scalerImpl.referenceResolution = new Vector2Int(refX, refY);
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_24), L_22, L_23, /*hidden argument*/NULL);
		(&___scalerImpl0)->set_referenceResolution_0(L_24);
		// var index = Array.IndexOf(s_MatchModes, scalerImpl.screenMatchMode);
		IL2CPP_RUNTIME_CLASS_INIT(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var);
		ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9* L_25 = ((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->get_s_MatchModes_7();
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_26 = ___scalerImpl0;
		int32_t L_27 = L_26.get_screenMatchMode_1();
		int32_t L_28 = Array_IndexOf_TisScreenMatchMode_t8D0BE1D62FF7469C85B141D50A3C4823DD3C1274_m0CC1189B814DA3A6C2EBC34EC606D6D577953939(L_25, L_27, /*hidden argument*/Array_IndexOf_TisScreenMatchMode_t8D0BE1D62FF7469C85B141D50A3C4823DD3C1274_m0CC1189B814DA3A6C2EBC34EC606D6D577953939_RuntimeMethod_var);
		V_2 = L_28;
		// index = GUILayout.SelectionGrid(index, s_MatchModeLabels, s_MatchModes.Length);
		int32_t L_29 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = ((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->get_s_MatchModeLabels_8();
		ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9* L_31 = ((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->get_s_MatchModes_7();
		NullCheck(L_31);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_32 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		int32_t L_33 = GUILayout_SelectionGrid_mC91F67BAD5270E7EA78245D649AFA8F06194932F(L_29, L_30, (((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))), L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		// scalerImpl.screenMatchMode = s_MatchModes[index];
		ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9* L_34 = ((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->get_s_MatchModes_7();
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (int32_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		(&___scalerImpl0)->set_screenMatchMode_1(L_37);
		// if (scalerImpl.screenMatchMode == PanelScaler.ScreenMatchMode.MatchWidthOrHeight)
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_38 = ___scalerImpl0;
		int32_t L_39 = L_38.get_screenMatchMode_1();
		V_3 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_3;
		if (!L_40)
		{
			goto IL_011e;
		}
	}
	{
		// GUILayout.Label($"Match {scalerImpl.match}");
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_41 = ___scalerImpl0;
		float L_42 = L_41.get_match_2();
		float L_43 = L_42;
		RuntimeObject * L_44 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralA8967182BE82926011B875D652CDECEEF72CD255, L_44, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_46 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_45, L_46, /*hidden argument*/NULL);
		// scalerImpl.match = GUILayout.HorizontalSlider(scalerImpl.match, 0, 1);
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_47 = ___scalerImpl0;
		float L_48 = L_47.get_match_2();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_49 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		float L_50 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(L_48, (0.0f), (1.0f), L_49, /*hidden argument*/NULL);
		(&___scalerImpl0)->set_match_2(L_50);
	}

IL_011e:
	{
		// return scalerImpl;
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_51 = ___scalerImpl0;
		V_4 = L_51;
		goto IL_0123;
	}

IL_0123:
	{
		// }
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_52 = V_4;
		return L_52;
	}
}
// System.Void Unity.UIElements.Runtime.InGamePanelScalerInspector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGamePanelScalerInspector__ctor_m9906AD06D845C6EB535FAAA4BDF6CD7EB5010410 (InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.UIElements.Runtime.InGamePanelScalerInspector::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGamePanelScalerInspector__cctor_m72FADD2C3CB883EC8EFB0D28C9FBEA9F380CF24D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InGamePanelScalerInspector__cctor_m72FADD2C3CB883EC8EFB0D28C9FBEA9F380CF24D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PanelScaler.ScaleMode[] s_ScaleModes =
		// {
		//     PanelScaler.ScaleMode.ConstantPixelSize,
		//     PanelScaler.ScaleMode.ScaleWithScreenSize,
		//     PanelScaler.ScaleMode.ConstantPhysicalSize
		// };
		ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418* L_0 = (ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418*)(ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418*)SZArrayNew(ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418_il2cpp_TypeInfo_var, (uint32_t)3);
		ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		ScaleModeU5BU5D_t71036928FC7C041E6DFD8131B03B9D5061514418* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->set_s_ScaleModes_5(L_2);
		// private static string[] s_ScaleModeLabels =
		// {
		//     "Constant Pixel Size",
		//     "Scale With Screen Size",
		//     "Constant Physical Size"
		// };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralFF27DB249D49F1593C0EDD4BFF72820BDAE2A194);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFF27DB249D49F1593C0EDD4BFF72820BDAE2A194);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral152A2E93D632203F9F05A08D7A290E3EC97C7289);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral152A2E93D632203F9F05A08D7A290E3EC97C7289);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC429FF940593BD22EDE76311DE76BE17391A7B6E);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC429FF940593BD22EDE76311DE76BE17391A7B6E);
		((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->set_s_ScaleModeLabels_6(L_6);
		// private static PanelScaler.ScreenMatchMode[] s_MatchModes =
		// {
		//     PanelScaler.ScreenMatchMode.MatchWidthOrHeight,
		//     PanelScaler.ScreenMatchMode.Expand,
		//     PanelScaler.ScreenMatchMode.Shrink
		// };
		ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9* L_7 = (ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9*)(ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9*)SZArrayNew(ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9_il2cpp_TypeInfo_var, (uint32_t)3);
		ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		ScreenMatchModeU5BU5D_t97378C5F3EDA3D6D14D6549966202BE21F25B0F9* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->set_s_MatchModes_7(L_9);
		// private static string[] s_MatchModeLabels =
		// {
		//     "Match Width Or Height",
		//     "Expand",
		//     "Shrink"
		// };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral838BABD2F37FDEE93E73FC6BDDE01AC2BA17D7D3);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral838BABD2F37FDEE93E73FC6BDDE01AC2BA17D7D3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral903EA876E244AABF5641B47C1BBA53DF2C20F707);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral903EA876E244AABF5641B47C1BBA53DF2C20F707);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral9C292EA9ADF0C459290E0855AFC6E0EB52EB3108);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9C292EA9ADF0C459290E0855AFC6E0EB52EB3108);
		((InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_StaticFields*)il2cpp_codegen_static_fields_for(InGamePanelScalerInspector_t265279F1A6D1A95B6877D141609697B4D2620102_il2cpp_TypeInfo_var))->set_s_MatchModeLabels_8(L_13);
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
// System.String Unity.UIElements.Runtime.InputWrapper::get_compositionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputWrapper_get_compositionString_m456D36C16449118F9F5529BC5413813CEC8B464D (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return Input.compositionString; }
		String_t* L_0 = Input_get_compositionString_mF957B324E35155878D307CE2AEE0AACC9BEC25BD(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Input.compositionString; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.IMECompositionMode Unity.UIElements.Runtime.InputWrapper::get_imeCompositionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputWrapper_get_imeCompositionMode_mBB1550C9038B8CD9AFEFAEC7C44190BBBFD9060B (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return Input.imeCompositionMode; }
		int32_t L_0 = Input_get_imeCompositionMode_m04AD6A8C7FEE55E7C4F70885DB5AF222E9F904E5(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Input.imeCompositionMode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.UIElements.Runtime.InputWrapper::set_imeCompositionMode(UnityEngine.IMECompositionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputWrapper_set_imeCompositionMode_m2A0FD7D70BCA7C7127C93B577B3FF08C53B3CCC7 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { Input.imeCompositionMode = value; }
		int32_t L_0 = ___value0;
		Input_set_imeCompositionMode_m7D4AA771F1F616FE74A97CA186C4B55EF268E112(L_0, /*hidden argument*/NULL);
		// set { Input.imeCompositionMode = value; }
		return;
	}
}
// UnityEngine.Vector2 Unity.UIElements.Runtime.InputWrapper::get_compositionCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputWrapper_get_compositionCursorPos_m71DEF45113D225D80AB87C53619BCA14B99788D8 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return Input.compositionCursorPos; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = Input_get_compositionCursorPos_m70946478FB2B607BC3BC5EC1280AA217323518B3(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Input.compositionCursorPos; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.UIElements.Runtime.InputWrapper::set_compositionCursorPos(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputWrapper_set_compositionCursorPos_mE9EEB697BE60F9A2D9D65B8F12F8B4AB73CCE214 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// set { Input.compositionCursorPos = value; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		Input_set_compositionCursorPos_mA2A9D63F782E3C75F065F031C67C2A1363D47D9C(L_0, /*hidden argument*/NULL);
		// set { Input.compositionCursorPos = value; }
		return;
	}
}
// System.Boolean Unity.UIElements.Runtime.InputWrapper::get_mousePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_get_mousePresent_mBA01C476CA0C53F5B1806AEBA57CFFB185E10DB5 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return Input.mousePresent; }
		bool L_0 = Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Input.mousePresent; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.UIElements.Runtime.InputWrapper::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_GetMouseButtonDown_m6D52D2195FC906EB6016D4118B9F2DCBECEEFCBD (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Input.GetMouseButtonDown(button);
		int32_t L_0 = ___button0;
		bool L_1 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.UIElements.Runtime.InputWrapper::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_GetMouseButtonUp_mBE0C236942C047ABF3F9A0599C0524E617B86308 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Input.GetMouseButtonUp(button);
		int32_t L_0 = ___button0;
		bool L_1 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.UIElements.Runtime.InputWrapper::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_GetMouseButton_mCACE485802D65596C71AC2169E2DFBE3C59CF87F (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Input.GetMouseButton(button);
		int32_t L_0 = ___button0;
		bool L_1 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector2 Unity.UIElements.Runtime.InputWrapper::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputWrapper_get_mousePosition_mF1C70196324E3887825FD0D7E48B025CA1254231 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputWrapper_get_mousePosition_mF1C70196324E3887825FD0D7E48B025CA1254231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return Input.mousePosition; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// get { return Input.mousePosition; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector2 Unity.UIElements.Runtime.InputWrapper::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputWrapper_get_mouseScrollDelta_mF9732690D25EF42E417262C30ECAB3C949209F72 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return Input.mouseScrollDelta; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Input.mouseScrollDelta; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.UIElements.Runtime.InputWrapper::get_touchSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_get_touchSupported_mB7CCF29F25EFEADBABF25DE28818DC48906C8FF3 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return Input.touchSupported; }
		bool L_0 = Input_get_touchSupported_mE5B2F5199B4CC16D89AD2C3125B5CB38F4B4867B(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Input.touchSupported; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Unity.UIElements.Runtime.InputWrapper::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputWrapper_get_touchCount_m38499B1A0016AC43922B45796B9B575EFAA3E206 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return Input.touchCount; }
		int32_t L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Input.touchCount; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Touch Unity.UIElements.Runtime.InputWrapper::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  InputWrapper_GetTouch_m350F50082BEC566D94813C55913150838F5AF59F (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Input.GetTouch(index);
		int32_t L_0 = ___index0;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.UIElements.Runtime.InputWrapper::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputWrapper_GetAxisRaw_m11A96E68AA0EC55F2324E5A7FECEC6C317CD74E0 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, String_t* ___axisName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return Input.GetAxisRaw(axisName);
		String_t* L_0 = ___axisName0;
		float L_1 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.UIElements.Runtime.InputWrapper::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_GetButtonDown_m8D64043DE3323C74CAB0BA53930B85336A3243D5 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, String_t* ___buttonName0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Input.GetButtonDown(buttonName);
		String_t* L_0 = ___buttonName0;
		bool L_1 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.UIElements.Runtime.InputWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputWrapper__ctor_m528C35EFEDDFC13A4F721775E7E5CAD598AA4D83 (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * __this, const RuntimeMethod* method)
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
// System.Void Unity.UIElements.Runtime.NavigationCancelEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCancelEvent__ctor_mE0C11850EA7620563CC6ECFC53C88E626563C98A (NavigationCancelEvent_t6D8664F136E91A5FC7DD9736D468ADE6124E6A65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCancelEvent__ctor_mE0C11850EA7620563CC6ECFC53C88E626563C98A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NavigationEventBase_1__ctor_m4A320E1477D733F00901BC41B172DFA214FB6071(__this, /*hidden argument*/NavigationEventBase_1__ctor_m4A320E1477D733F00901BC41B172DFA214FB6071_RuntimeMethod_var);
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
// Unity.UIElements.Runtime.NavigationMoveEvent_Direction Unity.UIElements.Runtime.NavigationMoveEvent::DetermineMoveDirection(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavigationMoveEvent_DetermineMoveDirection_mD8658A2A5B225427BFCDDD1EBA093580AAAD0EE5 (float ___x0, float ___y1, float ___deadZone2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationMoveEvent_DetermineMoveDirection_mD8658A2A5B225427BFCDDD1EBA093580AAAD0EE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (new Vector2(x, y).sqrMagnitude < deadZone * deadZone)
		float L_0 = ___x0;
		float L_1 = ___y1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		float L_4 = ___deadZone2;
		float L_5 = ___deadZone2;
		V_0 = (bool)((((float)L_3) < ((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		// return Direction.None;
		V_2 = 0;
		goto IL_005d;
	}

IL_001d:
	{
		// if (Mathf.Abs(x) > Mathf.Abs(y))
		float L_7 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_8 = fabsf(L_7);
		float L_9 = ___y1;
		float L_10 = fabsf(L_9);
		V_3 = (bool)((((float)L_8) > ((float)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// if (x > 0)
		float L_12 = ___x0;
		V_4 = (bool)((((float)L_12) > ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		// return Direction.Right;
		V_2 = 3;
		goto IL_005d;
	}

IL_0042:
	{
		// return Direction.Left;
		V_2 = 1;
		goto IL_005d;
	}

IL_0046:
	{
		// if (y > 0)
		float L_14 = ___y1;
		V_5 = (bool)((((float)L_14) > ((float)(0.0f)))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0059;
		}
	}
	{
		// return Direction.Up;
		V_2 = 2;
		goto IL_005d;
	}

IL_0059:
	{
		// return Direction.Down;
		V_2 = 4;
		goto IL_005d;
	}

IL_005d:
	{
		// }
		int32_t L_16 = V_2;
		return L_16;
	}
}
// Unity.UIElements.Runtime.NavigationMoveEvent_Direction Unity.UIElements.Runtime.NavigationMoveEvent::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavigationMoveEvent_get_direction_m486929CC78F55DCDEBEE6E5D8AAD9406DC326C1C (NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * __this, const RuntimeMethod* method)
{
	{
		// public Direction direction { get; private set; }
		int32_t L_0 = __this->get_U3CdirectionU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void Unity.UIElements.Runtime.NavigationMoveEvent::set_direction(Unity.UIElements.Runtime.NavigationMoveEvent_Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationMoveEvent_set_direction_m9EA969440F5DAC49ED27E85A847AE3974360F1C9 (NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Direction direction { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CdirectionU3Ek__BackingField_18(L_0);
		return;
	}
}
// UnityEngine.Vector2 Unity.UIElements.Runtime.NavigationMoveEvent::get_move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  NavigationMoveEvent_get_move_m88E9FE50D909425322EA0A5A10636BEFC7FD4BE0 (NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 move { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CmoveU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void Unity.UIElements.Runtime.NavigationMoveEvent::set_move(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationMoveEvent_set_move_m3D4F6AEE8300C0262C223E404FF62F495DA5F654 (NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 move { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CmoveU3Ek__BackingField_19(L_0);
		return;
	}
}
// Unity.UIElements.Runtime.NavigationMoveEvent Unity.UIElements.Runtime.NavigationMoveEvent::GetPooled(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * NavigationMoveEvent_GetPooled_mDAF84D543EF79673DBACD1B59171F6A65819C2D5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___moveVector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationMoveEvent_GetPooled_mDAF84D543EF79673DBACD1B59171F6A65819C2D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * V_0 = NULL;
	NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * V_1 = NULL;
	{
		// NavigationMoveEvent e = GetPooled();
		IL2CPP_RUNTIME_CLASS_INIT(EventBase_1_t0EF0DD78648CE15541A9AAA4F89387975179BBEC_il2cpp_TypeInfo_var);
		NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * L_0 = EventBase_1_GetPooled_mEEE019B76A607287F1F095D77CF21F9EC59879AC(/*hidden argument*/EventBase_1_GetPooled_mEEE019B76A607287F1F095D77CF21F9EC59879AC_RuntimeMethod_var);
		V_0 = L_0;
		// e.direction = DetermineMoveDirection(moveVector.x, moveVector.y);
		NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * L_1 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___moveVector0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___moveVector0;
		float L_5 = L_4.get_y_1();
		int32_t L_6 = NavigationMoveEvent_DetermineMoveDirection_mD8658A2A5B225427BFCDDD1EBA093580AAAD0EE5(L_3, L_5, (0.600000024f), /*hidden argument*/NULL);
		NullCheck(L_1);
		NavigationMoveEvent_set_direction_m9EA969440F5DAC49ED27E85A847AE3974360F1C9_inline(L_1, L_6, /*hidden argument*/NULL);
		// e.move = moveVector;
		NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * L_7 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___moveVector0;
		NullCheck(L_7);
		NavigationMoveEvent_set_move_m3D4F6AEE8300C0262C223E404FF62F495DA5F654_inline(L_7, L_8, /*hidden argument*/NULL);
		// return e;
		NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * L_9 = V_0;
		V_1 = L_9;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * L_10 = V_1;
		return L_10;
	}
}
// System.Void Unity.UIElements.Runtime.NavigationMoveEvent::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationMoveEvent_Init_m08E35AE9B28774CFE20CF881318A74585CB4A7B0 (NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationMoveEvent_Init_m08E35AE9B28774CFE20CF881318A74585CB4A7B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Init();
		EventBase_1_Init_m545798B53E751466DF26E9304A9B39630F69A8F9(__this, /*hidden argument*/EventBase_1_Init_m545798B53E751466DF26E9304A9B39630F69A8F9_RuntimeMethod_var);
		// direction = Direction.None;
		NavigationMoveEvent_set_direction_m9EA969440F5DAC49ED27E85A847AE3974360F1C9_inline(__this, 0, /*hidden argument*/NULL);
		// move = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NavigationMoveEvent_set_move_m3D4F6AEE8300C0262C223E404FF62F495DA5F654_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.NavigationMoveEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationMoveEvent__ctor_m4B7F1515FD0DDADF14559CAB8655B2DB0B39D708 (NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationMoveEvent__ctor_m4B7F1515FD0DDADF14559CAB8655B2DB0B39D708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NavigationMoveEvent()
		NavigationEventBase_1__ctor_m00FD20E8B50344B1FBF165BF6EB5B076EEBC6DD0(__this, /*hidden argument*/NavigationEventBase_1__ctor_m00FD20E8B50344B1FBF165BF6EB5B076EEBC6DD0_RuntimeMethod_var);
		// Init();
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.UIElements.EventBase::Init() */, __this);
		// }
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
// System.Void Unity.UIElements.Runtime.NavigationSubmitEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationSubmitEvent__ctor_m0034F27359D04E724EED5651B8AEC2F58EE626AA (NavigationSubmitEvent_t61EA218A23166F922C9828F5F4EEF3F0E1191CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationSubmitEvent__ctor_m0034F27359D04E724EED5651B8AEC2F58EE626AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NavigationEventBase_1__ctor_m85DB76DFA84E6E9E6355F9A1DE589331846A032B(__this, /*hidden argument*/NavigationEventBase_1__ctor_m85DB76DFA84E6E9E6355F9A1DE589331846A032B_RuntimeMethod_var);
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
// UnityEngine.UIElements.VisualElement Unity.UIElements.Runtime.PanelRenderer::get_visualTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	{
		// public VisualElement visualTree { get; private set; }
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_U3CvisualTreeU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::set_visualTree(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_set_visualTree_mD6C5A9A49E75AE46EE36EBA1E7780053BE808569 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___value0, const RuntimeMethod* method)
{
	{
		// public VisualElement visualTree { get; private set; }
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___value0;
		__this->set_U3CvisualTreeU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.UIElements.IPanel Unity.UIElements.Runtime.PanelRenderer::get_panel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	{
		// public IPanel panel { get; protected set; }
		RuntimeObject* L_0 = __this->get_U3CpanelU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::set_panel(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_set_panel_mEC2D7BFF9F1C8DA9D46AF52BF331B2E087327AC8 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IPanel panel { get; protected set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CpanelU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>> Unity.UIElements.Runtime.PanelRenderer::get_postUxmlReload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * PanelRenderer_get_postUxmlReload_mD73CF0B88065A5774D24CE8B4E757DDAF7EB7C1B (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	{
		// public Func<IEnumerable<Object>> postUxmlReload { get; set; }
		Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * L_0 = __this->get_U3CpostUxmlReloadU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::set_postUxmlReload(System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_set_postUxmlReload_m7A1899A215FB4E591092586222EEBBA031A290BC (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * ___value0, const RuntimeMethod* method)
{
	{
		// public Func<IEnumerable<Object>> postUxmlReload { get; set; }
		Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * L_0 = ___value0;
		__this->set_U3CpostUxmlReloadU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Collections.Generic.HashSet`1<UnityEngine.Object> Unity.UIElements.Runtime.PanelRenderer::get_trackedAssetSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * PanelRenderer_get_trackedAssetSet_m8CB87046AA13DAB4C626591E0FA0BC7270E8048F (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_get_trackedAssetSet_m8CB87046AA13DAB4C626591E0FA0BC7270E8048F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * V_1 = NULL;
	{
		// if (m_TrackedAssetSet == null)
		HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * L_0 = __this->get_m_TrackedAssetSet_24();
		V_0 = (bool)((((RuntimeObject*)(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_TrackedAssetSet = new HashSet<Object>();
		HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * L_2 = (HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 *)il2cpp_codegen_object_new(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m47BE8F26D40810EF4DCA2CF9D664944C572E5F55(L_2, /*hidden argument*/HashSet_1__ctor_m47BE8F26D40810EF4DCA2CF9D664944C572E5F55_RuntimeMethod_var);
		__this->set_m_TrackedAssetSet_24(L_2);
	}

IL_0019:
	{
		// return m_TrackedAssetSet;
		HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * L_3 = __this->get_m_TrackedAssetSet_24();
		V_1 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * L_4 = V_1;
		return L_4;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Object> Unity.UIElements.Runtime.PanelRenderer::get_trackedAssetList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * PanelRenderer_get_trackedAssetList_mBE4C7DF68CDECD53E16FCAD52C1ECC5E798BF560 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_get_trackedAssetList_mBE4C7DF68CDECD53E16FCAD52C1ECC5E798BF560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * V_1 = NULL;
	{
		// if (m_TrackedAssetList == null)
		List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * L_0 = __this->get_m_TrackedAssetList_25();
		V_0 = (bool)((((RuntimeObject*)(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_TrackedAssetList = new List<Object>();
		List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * L_2 = (List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 *)il2cpp_codegen_object_new(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4_il2cpp_TypeInfo_var);
		List_1__ctor_m8786AF4A4AE06CDD3B907914EE860C2748ED2EA4(L_2, /*hidden argument*/List_1__ctor_m8786AF4A4AE06CDD3B907914EE860C2748ED2EA4_RuntimeMethod_var);
		__this->set_m_TrackedAssetList_25(L_2);
	}

IL_0019:
	{
		// return m_TrackedAssetList;
		List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * L_3 = __this->get_m_TrackedAssetList_25();
		V_1 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * L_4 = V_1;
		return L_4;
	}
}
// System.Collections.Generic.List`1<System.Int32> Unity.UIElements.Runtime.PanelRenderer::get_trackedAssetHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * PanelRenderer_get_trackedAssetHashes_m6516F33A74A5585F821255122AB7F0DEB3B1FE18 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_get_trackedAssetHashes_m6516F33A74A5585F821255122AB7F0DEB3B1FE18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	{
		// if (m_TrackedAssetHashes == null)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_m_TrackedAssetHashes_26();
		V_0 = (bool)((((RuntimeObject*)(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_TrackedAssetHashes = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_2, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_m_TrackedAssetHashes_26(L_2);
	}

IL_0019:
	{
		// return m_TrackedAssetHashes;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = __this->get_m_TrackedAssetHashes_26();
		V_1 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_4 = V_1;
		return L_4;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_OnValidate_mCFF8C045C41AB51D61CE14934C0AC1B8B6B6F356 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_OnValidate_mCFF8C045C41AB51D61CE14934C0AC1B8B6B6F356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// m_ShouldWarnWorldTransformMissing = true;
		__this->set_m_ShouldWarnWorldTransformMissing_23((bool)1);
		// if (panelTransform != null && panelTransform is IPanelTransform)
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = __this->get_panelTransform_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_2 = __this->get_panelTransform_10();
		G_B3_0 = ((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IPanelTransform_tA69B12E8BD538FDF2F14712F21C4FEE2023968CE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// m_PanelTransform = panelTransform as IPanelTransform;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_4 = __this->get_panelTransform_10();
		__this->set_m_PanelTransform_13(((RuntimeObject*)IsInst((RuntimeObject*)L_4, IPanelTransform_tA69B12E8BD538FDF2F14712F21C4FEE2023968CE_il2cpp_TypeInfo_var)));
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_Reset_mC7D8740E24B61E03CAAE8E1A20808AFF177CF3A8 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_OnEnable_m2027134A42EE91D92B04EFB38CE609F272D8644C (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_OnEnable_m2027134A42EE91D92B04EFB38CE609F272D8644C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PanelScaler = GetComponent<PanelScaler>();
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_0 = Component_GetComponent_TisPanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83_mDBB77C7B82A15259FE2750EECC642FC836BD114B(__this, /*hidden argument*/Component_GetComponent_TisPanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83_mDBB77C7B82A15259FE2750EECC642FC836BD114B_RuntimeMethod_var);
		__this->set_m_PanelScaler_14(L_0);
		// m_Event.type = EventType.Repaint;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_1 = __this->get_m_Event_18();
		NullCheck(L_1);
		Event_set_type_m9B687D79D5616CF25226B6AA9E9AA3DD597090BE(L_1, 7, /*hidden argument*/NULL);
		// m_Scale = Single.NaN;
		__this->set_m_Scale_19((std::numeric_limits<float>::quiet_NaN()));
		// m_TargetSize = new Vector2(Single.NaN, Single.NaN);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (std::numeric_limits<float>::quiet_NaN()), (std::numeric_limits<float>::quiet_NaN()), /*hidden argument*/NULL);
		__this->set_m_TargetSize_20(L_2);
		// m_TargetTexture = targetTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = __this->get_targetTexture_9();
		__this->set_m_TargetTexture_16(L_3);
		// InternalBridge.SetTargetTexture(panel, m_TargetTexture);
		RuntimeObject* L_4 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(__this, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = __this->get_m_TargetTexture_16();
		InternalBridge_SetTargetTexture_mD30E091CED00CBBBAFF0D3748502A9CD9AE5837D(L_4, L_5, /*hidden argument*/NULL);
		// OnValidate();
		PanelRenderer_OnValidate_mCFF8C045C41AB51D61CE14934C0AC1B8B6B6F356(__this, /*hidden argument*/NULL);
		// InternalBridge.RegisterPanel(gameObject.GetInstanceID(), panel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_6, /*hidden argument*/NULL);
		RuntimeObject* L_8 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(__this, /*hidden argument*/NULL);
		InternalBridge_RegisterPanel_m627065C426A3A43CFCA481270FCA1140B35D8F38(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_OnDisable_m7978BE11E16114E4C94A6A2D1BA96D123A879F51 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	{
		// InternalBridge.UnregisterPanel(gameObject.GetInstanceID());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_0, /*hidden argument*/NULL);
		InternalBridge_UnregisterPanel_m4F76B3206890C3E417FF78CCEBA339407C73039D(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_Awake_mE3C2226546C27F4724CBE98A81CB5374E5347DBA (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_Awake_mE3C2226546C27F4724CBE98A81CB5374E5347DBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_InitSampler = CustomSampler.Create("UIElements." + gameObject.name + ".Initialize");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA6E43235F271E3A68178E1CCD83793314BA320EE, L_1, _stringLiteral7CD93F26B73AFA65EC3F27CC8C21557FAA543373, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_3 = CustomSampler_Create_m9010A07C27FDDC7ECC2065AFA232BBDC6955C1E6(L_2, (bool)0, /*hidden argument*/NULL);
		__this->set_m_InitSampler_21(L_3);
		// m_UpdateSampler = CustomSampler.Create("UIElements." + gameObject.name + ".Update");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA6E43235F271E3A68178E1CCD83793314BA320EE, L_5, _stringLiteral0640D3F6D6142ECE4768AA82EA7E11CD3BB2F5B6, /*hidden argument*/NULL);
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_7 = CustomSampler_Create_m9010A07C27FDDC7ECC2065AFA232BBDC6955C1E6(L_6, (bool)0, /*hidden argument*/NULL);
		__this->set_m_UpdateSampler_22(L_7);
		// m_InitSampler.Begin();
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_8 = __this->get_m_InitSampler_21();
		NullCheck(L_8);
		CustomSampler_Begin_m787879DEAFA0A72D73CD41AE6411E60F7171B6F0(L_8, /*hidden argument*/NULL);
		// Initialize(gameObject.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		PanelRenderer_Initialize_m4CF5C04D025AC2CB51A1B2A22B308AAFEDC88EE9(__this, L_10, /*hidden argument*/NULL);
		// m_InitSampler.End();
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_11 = __this->get_m_InitSampler_21();
		NullCheck(L_11);
		CustomSampler_End_mEA784673E7905D135318075BD797E47A175858A9(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_OnDestroy_mA91E4D3D343E29B5D5100AE1DC1EDD6306A864F2 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	{
		// Deinitialize();
		PanelRenderer_Deinitialize_m2BC06FD04251F1443E4BD940107722C9A16A7550(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_Initialize_m4CF5C04D025AC2CB51A1B2A22B308AAFEDC88EE9 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_Initialize_m4CF5C04D025AC2CB51A1B2A22B308AAFEDC88EE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* V_5 = NULL;
	int32_t V_6 = 0;
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * V_7 = NULL;
	bool V_8 = false;
	{
		// m_InitializedCounter++;
		int32_t L_0 = __this->get_m_InitializedCounter_17();
		__this->set_m_InitializedCounter_17(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (m_InitializedCounter != 1)
		int32_t L_1 = __this->get_m_InitializedCounter_17();
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		goto IL_0117;
	}

IL_0024:
	{
		// m_PanelOwner = ScriptableObject.CreateInstance<PanelOwner>();
		PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6 * L_3 = ScriptableObject_CreateInstance_TisPanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6_mC9BDD64235F3B16AC4E44A92E9DA6F05C7B46215(/*hidden argument*/ScriptableObject_CreateInstance_TisPanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6_mC9BDD64235F3B16AC4E44A92E9DA6F05C7B46215_RuntimeMethod_var);
		__this->set_m_PanelOwner_15(L_3);
		// panel = InternalBridge.CreatePanel(m_PanelOwner);
		PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6 * L_4 = __this->get_m_PanelOwner_15();
		RuntimeObject* L_5 = InternalBridge_CreatePanel_m97E8597B4553D15ABD65A85A3F69D12DD5BCC09F(L_4, /*hidden argument*/NULL);
		PanelRenderer_set_panel_mEC2D7BFF9F1C8DA9D46AF52BF331B2E087327AC8_inline(__this, L_5, /*hidden argument*/NULL);
		// var root = panel.visualTree;
		RuntimeObject* L_6 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_7 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		// root.name = name;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_8 = V_0;
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VisualElement_set_name_m6C1E013C250D02FB6E5F55D9FE4814828E95A129(L_8, L_9, /*hidden argument*/NULL);
		// visualTree = new VisualElement {name = "runtime-panel-container"};
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_10 = (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)il2cpp_codegen_object_new(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		VisualElement__ctor_mF241C761EA438B36F62EE80FF48EB48F359615D0(L_10, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_11 = L_10;
		NullCheck(L_11);
		VisualElement_set_name_m6C1E013C250D02FB6E5F55D9FE4814828E95A129(L_11, _stringLiteralE28426DEED4719121BDF3CB4DD3CC3D8BE4EFDEB, /*hidden argument*/NULL);
		PanelRenderer_set_visualTree_mD6C5A9A49E75AE46EE36EBA1E7780053BE808569_inline(__this, L_11, /*hidden argument*/NULL);
		// visualTree.style.overflow = Overflow.Hidden;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_12 = PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		RuntimeObject* L_13 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541(L_12, /*hidden argument*/NULL);
		StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278  L_14 = StyleEnum_1_op_Implicit_mA8D1812B6E9B8E9C1A7A36C9081D50832941FC05(1, /*hidden argument*/StyleEnum_1_op_Implicit_mA8D1812B6E9B8E9C1A7A36C9081D50832941FC05_RuntimeMethod_var);
		NullCheck(L_13);
		InterfaceActionInvoker1< StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278  >::Invoke(11 /* System.Void UnityEngine.UIElements.IStyle::set_overflow(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, L_13, L_14);
		// root.Add(visualTree);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_15 = V_0;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_16 = PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		VisualElement_Add_m6767CBF5ADBBD46BF27AE263D91F12D00754C8F2(L_15, L_16, /*hidden argument*/NULL);
		// if (unityStyleSheet != null)
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_17 = __this->get_unityStyleSheet_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_18;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00c4;
		}
	}
	{
		// InternalBridge.MarkAsDefaultStyleSheet(unityStyleSheet);
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_20 = __this->get_unityStyleSheet_5();
		InternalBridge_MarkAsDefaultStyleSheet_m52180B42C001EA6D89A549A023790FF52CB40EBE(L_20, /*hidden argument*/NULL);
		// root.styleSheets.Add(unityStyleSheet);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_21 = V_0;
		NullCheck(L_21);
		VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  L_22 = VisualElement_get_styleSheets_m11E9A2C34DC70C14C5F2867B7EDC063931104EF0(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_23 = __this->get_unityStyleSheet_5();
		VisualElementStyleSheetSet_Add_mC83BEC196BA93122BBE9DECF16981584E2247AE3((VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(&V_3), L_23, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		// if (stylesheets != null)
		StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* L_24 = __this->get_stylesheets_6();
		V_4 = (bool)((!(((RuntimeObject*)(StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB*)L_24) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_0117;
		}
	}
	{
		// foreach (var uss in stylesheets)
		StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* L_26 = __this->get_stylesheets_6();
		V_5 = L_26;
		V_6 = 0;
		goto IL_010e;
	}

IL_00e2:
	{
		// foreach (var uss in stylesheets)
		StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* L_27 = V_5;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_7 = L_30;
		// if (uss != null)
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_31 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_32 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_31, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_0108;
		}
	}
	{
		// root.styleSheets.Add(uss);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_34 = V_0;
		NullCheck(L_34);
		VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  L_35 = VisualElement_get_styleSheets_m11E9A2C34DC70C14C5F2867B7EDC063931104EF0(L_34, /*hidden argument*/NULL);
		V_3 = L_35;
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_36 = V_7;
		VisualElementStyleSheetSet_Add_mC83BEC196BA93122BBE9DECF16981584E2247AE3((VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(&V_3), L_36, /*hidden argument*/NULL);
	}

IL_0108:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_010e:
	{
		// foreach (var uss in stylesheets)
		int32_t L_38 = V_6;
		StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* L_39 = V_5;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))))
		{
			goto IL_00e2;
		}
	}
	{
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_Start_mA4EB09C313A0A34268C7D50C4C7B75579C60C379 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	{
		// RecreateUIFromUxml();
		PanelRenderer_RecreateUIFromUxml_m3C03814914985745293F1C6093192171BC861822(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::RecreateUIFromUxml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_RecreateUIFromUxml_m3C03814914985745293F1C6093192171BC861822 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_RecreateUIFromUxml_m3C03814914985745293F1C6093192171BC861822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * G_B7_0 = NULL;
	Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * G_B6_0 = NULL;
	Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * G_B11_0 = NULL;
	Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * G_B10_0 = NULL;
	{
		// if (enableLiveUpdates)
		bool L_0 = __this->get_enableLiveUpdates_11();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// trackedAssetSet.Clear();
		HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * L_2 = PanelRenderer_get_trackedAssetSet_m8CB87046AA13DAB4C626591E0FA0BC7270E8048F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		HashSet_1_Clear_m399E83585D5FCC3965C58C74C297068048C2B5D1(L_2, /*hidden argument*/HashSet_1_Clear_m399E83585D5FCC3965C58C74C297068048C2B5D1_RuntimeMethod_var);
		// trackedAssetList.Clear();
		List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * L_3 = PanelRenderer_get_trackedAssetList_mBE4C7DF68CDECD53E16FCAD52C1ECC5E798BF560(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Clear_mC986281A0F6F526F49A46B32BA044A00F562B121(L_3, /*hidden argument*/List_1_Clear_mC986281A0F6F526F49A46B32BA044A00F562B121_RuntimeMethod_var);
		// trackedAssetHashes.Clear();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_4 = PanelRenderer_get_trackedAssetHashes_m6516F33A74A5585F821255122AB7F0DEB3B1FE18(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_4, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
	}

IL_0031:
	{
		// visualTree.Clear();
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_5 = PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		VisualElement_Clear_m83B231BAFCDEFB15DE8C5EB0AA4AA573C52EE68A(L_5, /*hidden argument*/NULL);
		// if (uxml == null)
		VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF * L_6 = __this->get_uxml_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// return;
		goto IL_0095;
	}

IL_004f:
	{
		// uxml.CloneTree(visualTree);
		VisualTreeAsset_t62EC98B9B80C91A6CCB93904D3A7C70B1DF2D8DF * L_9 = __this->get_uxml_4();
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_10 = PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		VisualTreeAsset_CloneTree_m4697500AB500480285C8C482D609779D41F9DCC4(L_9, L_10, /*hidden argument*/NULL);
		// if (!enableLiveUpdates)
		bool L_11 = __this->get_enableLiveUpdates_11();
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		// postUxmlReload?.Invoke();
		Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * L_13 = PanelRenderer_get_postUxmlReload_mD73CF0B88065A5774D24CE8B4E757DDAF7EB7C1B_inline(__this, /*hidden argument*/NULL);
		Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * L_14 = L_13;
		G_B6_0 = L_14;
		if (L_14)
		{
			G_B7_0 = L_14;
			goto IL_007b;
		}
	}
	{
		goto IL_0081;
	}

IL_007b:
	{
		NullCheck(G_B7_0);
		Func_1_Invoke_m16B66B1F393FB53DCBD3DF14D4ED64688FEDAFC7(G_B7_0, /*hidden argument*/Func_1_Invoke_m16B66B1F393FB53DCBD3DF14D4ED64688FEDAFC7_RuntimeMethod_var);
	}

IL_0081:
	{
		// return;
		goto IL_0095;
	}

IL_0083:
	{
		// postUxmlReload?.Invoke();
		Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * L_15 = PanelRenderer_get_postUxmlReload_mD73CF0B88065A5774D24CE8B4E757DDAF7EB7C1B_inline(__this, /*hidden argument*/NULL);
		Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * L_16 = L_15;
		G_B10_0 = L_16;
		if (L_16)
		{
			G_B11_0 = L_16;
			goto IL_008f;
		}
	}
	{
		goto IL_0095;
	}

IL_008f:
	{
		NullCheck(G_B11_0);
		Func_1_Invoke_m16B66B1F393FB53DCBD3DF14D4ED64688FEDAFC7(G_B11_0, /*hidden argument*/Func_1_Invoke_m16B66B1F393FB53DCBD3DF14D4ED64688FEDAFC7_RuntimeMethod_var);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_Deinitialize_m2BC06FD04251F1443E4BD940107722C9A16A7550 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_Deinitialize_m2BC06FD04251F1443E4BD940107722C9A16A7550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// panel.Dispose();
		RuntimeObject* L_0 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_0);
		// DestroyImmediate(m_PanelOwner);
		PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6 * L_1 = __this->get_m_PanelOwner_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_1, /*hidden argument*/NULL);
		// m_InitializedCounter--;
		int32_t L_2 = __this->get_m_InitializedCounter_17();
		__this->set_m_InitializedCounter_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_Update_mE22D8CD3BDFE8D82297677D682E9EA95CCC2069F (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_Update_mE22D8CD3BDFE8D82297677D682E9EA95CCC2069F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	float G_B9_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	int32_t G_B13_0 = 0;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	float G_B17_0 = 0.0f;
	RuntimeObject* G_B17_1 = NULL;
	{
		// if (panel == null)
		RuntimeObject* L_0 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0190;
	}

IL_0013:
	{
		// m_UpdateSampler.Begin();
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_2 = __this->get_m_UpdateSampler_22();
		NullCheck(L_2);
		CustomSampler_Begin_m787879DEAFA0A72D73CD41AE6411E60F7171B6F0(L_2, /*hidden argument*/NULL);
		// var targetSize = targetTexture == null
		//     ? GetActiveRenderTargetSize()
		//     : new Vector2(targetTexture.width, targetTexture.height);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = __this->get_targetTexture_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = __this->get_targetTexture_9();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = __this->get_targetTexture_9();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), (((float)((float)L_6))), (((float)((float)L_8))), /*hidden argument*/NULL);
		G_B5_0 = L_9;
		goto IL_0051;
	}

IL_004c:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = PanelRenderer_GetActiveRenderTargetSize_m85488D72DFB16B1A580557F0AB7DC3886A20B9D1(/*hidden argument*/NULL);
		G_B5_0 = L_10;
	}

IL_0051:
	{
		V_0 = G_B5_0;
		// if (targetTexture != m_TargetTexture)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = __this->get_targetTexture_9();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_12 = __this->get_m_TargetTexture_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		// m_TargetTexture = targetTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_15 = __this->get_targetTexture_9();
		__this->set_m_TargetTexture_16(L_15);
		// InternalBridge.SetTargetTexture(panel, targetTexture);
		RuntimeObject* L_16 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(__this, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17 = __this->get_targetTexture_9();
		InternalBridge_SetTargetTexture_mD30E091CED00CBBBAFF0D3748502A9CD9AE5837D(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// var scale = Mathf.Max(0.1f, m_PanelScaler == null ? 1 : m_PanelScaler.ComputeScalingFactor(targetSize));
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_18 = __this->get_m_PanelScaler_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B8_0 = (0.100000001f);
		if (L_19)
		{
			G_B9_0 = (0.100000001f);
			goto IL_00a8;
		}
	}
	{
		PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * L_20 = __this->get_m_PanelScaler_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_0;
		NullCheck(L_20);
		float L_22 = PanelScaler_ComputeScalingFactor_m87891D2126A51A75BD815614F1BEF4452A3B49F3(L_20, L_21, /*hidden argument*/NULL);
		G_B10_0 = L_22;
		G_B10_1 = G_B8_0;
		goto IL_00ad;
	}

IL_00a8:
	{
		G_B10_0 = (1.0f);
		G_B10_1 = G_B9_0;
	}

IL_00ad:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_23 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		V_1 = L_23;
		// if (m_Scale != scale || m_TargetSize != targetSize)
		float L_24 = __this->get_m_Scale_19();
		float L_25 = V_1;
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_00ca;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = __this->get_m_TargetSize_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		bool L_28 = Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline(L_26, L_27, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_28));
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B13_0 = 1;
	}

IL_00cb:
	{
		V_4 = (bool)G_B13_0;
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_0178;
		}
	}
	{
		// InternalBridge.SetScale(panel, scale == 0 ? 0 : 1.0f / scale);
		RuntimeObject* L_30 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(__this, /*hidden argument*/NULL);
		float L_31 = V_1;
		G_B15_0 = L_30;
		if ((((float)L_31) == ((float)(0.0f))))
		{
			G_B16_0 = L_30;
			goto IL_00ec;
		}
	}
	{
		float L_32 = V_1;
		G_B17_0 = ((float)((float)(1.0f)/(float)L_32));
		G_B17_1 = G_B15_0;
		goto IL_00f1;
	}

IL_00ec:
	{
		G_B17_0 = (0.0f);
		G_B17_1 = G_B16_0;
	}

IL_00f1:
	{
		InternalBridge_SetScale_m74541B775BDAB7ADDFC6E51328AC24B6A86A05B3(G_B17_1, G_B17_0, /*hidden argument*/NULL);
		// visualTree.style.left = 0;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_33 = PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		RuntimeObject* L_34 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541(L_33, /*hidden argument*/NULL);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_35 = StyleLength_op_Implicit_mB5C67D1E3D3103BD9C97065A73285403762265C8((0.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(7 /* System.Void UnityEngine.UIElements.IStyle::set_left(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, L_34, L_35);
		// visualTree.style.top = 0;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_36 = PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		RuntimeObject* L_37 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541(L_36, /*hidden argument*/NULL);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_38 = StyleLength_op_Implicit_mB5C67D1E3D3103BD9C97065A73285403762265C8((0.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(14 /* System.Void UnityEngine.UIElements.IStyle::set_top(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, L_37, L_38);
		// visualTree.style.width = targetSize.x * scale;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_39 = PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		RuntimeObject* L_40 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541(L_39, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = V_0;
		float L_42 = L_41.get_x_0();
		float L_43 = V_1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_44 = StyleLength_op_Implicit_mB5C67D1E3D3103BD9C97065A73285403762265C8(((float)il2cpp_codegen_multiply((float)L_42, (float)L_43)), /*hidden argument*/NULL);
		NullCheck(L_40);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(16 /* System.Void UnityEngine.UIElements.IStyle::set_width(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, L_40, L_44);
		// visualTree.style.height = targetSize.y * scale;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_45 = PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		RuntimeObject* L_46 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541(L_45, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = V_0;
		float L_48 = L_47.get_y_1();
		float L_49 = V_1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_50 = StyleLength_op_Implicit_mB5C67D1E3D3103BD9C97065A73285403762265C8(((float)il2cpp_codegen_multiply((float)L_48, (float)L_49)), /*hidden argument*/NULL);
		NullCheck(L_46);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(6 /* System.Void UnityEngine.UIElements.IStyle::set_height(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, L_46, L_50);
		// m_Scale = scale;
		float L_51 = V_1;
		__this->set_m_Scale_19(L_51);
		// m_TargetSize = targetSize;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_0;
		__this->set_m_TargetSize_20(L_52);
	}

IL_0178:
	{
		// InternalBridge.UpdatePanel(panel);
		RuntimeObject* L_53 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(__this, /*hidden argument*/NULL);
		InternalBridge_UpdatePanel_m60C13E8BC2B8EBE91BEEAF2E6D35F12398488DE5(L_53, /*hidden argument*/NULL);
		// m_UpdateSampler.End();
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_54 = __this->get_m_UpdateSampler_22();
		NullCheck(L_54);
		CustomSampler_End_mEA784673E7905D135318075BD797E47A175858A9(L_54, /*hidden argument*/NULL);
	}

IL_0190:
	{
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::OnRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer_OnRenderObject_mE9A968CC8498D4F62C3EE413F68B5C42F5B05821 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_OnRenderObject_mE9A968CC8498D4F62C3EE413F68B5C42F5B05821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (targetTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_targetTexture_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// InternalBridge.RepaintPanel(panel, m_Event);
		RuntimeObject* L_3 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(__this, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_4 = __this->get_m_Event_18();
		InternalBridge_RepaintPanel_m0CB27A74A564E1A625CECFDD9973F08FE205AB62(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 Unity.UIElements.Runtime.PanelRenderer::GetActiveRenderTargetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PanelRenderer_GetActiveRenderTargetSize_m85488D72DFB16B1A580557F0AB7DC3886A20B9D1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_GetActiveRenderTargetSize_m85488D72DFB16B1A580557F0AB7DC3886A20B9D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return RenderTexture.active == null
		//     ? new Vector2(Screen.width, Screen.height)
		//     : new Vector2(RenderTexture.active.width, RenderTexture.active.height);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), (((float)((float)L_3))), (((float)((float)L_5))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
		goto IL_003c;
	}

IL_002b:
	{
		int32_t L_7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), (((float)((float)L_7))), (((float)((float)L_8))), /*hidden argument*/NULL);
		G_B3_0 = L_9;
	}

IL_003c:
	{
		V_0 = G_B3_0;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Unity.UIElements.Runtime.PanelRenderer::ScreenToPanel(UnityEngine.Vector2,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PanelRenderer_ScreenToPanel_m21E671A8E1E04953370551C79F1DEA4C899FD6A4 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___panelPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer_ScreenToPanel_m21E671A8E1E04953370551C79F1DEA4C899FD6A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// if (targetTexture == null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_targetTexture_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// panelPosition = screenPosition * m_Scale;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = ___panelPosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___screenPosition0;
		float L_5 = __this->get_m_Scale_19();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_4, L_5, /*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_3 = L_6;
		// return true;
		V_4 = (bool)1;
		goto IL_00da;
	}

IL_002c:
	{
		// if (m_PanelTransform == null)
		RuntimeObject* L_7 = __this->get_m_PanelTransform_13();
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		// if (m_ShouldWarnWorldTransformMissing)
		bool L_9 = __this->get_m_ShouldWarnWorldTransformMissing_23();
		V_6 = L_9;
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		// m_ShouldWarnWorldTransformMissing = false;
		__this->set_m_ShouldWarnWorldTransformMissing_23((bool)0);
		// Debug.LogError("PanelRenderer needs an IWorldTransform implementation for world-space rendering");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE892B96FB84C3D6106B3CD51BD4E72F405B5DD4E, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// panelPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = ___panelPosition1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_11 = L_12;
		// return false;
		V_4 = (bool)0;
		goto IL_00da;
	}

IL_006c:
	{
		// var hit =  m_PanelTransform.ScreenToPanelUV(screenPosition, out panelUVPosition);
		RuntimeObject* L_13 = __this->get_m_PanelTransform_13();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___screenPosition0;
		NullCheck(L_13);
		bool L_15 = InterfaceFuncInvoker2< bool, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * >::Invoke(0 /* System.Boolean Unity.UIElements.Runtime.IPanelTransform::ScreenToPanelUV(UnityEngine.Vector2,UnityEngine.Vector2&) */, IPanelTransform_tA69B12E8BD538FDF2F14712F21C4FEE2023968CE_il2cpp_TypeInfo_var, L_13, L_14, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0));
		V_1 = L_15;
		// if (!hit)
		bool L_16 = V_1;
		V_7 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0096;
		}
	}
	{
		// panelPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = ___panelPosition1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_18 = L_19;
		// return false;
		V_4 = (bool)0;
		goto IL_00da;
	}

IL_0096:
	{
		// var panelSize = panel.visualTree.layout.size;
		RuntimeObject* L_20 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_21 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_22 = VisualElement_get_layout_mDAE3AD984D0CE9D7B4F92518051D2060EA928E79(L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		V_2 = L_23;
		// panelPosition = new Vector2(panelUVPosition.x * panelSize.x, panelUVPosition.y * panelSize.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = ___panelPosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_0;
		float L_26 = L_25.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_2;
		float L_28 = L_27.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_0;
		float L_30 = L_29.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = V_2;
		float L_32 = L_31.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_33), ((float)il2cpp_codegen_multiply((float)L_26, (float)L_28)), ((float)il2cpp_codegen_multiply((float)L_30, (float)L_32)), /*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_24 = L_33;
		// return true;
		V_4 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		// }
		bool L_34 = V_4;
		return L_34;
	}
}
// System.Void Unity.UIElements.Runtime.PanelRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelRenderer__ctor_mBB7034EA3F0C3B09E41612B1CBAA89F9C191AF4F (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelRenderer__ctor_mBB7034EA3F0C3B09E41612B1CBAA89F9C191AF4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Event m_Event = new Event(); 
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0 = (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *)il2cpp_codegen_object_new(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var);
		Event__ctor_m0971FA11B481976C1F56306C7BBA7157FF236532(L_0, /*hidden argument*/NULL);
		__this->set_m_Event_18(L_0);
		// bool m_ShouldWarnWorldTransformMissing = true;
		__this->set_m_ShouldWarnWorldTransformMissing_23((bool)1);
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
// Unity.UIElements.Runtime.PanelScaler_IScaleModeImpl Unity.UIElements.Runtime.PanelScaler::get_impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PanelScaler_get_impl_mD15B279BE24A275492B440905D834435B5472D6D (PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelScaler_get_impl_mD15B279BE24A275492B440905D834435B5472D6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		// switch (scaleMode)
		int32_t L_0 = __this->get_scaleMode_7();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_002f;
	}

IL_0013:
	{
		// return constantPixelSizeScaler;
		ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  L_3 = __this->get_constantPixelSizeScaler_4();
		ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  L_4 = L_3;
		RuntimeObject * L_5 = Box(ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		goto IL_003d;
	}

IL_0021:
	{
		// return constantPhysicalSizeScaler;
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_6 = __this->get_constantPhysicalSizeScaler_5();
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_7 = L_6;
		RuntimeObject * L_8 = Box(ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96_il2cpp_TypeInfo_var, &L_7);
		V_1 = (RuntimeObject*)L_8;
		goto IL_003d;
	}

IL_002f:
	{
		// return scaleWithScreenSizeScaler;
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_9 = __this->get_scaleWithScreenSizeScaler_6();
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_10 = L_9;
		RuntimeObject * L_11 = Box(ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A_il2cpp_TypeInfo_var, &L_10);
		V_1 = (RuntimeObject*)L_11;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		RuntimeObject* L_12 = V_1;
		return L_12;
	}
}
// System.Single Unity.UIElements.Runtime.PanelScaler::ComputeScalingFactor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanelScaler_ComputeScalingFactor_m87891D2126A51A75BD815614F1BEF4452A3B49F3 (PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelScaler_ComputeScalingFactor_m87891D2126A51A75BD815614F1BEF4452A3B49F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// internal float ComputeScalingFactor(Vector2 size) { return impl.ComputeScalingFactor(size); }
		RuntimeObject* L_0 = PanelScaler_get_impl_mD15B279BE24A275492B440905D834435B5472D6D(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___size0;
		NullCheck(L_0);
		float L_2 = InterfaceFuncInvoker1< float, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(0 /* System.Single Unity.UIElements.Runtime.PanelScaler/IScaleModeImpl::ComputeScalingFactor(UnityEngine.Vector2) */, IScaleModeImpl_t15C6FE392D842EF07A3A4DA8AC0BEB8AAAE07C1B_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// internal float ComputeScalingFactor(Vector2 size) { return impl.ComputeScalingFactor(size); }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.UIElements.Runtime.PanelScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelScaler__ctor_mDF7FC7F4BC8396D2DA46316F4AEB116343779808 (PanelScaler_t44A51CDE5C751BB5D5465D435705E0B295DB1C83 * __this, const RuntimeMethod* method)
{
	ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// [SerializeField] internal ConstantPixelSizeScaler constantPixelSizeScaler = new ConstantPixelSizeScaler()
		// {
		//     scaleFactor = 1
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF ));
		(&V_0)->set_scaleFactor_0((1.0f));
		ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF  L_0 = V_0;
		__this->set_constantPixelSizeScaler_4(L_0);
		// [SerializeField] internal ConstantPhysicalSizeScaler constantPhysicalSizeScaler = new ConstantPhysicalSizeScaler()
		// {
		//     referenceDpi = 96,
		//     fallbackDpi = 96
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 ));
		(&V_1)->set_referenceDpi_0((96.0f));
		(&V_1)->set_fallbackDpi_1((96.0f));
		ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96  L_1 = V_1;
		__this->set_constantPhysicalSizeScaler_5(L_1);
		// internal ScaleWithScreenSizeScaler scaleWithScreenSizeScaler = new ScaleWithScreenSizeScaler()
		// {
		//     referenceResolution = new Vector2Int(1200, 800),
		//     screenMatchMode = ScreenMatchMode.MatchWidthOrHeight,
		//     match = 0
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A ));
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_2), ((int32_t)1200), ((int32_t)800), /*hidden argument*/NULL);
		(&V_2)->set_referenceResolution_0(L_2);
		(&V_2)->set_screenMatchMode_1(0);
		(&V_2)->set_match_2((0.0f));
		ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A  L_3 = V_2;
		__this->set_scaleWithScreenSizeScaler_6(L_3);
		// public ScaleMode scaleMode = ScaleMode.ConstantPixelSize;
		__this->set_scaleMode_7(0);
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
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::get_sendNavigationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_get_sendNavigationEvents_m47549336A1656C80F999A2861AB16A15B3A678AC (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return m_SendNavigationEvents; }
		bool L_0 = __this->get_m_SendNavigationEvents_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SendNavigationEvents; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::set_sendNavigationEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsEventSystem_set_sendNavigationEvents_mA0322AE5149B83FDF60AFA0D7BD1C3B5D4BA6D2E (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SendNavigationEvents = value; }
		bool L_0 = ___value0;
		__this->set_m_SendNavigationEvents_4(L_0);
		// set { m_SendNavigationEvents = value; }
		return;
	}
}
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::get_sendIMGUIEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_get_sendIMGUIEvents_m8F060AB6AB1CD4B2C8FFF645936CBB801F2588CA (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return m_SendIMGUIEvents; }
		bool L_0 = __this->get_m_SendIMGUIEvents_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SendIMGUIEvents; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::set_sendIMGUIEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsEventSystem_set_sendIMGUIEvents_m9E58674E88AA7E29ED98183AE2F54F71E3D33D51 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SendIMGUIEvents = value; }
		bool L_0 = ___value0;
		__this->set_m_SendIMGUIEvents_5(L_0);
		// set { m_SendIMGUIEvents = value; }
		return;
	}
}
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::get_sendInputEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_get_sendInputEvents_m4B33B3715D459BA2DBA4B0C50350E5940C7B738B (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return m_SendInputEvents; }
		bool L_0 = __this->get_m_SendInputEvents_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SendInputEvents; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::set_sendInputEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsEventSystem_set_sendInputEvents_m9062801EF75F3B16E8A7563E84C8F30DA67A3024 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SendInputEvents = value; }
		bool L_0 = ___value0;
		__this->set_m_SendInputEvents_6(L_0);
		// set { m_SendInputEvents = value; }
		return;
	}
}
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::get_isAppFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_get_isAppFocused_m8097F8BBA9BF844DE63919D378D1CDE774AFDCE8 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	{
		// public bool isAppFocused { get; private set; } = true;
		bool L_0 = __this->get_U3CisAppFocusedU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::set_isAppFocused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsEventSystem_set_isAppFocused_m1763833C17662F4442FB92BA2FC8A1884AAF0B32 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isAppFocused { get; private set; } = true;
		bool L_0 = ___value0;
		__this->set_U3CisAppFocusedU3Ek__BackingField_13(L_0);
		return;
	}
}
// Unity.UIElements.Runtime.InputWrapper Unity.UIElements.Runtime.UIElementsEventSystem::get_inputOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * UIElementsEventSystem_get_inputOverride_m9D2EE575BBCDB5A7D3F369E6E94B58DC1FC4763A (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	{
		// public InputWrapper inputOverride { get; set; }
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_0 = __this->get_U3CinputOverrideU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::set_inputOverride(Unity.UIElements.Runtime.InputWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsEventSystem_set_inputOverride_mCEF5E6987BC48338D9F6BD57EB8B4BA9F05EF8AA (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * ___value0, const RuntimeMethod* method)
{
	{
		// public InputWrapper inputOverride { get; set; }
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_0 = ___value0;
		__this->set_U3CinputOverrideU3Ek__BackingField_15(L_0);
		return;
	}
}
// Unity.UIElements.Runtime.InputWrapper Unity.UIElements.Runtime.UIElementsEventSystem::get_input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * V_1 = NULL;
	bool V_2 = false;
	InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770* V_3 = NULL;
	InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770* V_4 = NULL;
	int32_t V_5 = 0;
	InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B7_0 = 0;
	{
		// if (inputOverride != null)
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_0 = UIElementsEventSystem_get_inputOverride_m9D2EE575BBCDB5A7D3F369E6E94B58DC1FC4763A_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// return inputOverride;
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_3 = UIElementsEventSystem_get_inputOverride_m9D2EE575BBCDB5A7D3F369E6E94B58DC1FC4763A_inline(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_00b9;
	}

IL_001d:
	{
		// if (m_DefaultInput == null)
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_4 = __this->get_m_DefaultInput_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00b0;
		}
	}
	{
		// var inputs = GetComponents<InputWrapper>();
		InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770* L_7 = Component_GetComponents_TisInputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2_mF8E787D74386AD503CE89B75B3AE04D218E19CCA(__this, /*hidden argument*/Component_GetComponents_TisInputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2_mF8E787D74386AD503CE89B75B3AE04D218E19CCA_RuntimeMethod_var);
		V_3 = L_7;
		// foreach (var baseInput in inputs)
		InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770* L_8 = V_3;
		V_4 = L_8;
		V_5 = 0;
		goto IL_0084;
	}

IL_0041:
	{
		// foreach (var baseInput in inputs)
		InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770* L_9 = V_4;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = L_12;
		// if (baseInput != null && baseInput.GetType() == typeof(InputWrapper))
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_13 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006b;
		}
	}
	{
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_15 = V_6;
		NullCheck(L_15);
		Type_t * L_16 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_15, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
		bool L_19 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_16, L_18, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_19));
		goto IL_006c;
	}

IL_006b:
	{
		G_B7_0 = 0;
	}

IL_006c:
	{
		V_7 = (bool)G_B7_0;
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		// m_DefaultInput = baseInput;
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_21 = V_6;
		__this->set_m_DefaultInput_16(L_21);
		// break;
		goto IL_008c;
	}

IL_007d:
	{
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0084:
	{
		// foreach (var baseInput in inputs)
		int32_t L_23 = V_5;
		InputWrapperU5BU5D_t6F85A3A410DB540C151C60A9918676E782DDF770* L_24 = V_4;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))))
		{
			goto IL_0041;
		}
	}

IL_008c:
	{
		// if (m_DefaultInput == null)
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_25 = __this->get_m_DefaultInput_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_26;
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00af;
		}
	}
	{
		// m_DefaultInput = gameObject.AddComponent<InputWrapper>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_29 = GameObject_AddComponent_TisInputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2_m5FC9D2EAF19AE61B53F1D1BD79867FC986D85E9C(L_28, /*hidden argument*/GameObject_AddComponent_TisInputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2_m5FC9D2EAF19AE61B53F1D1BD79867FC986D85E9C_RuntimeMethod_var);
		__this->set_m_DefaultInput_16(L_29);
	}

IL_00af:
	{
	}

IL_00b0:
	{
		// return m_DefaultInput;
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_30 = __this->get_m_DefaultInput_16();
		V_1 = L_30;
		goto IL_00b9;
	}

IL_00b9:
	{
		// }
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_31 = V_1;
		return L_31;
	}
}
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsEventSystem__ctor_m8C62405FD9884CCE7DA43330C0874C81AE74BFB2 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem__ctor_m8C62405FD9884CCE7DA43330C0874C81AE74BFB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool m_SendNavigationEvents = true;
		__this->set_m_SendNavigationEvents_4((bool)1);
		// [SerializeField] private bool m_SendIMGUIEvents = true;
		__this->set_m_SendIMGUIEvents_5((bool)1);
		// [SerializeField] private bool m_SendInputEvents = true;
		__this->set_m_SendInputEvents_6((bool)1);
		// [SerializeField] private string m_HorizontalAxis = "Horizontal";
		__this->set_m_HorizontalAxis_7(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// [SerializeField] private string m_VerticalAxis = "Vertical";
		__this->set_m_VerticalAxis_8(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// [SerializeField] private string m_SubmitButton = "Submit";
		__this->set_m_SubmitButton_9(_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895);
		// [SerializeField] private string m_CancelButton = "Cancel";
		__this->set_m_CancelButton_10(_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		// [SerializeField] private float m_InputActionsPerSecond = 10;
		__this->set_m_InputActionsPerSecond_11((10.0f));
		// [SerializeField] private float m_RepeatDelay = 0.5f;
		__this->set_m_RepeatDelay_12((0.5f));
		// public bool isAppFocused { get; private set; } = true;
		__this->set_U3CisAppFocusedU3Ek__BackingField_13((bool)1);
		// private Event m_Event = new Event();
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0 = (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *)il2cpp_codegen_object_new(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var);
		Event__ctor_m0971FA11B481976C1F56306C7BBA7157FF236532(L_0, /*hidden argument*/NULL);
		__this->set_m_Event_14(L_0);
		// PanelRenderer m_PanelRenderer = null;
		__this->set_m_PanelRenderer_17((PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 *)NULL);
		// protected UIElementsEventSystem()
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.UIElements.Runtime.PanelRenderer Unity.UIElements.Runtime.UIElementsEventSystem::get_focusedPanelRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * UIElementsEventSystem_get_focusedPanelRenderer_m0FDF6F7457719493E91BCC724844075D56B1E6CD (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_get_focusedPanelRenderer_m0FDF6F7457719493E91BCC724844075D56B1E6CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * V_1 = NULL;
	{
		// if (m_PanelRenderer == null)
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_0 = __this->get_m_PanelRenderer_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_PanelRenderer = GetComponent<PanelRenderer>();
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_3 = Component_GetComponent_TisPanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517_mDA3F0E605E993A05865C916EAA3907444FC06CD6(__this, /*hidden argument*/Component_GetComponent_TisPanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517_mDA3F0E605E993A05865C916EAA3907444FC06CD6_RuntimeMethod_var);
		__this->set_m_PanelRenderer_17(L_3);
	}

IL_001d:
	{
		// return m_PanelRenderer;
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_4 = __this->get_m_PanelRenderer_17();
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.UIElements.IPanel Unity.UIElements.Runtime.UIElementsEventSystem::get_focusedPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * G_B2_0 = NULL;
	PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// private IPanel focusedPanel { get { return focusedPanelRenderer?.panel; } }
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_0 = UIElementsEventSystem_get_focusedPanelRenderer_m0FDF6F7457719493E91BCC724844075D56B1E6CD(__this, /*hidden argument*/NULL);
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_2 = PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		// private IPanel focusedPanel { get { return focusedPanelRenderer?.panel; } }
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ShouldIgnoreEventsOnAppNotFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ShouldIgnoreEventsOnAppNotFocused_m24A3199DC3B295A778AD1E9F4F815E0D0510B41F (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// switch (SystemInfo.operatingSystemFamily)
		int32_t L_0 = SystemInfo_get_operatingSystemFamily_m797937E766B7FF87A5F1630263C49B814131DD95(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))) > ((uint32_t)2))))
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0013;
	}

IL_000f:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0017;
	}

IL_0013:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsEventSystem_Update_mFC90F539C6ECEA09106711D1CA330DA621F46422 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_Update_mFC90F539C6ECEA09106711D1CA330DA621F46422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * V_13 = NULL;
	bool V_14 = false;
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * V_15 = NULL;
	bool V_16 = false;
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * V_17 = NULL;
	bool V_18 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	int32_t G_B44_0 = 0;
	{
		// if (focusedPanel == null)
		RuntimeObject* L_0 = UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_01fc;
	}

IL_0013:
	{
		// if (focusedPanel != null && !isAppFocused && ShouldIgnoreEventsOnAppNotFocused())
		RuntimeObject* L_2 = UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		bool L_3 = UIElementsEventSystem_get_isAppFocused_m8097F8BBA9BF844DE63919D378D1CDE774AFDCE8_inline(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		bool L_4 = UIElementsEventSystem_ShouldIgnoreEventsOnAppNotFocused_m24A3199DC3B295A778AD1E9F4F815E0D0510B41F(__this, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_4));
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 0;
	}

IL_002c:
	{
		V_1 = (bool)G_B6_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		goto IL_01fc;
	}

IL_0035:
	{
		// if (sendIMGUIEvents)
		bool L_6 = UIElementsEventSystem_get_sendIMGUIEvents_m8F060AB6AB1CD4B2C8FFF645936CBB801F2588CA(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00ea;
		}
	}
	{
		goto IL_00d5;
	}

IL_0048:
	{
		// if (m_Event.type == EventType.Repaint)
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_8 = __this->get_m_Event_14();
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_8, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_9) == ((int32_t)7))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// continue;
		goto IL_00d5;
	}

IL_005f:
	{
		// var panelPosition = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_3 = L_11;
		// var panelDelta = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_4 = L_12;
		// if (ScreenToPanel(focusedPanelRenderer, m_Event.mousePosition, m_Event.delta, out panelPosition, out panelDelta))
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_13 = UIElementsEventSystem_get_focusedPanelRenderer_m0FDF6F7457719493E91BCC724844075D56B1E6CD(__this, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_14 = __this->get_m_Event_14();
		NullCheck(L_14);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9(L_14, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_16 = __this->get_m_Event_14();
		NullCheck(L_16);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = Event_get_delta_m2DABF0C93F9A2FDB5B3C916E89BC17E77AEE2680(L_16, /*hidden argument*/NULL);
		bool L_18 = UIElementsEventSystem_ScreenToPanel_m797E8128E66FDF947AE5BB54E355E780F43B64D5(L_13, L_15, L_17, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), /*hidden argument*/NULL);
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		// m_Event.mousePosition = panelPosition;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_20 = __this->get_m_Event_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_3;
		NullCheck(L_20);
		Event_set_mousePosition_mD6216A507F0F1FCBB3489323ADA044384548487B(L_20, L_21, /*hidden argument*/NULL);
		// m_Event.delta = panelDelta;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_22 = __this->get_m_Event_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_4;
		NullCheck(L_22);
		Event_set_delta_m4F99A0AC9104D2BE1903C74B77607CCD3697424D(L_22, L_23, /*hidden argument*/NULL);
		// EventBase evt = InternalBridge.CreateEvent(m_Event);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_24 = __this->get_m_Event_14();
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_25 = InternalBridge_CreateEvent_mE203BC547EA7B1FCCB1C2E236DCD5D5A5F09C1EE(L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// focusedPanel.visualTree.SendEvent(evt);
		RuntimeObject* L_26 = UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_27 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_26);
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_28 = V_7;
		NullCheck(L_27);
		VirtActionInvoker1< EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, L_27, L_28);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// while (Event.PopEvent(m_Event))
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_29 = __this->get_m_Event_14();
		bool L_30 = Event_PopEvent_mCE0C136F327B5FC3822743208222799F7301170B(L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		bool L_31 = V_8;
		if (L_31)
		{
			goto IL_0048;
		}
	}
	{
	}

IL_00ea:
	{
		// if (sendInputEvents)
		bool L_32 = UIElementsEventSystem_get_sendInputEvents_m4B33B3715D459BA2DBA4B0C50350E5940C7B738B(__this, /*hidden argument*/NULL);
		V_9 = L_32;
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_01fc;
		}
	}
	{
		// if (sendNavigationEvents)
		bool L_34 = UIElementsEventSystem_get_sendNavigationEvents_m47549336A1656C80F999A2861AB16A15B3A678AC(__this, /*hidden argument*/NULL);
		V_10 = L_34;
		bool L_35 = V_10;
		if (!L_35)
		{
			goto IL_01d6;
		}
	}
	{
		// bool sendNavigationMove = ShouldSendMoveFromInput();
		bool L_36 = UIElementsEventSystem_ShouldSendMoveFromInput_mF43DE3E117B1C6C336ABCDCDB321FB140CB356D4(__this, /*hidden argument*/NULL);
		V_11 = L_36;
		// if (sendNavigationMove)
		bool L_37 = V_11;
		V_12 = L_37;
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_014d;
		}
	}
	{
		// using (EventBase evt = NavigationMoveEvent.GetPooled(GetRawMoveVector()))
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = UIElementsEventSystem_GetRawMoveVector_m155C433440E00EDED6C2A2B3145843189DAC317E(__this, /*hidden argument*/NULL);
		NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * L_40 = NavigationMoveEvent_GetPooled_mDAF84D543EF79673DBACD1B59171F6A65819C2D5(L_39, /*hidden argument*/NULL);
		V_13 = L_40;
	}

IL_0128:
	try
	{ // begin try (depth: 1)
		// focusedPanel.visualTree.SendEvent(evt);
		RuntimeObject* L_41 = UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_42 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_41);
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_43 = V_13;
		NullCheck(L_42);
		VirtActionInvoker1< EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, L_42, L_43);
		IL2CPP_LEAVE(0x14C, FINALLY_013f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013f;
	}

FINALLY_013f:
	{ // begin finally (depth: 1)
		{
			EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_44 = V_13;
			if (!L_44)
			{
				goto IL_014b;
			}
		}

IL_0143:
		{
			EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_45 = V_13;
			NullCheck(L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_45);
		}

IL_014b:
		{
			IL2CPP_END_FINALLY(319)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(319)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14C, IL_014c)
	}

IL_014c:
	{
	}

IL_014d:
	{
		// if (input.GetButtonDown(m_SubmitButton))
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_46 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		String_t* L_47 = __this->get_m_SubmitButton_9();
		NullCheck(L_46);
		bool L_48 = VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetButtonDown(System.String) */, L_46, L_47);
		V_14 = L_48;
		bool L_49 = V_14;
		if (!L_49)
		{
			goto IL_0191;
		}
	}
	{
		// using (EventBase evt = NavigationSubmitEvent.GetPooled())
		IL2CPP_RUNTIME_CLASS_INIT(EventBase_1_t3E33D2CE9117EA09B981B3C3262D0B5D05262416_il2cpp_TypeInfo_var);
		NavigationSubmitEvent_t61EA218A23166F922C9828F5F4EEF3F0E1191CA6 * L_50 = EventBase_1_GetPooled_m155D001A41BCAA2DCB10FECB25B1B078ED9C2227(/*hidden argument*/EventBase_1_GetPooled_m155D001A41BCAA2DCB10FECB25B1B078ED9C2227_RuntimeMethod_var);
		V_15 = L_50;
	}

IL_016c:
	try
	{ // begin try (depth: 1)
		// focusedPanel.visualTree.SendEvent(evt);
		RuntimeObject* L_51 = UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_52 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_51);
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_53 = V_15;
		NullCheck(L_52);
		VirtActionInvoker1< EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, L_52, L_53);
		IL2CPP_LEAVE(0x190, FINALLY_0183);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0183;
	}

FINALLY_0183:
	{ // begin finally (depth: 1)
		{
			EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_54 = V_15;
			if (!L_54)
			{
				goto IL_018f;
			}
		}

IL_0187:
		{
			EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_55 = V_15;
			NullCheck(L_55);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_55);
		}

IL_018f:
		{
			IL2CPP_END_FINALLY(387)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(387)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x190, IL_0190)
	}

IL_0190:
	{
	}

IL_0191:
	{
		// if (input.GetButtonDown(m_CancelButton))
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_56 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		String_t* L_57 = __this->get_m_CancelButton_10();
		NullCheck(L_56);
		bool L_58 = VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetButtonDown(System.String) */, L_56, L_57);
		V_16 = L_58;
		bool L_59 = V_16;
		if (!L_59)
		{
			goto IL_01d5;
		}
	}
	{
		// using (EventBase evt = NavigationCancelEvent.GetPooled())
		IL2CPP_RUNTIME_CLASS_INIT(EventBase_1_tD72A4479F322480E3F8949F194BB8A1A5299F179_il2cpp_TypeInfo_var);
		NavigationCancelEvent_t6D8664F136E91A5FC7DD9736D468ADE6124E6A65 * L_60 = EventBase_1_GetPooled_m7E088CBA72639F70195B20A26590B91D8AE5ECBF(/*hidden argument*/EventBase_1_GetPooled_m7E088CBA72639F70195B20A26590B91D8AE5ECBF_RuntimeMethod_var);
		V_17 = L_60;
	}

IL_01b0:
	try
	{ // begin try (depth: 1)
		// focusedPanel.visualTree.SendEvent(evt);
		RuntimeObject* L_61 = UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_62 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_61);
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_63 = V_17;
		NullCheck(L_62);
		VirtActionInvoker1< EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, L_62, L_63);
		IL2CPP_LEAVE(0x1D4, FINALLY_01c7);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01c7;
	}

FINALLY_01c7:
	{ // begin finally (depth: 1)
		{
			EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_64 = V_17;
			if (!L_64)
			{
				goto IL_01d3;
			}
		}

IL_01cb:
		{
			EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_65 = V_17;
			NullCheck(L_65);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_65);
		}

IL_01d3:
		{
			IL2CPP_END_FINALLY(455)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(455)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D4, IL_01d4)
	}

IL_01d4:
	{
	}

IL_01d5:
	{
	}

IL_01d6:
	{
		// if (!ProcessTouchEvents() && input.mousePresent)
		bool L_66 = UIElementsEventSystem_ProcessTouchEvents_mD00D7347E595F215FC712E93FD7AAA3357EE2BF4(__this, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_01eb;
		}
	}
	{
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_67 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		bool L_68 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::get_mousePresent() */, L_67);
		G_B44_0 = ((int32_t)(L_68));
		goto IL_01ec;
	}

IL_01eb:
	{
		G_B44_0 = 0;
	}

IL_01ec:
	{
		V_18 = (bool)G_B44_0;
		bool L_69 = V_18;
		if (!L_69)
		{
			goto IL_01fb;
		}
	}
	{
		// ProcessMouseEvents();
		UIElementsEventSystem_ProcessMouseEvents_mB274CDCFF9254F5B392E3DF72A3B5C704A666B54(__this, /*hidden argument*/NULL);
	}

IL_01fb:
	{
	}

IL_01fc:
	{
		// }
		return;
	}
}
// UnityEngine.UIElements.EventBase Unity.UIElements.Runtime.UIElementsEventSystem::MakeTouchEvent(UnityEngine.Touch,UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * UIElementsEventSystem_MakeTouchEvent_mC1D76335D40DAB26402A6BECBB30DD7C895B4181 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  ___touch0, int32_t ___modifiers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_MakeTouchEvent_mC1D76335D40DAB26402A6BECBB30DD7C895B4181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * V_1 = NULL;
	{
		// touch.position = new Vector2(touch.position.x, Screen.height - touch.position.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&___touch0), /*hidden argument*/NULL);
		float L_1 = L_0.get_x_0();
		int32_t L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&___touch0), /*hidden argument*/NULL);
		float L_4 = L_3.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), L_1, ((float)il2cpp_codegen_subtract((float)(((float)((float)L_2))), (float)L_4)), /*hidden argument*/NULL);
		Touch_set_position_m74DE709CAB66F72A4E9A4F7A63430B710A5F847D((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&___touch0), L_5, /*hidden argument*/NULL);
		// touch.rawPosition = new Vector2(touch.rawPosition.x, Screen.height - touch.rawPosition.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = Touch_get_rawPosition_mCC88EEAB263CA3D423C6079787BD44AFB3C61697((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&___touch0), /*hidden argument*/NULL);
		float L_7 = L_6.get_x_0();
		int32_t L_8 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = Touch_get_rawPosition_mCC88EEAB263CA3D423C6079787BD44AFB3C61697((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&___touch0), /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), L_7, ((float)il2cpp_codegen_subtract((float)(((float)((float)L_8))), (float)L_10)), /*hidden argument*/NULL);
		Touch_set_rawPosition_m8D8BE236924E5E57C74C7EDDE0DFAAC9E8CFFCB2((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&___touch0), L_11, /*hidden argument*/NULL);
		// touch.deltaPosition = new Vector2(touch.deltaPosition.x, Screen.height - touch.deltaPosition.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&___touch0), /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		int32_t L_14 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&___touch0), /*hidden argument*/NULL);
		float L_16 = L_15.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_17), L_13, ((float)il2cpp_codegen_subtract((float)(((float)((float)L_14))), (float)L_16)), /*hidden argument*/NULL);
		Touch_set_deltaPosition_m81F7F3CD970CEB74678E098ADE7082BBC6F3DCAA((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&___touch0), L_17, /*hidden argument*/NULL);
		// switch (touch.phase)
		int32_t L_18 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&___touch0), /*hidden argument*/NULL);
		V_0 = L_18;
		int32_t L_19 = V_0;
		switch (L_19)
		{
			case 0:
			{
				goto IL_00a9;
			}
			case 1:
			{
				goto IL_00b3;
			}
			case 2:
			{
				goto IL_00bd;
			}
			case 3:
			{
				goto IL_00c7;
			}
			case 4:
			{
				goto IL_00d1;
			}
		}
	}
	{
		goto IL_00db;
	}

IL_00a9:
	{
		// return PointerDownEvent.GetPooled(touch, modifiers);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_20 = ___touch0;
		int32_t L_21 = ___modifiers1;
		PointerDownEvent_tC94CCE820E4E6DCCD89A95DE94549BA550C27403 * L_22 = PointerEventBase_1_GetPooled_m28FD93EDC4F4BC729350516F04050427C2B94089(L_20, L_21, /*hidden argument*/PointerEventBase_1_GetPooled_m28FD93EDC4F4BC729350516F04050427C2B94089_RuntimeMethod_var);
		V_1 = L_22;
		goto IL_00df;
	}

IL_00b3:
	{
		// return PointerMoveEvent.GetPooled(touch, modifiers);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_23 = ___touch0;
		int32_t L_24 = ___modifiers1;
		PointerMoveEvent_t9D1DF9F3D7FF1E2CCBEF6281558B6B88DAA90D28 * L_25 = PointerEventBase_1_GetPooled_m68160648176C72A6180CCDBA89315164BE5CD823(L_23, L_24, /*hidden argument*/PointerEventBase_1_GetPooled_m68160648176C72A6180CCDBA89315164BE5CD823_RuntimeMethod_var);
		V_1 = L_25;
		goto IL_00df;
	}

IL_00bd:
	{
		// return PointerStationaryEvent.GetPooled(touch, modifiers);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_26 = ___touch0;
		int32_t L_27 = ___modifiers1;
		PointerStationaryEvent_tB5F216CAD6C42F3BF076F2EA0B1CC5F838EFE301 * L_28 = PointerEventBase_1_GetPooled_mA8C5B1B36699CB9B36A2AE43471F6450DE619E5F(L_26, L_27, /*hidden argument*/PointerEventBase_1_GetPooled_mA8C5B1B36699CB9B36A2AE43471F6450DE619E5F_RuntimeMethod_var);
		V_1 = L_28;
		goto IL_00df;
	}

IL_00c7:
	{
		// return PointerUpEvent.GetPooled(touch, modifiers);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_29 = ___touch0;
		int32_t L_30 = ___modifiers1;
		PointerUpEvent_tFE3775D286474372874AF929B86FA46F4AC86333 * L_31 = PointerEventBase_1_GetPooled_m91F7593672FA62E5A9BE1B6CFF361729EBA4DDB7(L_29, L_30, /*hidden argument*/PointerEventBase_1_GetPooled_m91F7593672FA62E5A9BE1B6CFF361729EBA4DDB7_RuntimeMethod_var);
		V_1 = L_31;
		goto IL_00df;
	}

IL_00d1:
	{
		// return PointerCancelEvent.GetPooled(touch, modifiers);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_32 = ___touch0;
		int32_t L_33 = ___modifiers1;
		PointerCancelEvent_tA658A77DCA611873210006D2D89D4B02F38EB2DB * L_34 = PointerEventBase_1_GetPooled_m4A7FCB55FEE6E8F7FFC0E5E4F5CDE9CF4E4F60CD(L_32, L_33, /*hidden argument*/PointerEventBase_1_GetPooled_m4A7FCB55FEE6E8F7FFC0E5E4F5CDE9CF4E4F60CD_RuntimeMethod_var);
		V_1 = L_34;
		goto IL_00df;
	}

IL_00db:
	{
		// return null;
		V_1 = (EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 *)NULL;
		goto IL_00df;
	}

IL_00df:
	{
		// }
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_35 = V_1;
		return L_35;
	}
}
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ProcessTouchEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ProcessTouchEvents_mD00D7347E595F215FC712E93FD7AAA3357EE2BF4 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_ProcessTouchEvents_mD00D7347E595F215FC712E93FD7AAA3357EE2BF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// for (int i = 0; i < input.touchCount; ++i)
		V_0 = 0;
		goto IL_0069;
	}

IL_0005:
	{
		// Touch touch = input.GetTouch(i);
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_0 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2 = VirtFuncInvoker1< Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C , int32_t >::Invoke(17 /* UnityEngine.Touch Unity.UIElements.Runtime.InputWrapper::GetTouch(System.Int32) */, L_0, L_1);
		V_1 = L_2;
		// if (touch.type == TouchType.Indirect)
		int32_t L_3 = Touch_get_type_m33FB24B6A53A307E8AC9881ED3B483DD4B44C050((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// continue;
		goto IL_0065;
	}

IL_0023:
	{
		// if (ScreenToPanel(focusedPanelRenderer, ref touch))
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_5 = UIElementsEventSystem_get_focusedPanelRenderer_m0FDF6F7457719493E91BCC724844075D56B1E6CD(__this, /*hidden argument*/NULL);
		bool L_6 = UIElementsEventSystem_ScreenToPanel_m8C1D16AE1F2CCDF501CA59FB773060C427D0F0B5(L_5, (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		// using (EventBase evt = MakeTouchEvent(touch, EventModifiers.None))
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_8 = V_1;
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_9 = UIElementsEventSystem_MakeTouchEvent_mC1D76335D40DAB26402A6BECBB30DD7C895B4181(__this, L_8, 0, /*hidden argument*/NULL);
		V_4 = L_9;
	}

IL_003f:
	try
	{ // begin try (depth: 1)
		// focusedPanel.visualTree.SendEvent(evt);
		RuntimeObject* L_10 = UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_11 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_10);
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_12 = V_4;
		NullCheck(L_11);
		VirtActionInvoker1< EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, L_11, L_12);
		IL2CPP_LEAVE(0x63, FINALLY_0056);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_13 = V_4;
			if (!L_13)
			{
				goto IL_0062;
			}
		}

IL_005a:
		{
			EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_14 = V_4;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
	}

IL_0064:
	{
	}

IL_0065:
	{
		// for (int i = 0; i < input.touchCount; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0069:
	{
		// for (int i = 0; i < input.touchCount; ++i)
		int32_t L_16 = V_0;
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_17 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 Unity.UIElements.Runtime.InputWrapper::get_touchCount() */, L_17);
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_0005;
		}
	}
	{
		// return input.touchCount > 0;
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_20 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 Unity.UIElements.Runtime.InputWrapper::get_touchCount() */, L_20);
		V_6 = (bool)((((int32_t)L_21) > ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008f:
	{
		// }
		bool L_22 = V_6;
		return L_22;
	}
}
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::ProcessMouseEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsEventSystem_ProcessMouseEvents_mB274CDCFF9254F5B392E3DF72A3B5C704A666B54 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_ProcessMouseEvents_mB274CDCFF9254F5B392E3DF72A3B5C704A666B54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * V_10 = NULL;
	bool V_11 = false;
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * G_B10_0 = NULL;
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * G_B3_0 = NULL;
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * G_B8_0 = NULL;
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * G_B4_0 = NULL;
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * G_B6_0 = NULL;
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * G_B11_1 = NULL;
	{
		// Vector2 pos = new Vector2(input.mousePosition.x, Screen.height - input.mousePosition.y);
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_0 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(13 /* UnityEngine.Vector2 Unity.UIElements.Runtime.InputWrapper::get_mousePosition() */, L_0);
		float L_2 = L_1.get_x_0();
		int32_t L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_4 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(13 /* UnityEngine.Vector2 Unity.UIElements.Runtime.InputWrapper::get_mousePosition() */, L_4);
		float L_6 = L_5.get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)(((float)((float)L_3))), (float)L_6)), /*hidden argument*/NULL);
		// if (pos != m_LastMousePosition)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = __this->get_m_LastMousePosition_18();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		bool L_9 = Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_013a;
		}
	}
	{
		// m_LastMousePosition = pos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		__this->set_m_LastMousePosition_18(L_11);
		// m_Event.type = EventType.MouseMove;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_12 = __this->get_m_Event_14();
		NullCheck(L_12);
		Event_set_type_m9B687D79D5616CF25226B6AA9E9AA3DD597090BE(L_12, 2, /*hidden argument*/NULL);
		// if (ScreenToPanel(focusedPanelRenderer, ref m_Event, pos, m_LastMousePosition))
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_13 = UIElementsEventSystem_get_focusedPanelRenderer_m0FDF6F7457719493E91BCC724844075D56B1E6CD(__this, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** L_14 = __this->get_address_of_m_Event_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = __this->get_m_LastMousePosition_18();
		bool L_17 = UIElementsEventSystem_ScreenToPanel_m5A19678380877C325F604431E5561D3A8917FA5A(L_13, (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E **)L_14, L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0139;
		}
	}
	{
		// m_Event.button = input.GetMouseButtonDown(0) ? 0 :
		//     input.GetMouseButtonDown(1) ? 1 :
		//     input.GetMouseButtonDown(2) ? 2 : 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_19 = __this->get_m_Event_14();
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_20 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		bool L_21 = VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetMouseButtonDown(System.Int32) */, L_20, 0);
		G_B3_0 = L_19;
		if (L_21)
		{
			G_B10_0 = L_19;
			goto IL_00b0;
		}
	}
	{
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_22 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetMouseButtonDown(System.Int32) */, L_22, 1);
		G_B4_0 = G_B3_0;
		if (L_23)
		{
			G_B8_0 = G_B3_0;
			goto IL_00ad;
		}
	}
	{
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_24 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25 = VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetMouseButtonDown(System.Int32) */, L_24, 2);
		G_B5_0 = G_B4_0;
		if (L_25)
		{
			G_B6_0 = G_B4_0;
			goto IL_00aa;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B7_0 = 2;
		G_B7_1 = G_B6_0;
	}

IL_00ab:
	{
		G_B9_0 = G_B7_0;
		G_B9_1 = G_B7_1;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00ae:
	{
		G_B11_0 = G_B9_0;
		G_B11_1 = G_B9_1;
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
	}

IL_00b1:
	{
		NullCheck(G_B11_1);
		Event_set_button_m3946222F432A2D3DC5FF493CC883DFB5DA9F1174(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		// m_Event.modifiers = EventModifiers.None;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_26 = __this->get_m_Event_14();
		NullCheck(L_26);
		Event_set_modifiers_m375A78874878A2BA7822E93CA62579B0E4CA7AA2(L_26, 0, /*hidden argument*/NULL);
		// m_Event.pressure = 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_27 = __this->get_m_Event_14();
		NullCheck(L_27);
		Event_set_pressure_m8A58759BBEC3D6C0A33A10146E6634B41E17D739(L_27, (0.0f), /*hidden argument*/NULL);
		// m_Event.clickCount = 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_28 = __this->get_m_Event_14();
		NullCheck(L_28);
		Event_set_clickCount_mFB2FAE621779576AA952FB099323EBC5C7B80E40(L_28, 0, /*hidden argument*/NULL);
		// m_Event.character = default(char);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_29 = __this->get_m_Event_14();
		NullCheck(L_29);
		Event_set_character_mD0A42F6FCA52E9112469AD0C8ADB09A422134CA8(L_29, 0, /*hidden argument*/NULL);
		// m_Event.keyCode = KeyCode.None;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_30 = __this->get_m_Event_14();
		NullCheck(L_30);
		Event_set_keyCode_m46A1716DB961C39116C5574601FB918FEAD7E9F3(L_30, 0, /*hidden argument*/NULL);
		// m_Event.displayIndex = 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_31 = __this->get_m_Event_14();
		NullCheck(L_31);
		Event_set_displayIndex_mECFA15B9D33DF3F81E3567BFBED691B1691C8AA9(L_31, 0, /*hidden argument*/NULL);
		// m_Event.commandName = String.Empty;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_32 = __this->get_m_Event_14();
		String_t* L_33 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_32);
		Event_set_commandName_m7B72EF13AA81C6BA3F2AA529C64A2A0513FBE53E(L_32, L_33, /*hidden argument*/NULL);
		// EventBase evt = InternalBridge.CreateEvent(m_Event);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_34 = __this->get_m_Event_14();
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_35 = InternalBridge_CreateEvent_mE203BC547EA7B1FCCB1C2E236DCD5D5A5F09C1EE(L_34, /*hidden argument*/NULL);
		V_3 = L_35;
		// focusedPanel.visualTree.SendEvent(evt);
		RuntimeObject* L_36 = UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_37 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_36);
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_38 = V_3;
		NullCheck(L_37);
		VirtActionInvoker1< EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, L_37, L_38);
	}

IL_0139:
	{
	}

IL_013a:
	{
		// for (var i = 0; i < 3; i++)
		V_4 = 0;
		goto IL_02fc;
	}

IL_0142:
	{
		// if (input.GetMouseButtonDown(i))
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_39 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		int32_t L_40 = V_4;
		NullCheck(L_39);
		bool L_41 = VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetMouseButtonDown(System.Int32) */, L_39, L_40);
		V_5 = L_41;
		bool L_42 = V_5;
		if (!L_42)
		{
			goto IL_021c;
		}
	}
	{
		// m_Event.type = EventType.MouseDown;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_43 = __this->get_m_Event_14();
		NullCheck(L_43);
		Event_set_type_m9B687D79D5616CF25226B6AA9E9AA3DD597090BE(L_43, 0, /*hidden argument*/NULL);
		// if (ScreenToPanel(focusedPanelRenderer, ref m_Event, pos, m_LastMousePosition))
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_44 = UIElementsEventSystem_get_focusedPanelRenderer_m0FDF6F7457719493E91BCC724844075D56B1E6CD(__this, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** L_45 = __this->get_address_of_m_Event_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = __this->get_m_LastMousePosition_18();
		bool L_48 = UIElementsEventSystem_ScreenToPanel_m5A19678380877C325F604431E5561D3A8917FA5A(L_44, (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E **)L_45, L_46, L_47, /*hidden argument*/NULL);
		V_6 = L_48;
		bool L_49 = V_6;
		if (!L_49)
		{
			goto IL_021b;
		}
	}
	{
		// m_Event.button = i;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_50 = __this->get_m_Event_14();
		int32_t L_51 = V_4;
		NullCheck(L_50);
		Event_set_button_m3946222F432A2D3DC5FF493CC883DFB5DA9F1174(L_50, L_51, /*hidden argument*/NULL);
		// m_Event.modifiers = EventModifiers.None;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_52 = __this->get_m_Event_14();
		NullCheck(L_52);
		Event_set_modifiers_m375A78874878A2BA7822E93CA62579B0E4CA7AA2(L_52, 0, /*hidden argument*/NULL);
		// m_Event.pressure = 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_53 = __this->get_m_Event_14();
		NullCheck(L_53);
		Event_set_pressure_m8A58759BBEC3D6C0A33A10146E6634B41E17D739(L_53, (0.0f), /*hidden argument*/NULL);
		// m_Event.clickCount = 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_54 = __this->get_m_Event_14();
		NullCheck(L_54);
		Event_set_clickCount_mFB2FAE621779576AA952FB099323EBC5C7B80E40(L_54, 0, /*hidden argument*/NULL);
		// m_Event.character = default(char);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_55 = __this->get_m_Event_14();
		NullCheck(L_55);
		Event_set_character_mD0A42F6FCA52E9112469AD0C8ADB09A422134CA8(L_55, 0, /*hidden argument*/NULL);
		// m_Event.keyCode = KeyCode.None;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_56 = __this->get_m_Event_14();
		NullCheck(L_56);
		Event_set_keyCode_m46A1716DB961C39116C5574601FB918FEAD7E9F3(L_56, 0, /*hidden argument*/NULL);
		// m_Event.displayIndex = 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_57 = __this->get_m_Event_14();
		NullCheck(L_57);
		Event_set_displayIndex_mECFA15B9D33DF3F81E3567BFBED691B1691C8AA9(L_57, 0, /*hidden argument*/NULL);
		// m_Event.commandName = String.Empty;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_58 = __this->get_m_Event_14();
		String_t* L_59 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_58);
		Event_set_commandName_m7B72EF13AA81C6BA3F2AA529C64A2A0513FBE53E(L_58, L_59, /*hidden argument*/NULL);
		// EventBase evt = InternalBridge.CreateEvent(m_Event);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_60 = __this->get_m_Event_14();
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_61 = InternalBridge_CreateEvent_mE203BC547EA7B1FCCB1C2E236DCD5D5A5F09C1EE(L_60, /*hidden argument*/NULL);
		V_7 = L_61;
		// focusedPanel.visualTree.SendEvent(evt);
		RuntimeObject* L_62 = UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_63 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_62);
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_64 = V_7;
		NullCheck(L_63);
		VirtActionInvoker1< EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, L_63, L_64);
	}

IL_021b:
	{
	}

IL_021c:
	{
		// if (input.GetMouseButtonUp(i))
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_65 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		int32_t L_66 = V_4;
		NullCheck(L_65);
		bool L_67 = VirtFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetMouseButtonUp(System.Int32) */, L_65, L_66);
		V_8 = L_67;
		bool L_68 = V_8;
		if (!L_68)
		{
			goto IL_02f5;
		}
	}
	{
		// m_Event.type = EventType.MouseUp;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_69 = __this->get_m_Event_14();
		NullCheck(L_69);
		Event_set_type_m9B687D79D5616CF25226B6AA9E9AA3DD597090BE(L_69, 1, /*hidden argument*/NULL);
		// if (ScreenToPanel(focusedPanelRenderer, ref m_Event, pos, m_LastMousePosition))
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_70 = UIElementsEventSystem_get_focusedPanelRenderer_m0FDF6F7457719493E91BCC724844075D56B1E6CD(__this, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** L_71 = __this->get_address_of_m_Event_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_73 = __this->get_m_LastMousePosition_18();
		bool L_74 = UIElementsEventSystem_ScreenToPanel_m5A19678380877C325F604431E5561D3A8917FA5A(L_70, (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E **)L_71, L_72, L_73, /*hidden argument*/NULL);
		V_9 = L_74;
		bool L_75 = V_9;
		if (!L_75)
		{
			goto IL_02f4;
		}
	}
	{
		// m_Event.button = i;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_76 = __this->get_m_Event_14();
		int32_t L_77 = V_4;
		NullCheck(L_76);
		Event_set_button_m3946222F432A2D3DC5FF493CC883DFB5DA9F1174(L_76, L_77, /*hidden argument*/NULL);
		// m_Event.modifiers = EventModifiers.None;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_78 = __this->get_m_Event_14();
		NullCheck(L_78);
		Event_set_modifiers_m375A78874878A2BA7822E93CA62579B0E4CA7AA2(L_78, 0, /*hidden argument*/NULL);
		// m_Event.pressure = 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_79 = __this->get_m_Event_14();
		NullCheck(L_79);
		Event_set_pressure_m8A58759BBEC3D6C0A33A10146E6634B41E17D739(L_79, (0.0f), /*hidden argument*/NULL);
		// m_Event.clickCount = 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_80 = __this->get_m_Event_14();
		NullCheck(L_80);
		Event_set_clickCount_mFB2FAE621779576AA952FB099323EBC5C7B80E40(L_80, 0, /*hidden argument*/NULL);
		// m_Event.character = default(char);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_81 = __this->get_m_Event_14();
		NullCheck(L_81);
		Event_set_character_mD0A42F6FCA52E9112469AD0C8ADB09A422134CA8(L_81, 0, /*hidden argument*/NULL);
		// m_Event.keyCode = KeyCode.None;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_82 = __this->get_m_Event_14();
		NullCheck(L_82);
		Event_set_keyCode_m46A1716DB961C39116C5574601FB918FEAD7E9F3(L_82, 0, /*hidden argument*/NULL);
		// m_Event.displayIndex = 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_83 = __this->get_m_Event_14();
		NullCheck(L_83);
		Event_set_displayIndex_mECFA15B9D33DF3F81E3567BFBED691B1691C8AA9(L_83, 0, /*hidden argument*/NULL);
		// m_Event.commandName = String.Empty;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_84 = __this->get_m_Event_14();
		String_t* L_85 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_84);
		Event_set_commandName_m7B72EF13AA81C6BA3F2AA529C64A2A0513FBE53E(L_84, L_85, /*hidden argument*/NULL);
		// EventBase evt = InternalBridge.CreateEvent(m_Event);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_86 = __this->get_m_Event_14();
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_87 = InternalBridge_CreateEvent_mE203BC547EA7B1FCCB1C2E236DCD5D5A5F09C1EE(L_86, /*hidden argument*/NULL);
		V_10 = L_87;
		// focusedPanel.visualTree.SendEvent(evt);
		RuntimeObject* L_88 = UIElementsEventSystem_get_focusedPanel_mFE78E8B413FB7520D8837D31F62320DF84546AF3(__this, /*hidden argument*/NULL);
		NullCheck(L_88);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_89 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_88);
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_90 = V_10;
		NullCheck(L_89);
		VirtActionInvoker1< EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, L_89, L_90);
	}

IL_02f4:
	{
	}

IL_02f5:
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_91 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_02fc:
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_92 = V_4;
		V_11 = (bool)((((int32_t)L_92) < ((int32_t)3))? 1 : 0);
		bool L_93 = V_11;
		if (L_93)
		{
			goto IL_0142;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.UIElementsEventSystem::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsEventSystem_OnApplicationFocus_m16FF3C6030FE5C4762A16906466D1ACDFC91B877 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	{
		// isAppFocused = hasFocus;
		bool L_0 = ___hasFocus0;
		UIElementsEventSystem_set_isAppFocused_m1763833C17662F4442FB92BA2FC8A1884AAF0B32_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Unity.UIElements.Runtime.UIElementsEventSystem::GetRawMoveVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIElementsEventSystem_GetRawMoveVector_m155C433440E00EDED6C2A2B3145843189DAC317E (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_GetRawMoveVector_m155C433440E00EDED6C2A2B3145843189DAC317E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// Vector2 move = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// move.x = input.GetAxisRaw(m_HorizontalAxis);
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_1 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_m_HorizontalAxis_7();
		NullCheck(L_1);
		float L_3 = VirtFuncInvoker1< float, String_t* >::Invoke(18 /* System.Single Unity.UIElements.Runtime.InputWrapper::GetAxisRaw(System.String) */, L_1, L_2);
		(&V_0)->set_x_0(L_3);
		// move.y = input.GetAxisRaw(m_VerticalAxis);
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_4 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_m_VerticalAxis_8();
		NullCheck(L_4);
		float L_6 = VirtFuncInvoker1< float, String_t* >::Invoke(18 /* System.Single Unity.UIElements.Runtime.InputWrapper::GetAxisRaw(System.String) */, L_4, L_5);
		(&V_0)->set_y_1(L_6);
		// if (input.GetButtonDown(m_HorizontalAxis))
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_7 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		String_t* L_8 = __this->get_m_HorizontalAxis_7();
		NullCheck(L_7);
		bool L_9 = VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetButtonDown(System.String) */, L_7, L_8);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		// if (move.x < 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		float L_12 = L_11.get_x_0();
		V_2 = (bool)((((float)L_12) < ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		// move.x = -1f;
		(&V_0)->set_x_0((-1.0f));
	}

IL_006a:
	{
		// if (move.x > 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_0;
		float L_15 = L_14.get_x_0();
		V_3 = (bool)((((float)L_15) > ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0087;
		}
	}
	{
		// move.x = 1f;
		(&V_0)->set_x_0((1.0f));
	}

IL_0087:
	{
	}

IL_0088:
	{
		// if (input.GetButtonDown(m_VerticalAxis))
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_17 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		String_t* L_18 = __this->get_m_VerticalAxis_8();
		NullCheck(L_17);
		bool L_19 = VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetButtonDown(System.String) */, L_17, L_18);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00df;
		}
	}
	{
		// if (move.y < 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_0;
		float L_22 = L_21.get_y_1();
		V_5 = (bool)((((float)L_22) < ((float)(0.0f)))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00bf;
		}
	}
	{
		// move.y = -1f;
		(&V_0)->set_y_1((-1.0f));
	}

IL_00bf:
	{
		// if (move.y > 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_0;
		float L_25 = L_24.get_y_1();
		V_6 = (bool)((((float)L_25) > ((float)(0.0f)))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00de;
		}
	}
	{
		// move.y = 1f;
		(&V_0)->set_y_1((1.0f));
	}

IL_00de:
	{
	}

IL_00df:
	{
		// return move;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_0;
		V_7 = L_27;
		goto IL_00e4;
	}

IL_00e4:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_7;
		return L_28;
	}
}
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ShouldSendMoveFromInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ShouldSendMoveFromInput_mF43DE3E117B1C6C336ABCDCDB321FB140CB356D4 (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_ShouldSendMoveFromInput_mF43DE3E117B1C6C336ABCDCDB321FB140CB356D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// float time = Time.unscaledTime;
		float L_0 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		V_0 = L_0;
		// Vector2 movement = GetRawMoveVector();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = UIElementsEventSystem_GetRawMoveVector_m155C433440E00EDED6C2A2B3145843189DAC317E(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// if (Mathf.Approximately(movement.x, 0f) && Mathf.Approximately(movement.y, 0f))
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = V_1;
		float L_3 = L_2.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		bool L_4 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_3, (0.0f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_1;
		float L_6 = L_5.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_6, (0.0f), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0033;
	}

IL_0032:
	{
		G_B3_0 = 0;
	}

IL_0033:
	{
		V_5 = (bool)G_B3_0;
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// m_ConsecutiveMoveCount = 0;
		__this->set_m_ConsecutiveMoveCount_19(0);
		// return false;
		V_6 = (bool)0;
		goto IL_0145;
	}

IL_0049:
	{
		// bool allow = input.GetButtonDown(m_HorizontalAxis) || input.GetButtonDown(m_VerticalAxis);
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_9 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		String_t* L_10 = __this->get_m_HorizontalAxis_7();
		NullCheck(L_9);
		bool L_11 = VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetButtonDown(System.String) */, L_9, L_10);
		if (L_11)
		{
			goto IL_006f;
		}
	}
	{
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_12 = UIElementsEventSystem_get_input_m7B395BE76C44A547A4340965B1C59D4D0C8CC739(__this, /*hidden argument*/NULL);
		String_t* L_13 = __this->get_m_VerticalAxis_8();
		NullCheck(L_12);
		bool L_14 = VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean Unity.UIElements.Runtime.InputWrapper::GetButtonDown(System.String) */, L_12, L_13);
		G_B8_0 = ((int32_t)(L_14));
		goto IL_0070;
	}

IL_006f:
	{
		G_B8_0 = 1;
	}

IL_0070:
	{
		V_2 = (bool)G_B8_0;
		// bool similarDir = (Vector2.Dot(movement, m_LastMoveVector) > 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = __this->get_m_LastMoveVector_20();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		float L_17 = Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline(L_15, L_16, /*hidden argument*/NULL);
		V_3 = (bool)((((float)L_17) > ((float)(0.0f)))? 1 : 0);
		// if (!allow)
		bool L_18 = V_2;
		V_7 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_00d0;
		}
	}
	{
		// if (similarDir && m_ConsecutiveMoveCount == 1)
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_21 = __this->get_m_ConsecutiveMoveCount_19();
		G_B12_0 = ((((int32_t)L_21) == ((int32_t)1))? 1 : 0);
		goto IL_009f;
	}

IL_009e:
	{
		G_B12_0 = 0;
	}

IL_009f:
	{
		V_8 = (bool)G_B12_0;
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00b8;
		}
	}
	{
		// allow = (time > m_PrevActionTime + m_RepeatDelay);
		float L_23 = V_0;
		float L_24 = __this->get_m_PrevActionTime_21();
		float L_25 = __this->get_m_RepeatDelay_12();
		V_2 = (bool)((((float)L_23) > ((float)((float)il2cpp_codegen_add((float)L_24, (float)L_25))))? 1 : 0);
		goto IL_00cf;
	}

IL_00b8:
	{
		// allow = (time > m_PrevActionTime + 1f / m_InputActionsPerSecond);
		float L_26 = V_0;
		float L_27 = __this->get_m_PrevActionTime_21();
		float L_28 = __this->get_m_InputActionsPerSecond_11();
		V_2 = (bool)((((float)L_26) > ((float)((float)il2cpp_codegen_add((float)L_27, (float)((float)((float)(1.0f)/(float)L_28))))))? 1 : 0);
	}

IL_00cf:
	{
	}

IL_00d0:
	{
		// if (!allow)
		bool L_29 = V_2;
		V_9 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00df;
		}
	}
	{
		// return false;
		V_6 = (bool)0;
		goto IL_0145;
	}

IL_00df:
	{
		// var moveDirection = NavigationMoveEvent.DetermineMoveDirection(movement.x, movement.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = V_1;
		float L_32 = L_31.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = V_1;
		float L_34 = L_33.get_y_1();
		int32_t L_35 = NavigationMoveEvent_DetermineMoveDirection_mD8658A2A5B225427BFCDDD1EBA093580AAAD0EE5(L_32, L_34, (0.600000024f), /*hidden argument*/NULL);
		V_4 = L_35;
		// if (moveDirection != NavigationMoveEvent.Direction.None)
		int32_t L_36 = V_4;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0133;
		}
	}
	{
		// if (!similarDir)
		bool L_38 = V_3;
		V_11 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_11;
		if (!L_39)
		{
			goto IL_0114;
		}
	}
	{
		// m_ConsecutiveMoveCount = 0;
		__this->set_m_ConsecutiveMoveCount_19(0);
	}

IL_0114:
	{
		// m_ConsecutiveMoveCount++;
		int32_t L_40 = __this->get_m_ConsecutiveMoveCount_19();
		__this->set_m_ConsecutiveMoveCount_19(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)));
		// m_PrevActionTime = time;
		float L_41 = V_0;
		__this->set_m_PrevActionTime_21(L_41);
		// m_LastMoveVector = movement;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = V_1;
		__this->set_m_LastMoveVector_20(L_42);
		goto IL_013c;
	}

IL_0133:
	{
		// m_ConsecutiveMoveCount = 0;
		__this->set_m_ConsecutiveMoveCount_19(0);
	}

IL_013c:
	{
		// return moveDirection != NavigationMoveEvent.Direction.None;
		int32_t L_43 = V_4;
		V_6 = (bool)((!(((uint32_t)L_43) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0145;
	}

IL_0145:
	{
		// }
		bool L_44 = V_6;
		return L_44;
	}
}
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ScreenToPanel(Unity.UIElements.Runtime.PanelRenderer,UnityEngine.Touch&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ScreenToPanel_m8C1D16AE1F2CCDF501CA59FB773060C427D0F0B5 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * ___panelRenderer0, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * ___touch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_ScreenToPanel_m8C1D16AE1F2CCDF501CA59FB773060C427D0F0B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	{
		// var panelPosition = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// var panelDelta = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_1 = L_1;
		// if (!ScreenToPanel(panelRenderer, touch.position, touch.deltaPosition,
		//     out panelPosition, out panelDelta))
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_2 = ___panelRenderer0;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * L_3 = ___touch1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)L_3, /*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * L_5 = ___touch1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)L_5, /*hidden argument*/NULL);
		bool L_7 = UIElementsEventSystem_ScreenToPanel_m797E8128E66FDF947AE5BB54E355E780F43B64D5(L_2, L_4, L_6, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0042;
	}

IL_002e:
	{
		// touch.position = panelPosition;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * L_9 = ___touch1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		Touch_set_position_m74DE709CAB66F72A4E9A4F7A63430B710A5F847D((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)L_9, L_10, /*hidden argument*/NULL);
		// touch.deltaPosition = panelDelta;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * L_11 = ___touch1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_1;
		Touch_set_deltaPosition_m81F7F3CD970CEB74678E098ADE7082BBC6F3DCAA((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)L_11, L_12, /*hidden argument*/NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ScreenToPanel(Unity.UIElements.Runtime.PanelRenderer,UnityEngine.Event&,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ScreenToPanel_m5A19678380877C325F604431E5561D3A8917FA5A (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * ___panelRenderer0, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** ___evt1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lastScreenPosition3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_ScreenToPanel_m5A19678380877C325F604431E5561D3A8917FA5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	{
		// var panelPosition = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// var panelDelta = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_1 = L_1;
		// if (!ScreenToPanel(panelRenderer, screenPosition, screenPosition - lastScreenPosition,
		//     out panelPosition, out panelDelta))
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_2 = ___panelRenderer0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___screenPosition2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___screenPosition2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___lastScreenPosition3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_4, L_5, /*hidden argument*/NULL);
		bool L_7 = UIElementsEventSystem_ScreenToPanel_m797E8128E66FDF947AE5BB54E355E780F43B64D5(L_2, L_3, L_6, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0040;
	}

IL_002a:
	{
		// evt.mousePosition = panelPosition;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** L_9 = ___evt1;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_10 = *((Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E **)L_9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		NullCheck(L_10);
		Event_set_mousePosition_mD6216A507F0F1FCBB3489323ADA044384548487B(L_10, L_11, /*hidden argument*/NULL);
		// evt.delta = panelDelta;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** L_12 = ___evt1;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_13 = *((Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E **)L_12);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_1;
		NullCheck(L_13);
		Event_set_delta_m4F99A0AC9104D2BE1903C74B77607CCD3697424D(L_13, L_14, /*hidden argument*/NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Boolean Unity.UIElements.Runtime.UIElementsEventSystem::ScreenToPanel(Unity.UIElements.Runtime.PanelRenderer,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIElementsEventSystem_ScreenToPanel_m797E8128E66FDF947AE5BB54E355E780F43B64D5 (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * ___panelRenderer0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenDelta2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___panelPosition3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___panelDelta4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIElementsEventSystem_ScreenToPanel_m797E8128E66FDF947AE5BB54E355E780F43B64D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// panelPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = ___panelPosition3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_0 = L_1;
		// panelDelta = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = ___panelDelta4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_2 = L_3;
		// if (!panelRenderer.ScreenToPanel(screenPosition, out panelPosition))
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_4 = ___panelRenderer0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___screenPosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = ___panelPosition3;
		NullCheck(L_4);
		bool L_7 = PanelRenderer_ScreenToPanel_m21E671A8E1E04953370551C79F1DEA4C899FD6A4(L_4, L_5, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_005b;
	}

IL_002b:
	{
		// var panelPrevPosition = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_9;
		// if (panelRenderer.ScreenToPanel(screenPosition - screenDelta, out panelPrevPosition))
		PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * L_10 = ___panelRenderer0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___screenPosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = ___screenDelta2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_14 = PanelRenderer_ScreenToPanel_m21E671A8E1E04953370551C79F1DEA4C899FD6A4(L_10, L_13, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		// panelDelta = panelPosition - panelPrevPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = ___panelDelta4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = ___panelPosition3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_17);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_18, L_19, /*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_16 = L_20;
	}

IL_0057:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		bool L_21 = V_2;
		return L_21;
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
// System.Void Unity.UIElements.Runtime.WorldQuadDisplay::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldQuadDisplay_OnEnable_m76009E67497D7C8AD31A31317D9ABA52E904FDDB (WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6 * __this, const RuntimeMethod* method)
{
	{
		// m_TargetTexture = null;
		__this->set_m_TargetTexture_7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL);
		// m_ShouldEmitShaderNotFoundError = true;
		__this->set_m_ShouldEmitShaderNotFoundError_16((bool)1);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.WorldQuadDisplay::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldQuadDisplay_OnDisable_m6AA666DCC556082EE483ACBB25D515674DF8B1B8 (WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldQuadDisplay_OnDisable_m6AA666DCC556082EE483ACBB25D515674DF8B1B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Renderer != null)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_0 = __this->get_m_Renderer_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// m_Renderer.enabled = false;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_3 = __this->get_m_Renderer_10();
		NullCheck(L_3);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.WorldQuadDisplay::UpdateWorldGeometryAndMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldQuadDisplay_UpdateWorldGeometryAndMaterial_mAD2390DFA5C9F22268BA5B39AD1094E058DAE353 (WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldQuadDisplay_UpdateWorldGeometryAndMaterial_mAD2390DFA5C9F22268BA5B39AD1094E058DAE353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// if (m_Material == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_Material_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// var shader = Shader.Find("Unlit/Transparent");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B, /*hidden argument*/NULL);
		V_2 = L_3;
		// if (shader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// if (m_ShouldEmitShaderNotFoundError)
		bool L_7 = __this->get_m_ShouldEmitShaderNotFoundError_16();
		V_4 = L_7;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// m_ShouldEmitShaderNotFoundError = false;
		__this->set_m_ShouldEmitShaderNotFoundError_16((bool)0);
		// Debug.LogError("Shader \"Unlit/Transparent\" not found. Please make sure it is added to the Always Included Shaders list in Edit -> Project Settings -> Graphics.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralF1A9E1E6B69455E308044736665AAD29EB5551A6, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// return;
		goto IL_02c8;
	}

IL_004e:
	{
		// m_Material = new Material(shader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_9 = V_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_Material_8(L_10);
		// m_Material.hideFlags = HideFlags.HideAndDontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_m_Material_8();
		NullCheck(L_11);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_11, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_0069:
	{
		// if (m_TargetTexture != targetTexture)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_12 = __this->get_m_TargetTexture_7();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_13 = __this->get_targetTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00a0;
		}
	}
	{
		// m_TargetTexture = targetTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = __this->get_targetTexture_4();
		__this->set_m_TargetTexture_7(L_16);
		// m_Material.mainTexture = m_TargetTexture;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = __this->get_m_Material_8();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = __this->get_m_TargetTexture_7();
		NullCheck(L_17);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_17, L_18, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// var meshNeedsUpdate = m_SizeInWorld != sizeInWorld;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = __this->get_m_SizeInWorld_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = __this->get_sizeInWorld_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		bool L_21 = Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline(L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		// if (m_Mesh == null)
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_22 = __this->get_m_Mesh_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_23;
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_0117;
		}
	}
	{
		// m_Mesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_25 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_25, /*hidden argument*/NULL);
		__this->set_m_Mesh_12(L_25);
		// m_Mesh.hideFlags = HideFlags.HideAndDontSave;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_26 = __this->get_m_Mesh_12();
		NullCheck(L_26);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_26, ((int32_t)61), /*hidden argument*/NULL);
		// m_Mesh.vertices = m_Vertices; 
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_27 = __this->get_m_Mesh_12();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_28 = __this->get_m_Vertices_15();
		NullCheck(L_27);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_27, L_28, /*hidden argument*/NULL);
		// m_Mesh.uv = k_UV;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_29 = __this->get_m_Mesh_12();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_30 = __this->get_k_UV_13();
		NullCheck(L_29);
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_29, L_30, /*hidden argument*/NULL);
		// m_Mesh.triangles = k_Triangles;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_31 = __this->get_m_Mesh_12();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = __this->get_k_Triangles_14();
		NullCheck(L_31);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_31, L_32, /*hidden argument*/NULL);
		// meshNeedsUpdate = true;
		V_0 = (bool)1;
	}

IL_0117:
	{
		// if (meshNeedsUpdate)
		bool L_33 = V_0;
		V_7 = L_33;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_0200;
		}
	}
	{
		// m_SizeInWorld = sizeInWorld;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = __this->get_sizeInWorld_5();
		__this->set_m_SizeInWorld_9(L_35);
		// m_Vertices[0] = Vector2.zero;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_36 = __this->get_m_Vertices_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_38);
		// m_Vertices[1] = new Vector2(m_SizeInWorld.x, 0);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_39 = __this->get_m_Vertices_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_40 = __this->get_address_of_m_SizeInWorld_9();
		float L_41 = L_40->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_42), L_41, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_42, /*hidden argument*/NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_43);
		// m_Vertices[2] = new Vector2(m_SizeInWorld.x, m_SizeInWorld.y);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_44 = __this->get_m_Vertices_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_45 = __this->get_address_of_m_SizeInWorld_9();
		float L_46 = L_45->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_47 = __this->get_address_of_m_SizeInWorld_9();
		float L_48 = L_47->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_49), L_46, L_48, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_50);
		// m_Vertices[3] = new Vector2(0, m_SizeInWorld.y);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_51 = __this->get_m_Vertices_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_52 = __this->get_address_of_m_SizeInWorld_9();
		float L_53 = L_52->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_54), (0.0f), L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_54, /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_55);
		// m_Mesh.vertices = m_Vertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_56 = __this->get_m_Mesh_12();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_57 = __this->get_m_Vertices_15();
		NullCheck(L_56);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_56, L_57, /*hidden argument*/NULL);
		// m_Mesh.bounds = new Bounds(m_SizeInWorld * 0.5f, m_SizeInWorld);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_58 = __this->get_m_Mesh_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59 = __this->get_m_SizeInWorld_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_59, (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_60, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62 = __this->get_m_SizeInWorld_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_62, /*hidden argument*/NULL);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_64;
		memset((&L_64), 0, sizeof(L_64));
		Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3((&L_64), L_61, L_63, /*hidden argument*/NULL);
		NullCheck(L_58);
		Mesh_set_bounds_m9752E145EA6D719B417AA27555DDC2A388AB4E0A(L_58, L_64, /*hidden argument*/NULL);
	}

IL_0200:
	{
		// if (m_MeshFilter == null)
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_65 = __this->get_m_MeshFilter_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_66 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_65, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_66;
		bool L_67 = V_8;
		if (!L_67)
		{
			goto IL_0247;
		}
	}
	{
		// m_MeshFilter = gameObject.AddComponent<MeshFilter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_69 = GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2(L_68, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
		__this->set_m_MeshFilter_11(L_69);
		// m_MeshFilter.hideFlags = HideFlags.HideAndDontSave;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_70 = __this->get_m_MeshFilter_11();
		NullCheck(L_70);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_70, ((int32_t)61), /*hidden argument*/NULL);
		// m_MeshFilter.mesh = m_Mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_71 = __this->get_m_MeshFilter_11();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_72 = __this->get_m_Mesh_12();
		NullCheck(L_71);
		MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC(L_71, L_72, /*hidden argument*/NULL);
		goto IL_0260;
	}

IL_0247:
	{
		// else if (meshNeedsUpdate)
		bool L_73 = V_0;
		V_9 = L_73;
		bool L_74 = V_9;
		if (!L_74)
		{
			goto IL_0260;
		}
	}
	{
		// m_MeshFilter.mesh = m_Mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_75 = __this->get_m_MeshFilter_11();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_76 = __this->get_m_Mesh_12();
		NullCheck(L_75);
		MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC(L_75, L_76, /*hidden argument*/NULL);
	}

IL_0260:
	{
		// if (m_Renderer == null)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_77 = __this->get_m_Renderer_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_78 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_77, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_10 = L_78;
		bool L_79 = V_10;
		if (!L_79)
		{
			goto IL_02a7;
		}
	}
	{
		// m_Renderer = gameObject.AddComponent<MeshRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_80);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_81 = GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47(L_80, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
		__this->set_m_Renderer_10(L_81);
		// m_Renderer.hideFlags = HideFlags.HideAndDontSave;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_82 = __this->get_m_Renderer_10();
		NullCheck(L_82);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_82, ((int32_t)61), /*hidden argument*/NULL);
		// m_Renderer.material = m_Material;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_83 = __this->get_m_Renderer_10();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_84 = __this->get_m_Material_8();
		NullCheck(L_83);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_83, L_84, /*hidden argument*/NULL);
		goto IL_02c8;
	}

IL_02a7:
	{
		// else if (!m_Renderer.enabled)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_85 = __this->get_m_Renderer_10();
		NullCheck(L_85);
		bool L_86 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_85, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_86) == ((int32_t)0))? 1 : 0);
		bool L_87 = V_11;
		if (!L_87)
		{
			goto IL_02c8;
		}
	}
	{
		// m_Renderer.enabled = true;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_88 = __this->get_m_Renderer_10();
		NullCheck(L_88);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_88, (bool)1, /*hidden argument*/NULL);
	}

IL_02c8:
	{
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.WorldQuadDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldQuadDisplay_Update_mE0F16CAA73D10331639BB111CF640372E88B488B (WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldQuadDisplay_Update_mE0F16CAA73D10331639BB111CF640372E88B488B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (targetTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_targetTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// UpdateWorldGeometryAndMaterial();
		WorldQuadDisplay_UpdateWorldGeometryAndMaterial_mAD2390DFA5C9F22268BA5B39AD1094E058DAE353(__this, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_001c:
	{
		// else if (m_TargetTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = __this->get_m_TargetTexture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		// m_TargetTexture = null;
		__this->set_m_TargetTexture_7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL);
		// if (m_Renderer != null)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_6 = __this->get_m_Renderer_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// m_Renderer.enabled = false;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_9 = __this->get_m_Renderer_10();
		NullCheck(L_9);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_0051:
	{
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Boolean Unity.UIElements.Runtime.WorldQuadDisplay::Unity.UIElements.Runtime.IPanelTransform.ScreenToPanelUV(UnityEngine.Vector2,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldQuadDisplay_Unity_UIElements_Runtime_IPanelTransform_ScreenToPanelUV_m468E9482A50AEDBA60BB04FBDED1F4A669E5EA8D (WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___panelUVPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldQuadDisplay_Unity_UIElements_Runtime_IPanelTransform_ScreenToPanelUV_m468E9482A50AEDBA60BB04FBDED1F4A669E5EA8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	bool V_6 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	{
		// screenPosition.y = Screen.height - screenPosition.y;
		int32_t L_0 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___screenPosition0;
		float L_2 = L_1.get_y_1();
		(&___screenPosition0)->set_y_1(((float)il2cpp_codegen_subtract((float)(((float)((float)L_0))), (float)L_2)));
		// var ray = eventCamera.ScreenPointToRay(screenPosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_eventCamera_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___screenPosition0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_6 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// var panelRayDir = transform.InverseTransformDirection(ray.direction);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// var panelRayOrigin = transform.InverseTransformPoint(ray.origin);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// var panelRay = new Ray(panelRayOrigin, panelRayDir);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_3), L_13, L_14, /*hidden argument*/NULL);
		// var plane = new Plane(Vector3.forward, Vector3.zero);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_4), L_15, L_16, /*hidden argument*/NULL);
		// float distance = 0;
		V_5 = (0.0f);
		// if (plane.Raycast(panelRay, out distance))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_17 = V_3;
		bool L_18 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_4), L_17, (float*)(&V_5), /*hidden argument*/NULL);
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00c6;
		}
	}
	{
		// var hitPosition = panelRay.GetPoint(distance);
		float L_20 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_3), L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		// panelUVPosition = new Vector2(hitPosition.x / m_SizeInWorld.x, 1 - hitPosition.y / m_SizeInWorld.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = ___panelUVPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_7;
		float L_24 = L_23.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_25 = __this->get_address_of_m_SizeInWorld_9();
		float L_26 = L_25->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_7;
		float L_28 = L_27.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_29 = __this->get_address_of_m_SizeInWorld_9();
		float L_30 = L_29->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_31), ((float)((float)L_24/(float)L_26)), ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_28/(float)L_30)))), /*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_22 = L_31;
		// return true;
		V_8 = (bool)1;
		goto IL_00d6;
	}

IL_00c6:
	{
		// panelUVPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_32 = ___panelUVPosition1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_32 = L_33;
		// return false;
		V_8 = (bool)0;
		goto IL_00d6;
	}

IL_00d6:
	{
		// }
		bool L_34 = V_8;
		return L_34;
	}
}
// System.Void Unity.UIElements.Runtime.WorldQuadDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldQuadDisplay__ctor_m91B341C99465A14787B8928D4D75E333503E657A (WorldQuadDisplay_t408F9EA4309BA6A643D86FB69F7A7B9C29B47CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldQuadDisplay__ctor_m91B341C99465A14787B8928D4D75E333503E657A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly Vector2[] k_UV = new Vector2[]
		// {
		//     new Vector2(0, 0),
		//     new Vector2(1, 0),
		//     new Vector2(1, 1),
		//     new Vector2(0, 1),
		// };
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = L_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_2);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_3 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = L_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_6);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_7 = L_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_8);
		__this->set_k_UV_13(L_7);
		// readonly int[] k_Triangles = new int[]
		// {
		//     2, 1, 0, 0, 3, 2
		// };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A0F7C863EF12A337B4A3561E9FCD70501ED6EEA____89A0099374A5746F12D728CDE3233EB874AA88EE_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		__this->set_k_Triangles_14(L_10);
		// Vector3[] m_Vertices = new Vector3[4];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_m_Vertices_15(L_12);
		// bool m_ShouldEmitShaderNotFoundError = true;
		__this->set_m_ShouldEmitShaderNotFoundError_16((bool)1);
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
// System.Void Unity.UIElements.Runtime.PanelRenderer_PanelOwner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelOwner__ctor_m0C3B619083BF2D951AC12B40A9CD0DB37C4A70A9 (PanelOwner_t27F9F95A72075CC4AAC92890379D78E328A73AE6 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Single Unity.UIElements.Runtime.PanelScaler_ConstantPhysicalSizeScaler::ComputeScalingFactor(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConstantPhysicalSizeScaler_ComputeScalingFactor_m1EEAAE780983812C1AED373BD800B9A8F1DBC6D6 (ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, float ___currentDpi1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	{
		// var dpi = currentDpi == 0 ? fallbackDpi : currentDpi;
		float L_0 = ___currentDpi1;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_000c;
		}
	}
	{
		float L_1 = ___currentDpi1;
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_000c:
	{
		float L_2 = __this->get_fallbackDpi_1();
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		// return dpi == 0 ? 0 : referenceDpi / dpi;
		float L_3 = V_0;
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0025;
		}
	}
	{
		float L_4 = __this->get_referenceDpi_0();
		float L_5 = V_0;
		G_B6_0 = ((float)((float)L_4/(float)L_5));
		goto IL_002a;
	}

IL_0025:
	{
		G_B6_0 = (0.0f);
	}

IL_002a:
	{
		V_1 = G_B6_0;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		float L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  float ConstantPhysicalSizeScaler_ComputeScalingFactor_m1EEAAE780983812C1AED373BD800B9A8F1DBC6D6_AdjustorThunk (RuntimeObject * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, float ___currentDpi1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 * _thisAdjusted = reinterpret_cast<ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 *>(__this + _offset);
	return ConstantPhysicalSizeScaler_ComputeScalingFactor_m1EEAAE780983812C1AED373BD800B9A8F1DBC6D6(_thisAdjusted, ___size0, ___currentDpi1, method);
}
// System.Single Unity.UIElements.Runtime.PanelScaler_ConstantPhysicalSizeScaler::Unity.UIElements.Runtime.PanelScaler.IScaleModeImpl.ComputeScalingFactor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConstantPhysicalSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_mF99BEFA62FEA1FFA109ABFEC3DC04FEA23F055A8 (ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return ComputeScalingFactor(size, Screen.dpi);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___size0;
		float L_1 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		float L_2 = ConstantPhysicalSizeScaler_ComputeScalingFactor_m1EEAAE780983812C1AED373BD800B9A8F1DBC6D6((ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 *)__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  float ConstantPhysicalSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_mF99BEFA62FEA1FFA109ABFEC3DC04FEA23F055A8_AdjustorThunk (RuntimeObject * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 * _thisAdjusted = reinterpret_cast<ConstantPhysicalSizeScaler_tFB0D8CF7A07B04974E0759659DA619DB2AF82D96 *>(__this + _offset);
	return ConstantPhysicalSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_mF99BEFA62FEA1FFA109ABFEC3DC04FEA23F055A8(_thisAdjusted, ___size0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Unity.UIElements.Runtime.PanelScaler_ConstantPixelSizeScaler::Unity.UIElements.Runtime.PanelScaler.IScaleModeImpl.ComputeScalingFactor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConstantPixelSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_m9ADCEA6D6D1E42886EE05BABF337625649E9F4E3 (ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// return scaleFactor == 0 ? 0 : 1.0f / scaleFactor;
		float L_0 = __this->get_scaleFactor_0();
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_001c;
		}
	}
	{
		float L_1 = __this->get_scaleFactor_0();
		G_B3_0 = ((float)((float)(1.0f)/(float)L_1));
		goto IL_0021;
	}

IL_001c:
	{
		G_B3_0 = (0.0f);
	}

IL_0021:
	{
		V_0 = G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  float ConstantPixelSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_m9ADCEA6D6D1E42886EE05BABF337625649E9F4E3_AdjustorThunk (RuntimeObject * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF * _thisAdjusted = reinterpret_cast<ConstantPixelSizeScaler_tAA17FD4A0D991685A335BAC2BCF94EAF335CA5AF *>(__this + _offset);
	return ConstantPixelSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_m9ADCEA6D6D1E42886EE05BABF337625649E9F4E3(_thisAdjusted, ___size0, method);
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
// System.Single Unity.UIElements.Runtime.PanelScaler_ScaleWithScreenSizeScaler::Unity.UIElements.Runtime.PanelScaler.IScaleModeImpl.ComputeScalingFactor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleWithScreenSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_mFE14D5B257EBA3645D236281D2F80AE3652079B9 (ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScaleWithScreenSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_mFE14D5B257EBA3645D236281D2F80AE3652079B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float G_B12_0 = 0.0f;
	{
		// if (referenceResolution.x * referenceResolution.y == 0)
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_0 = __this->get_address_of_referenceResolution_0();
		int32_t L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_0, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_2 = __this->get_address_of_referenceResolution_0();
		int32_t L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_2, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3))) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// return 0;
		V_4 = (0.0f);
		goto IL_00d9;
	}

IL_002b:
	{
		// var refSize = (Vector2) referenceResolution;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5 = __this->get_referenceResolution_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// var sizeRatio = new Vector2(size.x / refSize.x, size.y / refSize.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___size0;
		float L_8 = L_7.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		float L_10 = L_9.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___size0;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		float L_14 = L_13.get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), ((float)((float)L_8/(float)L_10)), ((float)((float)L_12/(float)L_14)), /*hidden argument*/NULL);
		// var denominator = 0f;
		V_2 = (0.0f);
		// switch (screenMatchMode)
		int32_t L_15 = __this->get_screenMatchMode_1();
		V_5 = L_15;
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_006d;
	}

IL_006d:
	{
		int32_t L_17 = V_5;
		if ((((int32_t)L_17) == ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		goto IL_009c;
	}

IL_0074:
	{
		// denominator = Mathf.Min(sizeRatio.x, sizeRatio.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_1;
		float L_19 = L_18.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_1;
		float L_21 = L_20.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_22 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_19, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		// break;
		goto IL_00bf;
	}

IL_0088:
	{
		// denominator = Mathf.Max(sizeRatio.x, sizeRatio.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_1;
		float L_24 = L_23.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_1;
		float L_26 = L_25.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_27 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_24, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// break;
		goto IL_00bf;
	}

IL_009c:
	{
		// var widthHeightRatio = Mathf.Clamp01(match);
		float L_28 = __this->get_match_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_29 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_28, /*hidden argument*/NULL);
		V_6 = L_29;
		// denominator = Mathf.Lerp(sizeRatio.x, sizeRatio.y, widthHeightRatio);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_1;
		float L_31 = L_30.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_1;
		float L_33 = L_32.get_y_1();
		float L_34 = V_6;
		float L_35 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_31, L_33, L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		// break;
		goto IL_00bf;
	}

IL_00bf:
	{
		// return denominator == 0 ? 0 : 1.0f / denominator;
		float L_36 = V_2;
		if ((((float)L_36) == ((float)(0.0f))))
		{
			goto IL_00d0;
		}
	}
	{
		float L_37 = V_2;
		G_B12_0 = ((float)((float)(1.0f)/(float)L_37));
		goto IL_00d5;
	}

IL_00d0:
	{
		G_B12_0 = (0.0f);
	}

IL_00d5:
	{
		V_4 = G_B12_0;
		goto IL_00d9;
	}

IL_00d9:
	{
		// }
		float L_38 = V_4;
		return L_38;
	}
}
IL2CPP_EXTERN_C  float ScaleWithScreenSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_mFE14D5B257EBA3645D236281D2F80AE3652079B9_AdjustorThunk (RuntimeObject * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A * _thisAdjusted = reinterpret_cast<ScaleWithScreenSizeScaler_tA2BAB0FDF141C50A5E8F067B9F0B938334167D2A *>(__this + _offset);
	return ScaleWithScreenSizeScaler_Unity_UIElements_Runtime_PanelScaler_IScaleModeImpl_ComputeScalingFactor_mFE14D5B257EBA3645D236281D2F80AE3652079B9(_thisAdjusted, ___size0, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationMoveEvent_set_direction_m9EA969440F5DAC49ED27E85A847AE3974360F1C9_inline (NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Direction direction { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CdirectionU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationMoveEvent_set_move_m3D4F6AEE8300C0262C223E404FF62F495DA5F654_inline (NavigationMoveEvent_tD56B7F15170689081DB679E03CC424A69240DCC6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 move { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CmoveU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PanelRenderer_get_panel_m6DA20A0977E6D9D1F39B3DF61FEE7E15052BEC48_inline (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	{
		// public IPanel panel { get; protected set; }
		RuntimeObject* L_0 = __this->get_U3CpanelU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PanelRenderer_set_panel_mEC2D7BFF9F1C8DA9D46AF52BF331B2E087327AC8_inline (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IPanel panel { get; protected set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CpanelU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PanelRenderer_set_visualTree_mD6C5A9A49E75AE46EE36EBA1E7780053BE808569_inline (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___value0, const RuntimeMethod* method)
{
	{
		// public VisualElement visualTree { get; private set; }
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___value0;
		__this->set_U3CvisualTreeU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * PanelRenderer_get_visualTree_mCD5467A950A0CEAB6AE21BE16FD76B9BAE78D49E_inline (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	{
		// public VisualElement visualTree { get; private set; }
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_U3CvisualTreeU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * PanelRenderer_get_postUxmlReload_mD73CF0B88065A5774D24CE8B4E757DDAF7EB7C1B_inline (PanelRenderer_tBD6797879F26734A6B3AC6F527D82BA373BF7517 * __this, const RuntimeMethod* method)
{
	{
		// public Func<IEnumerable<Object>> postUxmlReload { get; set; }
		Func_1_t08D9E4BC3B30BAB96946AE5ADC83871182A0CBB2 * L_0 = __this->get_U3CpostUxmlReloadU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24EUnity_UI_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		bool L_2 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * UIElementsEventSystem_get_inputOverride_m9D2EE575BBCDB5A7D3F369E6E94B58DC1FC4763A_inline (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	{
		// public InputWrapper inputOverride { get; set; }
		InputWrapper_tB3856F23394131AF6ED7EC7672EC698F1FF1B5B2 * L_0 = __this->get_U3CinputOverrideU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UIElementsEventSystem_get_isAppFocused_m8097F8BBA9BF844DE63919D378D1CDE774AFDCE8_inline (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, const RuntimeMethod* method)
{
	{
		// public bool isAppFocused { get; private set; } = true;
		bool L_0 = __this->get_U3CisAppFocusedU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIElementsEventSystem_set_isAppFocused_m1763833C17662F4442FB92BA2FC8A1884AAF0B32_inline (UIElementsEventSystem_t3016110C6320F35E271AFBFBF08DDC99FF80CE95 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isAppFocused { get; private set; } = true;
		bool L_0 = ___value0;
		__this->set_U3CisAppFocusedU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
