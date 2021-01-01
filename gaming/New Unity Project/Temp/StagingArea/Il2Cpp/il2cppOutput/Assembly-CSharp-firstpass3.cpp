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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// ES3Reader
struct ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9;
// ES3Settings
struct ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2;
// ES3Types.ES3Type
struct ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D;
// ES3Internal.ES3WebClass
struct ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D;
// ES3Reader/ES3ReaderRawEnumerator
struct ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA;
// ES3Internal.ES3ReferenceMgrBase/<>c
struct U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750;
// ES3Internal.ES3ReferenceMgrBase/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_tAF01FE7CB7A4D077AA1C1E9F9A93944823D2E038;
// ES3Internal.ES3ReferenceMgrBase/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t9770E27C9F9AE9B7499B960588788A9E92A89939;
// ES3Internal.ES3Reflection/<>c
struct U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2;
// ES3Internal.ES3Reflection/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_tA1241065973A397EC6980A1E7DBB93D6B216931B;
// ES3Internal.ES3Reflection/ES3ReflectedMethod
struct ES3ReflectedMethod_t84C16BB1FD3B72EA8719EBB310B8582C5EA9B26D;
// ES3Internal.ES3WebClass/<SendWebRequest>d__18
struct U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7;
// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_tFDEE10C59F1166BF35283A7C8ACAB966E68B7A00;
// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_tC220F39895356A91AB33A66E696C0C88C2426EFC;
// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_tDF3FABBEFF021ECE2C6507D50FFE4EEC1D3BA328;
// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_tD551A0A09633EDBA5C30A72FC44B84B02146CA82;
// ES3Reader/ES3ReaderPropertyEnumerator/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2;
// ES3Reader/ES3ReaderRawEnumerator/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8;
// <>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>
struct U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C;
// <>f__AnonymousType0`2<System.Object,System.Object>
struct U3CU3Ef__AnonymousType0_2_t4CC11F4D4043B6258EA46772690B15F284CAD3D9;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Func`2<<>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>,System.Type>
struct Func_2_t96308AF626923D2D736F572BCEADA9F34B560EB8;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>,System.Boolean>
struct Func_2_tAA34882BE82B154977048C06DD7719409985440F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>,System.Int64>
struct Func_2_t4A7FDFAAC8F896789C4929EC1DA1294022A76146;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Object,System.Int64>,System.Boolean>
struct Func_2_t91D2A0A9392E8CB6C310E403D516D32BE832867D;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412;
// System.Func`3<System.Reflection.Assembly,System.Type,<>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>>
struct Func_3_tFF36DB2BDEDCE9315450AF0038FDDD0A811A8826;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>
struct UnityEvent_2_tF23955AE112F5CF21B7E033919934B47B725D230;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;

IL2CPP_EXTERN_C RuntimeClass* ES3Reflection_tA17C769A6B440CD1CE0A22DE1FC9971FA09D071A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tC759B909207254DA11DB80E27D53C26D4B323D34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m436CACA42B1C2F19C009D462ED994DFEA307A79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m7E711FFACA66FECA7C6DA28284B54CD6B52DE945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1559ECEEB175403965B6FE564AD8C8E5316ADD27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB93215A7659AE40357E7F663A53F2F2476512213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m93021E6CC2E48D8F95690912621D95C647F94EAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mDD50228DD0C92A1ECD42D1C1D73557F792FB018C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendWebRequestU3Ed__18_System_Collections_IEnumerator_Reset_m0E5F54499F28C2F135E5FAF0F9DDE9D2AD53B869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_2__ctor_m643F6E2A6698E26ED1EE664AC1B47C0F6684336E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_2_get_type_mEBD36449B2802956C52193ED56FCD1843A6320DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyInfo_t_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ES3ReaderRawEnumerator_GetEnumerator_m4A487DFFC623267681C96E9F66A65D11CFA108C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ES3ReflectedMember__ctor_m7204A70A3BE0CDF7F3D393356B103F6059505198_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseCompletedEvent__ctor_m034123EB2CB90B89AFF6740400F21ADF60C4C29C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseCompletedEvent__ctor_mAF2FA60F80970F77BD50571AFFB8A8450B2F3594_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseFailedEvent__ctor_mBF50A7911D08BBADD8BAC84B978ACAA24FDAF386_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseFailedEvent__ctor_mDA73205260835AF63AABCBC88FF5853298B1F7CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__2_MoveNext_m7689478C8257AA263C4E6ED83E66D24C27AC18A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m93021E6CC2E48D8F95690912621D95C647F94EAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mDD50228DD0C92A1ECD42D1C1D73557F792FB018C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSendWebRequestU3Ed__18_System_Collections_IEnumerator_Reset_m0E5F54499F28C2F135E5FAF0F9DDE9D2AD53B869_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CGetDerivedTypesU3Eb__26_1_m4DEB53C6EED4BD65F749453D5B277D505A759CAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CGetDerivedTypesU3Eb__26_3_mDE9A42608760F0CDB45C7FBB29ED27FD0DB626BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRemoveNullValuesU3Eb__29_0_m6C9297E58CBC331CEC85FE2D21EC0E85D75CB650_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRemoveNullValuesU3Eb__29_1_m3E70D3E91ACCE57CFEA742523E7DE309A31050AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass26_0_U3CGetDerivedTypesU3Eb__2_mB60C3E5AB2EEA5B8504136FD7C25BE47C87A2261_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass27_0_U3CRemoveU3Eb__0_m1605FC701792B22898FD0E5164843734BF2091DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass28_0_U3CRemoveU3Eb__0_m88E5BFE6DC9CC45A3EB19BF735832308DF067C23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m4B775B05CB38717891571BC7881F10075044798B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mC2C899D9578B302274902430DDA776EDEBDA4A4E_MetadataUsageId;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// <>f__AnonymousType0`2<System.Object,System.Object>
struct  U3CU3Ef__AnonymousType0_2_t4CC11F4D4043B6258EA46772690B15F284CAD3D9  : public RuntimeObject
{
public:
	// <assembly>j__TPar <>f__AnonymousType0`2::<assembly>i__Field
	RuntimeObject * ___U3CassemblyU3Ei__Field_0;
	// <type>j__TPar <>f__AnonymousType0`2::<type>i__Field
	RuntimeObject * ___U3CtypeU3Ei__Field_1;

public:
	inline static int32_t get_offset_of_U3CassemblyU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_2_t4CC11F4D4043B6258EA46772690B15F284CAD3D9, ___U3CassemblyU3Ei__Field_0)); }
	inline RuntimeObject * get_U3CassemblyU3Ei__Field_0() const { return ___U3CassemblyU3Ei__Field_0; }
	inline RuntimeObject ** get_address_of_U3CassemblyU3Ei__Field_0() { return &___U3CassemblyU3Ei__Field_0; }
	inline void set_U3CassemblyU3Ei__Field_0(RuntimeObject * value)
	{
		___U3CassemblyU3Ei__Field_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassemblyU3Ei__Field_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_2_t4CC11F4D4043B6258EA46772690B15F284CAD3D9, ___U3CtypeU3Ei__Field_1)); }
	inline RuntimeObject * get_U3CtypeU3Ei__Field_1() const { return ___U3CtypeU3Ei__Field_1; }
	inline RuntimeObject ** get_address_of_U3CtypeU3Ei__Field_1() { return &___U3CtypeU3Ei__Field_1; }
	inline void set_U3CtypeU3Ei__Field_1(RuntimeObject * value)
	{
		___U3CtypeU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtypeU3Ei__Field_1), (void*)value);
	}
};


// <>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>
struct  U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C  : public RuntimeObject
{
public:
	// <assembly>j__TPar <>f__AnonymousType0`2::<assembly>i__Field
	Assembly_t * ___U3CassemblyU3Ei__Field_0;
	// <type>j__TPar <>f__AnonymousType0`2::<type>i__Field
	Type_t * ___U3CtypeU3Ei__Field_1;

public:
	inline static int32_t get_offset_of_U3CassemblyU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C, ___U3CassemblyU3Ei__Field_0)); }
	inline Assembly_t * get_U3CassemblyU3Ei__Field_0() const { return ___U3CassemblyU3Ei__Field_0; }
	inline Assembly_t ** get_address_of_U3CassemblyU3Ei__Field_0() { return &___U3CassemblyU3Ei__Field_0; }
	inline void set_U3CassemblyU3Ei__Field_0(Assembly_t * value)
	{
		___U3CassemblyU3Ei__Field_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassemblyU3Ei__Field_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C, ___U3CtypeU3Ei__Field_1)); }
	inline Type_t * get_U3CtypeU3Ei__Field_1() const { return ___U3CtypeU3Ei__Field_1; }
	inline Type_t ** get_address_of_U3CtypeU3Ei__Field_1() { return &___U3CtypeU3Ei__Field_1; }
	inline void set_U3CtypeU3Ei__Field_1(Type_t * value)
	{
		___U3CtypeU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtypeU3Ei__Field_1), (void*)value);
	}
};


// ES3Internal.ES3ReferenceMgrBase_<>c
struct  U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750_StaticFields
{
public:
	// ES3Internal.ES3ReferenceMgrBase_<>c ES3Internal.ES3ReferenceMgrBase_<>c::<>9
	U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750 * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>,System.Boolean> ES3Internal.ES3ReferenceMgrBase_<>c::<>9__29_0
	Func_2_tAA34882BE82B154977048C06DD7719409985440F * ___U3CU3E9__29_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>,System.Int64> ES3Internal.ES3ReferenceMgrBase_<>c::<>9__29_1
	Func_2_t4A7FDFAAC8F896789C4929EC1DA1294022A76146 * ___U3CU3E9__29_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750_StaticFields, ___U3CU3E9__29_0_1)); }
	inline Func_2_tAA34882BE82B154977048C06DD7719409985440F * get_U3CU3E9__29_0_1() const { return ___U3CU3E9__29_0_1; }
	inline Func_2_tAA34882BE82B154977048C06DD7719409985440F ** get_address_of_U3CU3E9__29_0_1() { return &___U3CU3E9__29_0_1; }
	inline void set_U3CU3E9__29_0_1(Func_2_tAA34882BE82B154977048C06DD7719409985440F * value)
	{
		___U3CU3E9__29_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750_StaticFields, ___U3CU3E9__29_1_2)); }
	inline Func_2_t4A7FDFAAC8F896789C4929EC1DA1294022A76146 * get_U3CU3E9__29_1_2() const { return ___U3CU3E9__29_1_2; }
	inline Func_2_t4A7FDFAAC8F896789C4929EC1DA1294022A76146 ** get_address_of_U3CU3E9__29_1_2() { return &___U3CU3E9__29_1_2; }
	inline void set_U3CU3E9__29_1_2(Func_2_t4A7FDFAAC8F896789C4929EC1DA1294022A76146 * value)
	{
		___U3CU3E9__29_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_1_2), (void*)value);
	}
};


// ES3Internal.ES3ReferenceMgrBase_<>c__DisplayClass27_0
struct  U3CU3Ec__DisplayClass27_0_tAF01FE7CB7A4D077AA1C1E9F9A93944823D2E038  : public RuntimeObject
{
public:
	// UnityEngine.Object ES3Internal.ES3ReferenceMgrBase_<>c__DisplayClass27_0::obj
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>,System.Boolean> ES3Internal.ES3ReferenceMgrBase_<>c__DisplayClass27_0::<>9__0
	Func_2_tAA34882BE82B154977048C06DD7719409985440F * ___U3CU3E9__0_1;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_tAF01FE7CB7A4D077AA1C1E9F9A93944823D2E038, ___obj_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_obj_0() const { return ___obj_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_tAF01FE7CB7A4D077AA1C1E9F9A93944823D2E038, ___U3CU3E9__0_1)); }
	inline Func_2_tAA34882BE82B154977048C06DD7719409985440F * get_U3CU3E9__0_1() const { return ___U3CU3E9__0_1; }
	inline Func_2_tAA34882BE82B154977048C06DD7719409985440F ** get_address_of_U3CU3E9__0_1() { return &___U3CU3E9__0_1; }
	inline void set_U3CU3E9__0_1(Func_2_tAA34882BE82B154977048C06DD7719409985440F * value)
	{
		___U3CU3E9__0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1), (void*)value);
	}
};


// ES3Internal.ES3ReferenceMgrBase_<>c__DisplayClass28_0
struct  U3CU3Ec__DisplayClass28_0_t9770E27C9F9AE9B7499B960588788A9E92A89939  : public RuntimeObject
{
public:
	// System.Int64 ES3Internal.ES3ReferenceMgrBase_<>c__DisplayClass28_0::referenceID
	int64_t ___referenceID_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Object,System.Int64>,System.Boolean> ES3Internal.ES3ReferenceMgrBase_<>c__DisplayClass28_0::<>9__0
	Func_2_t91D2A0A9392E8CB6C310E403D516D32BE832867D * ___U3CU3E9__0_1;

public:
	inline static int32_t get_offset_of_referenceID_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_t9770E27C9F9AE9B7499B960588788A9E92A89939, ___referenceID_0)); }
	inline int64_t get_referenceID_0() const { return ___referenceID_0; }
	inline int64_t* get_address_of_referenceID_0() { return &___referenceID_0; }
	inline void set_referenceID_0(int64_t value)
	{
		___referenceID_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_t9770E27C9F9AE9B7499B960588788A9E92A89939, ___U3CU3E9__0_1)); }
	inline Func_2_t91D2A0A9392E8CB6C310E403D516D32BE832867D * get_U3CU3E9__0_1() const { return ___U3CU3E9__0_1; }
	inline Func_2_t91D2A0A9392E8CB6C310E403D516D32BE832867D ** get_address_of_U3CU3E9__0_1() { return &___U3CU3E9__0_1; }
	inline void set_U3CU3E9__0_1(Func_2_t91D2A0A9392E8CB6C310E403D516D32BE832867D * value)
	{
		___U3CU3E9__0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1), (void*)value);
	}
};


// ES3Internal.ES3Reflection_<>c
struct  U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2_StaticFields
{
public:
	// ES3Internal.ES3Reflection_<>c ES3Internal.ES3Reflection_<>c::<>9
	U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> ES3Internal.ES3Reflection_<>c::<>9__26_0
	Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * ___U3CU3E9__26_0_1;
	// System.Func`3<System.Reflection.Assembly,System.Type,<>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>> ES3Internal.ES3Reflection_<>c::<>9__26_1
	Func_3_tFF36DB2BDEDCE9315450AF0038FDDD0A811A8826 * ___U3CU3E9__26_1_2;
	// System.Func`2<<>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>,System.Type> ES3Internal.ES3Reflection_<>c::<>9__26_3
	Func_2_t96308AF626923D2D736F572BCEADA9F34B560EB8 * ___U3CU3E9__26_3_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__26_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2_StaticFields, ___U3CU3E9__26_0_1)); }
	inline Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * get_U3CU3E9__26_0_1() const { return ___U3CU3E9__26_0_1; }
	inline Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 ** get_address_of_U3CU3E9__26_0_1() { return &___U3CU3E9__26_0_1; }
	inline void set_U3CU3E9__26_0_1(Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * value)
	{
		___U3CU3E9__26_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__26_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__26_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2_StaticFields, ___U3CU3E9__26_1_2)); }
	inline Func_3_tFF36DB2BDEDCE9315450AF0038FDDD0A811A8826 * get_U3CU3E9__26_1_2() const { return ___U3CU3E9__26_1_2; }
	inline Func_3_tFF36DB2BDEDCE9315450AF0038FDDD0A811A8826 ** get_address_of_U3CU3E9__26_1_2() { return &___U3CU3E9__26_1_2; }
	inline void set_U3CU3E9__26_1_2(Func_3_tFF36DB2BDEDCE9315450AF0038FDDD0A811A8826 * value)
	{
		___U3CU3E9__26_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__26_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__26_3_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2_StaticFields, ___U3CU3E9__26_3_3)); }
	inline Func_2_t96308AF626923D2D736F572BCEADA9F34B560EB8 * get_U3CU3E9__26_3_3() const { return ___U3CU3E9__26_3_3; }
	inline Func_2_t96308AF626923D2D736F572BCEADA9F34B560EB8 ** get_address_of_U3CU3E9__26_3_3() { return &___U3CU3E9__26_3_3; }
	inline void set_U3CU3E9__26_3_3(Func_2_t96308AF626923D2D736F572BCEADA9F34B560EB8 * value)
	{
		___U3CU3E9__26_3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__26_3_3), (void*)value);
	}
};


// ES3Internal.ES3Reflection_<>c__DisplayClass26_0
struct  U3CU3Ec__DisplayClass26_0_tA1241065973A397EC6980A1E7DBB93D6B216931B  : public RuntimeObject
{
public:
	// System.Type ES3Internal.ES3Reflection_<>c__DisplayClass26_0::derivedType
	Type_t * ___derivedType_0;

public:
	inline static int32_t get_offset_of_derivedType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_tA1241065973A397EC6980A1E7DBB93D6B216931B, ___derivedType_0)); }
	inline Type_t * get_derivedType_0() const { return ___derivedType_0; }
	inline Type_t ** get_address_of_derivedType_0() { return &___derivedType_0; }
	inline void set_derivedType_0(Type_t * value)
	{
		___derivedType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___derivedType_0), (void*)value);
	}
};


// ES3Internal.ES3Reflection_ES3ReflectedMethod
struct  ES3ReflectedMethod_t84C16BB1FD3B72EA8719EBB310B8582C5EA9B26D  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo ES3Internal.ES3Reflection_ES3ReflectedMethod::method
	MethodInfo_t * ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(ES3ReflectedMethod_t84C16BB1FD3B72EA8719EBB310B8582C5EA9B26D, ___method_0)); }
	inline MethodInfo_t * get_method_0() const { return ___method_0; }
	inline MethodInfo_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MethodInfo_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_0), (void*)value);
	}
};


// ES3Internal.ES3WebClass
struct  ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C  : public RuntimeObject
{
public:
	// System.String ES3Internal.ES3WebClass::url
	String_t* ___url_0;
	// System.String ES3Internal.ES3WebClass::apiKey
	String_t* ___apiKey_1;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> ES3Internal.ES3WebClass::formData
	List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62 * ___formData_2;
	// UnityEngine.Networking.UnityWebRequest ES3Internal.ES3WebClass::_webRequest
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____webRequest_3;
	// System.Boolean ES3Internal.ES3WebClass::isDone
	bool ___isDone_4;
	// System.String ES3Internal.ES3WebClass::error
	String_t* ___error_5;
	// System.Int64 ES3Internal.ES3WebClass::errorCode
	int64_t ___errorCode_6;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_0), (void*)value);
	}

	inline static int32_t get_offset_of_apiKey_1() { return static_cast<int32_t>(offsetof(ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C, ___apiKey_1)); }
	inline String_t* get_apiKey_1() const { return ___apiKey_1; }
	inline String_t** get_address_of_apiKey_1() { return &___apiKey_1; }
	inline void set_apiKey_1(String_t* value)
	{
		___apiKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiKey_1), (void*)value);
	}

	inline static int32_t get_offset_of_formData_2() { return static_cast<int32_t>(offsetof(ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C, ___formData_2)); }
	inline List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62 * get_formData_2() const { return ___formData_2; }
	inline List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62 ** get_address_of_formData_2() { return &___formData_2; }
	inline void set_formData_2(List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62 * value)
	{
		___formData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_2), (void*)value);
	}

	inline static int32_t get_offset_of__webRequest_3() { return static_cast<int32_t>(offsetof(ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C, ____webRequest_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__webRequest_3() const { return ____webRequest_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__webRequest_3() { return &____webRequest_3; }
	inline void set__webRequest_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____webRequest_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____webRequest_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDone_4() { return static_cast<int32_t>(offsetof(ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C, ___isDone_4)); }
	inline bool get_isDone_4() const { return ___isDone_4; }
	inline bool* get_address_of_isDone_4() { return &___isDone_4; }
	inline void set_isDone_4(bool value)
	{
		___isDone_4 = value;
	}

	inline static int32_t get_offset_of_error_5() { return static_cast<int32_t>(offsetof(ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C, ___error_5)); }
	inline String_t* get_error_5() const { return ___error_5; }
	inline String_t** get_address_of_error_5() { return &___error_5; }
	inline void set_error_5(String_t* value)
	{
		___error_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_5), (void*)value);
	}

	inline static int32_t get_offset_of_errorCode_6() { return static_cast<int32_t>(offsetof(ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C, ___errorCode_6)); }
	inline int64_t get_errorCode_6() const { return ___errorCode_6; }
	inline int64_t* get_address_of_errorCode_6() { return &___errorCode_6; }
	inline void set_errorCode_6(int64_t value)
	{
		___errorCode_6 = value;
	}
};


// ES3Internal.ES3WebClass_<SendWebRequest>d__18
struct  U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7  : public RuntimeObject
{
public:
	// System.Int32 ES3Internal.ES3WebClass_<SendWebRequest>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ES3Internal.ES3WebClass_<SendWebRequest>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest ES3Internal.ES3WebClass_<SendWebRequest>d__18::webRequest
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest_2;
	// ES3Internal.ES3WebClass ES3Internal.ES3WebClass_<SendWebRequest>d__18::<>4__this
	ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_webRequest_2() { return static_cast<int32_t>(offsetof(U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7, ___webRequest_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_webRequest_2() const { return ___webRequest_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_webRequest_2() { return &___webRequest_2; }
	inline void set_webRequest_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___webRequest_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequest_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7, ___U3CU3E4__this_3)); }
	inline ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// ES3Reader
struct  ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9  : public RuntimeObject
{
public:
	// ES3Settings ES3Reader::settings
	ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2 * ___settings_0;
	// System.Int32 ES3Reader::serializationDepth
	int32_t ___serializationDepth_1;
	// System.String ES3Reader::overridePropertiesName
	String_t* ___overridePropertiesName_2;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9, ___settings_0)); }
	inline ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2 * get_settings_0() const { return ___settings_0; }
	inline ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_0), (void*)value);
	}

	inline static int32_t get_offset_of_serializationDepth_1() { return static_cast<int32_t>(offsetof(ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9, ___serializationDepth_1)); }
	inline int32_t get_serializationDepth_1() const { return ___serializationDepth_1; }
	inline int32_t* get_address_of_serializationDepth_1() { return &___serializationDepth_1; }
	inline void set_serializationDepth_1(int32_t value)
	{
		___serializationDepth_1 = value;
	}

	inline static int32_t get_offset_of_overridePropertiesName_2() { return static_cast<int32_t>(offsetof(ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9, ___overridePropertiesName_2)); }
	inline String_t* get_overridePropertiesName_2() const { return ___overridePropertiesName_2; }
	inline String_t** get_address_of_overridePropertiesName_2() { return &___overridePropertiesName_2; }
	inline void set_overridePropertiesName_2(String_t* value)
	{
		___overridePropertiesName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overridePropertiesName_2), (void*)value);
	}
};


// ES3Reader_ES3ReaderPropertyEnumerator
struct  ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D  : public RuntimeObject
{
public:
	// ES3Reader ES3Reader_ES3ReaderPropertyEnumerator::reader
	ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader_0;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D, ___reader_0)); }
	inline ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * get_reader_0() const { return ___reader_0; }
	inline ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}
};


// ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2
struct  U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2  : public RuntimeObject
{
public:
	// System.Int32 ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ES3Reader_ES3ReaderPropertyEnumerator ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::<>4__this
	ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * ___U3CU3E4__this_2;
	// System.String ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::<propertyName>5__1
	String_t* ___U3CpropertyNameU3E5__1_3;
	// System.String ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::<tempName>5__2
	String_t* ___U3CtempNameU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2, ___U3CU3E4__this_2)); }
	inline ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertyNameU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2, ___U3CpropertyNameU3E5__1_3)); }
	inline String_t* get_U3CpropertyNameU3E5__1_3() const { return ___U3CpropertyNameU3E5__1_3; }
	inline String_t** get_address_of_U3CpropertyNameU3E5__1_3() { return &___U3CpropertyNameU3E5__1_3; }
	inline void set_U3CpropertyNameU3E5__1_3(String_t* value)
	{
		___U3CpropertyNameU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertyNameU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtempNameU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2, ___U3CtempNameU3E5__2_4)); }
	inline String_t* get_U3CtempNameU3E5__2_4() const { return ___U3CtempNameU3E5__2_4; }
	inline String_t** get_address_of_U3CtempNameU3E5__2_4() { return &___U3CtempNameU3E5__2_4; }
	inline void set_U3CtempNameU3E5__2_4(String_t* value)
	{
		___U3CtempNameU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtempNameU3E5__2_4), (void*)value);
	}
};


// ES3Reader_ES3ReaderRawEnumerator
struct  ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA  : public RuntimeObject
{
public:
	// ES3Reader ES3Reader_ES3ReaderRawEnumerator::reader
	ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader_0;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA, ___reader_0)); }
	inline ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * get_reader_0() const { return ___reader_0; }
	inline ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}
};


// ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2
struct  U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8  : public RuntimeObject
{
public:
	// System.Int32 ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ES3Reader_ES3ReaderRawEnumerator ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::<>4__this
	ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA * ___U3CU3E4__this_2;
	// System.String ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::<key>5__1
	String_t* ___U3CkeyU3E5__1_3;
	// System.Type ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::<type>5__2
	Type_t * ___U3CtypeU3E5__2_4;
	// System.Byte[] ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::<bytes>5__3
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CbytesU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8, ___U3CU3E4__this_2)); }
	inline ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CkeyU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8, ___U3CkeyU3E5__1_3)); }
	inline String_t* get_U3CkeyU3E5__1_3() const { return ___U3CkeyU3E5__1_3; }
	inline String_t** get_address_of_U3CkeyU3E5__1_3() { return &___U3CkeyU3E5__1_3; }
	inline void set_U3CkeyU3E5__1_3(String_t* value)
	{
		___U3CkeyU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CkeyU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8, ___U3CtypeU3E5__2_4)); }
	inline Type_t * get_U3CtypeU3E5__2_4() const { return ___U3CtypeU3E5__2_4; }
	inline Type_t ** get_address_of_U3CtypeU3E5__2_4() { return &___U3CtypeU3E5__2_4; }
	inline void set_U3CtypeU3E5__2_4(Type_t * value)
	{
		___U3CtypeU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtypeU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbytesU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8, ___U3CbytesU3E5__3_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CbytesU3E5__3_5() const { return ___U3CbytesU3E5__3_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CbytesU3E5__3_5() { return &___U3CbytesU3E5__3_5; }
	inline void set_U3CbytesU3E5__3_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CbytesU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbytesU3E5__3_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.Binder
struct  Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30  : public RuntimeObject
{
public:

public:
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

// ES3Internal.ES3Data
struct  ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8 
{
public:
	// ES3Types.ES3Type ES3Internal.ES3Data::type
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___type_0;
	// System.Byte[] ES3Internal.ES3Data::bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8, ___type_0)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_type_0() const { return ___type_0; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8, ___bytes_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytes_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ES3Internal.ES3Data
struct ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8_marshaled_pinvoke
{
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___type_0;
	Il2CppSafeArray/*NONE*/* ___bytes_1;
};
// Native definition for COM marshalling of ES3Internal.ES3Data
struct ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8_marshaled_com
{
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___type_0;
	Il2CppSafeArray/*NONE*/* ___bytes_1;
};

// ES3Internal.ES3Reflection_ES3ReflectedMember
struct  ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 
{
public:
	// System.Reflection.FieldInfo ES3Internal.ES3Reflection_ES3ReflectedMember::fieldInfo
	FieldInfo_t * ___fieldInfo_0;
	// System.Reflection.PropertyInfo ES3Internal.ES3Reflection_ES3ReflectedMember::propertyInfo
	PropertyInfo_t * ___propertyInfo_1;
	// System.Boolean ES3Internal.ES3Reflection_ES3ReflectedMember::isProperty
	bool ___isProperty_2;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_propertyInfo_1() { return static_cast<int32_t>(offsetof(ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076, ___propertyInfo_1)); }
	inline PropertyInfo_t * get_propertyInfo_1() const { return ___propertyInfo_1; }
	inline PropertyInfo_t ** get_address_of_propertyInfo_1() { return &___propertyInfo_1; }
	inline void set_propertyInfo_1(PropertyInfo_t * value)
	{
		___propertyInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyInfo_1), (void*)value);
	}

	inline static int32_t get_offset_of_isProperty_2() { return static_cast<int32_t>(offsetof(ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076, ___isProperty_2)); }
	inline bool get_isProperty_2() const { return ___isProperty_2; }
	inline bool* get_address_of_isProperty_2() { return &___isProperty_2; }
	inline void set_isProperty_2(bool value)
	{
		___isProperty_2 = value;
	}
};

// Native definition for P/Invoke marshalling of ES3Internal.ES3Reflection/ES3ReflectedMember
struct ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshaled_pinvoke
{
	FieldInfo_t * ___fieldInfo_0;
	PropertyInfo_t * ___propertyInfo_1;
	int32_t ___isProperty_2;
};
// Native definition for COM marshalling of ES3Internal.ES3Reflection/ES3ReflectedMember
struct ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshaled_com
{
	FieldInfo_t * ___fieldInfo_0;
	PropertyInfo_t * ___propertyInfo_1;
	int32_t ___isProperty_2;
};

// ES3Spreadsheet_Index
struct  Index_t00BB46EA4FF5323BD9B8B9799F1959930619E4B8 
{
public:
	// System.Int32 ES3Spreadsheet_Index::col
	int32_t ___col_0;
	// System.Int32 ES3Spreadsheet_Index::row
	int32_t ___row_1;

public:
	inline static int32_t get_offset_of_col_0() { return static_cast<int32_t>(offsetof(Index_t00BB46EA4FF5323BD9B8B9799F1959930619E4B8, ___col_0)); }
	inline int32_t get_col_0() const { return ___col_0; }
	inline int32_t* get_address_of_col_0() { return &___col_0; }
	inline void set_col_0(int32_t value)
	{
		___col_0 = value;
	}

	inline static int32_t get_offset_of_row_1() { return static_cast<int32_t>(offsetof(Index_t00BB46EA4FF5323BD9B8B9799F1959930619E4B8, ___row_1)); }
	inline int32_t get_row_1() const { return ___row_1; }
	inline int32_t* get_address_of_row_1() { return &___row_1; }
	inline void set_row_1(int32_t value)
	{
		___row_1 = value;
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


// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
struct  KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2, ___key_0)); }
	inline int64_t get_key_0() const { return ___key_0; }
	inline int64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>
struct  KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518, ___key_0)); }
	inline int64_t get_key_0() const { return ___key_0; }
	inline int64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518, ___value_1)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_value_1() const { return ___value_1; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
struct  KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Object,System.Int64>
struct  KeyValuePair_2_t8139582E0FADB2BDBA02CCA6C7D6CD47A80C2BAC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8139582E0FADB2BDBA02CCA6C7D6CD47A80C2BAC, ___key_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_key_0() const { return ___key_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8139582E0FADB2BDBA02CCA6C7D6CD47A80C2BAC, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.ParameterModifier
struct  ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA, ____byRef_0)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byRef_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct  UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct  UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// ES3Internal.ES3IO_ES3FileMode
struct  ES3FileMode_t843CF55A9336BE6DA8ACBBAB7E5E3523349826CA 
{
public:
	// System.Int32 ES3Internal.ES3IO_ES3FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ES3FileMode_t843CF55A9336BE6DA8ACBBAB7E5E3523349826CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,ES3Internal.ES3Data>
struct  KeyValuePair_2_tB7EC95B508F0D0E7A914ED8EDCEAACBE49874EA1 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB7EC95B508F0D0E7A914ED8EDCEAACBE49874EA1, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB7EC95B508F0D0E7A914ED8EDCEAACBE49874EA1, ___value_1)); }
	inline ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8  get_value_1() const { return ___value_1; }
	inline ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___bytes_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,ES3Internal.ES3Data>
struct  KeyValuePair_2_tC759B909207254DA11DB80E27D53C26D4B323D34 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC759B909207254DA11DB80E27D53C26D4B323D34, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC759B909207254DA11DB80E27D53C26D4B323D34, ___value_1)); }
	inline ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8  get_value_1() const { return ___value_1; }
	inline ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___bytes_1), (void*)NULL);
		#endif
	}
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


// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
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

// UnityEngine.Purchasing.IAPButton_ButtonType
struct  ButtonType_t8BF9B0464B060BF3D1610B8814CB0F440BDB2B42 
{
public:
	// System.Int32 UnityEngine.Purchasing.IAPButton_ButtonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonType_t8BF9B0464B060BF3D1610B8814CB0F440BDB2B42, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.IAPButton_OnPurchaseCompletedEvent
struct  OnPurchaseCompletedEvent_tFDEE10C59F1166BF35283A7C8ACAB966E68B7A00  : public UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F
{
public:

public:
};


// UnityEngine.Purchasing.IAPButton_OnPurchaseFailedEvent
struct  OnPurchaseFailedEvent_tC220F39895356A91AB33A66E696C0C88C2426EFC  : public UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044
{
public:

public:
};


// UnityEngine.Purchasing.IAPListener_OnPurchaseCompletedEvent
struct  OnPurchaseCompletedEvent_tDF3FABBEFF021ECE2C6507D50FFE4EEC1D3BA328  : public UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F
{
public:

public:
};


// UnityEngine.Purchasing.IAPListener_OnPurchaseFailedEvent
struct  OnPurchaseFailedEvent_tD551A0A09633EDBA5C30A72FC44B84B02146CA82  : public UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044
{
public:

public:
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


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  m_Items[1];

public:
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// !1 System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m9FB8CF0F4C684DF0F6CE4F9BE0E0F80216B06268_gshared_inline (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Key_m8100BF3E3F64307412AF522908A74E48B8A7BDAD_gshared_inline (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Value_m1799ACBFF8CD1B0B0AA8B7A7DC684AD7884DBD07_gshared_inline (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 * __this, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`2<System.Object,System.Object>::.ctor(<assembly>j__TPar,<type>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_2__ctor_mC43A90CBCF20DD13F7E3367C365353E77EA79483_gshared (U3CU3Ef__AnonymousType0_2_t4CC11F4D4043B6258EA46772690B15F284CAD3D9 * __this, RuntimeObject * ___assembly0, RuntimeObject * ___type1, const RuntimeMethod* method);
// <type>j__TPar <>f__AnonymousType0`2<System.Object,System.Object>::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ef__AnonymousType0_2_get_type_m23ECC30CA3636383B4B54290460A13D0F6ED4EB6_gshared_inline (U3CU3Ef__AnonymousType0_2_t4CC11F4D4043B6258EA46772690B15F284CAD3D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m721453CC5F87AE63498BE16CE9AED969E69A1735_gshared (UnityEvent_2_tF23955AE112F5CF21B7E033919934B47B725D230 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ES3Internal.ES3Data>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m6DE9E8812483F5831A8323EC296378C266DFFC68_gshared (KeyValuePair_2_tB7EC95B508F0D0E7A914ED8EDCEAACBE49874EA1 * __this, RuntimeObject * ___key0, ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8  ___value1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ES3Reader/ES3ReaderPropertyEnumerator/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m2BE7061FC6DEE1BAA04E9C08289EF15D09DAD545 (U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ES3Reader/ES3ReaderRawEnumerator/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_mB1692FB52CC81025E4E77C47E38A70B73AA5C9A1 (U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ES3Internal.ES3ReferenceMgrBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6CCC038ED1E456EEE83CC847E6FF744B0E857FAB (U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>::get_Value()
inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * KeyValuePair_2_get_Value_mB93215A7659AE40357E7F663A53F2F2476512213_inline (KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518 * __this, const RuntimeMethod* method)
{
	return ((  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * (*) (KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m9FB8CF0F4C684DF0F6CE4F9BE0E0F80216B06268_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>::get_Key()
inline int64_t KeyValuePair_2_get_Key_m7E711FFACA66FECA7C6DA28284B54CD6B52DE945_inline (KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518 * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m8100BF3E3F64307412AF522908A74E48B8A7BDAD_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Object,System.Int64>::get_Value()
inline int64_t KeyValuePair_2_get_Value_m1559ECEEB175403965B6FE564AD8C8E5316ADD27_inline (KeyValuePair_2_t8139582E0FADB2BDBA02CCA6C7D6CD47A80C2BAC * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (KeyValuePair_2_t8139582E0FADB2BDBA02CCA6C7D6CD47A80C2BAC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1799ACBFF8CD1B0B0AA8B7A7DC684AD7884DBD07_gshared_inline)(__this, method);
}
// System.Void ES3Internal.ES3Reflection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4A812D36D59BA13BD1888839F095DB2FDAC5FE59 (U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 * __this, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>::.ctor(<assembly>j__TPar,<type>j__TPar)
inline void U3CU3Ef__AnonymousType0_2__ctor_m643F6E2A6698E26ED1EE664AC1B47C0F6684336E (U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C * __this, Assembly_t * ___assembly0, Type_t * ___type1, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C *, Assembly_t *, Type_t *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_2__ctor_mC43A90CBCF20DD13F7E3367C365353E77EA79483_gshared)(__this, ___assembly0, ___type1, method);
}
// <type>j__TPar <>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>::get_type()
inline Type_t * U3CU3Ef__AnonymousType0_2_get_type_mEBD36449B2802956C52193ED56FCD1843A6320DF_inline (U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C * __this, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_2_get_type_m23ECC30CA3636383B4B54290460A13D0F6ED4EB6_gshared_inline)(__this, method);
}
// System.Boolean ES3Internal.ES3Reflection::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ES3Reflection_IsAssignableFrom_m8A941FB6429A2C61BAA448B9A2176936C0376622 (Type_t * ___a0, Type_t * ___b1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Equality_m317FBF38CA6FD67D08400CC9A15FEC250E5D4751 (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m94A58A417AD82DA8ABCE4B0DCAA3019A586D5B16 (PropertyInfo_t * ___left0, PropertyInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean ES3Internal.ES3Reflection/ES3ReflectedMember::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ES3ReflectedMember_get_IsNull_m054EF2F3DD9BF35A41F5AC1E1C0532FF714E0454 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method);
// System.String ES3Internal.ES3Reflection/ES3ReflectedMember::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ES3ReflectedMember_get_Name_m7A05F0D9D056B16FAA3720EFF9CEB500F56D9428 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method);
// System.Type ES3Internal.ES3Reflection/ES3ReflectedMember::get_MemberType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ES3ReflectedMember_get_MemberType_mCEEAD6849093A04C9E40102A905786A9D74C8D78 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPublic_mA7FB5E40024835CA07195F3E1BFCBD41E9E013BD (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_mD65CD145DEC0C6F2F7F6E729A36C761FD2A97271 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean ES3Internal.ES3Reflection/ES3ReflectedMember::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ES3ReflectedMember_get_IsPublic_m6BF8B7AC6C0980D18F0D7644C2FDDAB6FCCE0B1A (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsFamily_mCF9F0AD403304E6E926E57C6F53E4068FF55F69F (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsFamily_mCDB23637C50656AB94FBD786FFAE991EA4F89B69 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean ES3Internal.ES3Reflection/ES3ReflectedMember::get_IsProtected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ES3ReflectedMember_get_IsProtected_mDF889CA849990C710CCE42234C6FAF3BED6EFC9D (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean ES3Internal.ES3Reflection/ES3ReflectedMember::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ES3ReflectedMember_get_IsStatic_m0C46CAAC1688C66DA71062A95B999FD23EF90982 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ES3Internal.ES3Reflection/ES3ReflectedMember::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ReflectedMember__ctor_m7204A70A3BE0CDF7F3D393356B103F6059505198 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, RuntimeObject * ___fieldPropertyInfo0, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void ES3Internal.ES3Reflection/ES3ReflectedMember::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ReflectedMember_SetValue_m11D74833C619C46139C849D8AE302CD27C7E2661 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Object ES3Internal.ES3Reflection/ES3ReflectedMember::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3ReflectedMember_GetValue_mBC5AB0D0F98F6993255E99D1FC4C58123F49CA69 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E (Type_t * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m69EE86B5A87244C925333CCF1B6D6B9BCFED8A89 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___binder2, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types3, ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B* ___modifiers4, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Void ES3Spreadsheet/Index::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Index__ctor_mEBFD8FC797F32CB6A977E8E8D1E482482B76D206 (Index_t00BB46EA4FF5323BD9B8B9799F1959930619E4B8 * __this, int32_t ___col0, int32_t ___row1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::.ctor()
inline void UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E (UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor()
inline void UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423 (UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044 *, const RuntimeMethod*))UnityEvent_2__ctor_m721453CC5F87AE63498BE16CE9AED969E69A1735_gshared)(__this, method);
}
// System.Void ES3Internal.ES3Data::.ctor(System.Type,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Data__ctor_m37B458D88E074F99FB2177938F141DED4AEE6591 (ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8 * __this, Type_t * ___type0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,ES3Internal.ES3Data>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m436CACA42B1C2F19C009D462ED994DFEA307A79F (KeyValuePair_2_tC759B909207254DA11DB80E27D53C26D4B323D34 * __this, String_t* ___key0, ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8  ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC759B909207254DA11DB80E27D53C26D4B323D34 *, String_t*, ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8 , const RuntimeMethod*))KeyValuePair_2__ctor_m6DE9E8812483F5831A8323EC296378C266DFFC68_gshared)(__this, ___key0, ___value1, method);
}
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
// System.Void ES3Reader_ES3ReaderPropertyEnumerator::.ctor(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ReaderPropertyEnumerator__ctor_mD56C39EB077E468CF6583CF866587DCFB18CD561 (ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	{
		// public ES3ReaderPropertyEnumerator(ES3Reader reader)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.reader = reader;
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		__this->set_reader_0(L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator ES3Reader_ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4 (ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2 * L_0 = (U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__2__ctor_m2BE7061FC6DEE1BAA04E9C08289EF15D09DAD545(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
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
// System.Void ES3Reader_ES3ReaderRawEnumerator::.ctor(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ReaderRawEnumerator__ctor_mFA2FB912DB15CFDA7B09A1E6D1575BDBA692F5D8 (ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	{
		// public ES3ReaderRawEnumerator(ES3Reader reader)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.reader = reader;
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		__this->set_reader_0(L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator ES3Reader_ES3ReaderRawEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderRawEnumerator_GetEnumerator_m4A487DFFC623267681C96E9F66A65D11CFA108C9 (ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ES3ReaderRawEnumerator_GetEnumerator_m4A487DFFC623267681C96E9F66A65D11CFA108C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8 * L_0 = (U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__2__ctor_mB1692FB52CC81025E4E77C47E38A70B73AA5C9A1(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
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
// System.Void ES3Internal.ES3ReferenceMgrBase_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4B775B05CB38717891571BC7881F10075044798B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m4B775B05CB38717891571BC7881F10075044798B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750 * L_0 = (U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750 *)il2cpp_codegen_object_new(U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6CCC038ED1E456EEE83CC847E6FF744B0E857FAB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ES3Internal.ES3ReferenceMgrBase_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6CCC038ED1E456EEE83CC847E6FF744B0E857FAB (U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ES3Internal.ES3ReferenceMgrBase_<>c::<RemoveNullValues>b__29_0(System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRemoveNullValuesU3Eb__29_0_m6C9297E58CBC331CEC85FE2D21EC0E85D75CB650 (U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750 * __this, KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRemoveNullValuesU3Eb__29_0_m6C9297E58CBC331CEC85FE2D21EC0E85D75CB650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var nullKeys = idRef.Where(pair => pair.Value == null)
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = KeyValuePair_2_get_Value_mB93215A7659AE40357E7F663A53F2F2476512213_inline((KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518 *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Value_mB93215A7659AE40357E7F663A53F2F2476512213_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 ES3Internal.ES3ReferenceMgrBase_<>c::<RemoveNullValues>b__29_1(System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3CRemoveNullValuesU3Eb__29_1_m3E70D3E91ACCE57CFEA742523E7DE309A31050AC (U3CU3Ec_t4C569792BD5C7DB4BC4F95804F131F35C9B4A750 * __this, KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRemoveNullValuesU3Eb__29_1_m3E70D3E91ACCE57CFEA742523E7DE309A31050AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(pair => pair.Key).ToList();
		int64_t L_0 = KeyValuePair_2_get_Key_m7E711FFACA66FECA7C6DA28284B54CD6B52DE945_inline((KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518 *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Key_m7E711FFACA66FECA7C6DA28284B54CD6B52DE945_RuntimeMethod_var);
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
// System.Void ES3Internal.ES3ReferenceMgrBase_<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m44D78726EA38784ADAE707A0568180338E0909E5 (U3CU3Ec__DisplayClass27_0_tAF01FE7CB7A4D077AA1C1E9F9A93944823D2E038 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ES3Internal.ES3ReferenceMgrBase_<>c__DisplayClass27_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.Int64,UnityEngine.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CRemoveU3Eb__0_m1605FC701792B22898FD0E5164843734BF2091DD (U3CU3Ec__DisplayClass27_0_tAF01FE7CB7A4D077AA1C1E9F9A93944823D2E038 * __this, KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518  ___kvp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass27_0_U3CRemoveU3Eb__0_m1605FC701792B22898FD0E5164843734BF2091DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foreach (var item in idRef.Where(kvp => kvp.Value == obj).ToList())
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = KeyValuePair_2_get_Value_mB93215A7659AE40357E7F663A53F2F2476512213_inline((KeyValuePair_2_t62E58A355D975D0BF1FEB6A72021EF64C6F99518 *)(&___kvp0), /*hidden argument*/KeyValuePair_2_get_Value_mB93215A7659AE40357E7F663A53F2F2476512213_RuntimeMethod_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = __this->get_obj_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void ES3Internal.ES3ReferenceMgrBase_<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_mBF7029911659BF9B81530F52D38B4C056E9D36E7 (U3CU3Ec__DisplayClass28_0_t9770E27C9F9AE9B7499B960588788A9E92A89939 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ES3Internal.ES3ReferenceMgrBase_<>c__DisplayClass28_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<UnityEngine.Object,System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass28_0_U3CRemoveU3Eb__0_m88E5BFE6DC9CC45A3EB19BF735832308DF067C23 (U3CU3Ec__DisplayClass28_0_t9770E27C9F9AE9B7499B960588788A9E92A89939 * __this, KeyValuePair_2_t8139582E0FADB2BDBA02CCA6C7D6CD47A80C2BAC  ___kvp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass28_0_U3CRemoveU3Eb__0_m88E5BFE6DC9CC45A3EB19BF735832308DF067C23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foreach (var item in refId.Where(kvp => kvp.Value == referenceID).ToList())
		int64_t L_0 = KeyValuePair_2_get_Value_m1559ECEEB175403965B6FE564AD8C8E5316ADD27_inline((KeyValuePair_2_t8139582E0FADB2BDBA02CCA6C7D6CD47A80C2BAC *)(&___kvp0), /*hidden argument*/KeyValuePair_2_get_Value_m1559ECEEB175403965B6FE564AD8C8E5316ADD27_RuntimeMethod_var);
		int64_t L_1 = __this->get_referenceID_0();
		return (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
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
// System.Void ES3Internal.ES3Reflection_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC2C899D9578B302274902430DDA776EDEBDA4A4E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mC2C899D9578B302274902430DDA776EDEBDA4A4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 * L_0 = (U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 *)il2cpp_codegen_object_new(U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4A812D36D59BA13BD1888839F095DB2FDAC5FE59(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ES3Internal.ES3Reflection_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4A812D36D59BA13BD1888839F095DB2FDAC5FE59 (U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> ES3Internal.ES3Reflection_<>c::<GetDerivedTypes>b__26_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetDerivedTypesU3Eb__26_0_mDC8D776E86279E3C30F8A80D0E44720CEFBC299F (U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 * __this, Assembly_t * ___assembly0, const RuntimeMethod* method)
{
	{
		// from type in assembly.GetTypes()
		Assembly_t * L_0 = ___assembly0;
		NullCheck(L_0);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(13 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		return (RuntimeObject*)L_1;
	}
}
// <>f__AnonymousType0`2<System.Reflection.Assembly,System.Type> ES3Internal.ES3Reflection_<>c::<GetDerivedTypes>b__26_1(System.Reflection.Assembly,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C * U3CU3Ec_U3CGetDerivedTypesU3Eb__26_1_m4DEB53C6EED4BD65F749453D5B277D505A759CAC (U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 * __this, Assembly_t * ___assembly0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetDerivedTypesU3Eb__26_1_m4DEB53C6EED4BD65F749453D5B277D505A759CAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// from type in assembly.GetTypes()
		Assembly_t * L_0 = ___assembly0;
		Type_t * L_1 = ___type1;
		U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C * L_2 = (U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_2__ctor_m643F6E2A6698E26ED1EE664AC1B47C0F6684336E(L_2, L_0, L_1, /*hidden argument*/U3CU3Ef__AnonymousType0_2__ctor_m643F6E2A6698E26ED1EE664AC1B47C0F6684336E_RuntimeMethod_var);
		return L_2;
	}
}
// System.Type ES3Internal.ES3Reflection_<>c::<GetDerivedTypes>b__26_3(<>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetDerivedTypesU3Eb__26_3_mDE9A42608760F0CDB45C7FBB29ED27FD0DB626BB (U3CU3Ec_t5DEDC8BC4ACF6FB941B0B0586A813C2868797FA2 * __this, U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C * ___U3CU3Eh__TransparentIdentifier00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetDerivedTypesU3Eb__26_3_mDE9A42608760F0CDB45C7FBB29ED27FD0DB626BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// select type
		U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C * L_0 = ___U3CU3Eh__TransparentIdentifier00;
		NullCheck(L_0);
		Type_t * L_1 = U3CU3Ef__AnonymousType0_2_get_type_mEBD36449B2802956C52193ED56FCD1843A6320DF_inline(L_0, /*hidden argument*/U3CU3Ef__AnonymousType0_2_get_type_mEBD36449B2802956C52193ED56FCD1843A6320DF_RuntimeMethod_var);
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
// System.Void ES3Internal.ES3Reflection_<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m2D98D21F24E19B2B96EB4870C12858446555D349 (U3CU3Ec__DisplayClass26_0_tA1241065973A397EC6980A1E7DBB93D6B216931B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ES3Internal.ES3Reflection_<>c__DisplayClass26_0::<GetDerivedTypes>b__2(<>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass26_0_U3CGetDerivedTypesU3Eb__2_mB60C3E5AB2EEA5B8504136FD7C25BE47C87A2261 (U3CU3Ec__DisplayClass26_0_tA1241065973A397EC6980A1E7DBB93D6B216931B * __this, U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C * ___U3CU3Eh__TransparentIdentifier00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass26_0_U3CGetDerivedTypesU3Eb__2_mB60C3E5AB2EEA5B8504136FD7C25BE47C87A2261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// where IsAssignableFrom(derivedType, type)
		Type_t * L_0 = __this->get_derivedType_0();
		U3CU3Ef__AnonymousType0_2_tBFFC67D8768EEA36971DCE8D428DC3FDDC8F934C * L_1 = ___U3CU3Eh__TransparentIdentifier00;
		NullCheck(L_1);
		Type_t * L_2 = U3CU3Ef__AnonymousType0_2_get_type_mEBD36449B2802956C52193ED56FCD1843A6320DF_inline(L_1, /*hidden argument*/U3CU3Ef__AnonymousType0_2_get_type_mEBD36449B2802956C52193ED56FCD1843A6320DF_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ES3Reflection_tA17C769A6B440CD1CE0A22DE1FC9971FA09D071A_il2cpp_TypeInfo_var);
		bool L_3 = ES3Reflection_IsAssignableFrom_m8A941FB6429A2C61BAA448B9A2176936C0376622(L_0, L_2, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: ES3Internal.ES3Reflection/ES3ReflectedMember
IL2CPP_EXTERN_C void ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshal_pinvoke(const ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076& unmarshaled, ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshaled_pinvoke& marshaled)
{
	Exception_t* ___fieldInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fieldInfo' of type 'ES3ReflectedMember': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fieldInfo_0Exception, NULL);
}
IL2CPP_EXTERN_C void ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshal_pinvoke_back(const ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshaled_pinvoke& marshaled, ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076& unmarshaled)
{
	Exception_t* ___fieldInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fieldInfo' of type 'ES3ReflectedMember': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fieldInfo_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ES3Internal.ES3Reflection/ES3ReflectedMember
IL2CPP_EXTERN_C void ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshal_pinvoke_cleanup(ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ES3Internal.ES3Reflection/ES3ReflectedMember
IL2CPP_EXTERN_C void ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshal_com(const ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076& unmarshaled, ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshaled_com& marshaled)
{
	Exception_t* ___fieldInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fieldInfo' of type 'ES3ReflectedMember': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fieldInfo_0Exception, NULL);
}
IL2CPP_EXTERN_C void ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshal_com_back(const ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshaled_com& marshaled, ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076& unmarshaled)
{
	Exception_t* ___fieldInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fieldInfo' of type 'ES3ReflectedMember': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fieldInfo_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ES3Internal.ES3Reflection/ES3ReflectedMember
IL2CPP_EXTERN_C void ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshal_com_cleanup(ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076_marshaled_com& marshaled)
{
}
// System.Boolean ES3Internal.ES3Reflection_ES3ReflectedMember::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ES3ReflectedMember_get_IsNull_m054EF2F3DD9BF35A41F5AC1E1C0532FF714E0454 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// public bool IsNull { get{ return fieldInfo == null && propertyInfo == null; } }
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		bool L_1 = FieldInfo_op_Equality_m317FBF38CA6FD67D08400CC9A15FEC250E5D4751(L_0, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		PropertyInfo_t * L_2 = __this->get_propertyInfo_1();
		bool L_3 = PropertyInfo_op_Equality_m94A58A417AD82DA8ABCE4B0DCAA3019A586D5B16(L_2, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		// public bool IsNull { get{ return fieldInfo == null && propertyInfo == null; } }
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool ES3ReflectedMember_get_IsNull_m054EF2F3DD9BF35A41F5AC1E1C0532FF714E0454_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * _thisAdjusted = reinterpret_cast<ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 *>(__this + _offset);
	return ES3ReflectedMember_get_IsNull_m054EF2F3DD9BF35A41F5AC1E1C0532FF714E0454(_thisAdjusted, method);
}
// System.String ES3Internal.ES3Reflection_ES3ReflectedMember::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ES3ReflectedMember_get_Name_m7A05F0D9D056B16FAA3720EFF9CEB500F56D9428 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// public string Name { get{ return (isProperty ? propertyInfo.Name : fieldInfo.Name); } }
		bool L_0 = __this->get_isProperty_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		FieldInfo_t * L_1 = __this->get_fieldInfo_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		G_B3_0 = L_2;
		goto IL_0021;
	}

IL_0016:
	{
		PropertyInfo_t * L_3 = __this->get_propertyInfo_1();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		// public string Name { get{ return (isProperty ? propertyInfo.Name : fieldInfo.Name); } }
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* ES3ReflectedMember_get_Name_m7A05F0D9D056B16FAA3720EFF9CEB500F56D9428_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * _thisAdjusted = reinterpret_cast<ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 *>(__this + _offset);
	return ES3ReflectedMember_get_Name_m7A05F0D9D056B16FAA3720EFF9CEB500F56D9428(_thisAdjusted, method);
}
// System.Type ES3Internal.ES3Reflection_ES3ReflectedMember::get_MemberType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ES3ReflectedMember_get_MemberType_mCEEAD6849093A04C9E40102A905786A9D74C8D78 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	Type_t * G_B3_0 = NULL;
	{
		// public Type MemberType { get{ return (isProperty ? propertyInfo.PropertyType : fieldInfo.FieldType); } }
		bool L_0 = __this->get_isProperty_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		FieldInfo_t * L_1 = __this->get_fieldInfo_0();
		NullCheck(L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_1);
		G_B3_0 = L_2;
		goto IL_0021;
	}

IL_0016:
	{
		PropertyInfo_t * L_3 = __this->get_propertyInfo_1();
		NullCheck(L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_3);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		// public Type MemberType { get{ return (isProperty ? propertyInfo.PropertyType : fieldInfo.FieldType); } }
		Type_t * L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  Type_t * ES3ReflectedMember_get_MemberType_mCEEAD6849093A04C9E40102A905786A9D74C8D78_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * _thisAdjusted = reinterpret_cast<ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 *>(__this + _offset);
	return ES3ReflectedMember_get_MemberType_mCEEAD6849093A04C9E40102A905786A9D74C8D78(_thisAdjusted, method);
}
// System.Boolean ES3Internal.ES3Reflection_ES3ReflectedMember::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ES3ReflectedMember_get_IsPublic_m6BF8B7AC6C0980D18F0D7644C2FDDAB6FCCE0B1A (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// public bool IsPublic { get{ return (isProperty ? (propertyInfo.GetGetMethod(true).IsPublic && propertyInfo.GetSetMethod(true).IsPublic) : fieldInfo.IsPublic); } }
		bool L_0 = __this->get_isProperty_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		FieldInfo_t * L_1 = __this->get_fieldInfo_0();
		NullCheck(L_1);
		bool L_2 = FieldInfo_get_IsPublic_mA7FB5E40024835CA07195F3E1BFCBD41E9E013BD(L_1, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_2));
		goto IL_003d;
	}

IL_0016:
	{
		PropertyInfo_t * L_3 = __this->get_propertyInfo_1();
		NullCheck(L_3);
		MethodInfo_t * L_4 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_3, (bool)1);
		NullCheck(L_4);
		bool L_5 = MethodBase_get_IsPublic_mD65CD145DEC0C6F2F7F6E729A36C761FD2A97271(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		PropertyInfo_t * L_6 = __this->get_propertyInfo_1();
		NullCheck(L_6);
		MethodInfo_t * L_7 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(23 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_6, (bool)1);
		NullCheck(L_7);
		bool L_8 = MethodBase_get_IsPublic_mD65CD145DEC0C6F2F7F6E729A36C761FD2A97271(L_7, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = 0;
	}

IL_003d:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0040;
	}

IL_0040:
	{
		// public bool IsPublic { get{ return (isProperty ? (propertyInfo.GetGetMethod(true).IsPublic && propertyInfo.GetSetMethod(true).IsPublic) : fieldInfo.IsPublic); } }
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool ES3ReflectedMember_get_IsPublic_m6BF8B7AC6C0980D18F0D7644C2FDDAB6FCCE0B1A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * _thisAdjusted = reinterpret_cast<ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 *>(__this + _offset);
	return ES3ReflectedMember_get_IsPublic_m6BF8B7AC6C0980D18F0D7644C2FDDAB6FCCE0B1A(_thisAdjusted, method);
}
// System.Boolean ES3Internal.ES3Reflection_ES3ReflectedMember::get_IsProtected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ES3ReflectedMember_get_IsProtected_mDF889CA849990C710CCE42234C6FAF3BED6EFC9D (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool G_B3_0 = false;
	{
		// public bool IsProtected { get{ return (isProperty ? (propertyInfo.GetGetMethod(true).IsFamily) : fieldInfo.IsFamily); } }
		bool L_0 = __this->get_isProperty_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		FieldInfo_t * L_1 = __this->get_fieldInfo_0();
		NullCheck(L_1);
		bool L_2 = FieldInfo_get_IsFamily_mCF9F0AD403304E6E926E57C6F53E4068FF55F69F(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0027;
	}

IL_0016:
	{
		PropertyInfo_t * L_3 = __this->get_propertyInfo_1();
		NullCheck(L_3);
		MethodInfo_t * L_4 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_3, (bool)1);
		NullCheck(L_4);
		bool L_5 = MethodBase_get_IsFamily_mCDB23637C50656AB94FBD786FFAE991EA4F89B69(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		// public bool IsProtected { get{ return (isProperty ? (propertyInfo.GetGetMethod(true).IsFamily) : fieldInfo.IsFamily); } }
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool ES3ReflectedMember_get_IsProtected_mDF889CA849990C710CCE42234C6FAF3BED6EFC9D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * _thisAdjusted = reinterpret_cast<ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 *>(__this + _offset);
	return ES3ReflectedMember_get_IsProtected_mDF889CA849990C710CCE42234C6FAF3BED6EFC9D(_thisAdjusted, method);
}
// System.Boolean ES3Internal.ES3Reflection_ES3ReflectedMember::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ES3ReflectedMember_get_IsStatic_m0C46CAAC1688C66DA71062A95B999FD23EF90982 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool G_B3_0 = false;
	{
		// public bool IsStatic { get{ return (isProperty ? (propertyInfo.GetGetMethod(true).IsStatic) : fieldInfo.IsStatic); } }
		bool L_0 = __this->get_isProperty_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		FieldInfo_t * L_1 = __this->get_fieldInfo_0();
		NullCheck(L_1);
		bool L_2 = FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0027;
	}

IL_0016:
	{
		PropertyInfo_t * L_3 = __this->get_propertyInfo_1();
		NullCheck(L_3);
		MethodInfo_t * L_4 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_3, (bool)1);
		NullCheck(L_4);
		bool L_5 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		// public bool IsStatic { get{ return (isProperty ? (propertyInfo.GetGetMethod(true).IsStatic) : fieldInfo.IsStatic); } }
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool ES3ReflectedMember_get_IsStatic_m0C46CAAC1688C66DA71062A95B999FD23EF90982_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * _thisAdjusted = reinterpret_cast<ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 *>(__this + _offset);
	return ES3ReflectedMember_get_IsStatic_m0C46CAAC1688C66DA71062A95B999FD23EF90982(_thisAdjusted, method);
}
// System.Void ES3Internal.ES3Reflection_ES3ReflectedMember::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ReflectedMember__ctor_m7204A70A3BE0CDF7F3D393356B103F6059505198 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, RuntimeObject * ___fieldPropertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ES3ReflectedMember__ctor_m7204A70A3BE0CDF7F3D393356B103F6059505198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(fieldPropertyInfo == null)
		RuntimeObject * L_0 = ___fieldPropertyInfo0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// this.propertyInfo = null;
		__this->set_propertyInfo_1((PropertyInfo_t *)NULL);
		// this.fieldInfo = null;
		__this->set_fieldInfo_0((FieldInfo_t *)NULL);
		// isProperty = false;
		__this->set_isProperty_2((bool)0);
		// return;
		goto IL_0072;
	}

IL_0021:
	{
		// isProperty = ES3Reflection.IsAssignableFrom(typeof(PropertyInfo), fieldPropertyInfo.GetType());
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (PropertyInfo_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___fieldPropertyInfo0;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ES3Reflection_tA17C769A6B440CD1CE0A22DE1FC9971FA09D071A_il2cpp_TypeInfo_var);
		bool L_6 = ES3Reflection_IsAssignableFrom_m8A941FB6429A2C61BAA448B9A2176936C0376622(L_3, L_5, /*hidden argument*/NULL);
		__this->set_isProperty_2(L_6);
		// if(isProperty)
		bool L_7 = __this->get_isProperty_2();
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		// this.propertyInfo = (PropertyInfo)fieldPropertyInfo;
		RuntimeObject * L_9 = ___fieldPropertyInfo0;
		__this->set_propertyInfo_1(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_9, PropertyInfo_t_il2cpp_TypeInfo_var)));
		// this.fieldInfo = null;
		__this->set_fieldInfo_0((FieldInfo_t *)NULL);
		goto IL_0072;
	}

IL_005d:
	{
		// this.fieldInfo = (FieldInfo)fieldPropertyInfo;
		RuntimeObject * L_10 = ___fieldPropertyInfo0;
		__this->set_fieldInfo_0(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_10, FieldInfo_t_il2cpp_TypeInfo_var)));
		// this.propertyInfo = null;
		__this->set_propertyInfo_1((PropertyInfo_t *)NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ES3ReflectedMember__ctor_m7204A70A3BE0CDF7F3D393356B103F6059505198_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___fieldPropertyInfo0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * _thisAdjusted = reinterpret_cast<ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 *>(__this + _offset);
	ES3ReflectedMember__ctor_m7204A70A3BE0CDF7F3D393356B103F6059505198(_thisAdjusted, ___fieldPropertyInfo0, method);
}
// System.Void ES3Internal.ES3Reflection_ES3ReflectedMember::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ReflectedMember_SetValue_m11D74833C619C46139C849D8AE302CD27C7E2661 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if(isProperty)
		bool L_0 = __this->get_isProperty_2();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// propertyInfo.SetValue(obj, value, null);
		PropertyInfo_t * L_2 = __this->get_propertyInfo_1();
		RuntimeObject * L_3 = ___obj0;
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_2);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(26 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_2, L_3, L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		goto IL_002a;
	}

IL_001c:
	{
		// fieldInfo.SetValue(obj, value);
		FieldInfo_t * L_5 = __this->get_fieldInfo_0();
		RuntimeObject * L_6 = ___obj0;
		RuntimeObject * L_7 = ___value1;
		NullCheck(L_5);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ES3ReflectedMember_SetValue_m11D74833C619C46139C849D8AE302CD27C7E2661_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * _thisAdjusted = reinterpret_cast<ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 *>(__this + _offset);
	ES3ReflectedMember_SetValue_m11D74833C619C46139C849D8AE302CD27C7E2661(_thisAdjusted, ___obj0, ___value1, method);
}
// System.Object ES3Internal.ES3Reflection_ES3ReflectedMember::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3ReflectedMember_GetValue_mBC5AB0D0F98F6993255E99D1FC4C58123F49CA69 (ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		// if(isProperty)
		bool L_0 = __this->get_isProperty_2();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// return propertyInfo.GetValue(obj, null);
		PropertyInfo_t * L_2 = __this->get_propertyInfo_1();
		RuntimeObject * L_3 = ___obj0;
		NullCheck(L_2);
		RuntimeObject * L_4 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_2, L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		V_1 = L_4;
		goto IL_002a;
	}

IL_001b:
	{
		// return fieldInfo.GetValue(obj);
		FieldInfo_t * L_5 = __this->get_fieldInfo_0();
		RuntimeObject * L_6 = ___obj0;
		NullCheck(L_5);
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_5, L_6);
		V_1 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * ES3ReflectedMember_GetValue_mBC5AB0D0F98F6993255E99D1FC4C58123F49CA69_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 * _thisAdjusted = reinterpret_cast<ES3ReflectedMember_t09E339CA7E1E8FA072952317AF6C75D0FBB68076 *>(__this + _offset);
	return ES3ReflectedMember_GetValue_mBC5AB0D0F98F6993255E99D1FC4C58123F49CA69(_thisAdjusted, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ES3Internal.ES3Reflection_ES3ReflectedMethod::.ctor(System.Type,System.String,System.Type[],System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ReflectedMethod__ctor_mE208DC67D7CAFB07F30C9944A9899CC7AF012A94 (ES3ReflectedMethod_t84C16BB1FD3B72EA8719EBB310B8582C5EA9B26D * __this, Type_t * ___type0, String_t* ___methodName1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___genericParameters2, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___parameterTypes3, const RuntimeMethod* method)
{
	MethodInfo_t * V_0 = NULL;
	{
		// public ES3ReflectedMethod(Type type, string methodName, Type[] genericParameters, Type[] parameterTypes)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// MethodInfo nonGenericMethod = type.GetMethod(methodName, parameterTypes);
		Type_t * L_0 = ___type0;
		String_t* L_1 = ___methodName1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = ___parameterTypes3;
		NullCheck(L_0);
		MethodInfo_t * L_3 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// this.method = nonGenericMethod.MakeGenericMethod(genericParameters);
		MethodInfo_t * L_4 = V_0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_5 = ___genericParameters2;
		NullCheck(L_4);
		MethodInfo_t * L_6 = VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(41 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_4, L_5);
		__this->set_method_0(L_6);
		// }
		return;
	}
}
// System.Void ES3Internal.ES3Reflection_ES3ReflectedMethod::.ctor(System.Type,System.String,System.Type[],System.Type[],System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ReflectedMethod__ctor_m72DE298C113AF52FC2AEB0884716B62F73E972B6 (ES3ReflectedMethod_t84C16BB1FD3B72EA8719EBB310B8582C5EA9B26D * __this, Type_t * ___type0, String_t* ___methodName1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___genericParameters2, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___parameterTypes3, int32_t ___bindingAttr4, const RuntimeMethod* method)
{
	MethodInfo_t * V_0 = NULL;
	{
		// public ES3ReflectedMethod(Type type, string methodName, Type[] genericParameters, Type[] parameterTypes, BindingFlags bindingAttr)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// MethodInfo nonGenericMethod = type.GetMethod(methodName, bindingAttr, null, parameterTypes, null);
		Type_t * L_0 = ___type0;
		String_t* L_1 = ___methodName1;
		int32_t L_2 = ___bindingAttr4;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = ___parameterTypes3;
		NullCheck(L_0);
		MethodInfo_t * L_4 = Type_GetMethod_m69EE86B5A87244C925333CCF1B6D6B9BCFED8A89(L_0, L_1, L_2, (Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 *)NULL, L_3, (ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)(ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		// this.method = nonGenericMethod.MakeGenericMethod(genericParameters);
		MethodInfo_t * L_5 = V_0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = ___genericParameters2;
		NullCheck(L_5);
		MethodInfo_t * L_7 = VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(41 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_5, L_6);
		__this->set_method_0(L_7);
		// }
		return;
	}
}
// System.Object ES3Internal.ES3Reflection_ES3ReflectedMethod::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3ReflectedMethod_Invoke_mC8BDE582F43662AB5AC399BA9DF1F6E8B4C88FD8 (ES3ReflectedMethod_t84C16BB1FD3B72EA8719EBB310B8582C5EA9B26D * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// return method.Invoke(obj, parameters);
		MethodInfo_t * L_0 = __this->get_method_0();
		RuntimeObject * L_1 = ___obj0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___parameters1;
		NullCheck(L_0);
		RuntimeObject * L_3 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		RuntimeObject * L_4 = V_0;
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
// System.Void ES3Spreadsheet_Index::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Index__ctor_mEBFD8FC797F32CB6A977E8E8D1E482482B76D206 (Index_t00BB46EA4FF5323BD9B8B9799F1959930619E4B8 * __this, int32_t ___col0, int32_t ___row1, const RuntimeMethod* method)
{
	{
		// this.col = col;
		int32_t L_0 = ___col0;
		__this->set_col_0(L_0);
		// this.row = row;
		int32_t L_1 = ___row1;
		__this->set_row_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Index__ctor_mEBFD8FC797F32CB6A977E8E8D1E482482B76D206_AdjustorThunk (RuntimeObject * __this, int32_t ___col0, int32_t ___row1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Index_t00BB46EA4FF5323BD9B8B9799F1959930619E4B8 * _thisAdjusted = reinterpret_cast<Index_t00BB46EA4FF5323BD9B8B9799F1959930619E4B8 *>(__this + _offset);
	Index__ctor_mEBFD8FC797F32CB6A977E8E8D1E482482B76D206(_thisAdjusted, ___col0, ___row1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ES3Internal.ES3WebClass_<SendWebRequest>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebRequestU3Ed__18__ctor_mDB615C81803EFC34B9E532A0F1379B8F9FFC9C56 (U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ES3Internal.ES3WebClass_<SendWebRequest>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebRequestU3Ed__18_System_IDisposable_Dispose_m32FDED4567A65B7665DA22193B08BBC0AFCF07BA (U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ES3Internal.ES3WebClass_<SendWebRequest>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendWebRequestU3Ed__18_MoveNext_m3320353DC503D01FEA3141D676A85B594A49F927 (U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7 * __this, const RuntimeMethod* method)
{
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
		goto IL_004b;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _webRequest = webRequest;
		ES3WebClass_tCA445659F9CDDFC9091BA2B8B5051E6553F7E87C * L_3 = __this->get_U3CU3E4__this_3();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = __this->get_webRequest_2();
		NullCheck(L_3);
		L_3->set__webRequest_3(L_4);
		// yield return webRequest.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = __this->get_webRequest_2();
		NullCheck(L_5);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_6 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object ES3Internal.ES3WebClass_<SendWebRequest>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSendWebRequestU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA17F911F31C8AF3D6A62F42DEEB3B08F442703ED (U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ES3Internal.ES3WebClass_<SendWebRequest>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebRequestU3Ed__18_System_Collections_IEnumerator_Reset_m0E5F54499F28C2F135E5FAF0F9DDE9D2AD53B869 (U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSendWebRequestU3Ed__18_System_Collections_IEnumerator_Reset_m0E5F54499F28C2F135E5FAF0F9DDE9D2AD53B869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CSendWebRequestU3Ed__18_System_Collections_IEnumerator_Reset_m0E5F54499F28C2F135E5FAF0F9DDE9D2AD53B869_RuntimeMethod_var);
	}
}
// System.Object ES3Internal.ES3WebClass_<SendWebRequest>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSendWebRequestU3Ed__18_System_Collections_IEnumerator_get_Current_m89F54B252C37FFFF5937D09549E20DA62334789C (U3CSendWebRequestU3Ed__18_t5E3851D45A7C9AC6CCCA76ABC99737CD8A66A2E7 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.IAPButton_OnPurchaseCompletedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseCompletedEvent__ctor_mAF2FA60F80970F77BD50571AFFB8A8450B2F3594 (OnPurchaseCompletedEvent_tFDEE10C59F1166BF35283A7C8ACAB966E68B7A00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseCompletedEvent__ctor_mAF2FA60F80970F77BD50571AFFB8A8450B2F3594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E(__this, /*hidden argument*/UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPButton_OnPurchaseFailedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseFailedEvent__ctor_mDA73205260835AF63AABCBC88FF5853298B1F7CB (OnPurchaseFailedEvent_tC220F39895356A91AB33A66E696C0C88C2426EFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseFailedEvent__ctor_mDA73205260835AF63AABCBC88FF5853298B1F7CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423(__this, /*hidden argument*/UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPListener_OnPurchaseCompletedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseCompletedEvent__ctor_m034123EB2CB90B89AFF6740400F21ADF60C4C29C (OnPurchaseCompletedEvent_tDF3FABBEFF021ECE2C6507D50FFE4EEC1D3BA328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseCompletedEvent__ctor_m034123EB2CB90B89AFF6740400F21ADF60C4C29C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E(__this, /*hidden argument*/UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPListener_OnPurchaseFailedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseFailedEvent__ctor_mBF50A7911D08BBADD8BAC84B978ACAA24FDAF386 (OnPurchaseFailedEvent_tD551A0A09633EDBA5C30A72FC44B84B02146CA82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseFailedEvent__ctor_mBF50A7911D08BBADD8BAC84B978ACAA24FDAF386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423(__this, /*hidden argument*/UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423_RuntimeMethod_var);
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
// System.Void ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m2BE7061FC6DEE1BAA04E9C08289EF15D09DAD545 (U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_mE632BB0D83E700D0A7263BAB296729B2699AC23E (U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_m90D0AA9B63FD0DE41CFA68F5DF5629C6BFBB64F3 (U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0088;
	}

IL_001f:
	{
		goto IL_00d1;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00da;
	}

IL_0033:
	{
		// if(reader.overridePropertiesName != null)
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_3 = L_2->get_reader_0();
		NullCheck(L_3);
		String_t* L_4 = L_3->get_overridePropertiesName_2();
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0099;
		}
	}
	{
		// string tempName = reader.overridePropertiesName;
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_7 = L_6->get_reader_0();
		NullCheck(L_7);
		String_t* L_8 = L_7->get_overridePropertiesName_2();
		__this->set_U3CtempNameU3E5__2_4(L_8);
		// reader.overridePropertiesName = null;
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_10 = L_9->get_reader_0();
		NullCheck(L_10);
		L_10->set_overridePropertiesName_2((String_t*)NULL);
		// yield return tempName;
		String_t* L_11 = __this->get_U3CtempNameU3E5__2_4();
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0088:
	{
		__this->set_U3CU3E1__state_0((-1));
		__this->set_U3CtempNameU3E5__2_4((String_t*)NULL);
		goto IL_00d9;
	}

IL_0099:
	{
		// if((propertyName = reader.ReadPropertyName()) == null)
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_12 = __this->get_U3CU3E4__this_2();
		NullCheck(L_12);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_13 = L_12->get_reader_0();
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_13);
		String_t* L_15 = L_14;
		V_3 = L_15;
		__this->set_U3CpropertyNameU3E5__1_3(L_15);
		String_t* L_16 = V_3;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_16) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_00bc;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_00bc:
	{
		// yield return propertyName;
		String_t* L_18 = __this->get_U3CpropertyNameU3E5__1_3();
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00d1:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00d9:
	{
	}

IL_00da:
	{
		// while(true)
		V_4 = (bool)1;
		goto IL_0033;
	}
}
// System.Object ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE5A460D2A0D20AA20F4C39D489A213B055485930 (U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m93021E6CC2E48D8F95690912621D95C647F94EAA (U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m93021E6CC2E48D8F95690912621D95C647F94EAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m93021E6CC2E48D8F95690912621D95C647F94EAA_RuntimeMethod_var);
	}
}
// System.Object ES3Reader_ES3ReaderPropertyEnumerator_<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m9B594F2293BC1A88468CC14D0F1B44B62E5AD598 (U3CGetEnumeratorU3Ed__2_tF5CEA86D4136A5173F3882121A556BA46EFC05E2 * __this, const RuntimeMethod* method)
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
// System.Void ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_mB1692FB52CC81025E4E77C47E38A70B73AA5C9A1 (U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_mE6929B81DD4A8F6CBC25604F55577539A8B3E78A (U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_m7689478C8257AA263C4E6ED83E66D24C27AC18A5 (U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__2_MoveNext_m7689478C8257AA263C4E6ED83E66D24C27AC18A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
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
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00bd;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00da;
	}

IL_0028:
	{
		// string key = reader.ReadPropertyName();
		ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_4 = L_3->get_reader_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_4);
		__this->set_U3CkeyU3E5__1_3(L_5);
		// if(key == null)
		String_t* L_6 = __this->get_U3CkeyU3E5__1_3();
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_004e:
	{
		// Type type = reader.ReadKeyPrefix();
		ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_9 = L_8->get_reader_0();
		NullCheck(L_9);
		Type_t * L_10 = VirtFuncInvoker1< Type_t *, bool >::Invoke(22 /* System.Type ES3Reader::ReadKeyPrefix(System.Boolean) */, L_9, (bool)0);
		__this->set_U3CtypeU3E5__2_4(L_10);
		// byte[] bytes = reader.ReadElement();
		ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA * L_11 = __this->get_U3CU3E4__this_2();
		NullCheck(L_11);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_12 = L_11->get_reader_0();
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(24 /* System.Byte[] ES3Reader::ReadElement(System.Boolean) */, L_12, (bool)0);
		__this->set_U3CbytesU3E5__3_5(L_13);
		// reader.ReadKeySuffix();
		ES3ReaderRawEnumerator_t83B72EAA142058023A4EEC7FE256A4766EDA37BA * L_14 = __this->get_U3CU3E4__this_2();
		NullCheck(L_14);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_15 = L_14->get_reader_0();
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(23 /* System.Void ES3Reader::ReadKeySuffix() */, L_15);
		// yield return new KeyValuePair<string,ES3Data>(key, new ES3Data(type, bytes));
		String_t* L_16 = __this->get_U3CkeyU3E5__1_3();
		Type_t * L_17 = __this->get_U3CtypeU3E5__2_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_U3CbytesU3E5__3_5();
		ES3Data_tDC17F1E2A8719330D2693EFE9245B3B9624508B8  L_19;
		memset((&L_19), 0, sizeof(L_19));
		ES3Data__ctor_m37B458D88E074F99FB2177938F141DED4AEE6591((&L_19), L_17, L_18, /*hidden argument*/NULL);
		KeyValuePair_2_tC759B909207254DA11DB80E27D53C26D4B323D34  L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m436CACA42B1C2F19C009D462ED994DFEA307A79F((&L_20), L_16, L_19, /*hidden argument*/KeyValuePair_2__ctor_m436CACA42B1C2F19C009D462ED994DFEA307A79F_RuntimeMethod_var);
		KeyValuePair_2_tC759B909207254DA11DB80E27D53C26D4B323D34  L_21 = L_20;
		RuntimeObject * L_22 = Box(KeyValuePair_2_tC759B909207254DA11DB80E27D53C26D4B323D34_il2cpp_TypeInfo_var, &L_21);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00bd:
	{
		__this->set_U3CU3E1__state_0((-1));
		__this->set_U3CkeyU3E5__1_3((String_t*)NULL);
		__this->set_U3CtypeU3E5__2_4((Type_t *)NULL);
		__this->set_U3CbytesU3E5__3_5((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
	}

IL_00da:
	{
		// while(true)
		V_2 = (bool)1;
		goto IL_0028;
	}
}
// System.Object ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD10E43C2FB3B816B97122DB58BDA83E623C7125E (U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mDD50228DD0C92A1ECD42D1C1D73557F792FB018C (U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mDD50228DD0C92A1ECD42D1C1D73557F792FB018C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mDD50228DD0C92A1ECD42D1C1D73557F792FB018C_RuntimeMethod_var);
	}
}
// System.Object ES3Reader_ES3ReaderRawEnumerator_<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m81870EBA60839DD51558B578D539549558042059 (U3CGetEnumeratorU3Ed__2_t74DAAC8FDAD8F6DCABB4EF731054EA03DA80AFB8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m9FB8CF0F4C684DF0F6CE4F9BE0E0F80216B06268_gshared_inline (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Key_m8100BF3E3F64307412AF522908A74E48B8A7BDAD_gshared_inline (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = (int64_t)__this->get_key_0();
		return (int64_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Value_m1799ACBFF8CD1B0B0AA8B7A7DC684AD7884DBD07_gshared_inline (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = (int64_t)__this->get_value_1();
		return (int64_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ef__AnonymousType0_2_get_type_m23ECC30CA3636383B4B54290460A13D0F6ED4EB6_gshared_inline (U3CU3Ef__AnonymousType0_2_t4CC11F4D4043B6258EA46772690B15F284CAD3D9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CtypeU3Ei__Field_1();
		return (RuntimeObject *)L_0;
	}
}
