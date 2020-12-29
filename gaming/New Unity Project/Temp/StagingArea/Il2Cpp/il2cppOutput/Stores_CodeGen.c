#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"



extern const RuntimeMethod* AppleStoreImpl_MessageCallback_m58F85651C958C901D09778332EFDA47EC8EDE8AA_RuntimeMethod_var;
extern const RuntimeMethod* FacebookStoreImpl_MessageCallback_m07158CE4BA5566E17C3228CD6B47B31673F3D1BC_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 UnityEngine.RuntimePlatform Uniject.IUtil::get_platform()
// 0x00000002 System.String Uniject.IUtil::get_persistentDataPath()
// 0x00000003 System.String Uniject.IUtil::get_cloudProjectId()
// 0x00000004 System.String Uniject.IUtil::get_unityVersion()
// 0x00000005 System.String Uniject.IUtil::get_userId()
// 0x00000006 System.String Uniject.IUtil::get_gameVersion()
// 0x00000007 System.UInt64 Uniject.IUtil::get_sessionId()
// 0x00000008 System.String Uniject.IUtil::get_operatingSystem()
// 0x00000009 System.Int32 Uniject.IUtil::get_screenWidth()
// 0x0000000A System.Int32 Uniject.IUtil::get_screenHeight()
// 0x0000000B System.Single Uniject.IUtil::get_screenDpi()
// 0x0000000C System.String Uniject.IUtil::get_screenOrientation()
// 0x0000000D System.Object Uniject.IUtil::InitiateCoroutine(System.Collections.IEnumerator)
// 0x0000000E System.Void Uniject.IUtil::InitiateCoroutine(System.Collections.IEnumerator,System.Int32)
// 0x0000000F System.Void Uniject.IUtil::RunOnMainThread(System.Action)
// 0x00000010 System.Void Uniject.IUtil::AddPauseListener(System.Action`1<System.Boolean>)
// 0x00000011 System.Boolean Uniject.IUtil::IsClassOrSubclass(System.Type,System.Type)
// 0x00000012 System.Void UnityEngine.Purchasing.AndroidJavaStore::.ctor(UnityEngine.AndroidJavaObject)
extern void AndroidJavaStore__ctor_m5F76E2C65DB8F33C6F4C9268846BD46A60E01EA3 (void);
// 0x00000013 System.Void UnityEngine.Purchasing.AndroidJavaStore::RetrieveProducts(System.String)
extern void AndroidJavaStore_RetrieveProducts_mED05D8F6B1AA9AD25A302E1F1D0BA90CCB2F9702 (void);
// 0x00000014 System.Void UnityEngine.Purchasing.AndroidJavaStore::Purchase(System.String,System.String)
extern void AndroidJavaStore_Purchase_m8993E3A72A2C0421484F5297286E5A81383E78EB (void);
// 0x00000015 System.Void UnityEngine.Purchasing.AndroidJavaStore::FinishTransaction(System.String,System.String)
extern void AndroidJavaStore_FinishTransaction_m655272A84D2AFAE348106D54A93408AB06BB32BD (void);
// 0x00000016 System.Void UnityEngine.Purchasing.IUnityCallback::OnSetupFailed(System.String)
// 0x00000017 System.Void UnityEngine.Purchasing.IUnityCallback::OnProductsRetrieved(System.String)
// 0x00000018 System.Void UnityEngine.Purchasing.IUnityCallback::OnPurchaseSucceeded(System.String,System.String,System.String)
// 0x00000019 System.Void UnityEngine.Purchasing.IUnityCallback::OnPurchaseFailed(System.String)
// 0x0000001A System.Void UnityEngine.Purchasing.JavaBridge::.ctor(UnityEngine.Purchasing.IUnityCallback)
extern void JavaBridge__ctor_m1EADD63D348081B7319D16BEFB1A9267DF7EE18A (void);
// 0x0000001B System.Void UnityEngine.Purchasing.JavaBridge::.ctor(UnityEngine.Purchasing.IUnityCallback,System.String)
extern void JavaBridge__ctor_mAF862BB26A6A3ACA8CD2CC02C3D8AE973F82CFB2 (void);
// 0x0000001C System.Void UnityEngine.Purchasing.JavaBridge::OnSetupFailed(System.String)
extern void JavaBridge_OnSetupFailed_m91E3E370D8CAAE69343A3300D8E0B3FB7CB7A422 (void);
// 0x0000001D System.Void UnityEngine.Purchasing.JavaBridge::OnProductsRetrieved(System.String)
extern void JavaBridge_OnProductsRetrieved_mEA4A5C860DD9A073D659EAB1F20E7C7D4A5454B3 (void);
// 0x0000001E System.Void UnityEngine.Purchasing.JavaBridge::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void JavaBridge_OnPurchaseSucceeded_m89F89BB812C6D0C818480C5EC6F2DF5DDEF37014 (void);
// 0x0000001F System.Void UnityEngine.Purchasing.JavaBridge::OnPurchaseFailed(System.String)
extern void JavaBridge_OnPurchaseFailed_mD9A4155B9D01DD33B3E4497662FC915692633DA3 (void);
// 0x00000020 System.String UnityEngine.Purchasing.SerializationExtensions::TryGetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern void SerializationExtensions_TryGetString_mA1D254C4756372BB26314AB95CF1F58F4640ECCE (void);
// 0x00000021 System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDef(UnityEngine.Purchasing.ProductDefinition)
extern void JSONSerializer_SerializeProductDef_m7121479DE6333CC9A66D119EFB45D6E1DF77F10D (void);
// 0x00000022 System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDefs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>)
extern void JSONSerializer_SerializeProductDefs_m78431207AF5F13A19E626036CB09389BC5C650E8 (void);
// 0x00000023 System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDescs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern void JSONSerializer_SerializeProductDescs_m01666634AD4FB71A400DF54D04ED08586AFCFCB4 (void);
// 0x00000024 System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.JSONSerializer::DeserializeProductDescriptions(System.String)
extern void JSONSerializer_DeserializeProductDescriptions_m167475E1DAB42D60A42F76ECB525788E45B46EE3 (void);
// 0x00000025 UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONSerializer::DeserializeFailureReason(System.String)
extern void JSONSerializer_DeserializeFailureReason_m8AB88644628EE2DA9329574D73AA819D2BFD021C (void);
// 0x00000026 UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.JSONSerializer::DeserializeMetadata(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void JSONSerializer_DeserializeMetadata_m0EA647C5FCFC9280098CF934B76C5048E4CFCB64 (void);
// 0x00000027 System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductDef(UnityEngine.Purchasing.ProductDefinition)
extern void JSONSerializer_EncodeProductDef_m092885B4ADC61EDBF59BAC932F136542E7E1F0C9 (void);
// 0x00000028 System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductDesc(UnityEngine.Purchasing.Extension.ProductDescription)
extern void JSONSerializer_EncodeProductDesc_m53D8228D9E5C33F836910A56EB9CB9E544D39BC8 (void);
// 0x00000029 System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductMeta(UnityEngine.Purchasing.ProductMetadata)
extern void JSONSerializer_EncodeProductMeta_mD215607B633D211BC89306A0F64FB0D6E01E688E (void);
// 0x0000002A System.Void UnityEngine.Purchasing.ScriptingStoreCallback::.ctor(UnityEngine.Purchasing.Extension.IStoreCallback,Uniject.IUtil)
extern void ScriptingStoreCallback__ctor_m222C2DA1C4585A6560084885AE52D37FE15E277C (void);
// 0x0000002B UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.ScriptingStoreCallback::get_products()
extern void ScriptingStoreCallback_get_products_mB7E71C1863CBB024C07221FB27A100F261CDD8C9 (void);
// 0x0000002C System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern void ScriptingStoreCallback_OnSetupFailed_mE0A3488E5F48E2140C85B250086F6BD372932FE1 (void);
// 0x0000002D System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern void ScriptingStoreCallback_OnProductsRetrieved_m2AAEB684A0890BC35E0B9C20CEFD9032B125ED0B (void);
// 0x0000002E System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void ScriptingStoreCallback_OnPurchaseSucceeded_mF28C990DA8EF97A31E9DEFF1CC3403FC398366BF (void);
// 0x0000002F System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern void ScriptingStoreCallback_OnPurchaseFailed_m3DC9050425B59FAE70CDB35C5D671E11E5D97D22 (void);
// 0x00000030 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_mCAD46EA5BAAAE466EC7FEEF0123E768C4AED83E6 (void);
// 0x00000031 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0::<OnSetupFailed>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_mBFA9EC335F595ECBB5E5881550B0BEDF12CF6FBA (void);
// 0x00000032 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m90B8C82B0CE291CDE483811B04EA42ED0173EEEB (void);
// 0x00000033 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0::<OnProductsRetrieved>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m3DD4203BD8EEDE5995997F06D172CBEBC2DF693A (void);
// 0x00000034 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_mB18203F20D588E1BC9BFB3CB731C04CED2F2B9E6 (void);
// 0x00000035 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::<OnPurchaseSucceeded>b__0()
extern void U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_mDE4398568DE9EC940FC042D38FE7F3BB401077DD (void);
// 0x00000036 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m458EAB3C0C7F0916B5FBF80E84D4FD881CB766E4 (void);
// 0x00000037 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass9_0::<OnPurchaseFailed>b__0()
extern void U3CU3Ec__DisplayClass9_0_U3COnPurchaseFailedU3Eb__0_m0DB5F3DEE86D1669E6FD76E2042D6C6FF86E8140 (void);
// 0x00000038 System.Void UnityEngine.Purchasing.ScriptingUnityCallback::.ctor(UnityEngine.Purchasing.IUnityCallback,Uniject.IUtil)
extern void ScriptingUnityCallback__ctor_m978BCB02379D987773B69E3503C4F669BE5CC099 (void);
// 0x00000039 System.Void UnityEngine.Purchasing.ScriptingUnityCallback::OnSetupFailed(System.String)
extern void ScriptingUnityCallback_OnSetupFailed_m8F3EC57CADEC7BBE5145EB22BF62928BAA4CC0E6 (void);
// 0x0000003A System.Void UnityEngine.Purchasing.ScriptingUnityCallback::OnProductsRetrieved(System.String)
extern void ScriptingUnityCallback_OnProductsRetrieved_m905824FDE87412181D9F4D32B72C0806C2251706 (void);
// 0x0000003B System.Void UnityEngine.Purchasing.ScriptingUnityCallback::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void ScriptingUnityCallback_OnPurchaseSucceeded_m3EE75B6612F931273BF71A0679156C8976DEF5FE (void);
// 0x0000003C System.Void UnityEngine.Purchasing.ScriptingUnityCallback::OnPurchaseFailed(System.String)
extern void ScriptingUnityCallback_OnPurchaseFailed_m14088242ADF0EAE751031FC5CA6FD20690BEC69C (void);
// 0x0000003D System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_mE00EB70073A750D81B067409BABD55B0C5FBD24C (void);
// 0x0000003E System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass3_0::<OnSetupFailed>b__0()
extern void U3CU3Ec__DisplayClass3_0_U3COnSetupFailedU3Eb__0_mE77E7D74CF363C9057F8B3EBB6DC777250423BF9 (void);
// 0x0000003F System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mFE3DEC2FD3C0BF62CD036A2B8340C1DD0F0D443A (void);
// 0x00000040 System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass4_0::<OnProductsRetrieved>b__0()
extern void U3CU3Ec__DisplayClass4_0_U3COnProductsRetrievedU3Eb__0_m9CC85BA8C6D061C53390B35167FFA5ECD73F0B1B (void);
// 0x00000041 System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m7109250E5751DB60FA734C15A560DC7C3B38C42B (void);
// 0x00000042 System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass5_0::<OnPurchaseSucceeded>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3COnPurchaseSucceededU3Eb__0_m019E5AEFC2A76F73527D673F01E782B410EE5E2B (void);
// 0x00000043 System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mE17005CFA1B140C66AD3884C7572B854555CA590 (void);
// 0x00000044 System.Void UnityEngine.Purchasing.ScriptingUnityCallback_<>c__DisplayClass6_0::<OnPurchaseFailed>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3COnPurchaseFailedU3Eb__0_m8735482CD1DAE2F2C98D77548F1D2EDE455EC86B (void);
// 0x00000045 System.Void UnityEngine.Purchasing.AmazonAppStoreStoreExtensions::.ctor(UnityEngine.AndroidJavaObject)
extern void AmazonAppStoreStoreExtensions__ctor_m0E07A408DD19C3C5A07FB0E7EEFC26C64A94E250 (void);
// 0x00000046 System.Void UnityEngine.Purchasing.FakeAmazonExtensions::.ctor()
extern void FakeAmazonExtensions__ctor_m62F68C4B13931D4C96426FE7BA38C3552AE24178 (void);
// 0x00000047 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.ListExtension::ToJava(System.Collections.Generic.List`1<System.String>)
extern void ListExtension_ToJava_m2CA2715CC6F3FD413274D8C64934392887A80A60 (void);
// 0x00000048 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.ListExtension::ToJavaArray(System.Collections.Generic.List`1<System.String>)
extern void ListExtension_ToJavaArray_m7CC605D0878CE4099C6D7C1B3EA18E0026A00188 (void);
// 0x00000049 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.UnityActivity::GetUnityPlayerClass()
extern void UnityActivity_GetUnityPlayerClass_m79E6A7344C141D41D1CF3A3AAAA5D851C9B70896 (void);
// 0x0000004A UnityEngine.AndroidJavaObject UnityEngine.Purchasing.UnityActivity::GetCurrentActivity()
extern void UnityActivity_GetCurrentActivity_m0A189C445F71C361C96784CA2C15569A4D40BEBF (void);
// 0x0000004B System.Boolean UnityEngine.Purchasing.ReflectionUtils::HasMethodInInterface(System.Object,System.String)
extern void ReflectionUtils_HasMethodInInterface_m10E5FF4485C8E01931FED131EF87BF64871EB6AA (void);
// 0x0000004C System.Reflection.MethodInfo UnityEngine.Purchasing.ReflectionUtils::GetMethod(System.Object,System.String)
extern void ReflectionUtils_GetMethod_m43BE07BB570CA2227171BE32044FD92E367CFDB0 (void);
// 0x0000004D System.Void UnityEngine.Purchasing.ReflectionUtils::InvokeMethod(System.Object,System.String,System.Object[])
extern void ReflectionUtils_InvokeMethod_m49D0D9BCBFA75742B735B9152126C37B2D436186 (void);
// 0x0000004E System.Void UnityEngine.Purchasing.FakeGooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void FakeGooglePlayStoreExtensions_RestoreTransactions_mA338A2E8867285BFC698653801C07274FFBCC429 (void);
// 0x0000004F System.Void UnityEngine.Purchasing.FakeGooglePlayStoreExtensions::.ctor()
extern void FakeGooglePlayStoreExtensions__ctor_mD3EC798ABB4DA2F6C89E67209710EED4A62208AC (void);
// 0x00000050 System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayPurchaseCallback_SetStoreCallback_m451838178BD79CF0D71571CB062A325612C46A8C (void);
// 0x00000051 System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::SetStoreExtension(UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal)
extern void GooglePlayPurchaseCallback_SetStoreExtension_m5A34E1446839ED5F75BA774929DC26546F61C092 (void);
// 0x00000052 System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::OnPurchaseSuccessful(System.String,System.String,System.String)
extern void GooglePlayPurchaseCallback_OnPurchaseSuccessful_m4DC421CA52EED162A14C4DBCB75D73CC95A4276A (void);
// 0x00000053 System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern void GooglePlayPurchaseCallback_OnPurchaseFailed_mE278015512CD01DD7DC17B22538F651D214B2F6A (void);
// 0x00000054 System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::NotifyDeferredPurchase(System.String,System.String)
extern void GooglePlayPurchaseCallback_NotifyDeferredPurchase_m0E2BF059BA6D5EE72D534D7FEA71D9F6F3828D08 (void);
// 0x00000055 System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::.ctor()
extern void GooglePlayPurchaseCallback__ctor_mE4374BEA366D94AF8F40EFA78D3F7FC33010A7EA (void);
// 0x00000056 System.Void UnityEngine.Purchasing.GooglePlayStore::.ctor(UnityEngine.Purchasing.IGooglePlayStoreRetrieveProductsService,UnityEngine.Purchasing.IGooglePlayStorePurchaseService,UnityEngine.Purchasing.IGoogleFetchPurchases,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback,UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal,Uniject.IUtil)
extern void GooglePlayStore__ctor_m7DD97D0DC4AF60E40AB5741C73B047AE1B81847D (void);
// 0x00000057 System.Void UnityEngine.Purchasing.GooglePlayStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStore_Initialize_mEBB0D614AC1BD8D1915B56DD115D184FD790C26B (void);
// 0x00000058 System.Void UnityEngine.Purchasing.GooglePlayStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void GooglePlayStore_RetrieveProducts_m71AE14BCBC7A928CECE517D42C6ACA237F3C1F65 (void);
// 0x00000059 System.Void UnityEngine.Purchasing.GooglePlayStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void GooglePlayStore_Purchase_mFCC3929E2BFA5E7604F56AE18798618A86BD51FE (void);
// 0x0000005A System.Void UnityEngine.Purchasing.GooglePlayStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void GooglePlayStore_FinishTransaction_mF0ECEAF45B4E88FC09771E34ABB8D0EB2E1560F8 (void);
// 0x0000005B System.Void UnityEngine.Purchasing.GooglePlayStore::OnPause(System.Boolean)
extern void GooglePlayStore_OnPause_mB4286A04C5AA98D69D816CADEF793804F7B7BFC7 (void);
// 0x0000005C System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService)
extern void GooglePlayStoreExtensions__ctor_m04C3ED48CDE3EBF0B2CCEE69B71357F44B11AC62 (void);
// 0x0000005D System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void GooglePlayStoreExtensions_RestoreTransactions_m214123C54473F67BD3855D811AE13C222ACF4948 (void);
// 0x0000005E System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStoreExtensions_SetStoreCallback_m765337EC299A72C857E812DA0E87BDE41A51C7C6 (void);
// 0x0000005F System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions::NotifyDeferredPurchase(System.String,System.String)
extern void GooglePlayStoreExtensions_NotifyDeferredPurchase_mAC2D3F9B4E4EA7D78B47B7F22A388386423F63A0 (void);
// 0x00000060 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions_<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m0DB70856B62108FB9BD4862146496C8F529051AA (void);
// 0x00000061 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions_<>c__DisplayClass8_0::<RestoreTransactions>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass8_0_U3CRestoreTransactionsU3Eb__0_mA93D4A676104B0EB8142101FF84CCF93A01070A9 (void);
// 0x00000062 UnityEngine.Purchasing.Product UnityEngine.Purchasing.StoreCallbackExtensionMethods::FindProductById(UnityEngine.Purchasing.Extension.IStoreCallback,System.String)
extern void StoreCallbackExtensionMethods_FindProductById_m10DD659986419553DD4A7780575CF8673750E202 (void);
// 0x00000063 System.Collections.Generic.HashSet`1<UnityEngine.AndroidJavaObject> UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::GetCachedQueriedSkus()
extern void GoogleCachedQuerySkuDetailsService_GetCachedQueriedSkus_mC85CC218E5DCACF2DE980A86DFC7E90D9FD121DF (void);
// 0x00000064 System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::ContainsSku(System.String)
extern void GoogleCachedQuerySkuDetailsService_ContainsSku_m78C588848F64A3BF0B769FC31590BAF21A870C6E (void);
// 0x00000065 System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::AddCachedQueriedSkus(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void GoogleCachedQuerySkuDetailsService_AddCachedQueriedSkus_mAA9C1FC1084D2E08AC0450CABFB56EF06642DEED (void);
// 0x00000066 System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::UpdateCachedQueriedSku(System.String,UnityEngine.AndroidJavaObject)
extern void GoogleCachedQuerySkuDetailsService_UpdateCachedQueriedSku_mBE0AD1CA40B98664E058D59386924A4F3B09A45C (void);
// 0x00000067 System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::.ctor()
extern void GoogleCachedQuerySkuDetailsService__ctor_m9FE87EDA048AF341303B1FA5D333499C226C74F3 (void);
// 0x00000068 System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mB825A1428AFE583FF0B2C9FCB5B71C34C8F61F21 (void);
// 0x00000069 System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass2_0::<ContainsSku>b__0(UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass2_0_U3CContainsSkuU3Eb__0_m13EBEAB4E48019EC24614D197C83CEEF5F580989 (void);
// 0x0000006A System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m9D742816A4DA4DE0BAF3AEFC5524D419E92E7327 (void);
// 0x0000006B System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass4_0::<UpdateCachedQueriedSku>b__0(UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass4_0_U3CUpdateCachedQueriedSkuU3Eb__0_m387448638A6158D9D413EFC8F76D9B2D0A035FE1 (void);
// 0x0000006C System.Void UnityEngine.Purchasing.GoogleFinishTransactionService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService)
extern void GoogleFinishTransactionService__ctor_m84C354CB4686A4329414FB06EF9327610E729128 (void);
// 0x0000006D System.Void UnityEngine.Purchasing.GoogleFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GoogleFinishTransactionService_FinishTransaction_mE7D56A13750B02DDD672346BC2BA0DA4FEAC9176 (void);
// 0x0000006E System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean> UnityEngine.Purchasing.GoogleFinishTransactionService::PurchaseNeedsAcknowledgement(UnityEngine.Purchasing.ProductDefinition)
extern void GoogleFinishTransactionService_PurchaseNeedsAcknowledgement_mA965E7B825EB77A26623CBBC1D470484657D0C49 (void);
// 0x0000006F System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_mD0EE7285E5348526453463C0E38FC360D46803FF (void);
// 0x00000070 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::<FinishTransaction>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass3_0_U3CFinishTransactionU3Eb__0_mFC30A9A5BC70E79C52FC7E10E0CE9B0DD774B537 (void);
// 0x00000071 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m4A65ABDED98348430C4EA68D4CC35D00F4785591 (void);
// 0x00000072 System.Boolean UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass4_0::<PurchaseNeedsAcknowledgement>b__0(UnityEngine.Purchasing.Models.GooglePurchase)
extern void U3CU3Ec__DisplayClass4_0_U3CPurchaseNeedsAcknowledgementU3Eb__0_mE750F693E134F278FD59C0655D2D7A9B100342AC (void);
// 0x00000073 System.String UnityEngine.Purchasing.GoogleLastKnownProductService::GetLastKnownProductId()
extern void GoogleLastKnownProductService_GetLastKnownProductId_m36732FBAA0230DA85C41F4E303C19F5EC26FDC91 (void);
// 0x00000074 System.Void UnityEngine.Purchasing.GoogleLastKnownProductService::SetLastKnownProductId(System.String)
extern void GoogleLastKnownProductService_SetLastKnownProductId_m3ABD154B31AC3833FC92114531F9B49384FDBBF9 (void);
// 0x00000075 System.Void UnityEngine.Purchasing.GoogleLastKnownProductService::.ctor()
extern void GoogleLastKnownProductService__ctor_m5D5158E5D78B4739510D082EC8D8F71FEFD23DD8 (void);
// 0x00000076 System.Void UnityEngine.Purchasing.GooglePlayStoreService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseService,UnityEngine.Purchasing.Interfaces.IGoogleFinishTransactionService,UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService,UnityEngine.Purchasing.Interfaces.IBillingClientStateListener,UnityEngine.Purchasing.IGooglePriceChangeService,UnityEngine.Purchasing.Interfaces.IGoogleLastKnownProductService)
extern void GooglePlayStoreService__ctor_m798F1A6206B5FA1A2052A6EF2D481AFD259DD82D (void);
// 0x00000077 System.Void UnityEngine.Purchasing.GooglePlayStoreService::InitConnectionWithGooglePlay(UnityEngine.Purchasing.Interfaces.IBillingClientStateListener)
extern void GooglePlayStoreService_InitConnectionWithGooglePlay_m587CAD67628DF207DF0911B874A16B964D1AE411 (void);
// 0x00000078 System.Void UnityEngine.Purchasing.GooglePlayStoreService::OnConnected()
extern void GooglePlayStoreService_OnConnected_m6A31E1FD4C8B68F55B4D043133A69E6BDE3FAB7D (void);
// 0x00000079 System.Void UnityEngine.Purchasing.GooglePlayStoreService::DequeueQueryProducts()
extern void GooglePlayStoreService_DequeueQueryProducts_mFE6A994D931E94BCCBE49518D2B043BDA5235B0B (void);
// 0x0000007A System.Void UnityEngine.Purchasing.GooglePlayStoreService::DequeueFetchPurchases()
extern void GooglePlayStoreService_DequeueFetchPurchases_mA1C4D52C61F4155DBE89925413456C06B11259F7 (void);
// 0x0000007B System.Void UnityEngine.Purchasing.GooglePlayStoreService::OnDisconnected()
extern void GooglePlayStoreService_OnDisconnected_m1E652D2C1EE2C2B3FCBFB3918C0B06923AF2A4B8 (void);
// 0x0000007C System.Void UnityEngine.Purchasing.GooglePlayStoreService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
extern void GooglePlayStoreService_RetrieveProducts_mD0D07E08F8128DB3FEEB8CA87BB6F8E6EA5AE6D7 (void);
// 0x0000007D System.Void UnityEngine.Purchasing.GooglePlayStoreService::Purchase(UnityEngine.Purchasing.ProductDefinition)
extern void GooglePlayStoreService_Purchase_m71CEA6A7DA84A1B91B7EFC46824788075477A765 (void);
// 0x0000007E System.Void UnityEngine.Purchasing.GooglePlayStoreService::Purchase(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
extern void GooglePlayStoreService_Purchase_mA58B4C60D7D8AE287FBD97E9967EB7F64358C9DD (void);
// 0x0000007F System.Void UnityEngine.Purchasing.GooglePlayStoreService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GooglePlayStoreService_FinishTransaction_mFE7A66A73296CFD70FF0FC58D3BE5B8294415098 (void);
// 0x00000080 System.Void UnityEngine.Purchasing.GooglePlayStoreService::FetchPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
extern void GooglePlayStoreService_FetchPurchases_m95D0DE131CAFD419FD5E3E2EAADF79D9B4829CF3 (void);
// 0x00000081 System.Void UnityEngine.Purchasing.GooglePriceChangeService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePriceChangeService__ctor_m526ACD132D45EDC4E82242CC17D7493E93FD7D5E (void);
// 0x00000082 System.Void UnityEngine.Purchasing.GooglePurchaseService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback,UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService)
extern void GooglePurchaseService__ctor_m13B8DF32B5EF753AD6A67CD6199C2EA93E9E5C7A (void);
// 0x00000083 System.Void UnityEngine.Purchasing.GooglePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
extern void GooglePurchaseService_Purchase_mCB870662B69BA3F56FBE51B2EA63AA4667C83897 (void);
// 0x00000084 System.Void UnityEngine.Purchasing.GooglePurchaseService::OnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,UnityEngine.Purchasing.Product,System.Int32)
extern void GooglePurchaseService_OnQuerySkuDetailsResponse_m1443302EF8ACAAE16FD9D43A522BB4F81E3A629B (void);
// 0x00000085 System.Void UnityEngine.Purchasing.GooglePurchaseService::VerifyAndWarnIfMoreThanOneSku(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseService_VerifyAndWarnIfMoreThanOneSku_m5335E3AF505C33A1906ADE3002F2964106D166E0 (void);
// 0x00000086 System.Void UnityEngine.Purchasing.GooglePurchaseService::HandleBillingFlowResult(UnityEngine.Purchasing.Models.GoogleBillingResult,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseService_HandleBillingFlowResult_mB6BB11CE0CD0E91929858202025B0A7839A8E063 (void);
// 0x00000087 System.Void UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m4C5EADDD74EED184A06861EBC194CE072B1944DA (void);
// 0x00000088 System.Void UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::<Purchase>b__0(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void U3CU3Ec__DisplayClass4_0_U3CPurchaseU3Eb__0_mAE10F36BC4EBC2960482BB66A76255CA3ED2AD60 (void);
// 0x00000089 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GoogleQueryPurchasesService__ctor_m94BBAD4CF002581B25ECA994C1A2D46BF17AF88E (void);
// 0x0000008A System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::QueryPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
extern void GoogleQueryPurchasesService_QueryPurchases_m99AF2B75F4A7EDF2978717327D510026A6B6715A (void);
// 0x0000008B System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::HandleOnQueryPurchaseReceived(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>,System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>,System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void GoogleQueryPurchasesService_HandleOnQueryPurchaseReceived_m6930C59EEFEE7CB773482A96FDCB6CA111D8B585 (void);
// 0x0000008C UnityEngine.Purchasing.Models.GooglePurchaseResult UnityEngine.Purchasing.GoogleQueryPurchasesService::QueryPurchasesWithSkuType(System.String)
extern void GoogleQueryPurchasesService_QueryPurchasesWithSkuType_mB1E5C83EC06ABAF8A69080E1CF6D7B34BF09E389 (void);
// 0x0000008D System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::HandleGooglePurchaseResult(UnityEngine.Purchasing.Models.GooglePurchaseResult,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
extern void GoogleQueryPurchasesService_HandleGooglePurchaseResult_m7EBDADE862A1CF59F35091B2AD49B3017960B657 (void);
// 0x0000008E System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_mF06255FA3513B351C945F140B1CC9B7EB300F73E (void);
// 0x0000008F System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0::<QueryPurchases>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass3_0_U3CQueryPurchasesU3Eb__0_m4797FF90FB9E4E7CD2A9C2613FB419A71F2C8B18 (void);
// 0x00000090 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1::.ctor()
extern void U3CU3Ec__DisplayClass3_1__ctor_m32EF4809692FB5EA008B0CD2C01AA39DFD987585 (void);
// 0x00000091 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1::<QueryPurchases>b__1(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mC9B923B6358257D442FE6A337295FDFC9FDD516F (void);
// 0x00000092 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.QuerySkuDetailsService::GetSkuDetailsParamClass()
extern void QuerySkuDetailsService_GetSkuDetailsParamClass_mA49639D19143CB6CFDC34BF5A50B30C9E37250F3 (void);
// 0x00000093 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void QuerySkuDetailsService__ctor_m0CADCB7BDCA31662FD2720A9D1B8EECE32A40F35 (void);
// 0x00000094 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryAsyncSku(UnityEngine.Purchasing.ProductDefinition,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QueryAsyncSku_mFD866A496B46C6FC8A83775DA5B91FA850924178 (void);
// 0x00000095 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryAsyncSku(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
extern void QuerySkuDetailsService_QueryAsyncSku_m254346559B768D940F86B50017BB26F77F72B8DA (void);
// 0x00000096 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryAsyncSku(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QueryAsyncSku_mF88D4B9ACE1322C6A7F67EF1FCDDCCAD7FFD697B (void);
// 0x00000097 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryInAppsAsync(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QueryInAppsAsync_m76A40A75B91FA34F972B0BAA1ABEBFEE85718CBB (void);
// 0x00000098 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QuerySubsAsync(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QuerySubsAsync_mA53DDEB2AA8B01FCDAB314A1DD0D3ED84FD712BF (void);
// 0x00000099 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QuerySkuDetails(System.Collections.Generic.List`1<System.String>,System.String,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QuerySkuDetails_m22892ED601AA0DB0C66742E034F4D1CFA54146F3 (void);
// 0x0000009A System.Void UnityEngine.Purchasing.QuerySkuDetailsService::ConsolidateOnSkuDetailsReceived(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_ConsolidateOnSkuDetailsReceived_mBDF6D3104F81E4F419DB03BD538207D63D3A23C8 (void);
// 0x0000009B System.Void UnityEngine.Purchasing.QuerySkuDetailsService::AddToQueriedSkuDetails(UnityEngine.AndroidJavaObject)
extern void QuerySkuDetailsService_AddToQueriedSkuDetails_m41ADA778B9506F6BBB8739A7770AB20FA810E848 (void);
// 0x0000009C System.Void UnityEngine.Purchasing.QuerySkuDetailsService::Clear()
extern void QuerySkuDetailsService_Clear_mFBE23D9A053C23A91E83058C4D1151B52CA44A4F (void);
// 0x0000009D System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass12_0::.ctor()
extern void U3CU3Ec__DisplayClass12_0__ctor_m7DF6C724D0E7ED8726D84EE57120442029A86124 (void);
// 0x0000009E System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass12_0::<QueryAsyncSku>b__0(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void U3CU3Ec__DisplayClass12_0_U3CQueryAsyncSkuU3Eb__0_m0BB58CA841CEB4A2C0119849AF4A61E662380FF1 (void);
// 0x0000009F System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c::.cctor()
extern void U3CU3Ec__cctor_m1A6D52C8735A819280EDC827CB2E845AF7DDD80B (void);
// 0x000000A0 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c::.ctor()
extern void U3CU3Ec__ctor_m6C0E80B5B4BEE9054DDEB8D1A37899C48916B961 (void);
// 0x000000A1 System.Boolean UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QueryInAppsAsync>b__14_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_0_m8BAF9F0A611E5DF1BD374A8A740895A1B176B84B (void);
// 0x000000A2 System.String UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QueryInAppsAsync>b__14_1(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_1_m10EF5A691AD065B86E69B378A69CE393559E308F (void);
// 0x000000A3 System.Boolean UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QuerySubsAsync>b__15_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_0_m5A808677445AF38E53F074B6179EBC415D300C28 (void);
// 0x000000A4 System.String UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QuerySubsAsync>b__15_1(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_1_mBD59E7E0369FB09504CB33122B622671FD73EB42 (void);
// 0x000000A5 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_m48AF69899B66897887FE1CD1AC4508A62F1DF8AF (void);
// 0x000000A6 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0::<QuerySkuDetails>b__0(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass16_0_U3CQuerySkuDetailsU3Eb__0_m2E3FD031A4BD56F4FDFBE53CFD64A9495EE7F1D1 (void);
// 0x000000A7 System.Collections.Generic.HashSet`1<UnityEngine.AndroidJavaObject> UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService::GetCachedQueriedSkus()
// 0x000000A8 System.Void UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService::AddCachedQueriedSkus(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
// 0x000000A9 System.Void UnityEngine.Purchasing.BillingClientStateListener::.ctor()
extern void BillingClientStateListener__ctor_mCE9E457FC2FEA0C1E83078E5105718E973711B5B (void);
// 0x000000AA System.Void UnityEngine.Purchasing.BillingClientStateListener::RegisterOnConnected(System.Action)
extern void BillingClientStateListener_RegisterOnConnected_m38C6B26909212948E55BCFC8345C7AFB19495A8D (void);
// 0x000000AB System.Void UnityEngine.Purchasing.BillingClientStateListener::RegisterOnDisconnected(System.Action)
extern void BillingClientStateListener_RegisterOnDisconnected_m92083DB1308D21231D60D33955CAC42C43753BCE (void);
// 0x000000AC System.Void UnityEngine.Purchasing.BillingClientStateListener::onBillingSetupFinished(UnityEngine.AndroidJavaObject)
extern void BillingClientStateListener_onBillingSetupFinished_mEA905DE6B78F04A085D9FC1F0C9826DC83F9452B (void);
// 0x000000AD System.Void UnityEngine.Purchasing.BillingClientStateListener::onBillingServiceDisconnected()
extern void BillingClientStateListener_onBillingServiceDisconnected_m16F16DE16A550B457DAEFB72441455CB071FE2F6 (void);
// 0x000000AE System.Void UnityEngine.Purchasing.GoogleAcknowledgePurchaseListener::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GoogleAcknowledgePurchaseListener__ctor_mB4B4808B585E566C649B08F19F223CAF182C5EB9 (void);
// 0x000000AF System.Void UnityEngine.Purchasing.GoogleAcknowledgePurchaseListener::onAcknowledgePurchaseResponse(UnityEngine.AndroidJavaObject)
extern void GoogleAcknowledgePurchaseListener_onAcknowledgePurchaseResponse_mF88D04B0913A5DB2911CF3429E7217D6605CC003 (void);
// 0x000000B0 System.Void UnityEngine.Purchasing.GoogleConsumeResponseListener::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>)
extern void GoogleConsumeResponseListener__ctor_mC06D2BDDE4207BBE9D96D8F4D984D40ADA97B513 (void);
// 0x000000B1 System.Void UnityEngine.Purchasing.GoogleConsumeResponseListener::onConsumeResponse(UnityEngine.AndroidJavaObject,System.String)
extern void GoogleConsumeResponseListener_onConsumeResponse_m17DBD2DA9E9723E19844FA2EFFA9C42FC55111B1 (void);
// 0x000000B2 System.Void UnityEngine.Purchasing.GooglePriceChangeConfirmationListener::.ctor(System.Action`1<UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GooglePriceChangeConfirmationListener__ctor_m75E237741D229C8C89D3CB701C4CBC5D9F00C037 (void);
// 0x000000B3 System.Void UnityEngine.Purchasing.GooglePriceChangeConfirmationListener::onPriceChangeConfirmationResult(UnityEngine.AndroidJavaObject)
extern void GooglePriceChangeConfirmationListener_onPriceChangeConfirmationResult_m04A0D47FA40A2CD8729D7DC8DB6A5AEA303296E5 (void);
// 0x000000B4 System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleLastKnownProductService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePurchaseUpdatedListener__ctor_mA951906BD5FC9C8FB1AB42278AFEF44128B18005 (void);
// 0x000000B5 System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::onPurchasesUpdated(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseUpdatedListener_onPurchasesUpdated_mBBE45D5EC75018BB6E8E5F47F195CACD6F032FB8 (void);
// 0x000000B6 System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::HandleErrorCases(UnityEngine.Purchasing.Models.GoogleBillingResult,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseUpdatedListener_HandleErrorCases_m3A08D7759E3A9F7EBCC799B8A762958B8BDF97E1 (void);
// 0x000000B7 System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::ApplyOnPurchases(UnityEngine.AndroidJavaObject,System.Action`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void GooglePurchaseUpdatedListener_ApplyOnPurchases_m3F86FF7B363D76B5FEC0A83EF2CD2CBBAE3394A4 (void);
// 0x000000B8 System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::ApplyOnPurchases(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.Models.GoogleBillingResult,System.Action`2<UnityEngine.Purchasing.Models.GooglePurchase,System.String>)
extern void GooglePurchaseUpdatedListener_ApplyOnPurchases_m7887BAEC760FE32A57E887D626A0297EA8A6BBBB (void);
// 0x000000B9 System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::OnPurchaseOk(UnityEngine.Purchasing.Models.GooglePurchase)
extern void GooglePurchaseUpdatedListener_OnPurchaseOk_m7223054738BF1C4523334B14B6B640B6E51C5A85 (void);
// 0x000000BA System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::OnPurchaseCanceled(UnityEngine.Purchasing.Models.GooglePurchase)
extern void GooglePurchaseUpdatedListener_OnPurchaseCanceled_m8ECE50611EB495F3D0DBBE5B6BE27B1DA3898BF9 (void);
// 0x000000BB System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::OnPurchaseAlreadyOwned(UnityEngine.Purchasing.Models.GooglePurchase)
extern void GooglePurchaseUpdatedListener_OnPurchaseAlreadyOwned_m253DABAE4E42FEE29AF471D7AD67E91277D21987 (void);
// 0x000000BC System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::OnPurchaseFailed(UnityEngine.Purchasing.Models.GooglePurchase,System.String)
extern void GooglePurchaseUpdatedListener_OnPurchaseFailed_m7C52FDFB01418D53E30C71EC3BC164838CFD6F4C (void);
// 0x000000BD System.Void UnityEngine.Purchasing.SkuDetailsResponseListener::.ctor(System.Action`2<UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject>)
extern void SkuDetailsResponseListener__ctor_mBB4B8172E5E11783CB949439554D2B65FB30ECD1 (void);
// 0x000000BE System.Void UnityEngine.Purchasing.SkuDetailsResponseListener::onSkuDetailsResponse(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
extern void SkuDetailsResponseListener_onSkuDetailsResponse_mBEBC3EBB84D414CD7D6F3AA9F5F57723A5B7F09E (void);
// 0x000000BF System.Void UnityEngine.Purchasing.IGooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
// 0x000000C0 System.Void UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x000000C1 System.Void UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal::NotifyDeferredPurchase(System.String,System.String)
// 0x000000C2 System.Void UnityEngine.Purchasing.IGoogleFetchPurchases::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x000000C3 System.Void UnityEngine.Purchasing.IGoogleFetchPurchases::FetchPurchases()
// 0x000000C4 System.Void UnityEngine.Purchasing.IGoogleFetchPurchases::FetchPurchases(System.Action)
// 0x000000C5 System.Void UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x000000C6 System.Void UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
// 0x000000C7 System.Void UnityEngine.Purchasing.IGooglePlayStorePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition)
// 0x000000C8 System.Void UnityEngine.Purchasing.IGooglePlayStoreRetrieveProductsService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x000000C9 System.Void UnityEngine.Purchasing.IGooglePlayStoreRetrieveProductsService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
// 0x000000CA System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_originalJson(System.String)
extern void GoogleProductMetadata_set_originalJson_m8802F225FDE9D239B0BC37414C770787355F7175 (void);
// 0x000000CB System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_subscriptionPeriod(System.String)
extern void GoogleProductMetadata_set_subscriptionPeriod_mF1972DD4D5F09FCA63289A452BF9D7C3293EFE4A (void);
// 0x000000CC System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_freeTrialPeriod(System.String)
extern void GoogleProductMetadata_set_freeTrialPeriod_m5A246A10382871D6A117098A660725F5887D8870 (void);
// 0x000000CD System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPrice(System.String)
extern void GoogleProductMetadata_set_introductoryPrice_mB24D82E3B6FBD2BF1785885772FE76744E08AA34 (void);
// 0x000000CE System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPricePeriod(System.String)
extern void GoogleProductMetadata_set_introductoryPricePeriod_mE4B20274CC2D3136A550C3AB26AE9129967CD0ED (void);
// 0x000000CF System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPriceCycles(System.Int32)
extern void GoogleProductMetadata_set_introductoryPriceCycles_m4A579C40C2A912F7D344BD2F4ACD3A6313924F51 (void);
// 0x000000D0 System.Void UnityEngine.Purchasing.GoogleProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
extern void GoogleProductMetadata__ctor_m02775AA7EFE72181C932AC4F59E9FA566E0FF6AB (void);
// 0x000000D1 System.Void UnityEngine.Purchasing.GoogleFetchPurchases::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService)
extern void GoogleFetchPurchases__ctor_mB6CE7739DCA92C7C52A9DE227869975B195A680A (void);
// 0x000000D2 System.Void UnityEngine.Purchasing.GoogleFetchPurchases::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GoogleFetchPurchases_SetStoreCallback_m0E565F3C181C1E1ECAFF0D023A6A990318D77C5F (void);
// 0x000000D3 System.Void UnityEngine.Purchasing.GoogleFetchPurchases::FetchPurchases()
extern void GoogleFetchPurchases_FetchPurchases_mE8F0FA6586D56BF3FA6AAB78B6A4852AFF262C22 (void);
// 0x000000D4 System.Void UnityEngine.Purchasing.GoogleFetchPurchases::FetchPurchases(System.Action)
extern void GoogleFetchPurchases_FetchPurchases_m708DBD73CBB5C30C4441F434502B393C285BD6F2 (void);
// 0x000000D5 System.Void UnityEngine.Purchasing.GoogleFetchPurchases::OnFetchedPurchaseSuccessful(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>,System.Action)
extern void GoogleFetchPurchases_OnFetchedPurchaseSuccessful_m6F95AF92964FB93B48794F59EF870717C6F2CA95 (void);
// 0x000000D6 System.Void UnityEngine.Purchasing.GoogleFetchPurchases::OnPurchasesRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void GoogleFetchPurchases_OnPurchasesRetrieved_m12EA283304AD1E309E6C81896AAE5F4ED6287DD2 (void);
// 0x000000D7 System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mD0D90339AD39FF8803EDE1A7E66235569AA1E621 (void);
// 0x000000D8 System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0::<FetchPurchases>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass6_0_U3CFetchPurchasesU3Eb__0_m1DD9AC83ACD8542CCC8E51282F9B1DAD289B7E4D (void);
// 0x000000D9 System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c::.cctor()
extern void U3CU3Ec__cctor_m6FC73205E50A3D0227EBE34C2ED1101CE0A6316E (void);
// 0x000000DA System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c::.ctor()
extern void U3CU3Ec__ctor_mB0958FB91982CB49681A96A4EC74CC83378CEAEF (void);
// 0x000000DB System.Boolean UnityEngine.Purchasing.GoogleFetchPurchases_<>c::<OnPurchasesRetrieved>b__8_0(UnityEngine.Purchasing.Models.GooglePurchase)
extern void U3CU3Ec_U3COnPurchasesRetrievedU3Eb__8_0_m28FD70D640E02323CD54AD43AAFC743490318469 (void);
// 0x000000DC System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService)
extern void GooglePlayStoreFinishTransactionService__ctor_mA119A22781FD419BA87BD0E7CF1207E97C66E478 (void);
// 0x000000DD System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStoreFinishTransactionService_SetStoreCallback_m6DCB213C015EC2212CA6932F46449580E3B1A4FE (void);
// 0x000000DE System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void GooglePlayStoreFinishTransactionService_FinishTransaction_mA22BD3AC8351C93158580A3EA604120E378671BB (void);
// 0x000000DF System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::OnConsume(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String)
extern void GooglePlayStoreFinishTransactionService_OnConsume_mCCB0E8F355387C4F9508D512EE52F4314671C38C (void);
// 0x000000E0 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::OnAcknowledge(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult)
extern void GooglePlayStoreFinishTransactionService_OnAcknowledge_m5292AE9BA9F64E486E566F062376376037A5F002 (void);
// 0x000000E1 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::HandleFinishTransaction(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String)
extern void GooglePlayStoreFinishTransactionService_HandleFinishTransaction_mB735F899F86578D3A5CF20EDCC1F46440DC345AC (void);
// 0x000000E2 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::CallPurchaseSucceededUpdateReceipt(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.String)
extern void GooglePlayStoreFinishTransactionService_CallPurchaseSucceededUpdateReceipt_m048901295A56C02B4A6B00DE1058D29177F0AF05 (void);
// 0x000000E3 System.Boolean UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::IsResponseCodeInRecoverableState(UnityEngine.Purchasing.Models.GoogleBillingResult)
extern void GooglePlayStoreFinishTransactionService_IsResponseCodeInRecoverableState_m94AAF3FEEBEDC1511F8254ED35ED6A8D77E1382A (void);
// 0x000000E4 System.Void UnityEngine.Purchasing.GooglePlayStorePurchaseService::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService)
extern void GooglePlayStorePurchaseService__ctor_m91650C40DE73948916C2F443E5914A40A629D92A (void);
// 0x000000E5 System.Void UnityEngine.Purchasing.GooglePlayStorePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition)
extern void GooglePlayStorePurchaseService_Purchase_mC7C63AABBD65A72135171530FEDBBECFA209FD6A (void);
// 0x000000E6 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGoogleFetchPurchases)
extern void GooglePlayStoreRetrieveProductsService__ctor_mB567F1B18F0C107FC422DF4C9621D5B4F6999ED1 (void);
// 0x000000E7 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStoreRetrieveProductsService_SetStoreCallback_m7B66AB22F8280680D8B53364B3A78AE410B08ADF (void);
// 0x000000E8 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void GooglePlayStoreRetrieveProductsService_RetrieveProducts_m5BD15E15DA97A7494224D42DF1ACF95D14C4AD62 (void);
// 0x000000E9 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::<RetrieveProducts>b__5_0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern void GooglePlayStoreRetrieveProductsService_U3CRetrieveProductsU3Eb__5_0_m1F7C2D6E7833EBD6079738D98371AF80AF5279E5 (void);
// 0x000000EA System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m22150CEE301B4B756E44038AB02807D7BA4551A2 (void);
// 0x000000EB System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0::<RetrieveProducts>b__1()
extern void U3CU3Ec__DisplayClass5_0_U3CRetrieveProductsU3Eb__1_mF230D9AA962EF5C18A8A83DEFE801F4B304F1BD2 (void);
// 0x000000EC System.Void UnityEngine.Purchasing.FakeSamsungAppsExtensions::SetMode(UnityEngine.Purchasing.SamsungAppsMode)
extern void FakeSamsungAppsExtensions_SetMode_mC86D514271496C279BFA2BDEAF2AB4A0DF646FA1 (void);
// 0x000000ED System.Void UnityEngine.Purchasing.FakeSamsungAppsExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void FakeSamsungAppsExtensions_RestoreTransactions_mE87AA296D7AB7CDE86C144F7FB65229CECBFEECF (void);
// 0x000000EE System.Void UnityEngine.Purchasing.FakeSamsungAppsExtensions::.ctor()
extern void FakeSamsungAppsExtensions__ctor_m4742A91EE8D81C9BE5D5364687B8B330CBA5FED6 (void);
// 0x000000EF System.Void UnityEngine.Purchasing.ISamsungAppsCallback::OnTransactionsRestored(System.Boolean)
// 0x000000F0 System.Void UnityEngine.Purchasing.ISamsungAppsConfiguration::SetMode(UnityEngine.Purchasing.SamsungAppsMode)
// 0x000000F1 System.Void UnityEngine.Purchasing.ISamsungAppsExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
// 0x000000F2 System.Void UnityEngine.Purchasing.SamsungAppsJavaBridge::.ctor(UnityEngine.Purchasing.ISamsungAppsCallback)
extern void SamsungAppsJavaBridge__ctor_m969EEFD80B5504176398B4E86E3320627AE931BF (void);
// 0x000000F3 System.Void UnityEngine.Purchasing.SamsungAppsJavaBridge::OnTransactionsRestored(System.Boolean)
extern void SamsungAppsJavaBridge_OnTransactionsRestored_m8A137B01E9FFDC9662F6F6BE679391773D789284 (void);
// 0x000000F4 System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::.ctor()
extern void SamsungAppsStoreExtensions__ctor_m6F22AC359C3FAB0A816C1A888CF5ECFE526E3C0A (void);
// 0x000000F5 System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::SetAndroidJavaObject(UnityEngine.AndroidJavaObject)
extern void SamsungAppsStoreExtensions_SetAndroidJavaObject_m5B501931B44F78CD885346227BBB33A4E161C8FC (void);
// 0x000000F6 System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::SetMode(UnityEngine.Purchasing.SamsungAppsMode)
extern void SamsungAppsStoreExtensions_SetMode_m4A175BC8D33187A335AFE0AD473621EE1BBCB75A (void);
// 0x000000F7 System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void SamsungAppsStoreExtensions_RestoreTransactions_m03D620B420304B5E7E448A3DE3D7EDB53B1A6650 (void);
// 0x000000F8 System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::OnTransactionsRestored(System.Boolean)
extern void SamsungAppsStoreExtensions_OnTransactionsRestored_m340FF8578FACAA5DDB6F296AF4CD00FD260AB504 (void);
// 0x000000F9 System.Void UnityEngine.Purchasing.FakeUDPExtension::.ctor()
extern void FakeUDPExtension__ctor_m3D2B6B1E9B340F8CBA126B5C7E44D3FD8732E6A6 (void);
// 0x000000FA System.Void UnityEngine.Purchasing.INativeUDPStore::Initialize(System.Action`2<System.Boolean,System.String>)
// 0x000000FB System.Void UnityEngine.Purchasing.INativeUDPStore::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String)
// 0x000000FC System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>)
// 0x000000FD System.Void UnityEngine.Purchasing.INativeUDPStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
// 0x000000FE System.String UnityEngine.Purchasing.UDP::get_Name()
extern void UDP_get_Name_mC7540D45330D80FE8220081B1230FAEAF69F02DF (void);
// 0x000000FF System.Void UnityEngine.Purchasing.UDPBindings::.ctor()
extern void UDPBindings__ctor_m45AF3A4E6879F3FA628CAC1D30FFBD76D6159EF1 (void);
// 0x00000100 System.Void UnityEngine.Purchasing.UDPBindings::Initialize(System.Action`2<System.Boolean,System.String>)
extern void UDPBindings_Initialize_mE6F674A13BCBE2884884F9F1A9F42528E4455906 (void);
// 0x00000101 System.Void UnityEngine.Purchasing.UDPBindings::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String)
extern void UDPBindings_Purchase_m521D25A03D834363CA80F1D54081356389061F63 (void);
// 0x00000102 System.Void UnityEngine.Purchasing.UDPBindings::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>)
extern void UDPBindings_RetrieveProducts_m455ECDE792F4D48F2979EA430816431D8E399A08 (void);
// 0x00000103 System.Void UnityEngine.Purchasing.UDPBindings::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void UDPBindings_FinishTransaction_m8408DCA424E9D8A790A4F79EFB10C3DC5D96391A (void);
// 0x00000104 System.Void UnityEngine.Purchasing.UDPBindings::OnInventoryQueried(System.Boolean,System.Object)
extern void UDPBindings_OnInventoryQueried_m44BD3BE51FF389403BAC1AE14406AAEC34C2ADDC (void);
// 0x00000105 System.Void UnityEngine.Purchasing.UDPBindings::RetrieveProducts(System.String)
extern void UDPBindings_RetrieveProducts_m0928609D2617C38F114E99DB2888DEE75298175F (void);
// 0x00000106 System.Void UnityEngine.Purchasing.UDPBindings::Purchase(System.String,System.String)
extern void UDPBindings_Purchase_m8CD391D60EEDBFD8D80134ADA9D27DF395EA3108 (void);
// 0x00000107 System.Void UnityEngine.Purchasing.UDPBindings::FinishTransaction(System.String,System.String)
extern void UDPBindings_FinishTransaction_mB4C9615FFEE30868C86B7F0758571E545AEB7183 (void);
// 0x00000108 System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.UDPBindings::StringPropertyToDictionary(System.Object)
extern void UDPBindings_StringPropertyToDictionary_mC633C97E842A0A31CBE20C2F12329B8DE8CF2914 (void);
// 0x00000109 System.Void UnityEngine.Purchasing.UDPImpl::SetNativeStore(UnityEngine.Purchasing.INativeUDPStore)
extern void UDPImpl_SetNativeStore_mA858DAA1F1D08922058475F299FEA5DD5F51D0AD (void);
// 0x0000010A System.Void UnityEngine.Purchasing.UDPImpl::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void UDPImpl_Initialize_m64A8C93DCE3EECFF3507BE934B86F215099E0201 (void);
// 0x0000010B System.Void UnityEngine.Purchasing.UDPImpl::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void UDPImpl_RetrieveProducts_m84FC370283AF731FDCA74F9BB681CF500BE4F74E (void);
// 0x0000010C System.Void UnityEngine.Purchasing.UDPImpl::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void UDPImpl_Purchase_m066B0ADA48FC39756DA1F70AE36A9BA296104EB7 (void);
// 0x0000010D System.Void UnityEngine.Purchasing.UDPImpl::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void UDPImpl_FinishTransaction_m9930DAAD0C7AD078B279B3B236951C302BBC87F9 (void);
// 0x0000010E System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
extern void UDPImpl_DictionaryToStringProperty_m7994C9973D80D9C122FEA25667B8A5C8AF212050 (void);
// 0x0000010F System.Void UnityEngine.Purchasing.UDPImpl::.ctor()
extern void UDPImpl__ctor_mBFAB48314D09093BC4A4E6E2F1ED06A48161EC73 (void);
// 0x00000110 System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m0BB3ADCD79FCC4B488A2ED84D8315497F978B39D (void);
// 0x00000111 System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<RetrieveProducts>b__0(System.Boolean,System.String)
extern void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m59185CCC02C3FE34C2A8683EDA69A8AC11C6B851 (void);
// 0x00000112 System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<RetrieveProducts>b__1(System.Boolean,System.String)
extern void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m5DA90193424C5C6369346942F7B20BD5A29D8972 (void);
// 0x00000113 System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m7C57FE2C6D54FD70FFFF2BD54E6E65EB9F1D44A5 (void);
// 0x00000114 System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::<Purchase>b__0(System.Boolean,System.String)
extern void U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_m9302EBEE3A27C59DBDFA895D8AC0B1D2D574A931 (void);
// 0x00000115 System.Type UnityEngine.Purchasing.UDPReflectionUtils::GetTypeByName(System.String)
extern void UDPReflectionUtils_GetTypeByName_m2D706B5311D5E3D7E3C8C373CEFF748F2BEE42C1 (void);
// 0x00000116 System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> UnityEngine.Purchasing.UDPReflectionUtils::GetAllAssemblies()
extern void UDPReflectionUtils_GetAllAssemblies_m7412ADCBB87CAB9FE0D0CCD64E4074B45FACC5A9 (void);
// 0x00000117 System.Collections.Generic.IEnumerable`1<System.Type> UnityEngine.Purchasing.UDPReflectionUtils::GetTypes(System.Reflection.Assembly)
extern void UDPReflectionUtils_GetTypes_m8AC1A6E80E2FB05E577F9C38452A2F10427E2F61 (void);
// 0x00000118 System.Void UnityEngine.Purchasing.UDPReflectionUtils::.cctor()
extern void UDPReflectionUtils__cctor_m3A5C4299B976A685962591D0E34C747354D151F5 (void);
// 0x00000119 System.Void UnityEngine.Purchasing.UDPReflectionUtils_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mCFDCDD2397A277EBAA33DBC3349486A6FB336CB8 (void);
// 0x0000011A System.Boolean UnityEngine.Purchasing.UDPReflectionUtils_<>c__DisplayClass6_0::<GetTypeByName>b__0(System.String)
extern void U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m63F3B59612C7BC7E726657C78A97B76564C2D39A (void);
// 0x0000011B System.Type UnityEngine.Purchasing.InventoryInterface::GetClassType()
extern void InventoryInterface_GetClassType_m2339515AD12211C798950C7DB3DAA286930B6FCC (void);
// 0x0000011C System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::GetProductListMethod()
extern void InventoryInterface_GetProductListMethod_m5278B18F2FB4F48DD028D93C9094F33F36E53829 (void);
// 0x0000011D System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::GetPurchaseInfoMethod()
extern void InventoryInterface_GetPurchaseInfoMethod_mC46691D414E98B61078A7FF5DE3136D49EFB529E (void);
// 0x0000011E System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::HasPurchaseMethod()
extern void InventoryInterface_HasPurchaseMethod_mA1F04633497C03C12E5C2205A4E7480CEF60A74D (void);
// 0x0000011F System.Type UnityEngine.Purchasing.ProductInfoInterface::GetClassType()
extern void ProductInfoInterface_GetClassType_m89DE0DEFA693CD3D20A578AA9859394ABA2EE6BF (void);
// 0x00000120 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetCurrencyProp()
extern void ProductInfoInterface_GetCurrencyProp_m9369EAB6C14A7B1CD1BDBE8D7CC6B6F7A963EEC6 (void);
// 0x00000121 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetDescriptionProp()
extern void ProductInfoInterface_GetDescriptionProp_m74A7A79C16324DDCA8694F0C3A6B084A472B4224 (void);
// 0x00000122 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetPriceProp()
extern void ProductInfoInterface_GetPriceProp_mCF24D0FB3E85B5351FB161B954D5BEB48986BB04 (void);
// 0x00000123 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetPriceAmountMicrosProp()
extern void ProductInfoInterface_GetPriceAmountMicrosProp_m33A42D7B5ECF6F98C3B8CF863E75EBAE3C0CEA37 (void);
// 0x00000124 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetProductIdProp()
extern void ProductInfoInterface_GetProductIdProp_mF0680E7BE31915B7355C96F550530325AFD057C5 (void);
// 0x00000125 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetTitleProp()
extern void ProductInfoInterface_GetTitleProp_m065FD74522ECBA78E54F395A277E08C3ECE1D22A (void);
// 0x00000126 System.Type UnityEngine.Purchasing.StoreServiceInterface::GetClassType()
extern void StoreServiceInterface_GetClassType_m660B29BBBD9367E54F9A7C670BBCA45966DBC40A (void);
// 0x00000127 System.Reflection.PropertyInfo UnityEngine.Purchasing.StoreServiceInterface::GetNameProp()
extern void StoreServiceInterface_GetNameProp_m33B1CDCAE42001BB9DE76539785AEDA5C8BA9211 (void);
// 0x00000128 System.String UnityEngine.Purchasing.StoreServiceInterface::GetName()
extern void StoreServiceInterface_GetName_m272B6391522A75ECC0BA49F4A608804A1E1E95D2 (void);
// 0x00000129 System.Type UnityEngine.Purchasing.UdpIapBridgeInterface::GetClassType()
extern void UdpIapBridgeInterface_GetClassType_m0CB7252C564FE1FDEF51C378E5726197E29AEFC9 (void);
// 0x0000012A System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetInitMethod()
extern void UdpIapBridgeInterface_GetInitMethod_m1268A547D7F96A2D8F8D1D10D5B8435D27DD1BF5 (void);
// 0x0000012B System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetPurchaseMethod()
extern void UdpIapBridgeInterface_GetPurchaseMethod_m04429796099497D106906C22524B1915DD623107 (void);
// 0x0000012C System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetRetrieveProductsMethod()
extern void UdpIapBridgeInterface_GetRetrieveProductsMethod_m0EE4750DDBB15287A54F034E250DFF44B876A6EA (void);
// 0x0000012D System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetFinishTransactionMethod()
extern void UdpIapBridgeInterface_GetFinishTransactionMethod_m08A9FCC95EE1DC8B978DB79F42E70DEA38E0ADDF (void);
// 0x0000012E System.Type UnityEngine.Purchasing.UserInfoInterface::GetClassType()
extern void UserInfoInterface_GetClassType_m9812080125843B27829B95984F673CF85B386C0C (void);
// 0x0000012F System.Void UnityEngine.Purchasing.AppleStoreImpl::.ctor(Uniject.IUtil)
extern void AppleStoreImpl__ctor_mB9968CDD194EFC4715501BC44987F93D3724DD59 (void);
// 0x00000130 System.Void UnityEngine.Purchasing.AppleStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeAppleStore)
extern void AppleStoreImpl_SetNativeStore_mB8A4471E0172C0E1DFB1F528C6261D88344350E5 (void);
// 0x00000131 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnProductsRetrieved(System.String)
extern void AppleStoreImpl_OnProductsRetrieved_mEF935ACCD2F0D535231E74831540AF1467A54FDF (void);
// 0x00000132 System.Void UnityEngine.Purchasing.AppleStoreImpl::RestoreTransactions(System.Action`1<System.Boolean>)
extern void AppleStoreImpl_RestoreTransactions_m9EFC80E93F487002E1818FD5BE3A1354AFF30402 (void);
// 0x00000133 System.Void UnityEngine.Purchasing.AppleStoreImpl::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
extern void AppleStoreImpl_RegisterPurchaseDeferredListener_mC23A1F745879687949A85D89547F75FFC5CFED98 (void);
// 0x00000134 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPurchaseDeferred(System.String)
extern void AppleStoreImpl_OnPurchaseDeferred_m07979C030E6A1DA64BB3D4237960120E2A871222 (void);
// 0x00000135 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPromotionalPurchaseAttempted(System.String)
extern void AppleStoreImpl_OnPromotionalPurchaseAttempted_mCB88E611F8B4D28776CBA77146F661EEC1BC845F (void);
// 0x00000136 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnTransactionsRestoredSuccess()
extern void AppleStoreImpl_OnTransactionsRestoredSuccess_m116DAD82535AB22456837B81A9BD4780CEF46FA6 (void);
// 0x00000137 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnTransactionsRestoredFail(System.String)
extern void AppleStoreImpl_OnTransactionsRestoredFail_mB35956811EE303C7A40F11151535133FDC9389B3 (void);
// 0x00000138 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnAppReceiptRetrieved(System.String)
extern void AppleStoreImpl_OnAppReceiptRetrieved_m89EB762AC322644B6A6EB9C8D0B04B3D0ECBD254 (void);
// 0x00000139 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnAppReceiptRefreshedFailed()
extern void AppleStoreImpl_OnAppReceiptRefreshedFailed_m76E948D16EE84A3C80C7ADE43B31268271238DC5 (void);
// 0x0000013A System.Void UnityEngine.Purchasing.AppleStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern void AppleStoreImpl_MessageCallback_m58F85651C958C901D09778332EFDA47EC8EDE8AA (void);
// 0x0000013B System.Void UnityEngine.Purchasing.AppleStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern void AppleStoreImpl_ProcessMessage_mB2029E81C2ECA053473F597EE88D040D2DFB0D97 (void);
// 0x0000013C System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void AppleStoreImpl_OnPurchaseSucceeded_mFAF06BD0B88818B8A35D8F7AE1B9682143504CE9 (void);
// 0x0000013D UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.AppleStoreImpl::getAppleReceiptFromBase64String(System.String)
extern void AppleStoreImpl_getAppleReceiptFromBase64String_m41108623014B10973E67C4979DA18B04CC391701 (void);
// 0x0000013E System.Boolean UnityEngine.Purchasing.AppleStoreImpl::isValidPurchaseState(UnityEngine.Purchasing.Security.AppleReceipt,System.String)
extern void AppleStoreImpl_isValidPurchaseState_m2D0FE1806CBAD2F343F83F3FB33402BA6D845FE8 (void);
// 0x0000013F System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m1CA12AACD13F8E35A2F4D013144BB4AF5B2E6028 (void);
// 0x00000140 System.Boolean UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass24_0::<OnProductsRetrieved>b__0(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec__DisplayClass24_0_U3COnProductsRetrievedU3Eb__0_mEDAF72D89D95587C8B9A4C5B364E08D3388D7B0B (void);
// 0x00000141 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c::.cctor()
extern void U3CU3Ec__cctor_mDA72C8D23743746AC4CD9D90704A958DF9D8DB4A (void);
// 0x00000142 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c::.ctor()
extern void U3CU3Ec__ctor_m89594A4C59A21839FBF5CC7E4B97E1ED9AD7C8A3 (void);
// 0x00000143 System.Int32 UnityEngine.Purchasing.AppleStoreImpl_<>c::<OnProductsRetrieved>b__24_1(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec_U3COnProductsRetrievedU3Eb__24_1_m7F1BEB6A2D34A9B3E63BE4E5700834D102C50B83 (void);
// 0x00000144 System.Int32 UnityEngine.Purchasing.AppleStoreImpl_<>c::<isValidPurchaseState>b__41_1(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec_U3CisValidPurchaseStateU3Eb__41_1_m732B3E61CB9326E541D12FDB0FA2F130EE317675 (void);
// 0x00000145 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::.ctor()
extern void U3CU3Ec__DisplayClass37_0__ctor_mE8F75A76304E0C485482C4D7F344BEE0AF27E6A0 (void);
// 0x00000146 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::<MessageCallback>b__0()
extern void U3CU3Ec__DisplayClass37_0_U3CMessageCallbackU3Eb__0_mD3ED860FC01CA128B360566A12368C063BA49ED3 (void);
// 0x00000147 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass41_0::.ctor()
extern void U3CU3Ec__DisplayClass41_0__ctor_mB0B720A40C66E799F8B88CEC9227E4DACBB7BE58 (void);
// 0x00000148 System.Boolean UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass41_0::<isValidPurchaseState>b__0(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec__DisplayClass41_0_U3CisValidPurchaseStateU3Eb__0_m6F553E73A8A90A7B3B36C1BB4C1270B5CEC6C0A0 (void);
// 0x00000149 System.Void UnityEngine.Purchasing.FakeAppleConfiguation::.ctor()
extern void FakeAppleConfiguation__ctor_m47BDCB07F9BB5514BC2C6E3B4252A9ED95ED7B94 (void);
// 0x0000014A System.Void UnityEngine.Purchasing.FakeAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void FakeAppleExtensions_RestoreTransactions_m111D9A5EA667B40ED395DFFDCC4CE5DCCD38C43D (void);
// 0x0000014B System.Void UnityEngine.Purchasing.FakeAppleExtensions::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
extern void FakeAppleExtensions_RegisterPurchaseDeferredListener_m96C9576514F14CF92CB67888E94124894473D802 (void);
// 0x0000014C System.Void UnityEngine.Purchasing.FakeAppleExtensions::.ctor()
extern void FakeAppleExtensions__ctor_m260DFC08BF71BE866905C71F875C5082D3CFC6C4 (void);
// 0x0000014D System.Void UnityEngine.Purchasing.IAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
// 0x0000014E System.Void UnityEngine.Purchasing.IAppleExtensions::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
// 0x0000014F UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.INativeStoreProvider::GetAndroidStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AppStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
// 0x00000150 UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.INativeStoreProvider::GetStorekit(UnityEngine.Purchasing.IUnityCallback)
// 0x00000151 UnityEngine.Purchasing.INativeFacebookStore UnityEngine.Purchasing.INativeStoreProvider::GetFacebookStore()
// 0x00000152 System.Void UnityEngine.Purchasing.IStoreInternal::SetModule(UnityEngine.Purchasing.StandardPurchasingModule)
// 0x00000153 System.Boolean UnityEngine.Purchasing.JSONStore::get_disableStoreCatalog()
extern void JSONStore_get_disableStoreCatalog_mB3DB5D24ED1CCDB415447A9F909910998981833F (void);
// 0x00000154 System.Void UnityEngine.Purchasing.JSONStore::.ctor()
extern void JSONStore__ctor_m468C71DF5781A82BA1F6BE74025B887483A67464 (void);
// 0x00000155 System.Void UnityEngine.Purchasing.JSONStore::.ctor(System.String)
extern void JSONStore__ctor_m479AB6D25B35E2F1611385BD98E2EE869F5A2814 (void);
// 0x00000156 System.Void UnityEngine.Purchasing.JSONStore::SetNativeStore(UnityEngine.Purchasing.INativeStore)
extern void JSONStore_SetNativeStore_mFC13C507966B0284D884FE1EB4B5FD559560E151 (void);
// 0x00000157 System.Void UnityEngine.Purchasing.JSONStore::UnityEngine.Purchasing.IStoreInternal.SetModule(UnityEngine.Purchasing.StandardPurchasingModule)
extern void JSONStore_UnityEngine_Purchasing_IStoreInternal_SetModule_mA22205332C3658EDA75BFBC321E7B624BE1BAEC6 (void);
// 0x00000158 System.Void UnityEngine.Purchasing.JSONStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void JSONStore_Initialize_m68D96F2B2FFE025A98910F454D84D6B61E8CC53A (void);
// 0x00000159 System.Void UnityEngine.Purchasing.JSONStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void JSONStore_RetrieveProducts_m8DBBE2647BD377B4C4AEAB17A6C3418997A8BF99 (void);
// 0x0000015A System.Void UnityEngine.Purchasing.JSONStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void JSONStore_Purchase_mDD355E7F805FDBE84630F073A2EA9968E8DF73CA (void);
// 0x0000015B System.Void UnityEngine.Purchasing.JSONStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void JSONStore_FinishTransaction_mBACBCC959815EDBC9B0A54254D8E891903988DC3 (void);
// 0x0000015C System.Void UnityEngine.Purchasing.JSONStore::OnSetupFailed(System.String)
extern void JSONStore_OnSetupFailed_mFC5E987719AF269FD266149ACCF9E2A7197E4EB8 (void);
// 0x0000015D System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String)
extern void JSONStore_OnProductsRetrieved_m8A3A41C101D0AA665E7F7799CE90D83064DF117A (void);
// 0x0000015E System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void JSONStore_OnPurchaseSucceeded_m054104F01412D48F43D319932A50A84D29622415 (void);
// 0x0000015F System.Void UnityEngine.Purchasing.JSONStore::SendPurchaseSucceededEvent(System.String,System.String,System.String)
extern void JSONStore_SendPurchaseSucceededEvent_mC290A7113BCA3A01DB2DAA1849DEFFBC0FFB799D (void);
// 0x00000160 System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseFailed(System.String)
extern void JSONStore_OnPurchaseFailed_m3873E8737ACEC41E6CE5C9A3FD267A6AC41AF117 (void);
// 0x00000161 System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription,System.String)
extern void JSONStore_OnPurchaseFailed_m27CFA14695D83566F21BCBE94F85BE9327D6B780 (void);
// 0x00000162 System.Void UnityEngine.Purchasing.JSONStore::SendPurchaseFailedEvent(UnityEngine.Purchasing.Extension.PurchaseFailureDescription,System.String)
extern void JSONStore_SendPurchaseFailedEvent_mF0FE34C6AF313B2FBC75D75F5AE904C7BD270F79 (void);
// 0x00000163 UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONStore::GetLastPurchaseFailureDescription()
extern void JSONStore_GetLastPurchaseFailureDescription_mB7D15E94E8E7AEB65017FA1CD2CD45F40D812A93 (void);
// 0x00000164 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::GetLastStoreSpecificPurchaseErrorCode()
extern void JSONStore_GetLastStoreSpecificPurchaseErrorCode_m938AE90443B7C6829089CB70205A713EF05962CC (void);
// 0x00000165 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::ParseStoreSpecificPurchaseErrorCode(System.String)
extern void JSONStore_ParseStoreSpecificPurchaseErrorCode_mF8EE42AA83D5C9AADFD31CD508EF4C0E46816786 (void);
// 0x00000166 UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.NativeStoreProvider::GetAndroidStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AppStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
extern void NativeStoreProvider_GetAndroidStore_mDB10C52A75CC29EE5019659960A888480BCCEF84 (void);
// 0x00000167 UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.NativeStoreProvider::GetAndroidStoreHelper(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AppStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
extern void NativeStoreProvider_GetAndroidStoreHelper_mFC1BC63B7AD7CE537673543D3A2F28EA4D880E20 (void);
// 0x00000168 UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.NativeStoreProvider::GetStorekit(UnityEngine.Purchasing.IUnityCallback)
extern void NativeStoreProvider_GetStorekit_m6A623FA7543B0EDB34AA3B53A2DE785594812B73 (void);
// 0x00000169 UnityEngine.Purchasing.INativeFacebookStore UnityEngine.Purchasing.NativeStoreProvider::GetFacebookStore()
extern void NativeStoreProvider_GetFacebookStore_mB80129F12282D8802F21A063B383C37419A0963D (void);
// 0x0000016A System.Void UnityEngine.Purchasing.NativeStoreProvider::.ctor()
extern void NativeStoreProvider__ctor_mB7A696517C872E529D98DB75CDC1DF31F17412FA (void);
// 0x0000016B UnityEngine.Purchasing.CloudCatalogImpl UnityEngine.Purchasing.CloudCatalogImpl::CreateInstance(System.String)
extern void CloudCatalogImpl_CreateInstance_m998206F56F3A850193FEF6C62C1BEF4BA4FBD447 (void);
// 0x0000016C System.Void UnityEngine.Purchasing.CloudCatalogImpl::.ctor(UnityEngine.Purchasing.IAsyncWebUtil,System.String,UnityEngine.ILogger,System.String,System.String)
extern void CloudCatalogImpl__ctor_m0134A431F3F2369CD943E017427B38F0CC4AE068 (void);
// 0x0000016D System.Void UnityEngine.Purchasing.CloudCatalogImpl::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern void CloudCatalogImpl_FetchProducts_mDA49A1EDA88C740BFC4E766FFCDD0428AB092A71 (void);
// 0x0000016E System.Void UnityEngine.Purchasing.CloudCatalogImpl::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>,System.Int32)
extern void CloudCatalogImpl_FetchProducts_m60504124B6DF71CF8B26DFBAD5FEDBCC8C0A96FE (void);
// 0x0000016F System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.CloudCatalogImpl::ParseProductsFromJSON(System.String,System.String)
extern void CloudCatalogImpl_ParseProductsFromJSON_m43CAC03ABEF817C6CF7B57F19A99D7812430F26A (void);
// 0x00000170 System.String UnityEngine.Purchasing.CloudCatalogImpl::CamelCaseToSnakeCase(System.String)
extern void CloudCatalogImpl_CamelCaseToSnakeCase_mE51432F843B8AF432AA09E53D0F44EDA862C9260 (void);
// 0x00000171 System.Void UnityEngine.Purchasing.CloudCatalogImpl::TryPersistCatalog(System.String)
extern void CloudCatalogImpl_TryPersistCatalog_m941C70FD0C37D99AACF0D9C58C4116F347594604 (void);
// 0x00000172 System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.CloudCatalogImpl::TryLoadCachedCatalog()
extern void CloudCatalogImpl_TryLoadCachedCatalog_m243E8ABDC81A03B747D0838C86CD1F85ED9602D9 (void);
// 0x00000173 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_mA4005593B5D4D816B214180BFC2EBF29D284CDE2 (void);
// 0x00000174 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__0(System.String)
extern void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__0_mEB0F1FE8EC6BE8046FCFE63CD42E39483B99162F (void);
// 0x00000175 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__1(System.String)
extern void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__1_m752291E9DD14061B94887FACB88C05AC1C041876 (void);
// 0x00000176 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__2()
extern void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__2_m2A7749155D8410BF168186BCA783BBBD47201066 (void);
// 0x00000177 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c::.cctor()
extern void U3CU3Ec__cctor_m6E9B4E9E0A54373D356A2011B8BE5C3B653CCDF3 (void);
// 0x00000178 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c::.ctor()
extern void U3CU3Ec__ctor_mC4034B7A1713A7695527D7EBAA975CE5904D4033 (void);
// 0x00000179 System.String UnityEngine.Purchasing.CloudCatalogImpl_<>c::<CamelCaseToSnakeCase>b__12_0(System.Char,System.Int32)
extern void U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_0_mAC3655F1AFFF5ADED6D221B1FFEA7BB927DD9B3B (void);
// 0x0000017A System.String UnityEngine.Purchasing.CloudCatalogImpl_<>c::<CamelCaseToSnakeCase>b__12_1(System.String,System.String)
extern void U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_1_mED960CAD4EC9E818A60A6916EBB9C08D14B14C80 (void);
// 0x0000017B System.Void UnityEngine.Purchasing.FakeManagedStoreConfig::.ctor()
extern void FakeManagedStoreConfig__ctor_mB309A5DFB1CF18D439A2238C33BD1C43C345F513 (void);
// 0x0000017C System.Void UnityEngine.Purchasing.FakeManagedStoreExtensions::.ctor()
extern void FakeManagedStoreExtensions__ctor_m3D24B9079D01B99BC14E6FDA21E1BB499A69D2B3 (void);
// 0x0000017D UnityEngine.Purchasing.StoreCatalogImpl UnityEngine.Purchasing.StoreCatalogImpl::CreateInstance(System.String,System.String,UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,Uniject.IUtil,UnityEngine.Purchasing.JSONStore)
extern void StoreCatalogImpl_CreateInstance_m8DB907491CB1B5FE9415D91FBFDFF8279A29BE78 (void);
// 0x0000017E System.Void UnityEngine.Purchasing.StoreCatalogImpl::.ctor(UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,System.String,System.String,UnityEngine.Purchasing.FileReference)
extern void StoreCatalogImpl__ctor_m906740530BDF4AE66B8A0B6F18F3F234AB851BB3 (void);
// 0x0000017F System.Boolean UnityEngine.Purchasing.AdsIPC::InitAdsIPC(Uniject.IUtil)
extern void AdsIPC_InitAdsIPC_m8B9962F2D87C541A4D728196FD19E750A7870EEC (void);
// 0x00000180 System.Boolean UnityEngine.Purchasing.AdsIPC::VerifyMethodExists()
extern void AdsIPC_VerifyMethodExists_m39A3970B19CB613A4BC104ABC2A5AD5016EC61E0 (void);
// 0x00000181 System.Void UnityEngine.Purchasing.AdsIPC::.cctor()
extern void AdsIPC__cctor_m9C15A0DD5C271D9ED0380DBA65F7C9FD6C29286E (void);
// 0x00000182 System.Void UnityEngine.Purchasing.EventQueue::.ctor(Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void EventQueue__ctor_mA18534E32D600F425F67370D066BB2B10BE96AEE (void);
// 0x00000183 UnityEngine.Purchasing.EventQueue UnityEngine.Purchasing.EventQueue::Instance(Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void EventQueue_Instance_m331BAB5A639187C4DA3A184CAB019F6EEAF005E6 (void);
// 0x00000184 System.Void UnityEngine.Purchasing.EventQueue::SetAdsUrl(System.String)
extern void EventQueue_SetAdsUrl_m18BF111F90FDA56C28A9DB30D9C60A3D91CB2B0B (void);
// 0x00000185 System.Void UnityEngine.Purchasing.EventQueue::SetIapUrl(System.String)
extern void EventQueue_SetIapUrl_mDFE0E960046798DE447691D9BB1B010996E68E43 (void);
// 0x00000186 System.Void UnityEngine.Purchasing.AsyncWebUtil::Get(System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
extern void AsyncWebUtil_Get_m92B87F271ECAEEB075FB7A4DD2C8B731837DF0D4 (void);
// 0x00000187 System.Void UnityEngine.Purchasing.AsyncWebUtil::Post(System.String,System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
extern void AsyncWebUtil_Post_m53862E7F40076B1D1600EF2961795AD03091E6AF (void);
// 0x00000188 System.Collections.IEnumerator UnityEngine.Purchasing.AsyncWebUtil::Process(UnityEngine.WWW,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
extern void AsyncWebUtil_Process_m97DF4691419615D482FBFFA9BA8DA3D64F35C857 (void);
// 0x00000189 System.Void UnityEngine.Purchasing.AsyncWebUtil::Schedule(System.Action,System.Int32)
extern void AsyncWebUtil_Schedule_m4D28D17D4B89669B1CF8C1C4CE874289632ACA7C (void);
// 0x0000018A System.Collections.IEnumerator UnityEngine.Purchasing.AsyncWebUtil::DoInvoke(System.Action,System.Int32)
extern void AsyncWebUtil_DoInvoke_mE10166D8A0D1DCFA4C7A51065FB5FC1217F7CEC1 (void);
// 0x0000018B System.Void UnityEngine.Purchasing.AsyncWebUtil::.ctor()
extern void AsyncWebUtil__ctor_m508FDFF94C9A9B751446B1D7626BD4D1BD7745D0 (void);
// 0x0000018C System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::.ctor(System.Int32)
extern void U3CProcessU3Ed__2__ctor_m1260393B26580C7B6E5117CD6B04E621A728062C (void);
// 0x0000018D System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.IDisposable.Dispose()
extern void U3CProcessU3Ed__2_System_IDisposable_Dispose_m722F493AFFB96818C2D64956C49455E5FCE7732D (void);
// 0x0000018E System.Boolean UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::MoveNext()
extern void U3CProcessU3Ed__2_MoveNext_m4BF7DF1659F52EAC56DEDE2BEF9A66AF014C49E3 (void);
// 0x0000018F System.Object UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CProcessU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7C6889E55EBB9AC236EE47C200C28FDF605774C4 (void);
// 0x00000190 System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.IEnumerator.Reset()
extern void U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_m7AC256A6D8BB308AB1A1E8C512BF1C41F3ECC1F0 (void);
// 0x00000191 System.Object UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.IEnumerator.get_Current()
extern void U3CProcessU3Ed__2_System_Collections_IEnumerator_get_Current_mA461BD85F6B147E973E33240C162D62CC53D819C (void);
// 0x00000192 System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::.ctor(System.Int32)
extern void U3CDoInvokeU3Ed__4__ctor_mB54E18AE9C5FC2823403F9D38584F802F952BC7B (void);
// 0x00000193 System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.IDisposable.Dispose()
extern void U3CDoInvokeU3Ed__4_System_IDisposable_Dispose_mBC7895D54ABD1F5C9E1BDF690BB575E786721EF3 (void);
// 0x00000194 System.Boolean UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::MoveNext()
extern void U3CDoInvokeU3Ed__4_MoveNext_m9F4F75B32F5147C3BB4420BEE81604B1E8FF7592 (void);
// 0x00000195 System.Object UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDoInvokeU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE461C5FE718AC9715C306995F919872740849616 (void);
// 0x00000196 System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.IEnumerator.Reset()
extern void U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m58D873A1B64EF9D302C5E23BE1C2DE2ACF20448F (void);
// 0x00000197 System.Object UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_get_Current_m1E9415E1CE5ED0950B4F0BFDA0440A70C6ADEA12 (void);
// 0x00000198 System.Void UnityEngine.Purchasing.IAsyncWebUtil::Get(System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
// 0x00000199 System.Void UnityEngine.Purchasing.IAsyncWebUtil::Schedule(System.Action,System.Int32)
// 0x0000019A System.String UnityEngine.Purchasing.QueryHelper::ToQueryString(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void QueryHelper_ToQueryString_m9C0DD8285BA11E47BFC57E478924621DC8F64365 (void);
// 0x0000019B System.Void UnityEngine.Purchasing.Price::OnBeforeSerialize()
extern void Price_OnBeforeSerialize_m76DD910879EDC1E012B91B5B2868E8330475494F (void);
// 0x0000019C System.Void UnityEngine.Purchasing.Price::OnAfterDeserialize()
extern void Price_OnAfterDeserialize_m5BAA514B39A65E32DBDB417BA261CF151F57E0B8 (void);
// 0x0000019D System.Void UnityEngine.Purchasing.Price::.ctor()
extern void Price__ctor_m157938070A88CE1B1C00149EC06E64BD0BD9CBD7 (void);
// 0x0000019E System.String UnityEngine.Purchasing.LocalizedProductDescription::get_Title()
extern void LocalizedProductDescription_get_Title_m37104F5FF53146AB82EE8EC7E0F3276CAC39BF76 (void);
// 0x0000019F System.String UnityEngine.Purchasing.LocalizedProductDescription::get_Description()
extern void LocalizedProductDescription_get_Description_mF332276E57691D17E99A73EE24BC100100293AE3 (void);
// 0x000001A0 System.String UnityEngine.Purchasing.LocalizedProductDescription::DecodeNonLatinCharacters(System.String)
extern void LocalizedProductDescription_DecodeNonLatinCharacters_mCF7DED9FB1FC7976A070F44B7A7E0FBEE8E91080 (void);
// 0x000001A1 System.Void UnityEngine.Purchasing.LocalizedProductDescription::.ctor()
extern void LocalizedProductDescription__ctor_m0EF340A7351FB44FB513854FF330B4B8D37A5002 (void);
// 0x000001A2 System.Void UnityEngine.Purchasing.LocalizedProductDescription_<>c::.cctor()
extern void U3CU3Ec__cctor_m25FCFAD57F86318C41C505C8751F620CF1AB56E1 (void);
// 0x000001A3 System.Void UnityEngine.Purchasing.LocalizedProductDescription_<>c::.ctor()
extern void U3CU3Ec__ctor_mF5521CA424C8103923ACE80EDFB5F10916D9C9C2 (void);
// 0x000001A4 System.String UnityEngine.Purchasing.LocalizedProductDescription_<>c::<DecodeNonLatinCharacters>b__11_0(System.Text.RegularExpressions.Match)
extern void U3CU3Ec_U3CDecodeNonLatinCharactersU3Eb__11_0_mC6308C3C1692E6D2B1AEBC046E292C47FBB79847 (void);
// 0x000001A5 System.String UnityEngine.Purchasing.ProductCatalogPayout::get_typeString()
extern void ProductCatalogPayout_get_typeString_m2F511CB6704150047D5858A7BFBC41003284E5D8 (void);
// 0x000001A6 System.String UnityEngine.Purchasing.ProductCatalogPayout::get_subtype()
extern void ProductCatalogPayout_get_subtype_mAAAA333FD904B78A7C50BDFA060D1A2AA04F5B28 (void);
// 0x000001A7 System.Double UnityEngine.Purchasing.ProductCatalogPayout::get_quantity()
extern void ProductCatalogPayout_get_quantity_m46AF6469BB0BCE402F3EB4D2FF2C668B4D871D84 (void);
// 0x000001A8 System.String UnityEngine.Purchasing.ProductCatalogPayout::get_data()
extern void ProductCatalogPayout_get_data_m9E8AA38C84A7F689A9CA8F59A0DE4AE81D4CDDDC (void);
// 0x000001A9 System.Void UnityEngine.Purchasing.ProductCatalogPayout::.ctor()
extern void ProductCatalogPayout__ctor_m233297D24A04B8144E4EF0085031D192D6252E41 (void);
// 0x000001AA System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::get_Payouts()
extern void ProductCatalogItem_get_Payouts_m010E64C3132A9B76BEBF29E124CAD60E5ED3705C (void);
// 0x000001AB System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::get_allStoreIDs()
extern void ProductCatalogItem_get_allStoreIDs_mC4B06B8870297CBC9F1E589852927533B4C6C1B0 (void);
// 0x000001AC System.Void UnityEngine.Purchasing.ProductCatalogItem::.ctor()
extern void ProductCatalogItem__ctor_m978A55D0AF1C88757C2E3137B29D16E32586BB49 (void);
// 0x000001AD System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allProducts()
extern void ProductCatalog_get_allProducts_m52CF5A590881433A56E9B08BFB0CFAC645657C76 (void);
// 0x000001AE System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allValidProducts()
extern void ProductCatalog_get_allValidProducts_mDB5D245A6ACE210F12BBF29FB6BDF832294B3317 (void);
// 0x000001AF System.Void UnityEngine.Purchasing.ProductCatalog::Initialize()
extern void ProductCatalog_Initialize_m7F30F013AF6E49C6D30796E124826F183A014099 (void);
// 0x000001B0 System.Void UnityEngine.Purchasing.ProductCatalog::Initialize(UnityEngine.Purchasing.IProductCatalogImpl)
extern void ProductCatalog_Initialize_m555637D807B67D70ABECE1E55CEBD662B8B559A9 (void);
// 0x000001B1 System.Boolean UnityEngine.Purchasing.ProductCatalog::IsEmpty()
extern void ProductCatalog_IsEmpty_m6CEB058736FE032493798C25E94B04D3DD939714 (void);
// 0x000001B2 UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::Deserialize(System.String)
extern void ProductCatalog_Deserialize_m32375A94AF222C7F23CE41F3A74BF90721AE1EF2 (void);
// 0x000001B3 UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::FromTextAsset(UnityEngine.TextAsset)
extern void ProductCatalog_FromTextAsset_m46B9FC9FB964D8FF02EDE572D1437D1E41E84A95 (void);
// 0x000001B4 UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
extern void ProductCatalog_LoadDefaultCatalog_mCE9C4FE451372F86BC3075C983BD2F4648252823 (void);
// 0x000001B5 System.Void UnityEngine.Purchasing.ProductCatalog::.ctor()
extern void ProductCatalog__ctor_m3FA16C014E3D57AF8838775F6131260F3C15DA9A (void);
// 0x000001B6 System.Void UnityEngine.Purchasing.ProductCatalog_<>c::.cctor()
extern void U3CU3Ec__cctor_mC4EFA583FB0145FFEF21D90C3781889412855EAF (void);
// 0x000001B7 System.Void UnityEngine.Purchasing.ProductCatalog_<>c::.ctor()
extern void U3CU3Ec__ctor_m1D58784C432D777FD3D1CEDF680AEFDD648CDADE (void);
// 0x000001B8 System.Boolean UnityEngine.Purchasing.ProductCatalog_<>c::<get_allValidProducts>b__8_0(UnityEngine.Purchasing.ProductCatalogItem)
extern void U3CU3Ec_U3Cget_allValidProductsU3Eb__8_0_m45B81DA63553A9D8AEB53591683EB83EF08E3831 (void);
// 0x000001B9 UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.IProductCatalogImpl::LoadDefaultCatalog()
// 0x000001BA UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalogImpl::LoadDefaultCatalog()
extern void ProductCatalogImpl_LoadDefaultCatalog_m9F4F89474708D771EC9A17B45270CDD5934C3DAC (void);
// 0x000001BB System.Void UnityEngine.Purchasing.ProductCatalogImpl::.ctor()
extern void ProductCatalogImpl__ctor_m216DFBDB51B285D0332A0A4A70706B8DBCFC5DCD (void);
// 0x000001BC System.String UnityEngine.Purchasing.ProfileData::get_AppId()
extern void ProfileData_get_AppId_mC8B3BDD528BB78E75A441A5D6661371FFCF6EC4C (void);
// 0x000001BD System.Void UnityEngine.Purchasing.ProfileData::set_AppId(System.String)
extern void ProfileData_set_AppId_m872FCA2538FE36F740D12F7C9C7E8C61C9B8C9DA (void);
// 0x000001BE System.String UnityEngine.Purchasing.ProfileData::get_UserId()
extern void ProfileData_get_UserId_mA8DAEF2C0B06556640B59FFB7649C681ACCC44C5 (void);
// 0x000001BF System.Void UnityEngine.Purchasing.ProfileData::set_UserId(System.String)
extern void ProfileData_set_UserId_mD766C0E9FFA8CAA6216ABCDC4672DE363047A00F (void);
// 0x000001C0 System.UInt64 UnityEngine.Purchasing.ProfileData::get_SessionId()
extern void ProfileData_get_SessionId_m73013945A9642D31B8B991AFBDFF2A52A9AA6ABB (void);
// 0x000001C1 System.Void UnityEngine.Purchasing.ProfileData::set_SessionId(System.UInt64)
extern void ProfileData_set_SessionId_mCF58EA7B2425598109D054AADA587AA945E78004 (void);
// 0x000001C2 System.String UnityEngine.Purchasing.ProfileData::get_Platform()
extern void ProfileData_get_Platform_m4BC04FDB4D074E8FEE9DFFF01B73880928195B76 (void);
// 0x000001C3 System.Void UnityEngine.Purchasing.ProfileData::set_Platform(System.String)
extern void ProfileData_set_Platform_m5004577D6590096A37560736ED6A4DD40E9FC333 (void);
// 0x000001C4 System.Int32 UnityEngine.Purchasing.ProfileData::get_PlatformId()
extern void ProfileData_get_PlatformId_mC07E14F777FB2F9B5FCD834B7DE6D38674F2C8CE (void);
// 0x000001C5 System.Void UnityEngine.Purchasing.ProfileData::set_PlatformId(System.Int32)
extern void ProfileData_set_PlatformId_m051DCD326D07808E4E8448B55ED1F2FDD1E582E8 (void);
// 0x000001C6 System.String UnityEngine.Purchasing.ProfileData::get_SdkVer()
extern void ProfileData_get_SdkVer_m6752CBFDDC096FD79F8C94C003827A637CD3F007 (void);
// 0x000001C7 System.Void UnityEngine.Purchasing.ProfileData::set_SdkVer(System.String)
extern void ProfileData_set_SdkVer_m869C18FAD0860470C61E2C1CBAB43A74BF8CE224 (void);
// 0x000001C8 System.String UnityEngine.Purchasing.ProfileData::get_OsVer()
extern void ProfileData_get_OsVer_mB15438E193084444BCE201902051226E8C20C2A8 (void);
// 0x000001C9 System.Void UnityEngine.Purchasing.ProfileData::set_OsVer(System.String)
extern void ProfileData_set_OsVer_mD645E899933BE6DB04847B65F7E3190F2A6AFCB7 (void);
// 0x000001CA System.Int32 UnityEngine.Purchasing.ProfileData::get_ScreenWidth()
extern void ProfileData_get_ScreenWidth_m89217B0934CA13D430849107B62E0D511F226008 (void);
// 0x000001CB System.Void UnityEngine.Purchasing.ProfileData::set_ScreenWidth(System.Int32)
extern void ProfileData_set_ScreenWidth_mB6700430DDA592B552C742C250DDF410A3B75762 (void);
// 0x000001CC System.Int32 UnityEngine.Purchasing.ProfileData::get_ScreenHeight()
extern void ProfileData_get_ScreenHeight_mC606DA38EC8538A31BE6C197812E182F252F65C4 (void);
// 0x000001CD System.Void UnityEngine.Purchasing.ProfileData::set_ScreenHeight(System.Int32)
extern void ProfileData_set_ScreenHeight_mF829CED130AF0540D59F790D0BD06AC5FEABFE2F (void);
// 0x000001CE System.Single UnityEngine.Purchasing.ProfileData::get_ScreenDpi()
extern void ProfileData_get_ScreenDpi_m364A269BE5CAA702AE0021B1C8AC9A323B1BD6DC (void);
// 0x000001CF System.Void UnityEngine.Purchasing.ProfileData::set_ScreenDpi(System.Single)
extern void ProfileData_set_ScreenDpi_mA7CF4D9EDEFFF3C9F0459A1761E618F295C9B7FD (void);
// 0x000001D0 System.String UnityEngine.Purchasing.ProfileData::get_ScreenOrientation()
extern void ProfileData_get_ScreenOrientation_mAF11EFEBEC084EBB7CAC4977984AB676B1412FFF (void);
// 0x000001D1 System.Void UnityEngine.Purchasing.ProfileData::set_ScreenOrientation(System.String)
extern void ProfileData_set_ScreenOrientation_m2EC95A3CAF0B48D5C483C3D161103F28EA7D807B (void);
// 0x000001D2 System.String UnityEngine.Purchasing.ProfileData::get_DeviceId()
extern void ProfileData_get_DeviceId_mD13A67A99B833A8F1D022B5245F6A3784D2B8BFF (void);
// 0x000001D3 System.Void UnityEngine.Purchasing.ProfileData::set_DeviceId(System.String)
extern void ProfileData_set_DeviceId_m64DD69644E6C384071D7CE08F96EF526844083B6 (void);
// 0x000001D4 System.String UnityEngine.Purchasing.ProfileData::get_BuildGUID()
extern void ProfileData_get_BuildGUID_m445CB89FDDEDB2F0B34DCECD358D0C2C637B45C6 (void);
// 0x000001D5 System.String UnityEngine.Purchasing.ProfileData::get_IapVer()
extern void ProfileData_get_IapVer_m9A3CB1E507EEDC9D3355154CE25C438883E7A4CF (void);
// 0x000001D6 System.Void UnityEngine.Purchasing.ProfileData::set_IapVer(System.String)
extern void ProfileData_set_IapVer_m912896DDFED96468F18DB49BA9B59FD8EC9A2685 (void);
// 0x000001D7 System.String UnityEngine.Purchasing.ProfileData::get_AdsGamerToken()
extern void ProfileData_get_AdsGamerToken_m87BFE3B91D49B4826955E4F7DDAA01DD9A8CCEC4 (void);
// 0x000001D8 System.Void UnityEngine.Purchasing.ProfileData::set_AdsGamerToken(System.String)
extern void ProfileData_set_AdsGamerToken_mDCFB7B17B7229358ED94C62506B39CDF46201F57 (void);
// 0x000001D9 System.Nullable`1<System.Boolean> UnityEngine.Purchasing.ProfileData::get_TrackingOptOut()
extern void ProfileData_get_TrackingOptOut_mBC8CEFA41DDCCE09CE6F238C51178A484702CD6D (void);
// 0x000001DA System.Void UnityEngine.Purchasing.ProfileData::set_TrackingOptOut(System.Nullable`1<System.Boolean>)
extern void ProfileData_set_TrackingOptOut_mB82D4CE5935AB6268C45B31CF84A19E0FF6C76B5 (void);
// 0x000001DB System.Nullable`1<System.Int32> UnityEngine.Purchasing.ProfileData::get_AdsABGroup()
extern void ProfileData_get_AdsABGroup_m09B8E1B13F5631B9FE4C0B138C7AC1129B92BAFB (void);
// 0x000001DC System.Void UnityEngine.Purchasing.ProfileData::set_AdsABGroup(System.Nullable`1<System.Int32>)
extern void ProfileData_set_AdsABGroup_mD6771ED97F3E1C03B502029057F91450A4BC6B2A (void);
// 0x000001DD System.String UnityEngine.Purchasing.ProfileData::get_AdsGameId()
extern void ProfileData_get_AdsGameId_m9F88F6C67509045AF196036476135CF69DE30122 (void);
// 0x000001DE System.Void UnityEngine.Purchasing.ProfileData::set_AdsGameId(System.String)
extern void ProfileData_set_AdsGameId_m993B5D55C3925F635123F4CD5FE7492FBA70ECEF (void);
// 0x000001DF System.Nullable`1<System.Int32> UnityEngine.Purchasing.ProfileData::get_StoreABGroup()
extern void ProfileData_get_StoreABGroup_m88E77F95A1DB78085DFF6BB376E7DA52677118DC (void);
// 0x000001E0 System.String UnityEngine.Purchasing.ProfileData::get_CatalogId()
extern void ProfileData_get_CatalogId_mBAF2FA7FF3501A429634B0F4CBE526BD27E4C1BA (void);
// 0x000001E1 System.String UnityEngine.Purchasing.ProfileData::get_StoreName()
extern void ProfileData_get_StoreName_m21E7EACD2CCAF5C7BC4EE9409F073A2A27BE23F4 (void);
// 0x000001E2 System.Void UnityEngine.Purchasing.ProfileData::set_StoreName(System.String)
extern void ProfileData_set_StoreName_m2B817EADAF18579B4EEF4E2E149F0EC32567988B (void);
// 0x000001E3 System.String UnityEngine.Purchasing.ProfileData::get_GameVersion()
extern void ProfileData_get_GameVersion_m09D7B695739B0C1ED1610109DD55A60E9C567B9E (void);
// 0x000001E4 System.Void UnityEngine.Purchasing.ProfileData::set_GameVersion(System.String)
extern void ProfileData_set_GameVersion_m9F68557C52CB6F77D0F1455C0013EEAC260F1AC1 (void);
// 0x000001E5 System.Nullable`1<System.Boolean> UnityEngine.Purchasing.ProfileData::get_StoreTestEnabled()
extern void ProfileData_get_StoreTestEnabled_m89ED43DC74DF9940BCDA48F6A155651D89785404 (void);
// 0x000001E6 System.Void UnityEngine.Purchasing.ProfileData::.ctor(Uniject.IUtil)
extern void ProfileData__ctor_mA1E8ECDF5A9891480F0D82CCE5F46C335D660A95 (void);
// 0x000001E7 System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.ProfileData::GetProfileDict()
extern void ProfileData_GetProfileDict_mD9781909373452003240DB9399F7EC440844AD5A (void);
// 0x000001E8 System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.ProfileData::GetProfileIds()
extern void ProfileData_GetProfileIds_mA1DD7EEED0CE715A61B7113A7EE42E719AE88745 (void);
// 0x000001E9 UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.ProfileData::Instance(Uniject.IUtil)
extern void ProfileData_Instance_m13EF7002A0B88F02DFC7B0F10C1263C417BE0930 (void);
// 0x000001EA System.Void UnityEngine.Purchasing.ProfileData::SetGamerToken(System.String)
extern void ProfileData_SetGamerToken_mABB842F09A64A456325838BEAD2DBA0EC7C677FA (void);
// 0x000001EB System.Void UnityEngine.Purchasing.ProfileData::SetTrackingOptOut(System.Nullable`1<System.Boolean>)
extern void ProfileData_SetTrackingOptOut_mDDC2A82AD79EABD0C7CC10F66EDB62B6015CE03A (void);
// 0x000001EC System.Void UnityEngine.Purchasing.ProfileData::SetGameId(System.String)
extern void ProfileData_SetGameId_m12A7486F17140CA2AB91E38EC728BF8C328CC82D (void);
// 0x000001ED System.Void UnityEngine.Purchasing.ProfileData::SetABGroup(System.Nullable`1<System.Int32>)
extern void ProfileData_SetABGroup_mC0488DB2106920E43414FE4CE95EC09FE002D0EF (void);
// 0x000001EE System.Void UnityEngine.Purchasing.ProfileData::SetStoreName(System.String)
extern void ProfileData_SetStoreName_m6CD7097D221DD61010F55D89411191750710BE3C (void);
// 0x000001EF System.Boolean UnityEngine.Purchasing.Promo::IsReady()
extern void Promo_IsReady_m1DEA469BA53C86984D8984FD2C4B5F80B6309B08 (void);
// 0x000001F0 System.String UnityEngine.Purchasing.Promo::Version()
extern void Promo_Version_mB9BE26A0A8CBB2F4BD44987D9A758B15BB3E7715 (void);
// 0x000001F1 System.Void UnityEngine.Purchasing.Promo::.ctor()
extern void Promo__ctor_m2C948B3572E3DB7501E7F200488C2ADE1239D3C4 (void);
// 0x000001F2 System.Void UnityEngine.Purchasing.Promo::InitPromo(UnityEngine.RuntimePlatform,UnityEngine.ILogger,Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void Promo_InitPromo_mE9A5745EF9B1A0D3AD6D994F0BAA230FFE5C3427 (void);
// 0x000001F3 System.Void UnityEngine.Purchasing.Promo::InitPromo(UnityEngine.RuntimePlatform,UnityEngine.ILogger,System.String,Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void Promo_InitPromo_m43238EAEDFE3E01B6B789C3A342819864A105B6C (void);
// 0x000001F4 System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.Promo::UpdatePromoProductList()
extern void Promo_UpdatePromoProductList_mEE076E8E0AC0C9E5BE092317F04B6B0E50A98BE0 (void);
// 0x000001F5 System.Void UnityEngine.Purchasing.Promo::ProvideProductsToAds(UnityEngine.Purchasing.JSONStore,UnityEngine.Purchasing.Extension.IStoreCallback,System.Boolean)
extern void Promo_ProvideProductsToAds_m6A13572A6F9344445A55D9159F9C66EDFF701E03 (void);
// 0x000001F6 System.Void UnityEngine.Purchasing.Promo::ProvideProductsToAds(System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>,System.Boolean)
extern void Promo_ProvideProductsToAds_mDE65389BAD6A29EC5F4C370F2C331374175F69FE (void);
// 0x000001F7 System.String UnityEngine.Purchasing.Promo::QueryPromoProducts()
extern void Promo_QueryPromoProducts_mBAD6205D8853B5C245F1062670E1FE04F80DCA04 (void);
// 0x000001F8 System.Boolean UnityEngine.Purchasing.Promo::InitiatePromoPurchase(System.String)
extern void Promo_InitiatePromoPurchase_mDA5097F47DB164B4667D03ED33398CD2F2494CF6 (void);
// 0x000001F9 System.Boolean UnityEngine.Purchasing.Promo::InitiatePurchasingCommand(System.String)
extern void Promo_InitiatePurchasingCommand_m15727035766E3B70FA4992AF7D16C7184550533B (void);
// 0x000001FA System.Boolean UnityEngine.Purchasing.Promo::ExecPromoPurchase(System.String)
extern void Promo_ExecPromoPurchase_mE58C626DB326BC738B7FBCC618A00F32D26AA035 (void);
// 0x000001FB System.Void UnityEngine.Purchasing.Promo::.cctor()
extern void Promo__cctor_m4C84FF3EDA540A683BA05CEF1A3F3926F454B405 (void);
// 0x000001FC System.String UnityEngine.Purchasing.StandardPurchasingModule::get_m_persistentDataPath()
extern void StandardPurchasingModule_get_m_persistentDataPath_m5943D71EDC780A89375E9171B14CD48AE297D8E7 (void);
// 0x000001FD System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_m_persistentDataPath(System.String)
extern void StandardPurchasingModule_set_m_persistentDataPath_m9348EC3F202C7B589C73C078F189E3125238DDC4 (void);
// 0x000001FE Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::get_util()
extern void StandardPurchasingModule_get_util_mF5D005F7F51E6A419D968FC475EDCC22828AA27B (void);
// 0x000001FF System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_util(Uniject.IUtil)
extern void StandardPurchasingModule_set_util_m88A788246C380C16E057B352A66C32D2FD1BA487 (void);
// 0x00000200 UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::get_logger()
extern void StandardPurchasingModule_get_logger_m7F34ACA3BD4BC202E9F40E2FDCBB7432B9CF4EE7 (void);
// 0x00000201 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_logger(UnityEngine.ILogger)
extern void StandardPurchasingModule_set_logger_mCD0C79DD7839EA109B5942E7C7A4DD22C2B25FC5 (void);
// 0x00000202 UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.StandardPurchasingModule::get_webUtil()
extern void StandardPurchasingModule_get_webUtil_m1C703DDFEDA01C2D1FC1D778A8CF06154DB424EF (void);
// 0x00000203 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_webUtil(UnityEngine.Purchasing.IAsyncWebUtil)
extern void StandardPurchasingModule_set_webUtil_m6E95D9D38E7F5B1C6315353AF591EAF7328F598F (void);
// 0x00000204 UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::get_storeInstance()
extern void StandardPurchasingModule_get_storeInstance_m82D1C1835EBC5E09BA277B27BC3C54EE843FEB43 (void);
// 0x00000205 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_storeInstance(UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance)
extern void StandardPurchasingModule_set_storeInstance_m166CD509CBB02AB0A1D220CDD03787EE1A052720 (void);
// 0x00000206 System.Void UnityEngine.Purchasing.StandardPurchasingModule::.ctor(Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,UnityEngine.Purchasing.INativeStoreProvider,UnityEngine.RuntimePlatform,UnityEngine.Purchasing.AppStore,System.Boolean,System.String)
extern void StandardPurchasingModule__ctor_m093EDEC38E006198B6F9C2233F6F169BA236BDCA (void);
// 0x00000207 UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::get_appStore()
extern void StandardPurchasingModule_get_appStore_m209568F8E3E06E14271B0FCF6C904C70D017B29E (void);
// 0x00000208 UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::get_useFakeStoreUIMode()
extern void StandardPurchasingModule_get_useFakeStoreUIMode_mCCC3169D9C63FBBB8E6875DC5BBECD1269C1E349 (void);
// 0x00000209 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
extern void StandardPurchasingModule_set_useFakeStoreUIMode_m6656242250E0EA7D3FC4FE592CCC8B8CEC1A4A2D (void);
// 0x0000020A System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::get_useFakeStoreAlways()
extern void StandardPurchasingModule_get_useFakeStoreAlways_mC16269947F394248C2152061B721B7C8E3FF525F (void);
// 0x0000020B System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreAlways(System.Boolean)
extern void StandardPurchasingModule_set_useFakeStoreAlways_m8D9E0393ACA690730754D26A4C780AE846A0DE23 (void);
// 0x0000020C UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
extern void StandardPurchasingModule_Instance_mFA5DE73F8C49FEE371D96E3A756D144C14893056 (void);
// 0x0000020D UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance(UnityEngine.Purchasing.AppStore)
extern void StandardPurchasingModule_Instance_mA16973D44917895561591C62D2F3BF1AB66CA45E (void);
// 0x0000020E System.Void UnityEngine.Purchasing.StandardPurchasingModule::Configure()
extern void StandardPurchasingModule_Configure_mBB0CEBDED2A58D08CA983130FB4B52D81E01D1E7 (void);
// 0x0000020F UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::InstantiateStore()
extern void StandardPurchasingModule_InstantiateStore_mE2C1006E48982E52BF4797DCC563ED1103991527 (void);
// 0x00000210 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateAndroid()
extern void StandardPurchasingModule_InstantiateAndroid_m4680F54F6D13862583292B86BF2A97F0C6A2F076 (void);
// 0x00000211 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateGoogleStore()
extern void StandardPurchasingModule_InstantiateGoogleStore_mE0EC5A4DEF5952CA88D082F1EF0EE736C3F358A1 (void);
// 0x00000212 System.Void UnityEngine.Purchasing.StandardPurchasingModule::BindGoogleExtension(UnityEngine.Purchasing.GooglePlayStoreExtensions)
extern void StandardPurchasingModule_BindGoogleExtension_m6510C9FDD6B4B5CEA717F72E72F528484675B069 (void);
// 0x00000213 UnityEngine.Purchasing.GooglePlayStoreExtensions UnityEngine.Purchasing.StandardPurchasingModule::BuildGooglePlayStoreExtensions(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback)
extern void StandardPurchasingModule_BuildGooglePlayStoreExtensions_m686C95EB081B6BEB5AAEC9455C51B878B439856B (void);
// 0x00000214 UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService UnityEngine.Purchasing.StandardPurchasingModule::BuildGooglePlayStoreServiceAar(UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback)
extern void StandardPurchasingModule_BuildGooglePlayStoreServiceAar_m04BA0BD4E376CC5FCA1EDAEB176D5A4195FF48DC (void);
// 0x00000215 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateUDP()
extern void StandardPurchasingModule_InstantiateUDP_mFCD6476079958EB07B9A03716A3231AD190B5642 (void);
// 0x00000216 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateAndroidHelper(UnityEngine.Purchasing.JSONStore)
extern void StandardPurchasingModule_InstantiateAndroidHelper_m9812BDCD0009BF804B53B458412D3A66F1F0C252 (void);
// 0x00000217 UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.StandardPurchasingModule::GetAndroidNativeStore(UnityEngine.Purchasing.JSONStore)
extern void StandardPurchasingModule_GetAndroidNativeStore_mE823C45C9F2B88335C43E839FDD434CD96CD87CF (void);
// 0x00000218 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateApple()
extern void StandardPurchasingModule_InstantiateApple_m6473AAD934148C8739F0275EC93B6EE59AE7CEC1 (void);
// 0x00000219 System.Void UnityEngine.Purchasing.StandardPurchasingModule::UseMockWindowsStore(System.Boolean)
extern void StandardPurchasingModule_UseMockWindowsStore_m4DA7505AA377B212EAA2259C6AFA71CA792C4196 (void);
// 0x0000021A UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::instantiateWindowsStore()
extern void StandardPurchasingModule_instantiateWindowsStore_m39AF99EB5F8606F585EB086C0DD64C5C44BABFFD (void);
// 0x0000021B UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateFacebook()
extern void StandardPurchasingModule_InstantiateFacebook_mD2AC5AA8F2E3475C262383B33863DC23883D2F2D (void);
// 0x0000021C UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateFakeStore()
extern void StandardPurchasingModule_InstantiateFakeStore_mA66F36895B2F6F45CC24565296D23F91C4F69A36 (void);
// 0x0000021D System.Void UnityEngine.Purchasing.StandardPurchasingModule::.cctor()
extern void StandardPurchasingModule__cctor_m6AD9289C9641938304A6675F7796D2259D3FD801 (void);
// 0x0000021E System.Void UnityEngine.Purchasing.StandardPurchasingModule::<Configure>b__49_0(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern void StandardPurchasingModule_U3CConfigureU3Eb__49_0_mC9AB3E42C0762214A1E277E10CBA3D3C804EFC5B (void);
// 0x0000021F System.String UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::get_storeName()
extern void StoreInstance_get_storeName_mB93ABA8F50209F113F01717BAAF03C194FC569C5 (void);
// 0x00000220 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::get_instance()
extern void StoreInstance_get_instance_mBB6EE49D643F2037A9D8AE5B834366897E1FDC24 (void);
// 0x00000221 System.Void UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::.ctor(System.String,UnityEngine.Purchasing.Extension.IStore)
extern void StoreInstance__ctor_m057D521AC3051D91937571F946480A20FCC28AED (void);
// 0x00000222 System.Void UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration::.ctor(UnityEngine.Purchasing.StandardPurchasingModule)
extern void MicrosoftConfiguration__ctor_mB5FC6B9C40C41E4C4BC1BD9726B10D1CF19BAD13 (void);
// 0x00000223 System.Void UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration::set_useMockBillingSystem(System.Boolean)
extern void MicrosoftConfiguration_set_useMockBillingSystem_m54FE78CBDD1386E8974B944BC7AE944BB75F31F3 (void);
// 0x00000224 UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StoreConfiguration::get_androidStore()
extern void StoreConfiguration_get_androidStore_m22BA58FD855FD5F0670CD451CBC08E3B1313590B (void);
// 0x00000225 System.Void UnityEngine.Purchasing.StoreConfiguration::set_androidStore(UnityEngine.Purchasing.AppStore)
extern void StoreConfiguration_set_androidStore_m33B19DD27D1BF6ED0AE2570D6F7AB696CBDE6108 (void);
// 0x00000226 System.Void UnityEngine.Purchasing.StoreConfiguration::.ctor(UnityEngine.Purchasing.AppStore)
extern void StoreConfiguration__ctor_mD948B9A32CAD78C9A8CF77B8877DFFF9417C2B03 (void);
// 0x00000227 UnityEngine.Purchasing.StoreConfiguration UnityEngine.Purchasing.StoreConfiguration::Deserialize(System.String)
extern void StoreConfiguration_Deserialize_mECFB54BF69A74BDA87FC12F417FEAF3E8FD650DD (void);
// 0x00000228 System.Void UnityEngine.Purchasing.SubscriptionInfo::.ctor(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,System.String)
extern void SubscriptionInfo__ctor_m7F09AB4E2DA1B5B368BAEE2C2869FAAFDCDB4BD3 (void);
// 0x00000229 UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isExpired()
extern void SubscriptionInfo_isExpired_mDB6F774AE28048539F7A7F044F24006A1645EF32 (void);
// 0x0000022A System.Void UnityEngine.Purchasing.ReceiptParserException::.ctor()
extern void ReceiptParserException__ctor_mCD5C4667FC7D9EA5271EDC205421DF5885F26B56 (void);
// 0x0000022B System.Void UnityEngine.Purchasing.InvalidProductTypeException::.ctor()
extern void InvalidProductTypeException__ctor_m5F6031EBA282C01003BB3560D1C4B2FAA88330D6 (void);
// 0x0000022C UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.FakeTransactionHistoryExtensions::GetLastPurchaseFailureDescription()
extern void FakeTransactionHistoryExtensions_GetLastPurchaseFailureDescription_mA629765756CA764BFBA5F719B462A7AE857F0289 (void);
// 0x0000022D UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.FakeTransactionHistoryExtensions::GetLastStoreSpecificPurchaseErrorCode()
extern void FakeTransactionHistoryExtensions_GetLastStoreSpecificPurchaseErrorCode_m5D714753BD667D388F5ACE3DB66CAE9B9B4AE611 (void);
// 0x0000022E System.Void UnityEngine.Purchasing.FakeTransactionHistoryExtensions::.ctor()
extern void FakeTransactionHistoryExtensions__ctor_mB076798E378551498F0709B3296B91414D7E41EE (void);
// 0x0000022F UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.ITransactionHistoryExtensions::GetLastPurchaseFailureDescription()
// 0x00000230 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.ITransactionHistoryExtensions::GetLastStoreSpecificPurchaseErrorCode()
// 0x00000231 System.Void UnityEngine.Purchasing.FakeMicrosoftExtensions::RestoreTransactions()
extern void FakeMicrosoftExtensions_RestoreTransactions_mC2279783234A1FB3EB2901F4F85258984B61A0B3 (void);
// 0x00000232 System.Void UnityEngine.Purchasing.FakeMicrosoftExtensions::.ctor()
extern void FakeMicrosoftExtensions__ctor_mF9DFEDE2227813DFAE1D8AF1421FCF141AA000E4 (void);
// 0x00000233 System.Void UnityEngine.Purchasing.IMicrosoftConfiguration::set_useMockBillingSystem(System.Boolean)
// 0x00000234 System.Void UnityEngine.Purchasing.IMicrosoftExtensions::RestoreTransactions()
// 0x00000235 System.Void UnityEngine.Purchasing.WinRTStore::.ctor(UnityEngine.Purchasing.Default.IWindowsIAP,Uniject.IUtil,UnityEngine.ILogger)
extern void WinRTStore__ctor_mF12552330A2AC5C7B8780743DB0C0B918138A3C9 (void);
// 0x00000236 System.Void UnityEngine.Purchasing.WinRTStore::SetWindowsIAP(UnityEngine.Purchasing.Default.IWindowsIAP)
extern void WinRTStore_SetWindowsIAP_mCC698FCB8D20A192D523A91E96C652260CA328E2 (void);
// 0x00000237 System.Void UnityEngine.Purchasing.WinRTStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void WinRTStore_Initialize_mF69BA990E528A14F670FB8BEFA1E0364EA146B52 (void);
// 0x00000238 System.Void UnityEngine.Purchasing.WinRTStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void WinRTStore_RetrieveProducts_m1A5E0FDBBAA8785ADC29AD871DE4508A57E76763 (void);
// 0x00000239 System.Void UnityEngine.Purchasing.WinRTStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void WinRTStore_FinishTransaction_mFFFD6CBE162D548780D3BE76436678D59F077299 (void);
// 0x0000023A System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
extern void WinRTStore_init_m9167BBFC6511F83A1DA15507B11E4CCA4B9DC5EF (void);
// 0x0000023B System.Void UnityEngine.Purchasing.WinRTStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void WinRTStore_Purchase_m5DF86881261AB077860AA9B5257A12622D302A28 (void);
// 0x0000023C System.Void UnityEngine.Purchasing.WinRTStore::restoreTransactions(System.Boolean)
extern void WinRTStore_restoreTransactions_m886EF0C361C58352C64114E9E6B9F700AB07E4C9 (void);
// 0x0000023D System.Void UnityEngine.Purchasing.WinRTStore::RestoreTransactions()
extern void WinRTStore_RestoreTransactions_mC7888F4B07B2FC149635B4D3378DC23F423C3ABB (void);
// 0x0000023E System.Void UnityEngine.Purchasing.WinRTStore_<>c::.cctor()
extern void U3CU3Ec__cctor_m05457177E1FA6B466B7C23B03AFE9111B976E2AA (void);
// 0x0000023F System.Void UnityEngine.Purchasing.WinRTStore_<>c::.ctor()
extern void U3CU3Ec__ctor_m01C91D60F6B78EBAB4D09FEB118B3237078C0CF5 (void);
// 0x00000240 System.Boolean UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m40D09A941BE7B5778638D7D6EF658C89CDC4F809 (void);
// 0x00000241 UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_1(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_mA65E85AE35F533491D7788A0A6605E1D7D74207F (void);
// 0x00000242 System.Void UnityEngine.Purchasing.FacebookStoreImpl::.ctor(Uniject.IUtil)
extern void FacebookStoreImpl__ctor_m5016680B16507EC48D2BE75D76D9158277D20B23 (void);
// 0x00000243 System.Void UnityEngine.Purchasing.FacebookStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeFacebookStore)
extern void FacebookStoreImpl_SetNativeStore_m47A9A764668DD55A66D34EE8EEB0E7FFE5AA747B (void);
// 0x00000244 System.Void UnityEngine.Purchasing.FacebookStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern void FacebookStoreImpl_MessageCallback_m07158CE4BA5566E17C3228CD6B47B31673F3D1BC (void);
// 0x00000245 System.Void UnityEngine.Purchasing.FacebookStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern void FacebookStoreImpl_ProcessMessage_mA1118ED988CBB48AE6463A8E9A8F990AB8CBA1EA (void);
// 0x00000246 System.Void UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m79523A8E82472EA6F2D7C1117F05BD5491EF76AA (void);
// 0x00000247 System.Void UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::<MessageCallback>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CMessageCallbackU3Eb__0_m2623D68F261E9EEACB5D2F610F69F0F3704C9BD6 (void);
// 0x00000248 System.String UnityEngine.Purchasing.FakeStore::get_unavailableProductId()
extern void FakeStore_get_unavailableProductId_m05EA8C670AECE90A35D389D08961653BC0D6673C (void);
// 0x00000249 System.Void UnityEngine.Purchasing.FakeStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void FakeStore_Initialize_m3E532CADCEB3DCCF193937BBB3A7F99472974126 (void);
// 0x0000024A System.Void UnityEngine.Purchasing.FakeStore::RetrieveProducts(System.String)
extern void FakeStore_RetrieveProducts_m22E4CF09A25B28A6BCC65DD45C281A15E9210753 (void);
// 0x0000024B System.Void UnityEngine.Purchasing.FakeStore::StoreRetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void FakeStore_StoreRetrieveProducts_m93F87F104D6B500DD1CBCEC9B39222282243DFB4 (void);
// 0x0000024C System.Void UnityEngine.Purchasing.FakeStore::Purchase(System.String,System.String)
extern void FakeStore_Purchase_mFCB5C3E067DFB8EE0557768F4E66141E858B17FA (void);
// 0x0000024D System.Void UnityEngine.Purchasing.FakeStore::FakePurchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void FakeStore_FakePurchase_mAF1049957BAF391209C99CCF511F509E5FAF35FD (void);
// 0x0000024E System.Void UnityEngine.Purchasing.FakeStore::FinishTransaction(System.String,System.String)
extern void FakeStore_FinishTransaction_m19E69E64891377338C3FAFAF9A757BF12D742014 (void);
// 0x0000024F System.Void UnityEngine.Purchasing.FakeStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void FakeStore_FinishTransaction_m485BCF104465075534C494E45C2EED6F63A720BB (void);
// 0x00000250 System.Boolean UnityEngine.Purchasing.FakeStore::StartUI(System.Object,UnityEngine.Purchasing.FakeStore_DialogType,System.Action`2<System.Boolean,T>)
// 0x00000251 System.Void UnityEngine.Purchasing.FakeStore::.ctor()
extern void FakeStore__ctor_mE1D9B6636A05051A48E8AF1BFFB3EAA1ABD40EA5 (void);
// 0x00000252 System.Void UnityEngine.Purchasing.FakeStore::<>n__0(System.String,System.String,System.String)
extern void FakeStore_U3CU3En__0_mF2B26EDE30304CCA40E18D645D165921F0C3E847 (void);
// 0x00000253 System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m38B90B6D962AA0B54D11F4A189A23EC2C521609D (void);
// 0x00000254 System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0::<StoreRetrieveProducts>b__0(System.Boolean,UnityEngine.Purchasing.InitializationFailureReason)
extern void U3CU3Ec__DisplayClass13_0_U3CStoreRetrieveProductsU3Eb__0_m03D8EA93D28F3BEF232FD8AD8AB16E1ED630579E (void);
// 0x00000255 System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_mEF424506316CAF7F57E82EA801C33BB44E08CCD4 (void);
// 0x00000256 System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0::<FakePurchase>b__0(System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason)
extern void U3CU3Ec__DisplayClass15_0_U3CFakePurchaseU3Eb__0_m34959F6F7D57D35D0EB1AA752A442CFFE212D1E2 (void);
// 0x00000257 System.Void UnityEngine.Purchasing.UIFakeStore::.ctor()
extern void UIFakeStore__ctor_m50CCD47DA90EBFE7392209F40FB0BFEE559173C3 (void);
// 0x00000258 System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.Object,UnityEngine.Purchasing.FakeStore_DialogType,System.Action`2<System.Boolean,T>)
// 0x00000259 System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.String,System.String,System.String,System.Collections.Generic.List`1<System.String>,System.Action`2<System.Boolean,System.Int32>)
extern void UIFakeStore_StartUI_mCE845B933A4DF891F0926D7C49EE4F97528861B9 (void);
// 0x0000025A System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
extern void UIFakeStore_InstantiateDialog_m97B69A01780B2888A4173342B5C94065ACCC2890 (void);
// 0x0000025B System.String UnityEngine.Purchasing.UIFakeStore::CreatePurchaseQuestion(UnityEngine.Purchasing.ProductDefinition)
extern void UIFakeStore_CreatePurchaseQuestion_mF82069AB8BFB007FD4CCB038821DC7E21DACE464 (void);
// 0x0000025C System.String UnityEngine.Purchasing.UIFakeStore::CreateRetrieveProductsQuestion(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void UIFakeStore_CreateRetrieveProductsQuestion_mBBDC4F25739EA0BD25CFD0DD5F378B7750D7FF71 (void);
// 0x0000025D UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
extern void UIFakeStore_GetOkayButton_mCE50A662A84D45C331211032FC1CCA4D0187A774 (void);
// 0x0000025E UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
extern void UIFakeStore_GetCancelButton_m5801E7B85A37C94981E6F20C33E18B9D7AAF66FF (void);
// 0x0000025F UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
extern void UIFakeStore_GetCancelButtonGameObject_mB7B3AC8C1B6FE9983B7F4D51AE8835F70F4B180F (void);
// 0x00000260 UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
extern void UIFakeStore_GetOkayButtonText_m36EDCB2BD98EBC72FB2A77EBD04BD8F0AC938B2A (void);
// 0x00000261 UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
extern void UIFakeStore_GetCancelButtonText_m308D2A419A2EBBE6C7710F7ACDF308D40D0D2453 (void);
// 0x00000262 UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
extern void UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE (void);
// 0x00000263 UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
extern void UIFakeStore_GetDropdownContainerGameObject_m29AD74E9C24BEA69069CBE44C510FE69BE51A443 (void);
// 0x00000264 System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
extern void UIFakeStore_OkayButtonClicked_m86FC1B4FAB78AC4FF5D3440ABD6FFEC41DF3E72B (void);
// 0x00000265 System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
extern void UIFakeStore_CancelButtonClicked_mD2A026FA6BBE33C81C6BBA3F1CBEA29E23285E25 (void);
// 0x00000266 System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
extern void UIFakeStore_DropdownValueChanged_m34CE15E3D67653F6CBED4D29E6F3EC291473A21B (void);
// 0x00000267 System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
extern void UIFakeStore_CloseDialog_m0BC4FBED90982409408EB9A82CA61B08ADD2B968 (void);
// 0x00000268 System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
extern void UIFakeStore_IsShowingDialog_m9B21893E2FED340C154F42020F7A6053A8A6A740 (void);
// 0x00000269 System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_0()
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m589DDC53D995FB3BE7A71CC4E6ACEAF8EA11B34B (void);
// 0x0000026A System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_1()
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_1_mE417A1D0652B28295179F1515CC321D7E85FA2A2 (void);
// 0x0000026B System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_2()
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m17DCC3074704531E05FD6BCDA8EF784229169389 (void);
// 0x0000026C System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_3(System.Int32)
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_3_mC8DA5DD905A138D2ECFE276CABEF9C8C3A53ADBF (void);
// 0x0000026D System.Void UnityEngine.Purchasing.UIFakeStore_DialogRequest::.ctor()
extern void DialogRequest__ctor_m0EE18E18F5572DE6E01C5C7FB85CF48E1EF2E30E (void);
// 0x0000026E System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::OnDestroy()
extern void LifecycleNotifier_OnDestroy_m9EAB496743EFA56C16A181757BA8F187FE6B434F (void);
// 0x0000026F System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::.ctor()
extern void LifecycleNotifier__ctor_m70AAC206750C96D72C7EB9BB33250D89ABED44B0 (void);
// 0x00000270 System.Void UnityEngine.Purchasing.UIFakeStore_<>c__DisplayClass14_0`1::.ctor()
// 0x00000271 System.Void UnityEngine.Purchasing.UIFakeStore_<>c__DisplayClass14_0`1::<StartUI>b__0(System.Boolean,System.Int32)
// 0x00000272 System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.cctor()
extern void U3CU3Ec__cctor_m5A7D7189B89B7036F25B5F8B66E96DB01AA3811E (void);
// 0x00000273 System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.ctor()
extern void U3CU3Ec__ctor_m68499DF5F7137E155BF18558709A290681667B71 (void);
// 0x00000274 System.String UnityEngine.Purchasing.UIFakeStore_<>c::<CreateRetrieveProductsQuestion>b__18_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m173E736672AFB37CF15038AE1A8DD1A9B2236D5F (void);
// 0x00000275 UnityEngine.Purchasing.FileReference UnityEngine.Purchasing.FileReference::CreateInstance(System.String,UnityEngine.ILogger,Uniject.IUtil)
extern void FileReference_CreateInstance_m24A68AAB8E04A179348CA1A2B4198E36A1693BF3 (void);
// 0x00000276 System.Void UnityEngine.Purchasing.FileReference::.ctor(System.String,UnityEngine.ILogger)
extern void FileReference__ctor_m71362EB9623B903718336B59501765F4CAB6A53D (void);
// 0x00000277 System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ProductDefinitionExtensions::DecodeJSON(System.Collections.Generic.List`1<System.Object>,System.String)
extern void ProductDefinitionExtensions_DecodeJSON_mEB9D072DBCBBD8D9C77BE913EB4746ADC8746A47 (void);
// 0x00000278 T[] UnityEngine.Purchasing.Extension.UnityUtil::GetAnyComponentsOfType()
// 0x00000279 System.DateTime UnityEngine.Purchasing.Extension.UnityUtil::get_currentTime()
extern void UnityUtil_get_currentTime_m9998B93D0649A38DEB71AF1611A364755614F18E (void);
// 0x0000027A System.String UnityEngine.Purchasing.Extension.UnityUtil::get_persistentDataPath()
extern void UnityUtil_get_persistentDataPath_m72263BE99AE655FD4EA6FAE6B4B2D8DE3EF8FC05 (void);
// 0x0000027B System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceUniqueIdentifier()
extern void UnityUtil_get_deviceUniqueIdentifier_mC61FA371D829BFEFB8647D3B70DD8BED00C00F28 (void);
// 0x0000027C System.String UnityEngine.Purchasing.Extension.UnityUtil::get_unityVersion()
extern void UnityUtil_get_unityVersion_m194DC2558985510A07DEE40C4733A4363CF6C6CF (void);
// 0x0000027D System.String UnityEngine.Purchasing.Extension.UnityUtil::get_cloudProjectId()
extern void UnityUtil_get_cloudProjectId_mDC60D1298E34A64A14186C66734EB1B0568105A7 (void);
// 0x0000027E System.String UnityEngine.Purchasing.Extension.UnityUtil::get_userId()
extern void UnityUtil_get_userId_mB2DA0FDEB40C38D9F17447D93B4EC6980D8649F1 (void);
// 0x0000027F System.String UnityEngine.Purchasing.Extension.UnityUtil::get_gameVersion()
extern void UnityUtil_get_gameVersion_m510DE87814E2179619B8C6AA7FE89B59222F74BF (void);
// 0x00000280 System.UInt64 UnityEngine.Purchasing.Extension.UnityUtil::get_sessionId()
extern void UnityUtil_get_sessionId_m1D9F7C8D0FC79414BC733BA80911868B1AF888C7 (void);
// 0x00000281 UnityEngine.RuntimePlatform UnityEngine.Purchasing.Extension.UnityUtil::get_platform()
extern void UnityUtil_get_platform_mC684411D906C87AC88535B27B310B9DC7E2FAD53 (void);
// 0x00000282 System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::get_isEditor()
extern void UnityUtil_get_isEditor_m1A99D3D2BE4F86E659CE5176FC201BCE7005635D (void);
// 0x00000283 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceModel()
extern void UnityUtil_get_deviceModel_mAE6DFEE2720F614D5869A45AC84B52956572AE67 (void);
// 0x00000284 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceName()
extern void UnityUtil_get_deviceName_mA2B1B09E3CEBFFAC5FBEE63FCCE5DBDB34828374 (void);
// 0x00000285 UnityEngine.DeviceType UnityEngine.Purchasing.Extension.UnityUtil::get_deviceType()
extern void UnityUtil_get_deviceType_m7C1D01F35954F8C35000C3DAEC32E38A6DABE1AB (void);
// 0x00000286 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_operatingSystem()
extern void UnityUtil_get_operatingSystem_mA83BED6B5DEB6B816B599002FB077FDFAA10E743 (void);
// 0x00000287 System.Int32 UnityEngine.Purchasing.Extension.UnityUtil::get_screenWidth()
extern void UnityUtil_get_screenWidth_mDE7F3D9FA2E37FB133E165984FF2A490A80DA7B5 (void);
// 0x00000288 System.Int32 UnityEngine.Purchasing.Extension.UnityUtil::get_screenHeight()
extern void UnityUtil_get_screenHeight_m5820A1087B63691F4871EFF1C175B472E36A11C0 (void);
// 0x00000289 System.Single UnityEngine.Purchasing.Extension.UnityUtil::get_screenDpi()
extern void UnityUtil_get_screenDpi_mD2325284983D575D946428CB48462960927ABD78 (void);
// 0x0000028A System.String UnityEngine.Purchasing.Extension.UnityUtil::get_screenOrientation()
extern void UnityUtil_get_screenOrientation_mCB40D3613AA1964BF193EF27B3ED38E5FAD46B0C (void);
// 0x0000028B System.Object UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator)
extern void UnityUtil_Uniject_IUtil_InitiateCoroutine_mBC52C1AC3552B7490D348A9F386DC1EEEE55D0C8 (void);
// 0x0000028C System.Void UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator,System.Int32)
extern void UnityUtil_Uniject_IUtil_InitiateCoroutine_mC6A4B59AE744544A6C5D6539A10A1230DF9B1A3A (void);
// 0x0000028D System.Void UnityEngine.Purchasing.Extension.UnityUtil::RunOnMainThread(System.Action)
extern void UnityUtil_RunOnMainThread_mB26B68B44BFC4595FAE89297DE908CCFBF1BFBC2 (void);
// 0x0000028E System.Object UnityEngine.Purchasing.Extension.UnityUtil::GetWaitForSeconds(System.Int32)
extern void UnityUtil_GetWaitForSeconds_m28B6A34D4438EDD6EAFFAB4B46AE78D2248A1D2E (void);
// 0x0000028F System.Void UnityEngine.Purchasing.Extension.UnityUtil::Start()
extern void UnityUtil_Start_mEA4BE994252936CE71FD8FDFBEFB4E964F1217BE (void);
// 0x00000290 T UnityEngine.Purchasing.Extension.UnityUtil::FindInstanceOfType()
// 0x00000291 T UnityEngine.Purchasing.Extension.UnityUtil::LoadResourceInstanceOfType()
// 0x00000292 System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::PcPlatform()
extern void UnityUtil_PcPlatform_mE81A7BFC1D011FE21F3FD51D33ED54D51CA58F91 (void);
// 0x00000293 System.Void UnityEngine.Purchasing.Extension.UnityUtil::DebugLog(System.String,System.Object[])
extern void UnityUtil_DebugLog_m0D9666F278F66A91CE2CA73CB1236C43574D79B0 (void);
// 0x00000294 System.Collections.IEnumerator UnityEngine.Purchasing.Extension.UnityUtil::DelayedCoroutine(System.Collections.IEnumerator,System.Int32)
extern void UnityUtil_DelayedCoroutine_mC01CE141F48420F1FE664FEFED36940F601AC125 (void);
// 0x00000295 System.Void UnityEngine.Purchasing.Extension.UnityUtil::Update()
extern void UnityUtil_Update_mE583F6CA38B794C402EBF81148EF4EBBEA8F3C3F (void);
// 0x00000296 System.Void UnityEngine.Purchasing.Extension.UnityUtil::AddPauseListener(System.Action`1<System.Boolean>)
extern void UnityUtil_AddPauseListener_mBCD51B5FA47F1FC3F535BAF1A9BA7F8A1648AC6B (void);
// 0x00000297 System.Void UnityEngine.Purchasing.Extension.UnityUtil::OnApplicationPause(System.Boolean)
extern void UnityUtil_OnApplicationPause_mE74C4D1F59A1256F09149DF9940B986CEDFE1527 (void);
// 0x00000298 System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::IsClassOrSubclass(System.Type,System.Type)
extern void UnityUtil_IsClassOrSubclass_m9EFB978D2A0A70FF6D8782B01559393F13CDBFA2 (void);
// 0x00000299 System.Void UnityEngine.Purchasing.Extension.UnityUtil::.ctor()
extern void UnityUtil__ctor_m202A4CA90B5291DFA291B90DA497384DA1FAD8B0 (void);
// 0x0000029A System.Void UnityEngine.Purchasing.Extension.UnityUtil::.cctor()
extern void UnityUtil__cctor_mBF38EC9EE232DD52A6EF82841258F2845E09433B (void);
// 0x0000029B System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::.ctor(System.Int32)
extern void U3CDelayedCoroutineU3Ed__49__ctor_m9BC1D238D5E2CF7E2E7E1D4BA14C29F841ED03A1 (void);
// 0x0000029C System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.IDisposable.Dispose()
extern void U3CDelayedCoroutineU3Ed__49_System_IDisposable_Dispose_m83AF2B9F1E8D0771BB8FCD7C7B9F8EC3E5E9C96F (void);
// 0x0000029D System.Boolean UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::MoveNext()
extern void U3CDelayedCoroutineU3Ed__49_MoveNext_m4D5880AC77AF2375F3CA55641BCD024B2AAC9F23 (void);
// 0x0000029E System.Object UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDelayedCoroutineU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m445D9FD9420A7720B165A946B9C273FC7589FEF2 (void);
// 0x0000029F System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.IEnumerator.Reset()
extern void U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_m529B54873453FC1159C1E19489562CB985BDD818 (void);
// 0x000002A0 System.Object UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.IEnumerator.get_Current()
extern void U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_get_Current_m62DEE0F6821DBD1124B4D945389AF85CE4BAA675 (void);
// 0x000002A1 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.BillingClientResponseEnum::GetBillingResponseCodeJavaObject()
extern void BillingClientResponseEnum_GetBillingResponseCodeJavaObject_m851EA6D317E2248B91BEAEC8B59DF5BDFDA1B873 (void);
// 0x000002A2 System.Int32 UnityEngine.Purchasing.Models.BillingClientResponseEnum::OK()
extern void BillingClientResponseEnum_OK_mCCDFAECE40972F255BCDE690745AD3A9F2A36878 (void);
// 0x000002A3 System.Int32 UnityEngine.Purchasing.Models.BillingClientResponseEnum::USER_CANCELED()
extern void BillingClientResponseEnum_USER_CANCELED_m66928ECA3940423372E73AB2B24A41CEE0FAA3DC (void);
// 0x000002A4 System.Int32 UnityEngine.Purchasing.Models.BillingClientResponseEnum::ITEM_ALREADY_OWNED()
extern void BillingClientResponseEnum_ITEM_ALREADY_OWNED_mAE1755298A6F3B49B70C61288CFD7F8A85D8274E (void);
// 0x000002A5 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetBillingFlowParamClass()
extern void GoogleBillingClient_GetBillingFlowParamClass_m67ABFFFB850B50C9B0527DF2E8EE3DC815BB32A5 (void);
// 0x000002A6 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetConsumeParamsClass()
extern void GoogleBillingClient_GetConsumeParamsClass_m740EAC7281C9D82E66F694EA2AEC86405ACBAD45 (void);
// 0x000002A7 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetAcknowledgePurchaseParamsClass()
extern void GoogleBillingClient_GetAcknowledgePurchaseParamsClass_m289CA6FBC5E7F9FDABE3E0EA08F7266519671026 (void);
// 0x000002A8 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetBillingClientClass()
extern void GoogleBillingClient_GetBillingClientClass_m4F823213FE6EFE8D30D0C943E54BD252EEAF67D5 (void);
// 0x000002A9 System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePurchaseUpdatedListener)
extern void GoogleBillingClient__ctor_m678C54C3130B1076F777B2857D33B9EDEDB1C734 (void);
// 0x000002AA System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::StartConnection(UnityEngine.Purchasing.Interfaces.IBillingClientStateListener)
extern void GoogleBillingClient_StartConnection_m8D24EC76A8CADDB62BBB9096A9181DD1331BC447 (void);
// 0x000002AB UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::QueryPurchase(System.String)
extern void GoogleBillingClient_QueryPurchase_m5F3230B480AE2BF1CDB20BB7D11A5D78495B4E72 (void);
// 0x000002AC System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::QuerySkuDetailsAsync(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.SkuDetailsResponseListener)
extern void GoogleBillingClient_QuerySkuDetailsAsync_mB81D2C8FDBB190538A28A5396638287F611D9EBB (void);
// 0x000002AD UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::LaunchBillingFlow(UnityEngine.AndroidJavaObject,System.String,System.String,System.Int32)
extern void GoogleBillingClient_LaunchBillingFlow_m7B33B15BDA9A9A3D4ED7DB70EC695B22847ADFC3 (void);
// 0x000002AE UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::MakeBillingFlowParams(UnityEngine.AndroidJavaObject,System.String,System.String,System.Int32)
extern void GoogleBillingClient_MakeBillingFlowParams_mF57B032D890E7BF8E1671CDBAD6F6D8FE563437F (void);
// 0x000002AF UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::SetObfuscatedProfileIdIfNeeded(UnityEngine.AndroidJavaObject)
extern void GoogleBillingClient_SetObfuscatedProfileIdIfNeeded_m6CCA4F098DAF465E717424A733233C1E0A73C008 (void);
// 0x000002B0 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::SetObfuscatedAccountIdIfNeeded(UnityEngine.AndroidJavaObject)
extern void GoogleBillingClient_SetObfuscatedAccountIdIfNeeded_mB42F594170DEA49FA88E26F1C46D4EA79DB98A2A (void);
// 0x000002B1 System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::ConsumeAsync(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>)
extern void GoogleBillingClient_ConsumeAsync_m4D66CE90A32747F0D4854B1F19760361B56E89D5 (void);
// 0x000002B2 System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::AcknowledgePurchase(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GoogleBillingClient_AcknowledgePurchase_m836B8271C40BC28495D98F4A008A01E7C5786B53 (void);
// 0x000002B3 System.Void UnityEngine.Purchasing.Models.GoogleBillingResult::.ctor(UnityEngine.AndroidJavaObject)
extern void GoogleBillingResult__ctor_mCEC48D96C6006E96F52C9A559499E878D0B1C5A5 (void);
// 0x000002B4 System.String UnityEngine.Purchasing.Models.GoogleBillingStrings::getWarningMessageMoreThanOneSkuFound(System.String)
extern void GoogleBillingStrings_getWarningMessageMoreThanOneSkuFound_mF8697F3C8C4A6CF339FC84F6C3127853A456CEA0 (void);
// 0x000002B5 System.Void UnityEngine.Purchasing.Models.GooglePurchase::.ctor(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
extern void GooglePurchase__ctor_m658537B6A3A4DE03A30C29E4EA5D92A3736F9434 (void);
// 0x000002B6 System.Boolean UnityEngine.Purchasing.Models.GooglePurchase::IsAcknowledged()
extern void GooglePurchase_IsAcknowledged_mF575484B73B929DD41D9B8AE090236EB869E3CA2 (void);
// 0x000002B7 System.Boolean UnityEngine.Purchasing.Models.GooglePurchase::IsPurchased()
extern void GooglePurchase_IsPurchased_mE781DBF8111F70F09370DD3ACFF6B0F096C9D75E (void);
// 0x000002B8 System.Void UnityEngine.Purchasing.Models.GooglePurchaseResult::.ctor(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePurchaseResult__ctor_m9E27530F5CD329C490B4F321FA894B01F8906733 (void);
// 0x000002B9 System.Void UnityEngine.Purchasing.Models.GooglePurchaseResult::FillPurchases(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePurchaseResult_FillPurchases_m37E45046AB08346E877CD5BABB781BABAFB5BC4E (void);
// 0x000002BA UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GooglePurchaseStateEnum::GetPurchaseStateJavaObject()
extern void GooglePurchaseStateEnum_GetPurchaseStateJavaObject_m4E627337309B62407789366C83CFD8A29C1283DE (void);
// 0x000002BB System.Int32 UnityEngine.Purchasing.Models.GooglePurchaseStateEnum::Purchased()
extern void GooglePurchaseStateEnum_Purchased_m3387EF2F9D7B747CC4432008CA0324A6A0744FF7 (void);
// 0x000002BC System.Int32 UnityEngine.Purchasing.Models.GooglePurchaseStateEnum::Pending()
extern void GooglePurchaseStateEnum_Pending_mBE435A9305D88F0C76FE5E7CB8F8E3B35A80933F (void);
// 0x000002BD UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::GetSkuTypeJavaObject()
extern void GoogleSkuTypeEnum_GetSkuTypeJavaObject_m699D0F5EF88E9B5F8133B4ED0AF5C28C5E46662B (void);
// 0x000002BE System.String UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::InApp()
extern void GoogleSkuTypeEnum_InApp_m4F9E9F5E2BA2C101E2A6C7B9E92AF017A70882EE (void);
// 0x000002BF System.String UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::Sub()
extern void GoogleSkuTypeEnum_Sub_mC2223B94DCE3DBFFDDEA26749697CFCC87C02172 (void);
// 0x000002C0 System.Void UnityEngine.Purchasing.Models.ProductDescriptionQuery::.ctor(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
extern void ProductDescriptionQuery__ctor_mD41730BDF5D715EDCE8335049783B66BF3AFBE40 (void);
// 0x000002C1 System.Void UnityEngine.Purchasing.Interfaces.IBillingClientStateListener::RegisterOnConnected(System.Action)
// 0x000002C2 System.Void UnityEngine.Purchasing.Interfaces.IBillingClientStateListener::RegisterOnDisconnected(System.Action)
// 0x000002C3 System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::StartConnection(UnityEngine.Purchasing.Interfaces.IBillingClientStateListener)
// 0x000002C4 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::QueryPurchase(System.String)
// 0x000002C5 System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::QuerySkuDetailsAsync(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.SkuDetailsResponseListener)
// 0x000002C6 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::LaunchBillingFlow(UnityEngine.AndroidJavaObject,System.String,System.String,System.Int32)
// 0x000002C7 System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::ConsumeAsync(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>)
// 0x000002C8 System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::AcknowledgePurchase(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
// 0x000002C9 System.Void UnityEngine.Purchasing.Interfaces.IGoogleFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
// 0x000002CA System.String UnityEngine.Purchasing.Interfaces.IGoogleLastKnownProductService::GetLastKnownProductId()
// 0x000002CB System.Void UnityEngine.Purchasing.Interfaces.IGoogleLastKnownProductService::SetLastKnownProductId(System.String)
// 0x000002CC System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
// 0x000002CD System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::Purchase(UnityEngine.Purchasing.ProductDefinition)
// 0x000002CE System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
// 0x000002CF System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::FetchPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
// 0x000002D0 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x000002D1 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::SetStoreExtension(UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal)
// 0x000002D2 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::OnPurchaseSuccessful(System.String,System.String,System.String)
// 0x000002D3 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
// 0x000002D4 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::NotifyDeferredPurchase(System.String,System.String)
// 0x000002D5 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
// 0x000002D6 System.Void UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService::QueryPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
// 0x000002D7 System.Void UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService::QueryAsyncSku(UnityEngine.Purchasing.ProductDefinition,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
// 0x000002D8 System.Void UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService::QueryAsyncSku(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
// 0x000002D9 ReturnType UnityEngine.Purchasing.Utils.IAndroidJavaObjectWrapper::Call(System.String,System.Object[])
// 0x000002DA System.IDisposable UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::get_androidJavaObject()
extern void AndroidJavaObjectWrapper_get_androidJavaObject_mDCC34AA2B0D6003BCCA81F4D6703A4D256C2C13F (void);
// 0x000002DB System.Void UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::.ctor(UnityEngine.AndroidJavaObject)
extern void AndroidJavaObjectWrapper__ctor_m63D078654FC89CCDD7B22FC6AAFFBEE858C82855 (void);
// 0x000002DC ReturnType UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::Call(System.String,System.Object[])
// 0x000002DD UnityEngine.Purchasing.Models.GooglePurchase UnityEngine.Purchasing.Utils.GooglePurchaseHelper::MakeGooglePurchase(System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseHelper_MakeGooglePurchase_mC317A1D8EBD2A7860B2B286FE73E04BA94338BDA (void);
// 0x000002DE System.Void UnityEngine.Purchasing.Utils.GooglePurchaseHelper_<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mC095A2AA1F871F95F6066BB6DBDE844E1AB3F5EA (void);
// 0x000002DF System.Boolean UnityEngine.Purchasing.Utils.GooglePurchaseHelper_<>c__DisplayClass0_0::<MakeGooglePurchase>b__0(UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m6EF48E070C2DAA1B780224CE4E57C9EACEF48D86 (void);
// 0x000002E0 System.String UnityEngine.Purchasing.Utils.GoogleReceiptEncoder::EncodeReceipt(System.String,System.String,System.String,System.String)
extern void GoogleReceiptEncoder_EncodeReceipt_mE46AC5ACD1DAE340E8F596DAD9FACDC6F3C40F54 (void);
// 0x000002E1 System.String UnityEngine.Purchasing.Utils.GoogleReceiptEncoder::FormatPayload(System.String,System.String,System.String)
extern void GoogleReceiptEncoder_FormatPayload_mE53628734A576D50196CF0E4F0AD2787E9E95190 (void);
// 0x000002E2 System.Void UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertOnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
extern void SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m477B1A227BB146FAC0FBD37EA6E3157FBFFF73B5 (void);
// 0x000002E3 System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertSkusDetailsToProducts(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void SkuDetailsConverter_ConvertSkusDetailsToProducts_mD1FBBACB9CD6B81CD0EAFDB304526DD6E1E2884B (void);
// 0x000002E4 System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.Utils.SkuDetailsConverter::ToListProducts(UnityEngine.AndroidJavaObject)
extern void SkuDetailsConverter_ToListProducts_mC8B72F7D6984A30A75BC90F2357D9AB34620AECA (void);
// 0x000002E5 UnityEngine.Purchasing.Extension.ProductDescription UnityEngine.Purchasing.Utils.SkuDetailsConverter::BuildProductDescription(UnityEngine.Purchasing.Utils.IAndroidJavaObjectWrapper)
extern void SkuDetailsConverter_BuildProductDescription_mB72B3352CF84D681DFC1122A7266419951A4018C (void);
// 0x000002E6 System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern void U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF8567F97DF83552BA4A74D864C368D80C39853D3 (void);
static Il2CppMethodPointer s_methodPointers[742] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AndroidJavaStore__ctor_m5F76E2C65DB8F33C6F4C9268846BD46A60E01EA3,
	AndroidJavaStore_RetrieveProducts_mED05D8F6B1AA9AD25A302E1F1D0BA90CCB2F9702,
	AndroidJavaStore_Purchase_m8993E3A72A2C0421484F5297286E5A81383E78EB,
	AndroidJavaStore_FinishTransaction_m655272A84D2AFAE348106D54A93408AB06BB32BD,
	NULL,
	NULL,
	NULL,
	NULL,
	JavaBridge__ctor_m1EADD63D348081B7319D16BEFB1A9267DF7EE18A,
	JavaBridge__ctor_mAF862BB26A6A3ACA8CD2CC02C3D8AE973F82CFB2,
	JavaBridge_OnSetupFailed_m91E3E370D8CAAE69343A3300D8E0B3FB7CB7A422,
	JavaBridge_OnProductsRetrieved_mEA4A5C860DD9A073D659EAB1F20E7C7D4A5454B3,
	JavaBridge_OnPurchaseSucceeded_m89F89BB812C6D0C818480C5EC6F2DF5DDEF37014,
	JavaBridge_OnPurchaseFailed_mD9A4155B9D01DD33B3E4497662FC915692633DA3,
	SerializationExtensions_TryGetString_mA1D254C4756372BB26314AB95CF1F58F4640ECCE,
	JSONSerializer_SerializeProductDef_m7121479DE6333CC9A66D119EFB45D6E1DF77F10D,
	JSONSerializer_SerializeProductDefs_m78431207AF5F13A19E626036CB09389BC5C650E8,
	JSONSerializer_SerializeProductDescs_m01666634AD4FB71A400DF54D04ED08586AFCFCB4,
	JSONSerializer_DeserializeProductDescriptions_m167475E1DAB42D60A42F76ECB525788E45B46EE3,
	JSONSerializer_DeserializeFailureReason_m8AB88644628EE2DA9329574D73AA819D2BFD021C,
	JSONSerializer_DeserializeMetadata_m0EA647C5FCFC9280098CF934B76C5048E4CFCB64,
	JSONSerializer_EncodeProductDef_m092885B4ADC61EDBF59BAC932F136542E7E1F0C9,
	JSONSerializer_EncodeProductDesc_m53D8228D9E5C33F836910A56EB9CB9E544D39BC8,
	JSONSerializer_EncodeProductMeta_mD215607B633D211BC89306A0F64FB0D6E01E688E,
	ScriptingStoreCallback__ctor_m222C2DA1C4585A6560084885AE52D37FE15E277C,
	ScriptingStoreCallback_get_products_mB7E71C1863CBB024C07221FB27A100F261CDD8C9,
	ScriptingStoreCallback_OnSetupFailed_mE0A3488E5F48E2140C85B250086F6BD372932FE1,
	ScriptingStoreCallback_OnProductsRetrieved_m2AAEB684A0890BC35E0B9C20CEFD9032B125ED0B,
	ScriptingStoreCallback_OnPurchaseSucceeded_mF28C990DA8EF97A31E9DEFF1CC3403FC398366BF,
	ScriptingStoreCallback_OnPurchaseFailed_m3DC9050425B59FAE70CDB35C5D671E11E5D97D22,
	U3CU3Ec__DisplayClass5_0__ctor_mCAD46EA5BAAAE466EC7FEEF0123E768C4AED83E6,
	U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_mBFA9EC335F595ECBB5E5881550B0BEDF12CF6FBA,
	U3CU3Ec__DisplayClass6_0__ctor_m90B8C82B0CE291CDE483811B04EA42ED0173EEEB,
	U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m3DD4203BD8EEDE5995997F06D172CBEBC2DF693A,
	U3CU3Ec__DisplayClass7_0__ctor_mB18203F20D588E1BC9BFB3CB731C04CED2F2B9E6,
	U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_mDE4398568DE9EC940FC042D38FE7F3BB401077DD,
	U3CU3Ec__DisplayClass9_0__ctor_m458EAB3C0C7F0916B5FBF80E84D4FD881CB766E4,
	U3CU3Ec__DisplayClass9_0_U3COnPurchaseFailedU3Eb__0_m0DB5F3DEE86D1669E6FD76E2042D6C6FF86E8140,
	ScriptingUnityCallback__ctor_m978BCB02379D987773B69E3503C4F669BE5CC099,
	ScriptingUnityCallback_OnSetupFailed_m8F3EC57CADEC7BBE5145EB22BF62928BAA4CC0E6,
	ScriptingUnityCallback_OnProductsRetrieved_m905824FDE87412181D9F4D32B72C0806C2251706,
	ScriptingUnityCallback_OnPurchaseSucceeded_m3EE75B6612F931273BF71A0679156C8976DEF5FE,
	ScriptingUnityCallback_OnPurchaseFailed_m14088242ADF0EAE751031FC5CA6FD20690BEC69C,
	U3CU3Ec__DisplayClass3_0__ctor_mE00EB70073A750D81B067409BABD55B0C5FBD24C,
	U3CU3Ec__DisplayClass3_0_U3COnSetupFailedU3Eb__0_mE77E7D74CF363C9057F8B3EBB6DC777250423BF9,
	U3CU3Ec__DisplayClass4_0__ctor_mFE3DEC2FD3C0BF62CD036A2B8340C1DD0F0D443A,
	U3CU3Ec__DisplayClass4_0_U3COnProductsRetrievedU3Eb__0_m9CC85BA8C6D061C53390B35167FFA5ECD73F0B1B,
	U3CU3Ec__DisplayClass5_0__ctor_m7109250E5751DB60FA734C15A560DC7C3B38C42B,
	U3CU3Ec__DisplayClass5_0_U3COnPurchaseSucceededU3Eb__0_m019E5AEFC2A76F73527D673F01E782B410EE5E2B,
	U3CU3Ec__DisplayClass6_0__ctor_mE17005CFA1B140C66AD3884C7572B854555CA590,
	U3CU3Ec__DisplayClass6_0_U3COnPurchaseFailedU3Eb__0_m8735482CD1DAE2F2C98D77548F1D2EDE455EC86B,
	AmazonAppStoreStoreExtensions__ctor_m0E07A408DD19C3C5A07FB0E7EEFC26C64A94E250,
	FakeAmazonExtensions__ctor_m62F68C4B13931D4C96426FE7BA38C3552AE24178,
	ListExtension_ToJava_m2CA2715CC6F3FD413274D8C64934392887A80A60,
	ListExtension_ToJavaArray_m7CC605D0878CE4099C6D7C1B3EA18E0026A00188,
	UnityActivity_GetUnityPlayerClass_m79E6A7344C141D41D1CF3A3AAAA5D851C9B70896,
	UnityActivity_GetCurrentActivity_m0A189C445F71C361C96784CA2C15569A4D40BEBF,
	ReflectionUtils_HasMethodInInterface_m10E5FF4485C8E01931FED131EF87BF64871EB6AA,
	ReflectionUtils_GetMethod_m43BE07BB570CA2227171BE32044FD92E367CFDB0,
	ReflectionUtils_InvokeMethod_m49D0D9BCBFA75742B735B9152126C37B2D436186,
	FakeGooglePlayStoreExtensions_RestoreTransactions_mA338A2E8867285BFC698653801C07274FFBCC429,
	FakeGooglePlayStoreExtensions__ctor_mD3EC798ABB4DA2F6C89E67209710EED4A62208AC,
	GooglePlayPurchaseCallback_SetStoreCallback_m451838178BD79CF0D71571CB062A325612C46A8C,
	GooglePlayPurchaseCallback_SetStoreExtension_m5A34E1446839ED5F75BA774929DC26546F61C092,
	GooglePlayPurchaseCallback_OnPurchaseSuccessful_m4DC421CA52EED162A14C4DBCB75D73CC95A4276A,
	GooglePlayPurchaseCallback_OnPurchaseFailed_mE278015512CD01DD7DC17B22538F651D214B2F6A,
	GooglePlayPurchaseCallback_NotifyDeferredPurchase_m0E2BF059BA6D5EE72D534D7FEA71D9F6F3828D08,
	GooglePlayPurchaseCallback__ctor_mE4374BEA366D94AF8F40EFA78D3F7FC33010A7EA,
	GooglePlayStore__ctor_m7DD97D0DC4AF60E40AB5741C73B047AE1B81847D,
	GooglePlayStore_Initialize_mEBB0D614AC1BD8D1915B56DD115D184FD790C26B,
	GooglePlayStore_RetrieveProducts_m71AE14BCBC7A928CECE517D42C6ACA237F3C1F65,
	GooglePlayStore_Purchase_mFCC3929E2BFA5E7604F56AE18798618A86BD51FE,
	GooglePlayStore_FinishTransaction_mF0ECEAF45B4E88FC09771E34ABB8D0EB2E1560F8,
	GooglePlayStore_OnPause_mB4286A04C5AA98D69D816CADEF793804F7B7BFC7,
	GooglePlayStoreExtensions__ctor_m04C3ED48CDE3EBF0B2CCEE69B71357F44B11AC62,
	GooglePlayStoreExtensions_RestoreTransactions_m214123C54473F67BD3855D811AE13C222ACF4948,
	GooglePlayStoreExtensions_SetStoreCallback_m765337EC299A72C857E812DA0E87BDE41A51C7C6,
	GooglePlayStoreExtensions_NotifyDeferredPurchase_mAC2D3F9B4E4EA7D78B47B7F22A388386423F63A0,
	U3CU3Ec__DisplayClass8_0__ctor_m0DB70856B62108FB9BD4862146496C8F529051AA,
	U3CU3Ec__DisplayClass8_0_U3CRestoreTransactionsU3Eb__0_mA93D4A676104B0EB8142101FF84CCF93A01070A9,
	StoreCallbackExtensionMethods_FindProductById_m10DD659986419553DD4A7780575CF8673750E202,
	GoogleCachedQuerySkuDetailsService_GetCachedQueriedSkus_mC85CC218E5DCACF2DE980A86DFC7E90D9FD121DF,
	GoogleCachedQuerySkuDetailsService_ContainsSku_m78C588848F64A3BF0B769FC31590BAF21A870C6E,
	GoogleCachedQuerySkuDetailsService_AddCachedQueriedSkus_mAA9C1FC1084D2E08AC0450CABFB56EF06642DEED,
	GoogleCachedQuerySkuDetailsService_UpdateCachedQueriedSku_mBE0AD1CA40B98664E058D59386924A4F3B09A45C,
	GoogleCachedQuerySkuDetailsService__ctor_m9FE87EDA048AF341303B1FA5D333499C226C74F3,
	U3CU3Ec__DisplayClass2_0__ctor_mB825A1428AFE583FF0B2C9FCB5B71C34C8F61F21,
	U3CU3Ec__DisplayClass2_0_U3CContainsSkuU3Eb__0_m13EBEAB4E48019EC24614D197C83CEEF5F580989,
	U3CU3Ec__DisplayClass4_0__ctor_m9D742816A4DA4DE0BAF3AEFC5524D419E92E7327,
	U3CU3Ec__DisplayClass4_0_U3CUpdateCachedQueriedSkuU3Eb__0_m387448638A6158D9D413EFC8F76D9B2D0A035FE1,
	GoogleFinishTransactionService__ctor_m84C354CB4686A4329414FB06EF9327610E729128,
	GoogleFinishTransactionService_FinishTransaction_mE7D56A13750B02DDD672346BC2BA0DA4FEAC9176,
	GoogleFinishTransactionService_PurchaseNeedsAcknowledgement_mA965E7B825EB77A26623CBBC1D470484657D0C49,
	U3CU3Ec__DisplayClass3_0__ctor_mD0EE7285E5348526453463C0E38FC360D46803FF,
	U3CU3Ec__DisplayClass3_0_U3CFinishTransactionU3Eb__0_mFC30A9A5BC70E79C52FC7E10E0CE9B0DD774B537,
	U3CU3Ec__DisplayClass4_0__ctor_m4A65ABDED98348430C4EA68D4CC35D00F4785591,
	U3CU3Ec__DisplayClass4_0_U3CPurchaseNeedsAcknowledgementU3Eb__0_mE750F693E134F278FD59C0655D2D7A9B100342AC,
	GoogleLastKnownProductService_GetLastKnownProductId_m36732FBAA0230DA85C41F4E303C19F5EC26FDC91,
	GoogleLastKnownProductService_SetLastKnownProductId_m3ABD154B31AC3833FC92114531F9B49384FDBBF9,
	GoogleLastKnownProductService__ctor_m5D5158E5D78B4739510D082EC8D8F71FEFD23DD8,
	GooglePlayStoreService__ctor_m798F1A6206B5FA1A2052A6EF2D481AFD259DD82D,
	GooglePlayStoreService_InitConnectionWithGooglePlay_m587CAD67628DF207DF0911B874A16B964D1AE411,
	GooglePlayStoreService_OnConnected_m6A31E1FD4C8B68F55B4D043133A69E6BDE3FAB7D,
	GooglePlayStoreService_DequeueQueryProducts_mFE6A994D931E94BCCBE49518D2B043BDA5235B0B,
	GooglePlayStoreService_DequeueFetchPurchases_mA1C4D52C61F4155DBE89925413456C06B11259F7,
	GooglePlayStoreService_OnDisconnected_m1E652D2C1EE2C2B3FCBFB3918C0B06923AF2A4B8,
	GooglePlayStoreService_RetrieveProducts_mD0D07E08F8128DB3FEEB8CA87BB6F8E6EA5AE6D7,
	GooglePlayStoreService_Purchase_m71CEA6A7DA84A1B91B7EFC46824788075477A765,
	GooglePlayStoreService_Purchase_mA58B4C60D7D8AE287FBD97E9967EB7F64358C9DD,
	GooglePlayStoreService_FinishTransaction_mFE7A66A73296CFD70FF0FC58D3BE5B8294415098,
	GooglePlayStoreService_FetchPurchases_m95D0DE131CAFD419FD5E3E2EAADF79D9B4829CF3,
	GooglePriceChangeService__ctor_m526ACD132D45EDC4E82242CC17D7493E93FD7D5E,
	GooglePurchaseService__ctor_m13B8DF32B5EF753AD6A67CD6199C2EA93E9E5C7A,
	GooglePurchaseService_Purchase_mCB870662B69BA3F56FBE51B2EA63AA4667C83897,
	GooglePurchaseService_OnQuerySkuDetailsResponse_m1443302EF8ACAAE16FD9D43A522BB4F81E3A629B,
	GooglePurchaseService_VerifyAndWarnIfMoreThanOneSku_m5335E3AF505C33A1906ADE3002F2964106D166E0,
	GooglePurchaseService_HandleBillingFlowResult_mB6BB11CE0CD0E91929858202025B0A7839A8E063,
	U3CU3Ec__DisplayClass4_0__ctor_m4C5EADDD74EED184A06861EBC194CE072B1944DA,
	U3CU3Ec__DisplayClass4_0_U3CPurchaseU3Eb__0_mAE10F36BC4EBC2960482BB66A76255CA3ED2AD60,
	GoogleQueryPurchasesService__ctor_m94BBAD4CF002581B25ECA994C1A2D46BF17AF88E,
	GoogleQueryPurchasesService_QueryPurchases_m99AF2B75F4A7EDF2978717327D510026A6B6715A,
	GoogleQueryPurchasesService_HandleOnQueryPurchaseReceived_m6930C59EEFEE7CB773482A96FDCB6CA111D8B585,
	GoogleQueryPurchasesService_QueryPurchasesWithSkuType_mB1E5C83EC06ABAF8A69080E1CF6D7B34BF09E389,
	GoogleQueryPurchasesService_HandleGooglePurchaseResult_m7EBDADE862A1CF59F35091B2AD49B3017960B657,
	U3CU3Ec__DisplayClass3_0__ctor_mF06255FA3513B351C945F140B1CC9B7EB300F73E,
	U3CU3Ec__DisplayClass3_0_U3CQueryPurchasesU3Eb__0_m4797FF90FB9E4E7CD2A9C2613FB419A71F2C8B18,
	U3CU3Ec__DisplayClass3_1__ctor_m32EF4809692FB5EA008B0CD2C01AA39DFD987585,
	U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mC9B923B6358257D442FE6A337295FDFC9FDD516F,
	QuerySkuDetailsService_GetSkuDetailsParamClass_mA49639D19143CB6CFDC34BF5A50B30C9E37250F3,
	QuerySkuDetailsService__ctor_m0CADCB7BDCA31662FD2720A9D1B8EECE32A40F35,
	QuerySkuDetailsService_QueryAsyncSku_mFD866A496B46C6FC8A83775DA5B91FA850924178,
	QuerySkuDetailsService_QueryAsyncSku_m254346559B768D940F86B50017BB26F77F72B8DA,
	QuerySkuDetailsService_QueryAsyncSku_mF88D4B9ACE1322C6A7F67EF1FCDDCCAD7FFD697B,
	QuerySkuDetailsService_QueryInAppsAsync_m76A40A75B91FA34F972B0BAA1ABEBFEE85718CBB,
	QuerySkuDetailsService_QuerySubsAsync_mA53DDEB2AA8B01FCDAB314A1DD0D3ED84FD712BF,
	QuerySkuDetailsService_QuerySkuDetails_m22892ED601AA0DB0C66742E034F4D1CFA54146F3,
	QuerySkuDetailsService_ConsolidateOnSkuDetailsReceived_mBDF6D3104F81E4F419DB03BD538207D63D3A23C8,
	QuerySkuDetailsService_AddToQueriedSkuDetails_m41ADA778B9506F6BBB8739A7770AB20FA810E848,
	QuerySkuDetailsService_Clear_mFBE23D9A053C23A91E83058C4D1151B52CA44A4F,
	U3CU3Ec__DisplayClass12_0__ctor_m7DF6C724D0E7ED8726D84EE57120442029A86124,
	U3CU3Ec__DisplayClass12_0_U3CQueryAsyncSkuU3Eb__0_m0BB58CA841CEB4A2C0119849AF4A61E662380FF1,
	U3CU3Ec__cctor_m1A6D52C8735A819280EDC827CB2E845AF7DDD80B,
	U3CU3Ec__ctor_m6C0E80B5B4BEE9054DDEB8D1A37899C48916B961,
	U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_0_m8BAF9F0A611E5DF1BD374A8A740895A1B176B84B,
	U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_1_m10EF5A691AD065B86E69B378A69CE393559E308F,
	U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_0_m5A808677445AF38E53F074B6179EBC415D300C28,
	U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_1_mBD59E7E0369FB09504CB33122B622671FD73EB42,
	U3CU3Ec__DisplayClass16_0__ctor_m48AF69899B66897887FE1CD1AC4508A62F1DF8AF,
	U3CU3Ec__DisplayClass16_0_U3CQuerySkuDetailsU3Eb__0_m2E3FD031A4BD56F4FDFBE53CFD64A9495EE7F1D1,
	NULL,
	NULL,
	BillingClientStateListener__ctor_mCE9E457FC2FEA0C1E83078E5105718E973711B5B,
	BillingClientStateListener_RegisterOnConnected_m38C6B26909212948E55BCFC8345C7AFB19495A8D,
	BillingClientStateListener_RegisterOnDisconnected_m92083DB1308D21231D60D33955CAC42C43753BCE,
	BillingClientStateListener_onBillingSetupFinished_mEA905DE6B78F04A085D9FC1F0C9826DC83F9452B,
	BillingClientStateListener_onBillingServiceDisconnected_m16F16DE16A550B457DAEFB72441455CB071FE2F6,
	GoogleAcknowledgePurchaseListener__ctor_mB4B4808B585E566C649B08F19F223CAF182C5EB9,
	GoogleAcknowledgePurchaseListener_onAcknowledgePurchaseResponse_mF88D04B0913A5DB2911CF3429E7217D6605CC003,
	GoogleConsumeResponseListener__ctor_mC06D2BDDE4207BBE9D96D8F4D984D40ADA97B513,
	GoogleConsumeResponseListener_onConsumeResponse_m17DBD2DA9E9723E19844FA2EFFA9C42FC55111B1,
	GooglePriceChangeConfirmationListener__ctor_m75E237741D229C8C89D3CB701C4CBC5D9F00C037,
	GooglePriceChangeConfirmationListener_onPriceChangeConfirmationResult_m04A0D47FA40A2CD8729D7DC8DB6A5AEA303296E5,
	GooglePurchaseUpdatedListener__ctor_mA951906BD5FC9C8FB1AB42278AFEF44128B18005,
	GooglePurchaseUpdatedListener_onPurchasesUpdated_mBBE45D5EC75018BB6E8E5F47F195CACD6F032FB8,
	GooglePurchaseUpdatedListener_HandleErrorCases_m3A08D7759E3A9F7EBCC799B8A762958B8BDF97E1,
	GooglePurchaseUpdatedListener_ApplyOnPurchases_m3F86FF7B363D76B5FEC0A83EF2CD2CBBAE3394A4,
	GooglePurchaseUpdatedListener_ApplyOnPurchases_m7887BAEC760FE32A57E887D626A0297EA8A6BBBB,
	GooglePurchaseUpdatedListener_OnPurchaseOk_m7223054738BF1C4523334B14B6B640B6E51C5A85,
	GooglePurchaseUpdatedListener_OnPurchaseCanceled_m8ECE50611EB495F3D0DBBE5B6BE27B1DA3898BF9,
	GooglePurchaseUpdatedListener_OnPurchaseAlreadyOwned_m253DABAE4E42FEE29AF471D7AD67E91277D21987,
	GooglePurchaseUpdatedListener_OnPurchaseFailed_m7C52FDFB01418D53E30C71EC3BC164838CFD6F4C,
	SkuDetailsResponseListener__ctor_mBB4B8172E5E11783CB949439554D2B65FB30ECD1,
	SkuDetailsResponseListener_onSkuDetailsResponse_mBEBC3EBB84D414CD7D6F3AA9F5F57723A5B7F09E,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	GoogleProductMetadata_set_originalJson_m8802F225FDE9D239B0BC37414C770787355F7175,
	GoogleProductMetadata_set_subscriptionPeriod_mF1972DD4D5F09FCA63289A452BF9D7C3293EFE4A,
	GoogleProductMetadata_set_freeTrialPeriod_m5A246A10382871D6A117098A660725F5887D8870,
	GoogleProductMetadata_set_introductoryPrice_mB24D82E3B6FBD2BF1785885772FE76744E08AA34,
	GoogleProductMetadata_set_introductoryPricePeriod_mE4B20274CC2D3136A550C3AB26AE9129967CD0ED,
	GoogleProductMetadata_set_introductoryPriceCycles_m4A579C40C2A912F7D344BD2F4ACD3A6313924F51,
	GoogleProductMetadata__ctor_m02775AA7EFE72181C932AC4F59E9FA566E0FF6AB,
	GoogleFetchPurchases__ctor_mB6CE7739DCA92C7C52A9DE227869975B195A680A,
	GoogleFetchPurchases_SetStoreCallback_m0E565F3C181C1E1ECAFF0D023A6A990318D77C5F,
	GoogleFetchPurchases_FetchPurchases_mE8F0FA6586D56BF3FA6AAB78B6A4852AFF262C22,
	GoogleFetchPurchases_FetchPurchases_m708DBD73CBB5C30C4441F434502B393C285BD6F2,
	GoogleFetchPurchases_OnFetchedPurchaseSuccessful_m6F95AF92964FB93B48794F59EF870717C6F2CA95,
	GoogleFetchPurchases_OnPurchasesRetrieved_m12EA283304AD1E309E6C81896AAE5F4ED6287DD2,
	U3CU3Ec__DisplayClass6_0__ctor_mD0D90339AD39FF8803EDE1A7E66235569AA1E621,
	U3CU3Ec__DisplayClass6_0_U3CFetchPurchasesU3Eb__0_m1DD9AC83ACD8542CCC8E51282F9B1DAD289B7E4D,
	U3CU3Ec__cctor_m6FC73205E50A3D0227EBE34C2ED1101CE0A6316E,
	U3CU3Ec__ctor_mB0958FB91982CB49681A96A4EC74CC83378CEAEF,
	U3CU3Ec_U3COnPurchasesRetrievedU3Eb__8_0_m28FD70D640E02323CD54AD43AAFC743490318469,
	GooglePlayStoreFinishTransactionService__ctor_mA119A22781FD419BA87BD0E7CF1207E97C66E478,
	GooglePlayStoreFinishTransactionService_SetStoreCallback_m6DCB213C015EC2212CA6932F46449580E3B1A4FE,
	GooglePlayStoreFinishTransactionService_FinishTransaction_mA22BD3AC8351C93158580A3EA604120E378671BB,
	GooglePlayStoreFinishTransactionService_OnConsume_mCCB0E8F355387C4F9508D512EE52F4314671C38C,
	GooglePlayStoreFinishTransactionService_OnAcknowledge_m5292AE9BA9F64E486E566F062376376037A5F002,
	GooglePlayStoreFinishTransactionService_HandleFinishTransaction_mB735F899F86578D3A5CF20EDCC1F46440DC345AC,
	GooglePlayStoreFinishTransactionService_CallPurchaseSucceededUpdateReceipt_m048901295A56C02B4A6B00DE1058D29177F0AF05,
	GooglePlayStoreFinishTransactionService_IsResponseCodeInRecoverableState_m94AAF3FEEBEDC1511F8254ED35ED6A8D77E1382A,
	GooglePlayStorePurchaseService__ctor_m91650C40DE73948916C2F443E5914A40A629D92A,
	GooglePlayStorePurchaseService_Purchase_mC7C63AABBD65A72135171530FEDBBECFA209FD6A,
	GooglePlayStoreRetrieveProductsService__ctor_mB567F1B18F0C107FC422DF4C9621D5B4F6999ED1,
	GooglePlayStoreRetrieveProductsService_SetStoreCallback_m7B66AB22F8280680D8B53364B3A78AE410B08ADF,
	GooglePlayStoreRetrieveProductsService_RetrieveProducts_m5BD15E15DA97A7494224D42DF1ACF95D14C4AD62,
	GooglePlayStoreRetrieveProductsService_U3CRetrieveProductsU3Eb__5_0_m1F7C2D6E7833EBD6079738D98371AF80AF5279E5,
	U3CU3Ec__DisplayClass5_0__ctor_m22150CEE301B4B756E44038AB02807D7BA4551A2,
	U3CU3Ec__DisplayClass5_0_U3CRetrieveProductsU3Eb__1_mF230D9AA962EF5C18A8A83DEFE801F4B304F1BD2,
	FakeSamsungAppsExtensions_SetMode_mC86D514271496C279BFA2BDEAF2AB4A0DF646FA1,
	FakeSamsungAppsExtensions_RestoreTransactions_mE87AA296D7AB7CDE86C144F7FB65229CECBFEECF,
	FakeSamsungAppsExtensions__ctor_m4742A91EE8D81C9BE5D5364687B8B330CBA5FED6,
	NULL,
	NULL,
	NULL,
	SamsungAppsJavaBridge__ctor_m969EEFD80B5504176398B4E86E3320627AE931BF,
	SamsungAppsJavaBridge_OnTransactionsRestored_m8A137B01E9FFDC9662F6F6BE679391773D789284,
	SamsungAppsStoreExtensions__ctor_m6F22AC359C3FAB0A816C1A888CF5ECFE526E3C0A,
	SamsungAppsStoreExtensions_SetAndroidJavaObject_m5B501931B44F78CD885346227BBB33A4E161C8FC,
	SamsungAppsStoreExtensions_SetMode_m4A175BC8D33187A335AFE0AD473621EE1BBCB75A,
	SamsungAppsStoreExtensions_RestoreTransactions_m03D620B420304B5E7E448A3DE3D7EDB53B1A6650,
	SamsungAppsStoreExtensions_OnTransactionsRestored_m340FF8578FACAA5DDB6F296AF4CD00FD260AB504,
	FakeUDPExtension__ctor_m3D2B6B1E9B340F8CBA126B5C7E44D3FD8732E6A6,
	NULL,
	NULL,
	NULL,
	NULL,
	UDP_get_Name_mC7540D45330D80FE8220081B1230FAEAF69F02DF,
	UDPBindings__ctor_m45AF3A4E6879F3FA628CAC1D30FFBD76D6159EF1,
	UDPBindings_Initialize_mE6F674A13BCBE2884884F9F1A9F42528E4455906,
	UDPBindings_Purchase_m521D25A03D834363CA80F1D54081356389061F63,
	UDPBindings_RetrieveProducts_m455ECDE792F4D48F2979EA430816431D8E399A08,
	UDPBindings_FinishTransaction_m8408DCA424E9D8A790A4F79EFB10C3DC5D96391A,
	UDPBindings_OnInventoryQueried_m44BD3BE51FF389403BAC1AE14406AAEC34C2ADDC,
	UDPBindings_RetrieveProducts_m0928609D2617C38F114E99DB2888DEE75298175F,
	UDPBindings_Purchase_m8CD391D60EEDBFD8D80134ADA9D27DF395EA3108,
	UDPBindings_FinishTransaction_mB4C9615FFEE30868C86B7F0758571E545AEB7183,
	UDPBindings_StringPropertyToDictionary_mC633C97E842A0A31CBE20C2F12329B8DE8CF2914,
	UDPImpl_SetNativeStore_mA858DAA1F1D08922058475F299FEA5DD5F51D0AD,
	UDPImpl_Initialize_m64A8C93DCE3EECFF3507BE934B86F215099E0201,
	UDPImpl_RetrieveProducts_m84FC370283AF731FDCA74F9BB681CF500BE4F74E,
	UDPImpl_Purchase_m066B0ADA48FC39756DA1F70AE36A9BA296104EB7,
	UDPImpl_FinishTransaction_m9930DAAD0C7AD078B279B3B236951C302BBC87F9,
	UDPImpl_DictionaryToStringProperty_m7994C9973D80D9C122FEA25667B8A5C8AF212050,
	UDPImpl__ctor_mBFAB48314D09093BC4A4E6E2F1ED06A48161EC73,
	U3CU3Ec__DisplayClass7_0__ctor_m0BB3ADCD79FCC4B488A2ED84D8315497F978B39D,
	U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m59185CCC02C3FE34C2A8683EDA69A8AC11C6B851,
	U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m5DA90193424C5C6369346942F7B20BD5A29D8972,
	U3CU3Ec__DisplayClass8_0__ctor_m7C57FE2C6D54FD70FFFF2BD54E6E65EB9F1D44A5,
	U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_m9302EBEE3A27C59DBDFA895D8AC0B1D2D574A931,
	UDPReflectionUtils_GetTypeByName_m2D706B5311D5E3D7E3C8C373CEFF748F2BEE42C1,
	UDPReflectionUtils_GetAllAssemblies_m7412ADCBB87CAB9FE0D0CCD64E4074B45FACC5A9,
	UDPReflectionUtils_GetTypes_m8AC1A6E80E2FB05E577F9C38452A2F10427E2F61,
	UDPReflectionUtils__cctor_m3A5C4299B976A685962591D0E34C747354D151F5,
	U3CU3Ec__DisplayClass6_0__ctor_mCFDCDD2397A277EBAA33DBC3349486A6FB336CB8,
	U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m63F3B59612C7BC7E726657C78A97B76564C2D39A,
	InventoryInterface_GetClassType_m2339515AD12211C798950C7DB3DAA286930B6FCC,
	InventoryInterface_GetProductListMethod_m5278B18F2FB4F48DD028D93C9094F33F36E53829,
	InventoryInterface_GetPurchaseInfoMethod_mC46691D414E98B61078A7FF5DE3136D49EFB529E,
	InventoryInterface_HasPurchaseMethod_mA1F04633497C03C12E5C2205A4E7480CEF60A74D,
	ProductInfoInterface_GetClassType_m89DE0DEFA693CD3D20A578AA9859394ABA2EE6BF,
	ProductInfoInterface_GetCurrencyProp_m9369EAB6C14A7B1CD1BDBE8D7CC6B6F7A963EEC6,
	ProductInfoInterface_GetDescriptionProp_m74A7A79C16324DDCA8694F0C3A6B084A472B4224,
	ProductInfoInterface_GetPriceProp_mCF24D0FB3E85B5351FB161B954D5BEB48986BB04,
	ProductInfoInterface_GetPriceAmountMicrosProp_m33A42D7B5ECF6F98C3B8CF863E75EBAE3C0CEA37,
	ProductInfoInterface_GetProductIdProp_mF0680E7BE31915B7355C96F550530325AFD057C5,
	ProductInfoInterface_GetTitleProp_m065FD74522ECBA78E54F395A277E08C3ECE1D22A,
	StoreServiceInterface_GetClassType_m660B29BBBD9367E54F9A7C670BBCA45966DBC40A,
	StoreServiceInterface_GetNameProp_m33B1CDCAE42001BB9DE76539785AEDA5C8BA9211,
	StoreServiceInterface_GetName_m272B6391522A75ECC0BA49F4A608804A1E1E95D2,
	UdpIapBridgeInterface_GetClassType_m0CB7252C564FE1FDEF51C378E5726197E29AEFC9,
	UdpIapBridgeInterface_GetInitMethod_m1268A547D7F96A2D8F8D1D10D5B8435D27DD1BF5,
	UdpIapBridgeInterface_GetPurchaseMethod_m04429796099497D106906C22524B1915DD623107,
	UdpIapBridgeInterface_GetRetrieveProductsMethod_m0EE4750DDBB15287A54F034E250DFF44B876A6EA,
	UdpIapBridgeInterface_GetFinishTransactionMethod_m08A9FCC95EE1DC8B978DB79F42E70DEA38E0ADDF,
	UserInfoInterface_GetClassType_m9812080125843B27829B95984F673CF85B386C0C,
	AppleStoreImpl__ctor_mB9968CDD194EFC4715501BC44987F93D3724DD59,
	AppleStoreImpl_SetNativeStore_mB8A4471E0172C0E1DFB1F528C6261D88344350E5,
	AppleStoreImpl_OnProductsRetrieved_mEF935ACCD2F0D535231E74831540AF1467A54FDF,
	AppleStoreImpl_RestoreTransactions_m9EFC80E93F487002E1818FD5BE3A1354AFF30402,
	AppleStoreImpl_RegisterPurchaseDeferredListener_mC23A1F745879687949A85D89547F75FFC5CFED98,
	AppleStoreImpl_OnPurchaseDeferred_m07979C030E6A1DA64BB3D4237960120E2A871222,
	AppleStoreImpl_OnPromotionalPurchaseAttempted_mCB88E611F8B4D28776CBA77146F661EEC1BC845F,
	AppleStoreImpl_OnTransactionsRestoredSuccess_m116DAD82535AB22456837B81A9BD4780CEF46FA6,
	AppleStoreImpl_OnTransactionsRestoredFail_mB35956811EE303C7A40F11151535133FDC9389B3,
	AppleStoreImpl_OnAppReceiptRetrieved_m89EB762AC322644B6A6EB9C8D0B04B3D0ECBD254,
	AppleStoreImpl_OnAppReceiptRefreshedFailed_m76E948D16EE84A3C80C7ADE43B31268271238DC5,
	AppleStoreImpl_MessageCallback_m58F85651C958C901D09778332EFDA47EC8EDE8AA,
	AppleStoreImpl_ProcessMessage_mB2029E81C2ECA053473F597EE88D040D2DFB0D97,
	AppleStoreImpl_OnPurchaseSucceeded_mFAF06BD0B88818B8A35D8F7AE1B9682143504CE9,
	AppleStoreImpl_getAppleReceiptFromBase64String_m41108623014B10973E67C4979DA18B04CC391701,
	AppleStoreImpl_isValidPurchaseState_m2D0FE1806CBAD2F343F83F3FB33402BA6D845FE8,
	U3CU3Ec__DisplayClass24_0__ctor_m1CA12AACD13F8E35A2F4D013144BB4AF5B2E6028,
	U3CU3Ec__DisplayClass24_0_U3COnProductsRetrievedU3Eb__0_mEDAF72D89D95587C8B9A4C5B364E08D3388D7B0B,
	U3CU3Ec__cctor_mDA72C8D23743746AC4CD9D90704A958DF9D8DB4A,
	U3CU3Ec__ctor_m89594A4C59A21839FBF5CC7E4B97E1ED9AD7C8A3,
	U3CU3Ec_U3COnProductsRetrievedU3Eb__24_1_m7F1BEB6A2D34A9B3E63BE4E5700834D102C50B83,
	U3CU3Ec_U3CisValidPurchaseStateU3Eb__41_1_m732B3E61CB9326E541D12FDB0FA2F130EE317675,
	U3CU3Ec__DisplayClass37_0__ctor_mE8F75A76304E0C485482C4D7F344BEE0AF27E6A0,
	U3CU3Ec__DisplayClass37_0_U3CMessageCallbackU3Eb__0_mD3ED860FC01CA128B360566A12368C063BA49ED3,
	U3CU3Ec__DisplayClass41_0__ctor_mB0B720A40C66E799F8B88CEC9227E4DACBB7BE58,
	U3CU3Ec__DisplayClass41_0_U3CisValidPurchaseStateU3Eb__0_m6F553E73A8A90A7B3B36C1BB4C1270B5CEC6C0A0,
	FakeAppleConfiguation__ctor_m47BDCB07F9BB5514BC2C6E3B4252A9ED95ED7B94,
	FakeAppleExtensions_RestoreTransactions_m111D9A5EA667B40ED395DFFDCC4CE5DCCD38C43D,
	FakeAppleExtensions_RegisterPurchaseDeferredListener_m96C9576514F14CF92CB67888E94124894473D802,
	FakeAppleExtensions__ctor_m260DFC08BF71BE866905C71F875C5082D3CFC6C4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JSONStore_get_disableStoreCatalog_mB3DB5D24ED1CCDB415447A9F909910998981833F,
	JSONStore__ctor_m468C71DF5781A82BA1F6BE74025B887483A67464,
	JSONStore__ctor_m479AB6D25B35E2F1611385BD98E2EE869F5A2814,
	JSONStore_SetNativeStore_mFC13C507966B0284D884FE1EB4B5FD559560E151,
	JSONStore_UnityEngine_Purchasing_IStoreInternal_SetModule_mA22205332C3658EDA75BFBC321E7B624BE1BAEC6,
	JSONStore_Initialize_m68D96F2B2FFE025A98910F454D84D6B61E8CC53A,
	JSONStore_RetrieveProducts_m8DBBE2647BD377B4C4AEAB17A6C3418997A8BF99,
	JSONStore_Purchase_mDD355E7F805FDBE84630F073A2EA9968E8DF73CA,
	JSONStore_FinishTransaction_mBACBCC959815EDBC9B0A54254D8E891903988DC3,
	JSONStore_OnSetupFailed_mFC5E987719AF269FD266149ACCF9E2A7197E4EB8,
	JSONStore_OnProductsRetrieved_m8A3A41C101D0AA665E7F7799CE90D83064DF117A,
	JSONStore_OnPurchaseSucceeded_m054104F01412D48F43D319932A50A84D29622415,
	JSONStore_SendPurchaseSucceededEvent_mC290A7113BCA3A01DB2DAA1849DEFFBC0FFB799D,
	JSONStore_OnPurchaseFailed_m3873E8737ACEC41E6CE5C9A3FD267A6AC41AF117,
	JSONStore_OnPurchaseFailed_m27CFA14695D83566F21BCBE94F85BE9327D6B780,
	JSONStore_SendPurchaseFailedEvent_mF0FE34C6AF313B2FBC75D75F5AE904C7BD270F79,
	JSONStore_GetLastPurchaseFailureDescription_mB7D15E94E8E7AEB65017FA1CD2CD45F40D812A93,
	JSONStore_GetLastStoreSpecificPurchaseErrorCode_m938AE90443B7C6829089CB70205A713EF05962CC,
	JSONStore_ParseStoreSpecificPurchaseErrorCode_mF8EE42AA83D5C9AADFD31CD508EF4C0E46816786,
	NativeStoreProvider_GetAndroidStore_mDB10C52A75CC29EE5019659960A888480BCCEF84,
	NativeStoreProvider_GetAndroidStoreHelper_mFC1BC63B7AD7CE537673543D3A2F28EA4D880E20,
	NativeStoreProvider_GetStorekit_m6A623FA7543B0EDB34AA3B53A2DE785594812B73,
	NativeStoreProvider_GetFacebookStore_mB80129F12282D8802F21A063B383C37419A0963D,
	NativeStoreProvider__ctor_mB7A696517C872E529D98DB75CDC1DF31F17412FA,
	CloudCatalogImpl_CreateInstance_m998206F56F3A850193FEF6C62C1BEF4BA4FBD447,
	CloudCatalogImpl__ctor_m0134A431F3F2369CD943E017427B38F0CC4AE068,
	CloudCatalogImpl_FetchProducts_mDA49A1EDA88C740BFC4E766FFCDD0428AB092A71,
	CloudCatalogImpl_FetchProducts_m60504124B6DF71CF8B26DFBAD5FEDBCC8C0A96FE,
	CloudCatalogImpl_ParseProductsFromJSON_m43CAC03ABEF817C6CF7B57F19A99D7812430F26A,
	CloudCatalogImpl_CamelCaseToSnakeCase_mE51432F843B8AF432AA09E53D0F44EDA862C9260,
	CloudCatalogImpl_TryPersistCatalog_m941C70FD0C37D99AACF0D9C58C4116F347594604,
	CloudCatalogImpl_TryLoadCachedCatalog_m243E8ABDC81A03B747D0838C86CD1F85ED9602D9,
	U3CU3Ec__DisplayClass10_0__ctor_mA4005593B5D4D816B214180BFC2EBF29D284CDE2,
	U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__0_mEB0F1FE8EC6BE8046FCFE63CD42E39483B99162F,
	U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__1_m752291E9DD14061B94887FACB88C05AC1C041876,
	U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__2_m2A7749155D8410BF168186BCA783BBBD47201066,
	U3CU3Ec__cctor_m6E9B4E9E0A54373D356A2011B8BE5C3B653CCDF3,
	U3CU3Ec__ctor_mC4034B7A1713A7695527D7EBAA975CE5904D4033,
	U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_0_mAC3655F1AFFF5ADED6D221B1FFEA7BB927DD9B3B,
	U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_1_mED960CAD4EC9E818A60A6916EBB9C08D14B14C80,
	FakeManagedStoreConfig__ctor_mB309A5DFB1CF18D439A2238C33BD1C43C345F513,
	FakeManagedStoreExtensions__ctor_m3D24B9079D01B99BC14E6FDA21E1BB499A69D2B3,
	StoreCatalogImpl_CreateInstance_m8DB907491CB1B5FE9415D91FBFDFF8279A29BE78,
	StoreCatalogImpl__ctor_m906740530BDF4AE66B8A0B6F18F3F234AB851BB3,
	AdsIPC_InitAdsIPC_m8B9962F2D87C541A4D728196FD19E750A7870EEC,
	AdsIPC_VerifyMethodExists_m39A3970B19CB613A4BC104ABC2A5AD5016EC61E0,
	AdsIPC__cctor_m9C15A0DD5C271D9ED0380DBA65F7C9FD6C29286E,
	EventQueue__ctor_mA18534E32D600F425F67370D066BB2B10BE96AEE,
	EventQueue_Instance_m331BAB5A639187C4DA3A184CAB019F6EEAF005E6,
	EventQueue_SetAdsUrl_m18BF111F90FDA56C28A9DB30D9C60A3D91CB2B0B,
	EventQueue_SetIapUrl_mDFE0E960046798DE447691D9BB1B010996E68E43,
	AsyncWebUtil_Get_m92B87F271ECAEEB075FB7A4DD2C8B731837DF0D4,
	AsyncWebUtil_Post_m53862E7F40076B1D1600EF2961795AD03091E6AF,
	AsyncWebUtil_Process_m97DF4691419615D482FBFFA9BA8DA3D64F35C857,
	AsyncWebUtil_Schedule_m4D28D17D4B89669B1CF8C1C4CE874289632ACA7C,
	AsyncWebUtil_DoInvoke_mE10166D8A0D1DCFA4C7A51065FB5FC1217F7CEC1,
	AsyncWebUtil__ctor_m508FDFF94C9A9B751446B1D7626BD4D1BD7745D0,
	U3CProcessU3Ed__2__ctor_m1260393B26580C7B6E5117CD6B04E621A728062C,
	U3CProcessU3Ed__2_System_IDisposable_Dispose_m722F493AFFB96818C2D64956C49455E5FCE7732D,
	U3CProcessU3Ed__2_MoveNext_m4BF7DF1659F52EAC56DEDE2BEF9A66AF014C49E3,
	U3CProcessU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7C6889E55EBB9AC236EE47C200C28FDF605774C4,
	U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_m7AC256A6D8BB308AB1A1E8C512BF1C41F3ECC1F0,
	U3CProcessU3Ed__2_System_Collections_IEnumerator_get_Current_mA461BD85F6B147E973E33240C162D62CC53D819C,
	U3CDoInvokeU3Ed__4__ctor_mB54E18AE9C5FC2823403F9D38584F802F952BC7B,
	U3CDoInvokeU3Ed__4_System_IDisposable_Dispose_mBC7895D54ABD1F5C9E1BDF690BB575E786721EF3,
	U3CDoInvokeU3Ed__4_MoveNext_m9F4F75B32F5147C3BB4420BEE81604B1E8FF7592,
	U3CDoInvokeU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE461C5FE718AC9715C306995F919872740849616,
	U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m58D873A1B64EF9D302C5E23BE1C2DE2ACF20448F,
	U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_get_Current_m1E9415E1CE5ED0950B4F0BFDA0440A70C6ADEA12,
	NULL,
	NULL,
	QueryHelper_ToQueryString_m9C0DD8285BA11E47BFC57E478924621DC8F64365,
	Price_OnBeforeSerialize_m76DD910879EDC1E012B91B5B2868E8330475494F,
	Price_OnAfterDeserialize_m5BAA514B39A65E32DBDB417BA261CF151F57E0B8,
	Price__ctor_m157938070A88CE1B1C00149EC06E64BD0BD9CBD7,
	LocalizedProductDescription_get_Title_m37104F5FF53146AB82EE8EC7E0F3276CAC39BF76,
	LocalizedProductDescription_get_Description_mF332276E57691D17E99A73EE24BC100100293AE3,
	LocalizedProductDescription_DecodeNonLatinCharacters_mCF7DED9FB1FC7976A070F44B7A7E0FBEE8E91080,
	LocalizedProductDescription__ctor_m0EF340A7351FB44FB513854FF330B4B8D37A5002,
	U3CU3Ec__cctor_m25FCFAD57F86318C41C505C8751F620CF1AB56E1,
	U3CU3Ec__ctor_mF5521CA424C8103923ACE80EDFB5F10916D9C9C2,
	U3CU3Ec_U3CDecodeNonLatinCharactersU3Eb__11_0_mC6308C3C1692E6D2B1AEBC046E292C47FBB79847,
	ProductCatalogPayout_get_typeString_m2F511CB6704150047D5858A7BFBC41003284E5D8,
	ProductCatalogPayout_get_subtype_mAAAA333FD904B78A7C50BDFA060D1A2AA04F5B28,
	ProductCatalogPayout_get_quantity_m46AF6469BB0BCE402F3EB4D2FF2C668B4D871D84,
	ProductCatalogPayout_get_data_m9E8AA38C84A7F689A9CA8F59A0DE4AE81D4CDDDC,
	ProductCatalogPayout__ctor_m233297D24A04B8144E4EF0085031D192D6252E41,
	ProductCatalogItem_get_Payouts_m010E64C3132A9B76BEBF29E124CAD60E5ED3705C,
	ProductCatalogItem_get_allStoreIDs_mC4B06B8870297CBC9F1E589852927533B4C6C1B0,
	ProductCatalogItem__ctor_m978A55D0AF1C88757C2E3137B29D16E32586BB49,
	ProductCatalog_get_allProducts_m52CF5A590881433A56E9B08BFB0CFAC645657C76,
	ProductCatalog_get_allValidProducts_mDB5D245A6ACE210F12BBF29FB6BDF832294B3317,
	ProductCatalog_Initialize_m7F30F013AF6E49C6D30796E124826F183A014099,
	ProductCatalog_Initialize_m555637D807B67D70ABECE1E55CEBD662B8B559A9,
	ProductCatalog_IsEmpty_m6CEB058736FE032493798C25E94B04D3DD939714,
	ProductCatalog_Deserialize_m32375A94AF222C7F23CE41F3A74BF90721AE1EF2,
	ProductCatalog_FromTextAsset_m46B9FC9FB964D8FF02EDE572D1437D1E41E84A95,
	ProductCatalog_LoadDefaultCatalog_mCE9C4FE451372F86BC3075C983BD2F4648252823,
	ProductCatalog__ctor_m3FA16C014E3D57AF8838775F6131260F3C15DA9A,
	U3CU3Ec__cctor_mC4EFA583FB0145FFEF21D90C3781889412855EAF,
	U3CU3Ec__ctor_m1D58784C432D777FD3D1CEDF680AEFDD648CDADE,
	U3CU3Ec_U3Cget_allValidProductsU3Eb__8_0_m45B81DA63553A9D8AEB53591683EB83EF08E3831,
	NULL,
	ProductCatalogImpl_LoadDefaultCatalog_m9F4F89474708D771EC9A17B45270CDD5934C3DAC,
	ProductCatalogImpl__ctor_m216DFBDB51B285D0332A0A4A70706B8DBCFC5DCD,
	ProfileData_get_AppId_mC8B3BDD528BB78E75A441A5D6661371FFCF6EC4C,
	ProfileData_set_AppId_m872FCA2538FE36F740D12F7C9C7E8C61C9B8C9DA,
	ProfileData_get_UserId_mA8DAEF2C0B06556640B59FFB7649C681ACCC44C5,
	ProfileData_set_UserId_mD766C0E9FFA8CAA6216ABCDC4672DE363047A00F,
	ProfileData_get_SessionId_m73013945A9642D31B8B991AFBDFF2A52A9AA6ABB,
	ProfileData_set_SessionId_mCF58EA7B2425598109D054AADA587AA945E78004,
	ProfileData_get_Platform_m4BC04FDB4D074E8FEE9DFFF01B73880928195B76,
	ProfileData_set_Platform_m5004577D6590096A37560736ED6A4DD40E9FC333,
	ProfileData_get_PlatformId_mC07E14F777FB2F9B5FCD834B7DE6D38674F2C8CE,
	ProfileData_set_PlatformId_m051DCD326D07808E4E8448B55ED1F2FDD1E582E8,
	ProfileData_get_SdkVer_m6752CBFDDC096FD79F8C94C003827A637CD3F007,
	ProfileData_set_SdkVer_m869C18FAD0860470C61E2C1CBAB43A74BF8CE224,
	ProfileData_get_OsVer_mB15438E193084444BCE201902051226E8C20C2A8,
	ProfileData_set_OsVer_mD645E899933BE6DB04847B65F7E3190F2A6AFCB7,
	ProfileData_get_ScreenWidth_m89217B0934CA13D430849107B62E0D511F226008,
	ProfileData_set_ScreenWidth_mB6700430DDA592B552C742C250DDF410A3B75762,
	ProfileData_get_ScreenHeight_mC606DA38EC8538A31BE6C197812E182F252F65C4,
	ProfileData_set_ScreenHeight_mF829CED130AF0540D59F790D0BD06AC5FEABFE2F,
	ProfileData_get_ScreenDpi_m364A269BE5CAA702AE0021B1C8AC9A323B1BD6DC,
	ProfileData_set_ScreenDpi_mA7CF4D9EDEFFF3C9F0459A1761E618F295C9B7FD,
	ProfileData_get_ScreenOrientation_mAF11EFEBEC084EBB7CAC4977984AB676B1412FFF,
	ProfileData_set_ScreenOrientation_m2EC95A3CAF0B48D5C483C3D161103F28EA7D807B,
	ProfileData_get_DeviceId_mD13A67A99B833A8F1D022B5245F6A3784D2B8BFF,
	ProfileData_set_DeviceId_m64DD69644E6C384071D7CE08F96EF526844083B6,
	ProfileData_get_BuildGUID_m445CB89FDDEDB2F0B34DCECD358D0C2C637B45C6,
	ProfileData_get_IapVer_m9A3CB1E507EEDC9D3355154CE25C438883E7A4CF,
	ProfileData_set_IapVer_m912896DDFED96468F18DB49BA9B59FD8EC9A2685,
	ProfileData_get_AdsGamerToken_m87BFE3B91D49B4826955E4F7DDAA01DD9A8CCEC4,
	ProfileData_set_AdsGamerToken_mDCFB7B17B7229358ED94C62506B39CDF46201F57,
	ProfileData_get_TrackingOptOut_mBC8CEFA41DDCCE09CE6F238C51178A484702CD6D,
	ProfileData_set_TrackingOptOut_mB82D4CE5935AB6268C45B31CF84A19E0FF6C76B5,
	ProfileData_get_AdsABGroup_m09B8E1B13F5631B9FE4C0B138C7AC1129B92BAFB,
	ProfileData_set_AdsABGroup_mD6771ED97F3E1C03B502029057F91450A4BC6B2A,
	ProfileData_get_AdsGameId_m9F88F6C67509045AF196036476135CF69DE30122,
	ProfileData_set_AdsGameId_m993B5D55C3925F635123F4CD5FE7492FBA70ECEF,
	ProfileData_get_StoreABGroup_m88E77F95A1DB78085DFF6BB376E7DA52677118DC,
	ProfileData_get_CatalogId_mBAF2FA7FF3501A429634B0F4CBE526BD27E4C1BA,
	ProfileData_get_StoreName_m21E7EACD2CCAF5C7BC4EE9409F073A2A27BE23F4,
	ProfileData_set_StoreName_m2B817EADAF18579B4EEF4E2E149F0EC32567988B,
	ProfileData_get_GameVersion_m09D7B695739B0C1ED1610109DD55A60E9C567B9E,
	ProfileData_set_GameVersion_m9F68557C52CB6F77D0F1455C0013EEAC260F1AC1,
	ProfileData_get_StoreTestEnabled_m89ED43DC74DF9940BCDA48F6A155651D89785404,
	ProfileData__ctor_mA1E8ECDF5A9891480F0D82CCE5F46C335D660A95,
	ProfileData_GetProfileDict_mD9781909373452003240DB9399F7EC440844AD5A,
	ProfileData_GetProfileIds_mA1DD7EEED0CE715A61B7113A7EE42E719AE88745,
	ProfileData_Instance_m13EF7002A0B88F02DFC7B0F10C1263C417BE0930,
	ProfileData_SetGamerToken_mABB842F09A64A456325838BEAD2DBA0EC7C677FA,
	ProfileData_SetTrackingOptOut_mDDC2A82AD79EABD0C7CC10F66EDB62B6015CE03A,
	ProfileData_SetGameId_m12A7486F17140CA2AB91E38EC728BF8C328CC82D,
	ProfileData_SetABGroup_mC0488DB2106920E43414FE4CE95EC09FE002D0EF,
	ProfileData_SetStoreName_m6CD7097D221DD61010F55D89411191750710BE3C,
	Promo_IsReady_m1DEA469BA53C86984D8984FD2C4B5F80B6309B08,
	Promo_Version_mB9BE26A0A8CBB2F4BD44987D9A758B15BB3E7715,
	Promo__ctor_m2C948B3572E3DB7501E7F200488C2ADE1239D3C4,
	Promo_InitPromo_mE9A5745EF9B1A0D3AD6D994F0BAA230FFE5C3427,
	Promo_InitPromo_m43238EAEDFE3E01B6B789C3A342819864A105B6C,
	Promo_UpdatePromoProductList_mEE076E8E0AC0C9E5BE092317F04B6B0E50A98BE0,
	Promo_ProvideProductsToAds_m6A13572A6F9344445A55D9159F9C66EDFF701E03,
	Promo_ProvideProductsToAds_mDE65389BAD6A29EC5F4C370F2C331374175F69FE,
	Promo_QueryPromoProducts_mBAD6205D8853B5C245F1062670E1FE04F80DCA04,
	Promo_InitiatePromoPurchase_mDA5097F47DB164B4667D03ED33398CD2F2494CF6,
	Promo_InitiatePurchasingCommand_m15727035766E3B70FA4992AF7D16C7184550533B,
	Promo_ExecPromoPurchase_mE58C626DB326BC738B7FBCC618A00F32D26AA035,
	Promo__cctor_m4C84FF3EDA540A683BA05CEF1A3F3926F454B405,
	StandardPurchasingModule_get_m_persistentDataPath_m5943D71EDC780A89375E9171B14CD48AE297D8E7,
	StandardPurchasingModule_set_m_persistentDataPath_m9348EC3F202C7B589C73C078F189E3125238DDC4,
	StandardPurchasingModule_get_util_mF5D005F7F51E6A419D968FC475EDCC22828AA27B,
	StandardPurchasingModule_set_util_m88A788246C380C16E057B352A66C32D2FD1BA487,
	StandardPurchasingModule_get_logger_m7F34ACA3BD4BC202E9F40E2FDCBB7432B9CF4EE7,
	StandardPurchasingModule_set_logger_mCD0C79DD7839EA109B5942E7C7A4DD22C2B25FC5,
	StandardPurchasingModule_get_webUtil_m1C703DDFEDA01C2D1FC1D778A8CF06154DB424EF,
	StandardPurchasingModule_set_webUtil_m6E95D9D38E7F5B1C6315353AF591EAF7328F598F,
	StandardPurchasingModule_get_storeInstance_m82D1C1835EBC5E09BA277B27BC3C54EE843FEB43,
	StandardPurchasingModule_set_storeInstance_m166CD509CBB02AB0A1D220CDD03787EE1A052720,
	StandardPurchasingModule__ctor_m093EDEC38E006198B6F9C2233F6F169BA236BDCA,
	StandardPurchasingModule_get_appStore_m209568F8E3E06E14271B0FCF6C904C70D017B29E,
	StandardPurchasingModule_get_useFakeStoreUIMode_mCCC3169D9C63FBBB8E6875DC5BBECD1269C1E349,
	StandardPurchasingModule_set_useFakeStoreUIMode_m6656242250E0EA7D3FC4FE592CCC8B8CEC1A4A2D,
	StandardPurchasingModule_get_useFakeStoreAlways_mC16269947F394248C2152061B721B7C8E3FF525F,
	StandardPurchasingModule_set_useFakeStoreAlways_m8D9E0393ACA690730754D26A4C780AE846A0DE23,
	StandardPurchasingModule_Instance_mFA5DE73F8C49FEE371D96E3A756D144C14893056,
	StandardPurchasingModule_Instance_mA16973D44917895561591C62D2F3BF1AB66CA45E,
	StandardPurchasingModule_Configure_mBB0CEBDED2A58D08CA983130FB4B52D81E01D1E7,
	StandardPurchasingModule_InstantiateStore_mE2C1006E48982E52BF4797DCC563ED1103991527,
	StandardPurchasingModule_InstantiateAndroid_m4680F54F6D13862583292B86BF2A97F0C6A2F076,
	StandardPurchasingModule_InstantiateGoogleStore_mE0EC5A4DEF5952CA88D082F1EF0EE736C3F358A1,
	StandardPurchasingModule_BindGoogleExtension_m6510C9FDD6B4B5CEA717F72E72F528484675B069,
	StandardPurchasingModule_BuildGooglePlayStoreExtensions_m686C95EB081B6BEB5AAEC9455C51B878B439856B,
	StandardPurchasingModule_BuildGooglePlayStoreServiceAar_m04BA0BD4E376CC5FCA1EDAEB176D5A4195FF48DC,
	StandardPurchasingModule_InstantiateUDP_mFCD6476079958EB07B9A03716A3231AD190B5642,
	StandardPurchasingModule_InstantiateAndroidHelper_m9812BDCD0009BF804B53B458412D3A66F1F0C252,
	StandardPurchasingModule_GetAndroidNativeStore_mE823C45C9F2B88335C43E839FDD434CD96CD87CF,
	StandardPurchasingModule_InstantiateApple_m6473AAD934148C8739F0275EC93B6EE59AE7CEC1,
	StandardPurchasingModule_UseMockWindowsStore_m4DA7505AA377B212EAA2259C6AFA71CA792C4196,
	StandardPurchasingModule_instantiateWindowsStore_m39AF99EB5F8606F585EB086C0DD64C5C44BABFFD,
	StandardPurchasingModule_InstantiateFacebook_mD2AC5AA8F2E3475C262383B33863DC23883D2F2D,
	StandardPurchasingModule_InstantiateFakeStore_mA66F36895B2F6F45CC24565296D23F91C4F69A36,
	StandardPurchasingModule__cctor_m6AD9289C9641938304A6675F7796D2259D3FD801,
	StandardPurchasingModule_U3CConfigureU3Eb__49_0_mC9AB3E42C0762214A1E277E10CBA3D3C804EFC5B,
	StoreInstance_get_storeName_mB93ABA8F50209F113F01717BAAF03C194FC569C5,
	StoreInstance_get_instance_mBB6EE49D643F2037A9D8AE5B834366897E1FDC24,
	StoreInstance__ctor_m057D521AC3051D91937571F946480A20FCC28AED,
	MicrosoftConfiguration__ctor_mB5FC6B9C40C41E4C4BC1BD9726B10D1CF19BAD13,
	MicrosoftConfiguration_set_useMockBillingSystem_m54FE78CBDD1386E8974B944BC7AE944BB75F31F3,
	StoreConfiguration_get_androidStore_m22BA58FD855FD5F0670CD451CBC08E3B1313590B,
	StoreConfiguration_set_androidStore_m33B19DD27D1BF6ED0AE2570D6F7AB696CBDE6108,
	StoreConfiguration__ctor_mD948B9A32CAD78C9A8CF77B8877DFFF9417C2B03,
	StoreConfiguration_Deserialize_mECFB54BF69A74BDA87FC12F417FEAF3E8FD650DD,
	SubscriptionInfo__ctor_m7F09AB4E2DA1B5B368BAEE2C2869FAAFDCDB4BD3,
	SubscriptionInfo_isExpired_mDB6F774AE28048539F7A7F044F24006A1645EF32,
	ReceiptParserException__ctor_mCD5C4667FC7D9EA5271EDC205421DF5885F26B56,
	InvalidProductTypeException__ctor_m5F6031EBA282C01003BB3560D1C4B2FAA88330D6,
	FakeTransactionHistoryExtensions_GetLastPurchaseFailureDescription_mA629765756CA764BFBA5F719B462A7AE857F0289,
	FakeTransactionHistoryExtensions_GetLastStoreSpecificPurchaseErrorCode_m5D714753BD667D388F5ACE3DB66CAE9B9B4AE611,
	FakeTransactionHistoryExtensions__ctor_mB076798E378551498F0709B3296B91414D7E41EE,
	NULL,
	NULL,
	FakeMicrosoftExtensions_RestoreTransactions_mC2279783234A1FB3EB2901F4F85258984B61A0B3,
	FakeMicrosoftExtensions__ctor_mF9DFEDE2227813DFAE1D8AF1421FCF141AA000E4,
	NULL,
	NULL,
	WinRTStore__ctor_mF12552330A2AC5C7B8780743DB0C0B918138A3C9,
	WinRTStore_SetWindowsIAP_mCC698FCB8D20A192D523A91E96C652260CA328E2,
	WinRTStore_Initialize_mF69BA990E528A14F670FB8BEFA1E0364EA146B52,
	WinRTStore_RetrieveProducts_m1A5E0FDBBAA8785ADC29AD871DE4508A57E76763,
	WinRTStore_FinishTransaction_mFFFD6CBE162D548780D3BE76436678D59F077299,
	WinRTStore_init_m9167BBFC6511F83A1DA15507B11E4CCA4B9DC5EF,
	WinRTStore_Purchase_m5DF86881261AB077860AA9B5257A12622D302A28,
	WinRTStore_restoreTransactions_m886EF0C361C58352C64114E9E6B9F700AB07E4C9,
	WinRTStore_RestoreTransactions_mC7888F4B07B2FC149635B4D3378DC23F423C3ABB,
	U3CU3Ec__cctor_m05457177E1FA6B466B7C23B03AFE9111B976E2AA,
	U3CU3Ec__ctor_m01C91D60F6B78EBAB4D09FEB118B3237078C0CF5,
	U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m40D09A941BE7B5778638D7D6EF658C89CDC4F809,
	U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_mA65E85AE35F533491D7788A0A6605E1D7D74207F,
	FacebookStoreImpl__ctor_m5016680B16507EC48D2BE75D76D9158277D20B23,
	FacebookStoreImpl_SetNativeStore_m47A9A764668DD55A66D34EE8EEB0E7FFE5AA747B,
	FacebookStoreImpl_MessageCallback_m07158CE4BA5566E17C3228CD6B47B31673F3D1BC,
	FacebookStoreImpl_ProcessMessage_mA1118ED988CBB48AE6463A8E9A8F990AB8CBA1EA,
	U3CU3Ec__DisplayClass6_0__ctor_m79523A8E82472EA6F2D7C1117F05BD5491EF76AA,
	U3CU3Ec__DisplayClass6_0_U3CMessageCallbackU3Eb__0_m2623D68F261E9EEACB5D2F610F69F0F3704C9BD6,
	FakeStore_get_unavailableProductId_m05EA8C670AECE90A35D389D08961653BC0D6673C,
	FakeStore_Initialize_m3E532CADCEB3DCCF193937BBB3A7F99472974126,
	FakeStore_RetrieveProducts_m22E4CF09A25B28A6BCC65DD45C281A15E9210753,
	FakeStore_StoreRetrieveProducts_m93F87F104D6B500DD1CBCEC9B39222282243DFB4,
	FakeStore_Purchase_mFCB5C3E067DFB8EE0557768F4E66141E858B17FA,
	FakeStore_FakePurchase_mAF1049957BAF391209C99CCF511F509E5FAF35FD,
	FakeStore_FinishTransaction_m19E69E64891377338C3FAFAF9A757BF12D742014,
	FakeStore_FinishTransaction_m485BCF104465075534C494E45C2EED6F63A720BB,
	NULL,
	FakeStore__ctor_mE1D9B6636A05051A48E8AF1BFFB3EAA1ABD40EA5,
	FakeStore_U3CU3En__0_mF2B26EDE30304CCA40E18D645D165921F0C3E847,
	U3CU3Ec__DisplayClass13_0__ctor_m38B90B6D962AA0B54D11F4A189A23EC2C521609D,
	U3CU3Ec__DisplayClass13_0_U3CStoreRetrieveProductsU3Eb__0_m03D8EA93D28F3BEF232FD8AD8AB16E1ED630579E,
	U3CU3Ec__DisplayClass15_0__ctor_mEF424506316CAF7F57E82EA801C33BB44E08CCD4,
	U3CU3Ec__DisplayClass15_0_U3CFakePurchaseU3Eb__0_m34959F6F7D57D35D0EB1AA752A442CFFE212D1E2,
	UIFakeStore__ctor_m50CCD47DA90EBFE7392209F40FB0BFEE559173C3,
	NULL,
	UIFakeStore_StartUI_mCE845B933A4DF891F0926D7C49EE4F97528861B9,
	UIFakeStore_InstantiateDialog_m97B69A01780B2888A4173342B5C94065ACCC2890,
	UIFakeStore_CreatePurchaseQuestion_mF82069AB8BFB007FD4CCB038821DC7E21DACE464,
	UIFakeStore_CreateRetrieveProductsQuestion_mBBDC4F25739EA0BD25CFD0DD5F378B7750D7FF71,
	UIFakeStore_GetOkayButton_mCE50A662A84D45C331211032FC1CCA4D0187A774,
	UIFakeStore_GetCancelButton_m5801E7B85A37C94981E6F20C33E18B9D7AAF66FF,
	UIFakeStore_GetCancelButtonGameObject_mB7B3AC8C1B6FE9983B7F4D51AE8835F70F4B180F,
	UIFakeStore_GetOkayButtonText_m36EDCB2BD98EBC72FB2A77EBD04BD8F0AC938B2A,
	UIFakeStore_GetCancelButtonText_m308D2A419A2EBBE6C7710F7ACDF308D40D0D2453,
	UIFakeStore_GetDropdown_m6EC0FD844CE024FA312D971683ED1E4AD02FCCBE,
	UIFakeStore_GetDropdownContainerGameObject_m29AD74E9C24BEA69069CBE44C510FE69BE51A443,
	UIFakeStore_OkayButtonClicked_m86FC1B4FAB78AC4FF5D3440ABD6FFEC41DF3E72B,
	UIFakeStore_CancelButtonClicked_mD2A026FA6BBE33C81C6BBA3F1CBEA29E23285E25,
	UIFakeStore_DropdownValueChanged_m34CE15E3D67653F6CBED4D29E6F3EC291473A21B,
	UIFakeStore_CloseDialog_m0BC4FBED90982409408EB9A82CA61B08ADD2B968,
	UIFakeStore_IsShowingDialog_m9B21893E2FED340C154F42020F7A6053A8A6A740,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m589DDC53D995FB3BE7A71CC4E6ACEAF8EA11B34B,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_1_mE417A1D0652B28295179F1515CC321D7E85FA2A2,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m17DCC3074704531E05FD6BCDA8EF784229169389,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_3_mC8DA5DD905A138D2ECFE276CABEF9C8C3A53ADBF,
	DialogRequest__ctor_m0EE18E18F5572DE6E01C5C7FB85CF48E1EF2E30E,
	LifecycleNotifier_OnDestroy_m9EAB496743EFA56C16A181757BA8F187FE6B434F,
	LifecycleNotifier__ctor_m70AAC206750C96D72C7EB9BB33250D89ABED44B0,
	NULL,
	NULL,
	U3CU3Ec__cctor_m5A7D7189B89B7036F25B5F8B66E96DB01AA3811E,
	U3CU3Ec__ctor_m68499DF5F7137E155BF18558709A290681667B71,
	U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m173E736672AFB37CF15038AE1A8DD1A9B2236D5F,
	FileReference_CreateInstance_m24A68AAB8E04A179348CA1A2B4198E36A1693BF3,
	FileReference__ctor_m71362EB9623B903718336B59501765F4CAB6A53D,
	ProductDefinitionExtensions_DecodeJSON_mEB9D072DBCBBD8D9C77BE913EB4746ADC8746A47,
	NULL,
	UnityUtil_get_currentTime_m9998B93D0649A38DEB71AF1611A364755614F18E,
	UnityUtil_get_persistentDataPath_m72263BE99AE655FD4EA6FAE6B4B2D8DE3EF8FC05,
	UnityUtil_get_deviceUniqueIdentifier_mC61FA371D829BFEFB8647D3B70DD8BED00C00F28,
	UnityUtil_get_unityVersion_m194DC2558985510A07DEE40C4733A4363CF6C6CF,
	UnityUtil_get_cloudProjectId_mDC60D1298E34A64A14186C66734EB1B0568105A7,
	UnityUtil_get_userId_mB2DA0FDEB40C38D9F17447D93B4EC6980D8649F1,
	UnityUtil_get_gameVersion_m510DE87814E2179619B8C6AA7FE89B59222F74BF,
	UnityUtil_get_sessionId_m1D9F7C8D0FC79414BC733BA80911868B1AF888C7,
	UnityUtil_get_platform_mC684411D906C87AC88535B27B310B9DC7E2FAD53,
	UnityUtil_get_isEditor_m1A99D3D2BE4F86E659CE5176FC201BCE7005635D,
	UnityUtil_get_deviceModel_mAE6DFEE2720F614D5869A45AC84B52956572AE67,
	UnityUtil_get_deviceName_mA2B1B09E3CEBFFAC5FBEE63FCCE5DBDB34828374,
	UnityUtil_get_deviceType_m7C1D01F35954F8C35000C3DAEC32E38A6DABE1AB,
	UnityUtil_get_operatingSystem_mA83BED6B5DEB6B816B599002FB077FDFAA10E743,
	UnityUtil_get_screenWidth_mDE7F3D9FA2E37FB133E165984FF2A490A80DA7B5,
	UnityUtil_get_screenHeight_m5820A1087B63691F4871EFF1C175B472E36A11C0,
	UnityUtil_get_screenDpi_mD2325284983D575D946428CB48462960927ABD78,
	UnityUtil_get_screenOrientation_mCB40D3613AA1964BF193EF27B3ED38E5FAD46B0C,
	UnityUtil_Uniject_IUtil_InitiateCoroutine_mBC52C1AC3552B7490D348A9F386DC1EEEE55D0C8,
	UnityUtil_Uniject_IUtil_InitiateCoroutine_mC6A4B59AE744544A6C5D6539A10A1230DF9B1A3A,
	UnityUtil_RunOnMainThread_mB26B68B44BFC4595FAE89297DE908CCFBF1BFBC2,
	UnityUtil_GetWaitForSeconds_m28B6A34D4438EDD6EAFFAB4B46AE78D2248A1D2E,
	UnityUtil_Start_mEA4BE994252936CE71FD8FDFBEFB4E964F1217BE,
	NULL,
	NULL,
	UnityUtil_PcPlatform_mE81A7BFC1D011FE21F3FD51D33ED54D51CA58F91,
	UnityUtil_DebugLog_m0D9666F278F66A91CE2CA73CB1236C43574D79B0,
	UnityUtil_DelayedCoroutine_mC01CE141F48420F1FE664FEFED36940F601AC125,
	UnityUtil_Update_mE583F6CA38B794C402EBF81148EF4EBBEA8F3C3F,
	UnityUtil_AddPauseListener_mBCD51B5FA47F1FC3F535BAF1A9BA7F8A1648AC6B,
	UnityUtil_OnApplicationPause_mE74C4D1F59A1256F09149DF9940B986CEDFE1527,
	UnityUtil_IsClassOrSubclass_m9EFB978D2A0A70FF6D8782B01559393F13CDBFA2,
	UnityUtil__ctor_m202A4CA90B5291DFA291B90DA497384DA1FAD8B0,
	UnityUtil__cctor_mBF38EC9EE232DD52A6EF82841258F2845E09433B,
	U3CDelayedCoroutineU3Ed__49__ctor_m9BC1D238D5E2CF7E2E7E1D4BA14C29F841ED03A1,
	U3CDelayedCoroutineU3Ed__49_System_IDisposable_Dispose_m83AF2B9F1E8D0771BB8FCD7C7B9F8EC3E5E9C96F,
	U3CDelayedCoroutineU3Ed__49_MoveNext_m4D5880AC77AF2375F3CA55641BCD024B2AAC9F23,
	U3CDelayedCoroutineU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m445D9FD9420A7720B165A946B9C273FC7589FEF2,
	U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_m529B54873453FC1159C1E19489562CB985BDD818,
	U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_get_Current_m62DEE0F6821DBD1124B4D945389AF85CE4BAA675,
	BillingClientResponseEnum_GetBillingResponseCodeJavaObject_m851EA6D317E2248B91BEAEC8B59DF5BDFDA1B873,
	BillingClientResponseEnum_OK_mCCDFAECE40972F255BCDE690745AD3A9F2A36878,
	BillingClientResponseEnum_USER_CANCELED_m66928ECA3940423372E73AB2B24A41CEE0FAA3DC,
	BillingClientResponseEnum_ITEM_ALREADY_OWNED_mAE1755298A6F3B49B70C61288CFD7F8A85D8274E,
	GoogleBillingClient_GetBillingFlowParamClass_m67ABFFFB850B50C9B0527DF2E8EE3DC815BB32A5,
	GoogleBillingClient_GetConsumeParamsClass_m740EAC7281C9D82E66F694EA2AEC86405ACBAD45,
	GoogleBillingClient_GetAcknowledgePurchaseParamsClass_m289CA6FBC5E7F9FDABE3E0EA08F7266519671026,
	GoogleBillingClient_GetBillingClientClass_m4F823213FE6EFE8D30D0C943E54BD252EEAF67D5,
	GoogleBillingClient__ctor_m678C54C3130B1076F777B2857D33B9EDEDB1C734,
	GoogleBillingClient_StartConnection_m8D24EC76A8CADDB62BBB9096A9181DD1331BC447,
	GoogleBillingClient_QueryPurchase_m5F3230B480AE2BF1CDB20BB7D11A5D78495B4E72,
	GoogleBillingClient_QuerySkuDetailsAsync_mB81D2C8FDBB190538A28A5396638287F611D9EBB,
	GoogleBillingClient_LaunchBillingFlow_m7B33B15BDA9A9A3D4ED7DB70EC695B22847ADFC3,
	GoogleBillingClient_MakeBillingFlowParams_mF57B032D890E7BF8E1671CDBAD6F6D8FE563437F,
	GoogleBillingClient_SetObfuscatedProfileIdIfNeeded_m6CCA4F098DAF465E717424A733233C1E0A73C008,
	GoogleBillingClient_SetObfuscatedAccountIdIfNeeded_mB42F594170DEA49FA88E26F1C46D4EA79DB98A2A,
	GoogleBillingClient_ConsumeAsync_m4D66CE90A32747F0D4854B1F19760361B56E89D5,
	GoogleBillingClient_AcknowledgePurchase_m836B8271C40BC28495D98F4A008A01E7C5786B53,
	GoogleBillingResult__ctor_mCEC48D96C6006E96F52C9A559499E878D0B1C5A5,
	GoogleBillingStrings_getWarningMessageMoreThanOneSkuFound_mF8697F3C8C4A6CF339FC84F6C3127853A456CEA0,
	GooglePurchase__ctor_m658537B6A3A4DE03A30C29E4EA5D92A3736F9434,
	GooglePurchase_IsAcknowledged_mF575484B73B929DD41D9B8AE090236EB869E3CA2,
	GooglePurchase_IsPurchased_mE781DBF8111F70F09370DD3ACFF6B0F096C9D75E,
	GooglePurchaseResult__ctor_m9E27530F5CD329C490B4F321FA894B01F8906733,
	GooglePurchaseResult_FillPurchases_m37E45046AB08346E877CD5BABB781BABAFB5BC4E,
	GooglePurchaseStateEnum_GetPurchaseStateJavaObject_m4E627337309B62407789366C83CFD8A29C1283DE,
	GooglePurchaseStateEnum_Purchased_m3387EF2F9D7B747CC4432008CA0324A6A0744FF7,
	GooglePurchaseStateEnum_Pending_mBE435A9305D88F0C76FE5E7CB8F8E3B35A80933F,
	GoogleSkuTypeEnum_GetSkuTypeJavaObject_m699D0F5EF88E9B5F8133B4ED0AF5C28C5E46662B,
	GoogleSkuTypeEnum_InApp_m4F9E9F5E2BA2C101E2A6C7B9E92AF017A70882EE,
	GoogleSkuTypeEnum_Sub_mC2223B94DCE3DBFFDDEA26749697CFCC87C02172,
	ProductDescriptionQuery__ctor_mD41730BDF5D715EDCE8335049783B66BF3AFBE40,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AndroidJavaObjectWrapper_get_androidJavaObject_mDCC34AA2B0D6003BCCA81F4D6703A4D256C2C13F,
	AndroidJavaObjectWrapper__ctor_m63D078654FC89CCDD7B22FC6AAFFBEE858C82855,
	NULL,
	GooglePurchaseHelper_MakeGooglePurchase_mC317A1D8EBD2A7860B2B286FE73E04BA94338BDA,
	U3CU3Ec__DisplayClass0_0__ctor_mC095A2AA1F871F95F6066BB6DBDE844E1AB3F5EA,
	U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m6EF48E070C2DAA1B780224CE4E57C9EACEF48D86,
	GoogleReceiptEncoder_EncodeReceipt_mE46AC5ACD1DAE340E8F596DAD9FACDC6F3C40F54,
	GoogleReceiptEncoder_FormatPayload_mE53628734A576D50196CF0E4F0AD2787E9E95190,
	SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m477B1A227BB146FAC0FBD37EA6E3157FBFFF73B5,
	SkuDetailsConverter_ConvertSkusDetailsToProducts_mD1FBBACB9CD6B81CD0EAFDB304526DD6E1E2884B,
	SkuDetailsConverter_ToListProducts_mC8B72F7D6984A30A75BC90F2357D9AB34620AECA,
	SkuDetailsConverter_BuildProductDescription_mB72B3352CF84D681DFC1122A7266419951A4018C,
	U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF8567F97DF83552BA4A74D864C368D80C39853D3,
};
static const int32_t s_InvokerIndices[742] = 
{
	10,
	14,
	14,
	14,
	14,
	14,
	190,
	14,
	10,
	10,
	711,
	14,
	28,
	150,
	26,
	26,
	90,
	26,
	26,
	27,
	27,
	26,
	26,
	215,
	26,
	26,
	27,
	26,
	26,
	215,
	26,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	27,
	14,
	32,
	26,
	215,
	26,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	27,
	26,
	26,
	215,
	26,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	26,
	23,
	0,
	0,
	4,
	4,
	132,
	1,
	204,
	26,
	23,
	26,
	26,
	215,
	26,
	27,
	23,
	977,
	26,
	26,
	27,
	27,
	31,
	27,
	26,
	26,
	27,
	23,
	26,
	1,
	14,
	9,
	26,
	27,
	23,
	23,
	9,
	23,
	9,
	27,
	437,
	0,
	23,
	26,
	23,
	9,
	14,
	26,
	23,
	888,
	26,
	23,
	23,
	23,
	23,
	27,
	26,
	112,
	437,
	26,
	27,
	215,
	112,
	112,
	154,
	27,
	23,
	26,
	27,
	26,
	204,
	28,
	27,
	23,
	26,
	23,
	26,
	4,
	27,
	27,
	27,
	27,
	27,
	27,
	215,
	215,
	26,
	23,
	23,
	26,
	3,
	23,
	9,
	28,
	9,
	28,
	23,
	27,
	14,
	26,
	23,
	26,
	26,
	26,
	23,
	215,
	26,
	215,
	27,
	26,
	26,
	215,
	27,
	27,
	27,
	215,
	26,
	26,
	26,
	27,
	26,
	27,
	26,
	26,
	27,
	26,
	23,
	26,
	26,
	27,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	32,
	2849,
	27,
	26,
	23,
	26,
	27,
	26,
	23,
	26,
	3,
	23,
	9,
	26,
	26,
	27,
	437,
	215,
	437,
	215,
	111,
	26,
	26,
	27,
	26,
	26,
	26,
	23,
	23,
	32,
	26,
	23,
	31,
	32,
	26,
	26,
	31,
	23,
	26,
	32,
	26,
	31,
	23,
	26,
	215,
	27,
	27,
	4,
	23,
	26,
	215,
	27,
	27,
	88,
	26,
	27,
	27,
	0,
	26,
	26,
	26,
	27,
	27,
	154,
	23,
	23,
	88,
	88,
	23,
	88,
	0,
	4,
	0,
	3,
	23,
	9,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	23,
	26,
	26,
	23,
	2854,
	437,
	215,
	28,
	90,
	23,
	9,
	3,
	23,
	41,
	41,
	23,
	23,
	23,
	9,
	23,
	26,
	26,
	23,
	26,
	26,
	159,
	28,
	14,
	26,
	89,
	23,
	26,
	26,
	26,
	26,
	26,
	27,
	27,
	26,
	26,
	215,
	215,
	26,
	27,
	27,
	14,
	10,
	124,
	159,
	159,
	28,
	14,
	23,
	0,
	800,
	26,
	150,
	1,
	0,
	26,
	14,
	23,
	26,
	26,
	23,
	3,
	23,
	509,
	116,
	23,
	23,
	2855,
	800,
	111,
	49,
	3,
	27,
	1,
	26,
	26,
	129,
	2852,
	161,
	150,
	58,
	23,
	32,
	23,
	89,
	14,
	23,
	14,
	32,
	23,
	89,
	14,
	23,
	14,
	129,
	150,
	0,
	23,
	23,
	23,
	14,
	14,
	0,
	23,
	3,
	23,
	28,
	14,
	14,
	453,
	14,
	23,
	14,
	14,
	23,
	14,
	14,
	3,
	169,
	89,
	0,
	0,
	4,
	23,
	3,
	23,
	9,
	14,
	14,
	23,
	14,
	26,
	14,
	26,
	190,
	216,
	14,
	26,
	10,
	32,
	14,
	26,
	14,
	26,
	10,
	32,
	10,
	32,
	711,
	335,
	14,
	26,
	14,
	26,
	14,
	14,
	26,
	14,
	26,
	1033,
	1034,
	760,
	2856,
	14,
	26,
	760,
	14,
	14,
	26,
	14,
	26,
	1033,
	26,
	14,
	14,
	0,
	26,
	1034,
	26,
	2856,
	26,
	49,
	4,
	23,
	2857,
	2858,
	4,
	120,
	605,
	4,
	111,
	111,
	111,
	3,
	14,
	26,
	14,
	26,
	14,
	26,
	14,
	26,
	14,
	26,
	2859,
	10,
	10,
	32,
	89,
	31,
	4,
	43,
	23,
	14,
	14,
	14,
	26,
	2,
	0,
	14,
	28,
	28,
	14,
	31,
	14,
	14,
	14,
	3,
	26,
	14,
	14,
	27,
	26,
	31,
	10,
	32,
	32,
	0,
	27,
	10,
	23,
	23,
	14,
	10,
	23,
	14,
	10,
	23,
	23,
	31,
	23,
	215,
	26,
	26,
	26,
	27,
	32,
	27,
	31,
	23,
	3,
	23,
	9,
	28,
	26,
	26,
	2854,
	437,
	23,
	23,
	14,
	26,
	26,
	26,
	27,
	27,
	27,
	27,
	-1,
	23,
	215,
	23,
	801,
	23,
	801,
	23,
	-1,
	2860,
	23,
	28,
	28,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	23,
	23,
	32,
	23,
	89,
	23,
	23,
	23,
	32,
	23,
	23,
	23,
	-1,
	-1,
	3,
	23,
	28,
	2,
	27,
	1,
	-1,
	121,
	14,
	14,
	14,
	14,
	14,
	14,
	190,
	10,
	89,
	14,
	14,
	10,
	14,
	10,
	10,
	711,
	14,
	28,
	150,
	26,
	34,
	23,
	-1,
	-1,
	49,
	154,
	58,
	23,
	26,
	31,
	90,
	23,
	3,
	32,
	23,
	89,
	14,
	23,
	14,
	4,
	117,
	117,
	117,
	4,
	4,
	4,
	4,
	26,
	26,
	28,
	27,
	161,
	161,
	28,
	28,
	437,
	437,
	26,
	0,
	27,
	89,
	89,
	27,
	27,
	4,
	117,
	117,
	4,
	4,
	4,
	27,
	26,
	26,
	26,
	28,
	27,
	161,
	437,
	437,
	437,
	14,
	26,
	27,
	26,
	437,
	26,
	26,
	26,
	215,
	26,
	27,
	112,
	26,
	27,
	27,
	-1,
	14,
	26,
	-1,
	1,
	23,
	9,
	134,
	2,
	154,
	0,
	0,
	0,
	94,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[2] = 
{
	{ 0x0600013A, 7,  (void**)&AppleStoreImpl_MessageCallback_m58F85651C958C901D09778332EFDA47EC8EDE8AA_RuntimeMethod_var, 0 },
	{ 0x06000244, 8,  (void**)&FacebookStoreImpl_MessageCallback_m07158CE4BA5566E17C3228CD6B47B31673F3D1BC_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[6] = 
{
	{ 0x020000A5, { 5, 2 } },
	{ 0x06000258, { 0, 5 } },
	{ 0x06000278, { 7, 5 } },
	{ 0x06000290, { 12, 2 } },
	{ 0x06000291, { 14, 2 } },
	{ 0x060002DC, { 16, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[17] = 
{
	{ (Il2CppRGCTXDataType)2, 23016 },
	{ (Il2CppRGCTXDataType)3, 45312 },
	{ (Il2CppRGCTXDataType)1, 16607 },
	{ (Il2CppRGCTXDataType)2, 16607 },
	{ (Il2CppRGCTXDataType)3, 45313 },
	{ (Il2CppRGCTXDataType)2, 16618 },
	{ (Il2CppRGCTXDataType)3, 45314 },
	{ (Il2CppRGCTXDataType)2, 23017 },
	{ (Il2CppRGCTXDataType)3, 45315 },
	{ (Il2CppRGCTXDataType)2, 16628 },
	{ (Il2CppRGCTXDataType)3, 45316 },
	{ (Il2CppRGCTXDataType)3, 45317 },
	{ (Il2CppRGCTXDataType)1, 16629 },
	{ (Il2CppRGCTXDataType)2, 16629 },
	{ (Il2CppRGCTXDataType)1, 16630 },
	{ (Il2CppRGCTXDataType)3, 45318 },
	{ (Il2CppRGCTXDataType)3, 45319 },
};
extern const Il2CppCodeGenModule g_StoresCodeGenModule;
const Il2CppCodeGenModule g_StoresCodeGenModule = 
{
	"Stores.dll",
	742,
	s_methodPointers,
	s_InvokerIndices,
	2,
	s_reversePInvokeIndices,
	6,
	s_rgctxIndices,
	17,
	s_rgctxValues,
	NULL,
};
