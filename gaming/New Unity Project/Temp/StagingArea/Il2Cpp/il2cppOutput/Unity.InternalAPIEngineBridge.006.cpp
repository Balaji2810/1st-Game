#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_t1B67CC8512D92D98FE15C246943960CB604C9796;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_t9338858C0C882FA25FBF492500439F0F8663FDDC;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34;
// UnityEngine.UIElements.EventDispatcher
struct EventDispatcher_t96A750D2456ECAD9F478B4BBB9832D3D05948BC8;
// UnityEngine.UIElements.FocusController
struct FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B;
// UnityEngine.UIElements.GetViewDataDictionary
struct GetViewDataDictionary_t98279159E390DE67BB251497F1B8EEE94CB5A516;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_t47E86053D8C35FD238EDFA44861E84233257AFC8;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t8B97B7A88BD258220CF596B11D8461B86360BEE2;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_tF2F9D9635A3932E24843C5F557F6080A2C9F7F95;
// UnityEngine.UIElements.IMGUIContainer
struct IMGUIContainer_t0C8BA9DB6BE59812D122D0B25558114E24DAC9C0;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57;
// UnityEngine.UIElements.LoadResourceFunction
struct LoadResourceFunction_tC8B248C3A029A6C7E29976A421652F7262656F92;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tA7A439464E73D2821B9D24EF75EC719A74C441ED;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t687866AA005A30DF2AF3D60E22ADC708C90828F1;
// UnityEngine.UIElements.RepaintData
struct RepaintData_tECDD72801BC6B1F14937D2AAC25D0181CAE14510;
// UnityEngine.UIElements.SavePersistentViewData
struct SavePersistentViewData_t76588E7F1497A5002044502587742FCD2B974311;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE;
// UnityEngine.UIElements.TimeMsFunction
struct TimeMsFunction_tA8C39B5612EEA072E31B8B065796054F4FF447A7;
// UnityEngine.UIElements.TimerEventScheduler
struct TimerEventScheduler_tBFB88C1237A1F9B74C5A80668899D4FD984C3619;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_t73D3F8D6D9F06723FCA3C0753A3F3905C08A7D43;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t4B5D11A4BFD62938CB8E23BE6080E1802E80C757;
// System.Action`1<UnityEngine.UIElements.Panel>
struct Action_1_tD6977CC88510EC45D6546337AF4105D2D5667964;
// System.Action`1<UnityEngine.Material>
struct Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector>
struct Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t5D9124F36ADC50D7FBCB5390DA772BDB26966C45;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.UIElements.StyleSheets.Dimension[]
struct DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.UIElements.EventBase
struct EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967;
// UnityEngine.UIElements.IPanel
struct IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.UIElements.StyleSheets.ScalableImage[]
struct ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIElements.StyleComplexSelector[]
struct StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F;
// UnityEngine.UIElements.StyleRule[]
struct StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F;
// UnityEngine.UIElements.VisualElement
struct VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6;

IL2CPP_EXTERN_C RuntimeClass* IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIElementsRuntimeUtility_t34F62E60B6FFCC299183062BB296463DB94A8B04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t InternalBridge_CreateEvent_mE203BC547EA7B1FCCB1C2E236DCD5D5A5F09C1EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalBridge_CreatePanel_m97E8597B4553D15ABD65A85A3F69D12DD5BCC09F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalBridge_RegisterPanel_m627065C426A3A43CFCA481270FCA1140B35D8F38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalBridge_RepaintPanel_m0CB27A74A564E1A625CECFDD9973F08FE205AB62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalBridge_SetScale_m74541B775BDAB7ADDFC6E51328AC24B6A86A05B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalBridge_SetTargetTexture_mD30E091CED00CBBBAFF0D3748502A9CD9AE5837D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalBridge_UnregisterPanel_m4F76B3206890C3E417FF78CCEBA339407C73039D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalBridge_UpdatePanel_m60C13E8BC2B8EBE91BEEAF2E6D35F12398488DE5_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3287EF44D74DB519954406FCE100A1D51F955BBD 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// Unity.UIElements.Runtime.InternalBridge
struct  InternalBridge_t51CA60C75CBBFD75131C34766303CA2385D635DA  : public RuntimeObject
{
public:

public:
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


// UnityEngine.EventInterests
struct  EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79 
{
public:
	// System.Boolean UnityEngine.EventInterests::<wantsMouseMove>k__BackingField
	bool ___U3CwantsMouseMoveU3Ek__BackingField_0;
	// System.Boolean UnityEngine.EventInterests::<wantsMouseEnterLeaveWindow>k__BackingField
	bool ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	// System.Boolean UnityEngine.EventInterests::<wantsLessLayoutEvents>k__BackingField
	bool ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwantsMouseMoveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79, ___U3CwantsMouseMoveU3Ek__BackingField_0)); }
	inline bool get_U3CwantsMouseMoveU3Ek__BackingField_0() const { return ___U3CwantsMouseMoveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CwantsMouseMoveU3Ek__BackingField_0() { return &___U3CwantsMouseMoveU3Ek__BackingField_0; }
	inline void set_U3CwantsMouseMoveU3Ek__BackingField_0(bool value)
	{
		___U3CwantsMouseMoveU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79, ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1)); }
	inline bool get_U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1() const { return ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1() { return &___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1; }
	inline void set_U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1(bool value)
	{
		___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CwantsLessLayoutEventsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79, ___U3CwantsLessLayoutEventsU3Ek__BackingField_2)); }
	inline bool get_U3CwantsLessLayoutEventsU3Ek__BackingField_2() const { return ___U3CwantsLessLayoutEventsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CwantsLessLayoutEventsU3Ek__BackingField_2() { return &___U3CwantsLessLayoutEventsU3Ek__BackingField_2; }
	inline void set_U3CwantsLessLayoutEventsU3Ek__BackingField_2(bool value)
	{
		___U3CwantsLessLayoutEventsU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventInterests
struct EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79_marshaled_pinvoke
{
	int32_t ___U3CwantsMouseMoveU3Ek__BackingField_0;
	int32_t ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	int32_t ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.EventInterests
struct EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79_marshaled_com
{
	int32_t ___U3CwantsMouseMoveU3Ek__BackingField_0;
	int32_t ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	int32_t ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
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


// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
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

// UnityEngine.UIElements.ContextType
struct  ContextType_tBB40E55BBAA9BDDE6E882CAB48BF3516DE29C24D 
{
public:
	// System.Int32 UnityEngine.UIElements.ContextType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContextType_tBB40E55BBAA9BDDE6E882CAB48BF3516DE29C24D, ___value___2)); }
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


// UnityEngine.UIElements.PanelClearFlags
struct  PanelClearFlags_tAF1BCB1B01303A15FA93FF1E92E8316782D5AB98 
{
public:
	// System.Int32 UnityEngine.UIElements.PanelClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PanelClearFlags_tAF1BCB1B01303A15FA93FF1E92E8316782D5AB98, ___value___2)); }
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


// UnityEngine.UIElements.BaseVisualElementPanel
struct  BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30  : public RuntimeObject
{
public:
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_0;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___yogaConfig_1;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_2;
	// UnityEngine.UIElements.PanelClearFlags UnityEngine.UIElements.BaseVisualElementPanel::<clearFlags>k__BackingField
	int32_t ___U3CclearFlagsU3Ek__BackingField_3;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_4;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_tECDD72801BC6B1F14937D2AAC25D0181CAE14510 * ___U3CrepaintDataU3Ek__BackingField_5;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_6;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_t1B67CC8512D92D98FE15C246943960CB604C9796 * ___U3CcontextualMenuManagerU3Ek__BackingField_7;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_8;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_t9338858C0C882FA25FBF492500439F0F8663FDDC * ___m_TopElementUnderPointers_9;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___standardShaderChanged_10;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___standardWorldSpaceShaderChanged_11;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * ___updateMaterial_12;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_t47E86053D8C35FD238EDFA44861E84233257AFC8 * ___hierarchyChanged_13;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_t73D3F8D6D9F06723FCA3C0753A3F3905C08A7D43 * ___beforeUpdate_14;

public:
	inline static int32_t get_offset_of_m_Scale_0() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___m_Scale_0)); }
	inline float get_m_Scale_0() const { return ___m_Scale_0; }
	inline float* get_address_of_m_Scale_0() { return &___m_Scale_0; }
	inline void set_m_Scale_0(float value)
	{
		___m_Scale_0 = value;
	}

	inline static int32_t get_offset_of_yogaConfig_1() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___yogaConfig_1)); }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * get_yogaConfig_1() const { return ___yogaConfig_1; }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 ** get_address_of_yogaConfig_1() { return &___yogaConfig_1; }
	inline void set_yogaConfig_1(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * value)
	{
		___yogaConfig_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yogaConfig_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_PixelsPerPoint_2() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___m_PixelsPerPoint_2)); }
	inline float get_m_PixelsPerPoint_2() const { return ___m_PixelsPerPoint_2; }
	inline float* get_address_of_m_PixelsPerPoint_2() { return &___m_PixelsPerPoint_2; }
	inline void set_m_PixelsPerPoint_2(float value)
	{
		___m_PixelsPerPoint_2 = value;
	}

	inline static int32_t get_offset_of_U3CclearFlagsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___U3CclearFlagsU3Ek__BackingField_3)); }
	inline int32_t get_U3CclearFlagsU3Ek__BackingField_3() const { return ___U3CclearFlagsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CclearFlagsU3Ek__BackingField_3() { return &___U3CclearFlagsU3Ek__BackingField_3; }
	inline void set_U3CclearFlagsU3Ek__BackingField_3(int32_t value)
	{
		___U3CclearFlagsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CduringLayoutPhaseU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___U3CduringLayoutPhaseU3Ek__BackingField_4)); }
	inline bool get_U3CduringLayoutPhaseU3Ek__BackingField_4() const { return ___U3CduringLayoutPhaseU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CduringLayoutPhaseU3Ek__BackingField_4() { return &___U3CduringLayoutPhaseU3Ek__BackingField_4; }
	inline void set_U3CduringLayoutPhaseU3Ek__BackingField_4(bool value)
	{
		___U3CduringLayoutPhaseU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CrepaintDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___U3CrepaintDataU3Ek__BackingField_5)); }
	inline RepaintData_tECDD72801BC6B1F14937D2AAC25D0181CAE14510 * get_U3CrepaintDataU3Ek__BackingField_5() const { return ___U3CrepaintDataU3Ek__BackingField_5; }
	inline RepaintData_tECDD72801BC6B1F14937D2AAC25D0181CAE14510 ** get_address_of_U3CrepaintDataU3Ek__BackingField_5() { return &___U3CrepaintDataU3Ek__BackingField_5; }
	inline void set_U3CrepaintDataU3Ek__BackingField_5(RepaintData_tECDD72801BC6B1F14937D2AAC25D0181CAE14510 * value)
	{
		___U3CrepaintDataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrepaintDataU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcursorManagerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___U3CcursorManagerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CcursorManagerU3Ek__BackingField_6() const { return ___U3CcursorManagerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CcursorManagerU3Ek__BackingField_6() { return &___U3CcursorManagerU3Ek__BackingField_6; }
	inline void set_U3CcursorManagerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CcursorManagerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcursorManagerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcontextualMenuManagerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___U3CcontextualMenuManagerU3Ek__BackingField_7)); }
	inline ContextualMenuManager_t1B67CC8512D92D98FE15C246943960CB604C9796 * get_U3CcontextualMenuManagerU3Ek__BackingField_7() const { return ___U3CcontextualMenuManagerU3Ek__BackingField_7; }
	inline ContextualMenuManager_t1B67CC8512D92D98FE15C246943960CB604C9796 ** get_address_of_U3CcontextualMenuManagerU3Ek__BackingField_7() { return &___U3CcontextualMenuManagerU3Ek__BackingField_7; }
	inline void set_U3CcontextualMenuManagerU3Ek__BackingField_7(ContextualMenuManager_t1B67CC8512D92D98FE15C246943960CB604C9796 * value)
	{
		___U3CcontextualMenuManagerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontextualMenuManagerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___U3CdisposedU3Ek__BackingField_8)); }
	inline bool get_U3CdisposedU3Ek__BackingField_8() const { return ___U3CdisposedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CdisposedU3Ek__BackingField_8() { return &___U3CdisposedU3Ek__BackingField_8; }
	inline void set_U3CdisposedU3Ek__BackingField_8(bool value)
	{
		___U3CdisposedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_m_TopElementUnderPointers_9() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___m_TopElementUnderPointers_9)); }
	inline ElementUnderPointer_t9338858C0C882FA25FBF492500439F0F8663FDDC * get_m_TopElementUnderPointers_9() const { return ___m_TopElementUnderPointers_9; }
	inline ElementUnderPointer_t9338858C0C882FA25FBF492500439F0F8663FDDC ** get_address_of_m_TopElementUnderPointers_9() { return &___m_TopElementUnderPointers_9; }
	inline void set_m_TopElementUnderPointers_9(ElementUnderPointer_t9338858C0C882FA25FBF492500439F0F8663FDDC * value)
	{
		___m_TopElementUnderPointers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TopElementUnderPointers_9), (void*)value);
	}

	inline static int32_t get_offset_of_standardShaderChanged_10() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___standardShaderChanged_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_standardShaderChanged_10() const { return ___standardShaderChanged_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_standardShaderChanged_10() { return &___standardShaderChanged_10; }
	inline void set_standardShaderChanged_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___standardShaderChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardShaderChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_standardWorldSpaceShaderChanged_11() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___standardWorldSpaceShaderChanged_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_standardWorldSpaceShaderChanged_11() const { return ___standardWorldSpaceShaderChanged_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_standardWorldSpaceShaderChanged_11() { return &___standardWorldSpaceShaderChanged_11; }
	inline void set_standardWorldSpaceShaderChanged_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___standardWorldSpaceShaderChanged_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardWorldSpaceShaderChanged_11), (void*)value);
	}

	inline static int32_t get_offset_of_updateMaterial_12() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___updateMaterial_12)); }
	inline Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * get_updateMaterial_12() const { return ___updateMaterial_12; }
	inline Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 ** get_address_of_updateMaterial_12() { return &___updateMaterial_12; }
	inline void set_updateMaterial_12(Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * value)
	{
		___updateMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_hierarchyChanged_13() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___hierarchyChanged_13)); }
	inline HierarchyEvent_t47E86053D8C35FD238EDFA44861E84233257AFC8 * get_hierarchyChanged_13() const { return ___hierarchyChanged_13; }
	inline HierarchyEvent_t47E86053D8C35FD238EDFA44861E84233257AFC8 ** get_address_of_hierarchyChanged_13() { return &___hierarchyChanged_13; }
	inline void set_hierarchyChanged_13(HierarchyEvent_t47E86053D8C35FD238EDFA44861E84233257AFC8 * value)
	{
		___hierarchyChanged_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hierarchyChanged_13), (void*)value);
	}

	inline static int32_t get_offset_of_beforeUpdate_14() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___beforeUpdate_14)); }
	inline Action_1_t73D3F8D6D9F06723FCA3C0753A3F3905C08A7D43 * get_beforeUpdate_14() const { return ___beforeUpdate_14; }
	inline Action_1_t73D3F8D6D9F06723FCA3C0753A3F3905C08A7D43 ** get_address_of_beforeUpdate_14() { return &___beforeUpdate_14; }
	inline void set_beforeUpdate_14(Action_1_t73D3F8D6D9F06723FCA3C0753A3F3905C08A7D43 * value)
	{
		___beforeUpdate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeUpdate_14), (void*)value);
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


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.UIElements.Panel
struct  Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F  : public BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.Panel::m_RootContainer
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_RootContainer_15;
	// UnityEngine.UIElements.VisualTreeUpdater UnityEngine.UIElements.Panel::m_VisualTreeUpdater
	VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64 * ___m_VisualTreeUpdater_16;
	// System.String UnityEngine.UIElements.Panel::m_PanelName
	String_t* ___m_PanelName_17;
	// System.UInt32 UnityEngine.UIElements.Panel::m_Version
	uint32_t ___m_Version_18;
	// System.UInt32 UnityEngine.UIElements.Panel::m_RepaintVersion
	uint32_t ___m_RepaintVersion_19;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerBeforeUpdate
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_MarkerBeforeUpdate_20;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerUpdate
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_MarkerUpdate_21;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerLayout
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_MarkerLayout_22;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerBindings
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_MarkerBindings_23;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerAnimations
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_MarkerAnimations_24;
	// UnityEngine.UIElements.EventDispatcher UnityEngine.UIElements.Panel::<dispatcher>k__BackingField
	EventDispatcher_t96A750D2456ECAD9F478B4BBB9832D3D05948BC8 * ___U3CdispatcherU3Ek__BackingField_26;
	// UnityEngine.UIElements.TimerEventScheduler UnityEngine.UIElements.Panel::m_Scheduler
	TimerEventScheduler_tBFB88C1237A1F9B74C5A80668899D4FD984C3619 * ___m_Scheduler_27;
	// UnityEngine.ScriptableObject UnityEngine.UIElements.Panel::<ownerObject>k__BackingField
	ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___U3CownerObjectU3Ek__BackingField_28;
	// UnityEngine.UIElements.ContextType UnityEngine.UIElements.Panel::<contextType>k__BackingField
	int32_t ___U3CcontextTypeU3Ek__BackingField_29;
	// UnityEngine.UIElements.SavePersistentViewData UnityEngine.UIElements.Panel::<saveViewData>k__BackingField
	SavePersistentViewData_t76588E7F1497A5002044502587742FCD2B974311 * ___U3CsaveViewDataU3Ek__BackingField_30;
	// UnityEngine.UIElements.GetViewDataDictionary UnityEngine.UIElements.Panel::<getViewDataDictionary>k__BackingField
	GetViewDataDictionary_t98279159E390DE67BB251497F1B8EEE94CB5A516 * ___U3CgetViewDataDictionaryU3Ek__BackingField_31;
	// UnityEngine.UIElements.FocusController UnityEngine.UIElements.Panel::<focusController>k__BackingField
	FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B * ___U3CfocusControllerU3Ek__BackingField_32;
	// UnityEngine.EventInterests UnityEngine.UIElements.Panel::<IMGUIEventInterests>k__BackingField
	EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79  ___U3CIMGUIEventInterestsU3Ek__BackingField_33;
	// System.Int32 UnityEngine.UIElements.Panel::<IMGUIContainersCount>k__BackingField
	int32_t ___U3CIMGUIContainersCountU3Ek__BackingField_36;
	// UnityEngine.UIElements.IMGUIContainer UnityEngine.UIElements.Panel::<rootIMGUIContainer>k__BackingField
	IMGUIContainer_t0C8BA9DB6BE59812D122D0B25558114E24DAC9C0 * ___U3CrootIMGUIContainerU3Ek__BackingField_37;
	// UnityEngine.Shader UnityEngine.UIElements.Panel::m_StandardShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_StandardShader_38;
	// System.Boolean UnityEngine.UIElements.Panel::m_ValidatingLayout
	bool ___m_ValidatingLayout_39;

public:
	inline static int32_t get_offset_of_m_RootContainer_15() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_RootContainer_15)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_RootContainer_15() const { return ___m_RootContainer_15; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_RootContainer_15() { return &___m_RootContainer_15; }
	inline void set_m_RootContainer_15(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_RootContainer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootContainer_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VisualTreeUpdater_16() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_VisualTreeUpdater_16)); }
	inline VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64 * get_m_VisualTreeUpdater_16() const { return ___m_VisualTreeUpdater_16; }
	inline VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64 ** get_address_of_m_VisualTreeUpdater_16() { return &___m_VisualTreeUpdater_16; }
	inline void set_m_VisualTreeUpdater_16(VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64 * value)
	{
		___m_VisualTreeUpdater_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VisualTreeUpdater_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_PanelName_17() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_PanelName_17)); }
	inline String_t* get_m_PanelName_17() const { return ___m_PanelName_17; }
	inline String_t** get_address_of_m_PanelName_17() { return &___m_PanelName_17; }
	inline void set_m_PanelName_17(String_t* value)
	{
		___m_PanelName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PanelName_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_18() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_Version_18)); }
	inline uint32_t get_m_Version_18() const { return ___m_Version_18; }
	inline uint32_t* get_address_of_m_Version_18() { return &___m_Version_18; }
	inline void set_m_Version_18(uint32_t value)
	{
		___m_Version_18 = value;
	}

	inline static int32_t get_offset_of_m_RepaintVersion_19() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_RepaintVersion_19)); }
	inline uint32_t get_m_RepaintVersion_19() const { return ___m_RepaintVersion_19; }
	inline uint32_t* get_address_of_m_RepaintVersion_19() { return &___m_RepaintVersion_19; }
	inline void set_m_RepaintVersion_19(uint32_t value)
	{
		___m_RepaintVersion_19 = value;
	}

	inline static int32_t get_offset_of_m_MarkerBeforeUpdate_20() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_MarkerBeforeUpdate_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_MarkerBeforeUpdate_20() const { return ___m_MarkerBeforeUpdate_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_MarkerBeforeUpdate_20() { return &___m_MarkerBeforeUpdate_20; }
	inline void set_m_MarkerBeforeUpdate_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_MarkerBeforeUpdate_20 = value;
	}

	inline static int32_t get_offset_of_m_MarkerUpdate_21() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_MarkerUpdate_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_MarkerUpdate_21() const { return ___m_MarkerUpdate_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_MarkerUpdate_21() { return &___m_MarkerUpdate_21; }
	inline void set_m_MarkerUpdate_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_MarkerUpdate_21 = value;
	}

	inline static int32_t get_offset_of_m_MarkerLayout_22() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_MarkerLayout_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_MarkerLayout_22() const { return ___m_MarkerLayout_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_MarkerLayout_22() { return &___m_MarkerLayout_22; }
	inline void set_m_MarkerLayout_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_MarkerLayout_22 = value;
	}

	inline static int32_t get_offset_of_m_MarkerBindings_23() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_MarkerBindings_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_MarkerBindings_23() const { return ___m_MarkerBindings_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_MarkerBindings_23() { return &___m_MarkerBindings_23; }
	inline void set_m_MarkerBindings_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_MarkerBindings_23 = value;
	}

	inline static int32_t get_offset_of_m_MarkerAnimations_24() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_MarkerAnimations_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_MarkerAnimations_24() const { return ___m_MarkerAnimations_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_MarkerAnimations_24() { return &___m_MarkerAnimations_24; }
	inline void set_m_MarkerAnimations_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_MarkerAnimations_24 = value;
	}

	inline static int32_t get_offset_of_U3CdispatcherU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___U3CdispatcherU3Ek__BackingField_26)); }
	inline EventDispatcher_t96A750D2456ECAD9F478B4BBB9832D3D05948BC8 * get_U3CdispatcherU3Ek__BackingField_26() const { return ___U3CdispatcherU3Ek__BackingField_26; }
	inline EventDispatcher_t96A750D2456ECAD9F478B4BBB9832D3D05948BC8 ** get_address_of_U3CdispatcherU3Ek__BackingField_26() { return &___U3CdispatcherU3Ek__BackingField_26; }
	inline void set_U3CdispatcherU3Ek__BackingField_26(EventDispatcher_t96A750D2456ECAD9F478B4BBB9832D3D05948BC8 * value)
	{
		___U3CdispatcherU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdispatcherU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Scheduler_27() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_Scheduler_27)); }
	inline TimerEventScheduler_tBFB88C1237A1F9B74C5A80668899D4FD984C3619 * get_m_Scheduler_27() const { return ___m_Scheduler_27; }
	inline TimerEventScheduler_tBFB88C1237A1F9B74C5A80668899D4FD984C3619 ** get_address_of_m_Scheduler_27() { return &___m_Scheduler_27; }
	inline void set_m_Scheduler_27(TimerEventScheduler_tBFB88C1237A1F9B74C5A80668899D4FD984C3619 * value)
	{
		___m_Scheduler_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheduler_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CownerObjectU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___U3CownerObjectU3Ek__BackingField_28)); }
	inline ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * get_U3CownerObjectU3Ek__BackingField_28() const { return ___U3CownerObjectU3Ek__BackingField_28; }
	inline ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A ** get_address_of_U3CownerObjectU3Ek__BackingField_28() { return &___U3CownerObjectU3Ek__BackingField_28; }
	inline void set_U3CownerObjectU3Ek__BackingField_28(ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * value)
	{
		___U3CownerObjectU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CownerObjectU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcontextTypeU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___U3CcontextTypeU3Ek__BackingField_29)); }
	inline int32_t get_U3CcontextTypeU3Ek__BackingField_29() const { return ___U3CcontextTypeU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CcontextTypeU3Ek__BackingField_29() { return &___U3CcontextTypeU3Ek__BackingField_29; }
	inline void set_U3CcontextTypeU3Ek__BackingField_29(int32_t value)
	{
		___U3CcontextTypeU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CsaveViewDataU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___U3CsaveViewDataU3Ek__BackingField_30)); }
	inline SavePersistentViewData_t76588E7F1497A5002044502587742FCD2B974311 * get_U3CsaveViewDataU3Ek__BackingField_30() const { return ___U3CsaveViewDataU3Ek__BackingField_30; }
	inline SavePersistentViewData_t76588E7F1497A5002044502587742FCD2B974311 ** get_address_of_U3CsaveViewDataU3Ek__BackingField_30() { return &___U3CsaveViewDataU3Ek__BackingField_30; }
	inline void set_U3CsaveViewDataU3Ek__BackingField_30(SavePersistentViewData_t76588E7F1497A5002044502587742FCD2B974311 * value)
	{
		___U3CsaveViewDataU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsaveViewDataU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgetViewDataDictionaryU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___U3CgetViewDataDictionaryU3Ek__BackingField_31)); }
	inline GetViewDataDictionary_t98279159E390DE67BB251497F1B8EEE94CB5A516 * get_U3CgetViewDataDictionaryU3Ek__BackingField_31() const { return ___U3CgetViewDataDictionaryU3Ek__BackingField_31; }
	inline GetViewDataDictionary_t98279159E390DE67BB251497F1B8EEE94CB5A516 ** get_address_of_U3CgetViewDataDictionaryU3Ek__BackingField_31() { return &___U3CgetViewDataDictionaryU3Ek__BackingField_31; }
	inline void set_U3CgetViewDataDictionaryU3Ek__BackingField_31(GetViewDataDictionary_t98279159E390DE67BB251497F1B8EEE94CB5A516 * value)
	{
		___U3CgetViewDataDictionaryU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgetViewDataDictionaryU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfocusControllerU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___U3CfocusControllerU3Ek__BackingField_32)); }
	inline FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B * get_U3CfocusControllerU3Ek__BackingField_32() const { return ___U3CfocusControllerU3Ek__BackingField_32; }
	inline FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B ** get_address_of_U3CfocusControllerU3Ek__BackingField_32() { return &___U3CfocusControllerU3Ek__BackingField_32; }
	inline void set_U3CfocusControllerU3Ek__BackingField_32(FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B * value)
	{
		___U3CfocusControllerU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfocusControllerU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIMGUIEventInterestsU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___U3CIMGUIEventInterestsU3Ek__BackingField_33)); }
	inline EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79  get_U3CIMGUIEventInterestsU3Ek__BackingField_33() const { return ___U3CIMGUIEventInterestsU3Ek__BackingField_33; }
	inline EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79 * get_address_of_U3CIMGUIEventInterestsU3Ek__BackingField_33() { return &___U3CIMGUIEventInterestsU3Ek__BackingField_33; }
	inline void set_U3CIMGUIEventInterestsU3Ek__BackingField_33(EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79  value)
	{
		___U3CIMGUIEventInterestsU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CIMGUIContainersCountU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___U3CIMGUIContainersCountU3Ek__BackingField_36)); }
	inline int32_t get_U3CIMGUIContainersCountU3Ek__BackingField_36() const { return ___U3CIMGUIContainersCountU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CIMGUIContainersCountU3Ek__BackingField_36() { return &___U3CIMGUIContainersCountU3Ek__BackingField_36; }
	inline void set_U3CIMGUIContainersCountU3Ek__BackingField_36(int32_t value)
	{
		___U3CIMGUIContainersCountU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CrootIMGUIContainerU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___U3CrootIMGUIContainerU3Ek__BackingField_37)); }
	inline IMGUIContainer_t0C8BA9DB6BE59812D122D0B25558114E24DAC9C0 * get_U3CrootIMGUIContainerU3Ek__BackingField_37() const { return ___U3CrootIMGUIContainerU3Ek__BackingField_37; }
	inline IMGUIContainer_t0C8BA9DB6BE59812D122D0B25558114E24DAC9C0 ** get_address_of_U3CrootIMGUIContainerU3Ek__BackingField_37() { return &___U3CrootIMGUIContainerU3Ek__BackingField_37; }
	inline void set_U3CrootIMGUIContainerU3Ek__BackingField_37(IMGUIContainer_t0C8BA9DB6BE59812D122D0B25558114E24DAC9C0 * value)
	{
		___U3CrootIMGUIContainerU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrootIMGUIContainerU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_StandardShader_38() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_StandardShader_38)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_StandardShader_38() const { return ___m_StandardShader_38; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_StandardShader_38() { return &___m_StandardShader_38; }
	inline void set_m_StandardShader_38(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_StandardShader_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StandardShader_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingLayout_39() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F, ___m_ValidatingLayout_39)); }
	inline bool get_m_ValidatingLayout_39() const { return ___m_ValidatingLayout_39; }
	inline bool* get_address_of_m_ValidatingLayout_39() { return &___m_ValidatingLayout_39; }
	inline void set_m_ValidatingLayout_39(bool value)
	{
		___m_ValidatingLayout_39 = value;
	}
};

struct Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::s_MarkerPickAll
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_MarkerPickAll_25;
	// UnityEngine.UIElements.LoadResourceFunction UnityEngine.UIElements.Panel::<loadResourceFunc>k__BackingField
	LoadResourceFunction_tC8B248C3A029A6C7E29976A421652F7262656F92 * ___U3CloadResourceFuncU3Ek__BackingField_34;
	// UnityEngine.UIElements.TimeMsFunction UnityEngine.UIElements.Panel::<TimeSinceStartup>k__BackingField
	TimeMsFunction_tA8C39B5612EEA072E31B8B065796054F4FF447A7 * ___U3CTimeSinceStartupU3Ek__BackingField_35;
	// System.Action`1<UnityEngine.UIElements.Panel> UnityEngine.UIElements.Panel::beforeAnyRepaint
	Action_1_tD6977CC88510EC45D6546337AF4105D2D5667964 * ___beforeAnyRepaint_40;

public:
	inline static int32_t get_offset_of_s_MarkerPickAll_25() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F_StaticFields, ___s_MarkerPickAll_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_MarkerPickAll_25() const { return ___s_MarkerPickAll_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_MarkerPickAll_25() { return &___s_MarkerPickAll_25; }
	inline void set_s_MarkerPickAll_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_MarkerPickAll_25 = value;
	}

	inline static int32_t get_offset_of_U3CloadResourceFuncU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F_StaticFields, ___U3CloadResourceFuncU3Ek__BackingField_34)); }
	inline LoadResourceFunction_tC8B248C3A029A6C7E29976A421652F7262656F92 * get_U3CloadResourceFuncU3Ek__BackingField_34() const { return ___U3CloadResourceFuncU3Ek__BackingField_34; }
	inline LoadResourceFunction_tC8B248C3A029A6C7E29976A421652F7262656F92 ** get_address_of_U3CloadResourceFuncU3Ek__BackingField_34() { return &___U3CloadResourceFuncU3Ek__BackingField_34; }
	inline void set_U3CloadResourceFuncU3Ek__BackingField_34(LoadResourceFunction_tC8B248C3A029A6C7E29976A421652F7262656F92 * value)
	{
		___U3CloadResourceFuncU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloadResourceFuncU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimeSinceStartupU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F_StaticFields, ___U3CTimeSinceStartupU3Ek__BackingField_35)); }
	inline TimeMsFunction_tA8C39B5612EEA072E31B8B065796054F4FF447A7 * get_U3CTimeSinceStartupU3Ek__BackingField_35() const { return ___U3CTimeSinceStartupU3Ek__BackingField_35; }
	inline TimeMsFunction_tA8C39B5612EEA072E31B8B065796054F4FF447A7 ** get_address_of_U3CTimeSinceStartupU3Ek__BackingField_35() { return &___U3CTimeSinceStartupU3Ek__BackingField_35; }
	inline void set_U3CTimeSinceStartupU3Ek__BackingField_35(TimeMsFunction_tA8C39B5612EEA072E31B8B065796054F4FF447A7 * value)
	{
		___U3CTimeSinceStartupU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTimeSinceStartupU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_beforeAnyRepaint_40() { return static_cast<int32_t>(offsetof(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F_StaticFields, ___beforeAnyRepaint_40)); }
	inline Action_1_tD6977CC88510EC45D6546337AF4105D2D5667964 * get_beforeAnyRepaint_40() const { return ___beforeAnyRepaint_40; }
	inline Action_1_tD6977CC88510EC45D6546337AF4105D2D5667964 ** get_address_of_beforeAnyRepaint_40() { return &___beforeAnyRepaint_40; }
	inline void set_beforeAnyRepaint_40(Action_1_tD6977CC88510EC45D6546337AF4105D2D5667964 * value)
	{
		___beforeAnyRepaint_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeAnyRepaint_40), (void*)value);
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

// UnityEngine.UIElements.RuntimePanel
struct  RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1  : public Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F
{
public:
	// UnityEngine.Shader UnityEngine.UIElements.RuntimePanel::m_StandardWorldSpaceShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_StandardWorldSpaceShader_41;
	// UnityEngine.RenderTexture UnityEngine.UIElements.RuntimePanel::targetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture_42;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.RuntimePanel::panelToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___panelToWorld_43;

public:
	inline static int32_t get_offset_of_m_StandardWorldSpaceShader_41() { return static_cast<int32_t>(offsetof(RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1, ___m_StandardWorldSpaceShader_41)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_StandardWorldSpaceShader_41() const { return ___m_StandardWorldSpaceShader_41; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_StandardWorldSpaceShader_41() { return &___m_StandardWorldSpaceShader_41; }
	inline void set_m_StandardWorldSpaceShader_41(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_StandardWorldSpaceShader_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StandardWorldSpaceShader_41), (void*)value);
	}

	inline static int32_t get_offset_of_targetTexture_42() { return static_cast<int32_t>(offsetof(RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1, ___targetTexture_42)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_targetTexture_42() const { return ___targetTexture_42; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_targetTexture_42() { return &___targetTexture_42; }
	inline void set_targetTexture_42(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___targetTexture_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetTexture_42), (void*)value);
	}

	inline static int32_t get_offset_of_panelToWorld_43() { return static_cast<int32_t>(offsetof(RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1, ___panelToWorld_43)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_panelToWorld_43() const { return ___panelToWorld_43; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_panelToWorld_43() { return &___panelToWorld_43; }
	inline void set_panelToWorld_43(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___panelToWorld_43 = value;
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// UnityEngine.UIElements.IPanel UnityEngine.UIElements.UIElementsRuntimeUtility::CreateRuntimePanel(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIElementsRuntimeUtility_CreateRuntimePanel_mB3EA347C6DFB2F5F9735AA5C30CC546FC66AC429 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___ownerObject0, const RuntimeMethod* method);
// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::get_pseudoStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_pseudoStates_mF0B31C86C3CF44C4FA2F42F7641DAF33C9F4B736 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::set_pseudoStates(UnityEngine.UIElements.PseudoStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_pseudoStates_m856E0A84A1FF93A805A7EE6277D92921C0C00029 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtility::RegisterCachedPanel(System.Int32,UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtility_RegisterCachedPanel_m18D6C312031D86BDE6FEFDE3FA282E3F952B1E38 (int32_t ___instanceID0, RuntimeObject* ___panel1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtility::RemoveCachedPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtility_RemoveCachedPanel_m02CFCF32371F97275D609682F320131BCBD64B1A (int32_t ___instanceID0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseVisualElementPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_Update_m2433168944B390706014641217A30F2755E8243E (BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseVisualElementPanel::set_scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_set_scale_m3AC3F5548134B14D145C7C8DEBA5525D650516CB (BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.EventBase UnityEngine.UIElements.UIElementsRuntimeUtility::CreateEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * UIElementsRuntimeUtility_CreateEvent_m7B173AA08A55867377A5E5732B45D758E0364A14 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___systemEvent0, const RuntimeMethod* method);
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
// UnityEngine.UIElements.IPanel Unity.UIElements.Runtime.InternalBridge::CreatePanel(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalBridge_CreatePanel_m97E8597B4553D15ABD65A85A3F69D12DD5BCC09F (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___scriptableObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalBridge_CreatePanel_m97E8597B4553D15ABD65A85A3F69D12DD5BCC09F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var panel = UIElementsRuntimeUtility.CreateRuntimePanel(scriptableObject);
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_0 = ___scriptableObject0;
		IL2CPP_RUNTIME_CLASS_INIT(UIElementsRuntimeUtility_t34F62E60B6FFCC299183062BB296463DB94A8B04_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = UIElementsRuntimeUtility_CreateRuntimePanel_mB3EA347C6DFB2F5F9735AA5C30CC546FC66AC429(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// panel.visualTree.pseudoStates |= PseudoStates.Root;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IPanel::get_visualTree() */, IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB_il2cpp_TypeInfo_var, L_2);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = VisualElement_get_pseudoStates_mF0B31C86C3CF44C4FA2F42F7641DAF33C9F4B736(L_4, /*hidden argument*/NULL);
		NullCheck(L_4);
		VisualElement_set_pseudoStates_m856E0A84A1FF93A805A7EE6277D92921C0C00029(L_4, ((int32_t)((int32_t)L_5|(int32_t)((int32_t)128))), /*hidden argument*/NULL);
		// return panel;
		RuntimeObject* L_6 = V_0;
		V_1 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Void Unity.UIElements.Runtime.InternalBridge::RegisterPanel(System.Int32,UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_RegisterPanel_m627065C426A3A43CFCA481270FCA1140B35D8F38 (int32_t ___ownerID0, RuntimeObject* ___panel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalBridge_RegisterPanel_m627065C426A3A43CFCA481270FCA1140B35D8F38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 * V_0 = NULL;
	{
		// var runtimePanel = panel as RuntimePanel;
		RuntimeObject* L_0 = ___panel1;
		V_0 = ((RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 *)IsInstClass((RuntimeObject*)L_0, RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1_il2cpp_TypeInfo_var));
		// UIElementsRuntimeUtility.RegisterCachedPanel(ownerID, runtimePanel);
		int32_t L_1 = ___ownerID0;
		RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UIElementsRuntimeUtility_t34F62E60B6FFCC299183062BB296463DB94A8B04_il2cpp_TypeInfo_var);
		UIElementsRuntimeUtility_RegisterCachedPanel_m18D6C312031D86BDE6FEFDE3FA282E3F952B1E38(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.InternalBridge::UnregisterPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_UnregisterPanel_m4F76B3206890C3E417FF78CCEBA339407C73039D (int32_t ___ownerID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalBridge_UnregisterPanel_m4F76B3206890C3E417FF78CCEBA339407C73039D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UIElementsRuntimeUtility.RemoveCachedPanel(ownerID);
		int32_t L_0 = ___ownerID0;
		IL2CPP_RUNTIME_CLASS_INIT(UIElementsRuntimeUtility_t34F62E60B6FFCC299183062BB296463DB94A8B04_il2cpp_TypeInfo_var);
		UIElementsRuntimeUtility_RemoveCachedPanel_m02CFCF32371F97275D609682F320131BCBD64B1A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.InternalBridge::UpdatePanel(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_UpdatePanel_m60C13E8BC2B8EBE91BEEAF2E6D35F12398488DE5 (RuntimeObject* ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalBridge_UpdatePanel_m60C13E8BC2B8EBE91BEEAF2E6D35F12398488DE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 * V_0 = NULL;
	{
		// var runtimePanel = panel as RuntimePanel;
		RuntimeObject* L_0 = ___panel0;
		V_0 = ((RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 *)IsInstClass((RuntimeObject*)L_0, RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1_il2cpp_TypeInfo_var));
		// runtimePanel.Update();
		RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 * L_1 = V_0;
		NullCheck(L_1);
		BaseVisualElementPanel_Update_m2433168944B390706014641217A30F2755E8243E(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.InternalBridge::RepaintPanel(UnityEngine.UIElements.IPanel,UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_RepaintPanel_m0CB27A74A564E1A625CECFDD9973F08FE205AB62 (RuntimeObject* ___panel0, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalBridge_RepaintPanel_m0CB27A74A564E1A625CECFDD9973F08FE205AB62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 * V_0 = NULL;
	{
		// var runtimePanel = panel as RuntimePanel;
		RuntimeObject* L_0 = ___panel0;
		V_0 = ((RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 *)IsInstClass((RuntimeObject*)L_0, RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1_il2cpp_TypeInfo_var));
		// runtimePanel.Repaint(e);
		RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 * L_1 = V_0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_2 = ___e1;
		NullCheck(L_1);
		VirtActionInvoker1< Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * >::Invoke(21 /* System.Void UnityEngine.UIElements.BaseVisualElementPanel::Repaint(UnityEngine.Event) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.InternalBridge::SetTargetTexture(UnityEngine.UIElements.IPanel,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_SetTargetTexture_mD30E091CED00CBBBAFF0D3748502A9CD9AE5837D (RuntimeObject* ___panel0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalBridge_SetTargetTexture_mD30E091CED00CBBBAFF0D3748502A9CD9AE5837D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 * V_0 = NULL;
	{
		// var runtimePanel = panel as RuntimePanel;
		RuntimeObject* L_0 = ___panel0;
		V_0 = ((RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 *)IsInstClass((RuntimeObject*)L_0, RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1_il2cpp_TypeInfo_var));
		// runtimePanel.targetTexture = texture;
		RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 * L_1 = V_0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___texture1;
		NullCheck(L_1);
		L_1->set_targetTexture_42(L_2);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.InternalBridge::MarkAsDefaultStyleSheet(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_MarkAsDefaultStyleSheet_m52180B42C001EA6D89A549A023790FF52CB40EBE (StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method)
{
	{
		// styleSheet.isUnityStyleSheet = true;
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_0 = ___styleSheet0;
		NullCheck(L_0);
		L_0->set_isUnityStyleSheet_16((bool)1);
		// }
		return;
	}
}
// System.Void Unity.UIElements.Runtime.InternalBridge::SetScale(UnityEngine.UIElements.IPanel,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBridge_SetScale_m74541B775BDAB7ADDFC6E51328AC24B6A86A05B3 (RuntimeObject* ___panel0, float ___scale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalBridge_SetScale_m74541B775BDAB7ADDFC6E51328AC24B6A86A05B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 * V_0 = NULL;
	{
		// var runtimePanel = panel as RuntimePanel;
		RuntimeObject* L_0 = ___panel0;
		V_0 = ((RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 *)IsInstClass((RuntimeObject*)L_0, RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1_il2cpp_TypeInfo_var));
		// runtimePanel.scale = scale;
		RuntimePanel_t6641C394C2C14895672BBE00D7EE2C9DE7FB60C1 * L_1 = V_0;
		float L_2 = ___scale1;
		NullCheck(L_1);
		BaseVisualElementPanel_set_scale_m3AC3F5548134B14D145C7C8DEBA5525D650516CB(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.UIElements.EventBase Unity.UIElements.Runtime.InternalBridge::CreateEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * InternalBridge_CreateEvent_mE203BC547EA7B1FCCB1C2E236DCD5D5A5F09C1EE (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___evt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalBridge_CreateEvent_mE203BC547EA7B1FCCB1C2E236DCD5D5A5F09C1EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * V_0 = NULL;
	{
		// return UIElementsRuntimeUtility.CreateEvent(evt);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0 = ___evt0;
		IL2CPP_RUNTIME_CLASS_INIT(UIElementsRuntimeUtility_t34F62E60B6FFCC299183062BB296463DB94A8B04_il2cpp_TypeInfo_var);
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_1 = UIElementsRuntimeUtility_CreateEvent_m7B173AA08A55867377A5E5732B45D758E0364A14(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
