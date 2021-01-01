#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D;
// UnityEngine.Purchasing.Security.AppleReceipt
struct AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324;
// UnityEngine.Purchasing.Security.AppleReceiptParser
struct AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1;
// LipingShare.LCLib.Asn1Processor.Asn1Node
struct Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664;
// LipingShare.LCLib.Asn1Processor.Asn1Parser
struct Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// UnityEngine.Purchasing.Security.DistinguishedName
struct DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// UnityEngine.Purchasing.Security.IAPSecurityException
struct IAPSecurityException_tF28CC4FF2759C3C65EB896A7EDBE5038F47AD7AE;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Purchasing.Security.InvalidPKCS7Data
struct InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E;
// UnityEngine.Purchasing.Security.InvalidRSAData
struct InvalidRSAData_tADEA09637201E4E28208AED7BE94E00ED6A08DCF;
// UnityEngine.Purchasing.Security.InvalidTimeFormat
struct InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969;
// UnityEngine.Purchasing.Security.InvalidX509Data
struct InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A;
// LipingShare.LCLib.Asn1Processor.Oid
struct Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A;
// UnityEngine.Purchasing.Security.PKCS7
struct PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B;
// UnityEngine.Purchasing.Security.RSAKey
struct RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65;
// LipingShare.LCLib.Asn1Processor.RelativeOid
struct RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// UnityEngine.Purchasing.Security.SignerInfo
struct SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE;
// UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion
struct UnsupportedSignerInfoVersion_t03A6E710105BD3455AD4E1987AFA544FAEAA46FD;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Purchasing.Security.X509Cert
struct X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>
struct List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>
struct List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>
struct List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[]
struct AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7;
// UnityEngine.Purchasing.Security.SignerInfo[]
struct SignerInfoU5BU5D_t4F95718574EE42990B28CBABA9116E3272D2571D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// UnityEngine.Purchasing.Security.X509Cert[]
struct X509CertU5BU5D_t65B3AA3DC3C308D077C225BA61E94C2071D909F5;

IL2CPP_EXTERN_C RuntimeClass* AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidRSAData_tADEA09637201E4E28208AED7BE94E00ED6A08DCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedSignerInfoVersion_t03A6E710105BD3455AD4E1987AFA544FAEAA46FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t508511518024955758BBBAD83B676542F82346D7____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04E4C7E6115783DAF7E8E371EDC9AE581528EA78;
IL2CPP_EXTERN_C String_t* _stringLiteral0524144B9F212F40BEC2750DD0C06E4159777384;
IL2CPP_EXTERN_C String_t* _stringLiteral08D691F3DDE80A0F3B3AFC79770EEC67F64A0234;
IL2CPP_EXTERN_C String_t* _stringLiteral0AC347CF826668C4F33A1CD7ADF5419BAAE73FE0;
IL2CPP_EXTERN_C String_t* _stringLiteral0B6E49D70DC463E44307A8A539250C8090D10786;
IL2CPP_EXTERN_C String_t* _stringLiteral14D13302CA125B23FDC663B73325C42B8DA4C1EB;
IL2CPP_EXTERN_C String_t* _stringLiteral16DEBA0A49D8FDF8FFD3E681909ACA71D8132580;
IL2CPP_EXTERN_C String_t* _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764;
IL2CPP_EXTERN_C String_t* _stringLiteral1A7FC08E8EB016BAD5A8A8D7B3447DAD63E867BC;
IL2CPP_EXTERN_C String_t* _stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA2E7519891D1B744F973A073D6CE50874854C6;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7F604AA53E605CA5A4D06ADF4F5C4B6FCBD8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral31EFAEEDBC2BB686A5ABA0098A7A45FCE86FBD8A;
IL2CPP_EXTERN_C String_t* _stringLiteral3B764AA8712500B6779AEFF44B47B45F9ECF8039;
IL2CPP_EXTERN_C String_t* _stringLiteral3C71631187881B6DAB198AF4B06C779471926174;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral44D231DAD9D02BE301A8CF4FBCABD5DE1FDCFF54;
IL2CPP_EXTERN_C String_t* _stringLiteral453A07B8CC155ECBEB68D277EC848642FFB5F3B6;
IL2CPP_EXTERN_C String_t* _stringLiteral481CFA1B155F22067D8FEA989EB269E873B62B4F;
IL2CPP_EXTERN_C String_t* _stringLiteral4BAFCB89E7C61DD51CF32D48E1F883426E74C000;
IL2CPP_EXTERN_C String_t* _stringLiteral52D13D434A39B045A12B8CCE2D63CFFAFE1972CF;
IL2CPP_EXTERN_C String_t* _stringLiteral5F3ACD009658E07BAE430ABC62FC30CE666E7249;
IL2CPP_EXTERN_C String_t* _stringLiteral61F9A6943D78A4154F6821755AA9A1C4A3E80717;
IL2CPP_EXTERN_C String_t* _stringLiteral67E6D858EA0BE7F6F1158A0A3EA4E4946B21A283;
IL2CPP_EXTERN_C String_t* _stringLiteral68E810E310A6E1368AC66300136C585E142E80BF;
IL2CPP_EXTERN_C String_t* _stringLiteral6BB0A873A6D6124ACF9D6FEAEB6204BC0FFE7381;
IL2CPP_EXTERN_C String_t* _stringLiteral79C59A0C4D87BBB64A0C537CC6FCEBF8DE14A269;
IL2CPP_EXTERN_C String_t* _stringLiteral859BD87B9776D9CE86B7C752B95409950D61EB08;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral94227CA8EB4252C21E39FE8CCB2B65A6D01D3CF1;
IL2CPP_EXTERN_C String_t* _stringLiteral9787EA65D34ACB2E800972522D1FB9E8D86E0511;
IL2CPP_EXTERN_C String_t* _stringLiteral99C134A36D015746C32203B98CC495F87311D9DC;
IL2CPP_EXTERN_C String_t* _stringLiteral9CBE6269D7D5D08B76852D89B90B601BAD02D7DD;
IL2CPP_EXTERN_C String_t* _stringLiteralAC35AB7561A701D96BD51BC1F1EE072F2F9718C0;
IL2CPP_EXTERN_C String_t* _stringLiteralADADD3B05013D84B886E96640AA7F89AF39D5AD6;
IL2CPP_EXTERN_C String_t* _stringLiteralADF3402AEC14A5C5A7E1E8A624F7B7F4D2123EA0;
IL2CPP_EXTERN_C String_t* _stringLiteralAE82977104FE357F4C1CE6D6A3DFD58AFEBFC641;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A7D2EEB1F22F7D3B5BE89D41486AAF0411C31A;
IL2CPP_EXTERN_C String_t* _stringLiteralB562730CA6FCD749B7C84DE73BEBD292D954C70E;
IL2CPP_EXTERN_C String_t* _stringLiteralB89111EC34842EC45C03B81F4BDFBC7724B6905F;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DA3B4CA745F231A5F6D027DDCEE9158AC52CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBCED53E33A2D1B5B5E90E0B5DE86443E44FD452A;
IL2CPP_EXTERN_C String_t* _stringLiteralBF403E6FC90C56524FFEE246E1374665DF60C2D6;
IL2CPP_EXTERN_C String_t* _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8;
IL2CPP_EXTERN_C String_t* _stringLiteralC3C83DB7DD412566438B355E6504DBB01A12F5E4;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6;
IL2CPP_EXTERN_C String_t* _stringLiteralCBDD70ED42B3745921307A6AF5729CDF0C49B732;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA206F53009B4409A8E1620933737D0F4D7E1B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCF2AF9005B6B2A5DCC73C4E00CBE3F19D96687B4;
IL2CPP_EXTERN_C String_t* _stringLiteralCF61206F351943EEC77681D8FE9F32833CBE6444;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC3FA34132F5B79C1EC6AD3AAAC2C6A5B7F29E34;
IL2CPP_EXTERN_C String_t* _stringLiteralDCACA63FC238CCA8ED535F7BFAF590FC831D8832;
IL2CPP_EXTERN_C String_t* _stringLiteralDD381BE73F585C3796C220566E891E458F9D6290;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A854E69EA27FE94B3DD30F3C8F92D6E6560149;
IL2CPP_EXTERN_C String_t* _stringLiteralE91195DA6E39E9A4D6BB7DBF2BF8A45CF0FB0A42;
IL2CPP_EXTERN_C String_t* _stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF60A7C62C7CF38BEB570C5B0AF43904FFCB6B8;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE5B4EE3917FFFE8F93D31E5E798F2A968F3FC6;
IL2CPP_EXTERN_C String_t* _stringLiteralF172F77C7E45F5898E6A62C11097CBEE26EBF4E1;
IL2CPP_EXTERN_C String_t* _stringLiteralF24BCEBD3BF54143DC34399B1E3AD4F93496E764;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF69C981860A19A82ADD9552E5DDAFA32BFD3D7B7;
IL2CPP_EXTERN_C String_t* _stringLiteralF7906DC491A0486A30D111F231D1624CA5B94C94;
IL2CPP_EXTERN_C const RuntimeMethod* AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF7804989EFD1BBA18799DA94378B730C6C755876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppleReceiptParser_ParseReceipt_m9FFD302D6378AA2F5533FDEAA0AB4A0F68F6D895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Node_GeneralDecode_mB52E0759A0B509FA1E379AB5956F4A352178BBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Node_ListDecode_m0F1490667F35A8C8309852728025433C7F45AE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Parser_LoadData_mDA468A77F6F1CC015AD4BBCE30AD04CF89ECC12E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DistinguishedName__ctor_m910E3943DD9419738C9B91E6555927ED637309D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1D531475FD3EC6150787384B1754323269CBD817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m81CFA3B02078BDC051E750D0EE5D41CC49277177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAEADDA782F164A6F1B641FE03376CE5AF1406DC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m1E3916E614673C663832CFFA919C89A609EB0A81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2535283F8D938B1B1D70568F4EEEE6B37CDCEB3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB1F38C244A118E92C82EA64BA8F70E0BAE23718C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBBE7D5A92F97B3F1FE2DA60D3C1FDEE14B744093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Oid_Decode_m5F28AF607629C2F5DDC232B758DCA62E0B19A64B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSAKey_ParseNode_m17EF7D0DF0929BB63DDA94F9D2D6F6677DE840AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelativeOid_Decode_m1989A236A74DA5F6A5C77B566A0B9F4ADEAD7FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Cert_ParseTime_m4A3481A154EC5A21A6A927E5A0D406B4DD8156B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AppleReceiptParser_ParseInAppReceipt_mDB249E290F413C622D3533EE879820FDAD1B2BB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppleReceiptParser_ParseReceipt_m9FFD302D6378AA2F5533FDEAA0AB4A0F68F6D895_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppleReceiptParser_Parse_mB2C2F24B78C85071D8C127D0DB7B025C4591FE7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppleReceiptParser_TryParseDateTimeNode_m7D27964693E2E2115E060EEE3776FDE57D85B31F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppleReceiptParser__cctor_m519A589915D3E7696B6B71B1310C9FF6DD380065_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_ClearAll_m5718361F5C48B147A6F873357C7C98E7C45C01C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_FormatLineHexString_m629FFA6B616B5B4D4FFEC583CF311542D1E215D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_FormatLineString_m6945790E5C4FA04D27973A4A1AAFE147E48B2A07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GeneralDecode_mB52E0759A0B509FA1E379AB5956F4A352178BBDC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetDataStr_m5328ED9958497CB67DF1A942B9EA8B4E72E1D4AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetHexPrintingStr_mD382FE3CED0B661AE55C914B46CD9622AF402CDB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetListStr_mD39C6F96270976B88A58760F258AFF38F7198D3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetText_mA2C27AFDB8F6610F12A0D64B76CDB7D591CF0E92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_Init_m587AD3EB43FDB580FDEAC3EBFC48614C5E6DB24A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_ListDecode_m0F1490667F35A8C8309852728025433C7F45AE11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_ResetChildNodePar_mA1E21E949F74C76037E6CED6D7BE3C863453DE24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_ResetDataLengthFieldWidth_m35E24AA80320AF619ECC4524D609A4A219B41702_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_SaveData_m7DD537A6D5BB18C70A8B9D6D40DC3671B311A3F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node__ctor_m79EEA15084314869B9005F84E0BDAEB8323D7E9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node__ctor_m9844534C8D542B7057B56B95C7FA89F46D6A46BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Parser_GetNodeTextHeader_mB84271C146A881023B489C2F426E2BC9B3570379_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Parser_LoadData_mDA468A77F6F1CC015AD4BBCE30AD04CF89ECC12E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Parser__ctor_m8CA8010706903D69C889638BE7715FE23290D714_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_BytesToString_m250C8D269AC48BA4125F4D3996E5B64B99CD36BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_DERLengthEncode_mEAAF6BFA9CF50BB1113FDA7D18326247CB59A8D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_FormatString_mBF08ABF06783CFC76B3574F44DD7F1D0E68A56CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_GenStr_m59983BB4DEA4E0F6EB009E069A40557B5155A815_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_GetTagName_mA48556C90F4F1D4CE6E57A4DF624B9C71E981BC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util__cctor_mBD73789941107A4043D9AE7CE66E9207FF4995EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DistinguishedName_ToString_m545AAD481F2D3E553A88B7A9AC64C82F4B3CC73E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DistinguishedName__ctor_m910E3943DD9419738C9B91E6555927ED637309D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPSecurityException__ctor_mB0C1A9E5D379E35649A4A0516681B7A2ECD1C45F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Oid_Decode_m5F28AF607629C2F5DDC232B758DCA62E0B19A64B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Oid_Decode_mFC72B43B421FC30686F15C9F9E58FC2E4F64D1DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Oid_GetOidName_m64BFA3E74CFFFC1B22D401FA4D514E95B553E6E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Oid__cctor_mEF41427F722800580825DC2C2EC08F3CA35CD62E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RSAKey_ParseNode_m17EF7D0DF0929BB63DDA94F9D2D6F6677DE840AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RSAKey_ToXML_m1DC216979B522DB9F399914D33BD6BE0920E517D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RelativeOid_Decode_m1989A236A74DA5F6A5C77B566A0B9F4ADEAD7FFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RelativeOid__ctor_mA1498861FAA241BA8D336EDDC7935944F0332087_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Cert_ParseTime_m4A3481A154EC5A21A6A927E5A0D406B4DD8156B5_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2873A028F1B1EC75352D48E1CD974E9C091C1519 
{
public:

public:
};


// System.Object


// LipingShare.LCLib.Asn1Processor.Asn1Node
struct  Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664  : public RuntimeObject
{
public:
	// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::tag
	uint8_t ___tag_0;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::dataOffset
	int64_t ___dataOffset_1;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::dataLength
	int64_t ___dataLength_2;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::lengthFieldBytes
	int64_t ___lengthFieldBytes_3;
	// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_4;
	// System.Collections.ArrayList LipingShare.LCLib.Asn1Processor.Asn1Node::childNodeList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___childNodeList_5;
	// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::unusedBits
	uint8_t ___unusedBits_6;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::deepness
	int64_t ___deepness_7;
	// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::path
	String_t* ___path_8;
	// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::parentNode
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___parentNode_9;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::requireRecalculatePar
	bool ___requireRecalculatePar_10;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::isIndefiniteLength
	bool ___isIndefiniteLength_11;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::parseEncapsulatedData
	bool ___parseEncapsulatedData_12;

public:
	inline static int32_t get_offset_of_tag_0() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___tag_0)); }
	inline uint8_t get_tag_0() const { return ___tag_0; }
	inline uint8_t* get_address_of_tag_0() { return &___tag_0; }
	inline void set_tag_0(uint8_t value)
	{
		___tag_0 = value;
	}

	inline static int32_t get_offset_of_dataOffset_1() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___dataOffset_1)); }
	inline int64_t get_dataOffset_1() const { return ___dataOffset_1; }
	inline int64_t* get_address_of_dataOffset_1() { return &___dataOffset_1; }
	inline void set_dataOffset_1(int64_t value)
	{
		___dataOffset_1 = value;
	}

	inline static int32_t get_offset_of_dataLength_2() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___dataLength_2)); }
	inline int64_t get_dataLength_2() const { return ___dataLength_2; }
	inline int64_t* get_address_of_dataLength_2() { return &___dataLength_2; }
	inline void set_dataLength_2(int64_t value)
	{
		___dataLength_2 = value;
	}

	inline static int32_t get_offset_of_lengthFieldBytes_3() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___lengthFieldBytes_3)); }
	inline int64_t get_lengthFieldBytes_3() const { return ___lengthFieldBytes_3; }
	inline int64_t* get_address_of_lengthFieldBytes_3() { return &___lengthFieldBytes_3; }
	inline void set_lengthFieldBytes_3(int64_t value)
	{
		___lengthFieldBytes_3 = value;
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___data_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_4() const { return ___data_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of_childNodeList_5() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___childNodeList_5)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_childNodeList_5() const { return ___childNodeList_5; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_childNodeList_5() { return &___childNodeList_5; }
	inline void set_childNodeList_5(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___childNodeList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childNodeList_5), (void*)value);
	}

	inline static int32_t get_offset_of_unusedBits_6() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___unusedBits_6)); }
	inline uint8_t get_unusedBits_6() const { return ___unusedBits_6; }
	inline uint8_t* get_address_of_unusedBits_6() { return &___unusedBits_6; }
	inline void set_unusedBits_6(uint8_t value)
	{
		___unusedBits_6 = value;
	}

	inline static int32_t get_offset_of_deepness_7() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___deepness_7)); }
	inline int64_t get_deepness_7() const { return ___deepness_7; }
	inline int64_t* get_address_of_deepness_7() { return &___deepness_7; }
	inline void set_deepness_7(int64_t value)
	{
		___deepness_7 = value;
	}

	inline static int32_t get_offset_of_path_8() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___path_8)); }
	inline String_t* get_path_8() const { return ___path_8; }
	inline String_t** get_address_of_path_8() { return &___path_8; }
	inline void set_path_8(String_t* value)
	{
		___path_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_8), (void*)value);
	}

	inline static int32_t get_offset_of_parentNode_9() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___parentNode_9)); }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * get_parentNode_9() const { return ___parentNode_9; }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 ** get_address_of_parentNode_9() { return &___parentNode_9; }
	inline void set_parentNode_9(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * value)
	{
		___parentNode_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_9), (void*)value);
	}

	inline static int32_t get_offset_of_requireRecalculatePar_10() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___requireRecalculatePar_10)); }
	inline bool get_requireRecalculatePar_10() const { return ___requireRecalculatePar_10; }
	inline bool* get_address_of_requireRecalculatePar_10() { return &___requireRecalculatePar_10; }
	inline void set_requireRecalculatePar_10(bool value)
	{
		___requireRecalculatePar_10 = value;
	}

	inline static int32_t get_offset_of_isIndefiniteLength_11() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___isIndefiniteLength_11)); }
	inline bool get_isIndefiniteLength_11() const { return ___isIndefiniteLength_11; }
	inline bool* get_address_of_isIndefiniteLength_11() { return &___isIndefiniteLength_11; }
	inline void set_isIndefiniteLength_11(bool value)
	{
		___isIndefiniteLength_11 = value;
	}

	inline static int32_t get_offset_of_parseEncapsulatedData_12() { return static_cast<int32_t>(offsetof(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664, ___parseEncapsulatedData_12)); }
	inline bool get_parseEncapsulatedData_12() const { return ___parseEncapsulatedData_12; }
	inline bool* get_address_of_parseEncapsulatedData_12() { return &___parseEncapsulatedData_12; }
	inline void set_parseEncapsulatedData_12(bool value)
	{
		___parseEncapsulatedData_12 = value;
	}
};


// LipingShare.LCLib.Asn1Processor.Asn1Parser
struct  Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B  : public RuntimeObject
{
public:
	// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Parser::rawData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rawData_0;
	// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::rootNode
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___rootNode_1;

public:
	inline static int32_t get_offset_of_rawData_0() { return static_cast<int32_t>(offsetof(Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B, ___rawData_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_rawData_0() const { return ___rawData_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_rawData_0() { return &___rawData_0; }
	inline void set_rawData_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___rawData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_0), (void*)value);
	}

	inline static int32_t get_offset_of_rootNode_1() { return static_cast<int32_t>(offsetof(Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B, ___rootNode_1)); }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * get_rootNode_1() const { return ___rootNode_1; }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 ** get_address_of_rootNode_1() { return &___rootNode_1; }
	inline void set_rootNode_1(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * value)
	{
		___rootNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootNode_1), (void*)value);
	}
};


// LipingShare.LCLib.Asn1Processor.Asn1Util
struct  Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1  : public RuntimeObject
{
public:

public:
};

struct Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_StaticFields
{
public:
	// System.Char[] LipingShare.LCLib.Asn1Processor.Asn1Util::hexDigits
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hexDigits_0;

public:
	inline static int32_t get_offset_of_hexDigits_0() { return static_cast<int32_t>(offsetof(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_StaticFields, ___hexDigits_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_hexDigits_0() const { return ___hexDigits_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_hexDigits_0() { return &___hexDigits_0; }
	inline void set_hexDigits_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___hexDigits_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexDigits_0), (void*)value);
	}
};


// LipingShare.LCLib.Asn1Processor.Oid
struct  Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A  : public RuntimeObject
{
public:

public:
};

struct Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_StaticFields
{
public:
	// System.Collections.Specialized.StringDictionary LipingShare.LCLib.Asn1Processor.Oid::oidDictionary
	StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * ___oidDictionary_0;

public:
	inline static int32_t get_offset_of_oidDictionary_0() { return static_cast<int32_t>(offsetof(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_StaticFields, ___oidDictionary_0)); }
	inline StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * get_oidDictionary_0() const { return ___oidDictionary_0; }
	inline StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 ** get_address_of_oidDictionary_0() { return &___oidDictionary_0; }
	inline void set_oidDictionary_0(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * value)
	{
		___oidDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oidDictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct  ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_4), (void*)value);
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


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>
struct  List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E, ____items_1)); }
	inline AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* get__items_1() const { return ____items_1; }
	inline AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E_StaticFields, ____emptyArray_5)); }
	inline AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>
struct  List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SignerInfoU5BU5D_t4F95718574EE42990B28CBABA9116E3272D2571D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9, ____items_1)); }
	inline SignerInfoU5BU5D_t4F95718574EE42990B28CBABA9116E3272D2571D* get__items_1() const { return ____items_1; }
	inline SignerInfoU5BU5D_t4F95718574EE42990B28CBABA9116E3272D2571D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SignerInfoU5BU5D_t4F95718574EE42990B28CBABA9116E3272D2571D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SignerInfoU5BU5D_t4F95718574EE42990B28CBABA9116E3272D2571D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9_StaticFields, ____emptyArray_5)); }
	inline SignerInfoU5BU5D_t4F95718574EE42990B28CBABA9116E3272D2571D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SignerInfoU5BU5D_t4F95718574EE42990B28CBABA9116E3272D2571D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SignerInfoU5BU5D_t4F95718574EE42990B28CBABA9116E3272D2571D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>
struct  List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	X509CertU5BU5D_t65B3AA3DC3C308D077C225BA61E94C2071D909F5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481, ____items_1)); }
	inline X509CertU5BU5D_t65B3AA3DC3C308D077C225BA61E94C2071D909F5* get__items_1() const { return ____items_1; }
	inline X509CertU5BU5D_t65B3AA3DC3C308D077C225BA61E94C2071D909F5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(X509CertU5BU5D_t65B3AA3DC3C308D077C225BA61E94C2071D909F5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	X509CertU5BU5D_t65B3AA3DC3C308D077C225BA61E94C2071D909F5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481_StaticFields, ____emptyArray_5)); }
	inline X509CertU5BU5D_t65B3AA3DC3C308D077C225BA61E94C2071D909F5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline X509CertU5BU5D_t65B3AA3DC3C308D077C225BA61E94C2071D909F5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(X509CertU5BU5D_t65B3AA3DC3C308D077C225BA61E94C2071D909F5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79, ___contents_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contents_0), (void*)value);
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

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_1), (void*)value);
	}
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


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_56)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_59)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_60)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
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

// UnityEngine.Purchasing.Security.AppleReceiptParser
struct  AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1  : public RuntimeObject
{
public:

public:
};

struct AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.Security.AppleReceiptParser::_mostRecentReceiptData
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ____mostRecentReceiptData_0;

public:
	inline static int32_t get_offset_of__mostRecentReceiptData_0() { return static_cast<int32_t>(offsetof(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields, ____mostRecentReceiptData_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get__mostRecentReceiptData_0() const { return ____mostRecentReceiptData_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of__mostRecentReceiptData_0() { return &____mostRecentReceiptData_0; }
	inline void set__mostRecentReceiptData_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		____mostRecentReceiptData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mostRecentReceiptData_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.DistinguishedName
struct  DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Country>k__BackingField
	String_t* ___U3CCountryU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Organization>k__BackingField
	String_t* ___U3COrganizationU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<OrganizationalUnit>k__BackingField
	String_t* ___U3COrganizationalUnitU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Dnq>k__BackingField
	String_t* ___U3CDnqU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<State>k__BackingField
	String_t* ___U3CStateU3Ek__BackingField_4;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<CommonName>k__BackingField
	String_t* ___U3CCommonNameU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<SerialNumber>k__BackingField
	String_t* ___U3CSerialNumberU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CCountryU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453, ___U3CCountryU3Ek__BackingField_0)); }
	inline String_t* get_U3CCountryU3Ek__BackingField_0() const { return ___U3CCountryU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCountryU3Ek__BackingField_0() { return &___U3CCountryU3Ek__BackingField_0; }
	inline void set_U3CCountryU3Ek__BackingField_0(String_t* value)
	{
		___U3CCountryU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCountryU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrganizationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453, ___U3COrganizationU3Ek__BackingField_1)); }
	inline String_t* get_U3COrganizationU3Ek__BackingField_1() const { return ___U3COrganizationU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3COrganizationU3Ek__BackingField_1() { return &___U3COrganizationU3Ek__BackingField_1; }
	inline void set_U3COrganizationU3Ek__BackingField_1(String_t* value)
	{
		___U3COrganizationU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COrganizationU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrganizationalUnitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453, ___U3COrganizationalUnitU3Ek__BackingField_2)); }
	inline String_t* get_U3COrganizationalUnitU3Ek__BackingField_2() const { return ___U3COrganizationalUnitU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3COrganizationalUnitU3Ek__BackingField_2() { return &___U3COrganizationalUnitU3Ek__BackingField_2; }
	inline void set_U3COrganizationalUnitU3Ek__BackingField_2(String_t* value)
	{
		___U3COrganizationalUnitU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COrganizationalUnitU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDnqU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453, ___U3CDnqU3Ek__BackingField_3)); }
	inline String_t* get_U3CDnqU3Ek__BackingField_3() const { return ___U3CDnqU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDnqU3Ek__BackingField_3() { return &___U3CDnqU3Ek__BackingField_3; }
	inline void set_U3CDnqU3Ek__BackingField_3(String_t* value)
	{
		___U3CDnqU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDnqU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453, ___U3CStateU3Ek__BackingField_4)); }
	inline String_t* get_U3CStateU3Ek__BackingField_4() const { return ___U3CStateU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CStateU3Ek__BackingField_4() { return &___U3CStateU3Ek__BackingField_4; }
	inline void set_U3CStateU3Ek__BackingField_4(String_t* value)
	{
		___U3CStateU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCommonNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453, ___U3CCommonNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CCommonNameU3Ek__BackingField_5() const { return ___U3CCommonNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CCommonNameU3Ek__BackingField_5() { return &___U3CCommonNameU3Ek__BackingField_5; }
	inline void set_U3CCommonNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CCommonNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCommonNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerialNumberU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453, ___U3CSerialNumberU3Ek__BackingField_6)); }
	inline String_t* get_U3CSerialNumberU3Ek__BackingField_6() const { return ___U3CSerialNumberU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CSerialNumberU3Ek__BackingField_6() { return &___U3CSerialNumberU3Ek__BackingField_6; }
	inline void set_U3CSerialNumberU3Ek__BackingField_6(String_t* value)
	{
		___U3CSerialNumberU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerialNumberU3Ek__BackingField_6), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.PKCS7
struct  PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B  : public RuntimeObject
{
public:
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::root
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___root_0;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::<data>k__BackingField
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___U3CdataU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::<sinfos>k__BackingField
	List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * ___U3CsinfosU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::<certChain>k__BackingField
	List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * ___U3CcertChainU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Purchasing.Security.PKCS7::validStructure
	bool ___validStructure_4;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B, ___root_0)); }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * get_root_0() const { return ___root_0; }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B, ___U3CdataU3Ek__BackingField_1)); }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * get_U3CdataU3Ek__BackingField_1() const { return ___U3CdataU3Ek__BackingField_1; }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 ** get_address_of_U3CdataU3Ek__BackingField_1() { return &___U3CdataU3Ek__BackingField_1; }
	inline void set_U3CdataU3Ek__BackingField_1(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * value)
	{
		___U3CdataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsinfosU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B, ___U3CsinfosU3Ek__BackingField_2)); }
	inline List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * get_U3CsinfosU3Ek__BackingField_2() const { return ___U3CsinfosU3Ek__BackingField_2; }
	inline List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 ** get_address_of_U3CsinfosU3Ek__BackingField_2() { return &___U3CsinfosU3Ek__BackingField_2; }
	inline void set_U3CsinfosU3Ek__BackingField_2(List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * value)
	{
		___U3CsinfosU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsinfosU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcertChainU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B, ___U3CcertChainU3Ek__BackingField_3)); }
	inline List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * get_U3CcertChainU3Ek__BackingField_3() const { return ___U3CcertChainU3Ek__BackingField_3; }
	inline List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 ** get_address_of_U3CcertChainU3Ek__BackingField_3() { return &___U3CcertChainU3Ek__BackingField_3; }
	inline void set_U3CcertChainU3Ek__BackingField_3(List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * value)
	{
		___U3CcertChainU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcertChainU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_validStructure_4() { return static_cast<int32_t>(offsetof(PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B, ___validStructure_4)); }
	inline bool get_validStructure_4() const { return ___validStructure_4; }
	inline bool* get_address_of_validStructure_4() { return &___validStructure_4; }
	inline void set_validStructure_4(bool value)
	{
		___validStructure_4 = value;
	}
};


// UnityEngine.Purchasing.Security.RSAKey
struct  RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::<rsa>k__BackingField
	RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * ___U3CrsaU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CrsaU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1, ___U3CrsaU3Ek__BackingField_0)); }
	inline RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * get_U3CrsaU3Ek__BackingField_0() const { return ___U3CrsaU3Ek__BackingField_0; }
	inline RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 ** get_address_of_U3CrsaU3Ek__BackingField_0() { return &___U3CrsaU3Ek__BackingField_0; }
	inline void set_U3CrsaU3Ek__BackingField_0(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * value)
	{
		___U3CrsaU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrsaU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.SignerInfo
struct  SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.SignerInfo::<IssuerSerialNumber>k__BackingField
	String_t* ___U3CIssuerSerialNumberU3Ek__BackingField_1;
	// System.Byte[] UnityEngine.Purchasing.Security.SignerInfo::<EncryptedDigest>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CEncryptedDigestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE, ___U3CVersionU3Ek__BackingField_0)); }
	inline int32_t get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(int32_t value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIssuerSerialNumberU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE, ___U3CIssuerSerialNumberU3Ek__BackingField_1)); }
	inline String_t* get_U3CIssuerSerialNumberU3Ek__BackingField_1() const { return ___U3CIssuerSerialNumberU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CIssuerSerialNumberU3Ek__BackingField_1() { return &___U3CIssuerSerialNumberU3Ek__BackingField_1; }
	inline void set_U3CIssuerSerialNumberU3Ek__BackingField_1(String_t* value)
	{
		___U3CIssuerSerialNumberU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIssuerSerialNumberU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEncryptedDigestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE, ___U3CEncryptedDigestU3Ek__BackingField_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CEncryptedDigestU3Ek__BackingField_2() const { return ___U3CEncryptedDigestU3Ek__BackingField_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CEncryptedDigestU3Ek__BackingField_2() { return &___U3CEncryptedDigestU3Ek__BackingField_2; }
	inline void set_U3CEncryptedDigestU3Ek__BackingField_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CEncryptedDigestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEncryptedDigestU3Ek__BackingField_2), (void*)value);
	}
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D32
struct  __StaticArrayInitTypeSizeU3D32_t393196BD0ECBE6AC0EBFDBE5225AE8915282B306 
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
		uint8_t __StaticArrayInitTypeSizeU3D32_t393196BD0ECBE6AC0EBFDBE5225AE8915282B306__padding[32];
	};

public:
};


// LipingShare.LCLib.Asn1Processor.RelativeOid
struct  RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527  : public Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A
{
public:

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

// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// System.Security.Cryptography.RSA
struct  RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B  : public AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F
{
public:

public:
};


// System.Text.UTF8Encoding
struct  UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_62;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_63;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_62() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_62)); }
	inline bool get_emitUTF8Identifier_62() const { return ___emitUTF8Identifier_62; }
	inline bool* get_address_of_emitUTF8Identifier_62() { return &___emitUTF8Identifier_62; }
	inline void set_emitUTF8Identifier_62(bool value)
	{
		___emitUTF8Identifier_62 = value;
	}

	inline static int32_t get_offset_of_isThrowException_63() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_63)); }
	inline bool get_isThrowException_63() const { return ___isThrowException_63; }
	inline bool* get_address_of_isThrowException_63() { return &___isThrowException_63; }
	inline void set_isThrowException_63(bool value)
	{
		___isThrowException_63 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t508511518024955758BBBAD83B676542F82346D7  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t508511518024955758BBBAD83B676542F82346D7_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_t393196BD0ECBE6AC0EBFDBE5225AE8915282B306  ___59F5BD34B6C013DEACC784F69C67E95150033A84_0;

public:
	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t508511518024955758BBBAD83B676542F82346D7_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_0)); }
	inline __StaticArrayInitTypeSizeU3D32_t393196BD0ECBE6AC0EBFDBE5225AE8915282B306  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline __StaticArrayInitTypeSizeU3D32_t393196BD0ECBE6AC0EBFDBE5225AE8915282B306 * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_0(__StaticArrayInitTypeSizeU3D32_t393196BD0ECBE6AC0EBFDBE5225AE8915282B306  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_0 = value;
	}
};


// System.DateTimeKind
struct  DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.IO.MemoryStream
struct  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
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


// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1, ___value___2)); }
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


// UnityEngine.Purchasing.Security.AppleReceipt
struct  AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<bundleID>k__BackingField
	String_t* ___U3CbundleIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<appVersion>k__BackingField
	String_t* ___U3CappVersionU3Ek__BackingField_1;
	// System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::<opaque>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CopaqueU3Ek__BackingField_2;
	// System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::<hash>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3ChashU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<originalApplicationVersion>k__BackingField
	String_t* ___U3CoriginalApplicationVersionU3Ek__BackingField_4;
	// System.DateTime UnityEngine.Purchasing.Security.AppleReceipt::<receiptCreationDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CreceiptCreationDateU3Ek__BackingField_5;
	// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[] UnityEngine.Purchasing.Security.AppleReceipt::inAppPurchaseReceipts
	AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* ___inAppPurchaseReceipts_6;

public:
	inline static int32_t get_offset_of_U3CbundleIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324, ___U3CbundleIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CbundleIDU3Ek__BackingField_0() const { return ___U3CbundleIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CbundleIDU3Ek__BackingField_0() { return &___U3CbundleIDU3Ek__BackingField_0; }
	inline void set_U3CbundleIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CbundleIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbundleIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CappVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324, ___U3CappVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CappVersionU3Ek__BackingField_1() const { return ___U3CappVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CappVersionU3Ek__BackingField_1() { return &___U3CappVersionU3Ek__BackingField_1; }
	inline void set_U3CappVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CappVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CopaqueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324, ___U3CopaqueU3Ek__BackingField_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CopaqueU3Ek__BackingField_2() const { return ___U3CopaqueU3Ek__BackingField_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CopaqueU3Ek__BackingField_2() { return &___U3CopaqueU3Ek__BackingField_2; }
	inline void set_U3CopaqueU3Ek__BackingField_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CopaqueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CopaqueU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChashU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324, ___U3ChashU3Ek__BackingField_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3ChashU3Ek__BackingField_3() const { return ___U3ChashU3Ek__BackingField_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3ChashU3Ek__BackingField_3() { return &___U3ChashU3Ek__BackingField_3; }
	inline void set_U3ChashU3Ek__BackingField_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3ChashU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChashU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalApplicationVersionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324, ___U3CoriginalApplicationVersionU3Ek__BackingField_4)); }
	inline String_t* get_U3CoriginalApplicationVersionU3Ek__BackingField_4() const { return ___U3CoriginalApplicationVersionU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CoriginalApplicationVersionU3Ek__BackingField_4() { return &___U3CoriginalApplicationVersionU3Ek__BackingField_4; }
	inline void set_U3CoriginalApplicationVersionU3Ek__BackingField_4(String_t* value)
	{
		___U3CoriginalApplicationVersionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginalApplicationVersionU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptCreationDateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324, ___U3CreceiptCreationDateU3Ek__BackingField_5)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CreceiptCreationDateU3Ek__BackingField_5() const { return ___U3CreceiptCreationDateU3Ek__BackingField_5; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CreceiptCreationDateU3Ek__BackingField_5() { return &___U3CreceiptCreationDateU3Ek__BackingField_5; }
	inline void set_U3CreceiptCreationDateU3Ek__BackingField_5(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CreceiptCreationDateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_inAppPurchaseReceipts_6() { return static_cast<int32_t>(offsetof(AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324, ___inAppPurchaseReceipts_6)); }
	inline AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* get_inAppPurchaseReceipts_6() const { return ___inAppPurchaseReceipts_6; }
	inline AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C** get_address_of_inAppPurchaseReceipts_6() { return &___inAppPurchaseReceipts_6; }
	inline void set_inAppPurchaseReceipts_6(AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* value)
	{
		___inAppPurchaseReceipts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inAppPurchaseReceipts_6), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.X509Cert
struct  X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.X509Cert::<SerialNumber>k__BackingField
	String_t* ___U3CSerialNumberU3Ek__BackingField_0;
	// System.DateTime UnityEngine.Purchasing.Security.X509Cert::<ValidAfter>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CValidAfterU3Ek__BackingField_1;
	// System.DateTime UnityEngine.Purchasing.Security.X509Cert::<ValidBefore>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CValidBeforeU3Ek__BackingField_2;
	// UnityEngine.Purchasing.Security.RSAKey UnityEngine.Purchasing.Security.X509Cert::<PubKey>k__BackingField
	RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * ___U3CPubKeyU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Purchasing.Security.X509Cert::<SelfSigned>k__BackingField
	bool ___U3CSelfSignedU3Ek__BackingField_4;
	// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::<Subject>k__BackingField
	DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * ___U3CSubjectU3Ek__BackingField_5;
	// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::<Issuer>k__BackingField
	DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * ___U3CIssuerU3Ek__BackingField_6;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.X509Cert::TbsCertificate
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___TbsCertificate_7;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.X509Cert::<Signature>k__BackingField
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___U3CSignatureU3Ek__BackingField_8;
	// System.Byte[] UnityEngine.Purchasing.Security.X509Cert::rawTBSCertificate
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rawTBSCertificate_9;

public:
	inline static int32_t get_offset_of_U3CSerialNumberU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28, ___U3CSerialNumberU3Ek__BackingField_0)); }
	inline String_t* get_U3CSerialNumberU3Ek__BackingField_0() const { return ___U3CSerialNumberU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSerialNumberU3Ek__BackingField_0() { return &___U3CSerialNumberU3Ek__BackingField_0; }
	inline void set_U3CSerialNumberU3Ek__BackingField_0(String_t* value)
	{
		___U3CSerialNumberU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerialNumberU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValidAfterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28, ___U3CValidAfterU3Ek__BackingField_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CValidAfterU3Ek__BackingField_1() const { return ___U3CValidAfterU3Ek__BackingField_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CValidAfterU3Ek__BackingField_1() { return &___U3CValidAfterU3Ek__BackingField_1; }
	inline void set_U3CValidAfterU3Ek__BackingField_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CValidAfterU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CValidBeforeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28, ___U3CValidBeforeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CValidBeforeU3Ek__BackingField_2() const { return ___U3CValidBeforeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CValidBeforeU3Ek__BackingField_2() { return &___U3CValidBeforeU3Ek__BackingField_2; }
	inline void set_U3CValidBeforeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CValidBeforeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPubKeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28, ___U3CPubKeyU3Ek__BackingField_3)); }
	inline RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * get_U3CPubKeyU3Ek__BackingField_3() const { return ___U3CPubKeyU3Ek__BackingField_3; }
	inline RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 ** get_address_of_U3CPubKeyU3Ek__BackingField_3() { return &___U3CPubKeyU3Ek__BackingField_3; }
	inline void set_U3CPubKeyU3Ek__BackingField_3(RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * value)
	{
		___U3CPubKeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPubKeyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSelfSignedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28, ___U3CSelfSignedU3Ek__BackingField_4)); }
	inline bool get_U3CSelfSignedU3Ek__BackingField_4() const { return ___U3CSelfSignedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CSelfSignedU3Ek__BackingField_4() { return &___U3CSelfSignedU3Ek__BackingField_4; }
	inline void set_U3CSelfSignedU3Ek__BackingField_4(bool value)
	{
		___U3CSelfSignedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSubjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28, ___U3CSubjectU3Ek__BackingField_5)); }
	inline DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * get_U3CSubjectU3Ek__BackingField_5() const { return ___U3CSubjectU3Ek__BackingField_5; }
	inline DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 ** get_address_of_U3CSubjectU3Ek__BackingField_5() { return &___U3CSubjectU3Ek__BackingField_5; }
	inline void set_U3CSubjectU3Ek__BackingField_5(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * value)
	{
		___U3CSubjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubjectU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIssuerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28, ___U3CIssuerU3Ek__BackingField_6)); }
	inline DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * get_U3CIssuerU3Ek__BackingField_6() const { return ___U3CIssuerU3Ek__BackingField_6; }
	inline DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 ** get_address_of_U3CIssuerU3Ek__BackingField_6() { return &___U3CIssuerU3Ek__BackingField_6; }
	inline void set_U3CIssuerU3Ek__BackingField_6(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * value)
	{
		___U3CIssuerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIssuerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_TbsCertificate_7() { return static_cast<int32_t>(offsetof(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28, ___TbsCertificate_7)); }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * get_TbsCertificate_7() const { return ___TbsCertificate_7; }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 ** get_address_of_TbsCertificate_7() { return &___TbsCertificate_7; }
	inline void set_TbsCertificate_7(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * value)
	{
		___TbsCertificate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TbsCertificate_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSignatureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28, ___U3CSignatureU3Ek__BackingField_8)); }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * get_U3CSignatureU3Ek__BackingField_8() const { return ___U3CSignatureU3Ek__BackingField_8; }
	inline Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 ** get_address_of_U3CSignatureU3Ek__BackingField_8() { return &___U3CSignatureU3Ek__BackingField_8; }
	inline void set_U3CSignatureU3Ek__BackingField_8(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * value)
	{
		___U3CSignatureU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSignatureU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_rawTBSCertificate_9() { return static_cast<int32_t>(offsetof(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28, ___rawTBSCertificate_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_rawTBSCertificate_9() const { return ___rawTBSCertificate_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_rawTBSCertificate_9() { return &___rawTBSCertificate_9; }
	inline void set_rawTBSCertificate_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___rawTBSCertificate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawTBSCertificate_9), (void*)value);
	}
};


// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7  : public RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * ___store_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_7;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_8;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_9;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_10;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * ___rsa_11;

public:
	inline static int32_t get_offset_of_store_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___store_6)); }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * get_store_6() const { return ___store_6; }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A ** get_address_of_store_6() { return &___store_6; }
	inline void set_store_6(KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * value)
	{
		___store_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_6), (void*)value);
	}

	inline static int32_t get_offset_of_persistKey_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persistKey_7)); }
	inline bool get_persistKey_7() const { return ___persistKey_7; }
	inline bool* get_address_of_persistKey_7() { return &___persistKey_7; }
	inline void set_persistKey_7(bool value)
	{
		___persistKey_7 = value;
	}

	inline static int32_t get_offset_of_persisted_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persisted_8)); }
	inline bool get_persisted_8() const { return ___persisted_8; }
	inline bool* get_address_of_persisted_8() { return &___persisted_8; }
	inline void set_persisted_8(bool value)
	{
		___persisted_8 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_9() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___privateKeyExportable_9)); }
	inline bool get_privateKeyExportable_9() const { return ___privateKeyExportable_9; }
	inline bool* get_address_of_privateKeyExportable_9() { return &___privateKeyExportable_9; }
	inline void set_privateKeyExportable_9(bool value)
	{
		___privateKeyExportable_9 = value;
	}

	inline static int32_t get_offset_of_m_disposed_10() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___m_disposed_10)); }
	inline bool get_m_disposed_10() const { return ___m_disposed_10; }
	inline bool* get_address_of_m_disposed_10() { return &___m_disposed_10; }
	inline void set_m_disposed_10(bool value)
	{
		___m_disposed_10 = value;
	}

	inline static int32_t get_offset_of_rsa_11() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___rsa_11)); }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * get_rsa_11() const { return ___rsa_11; }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 ** get_address_of_rsa_11() { return &___rsa_11; }
	inline void set_rsa_11(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * value)
	{
		___rsa_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rsa_11), (void*)value);
	}
};

struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields, ___s_UseMachineKeyStore_2)); }
	inline int32_t get_s_UseMachineKeyStore_2() const { return ___s_UseMachineKeyStore_2; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_2() { return &___s_UseMachineKeyStore_2; }
	inline void set_s_UseMachineKeyStore_2(int32_t value)
	{
		___s_UseMachineKeyStore_2 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Purchasing.Security.IAPSecurityException
struct  IAPSecurityException_tF28CC4FF2759C3C65EB896A7EDBE5038F47AD7AE  : public Exception_t
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


// UnityEngine.Purchasing.Security.InvalidPKCS7Data
struct  InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E  : public IAPSecurityException_tF28CC4FF2759C3C65EB896A7EDBE5038F47AD7AE
{
public:

public:
};


// UnityEngine.Purchasing.Security.InvalidRSAData
struct  InvalidRSAData_tADEA09637201E4E28208AED7BE94E00ED6A08DCF  : public IAPSecurityException_tF28CC4FF2759C3C65EB896A7EDBE5038F47AD7AE
{
public:

public:
};


// UnityEngine.Purchasing.Security.InvalidTimeFormat
struct  InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969  : public IAPSecurityException_tF28CC4FF2759C3C65EB896A7EDBE5038F47AD7AE
{
public:

public:
};


// UnityEngine.Purchasing.Security.InvalidX509Data
struct  InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627  : public IAPSecurityException_tF28CC4FF2759C3C65EB896A7EDBE5038F47AD7AE
{
public:

public:
};


// UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion
struct  UnsupportedSignerInfoVersion_t03A6E710105BD3455AD4E1987AFA544FAEAA46FD  : public IAPSecurityException_tF28CC4FF2759C3C65EB896A7EDBE5038F47AD7AE
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[]
struct AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * m_Items[1];

public:
	inline AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * value)
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.Security.AppleReceiptParser::ArrayEquals<System.Byte>(T[],T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF7804989EFD1BBA18799DA94378B730C6C755876_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[],UnityEngine.Purchasing.Security.PKCS7&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * AppleReceiptParser_Parse_mB2C2F24B78C85071D8C127D0DB7B025C4591FE7F (AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___receiptData0, PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B ** ___receipt1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.Purchasing.Security.AppleReceiptParser::ArrayEquals<System.Byte>(T[],T[])
inline bool AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF7804989EFD1BBA18799DA94378B730C6C755876 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method)
{
	return ((  bool (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF7804989EFD1BBA18799DA94378B730C6C755876_gshared)(___a0, ___b1, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser__ctor_m8CA8010706903D69C889638BE7715FE23290D714 (Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * __this, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser_LoadData_mDA468A77F6F1CC015AD4BBCE30AD04CF89ECC12E (Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::get_RootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * Asn1Parser_get_RootNode_mA35A65E633ABEA927373E56DC9A3DD869826A585 (Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7__ctor_m5EEB440B67F72876517278222CF895A6365698DB (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___node0, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::get_data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * PKCS7_get_data_m8EBBE11EC901DB4FF92D79D8ECB982DE715D3326_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * AppleReceiptParser_ParseReceipt_m9FFD302D6378AA2F5533FDEAA0AB4A0F68F6D895 (AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___data0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_ChildNodeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidPKCS7Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * __this, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::GetChildNode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt__ctor_mEF4EA86972EA9F1A347927485738CB71607946C5 (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::.ctor()
inline void List_1__ctor_mBBE7D5A92F97B3F1FE2DA60D3C1FDEE14B744093 (List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToLong(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_BytesToLong_m066A6C0D1BD5B722350EC3DA4DA97461EA49A646 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_bundleID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m6561592B6FBE809B47899650A207BA96B916D61C_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_appVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_m75C5390EC8397E38978C9D688B17E56A545EAA91_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_opaque(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m44BF5D351DB3A4C3E698D5E4108FE403FA7853FE_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_hash(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_mF63C36B698308941BEB274336EF6F6FFE2B61E1C_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989 (String_t* ___s0, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_receiptCreationDate(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m37AE8CDA68E4BA8D3B6A9DF15DD9BB9385DB4A66_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseInAppReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * AppleReceiptParser_ParseInAppReceipt_mDB249E290F413C622D3533EE879820FDAD1B2BB7 (AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___inApp0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::Add(!0)
inline void List_1_Add_m1D531475FD3EC6150787384B1754323269CBD817 (List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E * __this, AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E *, AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_originalApplicationVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_m1627AB08A0AF936F109A69C6C29CBBB4D382FA59_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, String_t* ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::ToArray()
inline AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* List_1_ToArray_m1E3916E614673C663832CFFA919C89A609EB0A81 (List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E * __this, const RuntimeMethod* method)
{
	return ((  AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* (*) (List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt__ctor_m753DA01E698CDCE74F0F93E93E8B8F2907E3B269 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_quantity(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_m2EAA0153A1FDEE715C90F799EFA47E48FE549D6C_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_m98350C755435CD9E203B9AE832332B6245168C73_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_transactionID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_mC642184908FA49D05B9A442009B023BB0F648050_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalTransactionIdentifier(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_m6E8E61311BF290CF248B99C0A91DEEF27D0143EB_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleReceiptParser::TryParseDateTimeNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleReceiptParser_TryParseDateTimeNode_m7D27964693E2E2115E060EEE3776FDE57D85B31F (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_purchaseDate(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m563CBE7F54F780C3FDC4FC25C6313F848A801425_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalPurchaseDate(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_mF49A495CF6E1A57567F611D9509FD9DB04469E1F_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_subscriptionExpirationDate(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_mFC7CE7B1F3C0FC996200C241297E0C6E9B58930F_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_cancellationDate(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_m21B700CA0D28763CF093BACEACB24EC65DC12052_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productType(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_mEE30EBD99085BE2C1630CC2C9B4D2170FBFA8DD6_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isFreeTrial(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m2894236F69C97AA9E32017BBDB3133516FCA5E87_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isIntroductoryPricePeriod(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m1E9120512498D69A2E823B120065D104149F0149_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_Init_m587AD3EB43FDB580FDEAC3EBFC48614C5E6DB24A (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_Deepness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_Deepness_m8456C46EB5CACE4C5FF35FCCB8EE37EEF446A849 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetIndentStr(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___startNode0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::ToHexString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineHexString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineHexString_m629FFA6B616B5B4D4FFEC583CF311542D1E215D3 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GenStr(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GenStr_m59983BB4DEA4E0F6EB009E069A40557B5155A815 (int32_t ___len0, Il2CppChar ___xch1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::set_RequireRecalculatePar(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_set_RequireRecalculatePar_mC12DA152228DADB93AFAB3271A615780AC9FB372 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::InternalLoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_InternalLoadData_mD2CD808B332920AEC563C4B5ED25F22CAA9AA042 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::RecalculateTreePar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_RecalculateTreePar_m46F055E692514496D22422FDEE0831F3E6B4C01A (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::DERLengthEncode(System.IO.Stream,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_DERLengthEncode_mEAAF6BFA9CF50BB1113FDA7D18326247CB59A8D5 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, uint64_t ___length1, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::SaveData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_SaveData_m7DD537A6D5BB18C70A8B9D6D40DC3671B311A3F4 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ClearAll_m5718361F5C48B147A6F873357C7C98E7C45C01C5 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GetTagName(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GetTagName_mA48556C90F4F1D4CE6E57A4DF624B9C71E981BC8 (uint8_t ___tag0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::get_TagName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_mCDCEFBFCC674003EC0227F8954F74F83B92E2D45 (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Oid::GetOidName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_GetOidName_m64BFA3E74CFFFC1B22D401FA4D514E95B553E6E2 (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * __this, String_t* ___inOidStr0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.RelativeOid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelativeOid__ctor_mA1498861FAA241BA8D336EDDC7935944F0332087 (RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_BytesToString_m250C8D269AC48BA4125F4D3996E5B64B99CD36BB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineString_m6945790E5C4FA04D27973A4A1AAFE147E48B2A07 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetHexPrintingStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetHexPrintingStr_mD382FE3CED0B661AE55C914B46CD9622AF402CDB (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___startNode0, String_t* ___baseLine1, String_t* ___lStr2, int32_t ___lineLen3, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetListStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetListStr_mD39C6F96270976B88A58760F258AFF38F7198D3C (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::FormatString(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_FormatString_mBF08ABF06783CFC76B3574F44DD7F1D0E68A56CF (String_t* ___inStr0, int32_t ___lineLen1, int32_t ___groupLen2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * Asn1Node_get_ParentNode_m85832D15C268C18D2F792A8FE01B6272E45ED122 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::ResetBranchDataLength(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_ResetBranchDataLength_m2136A28AC060CCF1256C805908F3AC84C7AC78D7 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___node0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetChildNodePar(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetChildNodePar_mA1E21E949F74C76037E6CED6D7BE3C863453DE24 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___xNode0, int64_t ___subOffset1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetDataLengthFieldWidth(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetDataLengthFieldWidth_m35E24AA80320AF619ECC4524D609A4A219B41702 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___node0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetText_mA2C27AFDB8F6610F12A0D64B76CDB7D591CF0E92 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::DerLengthDecode(System.IO.Stream,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_DerLengthDecode_m7BFE197DAA477D66D530B5346E9ABDCE43DA3F02 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, bool* ___isIndefiniteLength1, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_m9844534C8D542B7057B56B95C7FA89F46D6A46BA (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___parentNode0, int64_t ___dataOffset1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::AddChild(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_AddChild_mCF97B7E4158691C1E666091BDA8A899F4207AED3 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___xdata0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::ListDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_ListDecode_m0F1490667F35A8C8309852728025433C7F45AE11 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::GeneralDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_GeneralDecode_mB52E0759A0B509FA1E379AB5956F4A352178BBDC (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_m79EEA15084314869B9005F84E0BDAEB8323D7E9D (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_LoadData_m12E54391FDE66476B59A6831192AADAF450F2DA2 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeText_m7892A9D7B066C08E4FB404FDF361E22096B6425F (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___node0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeTextHeader(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeTextHeader_mB84271C146A881023B489C2F426E2BC9B3570379 (int32_t ___lineLen0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::BytePrecision(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_BytePrecision_mEF80EC3FD265C832658C6CC63E2F06E994A0DADB (uint64_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_MaskedTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_MaskedTag_mAF2F4B08D347C92F0ACAB5E1A6ED8C951293F195 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidX509Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidX509Data__ctor_m2E6CB3001473BD90B5B2DBEDFA035305C6EC4972 (InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_Decode_mFC72B43B421FC30686F15C9F9E58FC2E4F64D1DD (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m47538F5CA668B1ADD49E10D41BC0796365278451 (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Country(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_m0638A330C82167ED195AFA5D310F5D4A22F54D75_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Organization(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_m82DC2C65E1ACF8C1E63CAADEBBE25A647097C36C_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_OrganizationalUnit(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_m0EEB44D2747800797210C806A1AC6CCBBF1DE841_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_CommonName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_mBD35CD0F226C18CBC833FBEEF335756AADCF32E0_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_SerialNumber(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m18FB6593BB23A9A7574827E3C2C003C7CDFE2D57_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Dnq(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_mC255697EA386755FDE16AD384CD68A5245955739_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_State(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m8CE5BE650E4934912466781BCC8C15D41EA09439_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Organization()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_m95D7241D2FA3AACF8E88D69DD5C2467AAE2948BA_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_OrganizationalUnit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_m159B960C7CD34B39E588DBB0BB00B6B078E7A0E6_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Dnq()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m6A97EB6F90268CAE08471360E930A6A30A67B5C6_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Country()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_mC9FA2B2F8FDE66BD5A0C65CC011EBD2BE7F4C8C6_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m6FE8F3AC1BA53B9CCAED0C3D5498D4169AAB5968_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_CommonName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m6DFA7077D5D6F0210A394988D04D631CC978A8FA_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPSecurityException__ctor_mB0C1A9E5D379E35649A4A0516681B7A2ECD1C45F (IAPSecurityException_tF28CC4FF2759C3C65EB896A7EDBE5038F47AD7AE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Specialized.StringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringDictionary__ctor_mEA16941AB5C9CDBEE3B0572E3FA74DD1CC0C8637 (StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m591519A05955A00954A48E0EA3F5CB9921C13969 (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Oid::DecodeValue(System.IO.Stream,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Oid_DecodeValue_mBB414431568A31EA30C8F3F0CD4E4D3E4AA02D60 (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, uint64_t* ___v1, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37 (uint64_t* __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::CheckStructure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7 (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method);
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetDataStr(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetDataStr_m5328ED9958497CB67DF1A942B9EA8B4E72E1D4AC (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, bool ___pureHexMode0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_data(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_data_mABE8F69F97003C334EDE181E18EE1180348FA21A_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>::.ctor()
inline void List_1__ctor_mB1F38C244A118E92C82EA64BA8F70E0BAE23718C (List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_certChain(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_certChain_mD9945D73A4B674F01155552DB817D032D0CBCDB3_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::get_certChain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * PKCS7_get_certChain_m9C036C103D23CC2343A0C8D85D23DD565B34047A_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert__ctor_mCB3F5A0A6A1D26BF4A746BBD58C30435F8E21630 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>::Add(!0)
inline void List_1_Add_m81CFA3B02078BDC051E750D0EE5D41CC49277177 (List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * __this, X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 *, X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>::.ctor()
inline void List_1__ctor_m2535283F8D938B1B1D70568F4EEEE6B37CDCEB3D (List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_sinfos(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_mCCC358356C118E5B7BF013786F1AE3BAF6E14582_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::get_sinfos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * PKCS7_get_sinfos_m88CAE856FC4ECBBC097CC1A3AEBBDC8B5F2BCB64_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>::Add(!0)
inline void List_1_Add_mAEADDA782F164A6F1B641FE03376CE5AF1406DC1 (List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * __this, SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 *, SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * RSAKey_ParseNode_m17EF7D0DF0929BB63DDA94F9D2D6F6677DE840AE (RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.RSAKey::set_rsa(System.Security.Cryptography.RSACryptoServiceProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m361E788285F13CB50F490D89A0DC7B2C0AD37CD6_inline (RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * __this, RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * ___value0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inArray0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m540359C328E1E9E9818A1192E34C74C986186B80 (RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.RSAKey::ToXML(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RSAKey_ToXML_m1DC216979B522DB9F399914D33BD6BE0920E517D (RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * __this, String_t* ___modulus0, String_t* ___exponent1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidRSAData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidRSAData__ctor_mE0A22B380E176EC4882678CD55CA3CA06EAA1EA4 (InvalidRSAData_tADEA09637201E4E28208AED7BE94E00ED6A08DCF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_Version(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m5BF00F54855B27F5F3A2EF0BE1310BF7A493ADA3_inline (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_mB678DD487BFF5BE825571AE62D713E2167A47218_inline (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedSignerInfoVersion__ctor_mA867D6FAA332DCD5E21E342B4697CD0FB8699A86 (UnsupportedSignerInfoVersion_t03A6E710105BD3455AD4E1987AFA544FAEAA46FD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_IssuerSerialNumber(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_mA1FB0C559A229DF114C4C950649EB8B89BB43F5E_inline (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_EncryptedDigest(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_m13F02F1760D51368BEC7468DB4067CCCD57EF1FC_inline (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___root0, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_DataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_DataLength_mF657BA3880B10E817C4B44D047B56E44BC1AF20A (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SerialNumber(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m01CACAE2D814D694A4BFE1C7641577A3A565A5FF_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName__ctor_m910E3943DD9419738C9B91E6555927ED637309D0 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Issuer(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_m179D8CB454BE170E28C9142EA6611A264F18473E_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Subject(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Subject_m7B866ABCCA5B3E3810E1A055F5B93CEA093D0C25_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * ___value0, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.X509Cert::ParseTime(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  X509Cert_ParseTime_m4A3481A154EC5A21A6A927E5A0D406B4DD8156B5 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidAfter(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_mACA3E2EB87B91CD69E416B297BF257543301FBC7_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidBefore(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_m07FA460AFB01790294999B502B6568699851DB04_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Subject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * X509Cert_get_Subject_m0D7C63424EBE78DEFE12EA7A1BF0A32DEA236CD0_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Issuer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * X509Cert_get_Issuer_m3EC695CFA41B1D827035DBB09D11E62402E1BC67_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.Security.DistinguishedName::Equals(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DistinguishedName_Equals_m5FC87F7E7A74EA22D2411175C8B32D70ADF93E3D (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * ___n20, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SelfSigned(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_mE20C044249195BFD084C19E0FDDAE2B3E2FD5FC6_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.RSAKey::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAKey__ctor_m2CECC89E16E1D6D2B25865E252ACB7E3CE737845 (RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_PubKey(UnityEngine.Purchasing.Security.RSAKey)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_mD5612BE808EA9BA8EAFBC233FBD3CBB88FD691D8_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Signature(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Signature_mDBFF199821BAABC954E73F29B3119FE885AC2EAB_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidTimeFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidTimeFormat__ctor_m7E83CE4655D3DA168291422055FB383941DD6329 (InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m47538F5CA668B1ADD49E10D41BC0796365278451 (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_quantity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_m2EAA0153A1FDEE715C90F799EFA47E48FE549D6C (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CquantityU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_m47E3FE0BCF859DE421259D6D1A601DC3C4BE1C5D (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CproductIDU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_m98350C755435CD9E203B9AE832332B6245168C73 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CproductIDU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_transactionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_transactionID_m5E81B191CD8E839388BC17C37AF69662624A3533 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CtransactionIDU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_transactionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_mC642184908FA49D05B9A442009B023BB0F648050 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_originalTransactionIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_originalTransactionIdentifier_mC1704D05B50DEEEB041379E7E4ED1E686CAC1BD0 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CoriginalTransactionIdentifierU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalTransactionIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_m6E8E61311BF290CF248B99C0A91DEEF27D0143EB (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_purchaseDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_purchaseDate_m902295CB992329CB42872065028D14CD5A6D7E8A (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CpurchaseDateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_purchaseDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m563CBE7F54F780C3FDC4FC25C6313F848A801425 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CpurchaseDateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_originalPurchaseDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_originalPurchaseDate_m76FFF6D5E109238AD73A21D26D475D2505016609 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CoriginalPurchaseDateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalPurchaseDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_mF49A495CF6E1A57567F611D9509FD9DB04469E1F (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CoriginalPurchaseDateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_subscriptionExpirationDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m49C5498BFE3D6F87E49A325B2FB383C60ACDD2CA (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CsubscriptionExpirationDateU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_subscriptionExpirationDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_mFC7CE7B1F3C0FC996200C241297E0C6E9B58930F (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_cancellationDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_cancellationDate_m011D862CC8E3B81D349C5D3E9046234739D3E4C5 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CcancellationDateU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_cancellationDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_m21B700CA0D28763CF093BACEACB24EC65DC12052 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CcancellationDateU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isFreeTrial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isFreeTrial_m291D9D00961A5AD9FA2627DFFAA6732488EE9E1F (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CisFreeTrialU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isFreeTrial(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m2894236F69C97AA9E32017BBDB3133516FCA5E87 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisFreeTrialU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_productType_mDF47BDB6707417E787AA787E223670E36FE6F16D (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CproductTypeU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_mEE30EBD99085BE2C1630CC2C9B4D2170FBFA8DD6 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CproductTypeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isIntroductoryPricePeriod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m642304C4B1A034711CF3A7DAB4F55254E720C677 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isIntroductoryPricePeriod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m1E9120512498D69A2E823B120065D104149F0149 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt__ctor_m753DA01E698CDCE74F0F93E93E8B8F2907E3B269 (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_bundleID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m6561592B6FBE809B47899650A207BA96B916D61C (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CbundleIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_appVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_m75C5390EC8397E38978C9D688B17E56A545EAA91 (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CappVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_opaque(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m44BF5D351DB3A4C3E698D5E4108FE403FA7853FE (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CopaqueU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_hash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_mF63C36B698308941BEB274336EF6F6FFE2B61E1C (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3ChashU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_originalApplicationVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_m1627AB08A0AF936F109A69C6C29CBBB4D382FA59 (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalApplicationVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_receiptCreationDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m37AE8CDA68E4BA8D3B6A9DF15DD9BB9385DB4A66 (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CreceiptCreationDateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt__ctor_mEF4EA86972EA9F1A347927485738CB71607946C5 (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, const RuntimeMethod* method)
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
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * AppleReceiptParser_Parse_m684ACBD514DB506CEB31041CD99BB40B28F3F358 (AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___receiptData0, const RuntimeMethod* method)
{
	PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * V_0 = NULL;
	AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___receiptData0;
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_1 = AppleReceiptParser_Parse_mB2C2F24B78C85071D8C127D0DB7B025C4591FE7F(__this, L_0, (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[],UnityEngine.Purchasing.Security.PKCS7&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * AppleReceiptParser_Parse_mB2C2F24B78C85071D8C127D0DB7B025C4591FE7F (AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___receiptData0, PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B ** ___receipt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_Parse_mB2C2F24B78C85071D8C127D0DB7B025C4591FE7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * V_1 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_2 = NULL;
	Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * V_3 = NULL;
	AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ((AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_0);
		bool L_1 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_0, _stringLiteral08D691F3DDE80A0F3B3AFC79770EEC67F64A0234, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = ((AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_2);
		bool L_3 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_2, _stringLiteral6BB0A873A6D6124ACF9D6FEAEB6204BC0FFE7381, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = ((AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_4);
		bool L_5 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_4, _stringLiteral0B6E49D70DC463E44307A8A539250C8090D10786, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___receiptData0;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = ((AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_7);
		RuntimeObject * L_8 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_7, _stringLiteral0B6E49D70DC463E44307A8A539250C8090D10786, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		bool L_9 = AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF7804989EFD1BBA18799DA94378B730C6C755876(L_6, ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_8, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)), /*hidden argument*/AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF7804989EFD1BBA18799DA94378B730C6C755876_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 0;
	}

IL_0051:
	{
		V_0 = (bool)G_B5_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B ** L_11 = ___receipt1;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = ((AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_12);
		RuntimeObject * L_13 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_12, _stringLiteral6BB0A873A6D6124ACF9D6FEAEB6204BC0FFE7381, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		*((RuntimeObject **)L_11) = (RuntimeObject *)((PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B *)CastclassClass((RuntimeObject*)L_13, PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)((PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B *)CastclassClass((RuntimeObject*)L_13, PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B_il2cpp_TypeInfo_var)));
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14 = ((AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_14);
		RuntimeObject * L_15 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_14, _stringLiteral08D691F3DDE80A0F3B3AFC79770EEC67F64A0234, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		V_1 = ((AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 *)CastclassClass((RuntimeObject*)L_15, AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324_il2cpp_TypeInfo_var));
		goto IL_00fa;
	}

IL_0083:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___receiptData0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_17 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_17, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * L_18 = (Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B *)il2cpp_codegen_object_new(Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B_il2cpp_TypeInfo_var);
		Asn1Parser__ctor_m8CA8010706903D69C889638BE7715FE23290D714(L_18, /*hidden argument*/NULL);
		V_3 = L_18;
		Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * L_19 = V_3;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_20 = V_2;
		NullCheck(L_19);
		Asn1Parser_LoadData_mDA468A77F6F1CC015AD4BBCE30AD04CF89ECC12E(L_19, L_20, /*hidden argument*/NULL);
		PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B ** L_21 = ___receipt1;
		Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * L_22 = V_3;
		NullCheck(L_22);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_23 = Asn1Parser_get_RootNode_mA35A65E633ABEA927373E56DC9A3DD869826A585(L_22, /*hidden argument*/NULL);
		PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * L_24 = (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B *)il2cpp_codegen_object_new(PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B_il2cpp_TypeInfo_var);
		PKCS7__ctor_m5EEB440B67F72876517278222CF895A6365698DB(L_24, L_23, /*hidden argument*/NULL);
		*((RuntimeObject **)L_21) = (RuntimeObject *)L_24;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_21, (void*)(RuntimeObject *)L_24);
		PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B ** L_25 = ___receipt1;
		PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * L_26 = *((PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B **)L_25);
		NullCheck(L_26);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_27 = PKCS7_get_data_m8EBBE11EC901DB4FF92D79D8ECB982DE715D3326_inline(L_26, /*hidden argument*/NULL);
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_28 = AppleReceiptParser_ParseReceipt_m9FFD302D6378AA2F5533FDEAA0AB4A0F68F6D895(__this, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_29 = ((AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_30 = V_4;
		NullCheck(L_29);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_29, _stringLiteral08D691F3DDE80A0F3B3AFC79770EEC67F64A0234, L_30, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_31 = ((AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B ** L_32 = ___receipt1;
		PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * L_33 = *((PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B **)L_32);
		NullCheck(L_31);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_31, _stringLiteral6BB0A873A6D6124ACF9D6FEAEB6204BC0FFE7381, L_33, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_34 = ((AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = ___receiptData0;
		NullCheck(L_34);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_34, _stringLiteral0B6E49D70DC463E44307A8A539250C8090D10786, (RuntimeObject *)(RuntimeObject *)L_35, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_36 = V_4;
		V_1 = L_36;
		IL2CPP_LEAVE(0xFA, FINALLY_00ef);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ef;
	}

FINALLY_00ef:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_37 = V_2;
			if (!L_37)
			{
				goto IL_00f9;
			}
		}

IL_00f2:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_38 = V_2;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_38);
		}

IL_00f9:
		{
			IL2CPP_END_FINALLY(239)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(239)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xFA, IL_00fa)
	}

IL_00fa:
	{
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_39 = V_1;
		return L_39;
	}
}
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * AppleReceiptParser_ParseReceipt_m9FFD302D6378AA2F5533FDEAA0AB4A0F68F6D895 (AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_ParseReceipt_m9FFD302D6378AA2F5533FDEAA0AB4A0F68F6D895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_0 = NULL;
	AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * V_1 = NULL;
	List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_5 = NULL;
	bool V_6 = false;
	int64_t V_7 = 0;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_8 = NULL;
	String_t* V_9 = NULL;
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * V_14 = NULL;
	int32_t G_B3_0 = 0;
	int64_t G_B10_0 = 0;
	int64_t G_B9_0 = 0;
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_1 = ___data0;
		NullCheck(L_1);
		int64_t L_2 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int64_t)L_2) == ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_4 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AppleReceiptParser_ParseReceipt_m9FFD302D6378AA2F5533FDEAA0AB4A0F68F6D895_RuntimeMethod_var);
	}

IL_001f:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_5 = ___data0;
		NullCheck(L_5);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_6 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_7 = (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 *)il2cpp_codegen_object_new(AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324_il2cpp_TypeInfo_var);
		AppleReceipt__ctor_mEF4EA86972EA9F1A347927485738CB71607946C5(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E * L_8 = (List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E *)il2cpp_codegen_object_new(List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E_il2cpp_TypeInfo_var);
		List_1__ctor_mBBE7D5A92F97B3F1FE2DA60D3C1FDEE14B744093(L_8, /*hidden argument*/List_1__ctor_mBBE7D5A92F97B3F1FE2DA60D3C1FDEE14B744093_RuntimeMethod_var);
		V_2 = L_8;
		V_4 = 0;
		goto IL_01ae;
	}

IL_003b:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_9 = V_0;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_11 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_9, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_12 = V_5;
		NullCheck(L_12);
		int64_t L_13 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_12, /*hidden argument*/NULL);
		V_6 = (bool)((((int64_t)L_13) == ((int64_t)(((int64_t)((int64_t)3)))))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_01a7;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_15 = V_5;
		NullCheck(L_15);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_16 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_15, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		int64_t L_18 = Asn1Util_BytesToLong_m066A6C0D1BD5B722350EC3DA4DA97461EA49A646(L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_19 = V_5;
		NullCheck(L_19);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_20 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_19, 2, /*hidden argument*/NULL);
		V_8 = L_20;
		int64_t L_21 = V_7;
		V_11 = L_21;
		int64_t L_22 = V_11;
		V_10 = L_22;
		int64_t L_23 = V_10;
		if ((((int64_t)L_23) > ((int64_t)(((int64_t)((int64_t)((int32_t)12)))))))
		{
			goto IL_00bc;
		}
	}
	{
		int64_t L_24 = V_10;
		int64_t L_25 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_24, (int64_t)(((int64_t)((int64_t)2)))));
		G_B9_0 = L_25;
		if ((!(((uint64_t)L_25) > ((uint64_t)(((int64_t)((int64_t)3)))))))
		{
			G_B10_0 = L_25;
			goto IL_0095;
		}
	}
	{
		goto IL_00ad;
	}

IL_0095:
	{
		switch ((((int32_t)((uint32_t)G_B10_0))))
		{
			case 0:
			{
				goto IL_00d7;
			}
			case 1:
			{
				goto IL_00fa;
			}
			case 2:
			{
				goto IL_011d;
			}
			case 3:
			{
				goto IL_012d;
			}
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int64_t L_26 = V_10;
		if ((((int64_t)L_26) == ((int64_t)(((int64_t)((int64_t)((int32_t)12)))))))
		{
			goto IL_013d;
		}
	}
	{
		goto IL_01a6;
	}

IL_00bc:
	{
		int64_t L_27 = V_10;
		if ((((int64_t)L_27) == ((int64_t)(((int64_t)((int64_t)((int32_t)17)))))))
		{
			goto IL_016f;
		}
	}
	{
		goto IL_00c8;
	}

IL_00c8:
	{
		int64_t L_28 = V_10;
		if ((((int64_t)L_28) == ((int64_t)(((int64_t)((int64_t)((int32_t)19)))))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_01a6;
	}

IL_00d7:
	{
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_29 = V_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_30 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_31 = V_8;
		NullCheck(L_31);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_32 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_31, 0, /*hidden argument*/NULL);
		NullCheck(L_32);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		String_t* L_34 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_30, L_33);
		NullCheck(L_29);
		AppleReceipt_set_bundleID_m6561592B6FBE809B47899650A207BA96B916D61C_inline(L_29, L_34, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_00fa:
	{
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_35 = V_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_36 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_37 = V_8;
		NullCheck(L_37);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_38 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_37, 0, /*hidden argument*/NULL);
		NullCheck(L_38);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_40 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_36, L_39);
		NullCheck(L_35);
		AppleReceipt_set_appVersion_m75C5390EC8397E38978C9D688B17E56A545EAA91_inline(L_35, L_40, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_011d:
	{
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_41 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_42 = V_8;
		NullCheck(L_42);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		AppleReceipt_set_opaque_m44BF5D351DB3A4C3E698D5E4108FE403FA7853FE_inline(L_41, L_43, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_012d:
	{
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_44 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_45 = V_8;
		NullCheck(L_45);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		AppleReceipt_set_hash_mF63C36B698308941BEB274336EF6F6FFE2B61E1C_inline(L_44, L_46, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_013d:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_47 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_48 = V_8;
		NullCheck(L_48);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_49 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_48, 0, /*hidden argument*/NULL);
		NullCheck(L_49);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		String_t* L_51 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_47, L_50);
		V_9 = L_51;
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_52 = V_1;
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_54 = DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989(L_53, /*hidden argument*/NULL);
		V_12 = L_54;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_55 = DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_12), /*hidden argument*/NULL);
		NullCheck(L_52);
		AppleReceipt_set_receiptCreationDate_m37AE8CDA68E4BA8D3B6A9DF15DD9BB9385DB4A66_inline(L_52, L_55, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_016f:
	{
		List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E * L_56 = V_2;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_57 = V_8;
		NullCheck(L_57);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_58 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_57, 0, /*hidden argument*/NULL);
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_59 = AppleReceiptParser_ParseInAppReceipt_mDB249E290F413C622D3533EE879820FDAD1B2BB7(__this, L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		List_1_Add_m1D531475FD3EC6150787384B1754323269CBD817(L_56, L_59, /*hidden argument*/List_1_Add_m1D531475FD3EC6150787384B1754323269CBD817_RuntimeMethod_var);
		goto IL_01a6;
	}

IL_0186:
	{
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_60 = V_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_61 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_62 = V_8;
		NullCheck(L_62);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_63 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_62, 0, /*hidden argument*/NULL);
		NullCheck(L_63);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_63, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_65 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_61, L_64);
		NullCheck(L_60);
		AppleReceipt_set_originalApplicationVersion_m1627AB08A0AF936F109A69C6C29CBBB4D382FA59_inline(L_60, L_65, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_01a6:
	{
	}

IL_01a7:
	{
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_01ae:
	{
		int32_t L_67 = V_4;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_68 = V_0;
		NullCheck(L_68);
		int64_t L_69 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_68, /*hidden argument*/NULL);
		V_13 = (bool)((((int64_t)(((int64_t)((int64_t)L_67)))) < ((int64_t)L_69))? 1 : 0);
		bool L_70 = V_13;
		if (L_70)
		{
			goto IL_003b;
		}
	}
	{
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_71 = V_1;
		List_1_t76DF273BAAA50A019113A2327DD75F9A9357E51E * L_72 = V_2;
		NullCheck(L_72);
		AppleInAppPurchaseReceiptU5BU5D_t17AFD0DB9613C75E9D133F2E5F37A02CD0FC462C* L_73 = List_1_ToArray_m1E3916E614673C663832CFFA919C89A609EB0A81(L_72, /*hidden argument*/List_1_ToArray_m1E3916E614673C663832CFFA919C89A609EB0A81_RuntimeMethod_var);
		NullCheck(L_71);
		L_71->set_inAppPurchaseReceipts_6(L_73);
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_74 = V_1;
		V_14 = L_74;
		goto IL_01d3;
	}

IL_01d3:
	{
		AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * L_75 = V_14;
		return L_75;
	}
}
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseInAppReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * AppleReceiptParser_ParseInAppReceipt_mDB249E290F413C622D3533EE879820FDAD1B2BB7 (AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___inApp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_ParseInAppReceipt_mDB249E290F413C622D3533EE879820FDAD1B2BB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * V_0 = NULL;
	int32_t V_1 = 0;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_2 = NULL;
	bool V_3 = false;
	int64_t V_4 = 0;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_5 = NULL;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	bool V_8 = false;
	AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * V_9 = NULL;
	int64_t G_B4_0 = 0;
	int64_t G_B3_0 = 0;
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_0 = (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D *)il2cpp_codegen_object_new(AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D_il2cpp_TypeInfo_var);
		AppleInAppPurchaseReceipt__ctor_m753DA01E698CDCE74F0F93E93E8B8F2907E3B269(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01e0;
	}

IL_000e:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_1 = ___inApp0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_3 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_4 = V_2;
		NullCheck(L_4);
		int64_t L_5 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)L_5) == ((int64_t)(((int64_t)((int64_t)3)))))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_01db;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_7 = V_2;
		NullCheck(L_7);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_8 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		int64_t L_10 = Asn1Util_BytesToLong_m066A6C0D1BD5B722350EC3DA4DA97461EA49A646(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_11 = V_2;
		NullCheck(L_11);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_12 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_11, 2, /*hidden argument*/NULL);
		V_5 = L_12;
		int64_t L_13 = V_4;
		V_7 = L_13;
		int64_t L_14 = V_7;
		V_6 = L_14;
		int64_t L_15 = V_6;
		int64_t L_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_15, (int64_t)(((int64_t)((int64_t)((int32_t)1701))))));
		G_B3_0 = L_16;
		if ((!(((uint64_t)L_16) > ((uint64_t)(((int64_t)((int64_t)((int32_t)18))))))))
		{
			G_B4_0 = L_16;
			goto IL_0062;
		}
	}
	{
		goto IL_01d8;
	}

IL_0062:
	{
		switch ((((int32_t)((uint32_t)G_B4_0))))
		{
			case 0:
			{
				goto IL_00b9;
			}
			case 1:
			{
				goto IL_00d8;
			}
			case 2:
			{
				goto IL_00fb;
			}
			case 3:
			{
				goto IL_0141;
			}
			case 4:
			{
				goto IL_011e;
			}
			case 5:
			{
				goto IL_0154;
			}
			case 6:
			{
				goto IL_0184;
			}
			case 7:
			{
				goto IL_0164;
			}
			case 8:
			{
				goto IL_01d8;
			}
			case 9:
			{
				goto IL_01d8;
			}
			case 10:
			{
				goto IL_01d8;
			}
			case 11:
			{
				goto IL_0174;
			}
			case 12:
			{
				goto IL_01a0;
			}
			case 13:
			{
				goto IL_01d8;
			}
			case 14:
			{
				goto IL_01d8;
			}
			case 15:
			{
				goto IL_01d8;
			}
			case 16:
			{
				goto IL_01d8;
			}
			case 17:
			{
				goto IL_01d8;
			}
			case 18:
			{
				goto IL_01bc;
			}
		}
	}
	{
		goto IL_01d8;
	}

IL_00b9:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_17 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_18 = V_5;
		NullCheck(L_18);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_19 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_18, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		int64_t L_21 = Asn1Util_BytesToLong_m066A6C0D1BD5B722350EC3DA4DA97461EA49A646(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		AppleInAppPurchaseReceipt_set_quantity_m2EAA0153A1FDEE715C90F799EFA47E48FE549D6C_inline(L_17, (((int32_t)((int32_t)L_21))), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_00d8:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_22 = V_0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_23 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_24 = V_5;
		NullCheck(L_24);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_25 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_24, 0, /*hidden argument*/NULL);
		NullCheck(L_25);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_27 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_23, L_26);
		NullCheck(L_22);
		AppleInAppPurchaseReceipt_set_productID_m98350C755435CD9E203B9AE832332B6245168C73_inline(L_22, L_27, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_00fb:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_28 = V_0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_29 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_30 = V_5;
		NullCheck(L_30);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_31 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_30, 0, /*hidden argument*/NULL);
		NullCheck(L_31);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_33 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_29, L_32);
		NullCheck(L_28);
		AppleInAppPurchaseReceipt_set_transactionID_mC642184908FA49D05B9A442009B023BB0F648050_inline(L_28, L_33, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_011e:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_34 = V_0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_35 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_36 = V_5;
		NullCheck(L_36);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_37 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_36, 0, /*hidden argument*/NULL);
		NullCheck(L_37);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_39 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_35, L_38);
		NullCheck(L_34);
		AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_m6E8E61311BF290CF248B99C0A91DEEF27D0143EB_inline(L_34, L_39, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0141:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_40 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_41 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_42 = AppleReceiptParser_TryParseDateTimeNode_m7D27964693E2E2115E060EEE3776FDE57D85B31F(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		AppleInAppPurchaseReceipt_set_purchaseDate_m563CBE7F54F780C3FDC4FC25C6313F848A801425_inline(L_40, L_42, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0154:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_43 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_45 = AppleReceiptParser_TryParseDateTimeNode_m7D27964693E2E2115E060EEE3776FDE57D85B31F(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		AppleInAppPurchaseReceipt_set_originalPurchaseDate_mF49A495CF6E1A57567F611D9509FD9DB04469E1F_inline(L_43, L_45, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0164:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_46 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_47 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_48 = AppleReceiptParser_TryParseDateTimeNode_m7D27964693E2E2115E060EEE3776FDE57D85B31F(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_mFC7CE7B1F3C0FC996200C241297E0C6E9B58930F_inline(L_46, L_48, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0174:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_49 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_50 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_51 = AppleReceiptParser_TryParseDateTimeNode_m7D27964693E2E2115E060EEE3776FDE57D85B31F(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		AppleInAppPurchaseReceipt_set_cancellationDate_m21B700CA0D28763CF093BACEACB24EC65DC12052_inline(L_49, L_51, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0184:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_52 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_53 = V_5;
		NullCheck(L_53);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_54 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_53, 0, /*hidden argument*/NULL);
		NullCheck(L_54);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_55 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		int64_t L_56 = Asn1Util_BytesToLong_m066A6C0D1BD5B722350EC3DA4DA97461EA49A646(L_55, /*hidden argument*/NULL);
		NullCheck(L_52);
		AppleInAppPurchaseReceipt_set_productType_mEE30EBD99085BE2C1630CC2C9B4D2170FBFA8DD6_inline(L_52, (((int32_t)((int32_t)L_56))), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01a0:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_57 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_58 = V_5;
		NullCheck(L_58);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_59 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_58, 0, /*hidden argument*/NULL);
		NullCheck(L_59);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		int64_t L_61 = Asn1Util_BytesToLong_m066A6C0D1BD5B722350EC3DA4DA97461EA49A646(L_60, /*hidden argument*/NULL);
		NullCheck(L_57);
		AppleInAppPurchaseReceipt_set_isFreeTrial_m2894236F69C97AA9E32017BBDB3133516FCA5E87_inline(L_57, (((int32_t)((int32_t)L_61))), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01bc:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_62 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_63 = V_5;
		NullCheck(L_63);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_64 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_63, 0, /*hidden argument*/NULL);
		NullCheck(L_64);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_65 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		int64_t L_66 = Asn1Util_BytesToLong_m066A6C0D1BD5B722350EC3DA4DA97461EA49A646(L_65, /*hidden argument*/NULL);
		NullCheck(L_62);
		AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m1E9120512498D69A2E823B120065D104149F0149_inline(L_62, (((int32_t)((int32_t)L_66))), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01d8:
	{
		goto IL_01da;
	}

IL_01da:
	{
	}

IL_01db:
	{
		int32_t L_67 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_01e0:
	{
		int32_t L_68 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_69 = ___inApp0;
		NullCheck(L_69);
		int64_t L_70 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_69, /*hidden argument*/NULL);
		V_8 = (bool)((((int64_t)(((int64_t)((int64_t)L_68)))) < ((int64_t)L_70))? 1 : 0);
		bool L_71 = V_8;
		if (L_71)
		{
			goto IL_000e;
		}
	}
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_72 = V_0;
		V_9 = L_72;
		goto IL_01f8;
	}

IL_01f8:
	{
		AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * L_73 = V_9;
		return L_73;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleReceiptParser::TryParseDateTimeNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleReceiptParser_TryParseDateTimeNode_m7D27964693E2E2115E060EEE3776FDE57D85B31F (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_TryParseDateTimeNode_m7D27964693E2E2115E060EEE3776FDE57D85B31F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_1 = ___node0;
		NullCheck(L_1);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_2 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_3);
		V_0 = L_4;
		String_t* L_5 = V_0;
		bool L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_9 = DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_10 = DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_003f;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_11 = ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))->get_MinValue_31();
		V_3 = L_11;
		goto IL_003f;
	}

IL_003f:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_12 = V_3;
		return L_12;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceiptParser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceiptParser__ctor_m7C3B00E2F444BE7788FEA7AE7582AFB7E4DC1A1B (AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceiptParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceiptParser__cctor_m519A589915D3E7696B6B71B1310C9FF6DD380065 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser__cctor_m519A589915D3E7696B6B71B1310C9FF6DD380065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		((AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t624014C1A73F9C989410BBDA15ABA56CF0FAB9F1_il2cpp_TypeInfo_var))->set__mostRecentReceiptData_0(L_0);
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
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_m9844534C8D542B7057B56B95C7FA89F46D6A46BA (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___parentNode0, int64_t ___dataOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node__ctor_m9844534C8D542B7057B56B95C7FA89F46D6A46BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_path_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_requireRecalculatePar_10((bool)1);
		__this->set_isIndefiniteLength_11((bool)0);
		__this->set_parseEncapsulatedData_12((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_Init_m587AD3EB43FDB580FDEAC3EBFC48614C5E6DB24A(__this, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___parentNode0;
		NullCheck(L_0);
		int64_t L_1 = Asn1Node_get_Deepness_m8456C46EB5CACE4C5FF35FCCB8EE37EEF446A849(L_0, /*hidden argument*/NULL);
		__this->set_deepness_7(((int64_t)il2cpp_codegen_add((int64_t)L_1, (int64_t)(((int64_t)((int64_t)1))))));
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_2 = ___parentNode0;
		__this->set_parentNode_9(L_2);
		int64_t L_3 = ___dataOffset1;
		__this->set_dataOffset_1(L_3);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_Init_m587AD3EB43FDB580FDEAC3EBFC48614C5E6DB24A (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_Init_m587AD3EB43FDB580FDEAC3EBFC48614C5E6DB24A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_0, /*hidden argument*/NULL);
		__this->set_childNodeList_5(L_0);
		__this->set_data_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set_dataLength_2((((int64_t)((int64_t)0))));
		__this->set_lengthFieldBytes_3((((int64_t)((int64_t)0))));
		__this->set_unusedBits_6((uint8_t)0);
		__this->set_tag_0((uint8_t)((int32_t)48));
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_1 = __this->get_childNodeList_5();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Collections.ArrayList::Clear() */, L_1);
		__this->set_deepness_7((((int64_t)((int64_t)0))));
		__this->set_parentNode_9((Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 *)NULL);
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetHexPrintingStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetHexPrintingStr_mD382FE3CED0B661AE55C914B46CD9622AF402CDB (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___startNode0, String_t* ___baseLine1, String_t* ___lStr2, int32_t ___lineLen3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetHexPrintingStr_mD382FE3CED0B661AE55C914B46CD9622AF402CDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___startNode0;
		String_t* L_1 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_3 = Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		String_t* L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_7 = ___baseLine1;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		String_t* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___lineLen3;
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_14;
		String_t* L_17 = ___baseLine1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		String_t* L_20 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_22 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0086;
	}

IL_006c:
	{
		String_t* L_23 = V_0;
		String_t* L_24 = ___baseLine1;
		String_t* L_25 = ___lStr2;
		String_t* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_26, /*hidden argument*/NULL);
		int32_t L_28 = ___lineLen3;
		String_t* L_29 = V_2;
		String_t* L_30 = Asn1Node_FormatLineHexString_m629FFA6B616B5B4D4FFEC583CF311542D1E215D3(__this, L_25, L_27, L_28, L_29, /*hidden argument*/NULL);
		String_t* L_31 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_23, L_24, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
	}

IL_0086:
	{
		goto IL_0093;
	}

IL_0089:
	{
		String_t* L_32 = V_0;
		String_t* L_33 = ___baseLine1;
		String_t* L_34 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_32, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
	}

IL_0093:
	{
		String_t* L_35 = V_0;
		String_t* L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_35, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		V_5 = L_36;
		goto IL_00a2;
	}

IL_00a2:
	{
		String_t* L_37 = V_5;
		return L_37;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineString_m6945790E5C4FA04D27973A4A1AAFE147E48B2A07 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_FormatLineString_m6945790E5C4FA04D27973A4A1AAFE147E48B2A07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	String_t* V_6 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		int32_t L_0 = ___indent1;
		___indent1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3));
		int32_t L_1 = ___lineLen2;
		int32_t L_2 = ___indent1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___indent1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_00c5;
	}

IL_0019:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		String_t* L_6 = ___msg3;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		String_t* L_14 = ___lStr0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_13;
		int32_t L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_17 = Asn1Util_GenStr_m59983BB4DEA4E0F6EB009E069A40557B5155A815(L_16, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		String_t* L_20 = ___msg3;
		int32_t L_21 = V_3;
		String_t* L_22 = ___msg3;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_3;
		NullCheck(L_20);
		String_t* L_25 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_25);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_19;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_27 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		goto IL_00c0;
	}

IL_007b:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		String_t* L_30 = V_0;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_29;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		String_t* L_33 = ___lStr0;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_32;
		int32_t L_35 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_36 = Asn1Util_GenStr_m59983BB4DEA4E0F6EB009E069A40557B5155A815(L_35, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_36);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_34;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
		String_t* L_39 = ___msg3;
		int32_t L_40 = V_3;
		int32_t L_41 = V_1;
		NullCheck(L_39);
		String_t* L_42 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_39, L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_42);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_42);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_38;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_44 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_43, /*hidden argument*/NULL);
		V_0 = L_44;
	}

IL_00c0:
	{
		int32_t L_45 = V_3;
		int32_t L_46 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46));
	}

IL_00c5:
	{
		int32_t L_47 = V_3;
		String_t* L_48 = ___msg3;
		NullCheck(L_48);
		int32_t L_49 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_48, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_47) < ((int32_t)L_49))? 1 : 0);
		bool L_50 = V_5;
		if (L_50)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_51 = V_0;
		V_6 = L_51;
		goto IL_00dd;
	}

IL_00dd:
	{
		String_t* L_52 = V_6;
		return L_52;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineHexString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineHexString_m629FFA6B616B5B4D4FFEC583CF311542D1E215D3 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_FormatLineHexString_m629FFA6B616B5B4D4FFEC583CF311542D1E215D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	String_t* V_6 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		int32_t L_0 = ___indent1;
		___indent1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3));
		int32_t L_1 = ___lineLen2;
		int32_t L_2 = ___indent1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___indent1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_00a5;
	}

IL_0019:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		String_t* L_6 = ___msg3;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		String_t* L_14 = ___lStr0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_13;
		int32_t L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_17 = Asn1Util_GenStr_m59983BB4DEA4E0F6EB009E069A40557B5155A815(L_16, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_15;
		String_t* L_19 = ___msg3;
		int32_t L_20 = V_3;
		String_t* L_21 = ___msg3;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		NullCheck(L_19);
		String_t* L_24 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_19, L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_24);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_24);
		String_t* L_25 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_18, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00a0;
	}

IL_006b:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		String_t* L_28 = V_0;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_28);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_27;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		String_t* L_31 = ___lStr0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_31);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_30;
		int32_t L_33 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_34 = Asn1Util_GenStr_m59983BB4DEA4E0F6EB009E069A40557B5155A815(L_33, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_32;
		String_t* L_36 = ___msg3;
		int32_t L_37 = V_3;
		int32_t L_38 = V_1;
		NullCheck(L_36);
		String_t* L_39 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_36, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		String_t* L_40 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_35, /*hidden argument*/NULL);
		V_0 = L_40;
	}

IL_00a0:
	{
		int32_t L_41 = V_3;
		int32_t L_42 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42));
	}

IL_00a5:
	{
		int32_t L_43 = V_3;
		String_t* L_44 = ___msg3;
		NullCheck(L_44);
		int32_t L_45 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_44, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_5;
		if (L_46)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_47 = V_0;
		V_6 = L_47;
		goto IL_00bd;
	}

IL_00bd:
	{
		String_t* L_48 = V_6;
		return L_48;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_m79EEA15084314869B9005F84E0BDAEB8323D7E9D (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node__ctor_m79EEA15084314869B9005F84E0BDAEB8323D7E9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_path_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_requireRecalculatePar_10((bool)1);
		__this->set_isIndefiniteLength_11((bool)0);
		__this->set_parseEncapsulatedData_12((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_Init_m587AD3EB43FDB580FDEAC3EBFC48614C5E6DB24A(__this, /*hidden argument*/NULL);
		__this->set_dataOffset_1((((int64_t)((int64_t)0))));
		return;
	}
}
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_tag_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_MaskedTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_MaskedTag_mAF2F4B08D347C92F0ACAB5E1A6ED8C951293F195 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_tag_0();
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31))))));
		goto IL_000e;
	}

IL_000e:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_LoadData_m12E54391FDE66476B59A6831192AADAF450F2DA2 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (bool)0;
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		Asn1Node_set_RequireRecalculatePar_mC12DA152228DADB93AFAB3271A615780AC9FB372(__this, (bool)0, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___xdata0;
		bool L_1 = Asn1Node_InternalLoadData_mD2CD808B332920AEC563C4B5ED25F22CAA9AA042(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		V_1 = L_2;
		IL2CPP_LEAVE(0x2A, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		Asn1Node_set_RequireRecalculatePar_mC12DA152228DADB93AFAB3271A615780AC9FB372(__this, (bool)1, /*hidden argument*/NULL);
		Asn1Node_RecalculateTreePar_m46F055E692514496D22422FDEE0831F3E6B4C01A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::SaveData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_SaveData_m7DD537A6D5BB18C70A8B9D6D40DC3671B311A3F4 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_SaveData_m7DD537A6D5BB18C70A8B9D6D40DC3671B311A3F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	{
		V_0 = (bool)1;
		int64_t L_0 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___xdata0;
		uint8_t L_2 = __this->get_tag_0();
		NullCheck(L_1);
		VirtActionInvoker1< uint8_t >::Invoke(31 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_1, L_2);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = ___xdata0;
		int64_t L_4 = __this->get_dataLength_2();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		Asn1Util_DERLengthEncode_mEAAF6BFA9CF50BB1113FDA7D18326247CB59A8D5(L_3, L_4, /*hidden argument*/NULL);
		uint8_t L_5 = __this->get_tag_0();
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_7 = ___xdata0;
		uint8_t L_8 = __this->get_unusedBits_6();
		NullCheck(L_7);
		VirtActionInvoker1< uint8_t >::Invoke(31 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_7, L_8);
	}

IL_0040:
	{
		int64_t L_9 = V_1;
		V_3 = (bool)((((int64_t)L_9) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_data_4();
		V_4 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_13 = ___xdata0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_data_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_data_4();
		NullCheck(L_15);
		NullCheck(L_13);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))));
	}

IL_0071:
	{
		goto IL_00a2;
	}

IL_0074:
	{
		V_6 = 0;
		goto IL_0095;
	}

IL_007a:
	{
		int32_t L_16 = V_6;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_17 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(__this, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_18 = V_5;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_19 = ___xdata0;
		NullCheck(L_18);
		bool L_20 = Asn1Node_SaveData_m7DD537A6D5BB18C70A8B9D6D40DC3671B311A3F4(L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		int32_t L_21 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0095:
	{
		int32_t L_22 = V_6;
		int64_t L_23 = V_1;
		V_7 = (bool)((((int64_t)(((int64_t)((int64_t)L_22)))) < ((int64_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (L_24)
		{
			goto IL_007a;
		}
	}
	{
	}

IL_00a2:
	{
		bool L_25 = V_0;
		V_8 = L_25;
		goto IL_00a7;
	}

IL_00a7:
	{
		bool L_26 = V_8;
		return L_26;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ClearAll_m5718361F5C48B147A6F873357C7C98E7C45C01C5 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ClearAll_m5718361F5C48B147A6F873357C7C98E7C45C01C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		__this->set_data_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		V_1 = 0;
		goto IL_002b;
	}

IL_000c:
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_childNodeList_5();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_0 = ((Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 *)CastclassClass((RuntimeObject*)L_2, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664_il2cpp_TypeInfo_var));
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_3 = V_0;
		NullCheck(L_3);
		Asn1Node_ClearAll_m5718361F5C48B147A6F873357C7C98E7C45C01C5(L_3, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_5 = V_1;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_6 = __this->get_childNodeList_5();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000c;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_9 = __this->get_childNodeList_5();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Collections.ArrayList::Clear() */, L_9);
		Asn1Node_RecalculateTreePar_m46F055E692514496D22422FDEE0831F3E6B4C01A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::AddChild(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_AddChild_mCF97B7E4158691C1E666091BDA8A899F4207AED3 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___xdata0, const RuntimeMethod* method)
{
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_childNodeList_5();
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_1 = ___xdata0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		Asn1Node_RecalculateTreePar_m46F055E692514496D22422FDEE0831F3E6B4C01A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_ChildNodeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_childNodeList_5();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = (((int64_t)((int64_t)L_1)));
		goto IL_0010;
	}

IL_0010:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::GetChildNode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_0 = NULL;
	bool V_1 = false;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_2 = NULL;
	{
		V_0 = (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 *)NULL;
		int32_t L_0 = ___index0;
		int64_t L_1 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int64_t)(((int64_t)((int64_t)L_0)))) < ((int64_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = __this->get_childNodeList_5();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_0 = ((Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 *)CastclassClass((RuntimeObject*)L_5, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664_il2cpp_TypeInfo_var));
	}

IL_0025:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_6 = V_0;
		V_2 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_7 = V_2;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::get_TagName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint8_t L_0 = __this->get_tag_0();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_1 = Asn1Util_GetTagName_mA48556C90F4F1D4CE6E57A4DF624B9C71E981BC8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * Asn1Node_get_ParentNode_m85832D15C268C18D2F792A8FE01B6272E45ED122 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_0 = NULL;
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = __this->get_parentNode_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_1 = V_0;
		return L_1;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetText_mA2C27AFDB8F6610F12A0D64B76CDB7D591CF0E92 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetText_mA2C27AFDB8F6610F12A0D64B76CDB7D591CF0E92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * V_5 = NULL;
	RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 * V_6 = NULL;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	int64_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	String_t* V_19 = NULL;
	int32_t G_B23_0 = 0;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		uint8_t L_0 = __this->get_tag_0();
		V_8 = L_0;
		uint8_t L_1 = V_8;
		V_7 = L_1;
		uint8_t L_2 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0394;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_0488;
			}
			case 3:
			{
				goto IL_0488;
			}
			case 4:
			{
				goto IL_0197;
			}
		}
	}
	{
		goto IL_003e;
	}

IL_003e:
	{
		uint8_t L_3 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_02a0;
			}
			case 1:
			{
				goto IL_021d;
			}
			case 2:
			{
				goto IL_0488;
			}
			case 3:
			{
				goto IL_0488;
			}
			case 4:
			{
				goto IL_0488;
			}
			case 5:
			{
				goto IL_0488;
			}
			case 6:
			{
				goto IL_02a0;
			}
			case 7:
			{
				goto IL_02a0;
			}
			case 8:
			{
				goto IL_0488;
			}
			case 9:
			{
				goto IL_0488;
			}
			case 10:
			{
				goto IL_02a0;
			}
			case 11:
			{
				goto IL_02a0;
			}
			case 12:
			{
				goto IL_02a0;
			}
			case 13:
			{
				goto IL_0488;
			}
			case 14:
			{
				goto IL_02a0;
			}
			case 15:
			{
				goto IL_02a0;
			}
			case 16:
			{
				goto IL_02a0;
			}
			case 17:
			{
				goto IL_0488;
			}
			case 18:
			{
				goto IL_02a0;
			}
		}
	}
	{
		goto IL_0488;
	}

IL_0099:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int64_t L_6 = __this->get_dataOffset_1();
		int64_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int64_t L_10 = __this->get_dataLength_2();
		int64_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		int64_t L_14 = __this->get_lengthFieldBytes_3();
		int64_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_18 = ___startNode0;
		String_t* L_19 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_17;
		String_t* L_21 = Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_20;
		uint8_t L_23 = __this->get_unusedBits_6();
		uint8_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_25);
		String_t* L_26 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralB4A7D2EEB1F22F7D3B5BE89D41486AAF0411C31A, L_22, /*hidden argument*/NULL);
		V_1 = L_26;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_28 = Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F(L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		String_t* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		String_t* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_31, /*hidden argument*/NULL);
		int32_t L_33 = ___lineLen1;
		V_9 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_32))) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_0165;
		}
	}
	{
		String_t* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_35, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)1))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_38 = V_0;
		String_t* L_39 = V_1;
		String_t* L_40 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_38, L_39, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0162;
	}

IL_0138:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_41;
		String_t* L_43 = V_0;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_43);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = L_42;
		String_t* L_45 = V_1;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_45);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_44;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = L_46;
		String_t* L_48 = V_2;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_48);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_47;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		String_t* L_50 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_49, /*hidden argument*/NULL);
		V_0 = L_50;
	}

IL_0162:
	{
		goto IL_0192;
	}

IL_0165:
	{
		String_t* L_51 = V_0;
		String_t* L_52 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_53 = ___startNode0;
		String_t* L_54 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_54, /*hidden argument*/NULL);
		int32_t L_56 = ___lineLen1;
		String_t* L_57 = V_2;
		String_t* L_58 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_57, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		String_t* L_59 = Asn1Node_FormatLineHexString_m629FFA6B616B5B4D4FFEC583CF311542D1E215D3(__this, _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8, L_55, L_56, L_58, /*hidden argument*/NULL);
		String_t* L_60 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_51, L_52, L_59, /*hidden argument*/NULL);
		V_0 = L_60;
	}

IL_0192:
	{
		goto IL_05cc;
	}

IL_0197:
	{
		Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * L_61 = (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A *)il2cpp_codegen_object_new(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var);
		Oid__ctor_mCDCEFBFCC674003EC0227F8954F74F83B92E2D45(L_61, /*hidden argument*/NULL);
		V_5 = L_61;
		Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * L_62 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = __this->get_data_4();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_64 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_64, L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		String_t* L_65 = VirtFuncInvoker1< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_62, L_64);
		V_3 = L_65;
		Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * L_66 = V_5;
		String_t* L_67 = V_3;
		NullCheck(L_66);
		String_t* L_68 = Oid_GetOidName_m64BFA3E74CFFFC1B22D401FA4D514E95B553E6E2(L_66, L_67, /*hidden argument*/NULL);
		V_4 = L_68;
		String_t* L_69 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = L_70;
		int64_t L_72 = __this->get_dataOffset_1();
		int64_t L_73 = L_72;
		RuntimeObject * L_74 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_73);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_74);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75 = L_71;
		int64_t L_76 = __this->get_dataLength_2();
		int64_t L_77 = L_76;
		RuntimeObject * L_78 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_77);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_78);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_78);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_79 = L_75;
		int64_t L_80 = __this->get_lengthFieldBytes_3();
		int64_t L_81 = L_80;
		RuntimeObject * L_82 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_81);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_82);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_82);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_83 = L_79;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_84 = ___startNode0;
		String_t* L_85 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_84, /*hidden argument*/NULL);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_85);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_85);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_86 = L_83;
		String_t* L_87 = Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A(__this, /*hidden argument*/NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_87);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_87);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_88 = L_86;
		String_t* L_89 = V_4;
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_89);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_89);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_90 = L_88;
		String_t* L_91 = V_3;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_91);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_91);
		String_t* L_92 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral5F3ACD009658E07BAE430ABC62FC30CE666E7249, L_90, /*hidden argument*/NULL);
		String_t* L_93 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_69, L_92, /*hidden argument*/NULL);
		V_0 = L_93;
		goto IL_05cc;
	}

IL_021d:
	{
		RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 * L_94 = (RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 *)il2cpp_codegen_object_new(RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527_il2cpp_TypeInfo_var);
		RelativeOid__ctor_mA1498861FAA241BA8D336EDDC7935944F0332087(L_94, /*hidden argument*/NULL);
		V_6 = L_94;
		RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 * L_95 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = __this->get_data_4();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_97 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_97, L_96, /*hidden argument*/NULL);
		NullCheck(L_95);
		String_t* L_98 = VirtFuncInvoker1< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_95, L_97);
		V_3 = L_98;
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		String_t* L_99 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_100 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_101 = L_100;
		int64_t L_102 = __this->get_dataOffset_1();
		int64_t L_103 = L_102;
		RuntimeObject * L_104 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_103);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_104);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_104);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_105 = L_101;
		int64_t L_106 = __this->get_dataLength_2();
		int64_t L_107 = L_106;
		RuntimeObject * L_108 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_107);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_108);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_108);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_109 = L_105;
		int64_t L_110 = __this->get_lengthFieldBytes_3();
		int64_t L_111 = L_110;
		RuntimeObject * L_112 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_111);
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, L_112);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_112);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_113 = L_109;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_114 = ___startNode0;
		String_t* L_115 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_114, /*hidden argument*/NULL);
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_115);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_115);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_116 = L_113;
		String_t* L_117 = Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A(__this, /*hidden argument*/NULL);
		NullCheck(L_116);
		ArrayElementTypeCheck (L_116, L_117);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_117);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_118 = L_116;
		String_t* L_119 = V_4;
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_119);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_119);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_120 = L_118;
		String_t* L_121 = V_3;
		NullCheck(L_120);
		ArrayElementTypeCheck (L_120, L_121);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_121);
		String_t* L_122 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral5F3ACD009658E07BAE430ABC62FC30CE666E7249, L_120, /*hidden argument*/NULL);
		String_t* L_123 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_99, L_122, /*hidden argument*/NULL);
		V_0 = L_123;
		goto IL_05cc;
	}

IL_02a0:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_124 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_125 = L_124;
		int64_t L_126 = __this->get_dataOffset_1();
		int64_t L_127 = L_126;
		RuntimeObject * L_128 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_127);
		NullCheck(L_125);
		ArrayElementTypeCheck (L_125, L_128);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_128);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_129 = L_125;
		int64_t L_130 = __this->get_dataLength_2();
		int64_t L_131 = L_130;
		RuntimeObject * L_132 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_131);
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, L_132);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_132);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_133 = L_129;
		int64_t L_134 = __this->get_lengthFieldBytes_3();
		int64_t L_135 = L_134;
		RuntimeObject * L_136 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_135);
		NullCheck(L_133);
		ArrayElementTypeCheck (L_133, L_136);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_136);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_137 = L_133;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_138 = ___startNode0;
		String_t* L_139 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_138, /*hidden argument*/NULL);
		NullCheck(L_137);
		ArrayElementTypeCheck (L_137, L_139);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_139);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_140 = L_137;
		String_t* L_141 = Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A(__this, /*hidden argument*/NULL);
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, L_141);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_141);
		String_t* L_142 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F, L_140, /*hidden argument*/NULL);
		V_1 = L_142;
		uint8_t L_143 = __this->get_tag_0();
		V_11 = (bool)((((int32_t)L_143) == ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_144 = V_11;
		if (!L_144)
		{
			goto IL_0317;
		}
	}
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_145 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_145, /*hidden argument*/NULL);
		V_12 = L_145;
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_146 = V_12;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_147 = __this->get_data_4();
		NullCheck(L_146);
		String_t* L_148 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_146, L_147);
		V_2 = L_148;
		goto IL_0325;
	}

IL_0317:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_149 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_150 = Asn1Util_BytesToString_m250C8D269AC48BA4125F4D3996E5B64B99CD36BB(L_149, /*hidden argument*/NULL);
		V_2 = L_150;
	}

IL_0325:
	{
		String_t* L_151 = V_1;
		NullCheck(L_151);
		int32_t L_152 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_151, /*hidden argument*/NULL);
		String_t* L_153 = V_2;
		NullCheck(L_153);
		int32_t L_154 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_153, /*hidden argument*/NULL);
		int32_t L_155 = ___lineLen1;
		V_13 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)L_154))) < ((int32_t)L_155))? 1 : 0);
		bool L_156 = V_13;
		if (!L_156)
		{
			goto IL_0367;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_157 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_158 = L_157;
		String_t* L_159 = V_0;
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, L_159);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_159);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_160 = L_158;
		String_t* L_161 = V_1;
		NullCheck(L_160);
		ArrayElementTypeCheck (L_160, L_161);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_161);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_162 = L_160;
		NullCheck(L_162);
		ArrayElementTypeCheck (L_162, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_163 = L_162;
		String_t* L_164 = V_2;
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, L_164);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_164);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_165 = L_163;
		NullCheck(L_165);
		ArrayElementTypeCheck (L_165, _stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		String_t* L_166 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_165, /*hidden argument*/NULL);
		V_0 = L_166;
		goto IL_038f;
	}

IL_0367:
	{
		String_t* L_167 = V_0;
		String_t* L_168 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_169 = ___startNode0;
		String_t* L_170 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_169, /*hidden argument*/NULL);
		NullCheck(L_170);
		int32_t L_171 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_170, /*hidden argument*/NULL);
		int32_t L_172 = ___lineLen1;
		String_t* L_173 = V_2;
		String_t* L_174 = Asn1Node_FormatLineString_m6945790E5C4FA04D27973A4A1AAFE147E48B2A07(__this, _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8, L_171, L_172, L_173, /*hidden argument*/NULL);
		String_t* L_175 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_167, L_168, L_174, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		V_0 = L_175;
	}

IL_038f:
	{
		goto IL_05cc;
	}

IL_0394:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_176 = __this->get_data_4();
		if (!L_176)
		{
			goto IL_03a8;
		}
	}
	{
		int64_t L_177 = __this->get_dataLength_2();
		G_B23_0 = ((((int64_t)L_177) < ((int64_t)(((int64_t)((int64_t)8)))))? 1 : 0);
		goto IL_03a9;
	}

IL_03a8:
	{
		G_B23_0 = 0;
	}

IL_03a9:
	{
		V_14 = (bool)G_B23_0;
		bool L_178 = V_14;
		if (!L_178)
		{
			goto IL_041e;
		}
	}
	{
		String_t* L_179 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_180 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_181 = L_180;
		int64_t L_182 = __this->get_dataOffset_1();
		int64_t L_183 = L_182;
		RuntimeObject * L_184 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_183);
		NullCheck(L_181);
		ArrayElementTypeCheck (L_181, L_184);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_184);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_185 = L_181;
		int64_t L_186 = __this->get_dataLength_2();
		int64_t L_187 = L_186;
		RuntimeObject * L_188 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_187);
		NullCheck(L_185);
		ArrayElementTypeCheck (L_185, L_188);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_188);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_189 = L_185;
		int64_t L_190 = __this->get_lengthFieldBytes_3();
		int64_t L_191 = L_190;
		RuntimeObject * L_192 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_191);
		NullCheck(L_189);
		ArrayElementTypeCheck (L_189, L_192);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_192);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_193 = L_189;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_194 = ___startNode0;
		String_t* L_195 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_194, /*hidden argument*/NULL);
		NullCheck(L_193);
		ArrayElementTypeCheck (L_193, L_195);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_195);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_196 = L_193;
		String_t* L_197 = Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A(__this, /*hidden argument*/NULL);
		NullCheck(L_196);
		ArrayElementTypeCheck (L_196, L_197);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_197);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_198 = L_196;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_199 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		int64_t L_200 = Asn1Util_BytesToLong_m066A6C0D1BD5B722350EC3DA4DA97461EA49A646(L_199, /*hidden argument*/NULL);
		V_15 = L_200;
		String_t* L_201 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_15), /*hidden argument*/NULL);
		NullCheck(L_198);
		ArrayElementTypeCheck (L_198, L_201);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_201);
		String_t* L_202 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral9787EA65D34ACB2E800972522D1FB9E8D86E0511, L_198, /*hidden argument*/NULL);
		String_t* L_203 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_179, L_202, /*hidden argument*/NULL);
		V_0 = L_203;
		goto IL_0483;
	}

IL_041e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_204 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_205 = L_204;
		int64_t L_206 = __this->get_dataOffset_1();
		int64_t L_207 = L_206;
		RuntimeObject * L_208 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_207);
		NullCheck(L_205);
		ArrayElementTypeCheck (L_205, L_208);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_208);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_209 = L_205;
		int64_t L_210 = __this->get_dataLength_2();
		int64_t L_211 = L_210;
		RuntimeObject * L_212 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_211);
		NullCheck(L_209);
		ArrayElementTypeCheck (L_209, L_212);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_212);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_213 = L_209;
		int64_t L_214 = __this->get_lengthFieldBytes_3();
		int64_t L_215 = L_214;
		RuntimeObject * L_216 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_215);
		NullCheck(L_213);
		ArrayElementTypeCheck (L_213, L_216);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_216);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_217 = L_213;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_218 = ___startNode0;
		String_t* L_219 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_218, /*hidden argument*/NULL);
		NullCheck(L_217);
		ArrayElementTypeCheck (L_217, L_219);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_219);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_220 = L_217;
		String_t* L_221 = Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A(__this, /*hidden argument*/NULL);
		NullCheck(L_220);
		ArrayElementTypeCheck (L_220, L_221);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_221);
		String_t* L_222 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F, L_220, /*hidden argument*/NULL);
		V_1 = L_222;
		String_t* L_223 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_224 = ___startNode0;
		String_t* L_225 = V_1;
		int32_t L_226 = ___lineLen1;
		String_t* L_227 = Asn1Node_GetHexPrintingStr_mD382FE3CED0B661AE55C914B46CD9622AF402CDB(__this, L_224, L_225, _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8, L_226, /*hidden argument*/NULL);
		String_t* L_228 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_223, L_227, /*hidden argument*/NULL);
		V_0 = L_228;
	}

IL_0483:
	{
		goto IL_05cc;
	}

IL_0488:
	{
		uint8_t L_229 = __this->get_tag_0();
		V_16 = (bool)((((int32_t)((int32_t)((int32_t)L_229&(int32_t)((int32_t)31)))) == ((int32_t)6))? 1 : 0);
		bool L_230 = V_16;
		if (!L_230)
		{
			goto IL_0565;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_231 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_232 = L_231;
		int64_t L_233 = __this->get_dataOffset_1();
		int64_t L_234 = L_233;
		RuntimeObject * L_235 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_234);
		NullCheck(L_232);
		ArrayElementTypeCheck (L_232, L_235);
		(L_232)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_235);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_236 = L_232;
		int64_t L_237 = __this->get_dataLength_2();
		int64_t L_238 = L_237;
		RuntimeObject * L_239 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_238);
		NullCheck(L_236);
		ArrayElementTypeCheck (L_236, L_239);
		(L_236)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_239);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_240 = L_236;
		int64_t L_241 = __this->get_lengthFieldBytes_3();
		int64_t L_242 = L_241;
		RuntimeObject * L_243 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_242);
		NullCheck(L_240);
		ArrayElementTypeCheck (L_240, L_243);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_243);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_244 = L_240;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_245 = ___startNode0;
		String_t* L_246 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_245, /*hidden argument*/NULL);
		NullCheck(L_244);
		ArrayElementTypeCheck (L_244, L_246);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_246);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_247 = L_244;
		String_t* L_248 = Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A(__this, /*hidden argument*/NULL);
		NullCheck(L_247);
		ArrayElementTypeCheck (L_247, L_248);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_248);
		String_t* L_249 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F, L_247, /*hidden argument*/NULL);
		V_1 = L_249;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_250 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_251 = Asn1Util_BytesToString_m250C8D269AC48BA4125F4D3996E5B64B99CD36BB(L_250, /*hidden argument*/NULL);
		V_2 = L_251;
		String_t* L_252 = V_1;
		NullCheck(L_252);
		int32_t L_253 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_252, /*hidden argument*/NULL);
		String_t* L_254 = V_2;
		NullCheck(L_254);
		int32_t L_255 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_254, /*hidden argument*/NULL);
		int32_t L_256 = ___lineLen1;
		V_17 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_253, (int32_t)L_255))) < ((int32_t)L_256))? 1 : 0);
		bool L_257 = V_17;
		if (!L_257)
		{
			goto IL_053a;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_258 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_259 = L_258;
		String_t* L_260 = V_0;
		NullCheck(L_259);
		ArrayElementTypeCheck (L_259, L_260);
		(L_259)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_260);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_261 = L_259;
		String_t* L_262 = V_1;
		NullCheck(L_261);
		ArrayElementTypeCheck (L_261, L_262);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_262);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_263 = L_261;
		NullCheck(L_263);
		ArrayElementTypeCheck (L_263, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_263)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_264 = L_263;
		String_t* L_265 = V_2;
		NullCheck(L_264);
		ArrayElementTypeCheck (L_264, L_265);
		(L_264)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_265);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_266 = L_264;
		NullCheck(L_266);
		ArrayElementTypeCheck (L_266, _stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		(L_266)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		String_t* L_267 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_266, /*hidden argument*/NULL);
		V_0 = L_267;
		goto IL_0562;
	}

IL_053a:
	{
		String_t* L_268 = V_0;
		String_t* L_269 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_270 = ___startNode0;
		String_t* L_271 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_270, /*hidden argument*/NULL);
		NullCheck(L_271);
		int32_t L_272 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_271, /*hidden argument*/NULL);
		int32_t L_273 = ___lineLen1;
		String_t* L_274 = V_2;
		String_t* L_275 = Asn1Node_FormatLineString_m6945790E5C4FA04D27973A4A1AAFE147E48B2A07(__this, _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8, L_272, L_273, L_274, /*hidden argument*/NULL);
		String_t* L_276 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_268, L_269, L_275, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		V_0 = L_276;
	}

IL_0562:
	{
		goto IL_05ca;
	}

IL_0565:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_277 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_278 = L_277;
		int64_t L_279 = __this->get_dataOffset_1();
		int64_t L_280 = L_279;
		RuntimeObject * L_281 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_280);
		NullCheck(L_278);
		ArrayElementTypeCheck (L_278, L_281);
		(L_278)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_281);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_282 = L_278;
		int64_t L_283 = __this->get_dataLength_2();
		int64_t L_284 = L_283;
		RuntimeObject * L_285 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_284);
		NullCheck(L_282);
		ArrayElementTypeCheck (L_282, L_285);
		(L_282)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_285);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_286 = L_282;
		int64_t L_287 = __this->get_lengthFieldBytes_3();
		int64_t L_288 = L_287;
		RuntimeObject * L_289 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_288);
		NullCheck(L_286);
		ArrayElementTypeCheck (L_286, L_289);
		(L_286)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_289);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_290 = L_286;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_291 = ___startNode0;
		String_t* L_292 = Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8(__this, L_291, /*hidden argument*/NULL);
		NullCheck(L_290);
		ArrayElementTypeCheck (L_290, L_292);
		(L_290)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_292);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_293 = L_290;
		String_t* L_294 = Asn1Node_get_TagName_mF40569062F38B895F88DA9E60F2FA1ABF892F35A(__this, /*hidden argument*/NULL);
		NullCheck(L_293);
		ArrayElementTypeCheck (L_293, L_294);
		(L_293)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_294);
		String_t* L_295 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F, L_293, /*hidden argument*/NULL);
		V_1 = L_295;
		String_t* L_296 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_297 = ___startNode0;
		String_t* L_298 = V_1;
		int32_t L_299 = ___lineLen1;
		String_t* L_300 = Asn1Node_GetHexPrintingStr_mD382FE3CED0B661AE55C914B46CD9622AF402CDB(__this, L_297, L_298, _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8, L_299, /*hidden argument*/NULL);
		String_t* L_301 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_296, L_300, /*hidden argument*/NULL);
		V_0 = L_301;
	}

IL_05ca:
	{
		goto IL_05cc;
	}

IL_05cc:
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_302 = __this->get_childNodeList_5();
		NullCheck(L_302);
		int32_t L_303 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_302);
		V_18 = (bool)((((int32_t)((((int32_t)L_303) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_304 = V_18;
		if (!L_304)
		{
			goto IL_05f5;
		}
	}
	{
		String_t* L_305 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_306 = ___startNode0;
		int32_t L_307 = ___lineLen1;
		String_t* L_308 = Asn1Node_GetListStr_mD39C6F96270976B88A58760F258AFF38F7198D3C(__this, L_306, L_307, /*hidden argument*/NULL);
		String_t* L_309 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_305, L_308, /*hidden argument*/NULL);
		V_0 = L_309;
	}

IL_05f5:
	{
		String_t* L_310 = V_0;
		V_19 = L_310;
		goto IL_05fa;
	}

IL_05fa:
	{
		String_t* L_311 = V_19;
		return L_311;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetDataStr(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetDataStr_m5328ED9958497CB67DF1A942B9EA8B4E72E1D4AC (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, bool ___pureHexMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetDataStr_m5328ED9958497CB67DF1A942B9EA8B4E72E1D4AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * V_2 = NULL;
	RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 * V_3 = NULL;
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * V_4 = NULL;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	bool V_7 = false;
	String_t* V_8 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		bool L_0 = ___pureHexMode0;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_3 = Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F(L_2, /*hidden argument*/NULL);
		String_t* L_4 = Asn1Util_FormatString_mBF08ABF06783CFC76B3574F44DD7F1D0E68A56CF(L_3, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0175;
	}

IL_0027:
	{
		uint8_t L_5 = __this->get_tag_0();
		V_6 = L_5;
		uint8_t L_6 = V_6;
		V_5 = L_6;
		uint8_t L_7 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0123;
			}
			case 1:
			{
				goto IL_00ae;
			}
			case 2:
			{
				goto IL_0139;
			}
			case 3:
			{
				goto IL_0139;
			}
			case 4:
			{
				goto IL_00c7;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_0053:
	{
		uint8_t L_8 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_010c;
			}
			case 1:
			{
				goto IL_00e4;
			}
			case 2:
			{
				goto IL_0139;
			}
			case 3:
			{
				goto IL_0139;
			}
			case 4:
			{
				goto IL_0139;
			}
			case 5:
			{
				goto IL_0139;
			}
			case 6:
			{
				goto IL_00fe;
			}
			case 7:
			{
				goto IL_00fe;
			}
			case 8:
			{
				goto IL_0139;
			}
			case 9:
			{
				goto IL_0139;
			}
			case 10:
			{
				goto IL_00fe;
			}
			case 11:
			{
				goto IL_00fe;
			}
			case 12:
			{
				goto IL_00fe;
			}
			case 13:
			{
				goto IL_0139;
			}
			case 14:
			{
				goto IL_00fe;
			}
			case 15:
			{
				goto IL_00fe;
			}
			case 16:
			{
				goto IL_00fe;
			}
			case 17:
			{
				goto IL_0139;
			}
			case 18:
			{
				goto IL_00fe;
			}
		}
	}
	{
		goto IL_0139;
	}

IL_00ae:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_10 = Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F(L_9, /*hidden argument*/NULL);
		String_t* L_11 = Asn1Util_FormatString_mBF08ABF06783CFC76B3574F44DD7F1D0E68A56CF(L_10, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0173;
	}

IL_00c7:
	{
		Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * L_12 = (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A *)il2cpp_codegen_object_new(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var);
		Oid__ctor_mCDCEFBFCC674003EC0227F8954F74F83B92E2D45(L_12, /*hidden argument*/NULL);
		V_2 = L_12;
		Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * L_13 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_data_4();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_15 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_16 = VirtFuncInvoker1< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_13, L_15);
		V_0 = L_16;
		goto IL_0173;
	}

IL_00e4:
	{
		RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 * L_17 = (RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 *)il2cpp_codegen_object_new(RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527_il2cpp_TypeInfo_var);
		RelativeOid__ctor_mA1498861FAA241BA8D336EDDC7935944F0332087(L_17, /*hidden argument*/NULL);
		V_3 = L_17;
		RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 * L_18 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get_data_4();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_20 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_20, L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_21 = VirtFuncInvoker1< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_18, L_20);
		V_0 = L_21;
		goto IL_0173;
	}

IL_00fe:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_23 = Asn1Util_BytesToString_m250C8D269AC48BA4125F4D3996E5B64B99CD36BB(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0173;
	}

IL_010c:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_24 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_24, /*hidden argument*/NULL);
		V_4 = L_24;
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_25 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = __this->get_data_4();
		NullCheck(L_25);
		String_t* L_27 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_25, L_26);
		V_0 = L_27;
		goto IL_0173;
	}

IL_0123:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_29 = Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F(L_28, /*hidden argument*/NULL);
		String_t* L_30 = Asn1Util_FormatString_mBF08ABF06783CFC76B3574F44DD7F1D0E68A56CF(L_29, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0173;
	}

IL_0139:
	{
		uint8_t L_31 = __this->get_tag_0();
		V_7 = (bool)((((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)31)))) == ((int32_t)6))? 1 : 0);
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_015b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_34 = Asn1Util_BytesToString_m250C8D269AC48BA4125F4D3996E5B64B99CD36BB(L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_0171;
	}

IL_015b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_36 = Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F(L_35, /*hidden argument*/NULL);
		String_t* L_37 = Asn1Util_FormatString_mBF08ABF06783CFC76B3574F44DD7F1D0E68A56CF(L_36, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_37;
	}

IL_0171:
	{
		goto IL_0173;
	}

IL_0173:
	{
	}

IL_0175:
	{
		String_t* L_38 = V_0;
		V_8 = L_38;
		goto IL_017a;
	}

IL_017a:
	{
		String_t* L_39 = V_8;
		return L_39;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_DataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_DataLength_mF657BA3880B10E817C4B44D047B56E44BC1AF20A (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_dataLength_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	int64_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		int64_t L_1 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int64_t L_2 = V_1;
		V_3 = (bool)((((int64_t)L_2) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_data_4();
		V_4 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_6 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_data_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_data_4();
		NullCheck(L_8);
		NullCheck(L_6);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))));
	}

IL_003f:
	{
		goto IL_0070;
	}

IL_0042:
	{
		V_6 = 0;
		goto IL_0063;
	}

IL_0048:
	{
		int32_t L_9 = V_6;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_10 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(__this, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_11 = V_5;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_12 = V_0;
		NullCheck(L_11);
		Asn1Node_SaveData_m7DD537A6D5BB18C70A8B9D6D40DC3671B311A3F4(L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_14 = V_6;
		int64_t L_15 = V_1;
		V_7 = (bool)((((int64_t)(((int64_t)((int64_t)L_14)))) < ((int64_t)L_15))? 1 : 0);
		bool L_16 = V_7;
		if (L_16)
		{
			goto IL_0048;
		}
	}
	{
	}

IL_0070:
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_17 = V_0;
		NullCheck(L_17);
		int64_t L_18 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_17);
		if ((int64_t)(L_18) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_18)));
		V_2 = L_19;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_20 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_20, (((int64_t)((int64_t)0))));
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_21 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_2;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_23);
		NullCheck(L_21);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, (((int32_t)((int32_t)L_24))));
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_25 = V_0;
		NullCheck(L_25);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_25);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = V_2;
		V_8 = L_26;
		goto IL_00a2;
	}

IL_00a2:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_8;
		return L_27;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_Deepness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_Deepness_m8456C46EB5CACE4C5FF35FCCB8EE37EEF446A849 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_deepness_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::set_RequireRecalculatePar(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_set_RequireRecalculatePar_mC12DA152228DADB93AFAB3271A615780AC9FB372 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_requireRecalculatePar_10(L_0);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::RecalculateTreePar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_RecalculateTreePar_m46F055E692514496D22422FDEE0831F3E6B4C01A (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, const RuntimeMethod* method)
{
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = __this->get_requireRecalculatePar_10();
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_005b;
	}

IL_0010:
	{
		V_0 = __this;
		goto IL_001d;
	}

IL_0014:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_2 = V_0;
		NullCheck(L_2);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_3 = Asn1Node_get_ParentNode_m85832D15C268C18D2F792A8FE01B6272E45ED122(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_4 = V_0;
		NullCheck(L_4);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_5 = Asn1Node_get_ParentNode_m85832D15C268C18D2F792A8FE01B6272E45ED122(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((!(((RuntimeObject*)(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0014;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_7 = V_0;
		Asn1Node_ResetBranchDataLength_m2136A28AC060CCF1256C805908F3AC84C7AC78D7(L_7, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_8 = V_0;
		NullCheck(L_8);
		L_8->set_dataOffset_1((((int64_t)((int64_t)0))));
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_9 = V_0;
		NullCheck(L_9);
		L_9->set_deepness_7((((int64_t)((int64_t)0))));
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_10 = V_0;
		NullCheck(L_10);
		int64_t L_11 = L_10->get_dataOffset_1();
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_12 = V_0;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_lengthFieldBytes_3();
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_11, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_13));
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_14 = V_0;
		int64_t L_15 = V_1;
		Asn1Node_ResetChildNodePar_mA1E21E949F74C76037E6CED6D7BE3C863453DE24(__this, L_14, L_15, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::ResetBranchDataLength(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_ResetBranchDataLength_m2136A28AC060CCF1256C805908F3AC84C7AC78D7 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___node0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int64_t V_7 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		V_1 = (((int64_t)((int64_t)0)));
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___node0;
		NullCheck(L_0);
		int64_t L_1 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int64_t)L_1) < ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_3 = ___node0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3->get_data_4();
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		int64_t L_6 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_7 = ___node0;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = L_7->get_data_4();
		NullCheck(L_8);
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))))));
	}

IL_002f:
	{
		goto IL_0062;
	}

IL_0032:
	{
		V_4 = 0;
		goto IL_0050;
	}

IL_0038:
	{
		int64_t L_9 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_10 = ___node0;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_12 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_10, L_11, /*hidden argument*/NULL);
		int64_t L_13 = Asn1Node_ResetBranchDataLength_m2136A28AC060CCF1256C805908F3AC84C7AC78D7(L_12, /*hidden argument*/NULL);
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)L_13));
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_15 = V_4;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_16 = ___node0;
		NullCheck(L_16);
		int64_t L_17 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int64_t)(((int64_t)((int64_t)L_15)))) < ((int64_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0038;
		}
	}
	{
	}

IL_0062:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_19 = ___node0;
		int64_t L_20 = V_1;
		NullCheck(L_19);
		L_19->set_dataLength_2(L_20);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_21 = ___node0;
		NullCheck(L_21);
		uint8_t L_22 = L_21->get_tag_0();
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)3))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_24 = ___node0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_25 = L_24;
		NullCheck(L_25);
		int64_t L_26 = L_25->get_dataLength_2();
		NullCheck(L_25);
		L_25->set_dataLength_2(((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)(((int64_t)((int64_t)1))))));
	}

IL_0087:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_27 = ___node0;
		Asn1Node_ResetDataLengthFieldWidth_m35E24AA80320AF619ECC4524D609A4A219B41702(L_27, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_28 = ___node0;
		NullCheck(L_28);
		int64_t L_29 = L_28->get_dataLength_2();
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_30 = ___node0;
		NullCheck(L_30);
		int64_t L_31 = L_30->get_lengthFieldBytes_3();
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_29, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_31));
		int64_t L_32 = V_0;
		V_7 = L_32;
		goto IL_00a4;
	}

IL_00a4:
	{
		int64_t L_33 = V_7;
		return L_33;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetDataLengthFieldWidth(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetDataLengthFieldWidth_m35E24AA80320AF619ECC4524D609A4A219B41702 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ResetDataLengthFieldWidth_m35E24AA80320AF619ECC4524D609A4A219B41702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_2 = ___node0;
		NullCheck(L_2);
		int64_t L_3 = L_2->get_dataLength_2();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		Asn1Util_DERLengthEncode_mEAAF6BFA9CF50BB1113FDA7D18326247CB59A8D5(L_1, L_3, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_4 = ___node0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_5 = V_0;
		NullCheck(L_5);
		int64_t L_6 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_5);
		NullCheck(L_4);
		L_4->set_lengthFieldBytes_3(L_6);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_7);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetChildNodePar(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetChildNodePar_mA1E21E949F74C76037E6CED6D7BE3C863453DE24 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___xNode0, int64_t ___subOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ResetChildNodePar_mA1E21E949F74C76037E6CED6D7BE3C863453DE24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___xNode0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_tag_0();
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int64_t L_3 = ___subOffset1;
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_3, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0016:
	{
		V_0 = 0;
		goto IL_0082;
	}

IL_001a:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_4 = ___xNode0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_6 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_7 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_8 = ___xNode0;
		NullCheck(L_7);
		L_7->set_parentNode_9(L_8);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_9 = V_1;
		int64_t L_10 = ___subOffset1;
		NullCheck(L_9);
		L_9->set_dataOffset_1(L_10);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_11 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_12 = ___xNode0;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_deepness_7();
		NullCheck(L_11);
		L_11->set_deepness_7(((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)(((int64_t)((int64_t)1))))));
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_14 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_15 = ___xNode0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_path_8();
		String_t* L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_18 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_16, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_path_8(L_18);
		int64_t L_19 = ___subOffset1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_20 = V_1;
		NullCheck(L_20);
		int64_t L_21 = L_20->get_lengthFieldBytes_3();
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)1))), (int64_t)L_21))));
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_22 = V_1;
		int64_t L_23 = ___subOffset1;
		Asn1Node_ResetChildNodePar_mA1E21E949F74C76037E6CED6D7BE3C863453DE24(__this, L_22, L_23, /*hidden argument*/NULL);
		int64_t L_24 = ___subOffset1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_25 = V_1;
		NullCheck(L_25);
		int64_t L_26 = L_25->get_dataLength_2();
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, (int64_t)L_26));
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_28 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_29 = ___xNode0;
		NullCheck(L_29);
		int64_t L_30 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_29, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)(((int64_t)((int64_t)L_28)))) < ((int64_t)L_30))? 1 : 0);
		bool L_31 = V_3;
		if (L_31)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetListStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetListStr_mD39C6F96270976B88A58760F258AFF38F7198D3C (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetListStr_mD39C6F96270976B88A58760F258AFF38F7198D3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = 0;
		goto IL_0032;
	}

IL_000b:
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_childNodeList_5();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_2 = ((Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 *)CastclassClass((RuntimeObject*)L_2, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_4 = V_2;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_5 = ___startNode0;
		int32_t L_6 = ___lineLen1;
		NullCheck(L_4);
		String_t* L_7 = Asn1Node_GetText_mA2C27AFDB8F6610F12A0D64B76CDB7D591CF0E92(L_4, L_5, L_6, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_10 = V_1;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_11 = __this->get_childNodeList_5();
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_14 = V_0;
		V_4 = L_14;
		goto IL_0049;
	}

IL_0049:
	{
		String_t* L_15 = V_4;
		return L_15;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetIndentStr(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___startNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetIndentStr_mE33717230DCB4B733314077E914DFB7EDDEA58D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = (((int64_t)((int64_t)0)));
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___startNode0;
		V_2 = (bool)((!(((RuntimeObject*)(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_2 = ___startNode0;
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_Deepness_m8456C46EB5CACE4C5FF35FCCB8EE37EEF446A849(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_001b:
	{
		V_3 = (((int64_t)((int64_t)0)));
		goto IL_0033;
	}

IL_0020:
	{
		String_t* L_4 = V_0;
		String_t* L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, /*hidden argument*/NULL);
		V_0 = L_5;
		int64_t L_6 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0033:
	{
		int64_t L_7 = V_3;
		int64_t L_8 = __this->get_deepness_7();
		int64_t L_9 = V_1;
		V_4 = (bool)((((int64_t)L_7) < ((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_8, (int64_t)L_9))))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_11 = V_0;
		V_5 = L_11;
		goto IL_0049;
	}

IL_0049:
	{
		String_t* L_12 = V_5;
		return L_12;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::GeneralDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_GeneralDecode_mB52E0759A0B509FA1E379AB5956F4A352178BBDC (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GeneralDecode_mB52E0759A0B509FA1E379AB5956F4A352178BBDC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		V_0 = (bool)0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___xdata0;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		V_1 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)L_3));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = ___xdata0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		__this->set_tag_0((uint8_t)(((int32_t)((uint8_t)L_5))));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = ___xdata0;
		NullCheck(L_6);
		int64_t L_7 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_6);
		V_2 = L_7;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = ___xdata0;
		bool* L_9 = __this->get_address_of_isIndefiniteLength_11();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		int64_t L_10 = Asn1Util_DerLengthDecode_m7BFE197DAA477D66D530B5346E9ABDCE43DA3F02(L_8, (bool*)L_9, /*hidden argument*/NULL);
		__this->set_dataLength_2(L_10);
		int64_t L_11 = __this->get_dataLength_2();
		V_4 = (bool)((((int64_t)L_11) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		bool L_13 = V_0;
		V_5 = L_13;
		goto IL_0161;
	}

IL_004f:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = ___xdata0;
		NullCheck(L_14);
		int64_t L_15 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_14);
		V_3 = L_15;
		int64_t L_16 = V_3;
		int64_t L_17 = V_2;
		__this->set_lengthFieldBytes_3(((int64_t)il2cpp_codegen_subtract((int64_t)L_16, (int64_t)L_17)));
		int64_t L_18 = V_1;
		int64_t L_19 = __this->get_dataLength_2();
		int64_t L_20 = __this->get_lengthFieldBytes_3();
		V_6 = (bool)((((int64_t)L_18) < ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_20))))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_0081;
		}
	}
	{
		bool L_22 = V_0;
		V_5 = L_22;
		goto IL_0161;
	}

IL_0081:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_23 = Asn1Node_get_ParentNode_m85832D15C268C18D2F792A8FE01B6272E45ED122(__this, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_009c;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_24 = Asn1Node_get_ParentNode_m85832D15C268C18D2F792A8FE01B6272E45ED122(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		uint8_t L_25 = L_24->get_tag_0();
		G_B7_0 = ((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B7_0 = 1;
	}

IL_009d:
	{
		V_7 = (bool)G_B7_0;
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		uint8_t L_27 = __this->get_tag_0();
		if ((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)))) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		uint8_t L_28 = __this->get_tag_0();
		G_B11_0 = ((((int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)31)))) > ((int32_t)((int32_t)30)))? 1 : 0);
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B11_0 = 1;
	}

IL_00c0:
	{
		V_8 = (bool)G_B11_0;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00ce;
		}
	}
	{
		bool L_30 = V_0;
		V_5 = L_30;
		goto IL_0161;
	}

IL_00ce:
	{
	}

IL_00cf:
	{
		uint8_t L_31 = __this->get_tag_0();
		V_9 = (bool)((((int32_t)L_31) == ((int32_t)3))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_0131;
		}
	}
	{
		int64_t L_33 = __this->get_dataLength_2();
		V_10 = (bool)((((int64_t)L_33) < ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00f4;
		}
	}
	{
		bool L_35 = V_0;
		V_5 = L_35;
		goto IL_0161;
	}

IL_00f4:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_36 = ___xdata0;
		NullCheck(L_36);
		int32_t L_37 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_36);
		__this->set_unusedBits_6((uint8_t)(((int32_t)((uint8_t)L_37))));
		int64_t L_38 = __this->get_dataLength_2();
		if ((int64_t)(((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)(((int64_t)((int64_t)1)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_GeneralDecode_mB52E0759A0B509FA1E379AB5956F4A352178BBDC_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)(((int64_t)((int64_t)1))))))));
		__this->set_data_4(L_39);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_40 = ___xdata0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = __this->get_data_4();
		int64_t L_42 = __this->get_dataLength_2();
		NullCheck(L_40);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_42, (int64_t)(((int64_t)((int64_t)1)))))))));
		goto IL_015a;
	}

IL_0131:
	{
		int64_t L_43 = __this->get_dataLength_2();
		if ((int64_t)(L_43) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_GeneralDecode_mB52E0759A0B509FA1E379AB5956F4A352178BBDC_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_43)));
		__this->set_data_4(L_44);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_45 = ___xdata0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = __this->get_data_4();
		int64_t L_47 = __this->get_dataLength_2();
		NullCheck(L_45);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_45, L_46, 0, (((int32_t)((int32_t)L_47))));
	}

IL_015a:
	{
		V_0 = (bool)1;
		bool L_48 = V_0;
		V_5 = L_48;
		goto IL_0161;
	}

IL_0161:
	{
		bool L_49 = V_5;
		return L_49;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::ListDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_ListDecode_m0F1490667F35A8C8309852728025433C7F45AE11 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ListDecode_m0F1490667F35A8C8309852728025433C7F45AE11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	{
		V_0 = (bool)0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		V_1 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___xdata0;
			NullCheck(L_2);
			int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = ___xdata0;
			NullCheck(L_4);
			int64_t L_5 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_4);
			V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)L_5));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = ___xdata0;
			NullCheck(L_6);
			int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_6);
			__this->set_tag_0((uint8_t)(((int32_t)((uint8_t)L_7))));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = ___xdata0;
			NullCheck(L_8);
			int64_t L_9 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
			V_3 = L_9;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = ___xdata0;
			bool* L_11 = __this->get_address_of_isIndefiniteLength_11();
			IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
			int64_t L_12 = Asn1Util_DerLengthDecode_m7BFE197DAA477D66D530B5346E9ABDCE43DA3F02(L_10, (bool*)L_11, /*hidden argument*/NULL);
			__this->set_dataLength_2(L_12);
			int64_t L_13 = __this->get_dataLength_2();
			if ((((int64_t)L_13) < ((int64_t)(((int64_t)((int64_t)0))))))
			{
				goto IL_0054;
			}
		}

IL_0049:
		{
			int64_t L_14 = V_2;
			int64_t L_15 = __this->get_dataLength_2();
			G_B4_0 = ((((int64_t)L_14) < ((int64_t)L_15))? 1 : 0);
			goto IL_0055;
		}

IL_0054:
		{
			G_B4_0 = 1;
		}

IL_0055:
		{
			V_8 = (bool)G_B4_0;
			bool L_16 = V_8;
			if (!L_16)
			{
				goto IL_0064;
			}
		}

IL_005b:
		{
			bool L_17 = V_0;
			V_9 = L_17;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_0064:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_18 = ___xdata0;
			NullCheck(L_18);
			int64_t L_19 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_18);
			V_4 = L_19;
			int64_t L_20 = V_4;
			int64_t L_21 = V_3;
			__this->set_lengthFieldBytes_3(((int64_t)il2cpp_codegen_subtract((int64_t)L_20, (int64_t)L_21)));
			int64_t L_22 = __this->get_dataOffset_1();
			int64_t L_23 = __this->get_lengthFieldBytes_3();
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_23));
			uint8_t L_24 = __this->get_tag_0();
			V_10 = (bool)((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
			bool L_25 = V_10;
			if (!L_25)
			{
				goto IL_00bc;
			}
		}

IL_0097:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_26 = ___xdata0;
			NullCheck(L_26);
			int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_26);
			__this->set_unusedBits_6((uint8_t)(((int32_t)((uint8_t)L_27))));
			int64_t L_28 = __this->get_dataLength_2();
			__this->set_dataLength_2(((int64_t)il2cpp_codegen_subtract((int64_t)L_28, (int64_t)(((int64_t)((int64_t)1))))));
			int64_t L_29 = V_5;
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_29, (int64_t)(((int64_t)((int64_t)1)))));
		}

IL_00bc:
		{
			int64_t L_30 = __this->get_dataLength_2();
			V_11 = (bool)((((int32_t)((((int64_t)L_30) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_31 = V_11;
			if (!L_31)
			{
				goto IL_00d7;
			}
		}

IL_00cf:
		{
			bool L_32 = V_0;
			V_9 = L_32;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_00d7:
		{
			int64_t L_33 = __this->get_dataLength_2();
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_34 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
			MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938(L_34, (((int32_t)((int32_t)L_33))), /*hidden argument*/NULL);
			V_6 = L_34;
			int64_t L_35 = __this->get_dataLength_2();
			if ((int64_t)(L_35) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_ListDecode_m0F1490667F35A8C8309852728025433C7F45AE11_RuntimeMethod_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_35)));
			V_7 = L_36;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_37 = ___xdata0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = V_7;
			int64_t L_39 = __this->get_dataLength_2();
			NullCheck(L_37);
			VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)((int32_t)L_39))));
			uint8_t L_40 = __this->get_tag_0();
			V_12 = (bool)((((int32_t)L_40) == ((int32_t)3))? 1 : 0);
			bool L_41 = V_12;
			if (!L_41)
			{
				goto IL_0122;
			}
		}

IL_0113:
		{
			int64_t L_42 = __this->get_dataLength_2();
			__this->set_dataLength_2(((int64_t)il2cpp_codegen_add((int64_t)L_42, (int64_t)(((int64_t)((int64_t)1))))));
		}

IL_0122:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_43 = V_6;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = V_7;
			NullCheck(L_45);
			NullCheck(L_43);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_43, L_44, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_46 = V_6;
			NullCheck(L_46);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_46, (((int64_t)((int64_t)0))));
			goto IL_0190;
		}

IL_013d:
		{
			int64_t L_47 = V_5;
			Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_48 = (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 *)il2cpp_codegen_object_new(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664_il2cpp_TypeInfo_var);
			Asn1Node__ctor_m9844534C8D542B7057B56B95C7FA89F46D6A46BA(L_48, __this, L_47, /*hidden argument*/NULL);
			V_13 = L_48;
			Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_49 = V_13;
			bool L_50 = __this->get_parseEncapsulatedData_12();
			NullCheck(L_49);
			L_49->set_parseEncapsulatedData_12(L_50);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_51 = V_6;
			NullCheck(L_51);
			int64_t L_52 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_51);
			V_3 = L_52;
			Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_53 = V_13;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_54 = V_6;
			NullCheck(L_53);
			bool L_55 = Asn1Node_InternalLoadData_mD2CD808B332920AEC563C4B5ED25F22CAA9AA042(L_53, L_54, /*hidden argument*/NULL);
			V_14 = (bool)((((int32_t)L_55) == ((int32_t)0))? 1 : 0);
			bool L_56 = V_14;
			if (!L_56)
			{
				goto IL_0174;
			}
		}

IL_016f:
		{
			bool L_57 = V_0;
			V_9 = L_57;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_0174:
		{
			Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_58 = V_13;
			Asn1Node_AddChild_mCF97B7E4158691C1E666091BDA8A899F4207AED3(__this, L_58, /*hidden argument*/NULL);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_59 = V_6;
			NullCheck(L_59);
			int64_t L_60 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_59);
			V_4 = L_60;
			int64_t L_61 = V_5;
			int64_t L_62 = V_4;
			int64_t L_63 = V_3;
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_61, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_62, (int64_t)L_63))));
		}

IL_0190:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_64 = V_6;
			NullCheck(L_64);
			int64_t L_65 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_64);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_66 = V_6;
			NullCheck(L_66);
			int64_t L_67 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_66);
			V_15 = (bool)((((int64_t)L_65) < ((int64_t)L_67))? 1 : 0);
			bool L_68 = V_15;
			if (L_68)
			{
				goto IL_013d;
			}
		}

IL_01a6:
		{
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x1C9, FINALLY_01ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ab;
	}

FINALLY_01ab:
	{ // begin finally (depth: 1)
		{
			bool L_69 = V_0;
			V_16 = (bool)((((int32_t)L_69) == ((int32_t)0))? 1 : 0);
			bool L_70 = V_16;
			if (!L_70)
			{
				goto IL_01c7;
			}
		}

IL_01b6:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_71 = ___xdata0;
			int64_t L_72 = V_1;
			NullCheck(L_71);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_71, L_72);
			Asn1Node_ClearAll_m5718361F5C48B147A6F873357C7C98E7C45C01C5(__this, /*hidden argument*/NULL);
		}

IL_01c7:
		{
			IL2CPP_END_FINALLY(427)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(427)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1CE, IL_01ce)
		IL2CPP_JUMP_TBL(0x1C9, IL_01c9)
	}

IL_01c9:
	{
		bool L_73 = V_0;
		V_9 = L_73;
		goto IL_01ce;
	}

IL_01ce:
	{
		bool L_74 = V_9;
		return L_74;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::InternalLoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_InternalLoadData_mD2CD808B332920AEC563C4B5ED25F22CAA9AA042 (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B18_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B22_0 = 0;
	{
		V_0 = (bool)1;
		Asn1Node_ClearAll_m5718361F5C48B147A6F873357C7C98E7C45C01C5(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		V_2 = L_1;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___xdata0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_2);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_3)));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = ___xdata0;
		int64_t L_5 = V_2;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, L_5);
		uint8_t L_6 = V_1;
		V_3 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)));
		uint8_t L_7 = V_1;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)32))))
		{
			goto IL_0084;
		}
	}
	{
		bool L_8 = __this->get_parseEncapsulatedData_12();
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) == ((int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)27))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)24))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)25))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)22))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)19))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)16))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)17))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)20))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)28))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)12))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)21))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B18_0 = ((((int32_t)L_23) == ((int32_t)((int32_t)26)))? 1 : 0);
		goto IL_007f;
	}

IL_007e:
	{
		G_B18_0 = 1;
	}

IL_007f:
	{
		G_B20_0 = G_B18_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B20_0 = 0;
	}

IL_0082:
	{
		G_B22_0 = G_B20_0;
		goto IL_0085;
	}

IL_0084:
	{
		G_B22_0 = 1;
	}

IL_0085:
	{
		V_4 = (bool)G_B22_0;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00b5;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_25 = ___xdata0;
		bool L_26 = Asn1Node_ListDecode_m0F1490667F35A8C8309852728025433C7F45AE11(__this, L_25, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_28 = ___xdata0;
		bool L_29 = Asn1Node_GeneralDecode_mB52E0759A0B509FA1E379AB5956F4A352178BBDC(__this, L_28, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_00b1;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		goto IL_00c9;
	}

IL_00b5:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_31 = ___xdata0;
		bool L_32 = Asn1Node_GeneralDecode_mB52E0759A0B509FA1E379AB5956F4A352178BBDC(__this, L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00c8;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_00c8:
	{
	}

IL_00c9:
	{
		bool L_34 = V_0;
		V_8 = L_34;
		goto IL_00ce;
	}

IL_00ce:
	{
		bool L_35 = V_8;
		return L_35;
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
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser__ctor_m8CA8010706903D69C889638BE7715FE23290D714 (Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Parser__ctor_m8CA8010706903D69C889638BE7715FE23290D714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 *)il2cpp_codegen_object_new(Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664_il2cpp_TypeInfo_var);
		Asn1Node__ctor_m79EEA15084314869B9005F84E0BDAEB8323D7E9D(L_0, /*hidden argument*/NULL);
		__this->set_rootNode_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser_LoadData_mDA468A77F6F1CC015AD4BBCE30AD04CF89ECC12E (Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Parser_LoadData_mDA468A77F6F1CC015AD4BBCE30AD04CF89ECC12E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_0, (((int64_t)((int64_t)0))));
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_1 = __this->get_rootNode_1();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		NullCheck(L_1);
		bool L_3 = Asn1Node_LoadData_m12E54391FDE66476B59A6831192AADAF450F2DA2(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_5, _stringLiteralB89111EC34842EC45C03B81F4BDFBC7724B6905F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Asn1Parser_LoadData_mDA468A77F6F1CC015AD4BBCE30AD04CF89ECC12E_RuntimeMethod_var);
	}

IL_0029:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = ___stream0;
		NullCheck(L_6);
		int64_t L_7 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		if ((int64_t)(L_7) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Parser_LoadData_mDA468A77F6F1CC015AD4BBCE30AD04CF89ECC12E_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_7)));
		__this->set_rawData_0(L_8);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9 = ___stream0;
		NullCheck(L_9);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_9, (((int64_t)((int64_t)0))));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_rawData_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_rawData_0();
		NullCheck(L_12);
		NullCheck(L_10);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))));
		return;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::get_RootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * Asn1Parser_get_RootNode_mA35A65E633ABEA927373E56DC9A3DD869826A585 (Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * __this, const RuntimeMethod* method)
{
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_0 = NULL;
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = __this->get_rootNode_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_1 = V_0;
		return L_1;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeTextHeader(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeTextHeader_mB84271C146A881023B489C2F426E2BC9B3570379 (int32_t ___lineLen0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Parser_GetNodeTextHeader_mB84271C146A881023B489C2F426E2BC9B3570379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		String_t* L_1 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral61F9A6943D78A4154F6821755AA9A1C4A3E80717, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		int32_t L_3 = ___lineLen0;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_4 = Asn1Util_GenStr_m59983BB4DEA4E0F6EB009E069A40557B5155A815(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)10))), ((int32_t)61), /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_2, _stringLiteral4BAFCB89E7C61DD51CF32D48E1F883426E74C000, L_4, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		V_1 = L_6;
		goto IL_0032;
	}

IL_0032:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_ToString_m74355FB9216D0CA513F73C72A877E7E2834D635E (Asn1Parser_t29D55200D9034C397E7BA1C8C7EE8431E7AA0E2B * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = __this->get_rootNode_1();
		String_t* L_1 = Asn1Parser_GetNodeText_m7892A9D7B066C08E4FB404FDF361E22096B6425F(L_0, ((int32_t)100), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeText_m7892A9D7B066C08E4FB404FDF361E22096B6425F (Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___node0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___lineLen1;
		String_t* L_1 = Asn1Parser_GetNodeTextHeader_mB84271C146A881023B489C2F426E2BC9B3570379(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_3 = ___node0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_4 = ___node0;
		int32_t L_5 = ___lineLen1;
		NullCheck(L_3);
		String_t* L_6 = Asn1Node_GetText_mA2C27AFDB8F6610F12A0D64B76CDB7D591CF0E92(L_3, L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = V_0;
		V_1 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		String_t* L_9 = V_1;
		return L_9;
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
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::FormatString(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_FormatString_mBF08ABF06783CFC76B3574F44DD7F1D0E68A56CF (String_t* ___inStr0, int32_t ___lineLen1, int32_t ___groupLen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_FormatString_mBF08ABF06783CFC76B3574F44DD7F1D0E68A56CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___inStr0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)));
		V_0 = L_2;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_1 = 0;
		goto IL_007b;
	}

IL_001a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		String_t* L_6 = ___inStr0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)L_8);
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_4;
		int32_t L_12 = ___groupLen2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_13 = ___groupLen2;
		G_B4_0 = ((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = 0;
	}

IL_003f:
	{
		V_6 = (bool)G_B4_0;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)((int32_t)32));
		V_4 = 0;
	}

IL_0053:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = ___lineLen1;
		V_7 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_0076;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = V_0;
		int32_t L_22 = V_2;
		int32_t L_23 = L_22;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Il2CppChar)((int32_t)13));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = V_0;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)((int32_t)10));
		V_3 = 0;
	}

IL_0076:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_28 = V_1;
		String_t* L_29 = ___inStr0;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_8;
		if (L_31)
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_32 = V_0;
		String_t* L_33 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		String_t* L_34 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_35 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_34);
		String_t* L_36 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_34, L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		String_t* L_37 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_38 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = L_38;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_37);
		String_t* L_40 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_37, L_39, /*hidden argument*/NULL);
		V_5 = L_40;
		String_t* L_41 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_42 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = L_42;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)13));
		NullCheck(L_41);
		String_t* L_44 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_41, L_43, /*hidden argument*/NULL);
		V_5 = L_44;
		String_t* L_45 = V_5;
		V_9 = L_45;
		goto IL_00cf;
	}

IL_00cf:
	{
		String_t* L_46 = V_9;
		return L_46;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GenStr(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GenStr_m59983BB4DEA4E0F6EB009E069A40557B5155A815 (int32_t ___len0, Il2CppChar ___xch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_GenStr_m59983BB4DEA4E0F6EB009E069A40557B5155A815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = ___len0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0016;
	}

IL_000c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = V_0;
		int32_t L_3 = V_1;
		Il2CppChar L_4 = ___xch1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Il2CppChar)L_4);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = ___len0;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = V_0;
		String_t* L_10 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_0027;
	}

IL_0027:
	{
		String_t* L_11 = V_3;
		return L_11;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToLong(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_BytesToLong_m066A6C0D1BD5B722350EC3DA4DA97461EA49A646 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		V_1 = 0;
		goto IL_0017;
	}

IL_0008:
	{
		int64_t L_0 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_0<<(int32_t)8))|(int64_t)(((int64_t)((uint64_t)L_4)))));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bytes0;
		NullCheck(L_7);
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0008;
		}
	}
	{
		int64_t L_9 = V_0;
		V_3 = L_9;
		goto IL_0025;
	}

IL_0025:
	{
		int64_t L_10 = V_3;
		return L_10;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_BytesToString_m250C8D269AC48BA4125F4D3996E5B64B99CD36BB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_BytesToString_m250C8D269AC48BA4125F4D3996E5B64B99CD36BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) < ((int32_t)1))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = V_0;
		V_3 = L_3;
		goto IL_0075;
	}

IL_001b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		NullCheck(L_4);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		V_1 = L_5;
		V_4 = 0;
		V_5 = 0;
		goto IL_0050;
	}

IL_002c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = V_1;
		int32_t L_12 = V_5;
		int32_t L_13 = L_12;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___bytes0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)L_17);
	}

IL_0049:
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_19 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___bytes0;
		NullCheck(L_20);
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_002c;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = V_1;
		String_t* L_23 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		String_t* L_24 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_25 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_24);
		String_t* L_26 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		String_t* L_27 = V_0;
		V_3 = L_27;
		goto IL_0075;
	}

IL_0075:
	{
		String_t* L_28 = V_3;
		return L_28;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::ToHexString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		V_3 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0060;
	}

IL_0012:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), (int32_t)2)));
		V_0 = L_3;
		V_2 = 0;
		goto IL_004a;
	}

IL_0021:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = V_0;
		int32_t L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ((Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var))->get_hexDigits_0();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)((int32_t)L_11>>(int32_t)4));
		uint16_t L_13 = (uint16_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2))), (Il2CppChar)L_13);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = V_0;
		int32_t L_15 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ((Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var))->get_hexDigits_0();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int32_t)L_17&(int32_t)((int32_t)15)));
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)), (int32_t)1))), (Il2CppChar)L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_21 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___bytes0;
		NullCheck(L_22);
		V_5 = (bool)((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0021;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = V_0;
		String_t* L_25 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		goto IL_0060;
	}

IL_0060:
	{
		String_t* L_26 = V_4;
		return L_26;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::BytePrecision(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_BytePrecision_mEF80EC3FD265C832658C6CC63E2F06E994A0DADB (uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		V_0 = 4;
		goto IL_001d;
	}

IL_0005:
	{
		uint64_t L_0 = ___value0;
		int32_t L_1 = V_0;
		V_1 = (bool)((!(((uint64_t)((int64_t)((uint64_t)L_0>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), (int32_t)8))&(int32_t)((int32_t)63)))))) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0025;
	}

IL_0019:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_0005;
		}
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		V_3 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_7 = V_3;
		return L_7;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::DERLengthEncode(System.IO.Stream,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_DERLengthEncode_mEAAF6BFA9CF50BB1113FDA7D18326247CB59A8D5 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, uint64_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_DERLengthEncode_mEAAF6BFA9CF50BB1113FDA7D18326247CB59A8D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		uint64_t L_0 = ___length1;
		V_1 = (bool)((((int32_t)((!(((uint64_t)L_0) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)127)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___xdata0;
		uint64_t L_3 = ___length1;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(31 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (uint8_t)(((int32_t)((uint8_t)L_3))));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		goto IL_0068;
	}

IL_0021:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = ___xdata0;
		uint64_t L_6 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		int32_t L_7 = Asn1Util_BytePrecision_mEF80EC3FD265C832658C6CC63E2F06E994A0DADB(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< uint8_t >::Invoke(31 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_5, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_7|(int32_t)((int32_t)128)))))));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		uint64_t L_9 = ___length1;
		int32_t L_10 = Asn1Util_BytePrecision_mEF80EC3FD265C832658C6CC63E2F06E994A0DADB(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_005f;
	}

IL_0043:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = ___xdata0;
		uint64_t L_12 = ___length1;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		VirtActionInvoker1< uint8_t >::Invoke(31 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_11, (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_12>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), (int32_t)8))&(int32_t)((int32_t)63)))))))));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		V_3 = (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0043;
		}
	}
	{
	}

IL_0068:
	{
		int32_t L_18 = V_0;
		V_4 = L_18;
		goto IL_006d;
	}

IL_006d:
	{
		int32_t L_19 = V_4;
		return L_19;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::DerLengthDecode(System.IO.Stream,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_DerLengthDecode_m7BFE197DAA477D66D530B5346E9ABDCE43DA3F02 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, bool* ___isIndefiniteLength1, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	int64_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		bool* L_0 = ___isIndefiniteLength1;
		*((int8_t*)L_0) = (int8_t)0;
		V_0 = (((int64_t)((int64_t)0)));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___bt0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_2)));
		uint8_t L_3 = V_1;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_5 = V_1;
		V_0 = (((int64_t)((uint64_t)L_5)));
		goto IL_007d;
	}

IL_0024:
	{
		uint8_t L_6 = V_1;
		V_3 = (((int64_t)((int64_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)127))))));
		int64_t L_7 = V_3;
		V_4 = (bool)((((int64_t)L_7) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		bool* L_9 = ___isIndefiniteLength1;
		*((int8_t*)L_9) = (int8_t)1;
		V_5 = (((int64_t)((int64_t)((int32_t)-2))));
		goto IL_0082;
	}

IL_0041:
	{
		V_0 = (((int64_t)((int64_t)0)));
		goto IL_006c;
	}

IL_0046:
	{
		int64_t L_10 = V_0;
		V_6 = (bool)((((int64_t)((int64_t)((int64_t)L_10>>(int32_t)((int32_t)24)))) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		V_5 = (((int64_t)((int64_t)(-1))));
		goto IL_0082;
	}

IL_005c:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_12 = ___bt0;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_12);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_13)));
		int64_t L_14 = V_0;
		uint8_t L_15 = V_1;
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_14<<(int32_t)8))|(int64_t)(((int64_t)((uint64_t)L_15)))));
	}

IL_006c:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_17, (int64_t)(((int64_t)((int64_t)1)))));
		V_7 = (bool)((((int64_t)L_17) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_18 = V_7;
		if (L_18)
		{
			goto IL_0046;
		}
	}
	{
	}

IL_007d:
	{
		int64_t L_19 = V_0;
		V_5 = L_19;
		goto IL_0082;
	}

IL_0082:
	{
		int64_t L_20 = V_5;
		return L_20;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GetTagName(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GetTagName_mA48556C90F4F1D4CE6E57A4DF624B9C71E981BC8 (uint8_t ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_GetTagName_mA48556C90F4F1D4CE6E57A4DF624B9C71E981BC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		uint8_t L_0 = ___tag0;
		V_1 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)192)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0104;
		}
	}
	{
		uint8_t L_2 = ___tag0;
		V_3 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)192)));
		int32_t L_3 = V_3;
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)32))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_00de;
		}
	}
	{
		goto IL_0030;
	}

IL_0030:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)32))))
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00fe;
	}

IL_003d:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)64))))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)128))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_004e;
	}

IL_004e:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)192))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_00fe;
	}

IL_005b:
	{
		String_t* L_10 = V_0;
		uint8_t L_11 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_11&(int32_t)((int32_t)31)));
		String_t* L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_10, _stringLiteral16DEBA0A49D8FDF8FFD3E681909ACA71D8132580, L_12, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_00fe;
	}

IL_007e:
	{
		String_t* L_14 = V_0;
		uint8_t L_15 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_15&(int32_t)((int32_t)31)));
		String_t* L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_17 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_14, _stringLiteralDC3FA34132F5B79C1EC6AD3AAAC2C6A5B7F29E34, L_16, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_00fe;
	}

IL_009e:
	{
		String_t* L_18 = V_0;
		uint8_t L_19 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_19&(int32_t)((int32_t)31)));
		String_t* L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_21 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_18, _stringLiteralE91195DA6E39E9A4D6BB7DBF2BF8A45CF0FB0A42, L_20, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_00fe;
	}

IL_00be:
	{
		String_t* L_22 = V_0;
		uint8_t L_23 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_23&(int32_t)((int32_t)31)));
		String_t* L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_25 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_22, _stringLiteralF69C981860A19A82ADD9552E5DDAFA32BFD3D7B7, L_24, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00fe;
	}

IL_00de:
	{
		String_t* L_26 = V_0;
		uint8_t L_27 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)));
		String_t* L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_29 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_26, _stringLiteral859BD87B9776D9CE86B7C752B95409950D61EB08, L_28, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_29;
		goto IL_00fe;
	}

IL_00fe:
	{
		goto IL_0344;
	}

IL_0104:
	{
		uint8_t L_30 = ___tag0;
		V_6 = ((int32_t)((int32_t)L_30&(int32_t)((int32_t)31)));
		int32_t L_31 = V_6;
		V_5 = L_31;
		int32_t L_32 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0195;
			}
			case 1:
			{
				goto IL_01a6;
			}
			case 2:
			{
				goto IL_01b7;
			}
			case 3:
			{
				goto IL_01c8;
			}
			case 4:
			{
				goto IL_01d9;
			}
			case 5:
			{
				goto IL_01ea;
			}
			case 6:
			{
				goto IL_01fb;
			}
			case 7:
			{
				goto IL_021d;
			}
			case 8:
			{
				goto IL_022e;
			}
			case 9:
			{
				goto IL_023f;
			}
			case 10:
			{
				goto IL_0334;
			}
			case 11:
			{
				goto IL_0250;
			}
			case 12:
			{
				goto IL_020c;
			}
			case 13:
			{
				goto IL_0334;
			}
			case 14:
			{
				goto IL_0334;
			}
			case 15:
			{
				goto IL_0261;
			}
			case 16:
			{
				goto IL_0272;
			}
			case 17:
			{
				goto IL_0283;
			}
			case 18:
			{
				goto IL_0294;
			}
			case 19:
			{
				goto IL_02a5;
			}
			case 20:
			{
				goto IL_02b6;
			}
			case 21:
			{
				goto IL_02c4;
			}
			case 22:
			{
				goto IL_02d2;
			}
			case 23:
			{
				goto IL_02e0;
			}
			case 24:
			{
				goto IL_02ee;
			}
			case 25:
			{
				goto IL_02fc;
			}
			case 26:
			{
				goto IL_030a;
			}
			case 27:
			{
				goto IL_0318;
			}
			case 28:
			{
				goto IL_0334;
			}
			case 29:
			{
				goto IL_0326;
			}
		}
	}
	{
		goto IL_0334;
	}

IL_0195:
	{
		String_t* L_33 = V_0;
		String_t* L_34 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_33, _stringLiteralCF2AF9005B6B2A5DCC73C4E00CBE3F19D96687B4, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_0342;
	}

IL_01a6:
	{
		String_t* L_35 = V_0;
		String_t* L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_35, _stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6, /*hidden argument*/NULL);
		V_0 = L_36;
		goto IL_0342;
	}

IL_01b7:
	{
		String_t* L_37 = V_0;
		String_t* L_38 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_37, _stringLiteralBF403E6FC90C56524FFEE246E1374665DF60C2D6, /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_0342;
	}

IL_01c8:
	{
		String_t* L_39 = V_0;
		String_t* L_40 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_39, _stringLiteralB9DA3B4CA745F231A5F6D027DDCEE9158AC52CAE, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0342;
	}

IL_01d9:
	{
		String_t* L_41 = V_0;
		String_t* L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_41, _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B, /*hidden argument*/NULL);
		V_0 = L_42;
		goto IL_0342;
	}

IL_01ea:
	{
		String_t* L_43 = V_0;
		String_t* L_44 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_43, _stringLiteralCF61206F351943EEC77681D8FE9F32833CBE6444, /*hidden argument*/NULL);
		V_0 = L_44;
		goto IL_0342;
	}

IL_01fb:
	{
		String_t* L_45 = V_0;
		String_t* L_46 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_45, _stringLiteral9CBE6269D7D5D08B76852D89B90B601BAD02D7DD, /*hidden argument*/NULL);
		V_0 = L_46;
		goto IL_0342;
	}

IL_020c:
	{
		String_t* L_47 = V_0;
		String_t* L_48 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_47, _stringLiteral67E6D858EA0BE7F6F1158A0A3EA4E4946B21A283, /*hidden argument*/NULL);
		V_0 = L_48;
		goto IL_0342;
	}

IL_021d:
	{
		String_t* L_49 = V_0;
		String_t* L_50 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_49, _stringLiteral3C71631187881B6DAB198AF4B06C779471926174, /*hidden argument*/NULL);
		V_0 = L_50;
		goto IL_0342;
	}

IL_022e:
	{
		String_t* L_51 = V_0;
		String_t* L_52 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_51, _stringLiteralAC35AB7561A701D96BD51BC1F1EE072F2F9718C0, /*hidden argument*/NULL);
		V_0 = L_52;
		goto IL_0342;
	}

IL_023f:
	{
		String_t* L_53 = V_0;
		String_t* L_54 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_53, _stringLiteral79C59A0C4D87BBB64A0C537CC6FCEBF8DE14A269, /*hidden argument*/NULL);
		V_0 = L_54;
		goto IL_0342;
	}

IL_0250:
	{
		String_t* L_55 = V_0;
		String_t* L_56 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_55, _stringLiteralCBDD70ED42B3745921307A6AF5729CDF0C49B732, /*hidden argument*/NULL);
		V_0 = L_56;
		goto IL_0342;
	}

IL_0261:
	{
		String_t* L_57 = V_0;
		String_t* L_58 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_57, _stringLiteral0AC347CF826668C4F33A1CD7ADF5419BAAE73FE0, /*hidden argument*/NULL);
		V_0 = L_58;
		goto IL_0342;
	}

IL_0272:
	{
		String_t* L_59 = V_0;
		String_t* L_60 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_59, _stringLiteralADF3402AEC14A5C5A7E1E8A624F7B7F4D2123EA0, /*hidden argument*/NULL);
		V_0 = L_60;
		goto IL_0342;
	}

IL_0283:
	{
		String_t* L_61 = V_0;
		String_t* L_62 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_61, _stringLiteralF172F77C7E45F5898E6A62C11097CBEE26EBF4E1, /*hidden argument*/NULL);
		V_0 = L_62;
		goto IL_0342;
	}

IL_0294:
	{
		String_t* L_63 = V_0;
		String_t* L_64 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_63, _stringLiteral52D13D434A39B045A12B8CCE2D63CFFAFE1972CF, /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_0342;
	}

IL_02a5:
	{
		String_t* L_65 = V_0;
		String_t* L_66 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_65, _stringLiteral68E810E310A6E1368AC66300136C585E142E80BF, /*hidden argument*/NULL);
		V_0 = L_66;
		goto IL_0342;
	}

IL_02b6:
	{
		String_t* L_67 = V_0;
		String_t* L_68 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_67, _stringLiteralF7906DC491A0486A30D111F231D1624CA5B94C94, /*hidden argument*/NULL);
		V_0 = L_68;
		goto IL_0342;
	}

IL_02c4:
	{
		String_t* L_69 = V_0;
		String_t* L_70 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_69, _stringLiteralE1A854E69EA27FE94B3DD30F3C8F92D6E6560149, /*hidden argument*/NULL);
		V_0 = L_70;
		goto IL_0342;
	}

IL_02d2:
	{
		String_t* L_71 = V_0;
		String_t* L_72 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_71, _stringLiteralCEA206F53009B4409A8E1620933737D0F4D7E1B6, /*hidden argument*/NULL);
		V_0 = L_72;
		goto IL_0342;
	}

IL_02e0:
	{
		String_t* L_73 = V_0;
		String_t* L_74 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_73, _stringLiteralC3C83DB7DD412566438B355E6504DBB01A12F5E4, /*hidden argument*/NULL);
		V_0 = L_74;
		goto IL_0342;
	}

IL_02ee:
	{
		String_t* L_75 = V_0;
		String_t* L_76 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_75, _stringLiteral1FA2E7519891D1B744F973A073D6CE50874854C6, /*hidden argument*/NULL);
		V_0 = L_76;
		goto IL_0342;
	}

IL_02fc:
	{
		String_t* L_77 = V_0;
		String_t* L_78 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_77, _stringLiteral0524144B9F212F40BEC2750DD0C06E4159777384, /*hidden argument*/NULL);
		V_0 = L_78;
		goto IL_0342;
	}

IL_030a:
	{
		String_t* L_79 = V_0;
		String_t* L_80 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_79, _stringLiteral481CFA1B155F22067D8FEA989EB269E873B62B4F, /*hidden argument*/NULL);
		V_0 = L_80;
		goto IL_0342;
	}

IL_0318:
	{
		String_t* L_81 = V_0;
		String_t* L_82 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_81, _stringLiteral04E4C7E6115783DAF7E8E371EDC9AE581528EA78, /*hidden argument*/NULL);
		V_0 = L_82;
		goto IL_0342;
	}

IL_0326:
	{
		String_t* L_83 = V_0;
		String_t* L_84 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_83, _stringLiteral44D231DAD9D02BE301A8CF4FBCABD5DE1FDCFF54, /*hidden argument*/NULL);
		V_0 = L_84;
		goto IL_0342;
	}

IL_0334:
	{
		String_t* L_85 = V_0;
		String_t* L_86 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_85, _stringLiteralB562730CA6FCD749B7C84DE73BEBD292D954C70E, /*hidden argument*/NULL);
		V_0 = L_86;
		goto IL_0342;
	}

IL_0342:
	{
	}

IL_0344:
	{
		String_t* L_87 = V_0;
		V_7 = L_87;
		goto IL_0349;
	}

IL_0349:
	{
		String_t* L_88 = V_7;
		return L_88;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Util::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Util__cctor_mBD73789941107A4043D9AE7CE66E9207FF4995EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util__cctor_mBD73789941107A4043D9AE7CE66E9207FF4995EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t508511518024955758BBBAD83B676542F82346D7____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var))->set_hexDigits_0(L_1);
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
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Country()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_mC9FA2B2F8FDE66BD5A0C65CC011EBD2BE7F4C8C6 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCountryU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Country(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_m0638A330C82167ED195AFA5D310F5D4A22F54D75 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCountryU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Organization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_m95D7241D2FA3AACF8E88D69DD5C2467AAE2948BA (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Organization(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_m82DC2C65E1ACF8C1E63CAADEBBE25A647097C36C (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_OrganizationalUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_m159B960C7CD34B39E588DBB0BB00B6B078E7A0E6 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationalUnitU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_OrganizationalUnit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_m0EEB44D2747800797210C806A1AC6CCBBF1DE841 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationalUnitU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Dnq()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m6A97EB6F90268CAE08471360E930A6A30A67B5C6 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDnqU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Dnq(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_mC255697EA386755FDE16AD384CD68A5245955739 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDnqU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m6FE8F3AC1BA53B9CCAED0C3D5498D4169AAB5968 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_State(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m8CE5BE650E4934912466781BCC8C15D41EA09439 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_CommonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m6DFA7077D5D6F0210A394988D04D631CC978A8FA (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCommonNameU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_CommonName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_mBD35CD0F226C18CBC833FBEEF335756AADCF32E0 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCommonNameU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_SerialNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m18FB6593BB23A9A7574827E3C2C003C7CDFE2D57 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName__ctor_m910E3943DD9419738C9B91E6555927ED637309D0 (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DistinguishedName__ctor_m910E3943DD9419738C9B91E6555927ED637309D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_2 = NULL;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_3 = NULL;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_4 = NULL;
	Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * V_5 = NULL;
	String_t* V_6 = NULL;
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	uint32_t V_13 = 0;
	bool V_14 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___n0;
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_MaskedTag_mAF2F4B08D347C92F0ACAB5E1A6ED8C951293F195(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_02c2;
		}
	}
	{
		V_1 = 0;
		goto IL_02ae;
	}

IL_0021:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_3 = ___n0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_5 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_6 = V_2;
		NullCheck(L_6);
		uint8_t L_7 = Asn1Node_get_MaskedTag_mAF2F4B08D347C92F0ACAB5E1A6ED8C951293F195(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0043;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_8 = V_2;
		NullCheck(L_8);
		int64_t L_9 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_8, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)((((int64_t)L_9) == ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 1;
	}

IL_0044:
	{
		V_8 = (bool)G_B5_0;
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 * L_11 = (InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 *)il2cpp_codegen_object_new(InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m2E6CB3001473BD90B5B2DBEDFA035305C6EC4972(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, DistinguishedName__ctor_m910E3943DD9419738C9B91E6555927ED637309D0_RuntimeMethod_var);
	}

IL_0050:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_12 = V_2;
		NullCheck(L_12);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_13 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_12, 0, /*hidden argument*/NULL);
		V_2 = L_13;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_14 = V_2;
		NullCheck(L_14);
		uint8_t L_15 = Asn1Node_get_MaskedTag_mAF2F4B08D347C92F0ACAB5E1A6ED8C951293F195(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0071;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_16 = V_2;
		NullCheck(L_16);
		int64_t L_17 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_16, /*hidden argument*/NULL);
		G_B10_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0072;
	}

IL_0071:
	{
		G_B10_0 = 1;
	}

IL_0072:
	{
		V_9 = (bool)G_B10_0;
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 * L_19 = (InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 *)il2cpp_codegen_object_new(InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m2E6CB3001473BD90B5B2DBEDFA035305C6EC4972(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, DistinguishedName__ctor_m910E3943DD9419738C9B91E6555927ED637309D0_RuntimeMethod_var);
	}

IL_007e:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_20 = V_2;
		NullCheck(L_20);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_21 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_20, 0, /*hidden argument*/NULL);
		V_3 = L_21;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_22 = V_2;
		NullCheck(L_22);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_23 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_22, 1, /*hidden argument*/NULL);
		V_4 = L_23;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_24 = V_3;
		NullCheck(L_24);
		uint8_t L_25 = Asn1Node_get_MaskedTag_mAF2F4B08D347C92F0ACAB5E1A6ED8C951293F195(L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)6))))
		{
			goto IL_00b6;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_26 = V_4;
		NullCheck(L_26);
		uint8_t L_27 = Asn1Node_get_MaskedTag_mAF2F4B08D347C92F0ACAB5E1A6ED8C951293F195(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)19))))
		{
			goto IL_00b3;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_28 = V_4;
		NullCheck(L_28);
		uint8_t L_29 = Asn1Node_get_MaskedTag_mAF2F4B08D347C92F0ACAB5E1A6ED8C951293F195(L_28, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)((((int32_t)L_29) == ((int32_t)((int32_t)12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B16_0 = 0;
	}

IL_00b4:
	{
		G_B18_0 = G_B16_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B18_0 = 1;
	}

IL_00b7:
	{
		V_10 = (bool)G_B18_0;
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00c4;
		}
	}
	{
		InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 * L_31 = (InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 *)il2cpp_codegen_object_new(InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m2E6CB3001473BD90B5B2DBEDFA035305C6EC4972(L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, DistinguishedName__ctor_m910E3943DD9419738C9B91E6555927ED637309D0_RuntimeMethod_var);
	}

IL_00c4:
	{
		Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * L_32 = (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A *)il2cpp_codegen_object_new(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var);
		Oid__ctor_mCDCEFBFCC674003EC0227F8954F74F83B92E2D45(L_32, /*hidden argument*/NULL);
		V_5 = L_32;
		Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * L_33 = V_5;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_34 = V_3;
		NullCheck(L_34);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		String_t* L_36 = Oid_Decode_mFC72B43B421FC30686F15C9F9E58FC2E4F64D1DD(L_33, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_37 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_37, /*hidden argument*/NULL);
		V_7 = L_37;
		String_t* L_38 = V_6;
		V_12 = L_38;
		String_t* L_39 = V_12;
		V_11 = L_39;
		String_t* L_40 = V_11;
		if (!L_40)
		{
			goto IL_02a9;
		}
	}
	{
		String_t* L_41 = V_11;
		uint32_t L_42 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m47538F5CA668B1ADD49E10D41BC0796365278451(L_41, /*hidden argument*/NULL);
		V_13 = L_42;
		uint32_t L_43 = V_13;
		if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)184344010)))))
		{
			goto IL_012c;
		}
	}
	{
		uint32_t L_44 = V_13;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)134011153))))
		{
			goto IL_01af;
		}
	}
	{
		goto IL_0110;
	}

IL_0110:
	{
		uint32_t L_45 = V_13;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)167566391))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_011e;
	}

IL_011e:
	{
		uint32_t L_46 = V_13;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)184344010))))
		{
			goto IL_016d;
		}
	}
	{
		goto IL_02a9;
	}

IL_012c:
	{
		uint32_t L_47 = V_13;
		if ((!(((uint32_t)L_47) <= ((uint32_t)((int32_t)1208264641)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_48 = V_13;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)1191487022))))
		{
			goto IL_0199;
		}
	}
	{
		goto IL_0140;
	}

IL_0140:
	{
		uint32_t L_49 = V_13;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)1208264641))))
		{
			goto IL_0183;
		}
	}
	{
		goto IL_02a9;
	}

IL_014e:
	{
		uint32_t L_50 = V_13;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)-1207168042))))
		{
			goto IL_01db;
		}
	}
	{
		goto IL_015c;
	}

IL_015c:
	{
		uint32_t L_51 = V_13;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)-50542656))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_02a9;
	}

IL_016d:
	{
		String_t* L_52 = V_11;
		bool L_53 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_52, _stringLiteral453A07B8CC155ECBEB68D277EC848642FFB5F3B6, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0207;
		}
	}
	{
		goto IL_02a9;
	}

IL_0183:
	{
		String_t* L_54 = V_11;
		bool L_55 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_54, _stringLiteralDD381BE73F585C3796C220566E891E458F9D6290, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_0221;
		}
	}
	{
		goto IL_02a9;
	}

IL_0199:
	{
		String_t* L_56 = V_11;
		bool L_57 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_56, _stringLiteral99C134A36D015746C32203B98CC495F87311D9DC, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_0238;
		}
	}
	{
		goto IL_02a9;
	}

IL_01af:
	{
		String_t* L_58 = V_11;
		bool L_59 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_58, _stringLiteral94227CA8EB4252C21E39FE8CCB2B65A6D01D3CF1, /*hidden argument*/NULL);
		if (L_59)
		{
			goto IL_024f;
		}
	}
	{
		goto IL_02a9;
	}

IL_01c5:
	{
		String_t* L_60 = V_11;
		bool L_61 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_60, _stringLiteralF24BCEBD3BF54143DC34399B1E3AD4F93496E764, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_0266;
		}
	}
	{
		goto IL_02a9;
	}

IL_01db:
	{
		String_t* L_62 = V_11;
		bool L_63 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_62, _stringLiteral14D13302CA125B23FDC663B73325C42B8DA4C1EB, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_027b;
		}
	}
	{
		goto IL_02a9;
	}

IL_01f1:
	{
		String_t* L_64 = V_11;
		bool L_65 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_64, _stringLiteral1A7FC08E8EB016BAD5A8A8D7B3447DAD63E867BC, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_0292;
		}
	}
	{
		goto IL_02a9;
	}

IL_0207:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_66 = V_7;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_67 = V_4;
		NullCheck(L_67);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		String_t* L_69 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_66, L_68);
		DistinguishedName_set_Country_m0638A330C82167ED195AFA5D310F5D4A22F54D75_inline(__this, L_69, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0221:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_70 = V_7;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_71 = V_4;
		NullCheck(L_71);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		String_t* L_73 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_70, L_72);
		DistinguishedName_set_Organization_m82DC2C65E1ACF8C1E63CAADEBBE25A647097C36C_inline(__this, L_73, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0238:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_74 = V_7;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_75 = V_4;
		NullCheck(L_75);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_75, /*hidden argument*/NULL);
		NullCheck(L_74);
		String_t* L_77 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_74, L_76);
		DistinguishedName_set_OrganizationalUnit_m0EEB44D2747800797210C806A1AC6CCBBF1DE841_inline(__this, L_77, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_024f:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_78 = V_7;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_79 = V_4;
		NullCheck(L_79);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_79, /*hidden argument*/NULL);
		NullCheck(L_78);
		String_t* L_81 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_78, L_80);
		DistinguishedName_set_CommonName_mBD35CD0F226C18CBC833FBEEF335756AADCF32E0_inline(__this, L_81, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0266:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_82 = V_4;
		NullCheck(L_82);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_84 = Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F(L_83, /*hidden argument*/NULL);
		DistinguishedName_set_SerialNumber_m18FB6593BB23A9A7574827E3C2C003C7CDFE2D57_inline(__this, L_84, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_027b:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_85 = V_7;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_86 = V_4;
		NullCheck(L_86);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_87 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_86, /*hidden argument*/NULL);
		NullCheck(L_85);
		String_t* L_88 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_85, L_87);
		DistinguishedName_set_Dnq_mC255697EA386755FDE16AD384CD68A5245955739_inline(__this, L_88, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0292:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_89 = V_7;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_90 = V_4;
		NullCheck(L_90);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_91 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_90, /*hidden argument*/NULL);
		NullCheck(L_89);
		String_t* L_92 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_89, L_91);
		DistinguishedName_set_State_m8CE5BE650E4934912466781BCC8C15D41EA09439_inline(__this, L_92, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_02a9:
	{
		int32_t L_93 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_02ae:
	{
		int32_t L_94 = V_1;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_95 = ___n0;
		NullCheck(L_95);
		int64_t L_96 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_95, /*hidden argument*/NULL);
		V_14 = (bool)((((int64_t)(((int64_t)((int64_t)L_94)))) < ((int64_t)L_96))? 1 : 0);
		bool L_97 = V_14;
		if (L_97)
		{
			goto IL_0021;
		}
	}
	{
	}

IL_02c2:
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Security.DistinguishedName::Equals(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DistinguishedName_Equals_m5FC87F7E7A74EA22D2411175C8B32D70ADF93E3D (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * ___n20, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		String_t* L_0 = DistinguishedName_get_Organization_m95D7241D2FA3AACF8E88D69DD5C2467AAE2948BA_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_1 = ___n20;
		NullCheck(L_1);
		String_t* L_2 = DistinguishedName_get_Organization_m95D7241D2FA3AACF8E88D69DD5C2467AAE2948BA_inline(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_4 = DistinguishedName_get_OrganizationalUnit_m159B960C7CD34B39E588DBB0BB00B6B078E7A0E6_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_5 = ___n20;
		NullCheck(L_5);
		String_t* L_6 = DistinguishedName_get_OrganizationalUnit_m159B960C7CD34B39E588DBB0BB00B6B078E7A0E6_inline(L_5, /*hidden argument*/NULL);
		bool L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_8 = DistinguishedName_get_Dnq_m6A97EB6F90268CAE08471360E930A6A30A67B5C6_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_9 = ___n20;
		NullCheck(L_9);
		String_t* L_10 = DistinguishedName_get_Dnq_m6A97EB6F90268CAE08471360E930A6A30A67B5C6_inline(L_9, /*hidden argument*/NULL);
		bool L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_12 = DistinguishedName_get_Country_mC9FA2B2F8FDE66BD5A0C65CC011EBD2BE7F4C8C6_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_13 = ___n20;
		NullCheck(L_13);
		String_t* L_14 = DistinguishedName_get_Country_mC9FA2B2F8FDE66BD5A0C65CC011EBD2BE7F4C8C6_inline(L_13, /*hidden argument*/NULL);
		bool L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_16 = DistinguishedName_get_State_m6FE8F3AC1BA53B9CCAED0C3D5498D4169AAB5968_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_17 = ___n20;
		NullCheck(L_17);
		String_t* L_18 = DistinguishedName_get_State_m6FE8F3AC1BA53B9CCAED0C3D5498D4169AAB5968_inline(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_20 = DistinguishedName_get_CommonName_m6DFA7077D5D6F0210A394988D04D631CC978A8FA_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_21 = ___n20;
		NullCheck(L_21);
		String_t* L_22 = DistinguishedName_get_CommonName_m6DFA7077D5D6F0210A394988D04D631CC978A8FA_inline(L_21, /*hidden argument*/NULL);
		bool L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, L_22, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_23));
		goto IL_0074;
	}

IL_0073:
	{
		G_B7_0 = 0;
	}

IL_0074:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0077;
	}

IL_0077:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_ToString_m545AAD481F2D3E553A88B7A9AC64C82F4B3CC73E (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DistinguishedName_ToString_m545AAD481F2D3E553A88B7A9AC64C82F4B3CC73E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral31EFAEEDBC2BB686A5ABA0098A7A45FCE86FBD8A);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31EFAEEDBC2BB686A5ABA0098A7A45FCE86FBD8A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3 = DistinguishedName_get_CommonName_m6DFA7077D5D6F0210A394988D04D631CC978A8FA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralDCACA63FC238CCA8ED535F7BFAF590FC831D8832);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDCACA63FC238CCA8ED535F7BFAF590FC831D8832);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6 = DistinguishedName_get_Organization_m95D7241D2FA3AACF8E88D69DD5C2467AAE2948BA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralEFE5B4EE3917FFFE8F93D31E5E798F2A968F3FC6);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEFE5B4EE3917FFFE8F93D31E5E798F2A968F3FC6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		String_t* L_9 = DistinguishedName_get_OrganizationalUnit_m159B960C7CD34B39E588DBB0BB00B6B078E7A0E6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralADADD3B05013D84B886E96640AA7F89AF39D5AD6);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralADADD3B05013D84B886E96640AA7F89AF39D5AD6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		String_t* L_12 = DistinguishedName_get_Country_mC9FA2B2F8FDE66BD5A0C65CC011EBD2BE7F4C8C6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_12);
		String_t* L_13 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_11, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		String_t* L_14 = V_0;
		return L_14;
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
// System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPSecurityException__ctor_mB0C1A9E5D379E35649A4A0516681B7A2ECD1C45F (IAPSecurityException_tF28CC4FF2759C3C65EB896A7EDBE5038F47AD7AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPSecurityException__ctor_mB0C1A9E5D379E35649A4A0516681B7A2ECD1C45F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidPKCS7Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_mB0C1A9E5D379E35649A4A0516681B7A2ECD1C45F(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidRSAData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidRSAData__ctor_mE0A22B380E176EC4882678CD55CA3CA06EAA1EA4 (InvalidRSAData_tADEA09637201E4E28208AED7BE94E00ED6A08DCF * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_mB0C1A9E5D379E35649A4A0516681B7A2ECD1C45F(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidTimeFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidTimeFormat__ctor_m7E83CE4655D3DA168291422055FB383941DD6329 (InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_mB0C1A9E5D379E35649A4A0516681B7A2ECD1C45F(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidX509Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidX509Data__ctor_m2E6CB3001473BD90B5B2DBEDFA035305C6EC4972 (InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_mB0C1A9E5D379E35649A4A0516681B7A2ECD1C45F(__this, /*hidden argument*/NULL);
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
// System.String LipingShare.LCLib.Asn1Processor.Oid::GetOidName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_GetOidName_m64BFA3E74CFFFC1B22D401FA4D514E95B553E6E2 (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * __this, String_t* ___inOidStr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid_GetOidName_m64BFA3E74CFFFC1B22D401FA4D514E95B553E6E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var);
		StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * L_0 = ((Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var))->get_oidDictionary_0();
		V_0 = (bool)((((RuntimeObject*)(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * L_2 = (StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 *)il2cpp_codegen_object_new(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79_il2cpp_TypeInfo_var);
		StringDictionary__ctor_mEA16941AB5C9CDBEE3B0572E3FA74DD1CC0C8637(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var);
		((Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var))->set_oidDictionary_0(L_2);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var);
		StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * L_3 = ((Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var))->get_oidDictionary_0();
		String_t* L_4 = ___inOidStr0;
		NullCheck(L_3);
		String_t* L_5 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Collections.Specialized.StringDictionary::get_Item(System.String) */, L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_Decode_mFC72B43B421FC30686F15C9F9E58FC2E4F64D1DD (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid_Decode_mFC72B43B421FC30686F15C9F9E58FC2E4F64D1DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_2, (((int64_t)((int64_t)0))));
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_3 = V_0;
		String_t* L_4 = VirtFuncInvoker1< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, __this, L_3);
		V_1 = L_4;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_5);
		String_t* L_6 = V_1;
		V_2 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_Decode_m5F28AF607629C2F5DDC232B758DCA62E0B19A64B (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid_Decode_m5F28AF607629C2F5DDC232B758DCA62E0B19A64B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint8_t V_1 = 0x0;
	uint64_t V_2 = 0;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = (((int64_t)((int64_t)0)));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___bt0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_1)));
		String_t* L_2 = V_0;
		uint8_t L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_4 = Convert_ToString_m591519A05955A00954A48E0EA3F5CB9921C13969(((int32_t)((int32_t)L_3/(int32_t)((int32_t)40))), /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		uint8_t L_7 = V_1;
		String_t* L_8 = Convert_ToString_m591519A05955A00954A48E0EA3F5CB9921C13969(((int32_t)((int32_t)L_7%(int32_t)((int32_t)40))), /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0074;
	}

IL_0039:
	{
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = ___bt0;
		Oid_DecodeValue_mBB414431568A31EA30C8F3F0CD4E4D3E4AA02D60(__this, L_10, (uint64_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_11 = V_0;
		String_t* L_12 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_11, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0073;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005b;
		throw e;
	}

CATCH_005b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		Exception_t * L_14 = V_3;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
		String_t* L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralAE82977104FE357F4C1CE6D6A3DFD58AFEBFC641, L_15, /*hidden argument*/NULL);
		Exception_t * L_17 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, Oid_Decode_m5F28AF607629C2F5DDC232B758DCA62E0B19A64B_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0073:
	{
	}

IL_0074:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_18 = ___bt0;
		NullCheck(L_18);
		int64_t L_19 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_18);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_20 = ___bt0;
		NullCheck(L_20);
		int64_t L_21 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_20);
		V_4 = (bool)((((int64_t)L_19) < ((int64_t)L_21))? 1 : 0);
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_23 = V_0;
		V_5 = L_23;
		goto IL_008d;
	}

IL_008d:
	{
		String_t* L_24 = V_5;
		return L_24;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_mCDCEFBFCC674003EC0227F8954F74F83B92E2D45 (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Oid::DecodeValue(System.IO.Stream,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Oid_DecodeValue_mBB414431568A31EA30C8F3F0CD4E4D3E4AA02D60 (Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, uint64_t* ___v1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_1 = 0;
		uint64_t* L_0 = ___v1;
		*((int64_t*)L_0) = (int64_t)(((int64_t)((int64_t)0)));
		goto IL_0039;
	}

IL_0009:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___bt0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		V_0 = (uint8_t)(((int32_t)((uint8_t)L_2)));
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		uint64_t* L_4 = ___v1;
		uint64_t* L_5 = ___v1;
		int64_t L_6 = *((int64_t*)L_5);
		*((int64_t*)L_4) = (int64_t)((int64_t)((int64_t)L_6<<(int32_t)7));
		uint64_t* L_7 = ___v1;
		uint64_t* L_8 = ___v1;
		int64_t L_9 = *((int64_t*)L_8);
		uint8_t L_10 = V_0;
		*((int64_t*)L_7) = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)127))))))));
		uint8_t L_11 = V_0;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_1;
		V_3 = L_13;
		goto IL_003e;
	}

IL_0038:
	{
	}

IL_0039:
	{
		V_4 = (bool)1;
		goto IL_0009;
	}

IL_003e:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__cctor_mEF41427F722800580825DC2C2EC08F3CA35CD62E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid__cctor_mEF41427F722800580825DC2C2EC08F3CA35CD62E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var))->set_oidDictionary_0((StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 *)NULL);
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
// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * PKCS7_get_data_m8EBBE11EC901DB4FF92D79D8ECB982DE715D3326 (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method)
{
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = __this->get_U3CdataU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_data(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_set_data_mABE8F69F97003C334EDE181E18EE1180348FA21A (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___value0;
		__this->set_U3CdataU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::get_sinfos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * PKCS7_get_sinfos_m88CAE856FC4ECBBC097CC1A3AEBBDC8B5F2BCB64 (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method)
{
	{
		List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * L_0 = __this->get_U3CsinfosU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_sinfos(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_mCCC358356C118E5B7BF013786F1AE3BAF6E14582 (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * L_0 = ___value0;
		__this->set_U3CsinfosU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::get_certChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * PKCS7_get_certChain_m9C036C103D23CC2343A0C8D85D23DD565B34047A (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method)
{
	{
		List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * L_0 = __this->get_U3CcertChainU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_certChain(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_set_certChain_mD9945D73A4B674F01155552DB817D032D0CBCDB3 (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * L_0 = ___value0;
		__this->set_U3CcertChainU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7__ctor_m5EEB440B67F72876517278222CF895A6365698DB (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___node0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___node0;
		__this->set_root_0(L_0);
		PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::CheckStructure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7 (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_1 = NULL;
	int32_t V_2 = 0;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B35_0 = 0;
	{
		__this->set_validStructure_4((bool)0);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = __this->get_root_0();
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_002b;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_2 = __this->get_root_0();
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int64_t)L_3) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0253;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_5 = __this->get_root_0();
		NullCheck(L_5);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_6 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_7 = V_1;
		NullCheck(L_7);
		uint8_t L_8 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))) == ((uint32_t)6))))
		{
			goto IL_0060;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = Asn1Node_GetDataStr_m5328ED9958497CB67DF1A942B9EA8B4E72E1D4AC(L_9, (bool)0, /*hidden argument*/NULL);
		bool L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0061;
	}

IL_0060:
	{
		G_B7_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B7_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_13 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_RuntimeMethod_var);
	}

IL_006e:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_14 = __this->get_root_0();
		NullCheck(L_14);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_15 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_14, 1, /*hidden argument*/NULL);
		V_1 = L_15;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_16 = V_1;
		NullCheck(L_16);
		int64_t L_17 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int64_t)L_17) == ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0094;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_19 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_RuntimeMethod_var);
	}

IL_0094:
	{
		V_2 = 0;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_20 = V_1;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		NullCheck(L_20);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_23 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_20, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_24 = V_1;
		NullCheck(L_24);
		int64_t L_25 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_24, /*hidden argument*/NULL);
		if ((((int64_t)L_25) < ((int64_t)(((int64_t)((int64_t)4))))))
		{
			goto IL_00be;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_26 = V_1;
		NullCheck(L_26);
		uint8_t L_27 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_26, /*hidden argument*/NULL);
		G_B14_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bf;
	}

IL_00be:
	{
		G_B14_0 = 1;
	}

IL_00bf:
	{
		V_6 = (bool)G_B14_0;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00cb;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_29 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_RuntimeMethod_var);
	}

IL_00cb:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_30 = V_1;
		NullCheck(L_30);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_31 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_30, 0, /*hidden argument*/NULL);
		V_3 = L_31;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_32 = V_3;
		NullCheck(L_32);
		uint8_t L_33 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_32, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ee;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_35 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_RuntimeMethod_var);
	}

IL_00ee:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_36 = V_1;
		int32_t L_37 = V_2;
		int32_t L_38 = L_37;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		NullCheck(L_36);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_39 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_36, L_38, /*hidden argument*/NULL);
		V_3 = L_39;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_40 = V_3;
		NullCheck(L_40);
		uint8_t L_41 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_40, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_41&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_8;
		if (!L_42)
		{
			goto IL_0116;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_43 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_43, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_RuntimeMethod_var);
	}

IL_0116:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46 = L_45;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_47 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_44, L_46, /*hidden argument*/NULL);
		V_3 = L_47;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_48 = V_3;
		NullCheck(L_48);
		uint8_t L_49 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_48, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_49&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)16))))
		{
			goto IL_013e;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_50 = V_3;
		NullCheck(L_50);
		int64_t L_51 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_50, /*hidden argument*/NULL);
		G_B23_0 = ((((int32_t)((((int64_t)L_51) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B23_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B23_0;
		bool L_52 = V_9;
		if (!L_52)
		{
			goto IL_014b;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_53 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_53, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_RuntimeMethod_var);
	}

IL_014b:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_54 = V_3;
		NullCheck(L_54);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_55 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_54, 1, /*hidden argument*/NULL);
		NullCheck(L_55);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_56 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_55, 0, /*hidden argument*/NULL);
		PKCS7_set_data_mABE8F69F97003C334EDE181E18EE1180348FA21A_inline(__this, L_56, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_57 = V_1;
		NullCheck(L_57);
		int64_t L_58 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_57, /*hidden argument*/NULL);
		V_10 = (bool)((((int64_t)L_58) == ((int64_t)(((int64_t)((int64_t)5)))))? 1 : 0);
		bool L_59 = V_10;
		if (!L_59)
		{
			goto IL_01d6;
		}
	}
	{
		List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * L_60 = (List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 *)il2cpp_codegen_object_new(List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481_il2cpp_TypeInfo_var);
		List_1__ctor_mB1F38C244A118E92C82EA64BA8F70E0BAE23718C(L_60, /*hidden argument*/List_1__ctor_mB1F38C244A118E92C82EA64BA8F70E0BAE23718C_RuntimeMethod_var);
		PKCS7_set_certChain_mD9945D73A4B674F01155552DB817D032D0CBCDB3_inline(__this, L_60, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_61 = V_1;
		int32_t L_62 = V_2;
		int32_t L_63 = L_62;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		NullCheck(L_61);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_64 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_61, L_63, /*hidden argument*/NULL);
		V_3 = L_64;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_65 = V_3;
		NullCheck(L_65);
		int64_t L_66 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_65, /*hidden argument*/NULL);
		V_11 = (bool)((((int64_t)L_66) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_67 = V_11;
		if (!L_67)
		{
			goto IL_019e;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_68 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_RuntimeMethod_var);
	}

IL_019e:
	{
		V_12 = 0;
		goto IL_01c4;
	}

IL_01a3:
	{
		List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * L_69 = PKCS7_get_certChain_m9C036C103D23CC2343A0C8D85D23DD565B34047A_inline(__this, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_70 = V_3;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_72 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_70, L_71, /*hidden argument*/NULL);
		X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * L_73 = (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 *)il2cpp_codegen_object_new(X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28_il2cpp_TypeInfo_var);
		X509Cert__ctor_mCB3F5A0A6A1D26BF4A746BBD58C30435F8E21630(L_73, L_72, /*hidden argument*/NULL);
		NullCheck(L_69);
		List_1_Add_m81CFA3B02078BDC051E750D0EE5D41CC49277177(L_69, L_73, /*hidden argument*/List_1_Add_m81CFA3B02078BDC051E750D0EE5D41CC49277177_RuntimeMethod_var);
		int32_t L_74 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01c4:
	{
		int32_t L_75 = V_12;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_76 = V_3;
		NullCheck(L_76);
		int64_t L_77 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_76, /*hidden argument*/NULL);
		V_13 = (bool)((((int64_t)(((int64_t)((int64_t)L_75)))) < ((int64_t)L_77))? 1 : 0);
		bool L_78 = V_13;
		if (L_78)
		{
			goto IL_01a3;
		}
	}
	{
	}

IL_01d6:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_79 = V_1;
		int32_t L_80 = V_2;
		int32_t L_81 = L_80;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		NullCheck(L_79);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_82 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_79, L_81, /*hidden argument*/NULL);
		V_3 = L_82;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_83 = V_3;
		NullCheck(L_83);
		uint8_t L_84 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_83, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_84&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_01fb;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_85 = V_3;
		NullCheck(L_85);
		int64_t L_86 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_85, /*hidden argument*/NULL);
		G_B35_0 = ((((int64_t)L_86) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		goto IL_01fc;
	}

IL_01fb:
	{
		G_B35_0 = 1;
	}

IL_01fc:
	{
		V_14 = (bool)G_B35_0;
		bool L_87 = V_14;
		if (!L_87)
		{
			goto IL_0208;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_88 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_88, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, PKCS7_CheckStructure_m6678FEE91EDB341A1072500E3CA21976F0065DB7_RuntimeMethod_var);
	}

IL_0208:
	{
		List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * L_89 = (List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 *)il2cpp_codegen_object_new(List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9_il2cpp_TypeInfo_var);
		List_1__ctor_m2535283F8D938B1B1D70568F4EEEE6B37CDCEB3D(L_89, /*hidden argument*/List_1__ctor_m2535283F8D938B1B1D70568F4EEEE6B37CDCEB3D_RuntimeMethod_var);
		PKCS7_set_sinfos_mCCC358356C118E5B7BF013786F1AE3BAF6E14582_inline(__this, L_89, /*hidden argument*/NULL);
		V_15 = 0;
		goto IL_023a;
	}

IL_0219:
	{
		List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * L_90 = PKCS7_get_sinfos_m88CAE856FC4ECBBC097CC1A3AEBBDC8B5F2BCB64_inline(__this, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_91 = V_3;
		int32_t L_92 = V_15;
		NullCheck(L_91);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_93 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_91, L_92, /*hidden argument*/NULL);
		SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * L_94 = (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE *)il2cpp_codegen_object_new(SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE_il2cpp_TypeInfo_var);
		SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE(L_94, L_93, /*hidden argument*/NULL);
		NullCheck(L_90);
		List_1_Add_mAEADDA782F164A6F1B641FE03376CE5AF1406DC1(L_90, L_94, /*hidden argument*/List_1_Add_mAEADDA782F164A6F1B641FE03376CE5AF1406DC1_RuntimeMethod_var);
		int32_t L_95 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_023a:
	{
		int32_t L_96 = V_15;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_97 = V_3;
		NullCheck(L_97);
		int64_t L_98 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_97, /*hidden argument*/NULL);
		V_16 = (bool)((((int64_t)(((int64_t)((int64_t)L_96)))) < ((int64_t)L_98))? 1 : 0);
		bool L_99 = V_16;
		if (L_99)
		{
			goto IL_0219;
		}
	}
	{
		__this->set_validStructure_4((bool)1);
	}

IL_0253:
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
// System.Void UnityEngine.Purchasing.Security.RSAKey::set_rsa(System.Security.Cryptography.RSACryptoServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m361E788285F13CB50F490D89A0DC7B2C0AD37CD6 (RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * __this, RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * ___value0, const RuntimeMethod* method)
{
	{
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_0 = ___value0;
		__this->set_U3CrsaU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.RSAKey::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAKey__ctor_m2CECC89E16E1D6D2B25865E252ACB7E3CE737845 (RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___n0;
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_1 = RSAKey_ParseNode_m17EF7D0DF0929BB63DDA94F9D2D6F6677DE840AE(__this, L_0, /*hidden argument*/NULL);
		RSAKey_set_rsa_m361E788285F13CB50F490D89A0DC7B2C0AD37CD6_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * RSAKey_ParseNode_m17EF7D0DF0929BB63DDA94F9D2D6F6677DE840AE (RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RSAKey_ParseNode_m17EF7D0DF0929BB63DDA94F9D2D6F6677DE840AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * V_7 = NULL;
	RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * V_8 = NULL;
	int32_t G_B7_0 = 0;
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___n0;
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_2 = ___n0;
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_2, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_3) == ((uint64_t)(((int64_t)((int64_t)2)))))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_4 = ___n0;
		NullCheck(L_4);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_5 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_4, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint8_t L_6 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_7 = ___n0;
		NullCheck(L_7);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_8 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_9 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_8, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		uint8_t L_10 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)31)))) == ((uint32_t)6))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_11 = ___n0;
		NullCheck(L_11);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_12 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_11, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_13 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_12, 0, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = Asn1Node_GetDataStr_m5328ED9958497CB67DF1A942B9EA8B4E72E1D4AC(L_13, (bool)0, /*hidden argument*/NULL);
		bool L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral2A7F604AA53E605CA5A4D06ADF4F5C4B6FCBD8E8, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_16 = ___n0;
		NullCheck(L_16);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_17 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_16, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint8_t L_18 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_17, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)31)))) == ((int32_t)3))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B7_0 = 0;
	}

IL_0077:
	{
		V_0 = (bool)G_B7_0;
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_0101;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_20 = ___n0;
		NullCheck(L_20);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_21 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_20, 1, /*hidden argument*/NULL);
		NullCheck(L_21);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_22 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_21, 0, /*hidden argument*/NULL);
		V_1 = L_22;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_23 = V_1;
		NullCheck(L_23);
		int64_t L_24 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_23, /*hidden argument*/NULL);
		V_2 = (bool)((((int64_t)L_24) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0);
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_0100;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_26 = V_1;
		NullCheck(L_26);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_27 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_26, 0, /*hidden argument*/NULL);
		NullCheck(L_27);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_3;
		NullCheck(L_29);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))), (int32_t)1)));
		V_4 = L_30;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = V_3;
		NullCheck(L_33);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_31, 1, (RuntimeArray *)(RuntimeArray *)L_32, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_35 = Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A(L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_36 = V_1;
		NullCheck(L_36);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_37 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_36, 1, /*hidden argument*/NULL);
		NullCheck(L_37);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_37, /*hidden argument*/NULL);
		String_t* L_39 = Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A(L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_40 = (RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 *)il2cpp_codegen_object_new(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_m540359C328E1E9E9818A1192E34C74C986186B80(L_40, /*hidden argument*/NULL);
		V_7 = L_40;
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_41 = V_7;
		String_t* L_42 = V_5;
		String_t* L_43 = V_6;
		String_t* L_44 = RSAKey_ToXML_m1DC216979B522DB9F399914D33BD6BE0920E517D(__this, L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Security.Cryptography.AsymmetricAlgorithm::FromXmlString(System.String) */, L_41, L_44);
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_45 = V_7;
		V_8 = L_45;
		goto IL_0107;
	}

IL_0100:
	{
	}

IL_0101:
	{
		InvalidRSAData_tADEA09637201E4E28208AED7BE94E00ED6A08DCF * L_46 = (InvalidRSAData_tADEA09637201E4E28208AED7BE94E00ED6A08DCF *)il2cpp_codegen_object_new(InvalidRSAData_tADEA09637201E4E28208AED7BE94E00ED6A08DCF_il2cpp_TypeInfo_var);
		InvalidRSAData__ctor_mE0A22B380E176EC4882678CD55CA3CA06EAA1EA4(L_46, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, RSAKey_ParseNode_m17EF7D0DF0929BB63DDA94F9D2D6F6677DE840AE_RuntimeMethod_var);
	}

IL_0107:
	{
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_47 = V_8;
		return L_47;
	}
}
// System.String UnityEngine.Purchasing.Security.RSAKey::ToXML(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RSAKey_ToXML_m1DC216979B522DB9F399914D33BD6BE0920E517D (RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * __this, String_t* ___modulus0, String_t* ___exponent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RSAKey_ToXML_m1DC216979B522DB9F399914D33BD6BE0920E517D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3B764AA8712500B6779AEFF44B47B45F9ECF8039);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3B764AA8712500B6779AEFF44B47B45F9ECF8039);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3 = ___modulus0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralEBF60A7C62C7CF38BEB570C5B0AF43904FFCB6B8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEBF60A7C62C7CF38BEB570C5B0AF43904FFCB6B8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6 = ___exponent1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralBCED53E33A2D1B5B5E90E0B5DE86443E44FD452A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBCED53E33A2D1B5B5E90E0B5DE86443E44FD452A);
		String_t* L_8 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_9 = V_0;
		return L_9;
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
// System.Void LipingShare.LCLib.Asn1Processor.RelativeOid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelativeOid__ctor_mA1498861FAA241BA8D336EDDC7935944F0332087 (RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RelativeOid__ctor_mA1498861FAA241BA8D336EDDC7935944F0332087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t1D0D5A27CE856396504E8DB88AC074C8C044C26A_il2cpp_TypeInfo_var);
		Oid__ctor_mCDCEFBFCC674003EC0227F8954F74F83B92E2D45(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.RelativeOid::Decode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RelativeOid_Decode_m1989A236A74DA5F6A5C77B566A0B9F4ADEAD7FFB (RelativeOid_t3F942B00072A8505A613C77116B7E4F4C6349527 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RelativeOid_Decode_m1989A236A74DA5F6A5C77B566A0B9F4ADEAD7FFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = (((int64_t)((int64_t)0)));
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_000e:
	{
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___bt0;
			Oid_DecodeValue_mBB414431568A31EA30C8F3F0CD4E4D3E4AA02D60(__this, L_0, (uint64_t*)(&V_1), /*hidden argument*/NULL);
			bool L_1 = V_2;
			V_3 = L_1;
			bool L_2 = V_3;
			if (!L_2)
			{
				goto IL_002d;
			}
		}

IL_001f:
		{
			String_t* L_3 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_1), /*hidden argument*/NULL);
			V_0 = L_3;
			V_2 = (bool)0;
			goto IL_0042;
		}

IL_002d:
		{
			String_t* L_4 = V_0;
			String_t* L_5 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_1), /*hidden argument*/NULL);
			String_t* L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_5, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0042:
		{
			goto IL_005f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0045;
		throw e;
	}

CATCH_0045:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		Exception_t * L_7 = V_4;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		String_t* L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralAE82977104FE357F4C1CE6D6A3DFD58AFEBFC641, L_8, /*hidden argument*/NULL);
		Exception_t * L_10 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, RelativeOid_Decode_m1989A236A74DA5F6A5C77B566A0B9F4ADEAD7FFB_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_005f:
	{
	}

IL_0060:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = ___bt0;
		NullCheck(L_11);
		int64_t L_12 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_11);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_13 = ___bt0;
		NullCheck(L_13);
		int64_t L_14 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_13);
		V_5 = (bool)((((int64_t)L_12) < ((int64_t)L_14))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_16 = V_0;
		V_6 = L_16;
		goto IL_0079;
	}

IL_0079:
	{
		String_t* L_17 = V_6;
		return L_17;
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
// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_mB678DD487BFF5BE825571AE62D713E2167A47218 (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CVersionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_Version(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m5BF00F54855B27F5F3A2EF0BE1310BF7A493ADA3 (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_IssuerSerialNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_mA1FB0C559A229DF114C4C950649EB8B89BB43F5E (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CIssuerSerialNumberU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_EncryptedDigest(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_m13F02F1760D51368BEC7468DB4067CCCD57EF1FC (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CEncryptedDigestU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___n0;
		NullCheck(L_0);
		int64_t L_1 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int64_t)L_1) == ((int64_t)(((int64_t)((int64_t)5)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_3 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE_RuntimeMethod_var);
	}

IL_001f:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_4 = ___n0;
		NullCheck(L_4);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_5 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_6 = V_0;
		NullCheck(L_6);
		uint8_t L_7 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_9 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE_RuntimeMethod_var);
	}

IL_0040:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		SignerInfo_set_Version_m5BF00F54855B27F5F3A2EF0BE1310BF7A493ADA3_inline(__this, L_13, /*hidden argument*/NULL);
		int32_t L_14 = SignerInfo_get_Version_mB678DD487BFF5BE825571AE62D713E2167A47218_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		G_B7_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B7_0 = 1;
	}

IL_0069:
	{
		V_3 = (bool)G_B7_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		UnsupportedSignerInfoVersion_t03A6E710105BD3455AD4E1987AFA544FAEAA46FD * L_18 = (UnsupportedSignerInfoVersion_t03A6E710105BD3455AD4E1987AFA544FAEAA46FD *)il2cpp_codegen_object_new(UnsupportedSignerInfoVersion_t03A6E710105BD3455AD4E1987AFA544FAEAA46FD_il2cpp_TypeInfo_var);
		UnsupportedSignerInfoVersion__ctor_mA867D6FAA332DCD5E21E342B4697CD0FB8699A86(L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE_RuntimeMethod_var);
	}

IL_0073:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_19 = ___n0;
		NullCheck(L_19);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_20 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_19, 1, /*hidden argument*/NULL);
		V_0 = L_20;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_21 = V_0;
		NullCheck(L_21);
		uint8_t L_22 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_21, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0097;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_23, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)((((int64_t)L_24) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0098;
	}

IL_0097:
	{
		G_B12_0 = 1;
	}

IL_0098:
	{
		V_4 = (bool)G_B12_0;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00a4;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_26 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE_RuntimeMethod_var);
	}

IL_00a4:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_27 = V_0;
		NullCheck(L_27);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_28 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_27, 1, /*hidden argument*/NULL);
		V_0 = L_28;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_29 = V_0;
		NullCheck(L_29);
		uint8_t L_30 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_29, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_32 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE_RuntimeMethod_var);
	}

IL_00c7:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_33 = V_0;
		NullCheck(L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_35 = Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F(L_34, /*hidden argument*/NULL);
		SignerInfo_set_IssuerSerialNumber_mA1FB0C559A229DF114C4C950649EB8B89BB43F5E_inline(__this, L_35, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_36 = ___n0;
		NullCheck(L_36);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_37 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_36, 4, /*hidden argument*/NULL);
		V_0 = L_37;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_38 = V_0;
		NullCheck(L_38);
		uint8_t L_39 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_38, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)31)))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_00fc;
		}
	}
	{
		InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E * L_41 = (InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E *)il2cpp_codegen_object_new(InvalidPKCS7Data_tB5E2AD0C172FF2C48F1FEB32D2060FE44401723E_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m9944C2E0AD1A24ACDBD6901DBA96C406290A441D(L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, SignerInfo__ctor_m071250AD705787B261BC0769D463D7635B537DAE_RuntimeMethod_var);
	}

IL_00fc:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_42 = V_0;
		NullCheck(L_42);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_42, /*hidden argument*/NULL);
		SignerInfo_set_EncryptedDigest_m13F02F1760D51368BEC7468DB4067CCCD57EF1FC_inline(__this, L_43, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedSignerInfoVersion__ctor_mA867D6FAA332DCD5E21E342B4697CD0FB8699A86 (UnsupportedSignerInfoVersion_t03A6E710105BD3455AD4E1987AFA544FAEAA46FD * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_mB0C1A9E5D379E35649A4A0516681B7A2ECD1C45F(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SerialNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m01CACAE2D814D694A4BFE1C7641577A3A565A5FF (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidAfter(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_mACA3E2EB87B91CD69E416B297BF257543301FBC7 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CValidAfterU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidBefore(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_m07FA460AFB01790294999B502B6568699851DB04 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CValidBeforeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_PubKey(UnityEngine.Purchasing.Security.RSAKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_mD5612BE808EA9BA8EAFBC233FBD3CBB88FD691D8 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * ___value0, const RuntimeMethod* method)
{
	{
		RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * L_0 = ___value0;
		__this->set_U3CPubKeyU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SelfSigned(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_mE20C044249195BFD084C19E0FDDAE2B3E2FD5FC6 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSelfSignedU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Subject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * X509Cert_get_Subject_m0D7C63424EBE78DEFE12EA7A1BF0A32DEA236CD0 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_0 = __this->get_U3CSubjectU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Subject(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_Subject_m7B866ABCCA5B3E3810E1A055F5B93CEA093D0C25 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_0 = ___value0;
		__this->set_U3CSubjectU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Issuer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * X509Cert_get_Issuer_m3EC695CFA41B1D827035DBB09D11E62402E1BC67 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_0 = __this->get_U3CIssuerU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Issuer(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_m179D8CB454BE170E28C9142EA6611A264F18473E (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_0 = ___value0;
		__this->set_U3CIssuerU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Signature(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_Signature_mDBFF199821BAABC954E73F29B3119FE885AC2EAB (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___value0;
		__this->set_U3CSignatureU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert__ctor_mCB3F5A0A6A1D26BF4A746BBD58C30435F8E21630 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___n0;
		X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_0 = NULL;
	Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___root0;
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001d;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_2 = ___root0;
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int64_t)L_3) == ((int64_t)(((int64_t)((int64_t)3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 * L_5 = (InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 *)il2cpp_codegen_object_new(InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m2E6CB3001473BD90B5B2DBEDFA035305C6EC4972(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71_RuntimeMethod_var);
	}

IL_0028:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_6 = ___root0;
		NullCheck(L_6);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_7 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_6, 0, /*hidden argument*/NULL);
		__this->set_TbsCertificate_7(L_7);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_8 = __this->get_TbsCertificate_7();
		NullCheck(L_8);
		int64_t L_9 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_8, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)L_9) < ((int64_t)(((int64_t)((int64_t)7)))))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 * L_11 = (InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 *)il2cpp_codegen_object_new(InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m2E6CB3001473BD90B5B2DBEDFA035305C6EC4972(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71_RuntimeMethod_var);
	}

IL_004e:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_12 = __this->get_TbsCertificate_7();
		NullCheck(L_12);
		int64_t L_13 = Asn1Node_get_DataLength_mF657BA3880B10E817C4B44D047B56E44BC1AF20A(L_12, /*hidden argument*/NULL);
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)(((int64_t)((int64_t)4)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)(((int64_t)((int64_t)4))))))));
		__this->set_rawTBSCertificate_9(L_14);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_15 = ___root0;
		NullCheck(L_15);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_15, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_rawTBSCertificate_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_rawTBSCertificate_9();
		NullCheck(L_18);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_16, 0, (RuntimeArray *)(RuntimeArray *)L_17, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))), /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_19 = __this->get_TbsCertificate_7();
		NullCheck(L_19);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_20 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_19, 1, /*hidden argument*/NULL);
		V_0 = L_20;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_21 = V_0;
		NullCheck(L_21);
		uint8_t L_22 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_21, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00ac;
		}
	}
	{
		InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 * L_24 = (InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 *)il2cpp_codegen_object_new(InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m2E6CB3001473BD90B5B2DBEDFA035305C6EC4972(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71_RuntimeMethod_var);
	}

IL_00ac:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_25 = V_0;
		NullCheck(L_25);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t84CCC0AA75D2742AE356E8BA6B3DC68A970FAFD1_il2cpp_TypeInfo_var);
		String_t* L_27 = Asn1Util_ToHexString_m8118347C0EB069002D68B4A6F025516E0459446F(L_26, /*hidden argument*/NULL);
		X509Cert_set_SerialNumber_m01CACAE2D814D694A4BFE1C7641577A3A565A5FF_inline(__this, L_27, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_28 = __this->get_TbsCertificate_7();
		NullCheck(L_28);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_29 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_28, 3, /*hidden argument*/NULL);
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_30 = (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 *)il2cpp_codegen_object_new(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453_il2cpp_TypeInfo_var);
		DistinguishedName__ctor_m910E3943DD9419738C9B91E6555927ED637309D0(L_30, L_29, /*hidden argument*/NULL);
		X509Cert_set_Issuer_m179D8CB454BE170E28C9142EA6611A264F18473E_inline(__this, L_30, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_31 = __this->get_TbsCertificate_7();
		NullCheck(L_31);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_32 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_31, 5, /*hidden argument*/NULL);
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_33 = (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 *)il2cpp_codegen_object_new(DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453_il2cpp_TypeInfo_var);
		DistinguishedName__ctor_m910E3943DD9419738C9B91E6555927ED637309D0(L_33, L_32, /*hidden argument*/NULL);
		X509Cert_set_Subject_m7B866ABCCA5B3E3810E1A055F5B93CEA093D0C25_inline(__this, L_33, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_34 = __this->get_TbsCertificate_7();
		NullCheck(L_34);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_35 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_34, 4, /*hidden argument*/NULL);
		V_1 = L_35;
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_36 = V_1;
		NullCheck(L_36);
		uint8_t L_37 = Asn1Node_get_Tag_mD5E6131A23DB932E76C8FC472A3828E6E63847A7(L_36, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0117;
		}
	}
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_38 = V_1;
		NullCheck(L_38);
		int64_t L_39 = Asn1Node_get_ChildNodeCount_m55FE6AEEF3139560FB904139147063B911E8EC3F(L_38, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)((((int64_t)L_39) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0118;
	}

IL_0117:
	{
		G_B12_0 = 1;
	}

IL_0118:
	{
		V_5 = (bool)G_B12_0;
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_0124;
		}
	}
	{
		InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 * L_41 = (InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627 *)il2cpp_codegen_object_new(InvalidX509Data_tA61699654AE128576ACB0925B51848FE1AFE8627_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m2E6CB3001473BD90B5B2DBEDFA035305C6EC4972(L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, X509Cert_ParseNode_m0B2233DD883F66F224EBFA05BFD40EF2DBE24A71_RuntimeMethod_var);
	}

IL_0124:
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_42 = V_1;
		NullCheck(L_42);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_43 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_42, 0, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_44 = X509Cert_ParseTime_m4A3481A154EC5A21A6A927E5A0D406B4DD8156B5(__this, L_43, /*hidden argument*/NULL);
		X509Cert_set_ValidAfter_mACA3E2EB87B91CD69E416B297BF257543301FBC7_inline(__this, L_44, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_45 = V_1;
		NullCheck(L_45);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_46 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_45, 1, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_47 = X509Cert_ParseTime_m4A3481A154EC5A21A6A927E5A0D406B4DD8156B5(__this, L_46, /*hidden argument*/NULL);
		X509Cert_set_ValidBefore_m07FA460AFB01790294999B502B6568699851DB04_inline(__this, L_47, /*hidden argument*/NULL);
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_48 = X509Cert_get_Subject_m0D7C63424EBE78DEFE12EA7A1BF0A32DEA236CD0_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_49 = X509Cert_get_Issuer_m3EC695CFA41B1D827035DBB09D11E62402E1BC67_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		bool L_50 = DistinguishedName_Equals_m5FC87F7E7A74EA22D2411175C8B32D70ADF93E3D(L_48, L_49, /*hidden argument*/NULL);
		X509Cert_set_SelfSigned_mE20C044249195BFD084C19E0FDDAE2B3E2FD5FC6_inline(__this, L_50, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_51 = __this->get_TbsCertificate_7();
		NullCheck(L_51);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_52 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_51, 6, /*hidden argument*/NULL);
		RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * L_53 = (RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 *)il2cpp_codegen_object_new(RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1_il2cpp_TypeInfo_var);
		RSAKey__ctor_m2CECC89E16E1D6D2B25865E252ACB7E3CE737845(L_53, L_52, /*hidden argument*/NULL);
		X509Cert_set_PubKey_mD5612BE808EA9BA8EAFBC233FBD3CBB88FD691D8_inline(__this, L_53, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_54 = ___root0;
		NullCheck(L_54);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_55 = Asn1Node_GetChildNode_mFA09A616A84D4D8563F8BEB50CC3FEA8D60816D2(L_54, 2, /*hidden argument*/NULL);
		X509Cert_set_Signature_mDBFF199821BAABC954E73F29B3119FE885AC2EAB_inline(__this, L_55, /*hidden argument*/NULL);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.X509Cert::ParseTime(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  X509Cert_ParseTime_m4A3481A154EC5A21A6A927E5A0D406B4DD8156B5 (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Cert_ParseTime_m4A3481A154EC5A21A6A927E5A0D406B4DD8156B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B3_0 = 0;
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_0, /*hidden argument*/NULL);
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_1 = ___n0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = Asn1Node_get_Data_mDE787F019B0659DDEFBA5720A2C93F478937AB34(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_7) == ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_8 = (bool)G_B3_0;
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969 * L_9 = (InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969 *)il2cpp_codegen_object_new(InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969_il2cpp_TypeInfo_var);
		InvalidTimeFormat__ctor_m7E83CE4655D3DA168291422055FB383941DD6329(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, X509Cert_ParseTime_m4A3481A154EC5A21A6A927E5A0D406B4DD8156B5_RuntimeMethod_var);
	}

IL_0038:
	{
		String_t* L_10 = V_0;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Il2CppChar L_13 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)((int32_t)90)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969 * L_15 = (InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969 *)il2cpp_codegen_object_new(InvalidTimeFormat_t06A20D0BB083A4645AFEA08C6EF1C3FC4EB2A969_il2cpp_TypeInfo_var);
		InvalidTimeFormat__ctor_m7E83CE4655D3DA168291422055FB383941DD6329(L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, X509Cert_ParseTime_m4A3481A154EC5A21A6A927E5A0D406B4DD8156B5_RuntimeMethod_var);
	}

IL_0059:
	{
		V_1 = 0;
		V_2 = 0;
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_17) == ((int32_t)((int32_t)13)))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_19, 0, 2, /*hidden argument*/NULL);
		int32_t L_21 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		int32_t L_22 = V_2;
		V_11 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)((int32_t)50)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_11;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)((int32_t)1900)));
		goto IL_00a7;
	}

IL_0094:
	{
		int32_t L_25 = V_2;
		V_12 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)50)))? 1 : 0);
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)((int32_t)2000)));
	}

IL_00a7:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)2));
		goto IL_00c2;
	}

IL_00ae:
	{
		String_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_29, 0, 4, /*hidden argument*/NULL);
		int32_t L_31 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)4));
	}

IL_00c2:
	{
		String_t* L_33 = V_0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		String_t* L_35 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_33, L_34, 2, /*hidden argument*/NULL);
		int32_t L_36 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)2));
		String_t* L_38 = V_0;
		int32_t L_39 = V_1;
		NullCheck(L_38);
		String_t* L_40 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_38, L_39, 2, /*hidden argument*/NULL);
		int32_t L_41 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)2));
		String_t* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		String_t* L_45 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_43, L_44, 2, /*hidden argument*/NULL);
		int32_t L_46 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_45, /*hidden argument*/NULL);
		V_5 = L_46;
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		String_t* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		String_t* L_50 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_48, L_49, 2, /*hidden argument*/NULL);
		int32_t L_51 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_50, /*hidden argument*/NULL);
		V_6 = L_51;
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)2));
		String_t* L_53 = V_0;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		String_t* L_55 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_53, L_54, 2, /*hidden argument*/NULL);
		int32_t L_56 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_55, /*hidden argument*/NULL);
		V_7 = L_56;
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)2));
		int32_t L_58 = V_2;
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		int32_t L_61 = V_5;
		int32_t L_62 = V_6;
		int32_t L_63 = V_7;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_64;
		memset((&L_64), 0, sizeof(L_64));
		DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA((&L_64), L_58, L_59, L_60, L_61, L_62, L_63, 1, /*hidden argument*/NULL);
		V_13 = L_64;
		goto IL_0134;
	}

IL_0134:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_65 = V_13;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * PKCS7_get_data_m8EBBE11EC901DB4FF92D79D8ECB982DE715D3326_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method)
{
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = __this->get_U3CdataU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m6561592B6FBE809B47899650A207BA96B916D61C_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CbundleIDU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_m75C5390EC8397E38978C9D688B17E56A545EAA91_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CappVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m44BF5D351DB3A4C3E698D5E4108FE403FA7853FE_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CopaqueU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_mF63C36B698308941BEB274336EF6F6FFE2B61E1C_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3ChashU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m37AE8CDA68E4BA8D3B6A9DF15DD9BB9385DB4A66_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CreceiptCreationDateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_m1627AB08A0AF936F109A69C6C29CBBB4D382FA59_inline (AppleReceipt_t78A208C52F77C14A58F5ACA800ECE1980BCCC324 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalApplicationVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_m2EAA0153A1FDEE715C90F799EFA47E48FE549D6C_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CquantityU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_m98350C755435CD9E203B9AE832332B6245168C73_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CproductIDU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_mC642184908FA49D05B9A442009B023BB0F648050_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_m6E8E61311BF290CF248B99C0A91DEEF27D0143EB_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m563CBE7F54F780C3FDC4FC25C6313F848A801425_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CpurchaseDateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_mF49A495CF6E1A57567F611D9509FD9DB04469E1F_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CoriginalPurchaseDateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_mFC7CE7B1F3C0FC996200C241297E0C6E9B58930F_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_m21B700CA0D28763CF093BACEACB24EC65DC12052_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CcancellationDateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_mEE30EBD99085BE2C1630CC2C9B4D2170FBFA8DD6_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CproductTypeU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m2894236F69C97AA9E32017BBDB3133516FCA5E87_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisFreeTrialU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m1E9120512498D69A2E823B120065D104149F0149_inline (AppleInAppPurchaseReceipt_tEFE3C09994B561845C8D146A72F3050BE8F8698D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_m0638A330C82167ED195AFA5D310F5D4A22F54D75_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCountryU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_m82DC2C65E1ACF8C1E63CAADEBBE25A647097C36C_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_m0EEB44D2747800797210C806A1AC6CCBBF1DE841_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationalUnitU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_mBD35CD0F226C18CBC833FBEEF335756AADCF32E0_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCommonNameU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m18FB6593BB23A9A7574827E3C2C003C7CDFE2D57_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_mC255697EA386755FDE16AD384CD68A5245955739_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDnqU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m8CE5BE650E4934912466781BCC8C15D41EA09439_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_m95D7241D2FA3AACF8E88D69DD5C2467AAE2948BA_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_m159B960C7CD34B39E588DBB0BB00B6B078E7A0E6_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationalUnitU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m6A97EB6F90268CAE08471360E930A6A30A67B5C6_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDnqU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_mC9FA2B2F8FDE66BD5A0C65CC011EBD2BE7F4C8C6_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCountryU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m6FE8F3AC1BA53B9CCAED0C3D5498D4169AAB5968_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m6DFA7077D5D6F0210A394988D04D631CC978A8FA_inline (DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCommonNameU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_data_mABE8F69F97003C334EDE181E18EE1180348FA21A_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___value0;
		__this->set_U3CdataU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_certChain_mD9945D73A4B674F01155552DB817D032D0CBCDB3_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * L_0 = ___value0;
		__this->set_U3CcertChainU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * PKCS7_get_certChain_m9C036C103D23CC2343A0C8D85D23DD565B34047A_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method)
{
	{
		List_1_tB4788A7BEC9B3EEEEE544B5C63D76A075A8DD481 * L_0 = __this->get_U3CcertChainU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_mCCC358356C118E5B7BF013786F1AE3BAF6E14582_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * L_0 = ___value0;
		__this->set_U3CsinfosU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * PKCS7_get_sinfos_m88CAE856FC4ECBBC097CC1A3AEBBDC8B5F2BCB64_inline (PKCS7_t619CA2FF029C62078D6E350D5E1FDC4CD1FBB04B * __this, const RuntimeMethod* method)
{
	{
		List_1_tC5B86D3357A59722CCA2A29D9D6E5B76864C69F9 * L_0 = __this->get_U3CsinfosU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m361E788285F13CB50F490D89A0DC7B2C0AD37CD6_inline (RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * __this, RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * ___value0, const RuntimeMethod* method)
{
	{
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_0 = ___value0;
		__this->set_U3CrsaU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m5BF00F54855B27F5F3A2EF0BE1310BF7A493ADA3_inline (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_mB678DD487BFF5BE825571AE62D713E2167A47218_inline (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CVersionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_mA1FB0C559A229DF114C4C950649EB8B89BB43F5E_inline (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CIssuerSerialNumberU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_m13F02F1760D51368BEC7468DB4067CCCD57EF1FC_inline (SignerInfo_tED1E47D7A61299B74825FF4098A5F859854C36BE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CEncryptedDigestU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m01CACAE2D814D694A4BFE1C7641577A3A565A5FF_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_m179D8CB454BE170E28C9142EA6611A264F18473E_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_0 = ___value0;
		__this->set_U3CIssuerU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Subject_m7B866ABCCA5B3E3810E1A055F5B93CEA093D0C25_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_0 = ___value0;
		__this->set_U3CSubjectU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_mACA3E2EB87B91CD69E416B297BF257543301FBC7_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CValidAfterU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_m07FA460AFB01790294999B502B6568699851DB04_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CValidBeforeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * X509Cert_get_Subject_m0D7C63424EBE78DEFE12EA7A1BF0A32DEA236CD0_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_0 = __this->get_U3CSubjectU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * X509Cert_get_Issuer_m3EC695CFA41B1D827035DBB09D11E62402E1BC67_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_tAF92CA70E247746BFE66D7A58BCC4C1AF274F453 * L_0 = __this->get_U3CIssuerU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_mE20C044249195BFD084C19E0FDDAE2B3E2FD5FC6_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSelfSignedU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_mD5612BE808EA9BA8EAFBC233FBD3CBB88FD691D8_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * ___value0, const RuntimeMethod* method)
{
	{
		RSAKey_tB6F22FE81D478AD59EDDC2F88E733A6C2C161DC1 * L_0 = ___value0;
		__this->set_U3CPubKeyU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Signature_mDBFF199821BAABC954E73F29B3119FE885AC2EAB_inline (X509Cert_t1CF85537505C840131521F3F4EADA36C60AFEB28 * __this, Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_t64528C5CF0B01EF39C7038007216993A685AA664 * L_0 = ___value0;
		__this->set_U3CSignatureU3Ek__BackingField_8(L_0);
		return;
	}
}
