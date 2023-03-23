#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// SuperSocket.ClientEngine.ConcurrentBatchQueue`1<System.ArraySegment`1<System.Byte>>
struct ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6;
// System.Collections.Generic.Dictionary`2<System.Char,System.Byte>
struct Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// SuperSocket.ClientEngine.ConcurrentBatchQueue`1/Entity<System.ArraySegment`1<System.Byte>>
struct Entity_t3AAC5855DBD0EB8FB9DA4E281A80C2882D13855C;
// System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs>
struct EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE;
// System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs>
struct EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>
struct EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t60B0B212E646FAA748170ABB47E557CC31788685;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.ArraySegment`1<System.Byte>,System.Boolean>
struct Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077;
// SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>>
struct IBatchQueue_1_tAEF9205FAFE38599386E1148E23B8A509CAA59A7;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEqualityComparer`1<System.Char>
struct IEqualityComparer_1_t84CD58C3582484C691B22BB0E534C8ADD9B22966;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t80970C26B61C899A37E146F69BC51E2443270FC1;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Byte>
struct KeyCollection_t4F2B8221212876E762399317396AB4A3BE22E9EA;
// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tA624903E1259A700E57AC71565033F4E3C8470F9;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>
struct PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// SuperSocket.ClientEngine.SearchMarkState`1<System.Byte>
struct SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Char,System.Byte>
struct ValueCollection_t9890E02942A46F3E2EE27192F60C83F291DA308B;
// System.ArraySegment`1<System.Byte>[]
struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F;
// System.Collections.Generic.Dictionary`2/Entry<System.Char,System.Byte>[]
struct EntryU5BU5D_t00A6EAC95E959095F9EA4A97C7AB3930ED00626B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Security.Cryptography.X509Certificates.X509Certificate[]
struct X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
// SuperSocket.ClientEngine.ASCIIEncoding
struct ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// SuperSocket.ClientEngine.AsyncTcpSession
struct AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447;
// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39;
// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession
struct AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// SuperSocket.ClientEngine.ClientSession
struct ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// SuperSocket.ClientEngine.ConnectedCallback
struct ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// SuperSocket.ClientEngine.DataEventArgs
struct DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Net.DnsEndPoint
struct DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.EncoderFallbackException
struct EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// SuperSocket.ClientEngine.ErrorEventArgs
struct ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// SuperSocket.ClientEngine.Proxy.HttpConnectProxy
struct HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Net.ICredentials
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// SuperSocket.ClientEngine.IProxyConnector
struct IProxyConnector_t499453376DA2BC6F6502360EC5F4E7B3936EE11A;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Net.Security.MobileAuthenticatedStream
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E;
// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// System.Net.Security.NegotiateStream
struct NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5;
// SuperSocket.ClientEngine.NegotiateStreamTcpSession
struct NegotiateStreamTcpSession_tE23031BF197364F4988CDEAAB9A6C64D469AB129;
// System.Net.NetworkCredential
struct NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313;
// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0;
// SuperSocket.ClientEngine.Proxy.ProxyConnectorBase
struct ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918;
// SuperSocket.ClientEngine.ProxyEventArgs
struct ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// SuperSocket.ClientEngine.Proxy.ReceiveState
struct ReceiveState_t289EC0EBF10BB0FD948B3375B98ABF33D0BF20D9;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Security.SecureString
struct SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C;
// SuperSocket.ClientEngine.SecurityOption
struct SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC;
// System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340;
// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B;
// SuperSocket.ClientEngine.Proxy.Socks4Connector
struct Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34;
// SuperSocket.ClientEngine.Proxy.Socks4aConnector
struct Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC;
// SuperSocket.ClientEngine.Proxy.Socks5Connector
struct Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704;
// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27;
// SuperSocket.ClientEngine.SslStreamTcpSession
struct SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// SuperSocket.ClientEngine.TcpClientSession
struct TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState
struct StreamAsyncState_t5B9B97445B4A025B7BEEF1D62A6ED5F7F26DC2E5;
// SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken
struct ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C;
// SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext
struct ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext
struct SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// SuperSocket.ClientEngine.TcpClientSession/<>c
struct U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682;

IL2CPP_EXTERN_C RuntimeClass* ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBatchQueue_1_tAEF9205FAFE38599386E1148E23B8A509CAA59A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t514D217B02A1263745BC812DCF32A1EB592E769A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t80970C26B61C899A37E146F69BC51E2443270FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProxyConnector_t499453376DA2BC6F6502360EC5F4E7B3936EE11A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SslPolicyErrors_t92DF45EC5BA5BEFF38EF53C2C8488B27385EBB08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemNetworkCredential_tFBEE5F9E93DECB97C8622974DD2F2EBCB0CBD4FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tA5273FBA5D4AE11BFE51679534392AC9A24725C1____9E3C9861D3BFAB772D93ADF529E320EEB7D5502F_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tA5273FBA5D4AE11BFE51679534392AC9A24725C1____BB32F1DA18A347847825FCB7B9096876CBFA36F8_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013CDD277130C7C88B81578887F3F1B7759BCE5B;
IL2CPP_EXTERN_C String_t* _stringLiteral0244E2CEFD64C5E2AEC3ED40FBB9E928F3A889B8;
IL2CPP_EXTERN_C String_t* _stringLiteral03E4744C1E0FE6FF24C9B201C03727CF7C6E1E65;
IL2CPP_EXTERN_C String_t* _stringLiteral08E890D488D4C95D954C033487BFEA3B8A967A9C;
IL2CPP_EXTERN_C String_t* _stringLiteral09D77773A387B7C4DBCB47645BC62AF89E0024FF;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA0EDB52576C6472D6857B0A537C0EBBEC9437E;
IL2CPP_EXTERN_C String_t* _stringLiteral0EE96CE3278E49B63B29C106EB13A04CBCAF27B0;
IL2CPP_EXTERN_C String_t* _stringLiteral23BD664C9380D0D43279CDEC5524917A4EDF97B9;
IL2CPP_EXTERN_C String_t* _stringLiteral26E07990C47BC933334BB01D4F434F01DD9A84D8;
IL2CPP_EXTERN_C String_t* _stringLiteral2FE9D306D9E11DEC4FEE1AAAA2B20ABB46DE748F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F3D90B35215CE6F3D3B0BE205FE6BA7BD48DDF0;
IL2CPP_EXTERN_C String_t* _stringLiteral42A96B26D32D43C2A582DD6B88CB2AEAC07214CD;
IL2CPP_EXTERN_C String_t* _stringLiteral448B2A8F336E0AF6B2C13B1BEB41E1F82018638A;
IL2CPP_EXTERN_C String_t* _stringLiteral449D70E6B112CFE1759AB48ED83649B50268B69A;
IL2CPP_EXTERN_C String_t* _stringLiteral4CB7042D3FB741B41F09922E1007584B28BC770B;
IL2CPP_EXTERN_C String_t* _stringLiteral58D2BDFF5B409ECE88D3A160453177AC48918C1F;
IL2CPP_EXTERN_C String_t* _stringLiteral61A70E5EF4407F055D74C67160D6D8B21F16CBDD;
IL2CPP_EXTERN_C String_t* _stringLiteral61EEF0E115682879C14AAB018206EAD62B187583;
IL2CPP_EXTERN_C String_t* _stringLiteral6A815F812D200882A833CC5F2058A3F30CAA3B89;
IL2CPP_EXTERN_C String_t* _stringLiteral6D17BFBD771968A5A7FDB863C1485174A64C4064;
IL2CPP_EXTERN_C String_t* _stringLiteral6EA2943E51D84A4F4B1FA74FF13E668C4BC9A9B4;
IL2CPP_EXTERN_C String_t* _stringLiteral70706375951EE99AE498EC72709F2BFDFB053D5A;
IL2CPP_EXTERN_C String_t* _stringLiteral72DE00FCE7FE14BA9F72665DB510815B51425B8D;
IL2CPP_EXTERN_C String_t* _stringLiteral755E71F8896E7ECC04A872934D8E5CD074CCE032;
IL2CPP_EXTERN_C String_t* _stringLiteral7A05787CC149E16741B1569540C6B750B1AB1DFC;
IL2CPP_EXTERN_C String_t* _stringLiteral7BC738A629D18597D5302074A043E029E50416F5;
IL2CPP_EXTERN_C String_t* _stringLiteral7C5895E5407A911300E48B9CC7616FBF94B416B7;
IL2CPP_EXTERN_C String_t* _stringLiteral7EDD56A1DBF870EE048CF2AAB56A5DD8B74F2E1C;
IL2CPP_EXTERN_C String_t* _stringLiteral8325B4D1F0CCCFC8664C40D56B573FB6FF1D2E75;
IL2CPP_EXTERN_C String_t* _stringLiteral8847D4DDA13ED26452075655926FBB3AC17F4B68;
IL2CPP_EXTERN_C String_t* _stringLiteral8E241A10F4936825F3F2EAF776F78642B71A2701;
IL2CPP_EXTERN_C String_t* _stringLiteralA19118C6008208C66435CC0E794F357857BB9FD2;
IL2CPP_EXTERN_C String_t* _stringLiteralA6DEED01B6E792CB1E7407CD78621350DD987B2C;
IL2CPP_EXTERN_C String_t* _stringLiteralA9A99CC761E2CB91E2370DFDEEE6A4CB64952140;
IL2CPP_EXTERN_C String_t* _stringLiteralA9F2F72EC097903379459E66142A4FAE526CD47F;
IL2CPP_EXTERN_C String_t* _stringLiteralAFBAA5B85AF8CDEC80BD1FA2E164C443D3E67440;
IL2CPP_EXTERN_C String_t* _stringLiteralB8DBCB33C056EF474A1988B11FB692C05EC47EE8;
IL2CPP_EXTERN_C String_t* _stringLiteralB98826249527CDFC7A1E62333FDE1007B08C3235;
IL2CPP_EXTERN_C String_t* _stringLiteralBB179E9AE6E3F3FE9CB508FA7C6D0D2DE4ECE511;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0974B83F5DAA0399AA84C4632FE7DC0A04B18B;
IL2CPP_EXTERN_C String_t* _stringLiteralC77060BFDCA3E6D381803D899265B5012FFFEE31;
IL2CPP_EXTERN_C String_t* _stringLiteralC99597724A994445932B1CBDE9FF7FB4CE0F5BB5;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9D52B3A4D944C196F1B9E2E11EF007C074515C;
IL2CPP_EXTERN_C String_t* _stringLiteralCEC661363A0382D0139BA56B892955C28CF45793;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E270CA14C4008A5702888CAB42400E2F53D420;
IL2CPP_EXTERN_C String_t* _stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735;
IL2CPP_EXTERN_C String_t* _stringLiteralE7840D7B77D606A48EFB9EFA74C48E8D2FCFECCB;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73;
IL2CPP_EXTERN_C String_t* _stringLiteralEBA0C3BB5E3C1CD683A7D2040C039F6DEA8426FD;
IL2CPP_EXTERN_C String_t* _stringLiteralEBD3DD723DA83D433F50112C0D3A59F754E0C4AA;
IL2CPP_EXTERN_C String_t* _stringLiteralF79CE7B03412B08CCD54B8D48DC558F0850E58DA;
IL2CPP_EXTERN_C const RuntimeMethod* ASCIIEncoding_GetBytesWithoutFallback_mF2B6AEF6E9C1E86302E80609A4231C682F8CCF64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ASCIIEncoding_GetCharsWithoutFallback_mC5DE0E4D21C7DF378DA00A620B870030290CB99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ASCIIEncoding_set_FallbackCharacter_m98A8C6D177C63126FFF9B7A8910E4375C78B8810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m000216DC06BB16538942DDF4A7E927BC863B391E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m51F77F64D63473741505AF79335E8BECB5214CD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTcpSession_Sending_Completed_m63235D684EBE711C65AE05B69EB4E7F20EE60DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m0CCF791057801C4CCC0D370B8EEF67A2AB525039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m01FD1C8EB17391A09FD93906811F9CDCC9DB1B7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mC8FF33137A163491D3581E7BEF3D3666C5ED23AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m72B45AD30B00F61B8CE707A754239ADF7B4DBB28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m4C239464A8A1ABB1F1CE089F2A8AA37DF954D4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mFEB251EE875950B981410FED7258CAEAD335E756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentBatchQueue_1__ctor_m5B22CD1C4D185347C83F868754F15C4641213289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectAsyncExtension_SocketAsyncEventCompleted_m48C31DC6ECAD85AE4B50CFF1730BAA88C852427C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD6F12CE02B7F7450A58C0982BAFAA6BED3E511CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mF350936021870C0CEF374C3C2627F6B509307CF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE95AC77F546997073DFA4C962A54CCF89C4BB544_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA057209BCC18E547BC30C63DCE33C5C295377FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_GetValue_mFE6AFB8FB64380FDCB812E9A1DC59EAFBE325AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_SearchMark_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA119CD2303607713DBC09BFA160C19C005A74464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpConnectProxy_Connect_m2F674217E3D2C9A29D546B7E119A8A7093FB7B61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m3E7851A50F010CDB1C66FD28BE5D6334A3AEC982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NegotiateStreamTcpSession_StartAuthenticatedStream_m202E9D64E9398F8A186F90A2486FBE30BF362194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PosList_1__ctor_mE6DCFB008BA4AC4F54D0A0C0D1607794A8E79F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PosList_1_get_Position_m4FB82DF33C65339452C4621944A312602D783FD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PosList_1_set_Position_m455114C7C5067B62DFB35A48D5E496EBE4B4CAC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyConnectorBase_AsyncEventArgsCompleted_mDF820233F7E1B539CFBEB8E00D91D0AE20B41BCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SearchMarkState_1__ctor_mE7AED19883E4EC57D944DD09007B7E857861B370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SearchMarkState_1_get_Matched_m17B7FD6E847B3CF1CA116853C3FB141BE86BDB29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Socks5Connector_Connect_m25613B9F76F80A7F1DD2C096D10CE5306941D4AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Socks5Connector__ctor_m8FBB1BE0FF3CDF8D648E329ABC31424DC6E93434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStreamTcpSession_StartAuthenticatedStream_mDCA3E127467C37281CE32C49DBB5B10B2C5494D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStreamTcpSession_ValidateRemoteCertificate_mE3B2CFDFFF78274B95AFDD619E3E65261E316CD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_Connect_m4749061D3653ECF77B6000EB143C648DB3D08247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_ProcessConnect_m84104C6EE240AEF2D1223F51723645E2F8620AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_Proxy_Completed_mA1165AB4FA66DDFCFFCA9C9533B517B859FF7D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_TrySend_m7DDAAB81623CD6B180CF4D0BE3DC4CC890C0269B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_TrySend_mFA8A0EDE0C9ACB3840C1490AAF3D8E65647C98C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_set_LocalEndPoint_m6F95F80C8D26565ADCDDD40DB0B47B315F2DD332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_set_ReceiveBufferSize_m786D35D21C686E55F86143EF9A6785D60E8F8BC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetSendingQueueU3Eb__24_0_m9DBF6ACB8B1F26D0855E142B7FCCFD20A3276507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CStartAuthenticatedStreamU3Eb__0_m1DE32081215B84EFD0AEE937F9A770E0E2CB53F8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE;
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8B7EEBEAF98C6CA96E357EEF60FDAC6D7153782E 
{
};

// System.Collections.Generic.Dictionary`2<System.Char,System.Byte>
struct Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t00A6EAC95E959095F9EA4A97C7AB3930ED00626B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4F2B8221212876E762399317396AB4A3BE22E9EA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9890E02942A46F3E2EE27192F60C83F291DA308B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tA624903E1259A700E57AC71565033F4E3C8470F9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA624903E1259A700E57AC71565033F4E3C8470F9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// SuperSocket.ClientEngine.SearchMarkState`1<System.Byte>
struct SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9  : public RuntimeObject
{
	// T[] SuperSocket.ClientEngine.SearchMarkState`1::<Mark>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CMarkU3Ek__BackingField_0;
	// System.Int32 SuperSocket.ClientEngine.SearchMarkState`1::<Matched>k__BackingField
	int32_t ___U3CMatchedU3Ek__BackingField_1;
};
struct Il2CppArrayBounds;

// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.CollectionBase::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// SuperSocket.ClientEngine.ConnectAsyncExtension
struct ConnectAsyncExtension_t4B4CA73763CA1D94299D4616474EB2AD250907D1  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// SuperSocket.ClientEngine.Extensions
struct Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F  : public RuntimeObject
{
};

struct Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_StaticFields
{
	// System.Random SuperSocket.ClientEngine.Extensions::m_Random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___m_Random_0;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_8;
};

// System.Net.NetworkCredential
struct NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313  : public RuntimeObject
{
	// System.String System.Net.NetworkCredential::m_domain
	String_t* ___m_domain_0;
	// System.String System.Net.NetworkCredential::m_userName
	String_t* ___m_userName_1;
	// System.Security.SecureString System.Net.NetworkCredential::m_password
	SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ___m_password_2;
};

// SuperSocket.ClientEngine.Proxy.ProxyConnectorBase
struct ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918  : public RuntimeObject
{
	// System.Net.EndPoint SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::<ProxyEndPoint>k__BackingField
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___U3CProxyEndPointU3Ek__BackingField_0;
	// System.String SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::<TargetHostHame>k__BackingField
	String_t* ___U3CTargetHostHameU3Ek__BackingField_1;
	// System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs> SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::m_Completed
	EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* ___m_Completed_3;
};

struct ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields
{
	// System.Text.Encoding SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::ASCIIEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___ASCIIEncoding_2;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// SuperSocket.ClientEngine.Proxy.ReceiveState
struct ReceiveState_t289EC0EBF10BB0FD948B3375B98ABF33D0BF20D9  : public RuntimeObject
{
	// System.Byte[] SuperSocket.ClientEngine.Proxy.ReceiveState::<Buffer>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CBufferU3Ek__BackingField_0;
	// System.Int32 SuperSocket.ClientEngine.Proxy.ReceiveState::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
};

// SuperSocket.ClientEngine.SecurityOption
struct SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341  : public RuntimeObject
{
	// System.Security.Authentication.SslProtocols SuperSocket.ClientEngine.SecurityOption::<EnabledSslProtocols>k__BackingField
	int32_t ___U3CEnabledSslProtocolsU3Ek__BackingField_0;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection SuperSocket.ClientEngine.SecurityOption::<Certificates>k__BackingField
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___U3CCertificatesU3Ek__BackingField_1;
	// System.Boolean SuperSocket.ClientEngine.SecurityOption::<AllowUnstrustedCertificate>k__BackingField
	bool ___U3CAllowUnstrustedCertificateU3Ek__BackingField_2;
	// System.Boolean SuperSocket.ClientEngine.SecurityOption::<AllowNameMismatchCertificate>k__BackingField
	bool ___U3CAllowNameMismatchCertificateU3Ek__BackingField_3;
	// System.Boolean SuperSocket.ClientEngine.SecurityOption::<AllowCertificateChainErrors>k__BackingField
	bool ___U3CAllowCertificateChainErrorsU3Ek__BackingField_4;
	// System.Net.NetworkCredential SuperSocket.ClientEngine.SecurityOption::<Credential>k__BackingField
	NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* ___U3CCredentialU3Ek__BackingField_5;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_13;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_14;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_15;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_16;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_17;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_18;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_19;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_20;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_21;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_22;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_23;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_24;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_25;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_26;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_27;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_40;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_41;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_42;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl_0;
};

// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState
struct StreamAsyncState_t5B9B97445B4A025B7BEEF1D62A6ED5F7F26DC2E5  : public RuntimeObject
{
	// System.Net.Security.AuthenticatedStream SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::<Stream>k__BackingField
	AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* ___U3CStreamU3Ek__BackingField_0;
	// System.Net.Sockets.Socket SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::<Client>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CClientU3Ek__BackingField_1;
	// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::<SendingItems>k__BackingField
	PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* ___U3CSendingItemsU3Ek__BackingField_2;
};

// SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken
struct ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C  : public RuntimeObject
{
	// System.Object SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::<State>k__BackingField
	RuntimeObject* ___U3CStateU3Ek__BackingField_0;
	// SuperSocket.ClientEngine.ConnectedCallback SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::<Callback>k__BackingField
	ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ___U3CCallbackU3Ek__BackingField_1;
};

// SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext
struct ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48  : public RuntimeObject
{
	// System.Net.Sockets.Socket SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::<Socket>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CSocketU3Ek__BackingField_0;
	// SuperSocket.ClientEngine.SearchMarkState`1<System.Byte> SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::<SearchState>k__BackingField
	SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* ___U3CSearchStateU3Ek__BackingField_1;
};

// SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD  : public RuntimeObject
{
	// System.Net.Security.NegotiateStream SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0::stream
	NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5* ___stream_0;
	// System.Net.NetworkCredential SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0::credential
	NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* ___credential_1;
	// SuperSocket.ClientEngine.NegotiateStreamTcpSession SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0::<>4__this
	NegotiateStreamTcpSession_tE23031BF197364F4988CDEAAB9A6C64D469AB129* ___U3CU3E4__this_2;
};

// SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext
struct SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882  : public RuntimeObject
{
	// System.Net.Sockets.Socket SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::<Socket>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CSocketU3Ek__BackingField_0;
	// SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksState SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
	// System.Net.EndPoint SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::<TargetEndPoint>k__BackingField
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___U3CTargetEndPointU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.Byte> SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::<ReceivedData>k__BackingField
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___U3CReceivedDataU3Ek__BackingField_3;
	// System.Int32 SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::<ExpectedLength>k__BackingField
	int32_t ___U3CExpectedLengthU3Ek__BackingField_4;
};

// SuperSocket.ClientEngine.TcpClientSession/<>c
struct U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682  : public RuntimeObject
{
};

struct U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_StaticFields
{
	// SuperSocket.ClientEngine.TcpClientSession/<>c SuperSocket.ClientEngine.TcpClientSession/<>c::<>9
	U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682* ___U3CU3E9_0;
	// System.Func`2<System.ArraySegment`1<System.Byte>,System.Boolean> SuperSocket.ClientEngine.TcpClientSession/<>c::<>9__24_0
	Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* ___U3CU3E9__24_0_1;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Nullable`1<System.Byte>
struct Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// System.Nullable`1<System.Char>
struct Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Il2CppChar ___value_1;
};

// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>
struct PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3  : public List_1_tA624903E1259A700E57AC71565033F4E3C8470F9
{
	// System.Int32 SuperSocket.ClientEngine.PosList`1::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_6;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_23;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// SuperSocket.ClientEngine.DataEventArgs
struct DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Byte[] SuperSocket.ClientEngine.DataEventArgs::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_1;
	// System.Int32 SuperSocket.ClientEngine.DataEventArgs::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_2;
	// System.Int32 SuperSocket.ClientEngine.DataEventArgs::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Net.DnsEndPoint
struct DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.String System.Net.DnsEndPoint::m_Host
	String_t* ___m_Host_0;
	// System.Int32 System.Net.DnsEndPoint::m_Port
	int32_t ___m_Port_1;
	// System.Net.Sockets.AddressFamily System.Net.DnsEndPoint::m_Family
	int32_t ___m_Family_2;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// SuperSocket.ClientEngine.ErrorEventArgs
struct ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Exception SuperSocket.ClientEngine.ErrorEventArgs::<Exception>k__BackingField
	Exception_t* ___U3CExceptionU3Ek__BackingField_1;
};

// SuperSocket.ClientEngine.Proxy.HttpConnectProxy
struct HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA  : public ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918
{
	// System.Int32 SuperSocket.ClientEngine.Proxy.HttpConnectProxy::m_ReceiveBufferSize
	int32_t ___m_ReceiveBufferSize_8;
};

struct HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_StaticFields
{
	// System.Byte[] SuperSocket.ClientEngine.Proxy.HttpConnectProxy::m_LineSeparator
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_LineSeparator_7;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_1;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_10;
};

// SuperSocket.ClientEngine.ProxyEventArgs
struct ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean SuperSocket.ClientEngine.ProxyEventArgs::<Connected>k__BackingField
	bool ___U3CConnectedU3Ek__BackingField_1;
	// System.Net.Sockets.Socket SuperSocket.ClientEngine.ProxyEventArgs::<Socket>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CSocketU3Ek__BackingField_2;
	// System.Exception SuperSocket.ClientEngine.ProxyEventArgs::<Exception>k__BackingField
	Exception_t* ___U3CExceptionU3Ek__BackingField_3;
	// System.String SuperSocket.ClientEngine.ProxyEventArgs::<TargetHostName>k__BackingField
	String_t* ___U3CTargetHostNameU3Ek__BackingField_4;
};

// SuperSocket.ClientEngine.Proxy.Socks4Connector
struct Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34  : public ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918
{
	// System.String SuperSocket.ClientEngine.Proxy.Socks4Connector::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_4;
};

// System.Threading.SpinWait
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 
{
	// System.Int32 System.Threading.SpinWait::_count
	int32_t ____count_1;
};

struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_StaticFields
{
	// System.Int32 System.Threading.SpinWait::SpinCountforSpinBeforeWait
	int32_t ___SpinCountforSpinBeforeWait_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Net.SystemNetworkCredential
struct SystemNetworkCredential_tFBEE5F9E93DECB97C8622974DD2F2EBCB0CBD4FF  : public NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313
{
};

struct SystemNetworkCredential_tFBEE5F9E93DECB97C8622974DD2F2EBCB0CBD4FF_StaticFields
{
	// System.Net.SystemNetworkCredential System.Net.SystemNetworkCredential::defaultCredential
	SystemNetworkCredential_tFBEE5F9E93DECB97C8622974DD2F2EBCB0CBD4FF* ___defaultCredential_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tC4A378E411D6A20B2C7D3DA5AF484E8F0639FF80 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tC4A378E411D6A20B2C7D3DA5AF484E8F0639FF80__padding[256];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// SuperSocket.ClientEngine.ConcurrentBatchQueue`1<System.ArraySegment`1<System.Byte>>
struct ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6  : public RuntimeObject
{
	// System.Object SuperSocket.ClientEngine.ConcurrentBatchQueue`1::m_Entity
	RuntimeObject* ___m_Entity_0;
	// SuperSocket.ClientEngine.ConcurrentBatchQueue`1/Entity<T> SuperSocket.ClientEngine.ConcurrentBatchQueue`1::m_BackEntity
	Entity_t3AAC5855DBD0EB8FB9DA4E281A80C2882D13855C* ___m_BackEntity_1;
	// System.Func`2<T,System.Boolean> SuperSocket.ClientEngine.ConcurrentBatchQueue`1::m_NullValidator
	Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* ___m_NullValidator_3;
};

struct ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6_StaticFields
{
	// T SuperSocket.ClientEngine.ConcurrentBatchQueue`1::m_Null
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___m_Null_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA5273FBA5D4AE11BFE51679534392AC9A24725C1  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tA5273FBA5D4AE11BFE51679534392AC9A24725C1_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::9E3C9861D3BFAB772D93ADF529E320EEB7D5502F
	__StaticArrayInitTypeSizeU3D256_tC4A378E411D6A20B2C7D3DA5AF484E8F0639FF80 ___9E3C9861D3BFAB772D93ADF529E320EEB7D5502F_0;
	// System.Int32 <PrivateImplementationDetails>::BB32F1DA18A347847825FCB7B9096876CBFA36F8
	int32_t ___BB32F1DA18A347847825FCB7B9096876CBFA36F8_1;
};

// SuperSocket.ClientEngine.ASCIIEncoding
struct ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	// System.Nullable`1<System.Char> SuperSocket.ClientEngine.ASCIIEncoding::fallbackCharacter
	Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 ___fallbackCharacter_17;
	// System.Nullable`1<System.Byte> SuperSocket.ClientEngine.ASCIIEncoding::<FallbackByte>k__BackingField
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ___U3CFallbackByteU3Ek__BackingField_18;
};

struct ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields
{
	// SuperSocket.ClientEngine.ASCIIEncoding SuperSocket.ClientEngine.ASCIIEncoding::m_Instance
	ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* ___m_Instance_16;
	// System.Char[] SuperSocket.ClientEngine.ASCIIEncoding::byteToChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___byteToChar_19;
	// System.Collections.Generic.Dictionary`2<System.Char,System.Byte> SuperSocket.ClientEngine.ASCIIEncoding::charToByte
	Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* ___charToByte_20;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::_InnerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____InnerStream_4;
	// System.Boolean System.Net.Security.AuthenticatedStream::_LeaveStreamOpen
	bool ____LeaveStreamOpen_5;
};

// SuperSocket.ClientEngine.ClientSession
struct ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395  : public RuntimeObject
{
	// System.Net.Sockets.Socket SuperSocket.ClientEngine.ClientSession::<Client>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CClientU3Ek__BackingField_1;
	// System.Net.EndPoint SuperSocket.ClientEngine.ClientSession::<LocalEndPoint>k__BackingField
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___U3CLocalEndPointU3Ek__BackingField_2;
	// System.Boolean SuperSocket.ClientEngine.ClientSession::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_3;
	// System.Boolean SuperSocket.ClientEngine.ClientSession::<NoDelay>k__BackingField
	bool ___U3CNoDelayU3Ek__BackingField_4;
	// System.Int32 SuperSocket.ClientEngine.ClientSession::<SendingQueueSize>k__BackingField
	int32_t ___U3CSendingQueueSizeU3Ek__BackingField_5;
	// System.EventHandler SuperSocket.ClientEngine.ClientSession::m_Closed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___m_Closed_6;
	// System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs> SuperSocket.ClientEngine.ClientSession::m_Error
	EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* ___m_Error_7;
	// System.EventHandler SuperSocket.ClientEngine.ClientSession::m_Connected
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___m_Connected_8;
	// System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs> SuperSocket.ClientEngine.ClientSession::m_DataReceived
	EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* ___m_DataReceived_9;
	// SuperSocket.ClientEngine.DataEventArgs SuperSocket.ClientEngine.ClientSession::m_DataArgs
	DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* ___m_DataArgs_10;
	// System.Int32 SuperSocket.ClientEngine.ClientSession::<ReceiveBufferSize>k__BackingField
	int32_t ___U3CReceiveBufferSizeU3Ek__BackingField_11;
	// SuperSocket.ClientEngine.IProxyConnector SuperSocket.ClientEngine.ClientSession::<Proxy>k__BackingField
	RuntimeObject* ___U3CProxyU3Ek__BackingField_12;
	// System.ArraySegment`1<System.Byte> SuperSocket.ClientEngine.ClientSession::<Buffer>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CBufferU3Ek__BackingField_13;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::_streamSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____streamSocket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::_ownsSocket
	bool ____ownsSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::_readable
	bool ____readable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::_writeable
	bool ____writeable_7;
	// System.Int32 System.Net.Sockets.NetworkStream::_closeTimeout
	int32_t ____closeTimeout_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::_cleanedUp
	bool ____cleanedUp_9;
	// System.Int32 System.Net.Sockets.NetworkStream::_currentReadTimeout
	int32_t ____currentReadTimeout_10;
	// System.Int32 System.Net.Sockets.NetworkStream::_currentWriteTimeout
	int32_t ____currentWriteTimeout_11;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::disposed
	bool ___disposed_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.SocketAsyncEventArgs::in_progress
	int32_t ___in_progress_2;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::remote_ep
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remote_ep_3;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::current_socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___current_socket_4;
	// System.Net.Sockets.SocketAsyncResult System.Net.Sockets.SocketAsyncEventArgs::socket_async_result
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* ___socket_async_result_5;
	// System.Exception System.Net.Sockets.SocketAsyncEventArgs::<ConnectByNameError>k__BackingField
	Exception_t* ___U3CConnectByNameErrorU3Ek__BackingField_6;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::<AcceptSocket>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CAcceptSocketU3Ek__BackingField_7;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<BytesTransferred>k__BackingField
	int32_t ___U3CBytesTransferredU3Ek__BackingField_8;
	// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::<LastOperation>k__BackingField
	int32_t ___U3CLastOperationU3Ek__BackingField_9;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsSendSize>k__BackingField
	int32_t ___U3CSendPacketsSendSizeU3Ek__BackingField_10;
	// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField_11;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncEventArgs::<SocketFlags>k__BackingField
	int32_t ___U3CSocketFlagsU3Ek__BackingField_12;
	// System.Object System.Net.Sockets.SocketAsyncEventArgs::<UserToken>k__BackingField
	RuntimeObject* ___U3CUserTokenU3Ek__BackingField_13;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.SocketAsyncEventArgs::Completed
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___Completed_14;
	// System.Memory`1<System.Byte> System.Net.Sockets.SocketAsyncEventArgs::_buffer
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ____buffer_15;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::_offset
	int32_t ____offset_16;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::_count
	int32_t ____count_17;
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::_bufferIsExplicitArray
	bool ____bufferIsExplicitArray_18;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::_bufferList
	RuntimeObject* ____bufferList_19;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::_bufferListInternal
	List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ____bufferListInternal_20;
};

// SuperSocket.ClientEngine.Proxy.Socks4aConnector
struct Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC  : public Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34
{
};

struct Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_StaticFields
{
	// System.Random SuperSocket.ClientEngine.Proxy.Socks4aConnector::m_Random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___m_Random_6;
};

// SuperSocket.ClientEngine.Proxy.Socks5Connector
struct Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704  : public ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918
{
	// System.ArraySegment`1<System.Byte> SuperSocket.ClientEngine.Proxy.Socks5Connector::m_UserNameAuthenRequest
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___m_UserNameAuthenRequest_4;
};

struct Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_StaticFields
{
	// System.Byte[] SuperSocket.ClientEngine.Proxy.Socks5Connector::m_AuthenHandshake
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_AuthenHandshake_5;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Net.Security.NegotiateStream
struct NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5  : public AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39
{
	// System.Int32 System.Net.Security.NegotiateStream::readTimeout
	int32_t ___readTimeout_6;
	// System.Int32 System.Net.Security.NegotiateStream::writeTimeout
	int32_t ___writeTimeout_7;
};

// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27  : public AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39
{
	// Mono.Net.Security.MobileTlsProvider System.Net.Security.SslStream::provider
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___provider_6;
	// Mono.Security.Interface.MonoTlsSettings System.Net.Security.SslStream::settings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___settings_7;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validationCallback
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___validationCallback_8;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selectionCallback
	LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___selectionCallback_9;
	// Mono.Net.Security.MobileAuthenticatedStream System.Net.Security.SslStream::impl
	MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* ___impl_10;
	// System.Boolean System.Net.Security.SslStream::explicitSettings
	bool ___explicitSettings_11;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// SuperSocket.ClientEngine.TcpClientSession
struct TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD  : public ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395
{
	// System.String SuperSocket.ClientEngine.TcpClientSession::<HostName>k__BackingField
	String_t* ___U3CHostNameU3Ek__BackingField_14;
	// System.Boolean SuperSocket.ClientEngine.TcpClientSession::m_InConnecting
	bool ___m_InConnecting_15;
	// SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::m_SendingQueue
	RuntimeObject* ___m_SendingQueue_16;
	// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::m_SendingItems
	PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* ___m_SendingItems_17;
	// System.Int32 SuperSocket.ClientEngine.TcpClientSession::m_IsSending
	int32_t ___m_IsSending_18;
};

// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12
struct U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4 
{
	// System.Int32 SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12::<>4__this
	AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* ___U3CU3E4__this_2;
	// System.Int32 SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12::<length>5__1
	int32_t ___U3ClengthU3E5__1_3;
	// System.ArraySegment`1<System.Byte> SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12::<buffer>5__2
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CbufferU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12::<>u__1
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E ___U3CU3Eu__1_5;
};

// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15
struct U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF 
{
	// System.Int32 SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15::items
	PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* ___items_2;
	// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15::<>4__this
	AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* ___U3CU3E4__this_3;
	// System.Int32 SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15::<i>5__1
	int32_t ___U3CiU3E5__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
};

// SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1
struct U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED 
{
	// System.Int32 SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// System.Net.Security.SslStream SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1::sslStream
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___sslStream_2;
	// SuperSocket.ClientEngine.SslStreamTcpSession SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1::<>4__this
	SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* ___U3CU3E4__this_3;
	// SuperSocket.ClientEngine.SecurityOption SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1::securityOption
	SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* ___securityOption_4;
	// System.Runtime.CompilerServices.TaskAwaiter SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
};

// System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs>
struct EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE  : public MulticastDelegate_t
{
};

// System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs>
struct EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>
struct EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED  : public MulticastDelegate_t
{
};

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t60B0B212E646FAA748170ABB47E557CC31788685  : public MulticastDelegate_t
{
};

// System.Func`2<System.ArraySegment`1<System.Byte>,System.Boolean>
struct Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// SuperSocket.ClientEngine.AsyncTcpSession
struct AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447  : public TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD
{
	// System.Net.Sockets.SocketAsyncEventArgs SuperSocket.ClientEngine.AsyncTcpSession::m_SocketEventArgs
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___m_SocketEventArgs_19;
	// System.Net.Sockets.SocketAsyncEventArgs SuperSocket.ClientEngine.AsyncTcpSession::m_SocketEventArgsSend
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___m_SocketEventArgsSend_20;
};

// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession
struct AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F  : public TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD
{
	// System.Net.Security.AuthenticatedStream SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::m_Stream
	AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* ___m_Stream_19;
	// SuperSocket.ClientEngine.SecurityOption SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::<Security>k__BackingField
	SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* ___U3CSecurityU3Ek__BackingField_20;
};

// SuperSocket.ClientEngine.ConnectedCallback
struct ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306  : public MulticastDelegate_t
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955  : public MulticastDelegate_t
{
};

// SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d
struct U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80 
{
	// System.Int32 SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0 SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.Text.EncoderFallbackException
struct EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Char System.Text.EncoderFallbackException::_charUnknown
	Il2CppChar ____charUnknown_19;
	// System.Char System.Text.EncoderFallbackException::_charUnknownHigh
	Il2CppChar ____charUnknownHigh_20;
	// System.Char System.Text.EncoderFallbackException::_charUnknownLow
	Il2CppChar ____charUnknownLow_21;
	// System.Int32 System.Text.EncoderFallbackException::_index
	int32_t ____index_22;
};

// SuperSocket.ClientEngine.NegotiateStreamTcpSession
struct NegotiateStreamTcpSession_tE23031BF197364F4988CDEAAB9A6C64D469AB129  : public AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// SuperSocket.ClientEngine.SslStreamTcpSession
struct SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC  : public AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F
{
};

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B  : public Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9
{
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_EndPoint_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Security.Cryptography.X509Certificates.X509Certificate[]
struct X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE  : public RuntimeArray
{
	ALIGN_FIELD (8) X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* m_Items[1];

	inline X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299  : public RuntimeArray
{
	ALIGN_FIELD (8) X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D m_Items[1];

	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
};
// System.ArraySegment`1<System.Byte>[]
struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F  : public RuntimeArray
{
	ALIGN_FIELD (8) ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 m_Items[1];

	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array_1), (void*)NULL);
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array_1), (void*)NULL);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE95AC77F546997073DFA4C962A54CCF89C4BB544_gshared (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Byte>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_gshared (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* __this, Il2CppChar ___key0, uint8_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Char>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_gshared_inline (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Char>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_gshared (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Byte>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD6F12CE02B7F7450A58C0982BAFAA6BED3E511CC_gshared (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* __this, Il2CppChar ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Char,System.Byte>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Dictionary_2_get_Item_mA057209BCC18E547BC30C63DCE33C5C295377FA6_gshared (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* __this, Il2CppChar ___key0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Byte>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_gshared (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Char>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE_gshared (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Byte>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_gshared_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Byte>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mF350936021870C0CEF374C3C2627F6B509307CF9_gshared (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* __this, Il2CppChar ___key0, uint8_t* ___value1, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Byte>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_gshared (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_gshared_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_gshared (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m4C239464A8A1ABB1F1CE089F2A8AA37DF954D4B8_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mFEB251EE875950B981410FED7258CAEAD335E756_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m0CCF791057801C4CCC0D370B8EEF67A2AB525039_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___awaiter0, U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method) ;
// System.Int32 SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PosList_1_get_Position_m4FB82DF33C65339452C4621944A312602D783FD9_gshared_inline (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mC8FF33137A163491D3581E7BEF3D3666C5ED23AE_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m51F77F64D63473741505AF79335E8BECB5214CD3_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m000216DC06BB16538942DDF4A7E927BC863B391E_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m72B45AD30B00F61B8CE707A754239ADF7B4DBB28_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m01FD1C8EB17391A09FD93906811F9CDCC9DB1B7A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.ArraySegment`1<System.Byte>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m12797C6DD4A7F6D34BCD7CB149848060CEA7827C_gshared (Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ConcurrentBatchQueue`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Int32,System.Func`2<T,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentBatchQueue_1__ctor_m5B22CD1C4D185347C83F868754F15C4641213289_gshared (ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6* __this, int32_t ___capacity0, Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* ___nullValidator1, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PosList_1__ctor_mE6DCFB008BA4AC4F54D0A0C0D1607794A8E79F5A_gshared (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m3E7851A50F010CDB1C66FD28BE5D6334A3AEC982_gshared_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::set_Position(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PosList_1_set_Position_m455114C7C5067B62DFB35A48D5E496EBE4B4CAC3_gshared_inline (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.SearchMarkState`1<System.Byte>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchMarkState_1__ctor_mE7AED19883E4EC57D944DD09007B7E857861B370_gshared (SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mark0, const RuntimeMethod* method) ;
// System.Int32 SuperSocket.ClientEngine.SearchMarkState`1<System.Byte>::get_Matched()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SearchMarkState_1_get_Matched_m17B7FD6E847B3CF1CA116853C3FB141BE86BDB29_gshared_inline (SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* __this, const RuntimeMethod* method) ;
// System.Int32 SuperSocket.ClientEngine.Extensions::SearchMark<System.Byte>(System.Collections.Generic.IList`1<T>,System.Int32,System.Int32,SuperSocket.ClientEngine.SearchMarkState`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_SearchMark_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA119CD2303607713DBC09BFA160C19C005A74464_gshared (RuntimeObject* ___source0, int32_t ___offset1, int32_t ___length2, SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* ___searchState3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___capacity0, const RuntimeMethod* method) ;

// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Byte>::.ctor()
inline void Dictionary_2__ctor_mE95AC77F546997073DFA4C962A54CCF89C4BB544 (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2*, const RuntimeMethod*))Dictionary_2__ctor_mE95AC77F546997073DFA4C962A54CCF89C4BB544_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Byte>::Add(TKey,TValue)
inline void Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* __this, Il2CppChar ___key0, uint8_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2*, Il2CppChar, uint8_t, const RuntimeMethod*))Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void SuperSocket.ClientEngine.ASCIIEncoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASCIIEncoding__ctor_m1BFBB1A5C4BAEB260340201E39067F77CA3687C2 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Char>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_inline (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1*, const RuntimeMethod*))Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Char>::get_Value()
inline Il2CppChar Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6 (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1*, const RuntimeMethod*))Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Byte>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD6F12CE02B7F7450A58C0982BAFAA6BED3E511CC (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* __this, Il2CppChar ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2*, Il2CppChar, const RuntimeMethod*))Dictionary_2_ContainsKey_mD6F12CE02B7F7450A58C0982BAFAA6BED3E511CC_gshared)(__this, ___key0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Text.EncoderFallbackException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderFallbackException__ctor_m02C50CF3B77FD14A41E0B4A803BFFF6B446189F5 (EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4* __this, String_t* ___message0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Char,System.Byte>::get_Item(TKey)
inline uint8_t Dictionary_2_get_Item_mA057209BCC18E547BC30C63DCE33C5C295377FA6 (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* __this, Il2CppChar ___key0, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2*, Il2CppChar, const RuntimeMethod*))Dictionary_2_get_Item_mA057209BCC18E547BC30C63DCE33C5C295377FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Nullable`1<System.Byte>::.ctor(T)
inline void Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, uint8_t, const RuntimeMethod*))Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_gshared)(__this, ___value0, method);
}
// System.Void SuperSocket.ClientEngine.ASCIIEncoding::set_FallbackByte(System.Nullable`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ASCIIEncoding_set_FallbackByte_m7BD85DF33CBD1AE5B5510C37A935E5F3199D73B3_inline (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoding__ctor_m8EA83F1D99F2F28E4848E58ACC1421B5FB3341F2 (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Char>::.ctor(T)
inline void Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1*, Il2CppChar, const RuntimeMethod*))Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE_gshared)(__this, ___value0, method);
}
// System.Void SuperSocket.ClientEngine.ASCIIEncoding::set_FallbackCharacter(System.Nullable`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASCIIEncoding_set_FallbackCharacter_m98A8C6D177C63126FFF9B7A8910E4375C78B8810 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<System.Byte> SuperSocket.ClientEngine.ASCIIEncoding::get_FallbackByte()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ASCIIEncoding_get_FallbackByte_m6B8FEAD4555FD0E7CD5D2ACA9D1A691367D78939_inline (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Byte>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, const RuntimeMethod*))Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_gshared_inline)(__this, method);
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetBytesWithoutFallback(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetBytesWithoutFallback_mF2B6AEF6E9C1E86302E80609A4231C682F8CCF64 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method) ;
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetBytesWithFallBack(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetBytesWithFallBack_m84395C997B392144F9108FA783ADC6DAB3992A68 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Byte>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mF350936021870C0CEF374C3C2627F6B509307CF9 (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* __this, Il2CppChar ___key0, uint8_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2*, Il2CppChar, uint8_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mF350936021870C0CEF374C3C2627F6B509307CF9_gshared)(__this, ___key0, ___value1, method);
}
// T System.Nullable`1<System.Byte>::get_Value()
inline uint8_t Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299 (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, const RuntimeMethod*))Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Nullable`1<System.Char> SuperSocket.ClientEngine.ASCIIEncoding::get_FallbackCharacter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 ASCIIEncoding_get_FallbackCharacter_m40CEA1C38EFD5B3EFD077BC4BBC2807D925F1A54_inline (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, const RuntimeMethod* method) ;
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetCharsWithoutFallback(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetCharsWithoutFallback_mC5DE0E4D21C7DF378DA00A620B870030290CB99D (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method) ;
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetCharsWithFallback(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetCharsWithFallback_m4A40436917B99A06F33ADC42AD37F2DEC9346F6C (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m3162B2AFD9F220E204A172584D64190CFE312CA1 (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::remove_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_remove_Completed_mA062E9FA73100FB533E7681B7BB979E5139814F8 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___value0, const RuntimeMethod* method) ;
// System.Object System.Net.Sockets.SocketAsyncEventArgs::get_UserToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_UserToken(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_UserToken_m10B93BD715163BE1A9C813413BD5BD3C4209032D_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// SuperSocket.ClientEngine.ConnectedCallback SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::get_Callback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ConnectToken_get_Callback_mDB4BAE7AA209F4694BDCE943197FA9E4176599C7_inline (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, const RuntimeMethod* method) ;
// System.Object SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectToken_get_State_m78DBB4CF30AD06BB2A000000D46D2AEAB0FAAA57_inline (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ConnectedCallback::Invoke(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_inline (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs__ctor_m0D655E713579F9A0548D1889E29B09C19DA5A0B5 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToken__ctor_m4F421219CECC1EBEE4F63DF7632038C7C073DF11 (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::set_State(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectToken_set_State_mC4F0E28F37C21A92F4EFDFCCE65E4180DC066E50_inline (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::set_Callback(SuperSocket.ClientEngine.ConnectedCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectToken_set_Callback_m3FCE63A3DF8E001C9404D72570E59431669F1796_inline (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_RemoteEndPoint(System.Net.EndPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_RemoteEndPoint_m63E183C33AA5B60D8331A1CEC30A008B6AC7206F_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::add_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_add_Completed_mB0C757C44387F256E3F7AE0A373F90750D450805 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___value0, const RuntimeMethod* method) ;
// System.String System.Environment::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8 (String_t* ___variable0, const RuntimeMethod* method) ;
// System.Net.Sockets.SocketAsyncEventArgs SuperSocket.ClientEngine.ConnectAsyncExtension::CreateSocketAsyncEventArgs(System.Net.EndPoint,SuperSocket.ClientEngine.ConnectedCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ConnectAsyncExtension_CreateSocketAsyncEventArgs_m1F68507B2A46AA375A46C1AC5F825AEB061DDE8D (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint0, ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ___callback1, RuntimeObject* ___state2, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::set_ExclusiveAddressUse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_ExclusiveAddressUse_m3F9A655F123086A025AD1736933B0754A5A6DF7F (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___localEP0, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::ConnectAsync(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_ConnectAsync_mCA45934E444AC6FCEAA84A6ACEFE732AEE8482A2 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::ConnectAsync(System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_ConnectAsync_m7394995A918C2C755FEC3338305218EAD69D50FF (int32_t ___socketType0, int32_t ___protocolType1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String SuperSocket.ClientEngine.Extensions::GetValue(System.Collections.Specialized.NameValueCollection,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_GetValue_mFE6AFB8FB64380FDCB812E9A1DC59EAFBE325AA3 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___collection0, String_t* ___key1, String_t* ___defaultValue2, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::.ctor(System.Boolean,System.Net.Sockets.Socket,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs__ctor_m7AC75245BE42D0F83143F9DAC7F10FED3A991609 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, bool ___connected0, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket1, String_t* ___targetHostName2, Exception_t* ___exception3, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::set_Connected(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyEventArgs_set_Connected_mCC9A44D394AD2AE34C3F88D41B059016C2C02BCB_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::set_Socket(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyEventArgs_set_Socket_m3E8300379B58C11AF923FE8898166C15CE3DA59B_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::set_TargetHostName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyEventArgs_set_TargetHostName_m27C586D7CCA42B3BD98293107B7D93101AE47C2D_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::set_Exception(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyEventArgs_set_Exception_m77A739C36837E4C6148592C99FCD85BFBE567CB0_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Exception_t* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.TcpClientSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession__ctor_m5D4CAF3F324DD3313AA50290DC28B7FA41E8DF3A (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::get_LastOperation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_LastOperation_m16A89968CA3F3185A1AE2E1DE1106CA6FBDF9AC3_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.TcpClientSession::ProcessConnect(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_ProcessConnect_m84104C6EE240AEF2D1223F51723645E2F8620AE1 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::ProcessReceive(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_ProcessReceive_m491C6E3BB39B9EF6B21D3D9E315703E7593EA855 (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ClientSession::SetBuffer(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_SetBuffer_mF2ECDE722ED953000BB353C9432EBA62CB7FA6D6 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___bufferSegment0, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBuffer(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.ArraySegment`1<System.Byte> SuperSocket.ClientEngine.ClientSession::get_Buffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ClientSession_get_Buffer_mCE99012D5FAC9BC66D94D08DC719431040E4B87F_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
inline void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared)(__this, ___array0, method);
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_Buffer(System.ArraySegment`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_Buffer_m7508DEAC6096ED1129727B9F2E476FE6AA6702DD_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::StartReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_StartReceive_m9483AB3B0C46A1AB4457314F0E8E2BADDF5EBE6B (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ClientSession::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::ReceiveAsync(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_ReceiveAsync_m158A08D073322BE419CDF11B449F07191F7576CA (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) ;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::get_SocketError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::EnsureSocketClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_EnsureSocketClosed_m7ED3CC83EA0A3D3A8BD2DCB084F974719CEEDB92 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) ;
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableSocketError(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_IsIgnorableSocketError_mB810DBC8ACEEB5C43D761120433CD0E63C6B87A1 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, int32_t ___errorCode0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, int32_t ___errorCode0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_BytesTransferred()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Net.Sockets.SocketAsyncEventArgs::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, const RuntimeMethod* method) ;
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::EnsureSocketClosed(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_EnsureSocketClosed_mAF81B14078A8FC9A9785DF8FDC269C119F0DD709 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___prevClient0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Count()
inline int32_t List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*, const RuntimeMethod*))List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_gshared_inline)(__this, method);
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BufferList(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_BufferList_m385B75BA485FAB0BD793D5280D21692C9868F194 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Item(System.Int32)
inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770 (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 (*) (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*, int32_t, const RuntimeMethod*))List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::get_BufferList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SocketAsyncEventArgs_get_BufferList_mD9E837C74ED11F81EC7076E532FA5067DCCAB173_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::SendAsync(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_SendAsync_m0492E6DD02BBA2878FC8BAD3770F619B57370A26 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::Sending_Completed(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_Sending_Completed_m63235D684EBE711C65AE05B69EB4E7F20EE60DBD (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, RuntimeObject* ___sender0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.TcpClientSession::OnSendingCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_OnSendingCompleted_m67F5E56BDB2F34667DF8D4A553BFF8A07AB6B014 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_Dispose_m6DCE1086200FEDE70AFC93B221810F02334FCEA1 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ClientSession::OnClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_OnClosed_m7DA242361982774030103B991F4914FCA972E1A1 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::BeginRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_BeginRead_m2D1406E59791E465F9DA73E97679A198C4F1B707 (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::ReadAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_ReadAsync_m175B28054184F3A64942017545BB831A575AF7E8 (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m4C239464A8A1ABB1F1CE089F2A8AA37DF954D4B8 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m4C239464A8A1ABB1F1CE089F2A8AA37DF954D4B8_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_IsIgnorableException_m3A3F855D8E1AE68B8F3B19EE552798C89EF24719 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::SendInternalAsync(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_SendInternalAsync_mB384E6FEA3B5C19FA8A905F987E242E76F2D621D (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* ___items0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mFEB251EE875950B981410FED7258CAEAD335E756 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mFEB251EE875950B981410FED7258CAEAD335E756_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.TcpClientSession::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_Close_m7393A6EBDDC6E7EFC09E1C14D5762568D1193301 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
inline TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643 (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m0CCF791057801C4CCC0D370B8EEF67A2AB525039 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___awaiter0, U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m0CCF791057801C4CCC0D370B8EEF67A2AB525039_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80 (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared)(__this, method);
}
// System.Boolean SuperSocket.ClientEngine.ClientSession::get_IsConnected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ClientSession_get_IsConnected_m888AF6C0AA82F028612BB4F5F93C6A79524AE01B_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__12_MoveNext_m3E47F476278E1B0524B52D3258A4AB1695BA6884 (U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__12_SetStateMachine_m83E35EA3CE5EC4AF54022C3616E71B827163A06B (U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Int32 SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::get_Position()
inline int32_t PosList_1_get_Position_m4FB82DF33C65339452C4621944A312602D783FD9_inline (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3*, const RuntimeMethod*))PosList_1_get_Position_m4FB82DF33C65339452C4621944A312602D783FD9_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mC8FF33137A163491D3581E7BEF3D3666C5ED23AE (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mC8FF33137A163491D3581E7BEF3D3666C5ED23AE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendInternalAsyncU3Ed__15_MoveNext_m94D3F6BBD38AC51FF639C0CFA14E6072C152FCEE (U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendInternalAsyncU3Ed__15_SetStateMachine_m3A07C87CDB7EF51B4D92E13EE8247EE24BE62F8E (U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.DataEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEventArgs__ctor_mF91665EE2D77468BD18D03CA8C06AEF24777AFFF (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Void SuperSocket.ClientEngine.ClientSession::Send(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_Send_m21D9268A3FB5989C24E10C4C73A2BF2A14E15A04 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, const RuntimeMethod* method) ;
// System.Void System.Threading.SpinWait::SpinOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF (SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ClientSession::set_IsConnected(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_IsConnected_m64E1F85C8E94FC06D5919D4D75BF21906867F458_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ErrorEventArgs::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs__ctor_mBD2C66508441623B6CA6AD99F255CBBFCC96DC18 (ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mDAE9D1B4280868139A9C5DC45472E3EFC1AF3F65_inline (EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* __this, RuntimeObject* ___sender0, ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2*, RuntimeObject*, ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Boolean System.Net.Sockets.Socket::get_NoDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_NoDelay_mF0618C754D55660B5DFA339FF43005EBC45C668A (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Boolean SuperSocket.ClientEngine.ClientSession::get_NoDelay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ClientSession_get_NoDelay_m5C9D0770C0A50542BA5D05BA8200FAA439CE3AB9_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_NoDelay_m1F7ACCEF219BB8745AB17F29CEA618088E0B2405 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Data(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Data_mC53E02DE55FD98AF68980FA2AE14BEA1FEB17871_inline (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Offset(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Offset_m35441E92E83A5B0E99DF4950FE1530E3FF1FF20C_inline (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Length_m692AE047B4CB2154C7C46A6F79A4DE6268C7E780_inline (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE5D33A8132F15BDF366DC3B515B19332C77AE3FE_inline (EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* __this, RuntimeObject* ___sender0, DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE*, RuntimeObject*, DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void SuperSocket.ClientEngine.ErrorEventArgs::set_Exception(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorEventArgs_set_Exception_m748058239B7A1C5801518AB60626084E02F7CB09_inline (ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502* __this, Exception_t* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mC3310AC565EE3781E81E9DDA49481D6F6FFB479A (U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* __this, const RuntimeMethod* method) ;
// SuperSocket.ClientEngine.SecurityOption SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::get_Security()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* AuthenticatedStreamTcpSession_get_Security_mB42BAC8CCEF9B17C8ACD86D6A7F29BD9B855ECCB_inline (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStream__ctor_m1E6CEBB6583CF44E9FA25A38E84B212C9BC91CD8 (NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, const RuntimeMethod* method) ;
// System.Void System.Net.Security.NegotiateStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiateStream__ctor_mA6D7614490524C95B46A9B14F9993183AEDD9A7C (NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream0, const RuntimeMethod* method) ;
// System.Net.NetworkCredential SuperSocket.ClientEngine.SecurityOption::get_Credential()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* SecurityOption_get_Credential_m0490FFC63CE8980C7A8486BF4B3FA01CD50EECB6_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) ;
// System.Net.ICredentials System.Net.CredentialCache::get_DefaultCredentials()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CredentialCache_get_DefaultCredentials_mFD45861A5151E546B6DF04F6D527E82214EA4143_inline (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Func`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_m00AF25E7892ACD3AEBBADB40560F59F2866DD3BA (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* ___function0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession__ctor_m9B1AD6CF5414CFA8A57D78A8AFEECFBF63D7187D (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m51F77F64D63473741505AF79335E8BECB5214CD3 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m51F77F64D63473741505AF79335E8BECB5214CD3_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.String SuperSocket.ClientEngine.TcpClientSession::get_HostName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TcpClientSession_get_HostName_m3E871F4DB16E0D145DC7A23685A50E33A3C286B3_inline (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m000216DC06BB16538942DDF4A7E927BC863B391E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m000216DC06BB16538942DDF4A7E927BC863B391E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::OnAuthenticatedStreamConnected(System.Net.Security.AuthenticatedStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_OnAuthenticatedStreamConnected_m7FACF0723B3A1B2188DC1B60A906A8DBD6D63F7D (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* ___stream0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_MoveNext_m204B778DA7E09322D8E51F66255B6E010B78218D (U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_SetStateMachine_mE3082CA9B8DF83A984E78953E743A06F965B9F27 (U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Security.Authentication.SslProtocols SuperSocket.ClientEngine.SecurityOption::GetDefaultProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecurityOption_GetDefaultProtocol_mF5507D4416CE12DD93D7D31C305AE4EB3FA28B60 (const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.SecurityOption::.ctor(System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption__ctor_m1A92CD47579234F69DC8C4E9682A2971F4FD9E55 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, int32_t ___enabledSslProtocols0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___certificates1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m129EF1F62B4506973751F8ED347A9F000600EB6A (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.SecurityOption::set_EnabledSslProtocols(System.Security.Authentication.SslProtocols)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurityOption_set_EnabledSslProtocols_mA961B5CD81E81A829D6007B1A318FE568C549A52_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.SecurityOption::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurityOption_set_Certificates_mBFF7AA4DCB277D25E69152F9B78087A83163EE64_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.SecurityOption::set_Credential(System.Net.NetworkCredential)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurityOption_set_Credential_mAD0E371644C28A8B9E5069F4880B567AFA8FB744_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_m9096E6E85E60C4D205A26FA43D121FECEC735484 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream0, bool ___leaveInnerStreamOpen1, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___userCertificateValidationCallback2, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession::AuthenticateAsClientAsync(System.Net.Security.SslStream,SuperSocket.ClientEngine.SecurityOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStreamTcpSession_AuthenticateAsClientAsync_m33B812C430DA64E9C9446632F8ED8C5669A0CA79 (SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* __this, SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___sslStream0, SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* ___securityOption1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m72B45AD30B00F61B8CE707A754239ADF7B4DBB28 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m72B45AD30B00F61B8CE707A754239ADF7B4DBB28_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowNameMismatchCertificate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowNameMismatchCertificate_mB1EDB7C7E998C9B2CF7CE4DFB8068BA3EFF78921_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) ;
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowCertificateChainErrors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowCertificateChainErrors_mF364E130DDDE4F8232FA804303C520D1DB32C21C_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) ;
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowUnstrustedCertificate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowUnstrustedCertificate_m297287899B106BA05B5F833F52986A90B49EDD66_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::get_ChainStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* X509Chain_get_ChainStatus_m30439103B52A0CF57962B89CFE0B6EF8F167965A (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate_get_Subject_m2568DA6469339937B44FCD5C7C69FF02934D075C (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* __this, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate_get_Issuer_m1922DC6FA16712898394AF2377B6D089BA2D169E (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t X509ChainStatus_get_Status_m58AB369B6D5CDF2436644C1936953058FBBDEF99_inline (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection SuperSocket.ClientEngine.SecurityOption::get_Certificates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* SecurityOption_get_Certificates_m5DFD0F44ED9A215D8A982E41D18327CFEA4C8F66_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) ;
// System.Security.Authentication.SslProtocols SuperSocket.ClientEngine.SecurityOption::get_EnabledSslProtocols()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SecurityOption_get_EnabledSslProtocols_mC7E74BF42854B811D79D7F8673BAB7192E6A9A87_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m01FD1C8EB17391A09FD93906811F9CDCC9DB1B7A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m01FD1C8EB17391A09FD93906811F9CDCC9DB1B7A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthenticateAsClientAsyncU3Ed__1_MoveNext_m93911B92E76779763869577CAAA018E664578343 (U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthenticateAsClientAsyncU3Ed__1_SetStateMachine_m71775CAF0FAD3FF295AC62F2E35BA0BF5CF6B78A (U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ClientSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession__ctor_m110A1594F63F019CAA6F1A874F753DD0E613528E (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) ;
// System.Net.EndPoint SuperSocket.ClientEngine.ClientSession::get_LocalEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ClientSession_get_LocalEndPoint_mF3ECCC5C8EEA5AC9705757E072D3BB6236A999D0_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ClientSession::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_LocalEndPoint_mD831A832AFA571CD9127D2057D49BC04164AE357_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) ;
// System.Int32 SuperSocket.ClientEngine.ClientSession::get_ReceiveBufferSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientSession_get_ReceiveBufferSize_m59353D95FD19AF22E44A70BB53C8B3ED12855993_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ClientSession::set_ReceiveBufferSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_ReceiveBufferSize_mC7359571F59312D93A36668A3151465D5F6D7097_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Net.DnsEndPoint::get_Host()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline (DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.TcpClientSession::set_HostName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TcpClientSession_set_HostName_m859EEF2978FB6389DE1A1FAE2E2B47F92EF26E2F_inline (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, String_t* ___value0, const RuntimeMethod* method) ;
// SuperSocket.ClientEngine.IProxyConnector SuperSocket.ClientEngine.ClientSession::get_Proxy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ClientSession_get_Proxy_mF2BC62F677AE8E50BC46F15B7B0E8C59522131D1_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mFD23F08F404AA392A844CC7E9C845D4F28ED6CEC (EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void SuperSocket.ClientEngine.ConnectedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedCallback__ctor_m6DAA355E984F3A1CD08967D05AC1BC6B0651ECE0 (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::ConnectAsync(System.Net.EndPoint,System.Net.EndPoint,SuperSocket.ClientEngine.ConnectedCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_ConnectAsync_m74BC656D31E575DA3907AB27F4B5A7D5744AAFEC (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint0, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___localEndPoint1, ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ___callback2, RuntimeObject* ___state3, const RuntimeMethod* method) ;
// System.Boolean SuperSocket.ClientEngine.ProxyEventArgs::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProxyEventArgs_get_Connected_m8A391B02F012434E52E559AFFF9A3DA8FE48EF61_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) ;
// System.String SuperSocket.ClientEngine.ProxyEventArgs::get_TargetHostName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProxyEventArgs_get_TargetHostName_m9337094046F7F4C35DAAE81DFE1E65533F416F58_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) ;
// System.Void System.Net.DnsEndPoint::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsEndPoint__ctor_m259B045DC765E7703F15CA12E7F9CD90C69B81E7 (DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* __this, String_t* ___host0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ProxyEventArgs::get_Socket()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ProxyEventArgs_get_Socket_mDF9D2F534DD7DA5B25C2ABDF95EDD17395D82280_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) ;
// System.Exception SuperSocket.ClientEngine.ProxyEventArgs::get_Exception()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ProxyEventArgs_get_Exception_m8C045D73C2B3EB103276CCB2BA163E5A9A2D78D3_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ClientSession::set_Client(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_Client_m7E4ED2242469AA906FC402D2AE413D49362C90A3_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) ;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* Socket_get_LocalEndPoint_m3A2B4E60F0096E2DB31F7C28EF3CDE148D256E26 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::get_RemoteEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* SocketAsyncEventArgs_get_RemoteEndPoint_mD2C9FA961E3B75726DC445E4CA1864015BD10185_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* Socket_get_RemoteEndPoint_m6A626481D55A640C7654B91BFDE00199C2C95479 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.String SuperSocket.ClientEngine.TcpClientSession::GetHostOfEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpClientSession_GetHostOfEndPoint_m3F0E7CC4A60A181AAE514A326C02DD209E3FFE42 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___endPoint0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Dispose_mED966D36CA8914F199BCE9497FFC5261AC99C1AC (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Shutdown(System.Net.Sockets.SocketShutdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Shutdown_mA7D259CF81614B311DD97C3748144FB1284683E3 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___how0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Int32 SuperSocket.ClientEngine.ClientSession::get_SendingQueueSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientSession_get_SendingQueueSize_m94DD655400F8F06CD2914FCB4B542601DB93AC3C_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.ArraySegment`1<System.Byte>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m12797C6DD4A7F6D34BCD7CB149848060CEA7827C (Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m12797C6DD4A7F6D34BCD7CB149848060CEA7827C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void SuperSocket.ClientEngine.ConcurrentBatchQueue`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Int32,System.Func`2<T,System.Boolean>)
inline void ConcurrentBatchQueue_1__ctor_m5B22CD1C4D185347C83F868754F15C4641213289 (ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6* __this, int32_t ___capacity0, Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* ___nullValidator1, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6*, int32_t, Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077*, const RuntimeMethod*))ConcurrentBatchQueue_1__ctor_m5B22CD1C4D185347C83F868754F15C4641213289_gshared)(__this, ___capacity0, ___nullValidator1, method);
}
// System.Void SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::.ctor()
inline void PosList_1__ctor_mE6DCFB008BA4AC4F54D0A0C0D1607794A8E79F5A (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* __this, const RuntimeMethod* method)
{
	((  void (*) (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3*, const RuntimeMethod*))PosList_1__ctor_mE6DCFB008BA4AC4F54D0A0C0D1607794A8E79F5A_gshared)(__this, method);
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::DetectConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_DetectConnected_m7C7C0C868D6D7E9EF66C260CF78457A925FBF881 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) ;
// SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::GetSendingQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TcpClientSession_GetSendingQueue_m1E0420F7A3A3930CAAC129CD7CD31F005073995C (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.TcpClientSession::DequeueSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_DequeueSend_m299C1F831A565F6D0C81016D670CA6FDFD6DDA3F (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) ;
// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::GetSendingItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* TcpClientSession_GetSendingItems_m1696980628849F9123C7E591506D85D35D67EDF7 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::Clear()
inline void List_1_Clear_m3E7851A50F010CDB1C66FD28BE5D6334A3AEC982_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9*, const RuntimeMethod*))List_1_Clear_m3E7851A50F010CDB1C66FD28BE5D6334A3AEC982_gshared_inline)(__this, method);
}
// System.Void SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::set_Position(System.Int32)
inline void PosList_1_set_Position_m455114C7C5067B62DFB35A48D5E496EBE4B4CAC3_inline (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3*, int32_t, const RuntimeMethod*))PosList_1_set_Position_m455114C7C5067B62DFB35A48D5E496EBE4B4CAC3_gshared_inline)(__this, ___value0, method);
}
// System.Void SuperSocket.ClientEngine.TcpClientSession/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD592D4EDFEBC3301526EF1D359FEE95EDFA5483 (U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy::.ctor(System.Net.EndPoint,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpConnectProxy__ctor_mCD3E2D4A203359F02543EBEFF457F9515E4EFA5F (HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, int32_t ___receiveBufferSize1, String_t* ___targetHostName2, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::.ctor(System.Net.EndPoint,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase__ctor_m1BE4CC44CFC7C758600A9F34AE2A9D22AA015D8B (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, String_t* ___targetHostHame1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Net.EndPoint SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::get_ProxyEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ProxyConnectorBase_get_ProxyEndPoint_m681C23F213B9DBE6302068701DAA933088453746_inline (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::OnException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Boolean SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::ValidateAsyncResult(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) ;
// System.Int32 System.Net.DnsEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsEndPoint_get_Port_m8BF7822883A89804034265E3582A1F9C09E7B98E_inline (DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectContext__ctor_mCD09AE9188C40711CF4FE2608DC99803387B152D (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::set_Socket(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectContext_set_Socket_mB1245D7E38495FA532053E5F03BD8889650F2D6E_inline (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.SearchMarkState`1<System.Byte>::.ctor(T[])
inline void SearchMarkState_1__ctor_mE7AED19883E4EC57D944DD09007B7E857861B370 (SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mark0, const RuntimeMethod* method)
{
	((  void (*) (SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))SearchMarkState_1__ctor_mE7AED19883E4EC57D944DD09007B7E857861B370_gshared)(__this, ___mark0, method);
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::set_SearchState(SuperSocket.ClientEngine.SearchMarkState`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectContext_set_SearchState_mF28E9367DF4DA96C817686849C3E325D59CBA2D4_inline (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartSend(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_StartSend_m263008DD196E8022B9839D7E4234C954E9D3A3F3 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::get_Socket()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ConnectContext_get_Socket_mD84BE701E5CDFF3D2AC351052CDCB62AA8D1801F_inline (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, const RuntimeMethod* method) ;
// SuperSocket.ClientEngine.SearchMarkState`1<System.Byte> SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::get_SearchState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* ConnectContext_get_SearchState_mF4C19FEE9FCDE5ED3BFF46927C4F124C41647967_inline (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, const RuntimeMethod* method) ;
// System.Int32 SuperSocket.ClientEngine.SearchMarkState`1<System.Byte>::get_Matched()
inline int32_t SearchMarkState_1_get_Matched_m17B7FD6E847B3CF1CA116853C3FB141BE86BDB29_inline (SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9*, const RuntimeMethod*))SearchMarkState_1_get_Matched_m17B7FD6E847B3CF1CA116853C3FB141BE86BDB29_gshared_inline)(__this, method);
}
// System.Int32 SuperSocket.ClientEngine.Extensions::SearchMark<System.Byte>(System.Collections.Generic.IList`1<T>,System.Int32,System.Int32,SuperSocket.ClientEngine.SearchMarkState`1<T>)
inline int32_t Extensions_SearchMark_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA119CD2303607713DBC09BFA160C19C005A74464 (RuntimeObject* ___source0, int32_t ___offset1, int32_t ___length2, SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* ___searchState3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, int32_t, SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9*, const RuntimeMethod*))Extensions_SearchMark_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA119CD2303607713DBC09BFA160C19C005A74464_gshared)(___source0, ___offset1, ___length2, ___searchState3, method);
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::OnException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, String_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBuffer(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_SetBuffer_m349C9A40CD8210266DAC1A12F3028C4951E7B896 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, int32_t ___offset0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.String SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::get_TargetHostHame()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProxyConnectorBase_get_TargetHostHame_mF2A1E074E2DBB4715BBA769F7B9445AB5B4AA953_inline (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::.ctor(System.Net.Sockets.Socket,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs__ctor_m05FB1D68CCF51A9A7D07EFBCF7FE8E0DD8A17B15 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, String_t* ___targetHostHame1, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::OnCompleted(SuperSocket.ClientEngine.ProxyEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_OnCompleted_m9AF2FA5B8454FEB2AEF13688DFC351672AE99781 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* ___args0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::set_ProxyEndPoint(System.Net.EndPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyConnectorBase_set_ProxyEndPoint_m574892E6EE33E076F767934C3E2652B4A0593E34_inline (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::set_TargetHostHame(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyConnectorBase_set_TargetHostHame_m8FF5D848A1039FC505DA782FAB88F5F1ECFAD55D_inline (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m6AF19A653D81488A6E294B6986F868FFC47F258F_inline (EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* __this, RuntimeObject* ___sender0, ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845*, RuntimeObject*, ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs__ctor_m8D43757816F752EA84AA4E553D13F9873F586EF8 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.Socks4Connector::.ctor(System.Net.EndPoint,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4Connector__ctor_mE53FD8CE6BAFE3765410912B76175CF95B64FF40 (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, String_t* ___userID1, const RuntimeMethod* method) ;
// System.String SuperSocket.ClientEngine.Proxy.Socks4Connector::get_UserID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.ReceiveState::set_Buffer(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiveState_set_Buffer_m647990F067EC0D5CD97FBA386F590CD40AF99B9F_inline (ReceiveState_t289EC0EBF10BB0FD948B3375B98ABF33D0BF20D9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::.ctor(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase__ctor_mC0E12606622D1C700603CD1CFA68A5A73F07EDA4 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.Socks4Connector::set_UserID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Socks4Connector_set_UserID_m94211BA29BDB5B013EA513EDEC5CE13625C462B7_inline (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.Net.IPAddress::GetAddressBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::.ctor(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs__ctor_m2C42B67A464115813EF4C439DF44187EEB3B4044 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocksContext__ctor_mE15A036B0F4A334F8AC4DDBC4B77E0576C2596C0 (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::set_TargetEndPoint(System.Net.EndPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocksContext_set_TargetEndPoint_m8DC922519D97CA65DAB5C1705F300CC722ECE21F_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::set_Socket(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocksContext_set_Socket_m4AEEB2974A95EE84FF7866AC416C61D5B87C3F21_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::set_State(SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocksContext_set_State_mE5CC638808BE688B270B1FE25479C0DE12F3C947_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, int32_t ___value0, const RuntimeMethod* method) ;
// SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksState SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocksContext_get_State_m5B58B760C950DFA5311A66150021FB933C26DA25_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::get_Socket()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) ;
// System.Boolean SuperSocket.ClientEngine.Proxy.Socks5Connector::ProcessAuthenticationResponse(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socks5Connector_ProcessAuthenticationResponse_mEE165B17783647982F78A60DA1F76E9ED51C0D90 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::SendHandshake(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector_SendHandshake_m752EA9F1064448CD0BE7DD7BD3AAFE035F939050 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::AutheticateWithUserNamePassword(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector_AutheticateWithUserNamePassword_mC1707CEF5FB5D1F4CDAA6C35F1C8EB6D9AC7C380 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte> SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::get_ReceivedData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared)(__this, ___collection0, method);
}
// System.Int32 SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::get_ExpectedLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocksContext_get_ExpectedLength_m5FA2806AD2AFD8ACF99AF6709053DDCE43377514_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
inline int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
inline uint8_t List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, int32_t, const RuntimeMethod*))List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_gshared)(__this, ___index0, method);
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::set_ExpectedLength(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocksContext_set_ExpectedLength_m9B8D92D1F17305814AE056721FC7AB7F563EB6E0_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::OnGetFullResponse(SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector_OnGetFullResponse_m5463E7F08C8B0A58F8B4A9649E5A89979B9A7B2D (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* ___context0, const RuntimeMethod* method) ;
// System.Net.EndPoint SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::get_TargetEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* SocksContext_get_TargetEndPoint_m170E6ACD631747CD93B267B278E6A6B0896F5C40_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
inline void List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, int32_t, const RuntimeMethod*))List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_gshared)(__this, ___capacity0, method);
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::set_ReceivedData(System.Collections.Generic.List`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocksContext_set_ReceivedData_m8AE58A4D022E2425E12EC5272E30584DE60C4118_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void SuperSocket.ClientEngine.ASCIIEncoding::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASCIIEncoding__cctor_m18A6B4D530F41A13FC25B66ED5D683F13BBF9579 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE95AC77F546997073DFA4C962A54CCF89C4BB544_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tA5273FBA5D4AE11BFE51679534392AC9A24725C1____9E3C9861D3BFAB772D93ADF529E320EEB7D5502F_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___m_Instance_16 = (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___m_Instance_16), (void*)(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80*)NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tA5273FBA5D4AE11BFE51679534392AC9A24725C1____9E3C9861D3BFAB772D93ADF529E320EEB7D5502F_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___byteToChar_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___byteToChar_19), (void*)L_1);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_3 = (Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2*)il2cpp_codegen_object_new(Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mE95AC77F546997073DFA4C962A54CCF89C4BB544(L_3, Dictionary_2__ctor_mE95AC77F546997073DFA4C962A54CCF89C4BB544_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_4, 0, (uint8_t)0, Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_5, 1, (uint8_t)1, Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_6, 2, (uint8_t)2, Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_7, 3, (uint8_t)3, Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_8, 4, (uint8_t)4, Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_9, 5, (uint8_t)5, Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_10, 6, (uint8_t)6, Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_11, 7, (uint8_t)7, Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_12 = L_11;
		NullCheck(L_12);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_12, 8, (uint8_t)8, Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_13 = L_12;
		NullCheck(L_13);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_13, ((int32_t)9), (uint8_t)((int32_t)9), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_14, ((int32_t)10), (uint8_t)((int32_t)10), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_15 = L_14;
		NullCheck(L_15);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_15, ((int32_t)11), (uint8_t)((int32_t)11), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_16 = L_15;
		NullCheck(L_16);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_16, ((int32_t)12), (uint8_t)((int32_t)12), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_17 = L_16;
		NullCheck(L_17);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_17, ((int32_t)13), (uint8_t)((int32_t)13), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_18 = L_17;
		NullCheck(L_18);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_18, ((int32_t)14), (uint8_t)((int32_t)14), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_19 = L_18;
		NullCheck(L_19);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_19, ((int32_t)15), (uint8_t)((int32_t)15), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_20 = L_19;
		NullCheck(L_20);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_20, ((int32_t)16), (uint8_t)((int32_t)16), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_21 = L_20;
		NullCheck(L_21);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_21, ((int32_t)17), (uint8_t)((int32_t)17), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_22 = L_21;
		NullCheck(L_22);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_22, ((int32_t)18), (uint8_t)((int32_t)18), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_23 = L_22;
		NullCheck(L_23);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_23, ((int32_t)19), (uint8_t)((int32_t)19), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_24 = L_23;
		NullCheck(L_24);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_24, ((int32_t)20), (uint8_t)((int32_t)20), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_25 = L_24;
		NullCheck(L_25);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_25, ((int32_t)21), (uint8_t)((int32_t)21), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_26 = L_25;
		NullCheck(L_26);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_26, ((int32_t)22), (uint8_t)((int32_t)22), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_27 = L_26;
		NullCheck(L_27);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_27, ((int32_t)23), (uint8_t)((int32_t)23), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_28 = L_27;
		NullCheck(L_28);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_28, ((int32_t)24), (uint8_t)((int32_t)24), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_29 = L_28;
		NullCheck(L_29);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_29, ((int32_t)25), (uint8_t)((int32_t)25), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_30 = L_29;
		NullCheck(L_30);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_30, ((int32_t)26), (uint8_t)((int32_t)26), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_31 = L_30;
		NullCheck(L_31);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_31, ((int32_t)27), (uint8_t)((int32_t)27), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_32 = L_31;
		NullCheck(L_32);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_32, ((int32_t)28), (uint8_t)((int32_t)28), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_33 = L_32;
		NullCheck(L_33);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_33, ((int32_t)29), (uint8_t)((int32_t)29), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_34 = L_33;
		NullCheck(L_34);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_34, ((int32_t)30), (uint8_t)((int32_t)30), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_35 = L_34;
		NullCheck(L_35);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_35, ((int32_t)31), (uint8_t)((int32_t)31), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_36 = L_35;
		NullCheck(L_36);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_36, ((int32_t)32), (uint8_t)((int32_t)32), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_37 = L_36;
		NullCheck(L_37);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_37, ((int32_t)33), (uint8_t)((int32_t)33), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_38 = L_37;
		NullCheck(L_38);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_38, ((int32_t)34), (uint8_t)((int32_t)34), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_39 = L_38;
		NullCheck(L_39);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_39, ((int32_t)35), (uint8_t)((int32_t)35), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_40 = L_39;
		NullCheck(L_40);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_40, ((int32_t)36), (uint8_t)((int32_t)36), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_41 = L_40;
		NullCheck(L_41);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_41, ((int32_t)37), (uint8_t)((int32_t)37), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_42 = L_41;
		NullCheck(L_42);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_42, ((int32_t)38), (uint8_t)((int32_t)38), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_43 = L_42;
		NullCheck(L_43);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_43, ((int32_t)39), (uint8_t)((int32_t)39), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_44 = L_43;
		NullCheck(L_44);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_44, ((int32_t)40), (uint8_t)((int32_t)40), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_45 = L_44;
		NullCheck(L_45);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_45, ((int32_t)41), (uint8_t)((int32_t)41), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_46 = L_45;
		NullCheck(L_46);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_46, ((int32_t)42), (uint8_t)((int32_t)42), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_47 = L_46;
		NullCheck(L_47);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_47, ((int32_t)43), (uint8_t)((int32_t)43), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_48 = L_47;
		NullCheck(L_48);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_48, ((int32_t)44), (uint8_t)((int32_t)44), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_49 = L_48;
		NullCheck(L_49);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_49, ((int32_t)45), (uint8_t)((int32_t)45), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_50 = L_49;
		NullCheck(L_50);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_50, ((int32_t)46), (uint8_t)((int32_t)46), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_51 = L_50;
		NullCheck(L_51);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_51, ((int32_t)47), (uint8_t)((int32_t)47), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_52 = L_51;
		NullCheck(L_52);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_52, ((int32_t)48), (uint8_t)((int32_t)48), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_53 = L_52;
		NullCheck(L_53);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_53, ((int32_t)49), (uint8_t)((int32_t)49), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_54 = L_53;
		NullCheck(L_54);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_54, ((int32_t)50), (uint8_t)((int32_t)50), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_55 = L_54;
		NullCheck(L_55);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_55, ((int32_t)51), (uint8_t)((int32_t)51), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_56 = L_55;
		NullCheck(L_56);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_56, ((int32_t)52), (uint8_t)((int32_t)52), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_57 = L_56;
		NullCheck(L_57);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_57, ((int32_t)53), (uint8_t)((int32_t)53), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_58 = L_57;
		NullCheck(L_58);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_58, ((int32_t)54), (uint8_t)((int32_t)54), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_59 = L_58;
		NullCheck(L_59);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_59, ((int32_t)55), (uint8_t)((int32_t)55), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_60 = L_59;
		NullCheck(L_60);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_60, ((int32_t)56), (uint8_t)((int32_t)56), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_61 = L_60;
		NullCheck(L_61);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_61, ((int32_t)57), (uint8_t)((int32_t)57), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_62 = L_61;
		NullCheck(L_62);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_62, ((int32_t)58), (uint8_t)((int32_t)58), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_63 = L_62;
		NullCheck(L_63);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_63, ((int32_t)59), (uint8_t)((int32_t)59), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_64 = L_63;
		NullCheck(L_64);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_64, ((int32_t)60), (uint8_t)((int32_t)60), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_65 = L_64;
		NullCheck(L_65);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_65, ((int32_t)61), (uint8_t)((int32_t)61), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_66 = L_65;
		NullCheck(L_66);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_66, ((int32_t)62), (uint8_t)((int32_t)62), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_67 = L_66;
		NullCheck(L_67);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_67, ((int32_t)63), (uint8_t)((int32_t)63), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_68 = L_67;
		NullCheck(L_68);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_68, ((int32_t)64), (uint8_t)((int32_t)64), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_69 = L_68;
		NullCheck(L_69);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_69, ((int32_t)65), (uint8_t)((int32_t)65), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_70 = L_69;
		NullCheck(L_70);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_70, ((int32_t)66), (uint8_t)((int32_t)66), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_71 = L_70;
		NullCheck(L_71);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_71, ((int32_t)67), (uint8_t)((int32_t)67), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_72 = L_71;
		NullCheck(L_72);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_72, ((int32_t)68), (uint8_t)((int32_t)68), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_73 = L_72;
		NullCheck(L_73);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_73, ((int32_t)69), (uint8_t)((int32_t)69), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_74 = L_73;
		NullCheck(L_74);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_74, ((int32_t)70), (uint8_t)((int32_t)70), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_75 = L_74;
		NullCheck(L_75);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_75, ((int32_t)71), (uint8_t)((int32_t)71), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_76 = L_75;
		NullCheck(L_76);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_76, ((int32_t)72), (uint8_t)((int32_t)72), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_77 = L_76;
		NullCheck(L_77);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_77, ((int32_t)73), (uint8_t)((int32_t)73), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_78 = L_77;
		NullCheck(L_78);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_78, ((int32_t)74), (uint8_t)((int32_t)74), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_79 = L_78;
		NullCheck(L_79);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_79, ((int32_t)75), (uint8_t)((int32_t)75), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_80 = L_79;
		NullCheck(L_80);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_80, ((int32_t)76), (uint8_t)((int32_t)76), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_81 = L_80;
		NullCheck(L_81);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_81, ((int32_t)77), (uint8_t)((int32_t)77), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_82 = L_81;
		NullCheck(L_82);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_82, ((int32_t)78), (uint8_t)((int32_t)78), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_83 = L_82;
		NullCheck(L_83);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_83, ((int32_t)79), (uint8_t)((int32_t)79), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_84 = L_83;
		NullCheck(L_84);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_84, ((int32_t)80), (uint8_t)((int32_t)80), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_85 = L_84;
		NullCheck(L_85);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_85, ((int32_t)81), (uint8_t)((int32_t)81), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_86 = L_85;
		NullCheck(L_86);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_86, ((int32_t)82), (uint8_t)((int32_t)82), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_87 = L_86;
		NullCheck(L_87);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_87, ((int32_t)83), (uint8_t)((int32_t)83), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_88 = L_87;
		NullCheck(L_88);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_88, ((int32_t)84), (uint8_t)((int32_t)84), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_89 = L_88;
		NullCheck(L_89);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_89, ((int32_t)85), (uint8_t)((int32_t)85), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_90 = L_89;
		NullCheck(L_90);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_90, ((int32_t)86), (uint8_t)((int32_t)86), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_91 = L_90;
		NullCheck(L_91);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_91, ((int32_t)87), (uint8_t)((int32_t)87), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_92 = L_91;
		NullCheck(L_92);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_92, ((int32_t)88), (uint8_t)((int32_t)88), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_93 = L_92;
		NullCheck(L_93);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_93, ((int32_t)89), (uint8_t)((int32_t)89), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_94 = L_93;
		NullCheck(L_94);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_94, ((int32_t)90), (uint8_t)((int32_t)90), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_95 = L_94;
		NullCheck(L_95);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_95, ((int32_t)91), (uint8_t)((int32_t)91), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_96 = L_95;
		NullCheck(L_96);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_96, ((int32_t)92), (uint8_t)((int32_t)92), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_97 = L_96;
		NullCheck(L_97);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_97, ((int32_t)93), (uint8_t)((int32_t)93), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_98 = L_97;
		NullCheck(L_98);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_98, ((int32_t)94), (uint8_t)((int32_t)94), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_99 = L_98;
		NullCheck(L_99);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_99, ((int32_t)95), (uint8_t)((int32_t)95), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_100 = L_99;
		NullCheck(L_100);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_100, ((int32_t)96), (uint8_t)((int32_t)96), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_101 = L_100;
		NullCheck(L_101);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_101, ((int32_t)97), (uint8_t)((int32_t)97), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_102 = L_101;
		NullCheck(L_102);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_102, ((int32_t)98), (uint8_t)((int32_t)98), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_103 = L_102;
		NullCheck(L_103);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_103, ((int32_t)99), (uint8_t)((int32_t)99), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_104 = L_103;
		NullCheck(L_104);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_104, ((int32_t)100), (uint8_t)((int32_t)100), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_105 = L_104;
		NullCheck(L_105);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_105, ((int32_t)101), (uint8_t)((int32_t)101), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_106 = L_105;
		NullCheck(L_106);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_106, ((int32_t)102), (uint8_t)((int32_t)102), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_107 = L_106;
		NullCheck(L_107);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_107, ((int32_t)103), (uint8_t)((int32_t)103), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_108 = L_107;
		NullCheck(L_108);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_108, ((int32_t)104), (uint8_t)((int32_t)104), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_109 = L_108;
		NullCheck(L_109);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_109, ((int32_t)105), (uint8_t)((int32_t)105), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_110 = L_109;
		NullCheck(L_110);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_110, ((int32_t)106), (uint8_t)((int32_t)106), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_111 = L_110;
		NullCheck(L_111);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_111, ((int32_t)107), (uint8_t)((int32_t)107), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_112 = L_111;
		NullCheck(L_112);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_112, ((int32_t)108), (uint8_t)((int32_t)108), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_113 = L_112;
		NullCheck(L_113);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_113, ((int32_t)109), (uint8_t)((int32_t)109), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_114 = L_113;
		NullCheck(L_114);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_114, ((int32_t)110), (uint8_t)((int32_t)110), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_115 = L_114;
		NullCheck(L_115);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_115, ((int32_t)111), (uint8_t)((int32_t)111), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_116 = L_115;
		NullCheck(L_116);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_116, ((int32_t)112), (uint8_t)((int32_t)112), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_117 = L_116;
		NullCheck(L_117);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_117, ((int32_t)113), (uint8_t)((int32_t)113), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_118 = L_117;
		NullCheck(L_118);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_118, ((int32_t)114), (uint8_t)((int32_t)114), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_119 = L_118;
		NullCheck(L_119);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_119, ((int32_t)115), (uint8_t)((int32_t)115), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_120 = L_119;
		NullCheck(L_120);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_120, ((int32_t)116), (uint8_t)((int32_t)116), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_121 = L_120;
		NullCheck(L_121);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_121, ((int32_t)117), (uint8_t)((int32_t)117), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_122 = L_121;
		NullCheck(L_122);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_122, ((int32_t)118), (uint8_t)((int32_t)118), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_123 = L_122;
		NullCheck(L_123);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_123, ((int32_t)119), (uint8_t)((int32_t)119), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_124 = L_123;
		NullCheck(L_124);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_124, ((int32_t)120), (uint8_t)((int32_t)120), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_125 = L_124;
		NullCheck(L_125);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_125, ((int32_t)121), (uint8_t)((int32_t)121), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_126 = L_125;
		NullCheck(L_126);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_126, ((int32_t)122), (uint8_t)((int32_t)122), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_127 = L_126;
		NullCheck(L_127);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_127, ((int32_t)123), (uint8_t)((int32_t)123), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_128 = L_127;
		NullCheck(L_128);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_128, ((int32_t)124), (uint8_t)((int32_t)124), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_129 = L_128;
		NullCheck(L_129);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_129, ((int32_t)125), (uint8_t)((int32_t)125), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_130 = L_129;
		NullCheck(L_130);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_130, ((int32_t)126), (uint8_t)((int32_t)126), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_131 = L_130;
		NullCheck(L_131);
		Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C(L_131, ((int32_t)127), (uint8_t)((int32_t)127), Dictionary_2_Add_m37F9B5C359DE3CFD2A62BB031117E411447D134C_RuntimeMethod_var);
		((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___charToByte_20 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___charToByte_20), (void*)L_131);
		ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* L_132 = (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80*)il2cpp_codegen_object_new(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		NullCheck(L_132);
		ASCIIEncoding__ctor_m1BFBB1A5C4BAEB260340201E39067F77CA3687C2(L_132, NULL);
		((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___m_Instance_16 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___m_Instance_16), (void*)L_132);
		return;
	}
}
// SuperSocket.ClientEngine.ASCIIEncoding SuperSocket.ClientEngine.ASCIIEncoding::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* ASCIIEncoding_get_Instance_mE48E7B19DC04EF89EA611BBD951D9D15F374261E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* L_0 = ((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___m_Instance_16;
		return L_0;
	}
}
// System.String SuperSocket.ClientEngine.ASCIIEncoding::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASCIIEncoding_get_WebName_mEA9F11A7A1E43F8EA102BDB05DBC4664C64D05CC (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9F2F72EC097903379459E66142A4FAE526CD47F);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA9F2F72EC097903379459E66142A4FAE526CD47F;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetHashCode_mDCFDD19613B0B79D69D5B7C27239D7B50B4B441D (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Text.Encoding::get_WebName() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Nullable`1<System.Char> SuperSocket.ClientEngine.ASCIIEncoding::get_FallbackCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 ASCIIEncoding_get_FallbackCharacter_m40CEA1C38EFD5B3EFD077BC4BBC2807D925F1A54 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_0 = __this->___fallbackCharacter_17;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ASCIIEncoding::set_FallbackCharacter(System.Nullable`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASCIIEncoding_set_FallbackCharacter_m98A8C6D177C63126FFF9B7A8910E4375C78B8810 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD6F12CE02B7F7450A58C0982BAFAA6BED3E511CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA057209BCC18E547BC30C63DCE33C5C295377FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* G_B5_0 = NULL;
	ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* G_B4_0 = NULL;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* G_B6_1 = NULL;
	{
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_0 = ___value0;
		__this->___fallbackCharacter_17 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_inline((&___value0), Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_2 = ((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___charToByte_20;
		Il2CppChar L_3;
		L_3 = Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6((&___value0), Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mD6F12CE02B7F7450A58C0982BAFAA6BED3E511CC(L_2, L_3, Dictionary_2_ContainsKey_mD6F12CE02B7F7450A58C0982BAFAA6BED3E511CC_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_004b;
		}
	}
	{
		Il2CppChar L_5;
		L_5 = Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6((&___value0), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var)));
		Il2CppChar L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)), &L_6);
		Il2CppChar L_8;
		L_8 = Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6((&___value0), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var)));
		int32_t L_9 = ((int32_t)L_8);
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0974B83F5DAA0399AA84C4632FE7DC0A04B18B)), L_7, L_10, NULL);
		EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4* L_12 = (EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		EncoderFallbackException__ctor_m02C50CF3B77FD14A41E0B4A803BFFF6B446189F5(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ASCIIEncoding_set_FallbackCharacter_m98A8C6D177C63126FFF9B7A8910E4375C78B8810_RuntimeMethod_var)));
	}

IL_004b:
	{
		bool L_13;
		L_13 = Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_inline((&___value0), Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_RuntimeMethod_var);
		G_B4_0 = __this;
		if (L_13)
		{
			G_B5_0 = __this;
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505));
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_14 = V_0;
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		goto IL_0076;
	}

IL_0060:
	{
		il2cpp_codegen_runtime_class_init_inline(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_15 = ((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___charToByte_20;
		Il2CppChar L_16;
		L_16 = Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6((&___value0), Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var);
		NullCheck(L_15);
		uint8_t L_17;
		L_17 = Dictionary_2_get_Item_mA057209BCC18E547BC30C63DCE33C5C295377FA6(L_15, L_16, Dictionary_2_get_Item_mA057209BCC18E547BC30C63DCE33C5C295377FA6_RuntimeMethod_var);
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C((&L_18), L_17, /*hidden argument*/Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
		G_B6_0 = L_18;
		G_B6_1 = G_B5_0;
	}

IL_0076:
	{
		NullCheck(G_B6_1);
		ASCIIEncoding_set_FallbackByte_m7BD85DF33CBD1AE5B5510C37A935E5F3199D73B3_inline(G_B6_1, G_B6_0, NULL);
		return;
	}
}
// System.Nullable`1<System.Byte> SuperSocket.ClientEngine.ASCIIEncoding::get_FallbackByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ASCIIEncoding_get_FallbackByte_m6B8FEAD4555FD0E7CD5D2ACA9D1A691367D78939 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_0 = __this->___U3CFallbackByteU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ASCIIEncoding::set_FallbackByte(System.Nullable`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASCIIEncoding_set_FallbackByte_m7BD85DF33CBD1AE5B5510C37A935E5F3199D73B3 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_0 = ___value0;
		__this->___U3CFallbackByteU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ASCIIEncoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASCIIEncoding__ctor_m1BFBB1A5C4BAEB260340201E39067F77CA3687C2 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding__ctor_m8EA83F1D99F2F28E4848E58ACC1421B5FB3341F2(__this, NULL);
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE((&L_0), ((int32_t)63), /*hidden argument*/Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE_RuntimeMethod_var);
		ASCIIEncoding_set_FallbackCharacter_m98A8C6D177C63126FFF9B7A8910E4375C78B8810(__this, L_0, NULL);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetBytes_mCFCBF19CB9F8352A89A6923AA4BAD372B20F3FEC (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_0;
		L_0 = ASCIIEncoding_get_FallbackByte_m6B8FEAD4555FD0E7CD5D2ACA9D1A691367D78939_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline((&V_0), Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___chars0;
		int32_t L_3 = ___charIndex1;
		int32_t L_4 = ___charCount2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bytes3;
		int32_t L_6 = ___byteIndex4;
		int32_t L_7;
		L_7 = ASCIIEncoding_GetBytesWithoutFallback_mF2B6AEF6E9C1E86302E80609A4231C682F8CCF64(__this, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_001e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___chars0;
		int32_t L_9 = ___charIndex1;
		int32_t L_10 = ___charCount2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes3;
		int32_t L_12 = ___byteIndex4;
		int32_t L_13;
		L_13 = ASCIIEncoding_GetBytesWithFallBack_m84395C997B392144F9108FA783ADC6DAB3992A68(__this, L_8, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetBytesWithFallBack(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetBytesWithFallBack_m84395C997B392144F9108FA783ADC6DAB3992A68 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF350936021870C0CEF374C3C2627F6B509307CF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_1 = NULL;
	uint8_t G_B4_0 = 0x0;
	int32_t G_B4_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_2 = NULL;
	{
		V_0 = 0;
		goto IL_0038;
	}

IL_0004:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___chars0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___charIndex1;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint16_t L_4 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		il2cpp_codegen_runtime_class_init_inline(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_5 = ((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___charToByte_20;
		Il2CppChar L_6 = V_1;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_mF350936021870C0CEF374C3C2627F6B509307CF9(L_5, L_6, (&V_2), Dictionary_2_TryGetValue_mF350936021870C0CEF374C3C2627F6B509307CF9_RuntimeMethod_var);
		V_3 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bytes3;
		int32_t L_9 = ___byteIndex4;
		int32_t L_10 = V_0;
		bool L_11 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		G_B2_1 = L_8;
		if (L_11)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
			G_B3_1 = L_8;
			goto IL_0032;
		}
	}
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_12;
		L_12 = ASCIIEncoding_get_FallbackByte_m6B8FEAD4555FD0E7CD5D2ACA9D1A691367D78939_inline(__this, NULL);
		V_4 = L_12;
		uint8_t L_13;
		L_13 = Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299((&V_4), Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_RuntimeMethod_var);
		G_B4_0 = L_13;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0033;
	}

IL_0032:
	{
		uint8_t L_14 = V_2;
		G_B4_0 = L_14;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0033:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (uint8_t)G_B4_0);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0038:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___charCount2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_18 = ___charCount2;
		return L_18;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetBytesWithoutFallback(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetBytesWithoutFallback_mF2B6AEF6E9C1E86302E80609A4231C682F8CCF64 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF350936021870C0CEF374C3C2627F6B509307CF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	uint8_t V_2 = 0x0;
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0004:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___chars0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___charIndex1;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint16_t L_4 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		il2cpp_codegen_runtime_class_init_inline(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		Dictionary_2_t2C7585A689C22162D302E5F23686EE1CE23065D2* L_5 = ((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___charToByte_20;
		Il2CppChar L_6 = V_1;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_mF350936021870C0CEF374C3C2627F6B509307CF9(L_5, L_6, (&V_2), Dictionary_2_TryGetValue_mF350936021870C0CEF374C3C2627F6B509307CF9_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Text.Encoding::get_WebName() */, __this);
		Il2CppChar L_9 = V_1;
		Il2CppChar L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)), &L_10);
		Il2CppChar L_12 = V_1;
		int32_t L_13 = ((int32_t)L_12);
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		String_t* L_15;
		L_15 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral755E71F8896E7ECC04A872934D8E5CD074CCE032)), L_8, L_11, L_14, NULL);
		EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4* L_16 = (EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		EncoderFallbackException__ctor_m02C50CF3B77FD14A41E0B4A803BFFF6B446189F5(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ASCIIEncoding_GetBytesWithoutFallback_mF2B6AEF6E9C1E86302E80609A4231C682F8CCF64_RuntimeMethod_var)));
	}

IL_003b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___bytes3;
		int32_t L_18 = ___byteIndex4;
		int32_t L_19 = V_0;
		uint8_t L_20 = V_2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, L_19))), (uint8_t)L_20);
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0047:
	{
		int32_t L_22 = V_0;
		int32_t L_23 = ___charCount2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_24 = ___charCount2;
		return L_24;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetChars_m339CF99A8E4CFF3EDE82996922C41BBE80A1CD40 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_0;
		L_0 = ASCIIEncoding_get_FallbackCharacter_m40CEA1C38EFD5B3EFD077BC4BBC2807D925F1A54_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_inline((&V_0), Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes0;
		int32_t L_3 = ___byteIndex1;
		int32_t L_4 = ___byteCount2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___chars3;
		int32_t L_6 = ___charIndex4;
		int32_t L_7;
		L_7 = ASCIIEncoding_GetCharsWithoutFallback_mC5DE0E4D21C7DF378DA00A620B870030290CB99D(__this, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bytes0;
		int32_t L_9 = ___byteIndex1;
		int32_t L_10 = ___byteCount2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ___chars3;
		int32_t L_12 = ___charIndex4;
		int32_t L_13;
		L_13 = ASCIIEncoding_GetCharsWithFallback_m4A40436917B99A06F33ADC42AD37F2DEC9346F6C(__this, L_8, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetCharsWithFallback(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetCharsWithFallback_m4A40436917B99A06F33ADC42AD37F2DEC9346F6C (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B4_0 = 0;
	{
		V_0 = 0;
		goto IL_0038;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___byteIndex1;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		uint8_t L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___byteToChar_19;
		NullCheck(L_6);
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___byteToChar_19;
		uint8_t L_8 = V_1;
		NullCheck(L_7);
		uint8_t L_9 = L_8;
		uint16_t L_10 = (uint16_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		G_B4_0 = ((int32_t)(L_10));
		goto IL_002b;
	}

IL_001d:
	{
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_11;
		L_11 = ASCIIEncoding_get_FallbackCharacter_m40CEA1C38EFD5B3EFD077BC4BBC2807D925F1A54_inline(__this, NULL);
		V_3 = L_11;
		Il2CppChar L_12;
		L_12 = Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6((&V_3), Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var);
		G_B4_0 = ((int32_t)(L_12));
	}

IL_002b:
	{
		V_2 = G_B4_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___chars3;
		int32_t L_14 = ___charIndex4;
		int32_t L_15 = V_0;
		Il2CppChar L_16 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_14, L_15))), (Il2CppChar)L_16);
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0038:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = ___byteCount2;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_20 = ___byteCount2;
		return L_20;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetCharsWithoutFallback(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetCharsWithoutFallback_mC5DE0E4D21C7DF378DA00A620B870030290CB99D (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___byteIndex1;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		uint8_t L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___byteToChar_19;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Text.Encoding::get_WebName() */, __this);
		uint8_t L_8 = V_1;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61EEF0E115682879C14AAB018206EAD62B187583)), L_7, L_10, NULL);
		EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4* L_12 = (EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncoderFallbackException_tB394A03AE9AEBD57DD480809A9EA1FD8B0C9E1E4_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		EncoderFallbackException__ctor_m02C50CF3B77FD14A41E0B4A803BFFF6B446189F5(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ASCIIEncoding_GetCharsWithoutFallback_mC5DE0E4D21C7DF378DA00A620B870030290CB99D_RuntimeMethod_var)));
	}

IL_0030:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___chars3;
		int32_t L_14 = ___charIndex4;
		int32_t L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = ((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___byteToChar_19;
		uint8_t L_17 = V_1;
		NullCheck(L_16);
		uint8_t L_18 = L_17;
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_14, L_15))), (Il2CppChar)L_19);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0042:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = ___byteCount2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_23 = ___byteCount2;
		return L_23;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetByteCount_m14B2507667365DCE427940DFC37AF5D655ECDF3D (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___count2;
		return L_0;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetCharCount_mEEF59ED3C7CDA43EA5E1F1C11A82C19FE3B4992F (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___count2;
		return L_0;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetMaxByteCount_m2BFBB5B3C45D6A6160DBB433BB53099FA3FE96B4 (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, int32_t ___charCount0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___charCount0;
		return L_0;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_GetMaxCharCount_m0A3554BE4EB28D31554D111E4843D6576BC1088A (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, int32_t ___byteCount0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___byteCount0;
		return L_0;
	}
}
// System.Int32 SuperSocket.ClientEngine.ASCIIEncoding::get_CharacterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASCIIEncoding_get_CharacterCount_m04D7233153EBCE8E08328328F6CC13B481CD67C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_StaticFields*)il2cpp_codegen_static_fields_for(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var))->___byteToChar_19;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
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
void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_Multicast(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* currentDelegate = reinterpret_cast<ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___socket0, ___state1, ___e2, ___exception3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenInst(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method)
{
	NullCheck(___socket0);
	typedef void (*FunctionPointerType) (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___socket0, ___state1, ___e2, ___exception3, method);
}
void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenStatic(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___socket0, ___state1, ___e2, ___exception3, method);
}
void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenStaticInvoker(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___socket0, ___state1, ___e2, ___exception3);
}
void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_ClosedStaticInvoker(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___socket0, ___state1, ___e2, ___exception3);
}
void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenVirtual(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method)
{
	NullCheck(___socket0);
	VirtualActionInvoker3< RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___socket0, ___state1, ___e2, ___exception3);
}
void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenInterface(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method)
{
	NullCheck(___socket0);
	InterfaceActionInvoker3< RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___socket0, ___state1, ___e2, ___exception3);
}
void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenGenericVirtual(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method)
{
	NullCheck(___socket0);
	GenericVirtualActionInvoker3< RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t* >::Invoke(method, ___socket0, ___state1, ___e2, ___exception3);
}
void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenGenericInterface(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method)
{
	NullCheck(___socket0);
	GenericInterfaceActionInvoker3< RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t* >::Invoke(method, ___socket0, ___state1, ___e2, ___exception3);
}
// System.Void SuperSocket.ClientEngine.ConnectedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedCallback__ctor_m6DAA355E984F3A1CD08967D05AC1BC6B0651ECE0 (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_Multicast;
}
// System.Void SuperSocket.ClientEngine.ConnectedCallback::Invoke(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88 (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___socket0, ___state1, ___e2, ___exception3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SuperSocket.ClientEngine.ConnectedCallback::BeginInvoke(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectedCallback_BeginInvoke_m22AE40070825C638E2071013833FBD5BAF56E5C9 (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	__d_args[0] = ___socket0;
	__d_args[1] = ___state1;
	__d_args[2] = ___e2;
	__d_args[3] = ___exception3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void SuperSocket.ClientEngine.ConnectedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedCallback_EndInvoke_m731EA3D98E6BA39F44D44C3A2B3F31DD88635D8C (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::SocketAsyncEventCompleted(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_SocketAsyncEventCompleted_m48C31DC6ECAD85AE4B50CFF1730BAA88C852427C (RuntimeObject* ___sender0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_SocketAsyncEventCompleted_m48C31DC6ECAD85AE4B50CFF1730BAA88C852427C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* V_0 = NULL;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e1;
		EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* L_1 = (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED*)il2cpp_codegen_object_new(EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_m3162B2AFD9F220E204A172584D64190CFE312CA1(L_1, NULL, (intptr_t)((void*)ConnectAsyncExtension_SocketAsyncEventCompleted_m48C31DC6ECAD85AE4B50CFF1730BAA88C852427C_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		SocketAsyncEventArgs_remove_Completed_mA062E9FA73100FB533E7681B7BB979E5139814F8(L_0, L_1, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline(L_2, NULL);
		V_0 = ((ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C*)CastclassClass((RuntimeObject*)L_3, ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C_il2cpp_TypeInfo_var));
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_4 = ___e1;
		NullCheck(L_4);
		SocketAsyncEventArgs_set_UserToken_m10B93BD715163BE1A9C813413BD5BD3C4209032D_inline(L_4, NULL, NULL);
		ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* L_5 = V_0;
		NullCheck(L_5);
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_6;
		L_6 = ConnectToken_get_Callback_mDB4BAE7AA209F4694BDCE943197FA9E4176599C7_inline(L_5, NULL);
		RuntimeObject* L_7 = ___sender0;
		ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ConnectToken_get_State_m78DBB4CF30AD06BB2A000000D46D2AEAB0FAAA57_inline(L_8, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_10 = ___e1;
		NullCheck(L_6);
		ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_inline(L_6, ((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)IsInstClass((RuntimeObject*)L_7, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), L_9, L_10, (Exception_t*)NULL, NULL);
		return;
	}
}
// System.Net.Sockets.SocketAsyncEventArgs SuperSocket.ClientEngine.ConnectAsyncExtension::CreateSocketAsyncEventArgs(System.Net.EndPoint,SuperSocket.ClientEngine.ConnectedCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ConnectAsyncExtension_CreateSocketAsyncEventArgs_m1F68507B2A46AA375A46C1AC5F825AEB061DDE8D (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint0, ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ___callback1, RuntimeObject* ___state2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_SocketAsyncEventCompleted_m48C31DC6ECAD85AE4B50CFF1730BAA88C852427C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)il2cpp_codegen_object_new(SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SocketAsyncEventArgs__ctor_m0D655E713579F9A0548D1889E29B09C19DA5A0B5(L_0, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = L_0;
		ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* L_2 = (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C*)il2cpp_codegen_object_new(ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConnectToken__ctor_m4F421219CECC1EBEE4F63DF7632038C7C073DF11(L_2, NULL);
		ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* L_3 = L_2;
		RuntimeObject* L_4 = ___state2;
		NullCheck(L_3);
		ConnectToken_set_State_mC4F0E28F37C21A92F4EFDFCCE65E4180DC066E50_inline(L_3, L_4, NULL);
		ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* L_5 = L_3;
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_6 = ___callback1;
		NullCheck(L_5);
		ConnectToken_set_Callback_m3FCE63A3DF8E001C9404D72570E59431669F1796_inline(L_5, L_6, NULL);
		NullCheck(L_1);
		SocketAsyncEventArgs_set_UserToken_m10B93BD715163BE1A9C813413BD5BD3C4209032D_inline(L_1, L_5, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = L_1;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_8 = ___remoteEndPoint0;
		NullCheck(L_7);
		SocketAsyncEventArgs_set_RemoteEndPoint_m63E183C33AA5B60D8331A1CEC30A008B6AC7206F_inline(L_7, L_8, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_9 = L_7;
		EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* L_10 = (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED*)il2cpp_codegen_object_new(EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EventHandler_1__ctor_m3162B2AFD9F220E204A172584D64190CFE312CA1(L_10, NULL, (intptr_t)((void*)ConnectAsyncExtension_SocketAsyncEventCompleted_m48C31DC6ECAD85AE4B50CFF1730BAA88C852427C_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		SocketAsyncEventArgs_add_Completed_mB0C757C44387F256E3F7AE0A373F90750D450805(L_9, L_10, NULL);
		return L_9;
	}
}
// System.Boolean SuperSocket.ClientEngine.ConnectAsyncExtension::PreferIPv4Stack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectAsyncExtension_PreferIPv4Stack_mAD5CBA57E31E0A4DC4D4FE2740C696F8F2428F21 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEC661363A0382D0139BA56B892955C28CF45793);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8(_stringLiteralCEC661363A0382D0139BA56B892955C28CF45793, NULL);
		return (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::ConnectAsync(System.Net.EndPoint,System.Net.EndPoint,SuperSocket.ClientEngine.ConnectedCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_ConnectAsync_m74BC656D31E575DA3907AB27F4B5A7D5744AAFEC (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint0, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___localEndPoint1, ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ___callback2, RuntimeObject* ___state3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* V_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___remoteEndPoint0;
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_1 = ___callback2;
		RuntimeObject* L_2 = ___state3;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3;
		L_3 = ConnectAsyncExtension_CreateSocketAsyncEventArgs_m1F68507B2A46AA375A46C1AC5F825AEB061DDE8D(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_4 = ___localEndPoint1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_5 = ___localEndPoint1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily() */, L_5);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_7, L_6, 1, 6, NULL);
		V_1 = L_7;
	}
	try
	{// begin try (depth: 1)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8 = V_1;
		NullCheck(L_8);
		Socket_set_ExclusiveAddressUse_m3F9A655F123086A025AD1736933B0754A5A6DF7F(L_8, (bool)0, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9 = V_1;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_10 = ___localEndPoint1;
		NullCheck(L_9);
		Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA(L_9, L_10, NULL);
		goto IL_0037;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002a;
		}
		throw e;
	}

CATCH_002a:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_11 = ___callback2;
		RuntimeObject* L_12 = ___state3;
		Exception_t* L_13 = V_2;
		NullCheck(L_11);
		ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_inline(L_11, (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL, L_12, (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)NULL, L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0049;
	}// end catch (depth: 1)

IL_0037:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_14 = V_1;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_15 = V_0;
		NullCheck(L_14);
		bool L_16;
		L_16 = Socket_ConnectAsync_mCA45934E444AC6FCEAA84A6ACEFE732AEE8482A2(L_14, L_15, NULL);
		return;
	}

IL_0040:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Socket_ConnectAsync_m7394995A918C2C755FEC3338305218EAD69D50FF(1, 6, L_17, NULL);
	}

IL_0049:
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
// System.Object SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectToken_get_State_m78DBB4CF30AD06BB2A000000D46D2AEAB0FAAA57 (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CStateU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::set_State(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToken_set_State_mC4F0E28F37C21A92F4EFDFCCE65E4180DC066E50 (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// SuperSocket.ClientEngine.ConnectedCallback SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ConnectToken_get_Callback_mDB4BAE7AA209F4694BDCE943197FA9E4176599C7 (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, const RuntimeMethod* method) 
{
	{
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_0 = __this->___U3CCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::set_Callback(SuperSocket.ClientEngine.ConnectedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToken_set_Callback_m3FCE63A3DF8E001C9404D72570E59431669F1796 (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ___value0, const RuntimeMethod* method) 
{
	{
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_0 = ___value0;
		__this->___U3CCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToken__ctor_m4F421219CECC1EBEE4F63DF7632038C7C073DF11 (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String SuperSocket.ClientEngine.Extensions::GetValue(System.Collections.Specialized.NameValueCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_GetValue_m3964C60649245A5B504380F101B15855071401AD (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___collection0, String_t* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_0 = ___collection0;
		String_t* L_1 = ___key1;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Extensions_GetValue_mFE6AFB8FB64380FDCB812E9A1DC59EAFBE325AA3(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.String SuperSocket.ClientEngine.Extensions::GetValue(System.Collections.Specialized.NameValueCollection,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_GetValue_mFE6AFB8FB64380FDCB812E9A1DC59EAFBE325AA3 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___collection0, String_t* ___key1, String_t* ___defaultValue2, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___key1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Extensions_GetValue_mFE6AFB8FB64380FDCB812E9A1DC59EAFBE325AA3_RuntimeMethod_var)));
	}

IL_0013:
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_3 = ___collection0;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_4 = ___defaultValue2;
		return L_4;
	}

IL_0018:
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_5 = ___collection0;
		String_t* L_6 = ___key1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_5, L_6, NULL);
		V_0 = L_7;
		String_t* L_8 = V_0;
		if (L_8)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_9 = ___defaultValue2;
		return L_9;
	}

IL_0025:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.Void SuperSocket.ClientEngine.Extensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions__cctor_m6CC02E8AD16789B2FEA793DEBBE8EFF57E2C2F8A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_StaticFields*)il2cpp_codegen_static_fields_for(Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_il2cpp_TypeInfo_var))->___m_Random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_StaticFields*)il2cpp_codegen_static_fields_for(Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_il2cpp_TypeInfo_var))->___m_Random_0), (void*)L_0);
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
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::.ctor(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs__ctor_m2C42B67A464115813EF4C439DF44187EEB3B4044 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___socket0;
		ProxyEventArgs__ctor_m7AC75245BE42D0F83143F9DAC7F10FED3A991609(__this, (bool)1, L_0, (String_t*)NULL, (Exception_t*)NULL, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::.ctor(System.Net.Sockets.Socket,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs__ctor_m05FB1D68CCF51A9A7D07EFBCF7FE8E0DD8A17B15 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, String_t* ___targetHostHame1, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___socket0;
		String_t* L_1 = ___targetHostHame1;
		ProxyEventArgs__ctor_m7AC75245BE42D0F83143F9DAC7F10FED3A991609(__this, (bool)1, L_0, L_1, (Exception_t*)NULL, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs__ctor_m8D43757816F752EA84AA4E553D13F9873F586EF8 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___exception0;
		ProxyEventArgs__ctor_m7AC75245BE42D0F83143F9DAC7F10FED3A991609(__this, (bool)0, (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL, (String_t*)NULL, L_0, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::.ctor(System.Boolean,System.Net.Sockets.Socket,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs__ctor_m7AC75245BE42D0F83143F9DAC7F10FED3A991609 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, bool ___connected0, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket1, String_t* ___targetHostName2, Exception_t* ___exception3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		bool L_0 = ___connected0;
		ProxyEventArgs_set_Connected_mCC9A44D394AD2AE34C3F88D41B059016C2C02BCB_inline(__this, L_0, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = ___socket1;
		ProxyEventArgs_set_Socket_m3E8300379B58C11AF923FE8898166C15CE3DA59B_inline(__this, L_1, NULL);
		String_t* L_2 = ___targetHostName2;
		ProxyEventArgs_set_TargetHostName_m27C586D7CCA42B3BD98293107B7D93101AE47C2D_inline(__this, L_2, NULL);
		Exception_t* L_3 = ___exception3;
		ProxyEventArgs_set_Exception_m77A739C36837E4C6148592C99FCD85BFBE567CB0_inline(__this, L_3, NULL);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.ProxyEventArgs::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProxyEventArgs_get_Connected_m8A391B02F012434E52E559AFFF9A3DA8FE48EF61 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CConnectedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::set_Connected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs_set_Connected_mCC9A44D394AD2AE34C3F88D41B059016C2C02BCB (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CConnectedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ProxyEventArgs::get_Socket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ProxyEventArgs_get_Socket_mDF9D2F534DD7DA5B25C2ABDF95EDD17395D82280 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CSocketU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::set_Socket(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs_set_Socket_m3E8300379B58C11AF923FE8898166C15CE3DA59B (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CSocketU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSocketU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Exception SuperSocket.ClientEngine.ProxyEventArgs::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ProxyEventArgs_get_Exception_m8C045D73C2B3EB103276CCB2BA163E5A9A2D78D3 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->___U3CExceptionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::set_Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs_set_Exception_m77A739C36837E4C6148592C99FCD85BFBE567CB0 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Exception_t* ___value0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___value0;
		__this->___U3CExceptionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String SuperSocket.ClientEngine.ProxyEventArgs::get_TargetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProxyEventArgs_get_TargetHostName_m9337094046F7F4C35DAAE81DFE1E65533F416F58 (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetHostNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ProxyEventArgs::set_TargetHostName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyEventArgs_set_TargetHostName_m27C586D7CCA42B3BD98293107B7D93101AE47C2D (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTargetHostNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetHostNameU3Ek__BackingField_4), (void*)L_0);
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
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession__ctor_m29F2A8765CD0A1EA759F0B058D12F2FFABBA8F5C (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, const RuntimeMethod* method) 
{
	{
		TcpClientSession__ctor_m5D4CAF3F324DD3313AA50290DC28B7FA41E8DF3A(__this, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::SocketEventArgsCompleted(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_SocketEventArgsCompleted_m9E927FEDFE6D2A87EDCD38383535D40691D38C5D (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, RuntimeObject* ___sender0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SocketAsyncEventArgs_get_LastOperation_m16A89968CA3F3185A1AE2E1DE1106CA6FBDF9AC3_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___sender0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = ___e1;
		TcpClientSession_ProcessConnect_m84104C6EE240AEF2D1223F51723645E2F8620AE1(__this, ((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)IsInstClass((RuntimeObject*)L_2, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), NULL, L_3, (Exception_t*)NULL, NULL);
		return;
	}

IL_0019:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_4 = ___e1;
		AsyncTcpSession_ProcessReceive_m491C6E3BB39B9EF6B21D3D9E315703E7593EA855(__this, L_4, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::SetBuffer(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_SetBuffer_m4F9D5824BB94A7594E9CE0BD190581BF30972730 (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___bufferSegment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___bufferSegment0;
		ClientSession_SetBuffer_mF2ECDE722ED953000BB353C9432EBA62CB7FA6D6(__this, L_0, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = __this->___m_SocketEventArgs_19;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = __this->___m_SocketEventArgs_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___bufferSegment0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_4;
		L_4 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___bufferSegment0), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		int32_t L_5;
		L_5 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___bufferSegment0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		NullCheck(L_2);
		SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221(L_2, L_3, L_4, L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::OnGetSocket(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_OnGetSocket_m2248641284AAE7C480F7B2E0BA4570BF41A35DFB (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0;
		L_0 = ClientSession_get_Buffer_mCE99012D5FAC9BC66D94D08DC719431040E4B87F_inline(__this, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(38 /* System.Int32 SuperSocket.ClientEngine.ClientSession::get_ReceiveBufferSize() */, __this);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		V_1 = ((int32_t)4096);
	}

IL_0021:
	{
		int32_t L_4 = V_1;
		VirtualActionInvoker1< int32_t >::Invoke(39 /* System.Void SuperSocket.ClientEngine.ClientSession::set_ReceiveBufferSize(System.Int32) */, __this, L_4);
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_7), L_6, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		ClientSession_set_Buffer_m7508DEAC6096ED1129727B9F2E476FE6AA6702DD_inline(__this, L_7, NULL);
	}

IL_0039:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = ___e0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_9;
		L_9 = ClientSession_get_Buffer_mCE99012D5FAC9BC66D94D08DC719431040E4B87F_inline(__this, NULL);
		V_0 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_11;
		L_11 = ClientSession_get_Buffer_mCE99012D5FAC9BC66D94D08DC719431040E4B87F_inline(__this, NULL);
		V_0 = L_11;
		int32_t L_12;
		L_12 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_0), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_13;
		L_13 = ClientSession_get_Buffer_mCE99012D5FAC9BC66D94D08DC719431040E4B87F_inline(__this, NULL);
		V_0 = L_13;
		int32_t L_14;
		L_14 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		NullCheck(L_8);
		SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221(L_8, L_10, L_12, L_14, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_15 = ___e0;
		__this->___m_SocketEventArgs_19 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SocketEventArgs_19), (void*)L_15);
		VirtualActionInvoker0::Invoke(36 /* System.Void SuperSocket.ClientEngine.ClientSession::OnConnected() */, __this);
		AsyncTcpSession_StartReceive_m9483AB3B0C46A1AB4457314F0E8E2BADDF5EBE6B(__this, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::BeginReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_BeginReceive_mE0949AC543C4807159C8B7391D47CCA4BD0D5E2E (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0;
		L_0 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(__this, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = __this->___m_SocketEventArgs_19;
		NullCheck(L_0);
		bool L_2;
		L_2 = Socket_ReceiveAsync_m158A08D073322BE419CDF11B449F07191F7576CA(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = __this->___m_SocketEventArgs_19;
		AsyncTcpSession_ProcessReceive_m491C6E3BB39B9EF6B21D3D9E315703E7593EA855(__this, L_3, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::ProcessReceive(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_ProcessReceive_m491C6E3BB39B9EF6B21D3D9E315703E7593EA855 (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		bool L_2;
		L_2 = TcpClientSession_EnsureSocketClosed_m7ED3CC83EA0A3D3A8BD2DCB084F974719CEEDB92(__this, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		VirtualActionInvoker0::Invoke(34 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
	}

IL_0016:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = ___e0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_3, NULL);
		bool L_5;
		L_5 = TcpClientSession_IsIgnorableSocketError_mB810DBC8ACEEB5C43D761120433CD0E63C6B87A1(__this, L_4, NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = ___e0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_6, NULL);
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_8 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_8, L_7, NULL);
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_8);
	}

IL_0035:
	{
		return;
	}

IL_0036:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_9 = ___e0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline(L_9, NULL);
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		bool L_11;
		L_11 = TcpClientSession_EnsureSocketClosed_m7ED3CC83EA0A3D3A8BD2DCB084F974719CEEDB92(__this, NULL);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		VirtualActionInvoker0::Invoke(34 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
	}

IL_004c:
	{
		return;
	}

IL_004d:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_12 = ___e0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805(L_12, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_14 = ___e0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline(L_14, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_16 = ___e0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline(L_16, NULL);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void SuperSocket.ClientEngine.ClientSession::OnDataReceived(System.Byte[],System.Int32,System.Int32) */, __this, L_13, L_15, L_17);
		AsyncTcpSession_StartReceive_m9483AB3B0C46A1AB4457314F0E8E2BADDF5EBE6B(__this, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::StartReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_StartReceive_m9483AB3B0C46A1AB4457314F0E8E2BADDF5EBE6B (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0;
		L_0 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(__this, NULL);
		V_1 = L_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = V_1;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
	}
	try
	{// begin try (depth: 1)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = V_1;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = __this->___m_SocketEventArgs_19;
		NullCheck(L_2);
		bool L_4;
		L_4 = Socket_ReceiveAsync_m158A08D073322BE419CDF11B449F07191F7576CA(L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0069;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0044;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Net.Sockets.SocketException)
		{
			V_2 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_5 = V_2;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_5, NULL);
			V_3 = L_6;
			int32_t L_7 = V_3;
			bool L_8;
			L_8 = TcpClientSession_IsIgnorableSocketError_mB810DBC8ACEEB5C43D761120433CD0E63C6B87A1(__this, L_7, NULL);
			if (L_8)
			{
				goto IL_0033;
			}
		}
		{
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_9 = V_2;
			VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_9);
		}

IL_0033:
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_10 = V_1;
			bool L_11;
			L_11 = TcpClientSession_EnsureSocketClosed_mAF81B14078A8FC9A9785DF8FDC269C119F0DD709(__this, L_10, NULL);
			if (!L_11)
			{
				goto IL_0042;
			}
		}
		{
			VirtualActionInvoker0::Invoke(34 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
		}

IL_0042:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0078;
		}
	}// end catch (depth: 1)

CATCH_0044:
	{// begin catch(System.Exception)
		{
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_12 = V_4;
			bool L_13;
			L_13 = VirtualFuncInvoker1< bool, Exception_t* >::Invoke(41 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_12);
			if (L_13)
			{
				goto IL_0058;
			}
		}
		{
			Exception_t* L_14 = V_4;
			VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_14);
		}

IL_0058:
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = V_1;
			bool L_16;
			L_16 = TcpClientSession_EnsureSocketClosed_mAF81B14078A8FC9A9785DF8FDC269C119F0DD709(__this, L_15, NULL);
			if (!L_16)
			{
				goto IL_0067;
			}
		}
		{
			VirtualActionInvoker0::Invoke(34 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
		}

IL_0067:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0078;
		}
	}// end catch (depth: 1)

IL_0069:
	{
		bool L_17 = V_0;
		if (L_17)
		{
			goto IL_0078;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_18 = __this->___m_SocketEventArgs_19;
		AsyncTcpSession_ProcessReceive_m491C6E3BB39B9EF6B21D3D9E315703E7593EA855(__this, L_18, NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::SendInternal(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_SendInternal_mC979455BE5A8D3AAF766FA6F461435DDA02B5D11 (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* ___items0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTcpSession_Sending_Completed_m63235D684EBE711C65AE05B69EB4E7F20EE60DBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = __this->___m_SocketEventArgsSend_20;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)il2cpp_codegen_object_new(SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SocketAsyncEventArgs__ctor_m0D655E713579F9A0548D1889E29B09C19DA5A0B5(L_1, NULL);
		__this->___m_SocketEventArgsSend_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SocketEventArgsSend_20), (void*)L_1);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = __this->___m_SocketEventArgsSend_20;
		EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* L_3 = (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED*)il2cpp_codegen_object_new(EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_m3162B2AFD9F220E204A172584D64190CFE312CA1(L_3, __this, (intptr_t)((void*)AsyncTcpSession_Sending_Completed_m63235D684EBE711C65AE05B69EB4E7F20EE60DBD_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		SocketAsyncEventArgs_add_Completed_mB0C757C44387F256E3F7AE0A373F90750D450805(L_2, L_3, NULL);
	}

IL_002a:
	{
	}
	try
	{// begin try (depth: 1)
		{
			PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_4 = ___items0;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_inline(L_4, List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_RuntimeMethod_var);
			if ((((int32_t)L_5) <= ((int32_t)1)))
			{
				goto IL_005d_1;
			}
		}
		{
			SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = __this->___m_SocketEventArgsSend_20;
			NullCheck(L_6);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805(L_6, NULL);
			if (!L_7)
			{
				goto IL_004f_1;
			}
		}
		{
			SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = __this->___m_SocketEventArgsSend_20;
			NullCheck(L_8);
			SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221(L_8, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		}

IL_004f_1:
		{
			SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_9 = __this->___m_SocketEventArgsSend_20;
			PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_10 = ___items0;
			NullCheck(L_9);
			SocketAsyncEventArgs_set_BufferList_m385B75BA485FAB0BD793D5280D21692C9868F194(L_9, L_10, NULL);
			goto IL_00a3_1;
		}

IL_005d_1:
		{
			PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_11 = ___items0;
			NullCheck(L_11);
			ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_12;
			L_12 = List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770(L_11, 0, List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_RuntimeMethod_var);
			V_1 = L_12;
		}
		try
		{// begin try (depth: 2)
			{
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_13 = __this->___m_SocketEventArgsSend_20;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = SocketAsyncEventArgs_get_BufferList_mD9E837C74ED11F81EC7076E532FA5067DCCAB173_inline(L_13, NULL);
				if (!L_14)
				{
					goto IL_007e_2;
				}
			}
			{
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_15 = __this->___m_SocketEventArgsSend_20;
				NullCheck(L_15);
				SocketAsyncEventArgs_set_BufferList_m385B75BA485FAB0BD793D5280D21692C9868F194(L_15, (RuntimeObject*)NULL, NULL);
			}

IL_007e_2:
			{
				goto IL_0083_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0080_1;
			}
			throw e;
		}

CATCH_0080_1:
		{// begin catch(System.Object)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0083_1;
		}// end catch (depth: 2)

IL_0083_1:
		{
			SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_16 = __this->___m_SocketEventArgsSend_20;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
			L_17 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
			int32_t L_18;
			L_18 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
			int32_t L_19;
			L_19 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
			NullCheck(L_16);
			SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221(L_16, L_17, L_18, L_19, NULL);
		}

IL_00a3_1:
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_20;
			L_20 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(__this, NULL);
			SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_21 = __this->___m_SocketEventArgsSend_20;
			NullCheck(L_20);
			bool L_22;
			L_22 = Socket_SendAsync_m0492E6DD02BBA2878FC8BAD3770F619B57370A26(L_20, L_21, NULL);
			V_0 = L_22;
			goto IL_00f7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b7;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d9;
		}
		throw e;
	}

CATCH_00b7:
	{// begin catch(System.Net.Sockets.SocketException)
		{
			V_2 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_23 = V_2;
			NullCheck(L_23);
			int32_t L_24;
			L_24 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_23, NULL);
			V_3 = L_24;
			bool L_25;
			L_25 = TcpClientSession_EnsureSocketClosed_m7ED3CC83EA0A3D3A8BD2DCB084F974719CEEDB92(__this, NULL);
			if (!L_25)
			{
				goto IL_00d7;
			}
		}
		{
			int32_t L_26 = V_3;
			bool L_27;
			L_27 = TcpClientSession_IsIgnorableSocketError_mB810DBC8ACEEB5C43D761120433CD0E63C6B87A1(__this, L_26, NULL);
			if (L_27)
			{
				goto IL_00d7;
			}
		}
		{
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_28 = V_2;
			VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_28);
		}

IL_00d7:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_010c;
		}
	}// end catch (depth: 1)

CATCH_00d9:
	{// begin catch(System.Exception)
		{
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			bool L_29;
			L_29 = TcpClientSession_EnsureSocketClosed_m7ED3CC83EA0A3D3A8BD2DCB084F974719CEEDB92(__this, NULL);
			if (!L_29)
			{
				goto IL_00f5;
			}
		}
		{
			Exception_t* L_30 = V_4;
			bool L_31;
			L_31 = VirtualFuncInvoker1< bool, Exception_t* >::Invoke(41 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_30);
			if (!L_31)
			{
				goto IL_00f5;
			}
		}
		{
			Exception_t* L_32 = V_4;
			VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_32);
		}

IL_00f5:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_010c;
		}
	}// end catch (depth: 1)

IL_00f7:
	{
		bool L_33 = V_0;
		if (L_33)
		{
			goto IL_010c;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_34;
		L_34 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(__this, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_35 = __this->___m_SocketEventArgsSend_20;
		AsyncTcpSession_Sending_Completed_m63235D684EBE711C65AE05B69EB4E7F20EE60DBD(__this, L_34, L_35, NULL);
	}

IL_010c:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::Sending_Completed(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_Sending_Completed_m63235D684EBE711C65AE05B69EB4E7F20EE60DBD (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, RuntimeObject* ___sender0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0046;
		}
	}

IL_0010:
	{
		bool L_4;
		L_4 = TcpClientSession_EnsureSocketClosed_m7ED3CC83EA0A3D3A8BD2DCB084F974719CEEDB92(__this, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		VirtualActionInvoker0::Invoke(34 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
	}

IL_001e:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_5 = ___e1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = ___e1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_7, NULL);
		bool L_9;
		L_9 = TcpClientSession_IsIgnorableSocketError_mB810DBC8ACEEB5C43D761120433CD0E63C6B87A1(__this, L_8, NULL);
		if (L_9)
		{
			goto IL_0045;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_10 = ___e1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_10, NULL);
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_12 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_12, L_11, NULL);
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_12);
	}

IL_0045:
	{
		return;
	}

IL_0046:
	{
		TcpClientSession_OnSendingCompleted_m67F5E56BDB2F34667DF8D4A553BFF8A07AB6B014(__this, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::OnClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_OnClosed_m67EB634D4A4D38B29EAE2DA3DC9117D46C11C174 (AsyncTcpSession_tA786E6183B3548605C6E026B51C9546FA1E6C447* __this, const RuntimeMethod* method) 
{
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = __this->___m_SocketEventArgsSend_20;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = __this->___m_SocketEventArgsSend_20;
		NullCheck(L_1);
		SocketAsyncEventArgs_Dispose_m6DCE1086200FEDE70AFC93B221810F02334FCEA1(L_1, NULL);
		__this->___m_SocketEventArgsSend_20 = (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SocketEventArgsSend_20), (void*)(SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)NULL);
	}

IL_001a:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = __this->___m_SocketEventArgs_19;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = __this->___m_SocketEventArgs_19;
		NullCheck(L_3);
		SocketAsyncEventArgs_Dispose_m6DCE1086200FEDE70AFC93B221810F02334FCEA1(L_3, NULL);
		__this->___m_SocketEventArgs_19 = (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SocketEventArgs_19), (void*)(SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)NULL);
	}

IL_0034:
	{
		ClientSession_OnClosed_m7DA242361982774030103B991F4914FCA972E1A1(__this, NULL);
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
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession__ctor_m9B1AD6CF5414CFA8A57D78A8AFEECFBF63D7187D (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, const RuntimeMethod* method) 
{
	{
		TcpClientSession__ctor_m5D4CAF3F324DD3313AA50290DC28B7FA41E8DF3A(__this, NULL);
		return;
	}
}
// SuperSocket.ClientEngine.SecurityOption SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::get_Security()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* AuthenticatedStreamTcpSession_get_Security_mB42BAC8CCEF9B17C8ACD86D6A7F29BD9B855ECCB (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, const RuntimeMethod* method) 
{
	{
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_0 = __this->___U3CSecurityU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::set_Security(SuperSocket.ClientEngine.SecurityOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_set_Security_mF4887D4320E2A48A83A99BE12442176EA04E134C (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* ___value0, const RuntimeMethod* method) 
{
	{
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_0 = ___value0;
		__this->___U3CSecurityU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSecurityU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::SocketEventArgsCompleted(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_SocketEventArgsCompleted_mC14EA646EDAA9D5A44D3EB5FF2B13C949C587C1B (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, RuntimeObject* ___sender0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___sender0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = ___e1;
		TcpClientSession_ProcessConnect_m84104C6EE240AEF2D1223F51723645E2F8620AE1(__this, ((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)IsInstClass((RuntimeObject*)L_0, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), NULL, L_1, (Exception_t*)NULL, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::OnGetSocket(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_OnGetSocket_m8DA546CF67777E40307EA6ACC17B5FC68D63F90A (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0;
		L_0 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(__this, NULL);
		VirtualActionInvoker1< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* >::Invoke(45 /* System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::StartAuthenticatedStream(System.Net.Sockets.Socket) */, __this, L_0);
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		{
			V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_1 = V_0;
			bool L_2;
			L_2 = VirtualFuncInvoker1< bool, Exception_t* >::Invoke(41 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_1);
			if (L_2)
			{
				goto IL_001f;
			}
		}
		{
			Exception_t* L_3 = V_0;
			VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_3);
		}

IL_001f:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0021;
		}
	}// end catch (depth: 1)

IL_0021:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::OnAuthenticatedStreamConnected(System.Net.Security.AuthenticatedStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_OnAuthenticatedStreamConnected_m7FACF0723B3A1B2188DC1B60A906A8DBD6D63F7D (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* L_0 = ___stream0;
		__this->___m_Stream_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stream_19), (void*)L_0);
		VirtualActionInvoker0::Invoke(36 /* System.Void SuperSocket.ClientEngine.ClientSession::OnConnected() */, __this);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1;
		L_1 = ClientSession_get_Buffer_mCE99012D5FAC9BC66D94D08DC719431040E4B87F_inline(__this, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(38 /* System.Int32 SuperSocket.ClientEngine.ClientSession::get_ReceiveBufferSize() */, __this);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		V_1 = ((int32_t)4096);
	}

IL_002e:
	{
		int32_t L_5 = V_1;
		VirtualActionInvoker1< int32_t >::Invoke(39 /* System.Void SuperSocket.ClientEngine.ClientSession::set_ReceiveBufferSize(System.Int32) */, __this, L_5);
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_8), L_7, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		ClientSession_set_Buffer_m7508DEAC6096ED1129727B9F2E476FE6AA6702DD_inline(__this, L_8, NULL);
	}

IL_0046:
	{
		AuthenticatedStreamTcpSession_BeginRead_m2D1406E59791E465F9DA73E97679A198C4F1B707(__this, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::BeginRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_BeginRead_m2D1406E59791E465F9DA73E97679A198C4F1B707 (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, const RuntimeMethod* method) 
{
	{
		AuthenticatedStreamTcpSession_ReadAsync_m175B28054184F3A64942017545BB831A575AF7E8(__this, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::ReadAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_ReadAsync_m175B28054184F3A64942017545BB831A575AF7E8 (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m4C239464A8A1ABB1F1CE089F2A8AA37DF954D4B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4 L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2 = L_1.___U3CU3Et__builder_1;
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m4C239464A8A1ABB1F1CE089F2A8AA37DF954D4B8((&V_1), (&V_0), AsyncVoidMethodBuilder_Start_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m4C239464A8A1ABB1F1CE089F2A8AA37DF954D4B8_RuntimeMethod_var);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::IsIgnorableException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticatedStreamTcpSession_IsIgnorableException_m813AC936C40AB3DD61028394619000D513000C84 (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___e0;
		bool L_1;
		L_1 = TcpClientSession_IsIgnorableException_m3A3F855D8E1AE68B8F3B19EE552798C89EF24719(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		Exception_t* L_2 = ___e0;
		if (!((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IsInstClass((RuntimeObject*)L_2, IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)))
		{
			goto IL_0043;
		}
	}
	{
		Exception_t* L_3 = ___e0;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_3, NULL);
		if (!((ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)IsInstClass((RuntimeObject*)L_4, ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)1;
	}

IL_0022:
	{
		Exception_t* L_5 = ___e0;
		NullCheck(L_5);
		Exception_t* L_6;
		L_6 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_5, NULL);
		if (!((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IsInstClass((RuntimeObject*)L_6, IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)))
		{
			goto IL_0043;
		}
	}
	{
		Exception_t* L_7 = ___e0;
		NullCheck(L_7);
		Exception_t* L_8;
		L_8 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_7, NULL);
		NullCheck(L_8);
		Exception_t* L_9;
		L_9 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_8, NULL);
		if (!((ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)IsInstClass((RuntimeObject*)L_9, ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)1;
	}

IL_0043:
	{
		return (bool)0;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::SendInternal(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_SendInternal_mED133007ED4740258A538BA99B7B255D6EEA9666 (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* ___items0, const RuntimeMethod* method) 
{
	{
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_0 = ___items0;
		AuthenticatedStreamTcpSession_SendInternalAsync_mB384E6FEA3B5C19FA8A905F987E242E76F2D621D(__this, L_0, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::SendInternalAsync(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_SendInternalAsync_mB384E6FEA3B5C19FA8A905F987E242E76F2D621D (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* ___items0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mFEB251EE875950B981410FED7258CAEAD335E756_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_0 = ___items0;
		(&V_0)->___items_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___items_2), (void*)L_0);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_1;
		L_1 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF L_2 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_3 = L_2.___U3CU3Et__builder_1;
		V_1 = L_3;
		AsyncVoidMethodBuilder_Start_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mFEB251EE875950B981410FED7258CAEAD335E756((&V_1), (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mFEB251EE875950B981410FED7258CAEAD335E756_RuntimeMethod_var);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_Close_m2D0B734DA76DC120EC7F547B4E159BB616B107C4 (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, const RuntimeMethod* method) 
{
	AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* V_0 = NULL;
	{
		AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* L_0 = __this->___m_Stream_19;
		V_0 = L_0;
		AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* L_2 = V_0;
		NullCheck(L_2);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_2, NULL);
		__this->___m_Stream_19 = (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stream_19), (void*)(AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39*)NULL);
	}

IL_0017:
	{
		TcpClientSession_Close_m7393A6EBDDC6E7EFC09E1C14D5762568D1193301(__this, NULL);
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
// System.Net.Security.AuthenticatedStream SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* StreamAsyncState_get_Stream_m42878D97C272BC6E8C15A0C3D44C66EFF2CBD988 (StreamAsyncState_t5B9B97445B4A025B7BEEF1D62A6ED5F7F26DC2E5* __this, const RuntimeMethod* method) 
{
	{
		AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* L_0 = __this->___U3CStreamU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::set_Stream(System.Net.Security.AuthenticatedStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamAsyncState_set_Stream_m1FAE771AD094F9104D0B41C5BB199A84FAA724F7 (StreamAsyncState_t5B9B97445B4A025B7BEEF1D62A6ED5F7F26DC2E5* __this, AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* ___value0, const RuntimeMethod* method) 
{
	{
		AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* L_0 = ___value0;
		__this->___U3CStreamU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStreamU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Net.Sockets.Socket SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* StreamAsyncState_get_Client_m3DA9BAAE8F77C74249C21362FB95800A13F9F116 (StreamAsyncState_t5B9B97445B4A025B7BEEF1D62A6ED5F7F26DC2E5* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CClientU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::set_Client(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamAsyncState_set_Client_m0B7A9AE323675F3C4EB92AF23B14DF2522CAA3BB (StreamAsyncState_t5B9B97445B4A025B7BEEF1D62A6ED5F7F26DC2E5* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::get_SendingItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* StreamAsyncState_get_SendingItems_m3D5C371902F7788150814049EB3CD9BDBFAE20EE (StreamAsyncState_t5B9B97445B4A025B7BEEF1D62A6ED5F7F26DC2E5* __this, const RuntimeMethod* method) 
{
	{
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_0 = __this->___U3CSendingItemsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::set_SendingItems(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamAsyncState_set_SendingItems_mCF78C2CDD546D45190F31DE348EB39835513044E (StreamAsyncState_t5B9B97445B4A025B7BEEF1D62A6ED5F7F26DC2E5* __this, PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* ___value0, const RuntimeMethod* method) 
{
	{
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_0 = ___value0;
		__this->___U3CSendingItemsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSendingItemsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamAsyncState__ctor_m88418AA5E4478FA48DD7C55F511CCF1733BC0F19 (StreamAsyncState_t5B9B97445B4A025B7BEEF1D62A6ED5F7F26DC2E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__12_MoveNext_m3E47F476278E1B0524B52D3258A4AB1695BA6884 (U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m0CCF791057801C4CCC0D370B8EEF67A2AB525039_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* V_1 = NULL;
	int32_t V_2 = 0;
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_003e_1;
			}
		}
		{
			goto IL_0150_1;
		}

IL_0016_1:
		{
			AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_3 = V_1;
			NullCheck(L_3);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4;
			L_4 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(L_3, NULL);
			if (!L_4)
			{
				goto IL_0026_1;
			}
		}
		{
			AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_5 = V_1;
			NullCheck(L_5);
			AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* L_6 = L_5->___m_Stream_19;
			if (L_6)
			{
				goto IL_002b_1;
			}
		}

IL_0026_1:
		{
			goto IL_0176;
		}

IL_002b_1:
		{
			AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_7 = V_1;
			NullCheck(L_7);
			ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_8;
			L_8 = ClientSession_get_Buffer_mCE99012D5FAC9BC66D94D08DC719431040E4B87F_inline(L_7, NULL);
			__this->___U3CbufferU3E5__2_4 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2_4))->____array_1), (void*)NULL);
			__this->___U3ClengthU3E5__1_3 = 0;
		}

IL_003e_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_9 = V_0;
				if (!L_9)
				{
					goto IL_00a5_2;
				}
			}
			{
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_10 = V_1;
				NullCheck(L_10);
				AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* L_11 = L_10->___m_Stream_19;
				ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_12 = (&__this->___U3CbufferU3E5__2_4);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
				L_13 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline(L_12, ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
				ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_14 = (&__this->___U3CbufferU3E5__2_4);
				int32_t L_15;
				L_15 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline(L_14, ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
				ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_16 = (&__this->___U3CbufferU3E5__2_4);
				int32_t L_17;
				L_17 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline(L_16, ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18;
				L_18 = CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB(NULL);
				NullCheck(L_11);
				Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_19;
				L_19 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(25 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_11, L_13, L_15, L_17, L_18);
				NullCheck(L_19);
				TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_20;
				L_20 = Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843(L_19, Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_RuntimeMethod_var);
				V_3 = L_20;
				bool L_21;
				L_21 = TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643((&V_3), TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_00c1_2;
				}
			}
			{
				int32_t L_22 = 0;
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
				TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_23 = V_3;
				__this->___U3CU3Eu__1_5 = L_23;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_24 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m0CCF791057801C4CCC0D370B8EEF67A2AB525039(L_24, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4_m0CCF791057801C4CCC0D370B8EEF67A2AB525039_RuntimeMethod_var);
				goto IL_0189;
			}

IL_00a5_2:
			{
				TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_25 = __this->___U3CU3Eu__1_5;
				V_3 = L_25;
				TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* L_26 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E));
				int32_t L_27 = (-1);
				V_0 = L_27;
				__this->___U3CU3E1__state_0 = L_27;
			}

IL_00c1_2:
			{
				int32_t L_28;
				L_28 = TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80((&V_3), TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_RuntimeMethod_var);
				il2cpp_codegen_initobj((&V_3), sizeof(TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E));
				V_2 = L_28;
				int32_t L_29 = V_2;
				__this->___U3ClengthU3E5__1_3 = L_29;
				goto IL_0104_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00da_1;
			}
			throw e;
		}

CATCH_00da_1:
		{// begin catch(System.Exception)
			{
				V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_30 = V_1;
				Exception_t* L_31 = V_4;
				NullCheck(L_30);
				bool L_32;
				L_32 = VirtualFuncInvoker1< bool, Exception_t* >::Invoke(41 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, L_30, L_31);
				if (L_32)
				{
					goto IL_00ee_1;
				}
			}
			{
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_33 = V_1;
				Exception_t* L_34 = V_4;
				NullCheck(L_33);
				VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, L_33, L_34);
			}

IL_00ee_1:
			{
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_35 = V_1;
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_36 = V_1;
				NullCheck(L_36);
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_37;
				L_37 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(L_36, NULL);
				NullCheck(L_35);
				bool L_38;
				L_38 = TcpClientSession_EnsureSocketClosed_mAF81B14078A8FC9A9785DF8FDC269C119F0DD709(L_35, L_37, NULL);
				if (!L_38)
				{
					goto IL_0102_1;
				}
			}
			{
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_39 = V_1;
				NullCheck(L_39);
				VirtualActionInvoker0::Invoke(34 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, L_39);
			}

IL_0102_1:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0176;
			}
		}// end catch (depth: 2)

IL_0104_1:
		{
			int32_t L_40 = __this->___U3ClengthU3E5__1_3;
			if (L_40)
			{
				goto IL_0122_1;
			}
		}
		{
			AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_41 = V_1;
			AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_42 = V_1;
			NullCheck(L_42);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_43;
			L_43 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(L_42, NULL);
			NullCheck(L_41);
			bool L_44;
			L_44 = TcpClientSession_EnsureSocketClosed_mAF81B14078A8FC9A9785DF8FDC269C119F0DD709(L_41, L_43, NULL);
			if (!L_44)
			{
				goto IL_0120_1;
			}
		}
		{
			AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_45 = V_1;
			NullCheck(L_45);
			VirtualActionInvoker0::Invoke(34 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, L_45);
		}

IL_0120_1:
		{
			goto IL_0176;
		}

IL_0122_1:
		{
			AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_46 = V_1;
			ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_47 = (&__this->___U3CbufferU3E5__2_4);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48;
			L_48 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline(L_47, ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
			ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_49 = (&__this->___U3CbufferU3E5__2_4);
			int32_t L_50;
			L_50 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline(L_49, ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
			int32_t L_51 = __this->___U3ClengthU3E5__1_3;
			NullCheck(L_46);
			VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void SuperSocket.ClientEngine.ClientSession::OnDataReceived(System.Byte[],System.Int32,System.Int32) */, L_46, L_48, L_50, L_51);
			ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_52 = (&__this->___U3CbufferU3E5__2_4);
			il2cpp_codegen_initobj(L_52, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		}

IL_0150_1:
		{
			AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_53 = V_1;
			NullCheck(L_53);
			bool L_54;
			L_54 = ClientSession_get_IsConnected_m888AF6C0AA82F028612BB4F5F93C6A79524AE01B_inline(L_53, NULL);
			if (L_54)
			{
				goto IL_0016_1;
			}
		}
		{
			goto IL_0176;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015d;
		}
		throw e;
	}

CATCH_015d:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_55 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_56 = V_5;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_55, L_56, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0189;
	}// end catch (depth: 1)

IL_0176:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_57 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_57, NULL);
	}

IL_0189:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAsyncU3Ed__12_MoveNext_m3E47F476278E1B0524B52D3258A4AB1695BA6884_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4*>(__this + _offset);
	U3CReadAsyncU3Ed__12_MoveNext_m3E47F476278E1B0524B52D3258A4AB1695BA6884(_thisAdjusted, method);
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<ReadAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncU3Ed__12_SetStateMachine_m83E35EA3CE5EC4AF54022C3616E71B827163A06B (U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAsyncU3Ed__12_SetStateMachine_m83E35EA3CE5EC4AF54022C3616E71B827163A06B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CReadAsyncU3Ed__12_t66256ACC7AA6CCB2457E02B18E173DCF400A83D4*>(__this + _offset);
	U3CReadAsyncU3Ed__12_SetStateMachine_m83E35EA3CE5EC4AF54022C3616E71B827163A06B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendInternalAsyncU3Ed__15_MoveNext_m94D3F6BBD38AC51FF639C0CFA14E6072C152FCEE (U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mC8FF33137A163491D3581E7BEF3D3666C5ED23AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosList_1_get_Position_m4FB82DF33C65339452C4621944A312602D783FD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* V_1 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0093_2;
				}
			}
			{
				PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_4 = __this->___items_2;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = PosList_1_get_Position_m4FB82DF33C65339452C4621944A312602D783FD9_inline(L_4, PosList_1_get_Position_m4FB82DF33C65339452C4621944A312602D783FD9_RuntimeMethod_var);
				__this->___U3CiU3E5__1_4 = L_5;
				goto IL_00d0_2;
			}

IL_002a_2:
			{
				PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_6 = __this->___items_2;
				int32_t L_7 = __this->___U3CiU3E5__1_4;
				NullCheck(L_6);
				ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_8;
				L_8 = List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770(L_6, L_7, List_1_get_Item_mFC67CC5B6323A7AFB4F1874DFD6909DBB0E89770_RuntimeMethod_var);
				V_2 = L_8;
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_9 = V_1;
				NullCheck(L_9);
				AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* L_10 = L_9->___m_Stream_19;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
				L_11 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_2), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
				int32_t L_12;
				L_12 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_2), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
				int32_t L_13;
				L_13 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_2), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_14;
				L_14 = CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB(NULL);
				NullCheck(L_10);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_15;
				L_15 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(29 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_10, L_11, L_12, L_13, L_14);
				NullCheck(L_15);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16;
				L_16 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_15, NULL);
				V_3 = L_16;
				bool L_17;
				L_17 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
				if (L_17)
				{
					goto IL_00af_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state_0 = L_18;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_19 = V_3;
				__this->___U3CU3Eu__1_5 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_20 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mC8FF33137A163491D3581E7BEF3D3666C5ED23AE(L_20, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF_mC8FF33137A163491D3581E7BEF3D3666C5ED23AE_RuntimeMethod_var);
				goto IL_0151;
			}

IL_0093_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_21 = __this->___U3CU3Eu__1_5;
				V_3 = L_21;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_22 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_22, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
			}

IL_00af_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
				il2cpp_codegen_initobj((&V_3), sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_24 = __this->___U3CiU3E5__1_4;
				V_4 = L_24;
				int32_t L_25 = V_4;
				__this->___U3CiU3E5__1_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
			}

IL_00d0_2:
			{
				int32_t L_26 = __this->___U3CiU3E5__1_4;
				PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_27 = __this->___items_2;
				NullCheck(L_27);
				int32_t L_28;
				L_28 = List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_inline(L_27, List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_RuntimeMethod_var);
				if ((((int32_t)L_26) < ((int32_t)L_28)))
				{
					goto IL_002a_2;
				}
			}
			{
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_29 = V_1;
				NullCheck(L_29);
				AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* L_30 = L_29->___m_Stream_19;
				NullCheck(L_30);
				VirtualActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, L_30);
				goto IL_011d_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00f3_1;
			}
			throw e;
		}

CATCH_00f3_1:
		{// begin catch(System.Exception)
			{
				V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_31 = V_1;
				Exception_t* L_32 = V_5;
				NullCheck(L_31);
				bool L_33;
				L_33 = VirtualFuncInvoker1< bool, Exception_t* >::Invoke(41 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, L_31, L_32);
				if (L_33)
				{
					goto IL_0107_1;
				}
			}
			{
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_34 = V_1;
				Exception_t* L_35 = V_5;
				NullCheck(L_34);
				VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, L_34, L_35);
			}

IL_0107_1:
			{
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_36 = V_1;
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_37 = V_1;
				NullCheck(L_37);
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_38;
				L_38 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(L_37, NULL);
				NullCheck(L_36);
				bool L_39;
				L_39 = TcpClientSession_EnsureSocketClosed_mAF81B14078A8FC9A9785DF8FDC269C119F0DD709(L_36, L_38, NULL);
				if (!L_39)
				{
					goto IL_011b_1;
				}
			}
			{
				AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_40 = V_1;
				NullCheck(L_40);
				VirtualActionInvoker0::Invoke(34 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, L_40);
			}

IL_011b_1:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_013e;
			}
		}// end catch (depth: 2)

IL_011d_1:
		{
			AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* L_41 = V_1;
			NullCheck(L_41);
			TcpClientSession_OnSendingCompleted_m67F5E56BDB2F34667DF8D4A553BFF8A07AB6B014(L_41, NULL);
			goto IL_013e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0125;
		}
		throw e;
	}

CATCH_0125:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_42 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_43 = V_6;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_42, L_43, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0151;
	}// end catch (depth: 1)

IL_013e:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_44 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_44, NULL);
	}

IL_0151:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendInternalAsyncU3Ed__15_MoveNext_m94D3F6BBD38AC51FF639C0CFA14E6072C152FCEE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF*>(__this + _offset);
	U3CSendInternalAsyncU3Ed__15_MoveNext_m94D3F6BBD38AC51FF639C0CFA14E6072C152FCEE(_thisAdjusted, method);
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/<SendInternalAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendInternalAsyncU3Ed__15_SetStateMachine_m3A07C87CDB7EF51B4D92E13EE8247EE24BE62F8E (U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendInternalAsyncU3Ed__15_SetStateMachine_m3A07C87CDB7EF51B4D92E13EE8247EE24BE62F8E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendInternalAsyncU3Ed__15_tA8DD59AEBA3F809412E2369A2917149F4ABC77BF*>(__this + _offset);
	U3CSendInternalAsyncU3Ed__15_SetStateMachine_m3A07C87CDB7EF51B4D92E13EE8247EE24BE62F8E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ClientSession::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CClientU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_Client(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_Client_m7E4ED2242469AA906FC402D2AE413D49362C90A3 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ClientSession::SuperSocket.ClientEngine.IClientSession.get_Socket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ClientSession_SuperSocket_ClientEngine_IClientSession_get_Socket_mCC804614B32A88A12805912B80280AE3929E7A33 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0;
		L_0 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(__this, NULL);
		return L_0;
	}
}
// System.Net.EndPoint SuperSocket.ClientEngine.ClientSession::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ClientSession_get_LocalEndPoint_mF3ECCC5C8EEA5AC9705757E072D3BB6236A999D0 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___U3CLocalEndPointU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_LocalEndPoint_mD831A832AFA571CD9127D2057D49BC04164AE357 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___U3CLocalEndPointU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocalEndPointU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.ClientSession::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientSession_get_IsConnected_m888AF6C0AA82F028612BB4F5F93C6A79524AE01B (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsConnectedU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_IsConnected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_IsConnected_m64E1F85C8E94FC06D5919D4D75BF21906867F458 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsConnectedU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.ClientSession::get_NoDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientSession_get_NoDelay_m5C9D0770C0A50542BA5D05BA8200FAA439CE3AB9 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CNoDelayU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_NoDelay_m05069DBA2B0FE0776E6008CFCDBA8A86F5A1376E (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CNoDelayU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession__ctor_m110A1594F63F019CAA6F1A874F753DD0E613528E (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* L_0 = (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD*)il2cpp_codegen_object_new(DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DataEventArgs__ctor_mF91665EE2D77468BD18D03CA8C06AEF24777AFFF(L_0, NULL);
		__this->___m_DataArgs_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataArgs_10), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.ClientSession::get_SendingQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientSession_get_SendingQueueSize_m94DD655400F8F06CD2914FCB4B542601DB93AC3C (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSendingQueueSizeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_SendingQueueSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_SendingQueueSize_mCD2CC74BEE93BF77253E4879B6DE20D3E90435CF (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSendingQueueSizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::Send(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_Send_m73D03E9C7552496A9B2068EB33F85FC3B31659FD (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___length2;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_3), L_0, L_1, L_2, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		ClientSession_Send_m21D9268A3FB5989C24E10C4C73A2BF2A14E15A04(__this, L_3, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::Send(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_Send_m21D9268A3FB5989C24E10C4C73A2BF2A14E15A04 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, const RuntimeMethod* method) 
{
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___segment0;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(31 /* System.Boolean SuperSocket.ClientEngine.ClientSession::TrySend(System.ArraySegment`1<System.Byte>) */, __this, L_0);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0012:
	{
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_2 = ___segment0;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(31 /* System.Boolean SuperSocket.ClientEngine.ClientSession::TrySend(System.ArraySegment`1<System.Byte>) */, __this, L_2);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_Send_m176158A7B2C86CE7B6FBBFDC3CEAF7AB48C55CE7 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, RuntimeObject* ___segments0, const RuntimeMethod* method) 
{
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___segments0;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(32 /* System.Boolean SuperSocket.ClientEngine.ClientSession::TrySend(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>) */, __this, L_0);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0012:
	{
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		RuntimeObject* L_2 = ___segments0;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(32 /* System.Boolean SuperSocket.ClientEngine.ClientSession::TrySend(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>) */, __this, L_2);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::add_Closed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_add_Closed_m673EDAB1EC5224A69D43ED92440CCAE76EAF122C (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___m_Closed_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		__this->___m_Closed_6 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Closed_6), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::remove_Closed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_remove_Closed_m0706672CE8284BB1D75F07A7412EB64908A30E6D (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___m_Closed_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		__this->___m_Closed_6 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Closed_6), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::OnClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_OnClosed_m7DA242361982774030103B991F4914FCA972E1A1 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	{
		ClientSession_set_IsConnected_m64E1F85C8E94FC06D5919D4D75BF21906867F458_inline(__this, (bool)0, NULL);
		VirtualActionInvoker1< EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* >::Invoke(29 /* System.Void SuperSocket.ClientEngine.ClientSession::set_LocalEndPoint(System.Net.EndPoint) */, __this, (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*)NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___m_Closed_6;
		V_0 = L_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_2, __this, L_3, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::add_Error(System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_add_Error_m079F7D6B480EC4A50C3804610B012F20C90819EA (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* L_0 = __this->___m_Error_7;
		EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		__this->___m_Error_7 = ((EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2*)Castclass((RuntimeObject*)L_2, EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Error_7), (void*)((EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2*)Castclass((RuntimeObject*)L_2, EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::remove_Error(System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_remove_Error_m7C7346581E856B5C32926F21F17DE60401BC51CF (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* L_0 = __this->___m_Error_7;
		EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		__this->___m_Error_7 = ((EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2*)Castclass((RuntimeObject*)L_2, EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Error_7), (void*)((EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2*)Castclass((RuntimeObject*)L_2, EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_OnError_m0F5B89A3369318EB3049DCF30BEE9339E81CF821 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* V_0 = NULL;
	{
		EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* L_0 = __this->___m_Error_7;
		V_0 = L_0;
		EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		EventHandler_1_tCA152C444E3F9D18D023320B72E3E2883C3518B2* L_2 = V_0;
		Exception_t* L_3 = ___e0;
		ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502* L_4 = (ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502*)il2cpp_codegen_object_new(ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ErrorEventArgs__ctor_mBD2C66508441623B6CA6AD99F255CBBFCC96DC18(L_4, L_3, NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_mDAE9D1B4280868139A9C5DC45472E3EFC1AF3F65_inline(L_2, __this, L_4, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::add_Connected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_add_Connected_m5661236BF1A6FA803BFEE25C1876AE1104775870 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___m_Connected_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		__this->___m_Connected_8 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Connected_8), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::remove_Connected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_remove_Connected_m7941E0BCD89E23DD3019EF30F0C8701424655DCE (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___m_Connected_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		__this->___m_Connected_8 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Connected_8), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_OnConnected_m40A056566938292D7F1926CC3648AD291484F8AD (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0;
		L_0 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(__this, NULL);
		V_0 = L_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	try
	{// begin try (depth: 1)
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = V_0;
			NullCheck(L_2);
			bool L_3;
			L_3 = Socket_get_NoDelay_mF0618C754D55660B5DFA339FF43005EBC45C668A(L_2, NULL);
			bool L_4;
			L_4 = ClientSession_get_NoDelay_m5C9D0770C0A50542BA5D05BA8200FAA439CE3AB9_inline(__this, NULL);
			if ((((int32_t)L_3) == ((int32_t)L_4)))
			{
				goto IL_0024_1;
			}
		}
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5 = V_0;
			bool L_6;
			L_6 = ClientSession_get_NoDelay_m5C9D0770C0A50542BA5D05BA8200FAA439CE3AB9_inline(__this, NULL);
			NullCheck(L_5);
			Socket_set_NoDelay_m1F7ACCEF219BB8745AB17F29CEA618088E0B2405(L_5, L_6, NULL);
		}

IL_0024_1:
		{
			goto IL_0029;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0026;
		}
		throw e;
	}

CATCH_0026:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		ClientSession_set_IsConnected_m64E1F85C8E94FC06D5919D4D75BF21906867F458_inline(__this, (bool)1, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = __this->___m_Connected_8;
		V_1 = L_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = V_1;
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_10 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_9);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_9, __this, L_10, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::add_DataReceived(System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_add_DataReceived_mEE2ED558F6ED707A84A90A4F67D471C108B09247 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* L_0 = __this->___m_DataReceived_9;
		EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		__this->___m_DataReceived_9 = ((EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE*)Castclass((RuntimeObject*)L_2, EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataReceived_9), (void*)((EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE*)Castclass((RuntimeObject*)L_2, EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::remove_DataReceived(System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_remove_DataReceived_mEB01A9D43966A4E08AD3F941830AAA7108D9603C (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* L_0 = __this->___m_DataReceived_9;
		EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		__this->___m_DataReceived_9 = ((EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE*)Castclass((RuntimeObject*)L_2, EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataReceived_9), (void*)((EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE*)Castclass((RuntimeObject*)L_2, EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::OnDataReceived(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_OnDataReceived_m84400D38BFEEE32BFFAE6C2FBC5EA0AAEB1814E6 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* V_0 = NULL;
	{
		EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* L_0 = __this->___m_DataReceived_9;
		V_0 = L_0;
		EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* L_2 = __this->___m_DataArgs_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data0;
		NullCheck(L_2);
		DataEventArgs_set_Data_mC53E02DE55FD98AF68980FA2AE14BEA1FEB17871_inline(L_2, L_3, NULL);
		DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* L_4 = __this->___m_DataArgs_10;
		int32_t L_5 = ___offset1;
		NullCheck(L_4);
		DataEventArgs_set_Offset_m35441E92E83A5B0E99DF4950FE1530E3FF1FF20C_inline(L_4, L_5, NULL);
		DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* L_6 = __this->___m_DataArgs_10;
		int32_t L_7 = ___length2;
		NullCheck(L_6);
		DataEventArgs_set_Length_m692AE047B4CB2154C7C46A6F79A4DE6268C7E780_inline(L_6, L_7, NULL);
		EventHandler_1_t22D8F4EDB5F40087E6ECEA5DACA2099B8F4D17BE* L_8 = V_0;
		DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* L_9 = __this->___m_DataArgs_10;
		NullCheck(L_8);
		EventHandler_1_Invoke_mE5D33A8132F15BDF366DC3B515B19332C77AE3FE_inline(L_8, __this, L_9, NULL);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.ClientSession::get_ReceiveBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientSession_get_ReceiveBufferSize_m59353D95FD19AF22E44A70BB53C8B3ED12855993 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReceiveBufferSizeU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_ReceiveBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_ReceiveBufferSize_mC7359571F59312D93A36668A3151465D5F6D7097 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReceiveBufferSizeU3Ek__BackingField_11 = L_0;
		return;
	}
}
// SuperSocket.ClientEngine.IProxyConnector SuperSocket.ClientEngine.ClientSession::get_Proxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientSession_get_Proxy_mF2BC62F677AE8E50BC46F15B7B0E8C59522131D1 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CProxyU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_Proxy(SuperSocket.ClientEngine.IProxyConnector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_Proxy_m4F9C407A7AE63F0E110E49D24678FAE1803F6D4B (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CProxyU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProxyU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.ArraySegment`1<System.Byte> SuperSocket.ClientEngine.ClientSession::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ClientSession_get_Buffer_mCE99012D5FAC9BC66D94D08DC719431040E4B87F (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = __this->___U3CBufferU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_Buffer(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_Buffer_m7508DEAC6096ED1129727B9F2E476FE6AA6702DD (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___value0, const RuntimeMethod* method) 
{
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___value0;
		__this->___U3CBufferU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBufferU3Ek__BackingField_13))->____array_1), (void*)NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::SuperSocket.ClientEngine.IBufferSetter.SetBuffer(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_SuperSocket_ClientEngine_IBufferSetter_SetBuffer_mFF1CBC48F135085A38B50FCB0B94AF370869D5B5 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___bufferSegment0, const RuntimeMethod* method) 
{
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___bufferSegment0;
		VirtualActionInvoker1< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(40 /* System.Void SuperSocket.ClientEngine.ClientSession::SetBuffer(System.ArraySegment`1<System.Byte>) */, __this, L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::SetBuffer(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_SetBuffer_mF2ECDE722ED953000BB353C9432EBA62CB7FA6D6 (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___bufferSegment0, const RuntimeMethod* method) 
{
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___bufferSegment0;
		ClientSession_set_Buffer_m7508DEAC6096ED1129727B9F2E476FE6AA6702DD_inline(__this, L_0, NULL);
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
// System.Byte[] SuperSocket.ClientEngine.DataEventArgs::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEventArgs_get_Data_mB18C58BDEEE000C027FE6C076D3C3F1C4586F937 (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEventArgs_set_Data_mC53E02DE55FD98AF68980FA2AE14BEA1FEB17871 (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.DataEventArgs::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEventArgs_get_Offset_m38C7D9B1C3D1FCC612FEACCA7572F752AE4EECB1 (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COffsetU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Offset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEventArgs_set_Offset_m35441E92E83A5B0E99DF4950FE1530E3FF1FF20C (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3COffsetU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.DataEventArgs::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEventArgs_get_Length_mB500C11D39A59F637536B162F2CED4B10427856A (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEventArgs_set_Length_m692AE047B4CB2154C7C46A6F79A4DE6268C7E780 (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void SuperSocket.ClientEngine.DataEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEventArgs__ctor_mF91665EE2D77468BD18D03CA8C06AEF24777AFFF (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
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
// System.Exception SuperSocket.ClientEngine.ErrorEventArgs::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ErrorEventArgs_get_Exception_m973CE07056155A598934FB03408D429794145B46 (ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->___U3CExceptionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ErrorEventArgs::set_Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs_set_Exception_m748058239B7A1C5801518AB60626084E02F7CB09 (ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502* __this, Exception_t* ___value0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___value0;
		__this->___U3CExceptionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ErrorEventArgs::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs__ctor_mBD2C66508441623B6CA6AD99F255CBBFCC96DC18 (ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		Exception_t* L_0 = ___exception0;
		ErrorEventArgs_set_Exception_m748058239B7A1C5801518AB60626084E02F7CB09_inline(__this, L_0, NULL);
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
// System.Void SuperSocket.ClientEngine.NegotiateStreamTcpSession::StartAuthenticatedStream(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiateStreamTcpSession_StartAuthenticatedStream_m202E9D64E9398F8A186F90A2486FBE30BF362194 (NegotiateStreamTcpSession_tE23031BF197364F4988CDEAAB9A6C64D469AB129* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___client0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CStartAuthenticatedStreamU3Eb__0_m1DE32081215B84EFD0AEE937F9A770E0E2CB53F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* V_0 = NULL;
	SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_0 = (U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_mC3310AC565EE3781E81E9DDA49481D6F6FFB479A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_2;
		L_2 = AuthenticatedStreamTcpSession_get_Security_mB42BAC8CCEF9B17C8ACD86D6A7F29BD9B855ECCB_inline(__this, NULL);
		V_1 = L_2;
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_3 = V_1;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42A96B26D32D43C2A582DD6B88CB2AEAC07214CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateStreamTcpSession_StartAuthenticatedStream_m202E9D64E9398F8A186F90A2486FBE30BF362194_RuntimeMethod_var)));
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_5 = V_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_6 = ___client0;
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_7 = (NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0*)il2cpp_codegen_object_new(NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		NetworkStream__ctor_m1E6CEBB6583CF44E9FA25A38E84B212C9BC91CD8(L_7, L_6, NULL);
		NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5* L_8 = (NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5*)il2cpp_codegen_object_new(NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		NegotiateStream__ctor_mA6D7614490524C95B46A9B14F9993183AEDD9A7C(L_8, L_7, NULL);
		NullCheck(L_5);
		L_5->___stream_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___stream_0), (void*)L_8);
		U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_9 = V_0;
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_10 = V_1;
		NullCheck(L_10);
		NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* L_11;
		L_11 = SecurityOption_get_Credential_m0490FFC63CE8980C7A8486BF4B3FA01CD50EECB6_inline(L_10, NULL);
		NullCheck(L_9);
		L_9->___credential_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___credential_1), (void*)L_11);
		U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_12 = V_0;
		NullCheck(L_12);
		NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* L_13 = L_12->___credential_1;
		if (L_13)
		{
			goto IL_0057;
		}
	}
	{
		U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_14 = V_0;
		RuntimeObject* L_15;
		L_15 = CredentialCache_get_DefaultCredentials_mFD45861A5151E546B6DF04F6D527E82214EA4143_inline(NULL);
		NullCheck(L_14);
		L_14->___credential_1 = ((NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313*)CastclassClass((RuntimeObject*)L_15, NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___credential_1), (void*)((NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313*)CastclassClass((RuntimeObject*)L_15, NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313_il2cpp_TypeInfo_var)));
	}

IL_0057:
	{
		U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_16 = V_0;
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_17 = (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*)il2cpp_codegen_object_new(Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CStartAuthenticatedStreamU3Eb__0_m1DE32081215B84EFD0AEE937F9A770E0E2CB53F8_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
		L_18 = Task_Run_m00AF25E7892ACD3AEBBADB40560F59F2866DD3BA(L_17, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.NegotiateStreamTcpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiateStreamTcpSession__ctor_m99A2DA13EE4E3DC4CFDE2278AE03094394AA2212 (NegotiateStreamTcpSession_tE23031BF197364F4988CDEAAB9A6C64D469AB129* __this, const RuntimeMethod* method) 
{
	{
		AuthenticatedStreamTcpSession__ctor_m9B1AD6CF5414CFA8A57D78A8AFEECFBF63D7187D(__this, NULL);
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
// System.Void SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mC3310AC565EE3781E81E9DDA49481D6F6FFB479A (U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0::<StartAuthenticatedStream>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec__DisplayClass0_0_U3CStartAuthenticatedStreamU3Eb__0_m1DE32081215B84EFD0AEE937F9A770E0E2CB53F8 (U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m51F77F64D63473741505AF79335E8BECB5214CD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80 L_1 = V_0;
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2 = L_1.___U3CU3Et__builder_1;
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m51F77F64D63473741505AF79335E8BECB5214CD3((&V_1), (&V_0), AsyncTaskMethodBuilder_Start_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m51F77F64D63473741505AF79335E8BECB5214CD3_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
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
// System.Void SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_MoveNext_m204B778DA7E09322D8E51F66255B6E010B78218D (U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m000216DC06BB16538942DDF4A7E927BC863B391E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0062_2;
				}
			}
			{
				U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_4 = V_1;
				NullCheck(L_4);
				NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5* L_5 = L_4->___stream_0;
				U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_6 = V_1;
				NullCheck(L_6);
				NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* L_7 = L_6->___credential_1;
				U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_8 = V_1;
				NullCheck(L_8);
				NegotiateStreamTcpSession_tE23031BF197364F4988CDEAAB9A6C64D469AB129* L_9 = L_8->___U3CU3E4__this_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = TcpClientSession_get_HostName_m3E871F4DB16E0D145DC7A23685A50E33A3C286B3_inline(L_9, NULL);
				NullCheck(L_5);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
				L_11 = VirtualFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313*, String_t* >::Invoke(42 /* System.Threading.Tasks.Task System.Net.Security.NegotiateStream::AuthenticateAsClientAsync(System.Net.NetworkCredential,System.String) */, L_5, L_7, L_10);
				NullCheck(L_11);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12;
				L_12 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_11, NULL);
				V_2 = L_12;
				bool L_13;
				L_13 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
				if (L_13)
				{
					goto IL_007e_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = V_2;
				__this->___U3CU3Eu__1_3 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_16 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m000216DC06BB16538942DDF4A7E927BC863B391E(L_16, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80_m000216DC06BB16538942DDF4A7E927BC863B391E_RuntimeMethod_var);
				goto IL_00e9;
			}

IL_0062_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_17 = __this->___U3CU3Eu__1_3;
				V_2 = L_17;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_18 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_007e_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
				il2cpp_codegen_initobj((&V_2), sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				goto IL_00aa_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_008f_1;
			}
			throw e;
		}

CATCH_008f_1:
		{// begin catch(System.Exception)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_20 = V_1;
			NullCheck(L_20);
			NegotiateStreamTcpSession_tE23031BF197364F4988CDEAAB9A6C64D469AB129* L_21 = L_20->___U3CU3E4__this_2;
			NullCheck(L_21);
			bool L_22;
			L_22 = TcpClientSession_EnsureSocketClosed_m7ED3CC83EA0A3D3A8BD2DCB084F974719CEEDB92(L_21, NULL);
			U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_23 = V_1;
			NullCheck(L_23);
			NegotiateStreamTcpSession_tE23031BF197364F4988CDEAAB9A6C64D469AB129* L_24 = L_23->___U3CU3E4__this_2;
			Exception_t* L_25 = V_3;
			NullCheck(L_24);
			VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, L_24, L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00d6;
		}// end catch (depth: 2)

IL_00aa_1:
		{
			U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_26 = V_1;
			NullCheck(L_26);
			NegotiateStreamTcpSession_tE23031BF197364F4988CDEAAB9A6C64D469AB129* L_27 = L_26->___U3CU3E4__this_2;
			U3CU3Ec__DisplayClass0_0_tE5A9C2106323E9798ADFA7C20D822A16B72BB4FD* L_28 = V_1;
			NullCheck(L_28);
			NegotiateStream_tA3AC3B6632144B3D25DB19E952AEFF4E910015E5* L_29 = L_28->___stream_0;
			NullCheck(L_27);
			AuthenticatedStreamTcpSession_OnAuthenticatedStreamConnected_m7FACF0723B3A1B2188DC1B60A906A8DBD6D63F7D(L_27, L_29, NULL);
			goto IL_00d6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bd;
		}
		throw e;
	}

CATCH_00bd:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_30 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_31 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_30, L_31, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e9;
	}// end catch (depth: 1)

IL_00d6:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_32 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_32, NULL);
	}

IL_00e9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_MoveNext_m204B778DA7E09322D8E51F66255B6E010B78218D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80*>(__this + _offset);
	U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_MoveNext_m204B778DA7E09322D8E51F66255B6E010B78218D(_thisAdjusted, method);
}
// System.Void SuperSocket.ClientEngine.NegotiateStreamTcpSession/<>c__DisplayClass0_0/<<StartAuthenticatedStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_SetStateMachine_mE3082CA9B8DF83A984E78953E743A06F965B9F27 (U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_SetStateMachine_mE3082CA9B8DF83A984E78953E743A06F965B9F27_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_t250634A20A8976CB154B23470465D2DBA4B7BD80*>(__this + _offset);
	U3CU3CStartAuthenticatedStreamU3Eb__0U3Ed_SetStateMachine_mE3082CA9B8DF83A984E78953E743A06F965B9F27(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Security.Authentication.SslProtocols SuperSocket.ClientEngine.SecurityOption::get_EnabledSslProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecurityOption_get_EnabledSslProtocols_mC7E74BF42854B811D79D7F8673BAB7192E6A9A87 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CEnabledSslProtocolsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::set_EnabledSslProtocols(System.Security.Authentication.SslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption_set_EnabledSslProtocols_mA961B5CD81E81A829D6007B1A318FE568C549A52 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CEnabledSslProtocolsU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection SuperSocket.ClientEngine.SecurityOption::get_Certificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* SecurityOption_get_Certificates_m5DFD0F44ED9A215D8A982E41D18327CFEA4C8F66 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = __this->___U3CCertificatesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption_set_Certificates_mBFF7AA4DCB277D25E69152F9B78087A83163EE64 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___value0, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = ___value0;
		__this->___U3CCertificatesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCertificatesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowUnstrustedCertificate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowUnstrustedCertificate_m297287899B106BA05B5F833F52986A90B49EDD66 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAllowUnstrustedCertificateU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::set_AllowUnstrustedCertificate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption_set_AllowUnstrustedCertificate_m8ADF1980FDDF15EE1BA5A1F139FE3A8AE2B5AE55 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CAllowUnstrustedCertificateU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowNameMismatchCertificate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowNameMismatchCertificate_mB1EDB7C7E998C9B2CF7CE4DFB8068BA3EFF78921 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAllowNameMismatchCertificateU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::set_AllowNameMismatchCertificate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption_set_AllowNameMismatchCertificate_m0635A5AC5B7346E0235EF317846A00C5CC8EBB0D (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CAllowNameMismatchCertificateU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowCertificateChainErrors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowCertificateChainErrors_mF364E130DDDE4F8232FA804303C520D1DB32C21C (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAllowCertificateChainErrorsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::set_AllowCertificateChainErrors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption_set_AllowCertificateChainErrors_m8809FD5FF46E17EC6A9D2DA74E897C4F63F5B440 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CAllowCertificateChainErrorsU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Net.NetworkCredential SuperSocket.ClientEngine.SecurityOption::get_Credential()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* SecurityOption_get_Credential_m0490FFC63CE8980C7A8486BF4B3FA01CD50EECB6 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* L_0 = __this->___U3CCredentialU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::set_Credential(System.Net.NetworkCredential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption_set_Credential_mAD0E371644C28A8B9E5069F4880B567AFA8FB744 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* ___value0, const RuntimeMethod* method) 
{
	{
		NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* L_0 = ___value0;
		__this->___U3CCredentialU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCredentialU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption__ctor_m87DBD83433A25837C38D384847913C151C355D39 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = SecurityOption_GetDefaultProtocol_mF5507D4416CE12DD93D7D31C305AE4EB3FA28B60(NULL);
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_1 = (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)il2cpp_codegen_object_new(X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB(L_1, NULL);
		SecurityOption__ctor_m1A92CD47579234F69DC8C4E9682A2971F4FD9E55(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::.ctor(System.Security.Authentication.SslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption__ctor_m60E17E665AE49B0D53B785C4C049E380173D143C (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, int32_t ___enabledSslProtocols0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___enabledSslProtocols0;
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_1 = (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)il2cpp_codegen_object_new(X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB(L_1, NULL);
		SecurityOption__ctor_m1A92CD47579234F69DC8C4E9682A2971F4FD9E55(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::.ctor(System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption__ctor_m352E72A7DFDCA736D9F4E91FF2ABA38ABA247553 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, int32_t ___enabledSslProtocols0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___enabledSslProtocols0;
		X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE* L_1 = (X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE*)(X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE*)SZArrayNew(X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE_il2cpp_TypeInfo_var, (uint32_t)1);
		X509CertificateU5BU5D_tCE5A8F76F4D9CA2F5A637163CB6C1C047EA7EAFE* L_2 = L_1;
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_3 = ___certificate1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*)L_3);
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_4 = (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)il2cpp_codegen_object_new(X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		X509CertificateCollection__ctor_m129EF1F62B4506973751F8ED347A9F000600EB6A(L_4, L_2, NULL);
		SecurityOption__ctor_m1A92CD47579234F69DC8C4E9682A2971F4FD9E55(__this, L_0, L_4, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::.ctor(System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption__ctor_m1A92CD47579234F69DC8C4E9682A2971F4FD9E55 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, int32_t ___enabledSslProtocols0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___certificates1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___enabledSslProtocols0;
		SecurityOption_set_EnabledSslProtocols_mA961B5CD81E81A829D6007B1A318FE568C549A52_inline(__this, L_0, NULL);
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_1 = ___certificates1;
		SecurityOption_set_Certificates_mBFF7AA4DCB277D25E69152F9B78087A83163EE64_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::.ctor(System.Net.NetworkCredential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption__ctor_mE20CACFA12DBEEA9917DB5DD630EABD485E20844 (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* ___credential0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* L_0 = ___credential0;
		SecurityOption_set_Credential_mAD0E371644C28A8B9E5069F4880B567AFA8FB744_inline(__this, L_0, NULL);
		return;
	}
}
// System.Security.Authentication.SslProtocols SuperSocket.ClientEngine.SecurityOption::GetDefaultProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecurityOption_GetDefaultProtocol_mF5507D4416CE12DD93D7D31C305AE4EB3FA28B60 (const RuntimeMethod* method) 
{
	{
		return (int32_t)(((int32_t)3840));
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
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession::StartAuthenticatedStream(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStreamTcpSession_StartAuthenticatedStream_mDCA3E127467C37281CE32C49DBB5B10B2C5494D3 (SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___client0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslStreamTcpSession_ValidateRemoteCertificate_mE3B2CFDFFF78274B95AFDD619E3E65261E316CD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_0;
		L_0 = AuthenticatedStreamTcpSession_get_Security_mB42BAC8CCEF9B17C8ACD86D6A7F29BD9B855ECCB_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42A96B26D32D43C2A582DD6B88CB2AEAC07214CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStreamTcpSession_StartAuthenticatedStream_mDCA3E127467C37281CE32C49DBB5B10B2C5494D3_RuntimeMethod_var)));
	}

IL_0013:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = ___client0;
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_3 = (NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0*)il2cpp_codegen_object_new(NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		NetworkStream__ctor_m1E6CEBB6583CF44E9FA25A38E84B212C9BC91CD8(L_3, L_2, NULL);
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_4 = (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*)il2cpp_codegen_object_new(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367(L_4, __this, (intptr_t)((void*)SslStreamTcpSession_ValidateRemoteCertificate_mE3B2CFDFFF78274B95AFDD619E3E65261E316CD2_RuntimeMethod_var), NULL);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_5 = (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27*)il2cpp_codegen_object_new(SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SslStream__ctor_m9096E6E85E60C4D205A26FA43D121FECEC735484(L_5, L_3, (bool)0, L_4, NULL);
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_6;
		L_6 = AuthenticatedStreamTcpSession_get_Security_mB42BAC8CCEF9B17C8ACD86D6A7F29BD9B855ECCB_inline(__this, NULL);
		SslStreamTcpSession_AuthenticateAsClientAsync_m33B812C430DA64E9C9446632F8ED8C5669A0CA79(__this, L_5, L_6, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession::AuthenticateAsClientAsync(System.Net.Security.SslStream,SuperSocket.ClientEngine.SecurityOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStreamTcpSession_AuthenticateAsClientAsync_m33B812C430DA64E9C9446632F8ED8C5669A0CA79 (SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* __this, SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___sslStream0, SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* ___securityOption1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m72B45AD30B00F61B8CE707A754239ADF7B4DBB28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_0 = ___sslStream0;
		(&V_0)->___sslStream_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___sslStream_2), (void*)L_0);
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_1 = ___securityOption1;
		(&V_0)->___securityOption_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___securityOption_4), (void*)L_1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED L_3 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_4 = L_3.___U3CU3Et__builder_1;
		V_1 = L_4;
		AsyncVoidMethodBuilder_Start_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m72B45AD30B00F61B8CE707A754239ADF7B4DBB28((&V_1), (&V_0), AsyncVoidMethodBuilder_Start_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m72B45AD30B00F61B8CE707A754239ADF7B4DBB28_RuntimeMethod_var);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.SslStreamTcpSession::ValidateRemoteCertificate(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStreamTcpSession_ValidateRemoteCertificate_mE3B2CFDFFF78274B95AFDD619E3E65261E316CD2 (SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslPolicyErrors_t92DF45EC5BA5BEFF38EF53C2C8488B27385EBB08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* V_0 = NULL;
	int32_t V_1 = 0;
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___sslPolicyErrors3;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_1;
		L_1 = AuthenticatedStreamTcpSession_get_Security_mB42BAC8CCEF9B17C8ACD86D6A7F29BD9B855ECCB_inline(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = SecurityOption_get_AllowNameMismatchCertificate_mB1EDB7C7E998C9B2CF7CE4DFB8068BA3EFF78921_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ___sslPolicyErrors3;
		___sslPolicyErrors3 = ((int32_t)((int32_t)L_3&((int32_t)-3)));
	}

IL_001a:
	{
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_4;
		L_4 = AuthenticatedStreamTcpSession_get_Security_mB42BAC8CCEF9B17C8ACD86D6A7F29BD9B855ECCB_inline(__this, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = SecurityOption_get_AllowCertificateChainErrors_mF364E130DDDE4F8232FA804303C520D1DB32C21C_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_6 = ___sslPolicyErrors3;
		___sslPolicyErrors3 = ((int32_t)((int32_t)L_6&((int32_t)-5)));
	}

IL_002e:
	{
		int32_t L_7 = ___sslPolicyErrors3;
		if (L_7)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_8;
		L_8 = AuthenticatedStreamTcpSession_get_Security_mB42BAC8CCEF9B17C8ACD86D6A7F29BD9B855ECCB_inline(__this, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = SecurityOption_get_AllowUnstrustedCertificate_m297287899B106BA05B5F833F52986A90B49EDD66_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		Il2CppFakeBox<int32_t> L_10(SslPolicyErrors_t92DF45EC5BA5BEFF38EF53C2C8488B27385EBB08_il2cpp_TypeInfo_var, (&___sslPolicyErrors3));
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		Exception_t* L_12 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_12, L_11, NULL);
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_12);
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_13 = ___sslPolicyErrors3;
		if (!L_13)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_14 = ___sslPolicyErrors3;
		if ((((int32_t)L_14) == ((int32_t)4)))
		{
			goto IL_007e;
		}
	}
	{
		Il2CppFakeBox<int32_t> L_15(SslPolicyErrors_t92DF45EC5BA5BEFF38EF53C2C8488B27385EBB08_il2cpp_TypeInfo_var, (&___sslPolicyErrors3));
		String_t* L_16;
		L_16 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_15), NULL);
		Exception_t* L_17 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_17, L_16, NULL);
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_17);
		return (bool)0;
	}

IL_007e:
	{
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_18 = ___chain2;
		if (!L_18)
		{
			goto IL_00e7;
		}
	}
	{
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_19 = ___chain2;
		NullCheck(L_19);
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_20;
		L_20 = X509Chain_get_ChainStatus_m30439103B52A0CF57962B89CFE0B6EF8F167965A(L_19, NULL);
		if (!L_20)
		{
			goto IL_00e7;
		}
	}
	{
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_21 = ___chain2;
		NullCheck(L_21);
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_22;
		L_22 = X509Chain_get_ChainStatus_m30439103B52A0CF57962B89CFE0B6EF8F167965A(L_21, NULL);
		V_0 = L_22;
		V_1 = 0;
		goto IL_00e1;
	}

IL_0094:
	{
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_2 = L_26;
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_27 = ___certificate1;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = X509Certificate_get_Subject_m2568DA6469339937B44FCD5C7C69FF02934D075C(L_27, NULL);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_29 = ___certificate1;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = X509Certificate_get_Issuer_m1922DC6FA16712898394AF2377B6D089BA2D169E(L_29, NULL);
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, L_30, NULL);
		if (!L_31)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_32;
		L_32 = X509ChainStatus_get_Status_m58AB369B6D5CDF2436644C1936953058FBBDEF99_inline((&V_2), NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)32))))
		{
			goto IL_00dd;
		}
	}

IL_00ba:
	{
		int32_t L_33;
		L_33 = X509ChainStatus_get_Status_m58AB369B6D5CDF2436644C1936953058FBBDEF99_inline((&V_2), NULL);
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		Il2CppFakeBox<int32_t> L_34(SslPolicyErrors_t92DF45EC5BA5BEFF38EF53C2C8488B27385EBB08_il2cpp_TypeInfo_var, (&___sslPolicyErrors3));
		String_t* L_35;
		L_35 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_34), NULL);
		Exception_t* L_36 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_36, L_35, NULL);
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_36);
		return (bool)0;
	}

IL_00dd:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00e1:
	{
		int32_t L_38 = V_1;
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_0094;
		}
	}

IL_00e7:
	{
		return (bool)1;
	}
}
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStreamTcpSession__ctor_mA26B13F7B2CD7BC69C62E61FFF49C089DA836BFB (SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* __this, const RuntimeMethod* method) 
{
	{
		AuthenticatedStreamTcpSession__ctor_m9B1AD6CF5414CFA8A57D78A8AFEECFBF63D7187D(__this, NULL);
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
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthenticateAsClientAsyncU3Ed__1_MoveNext_m93911B92E76779763869577CAAA018E664578343 (U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m01FD1C8EB17391A09FD93906811F9CDCC9DB1B7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_006b_2;
				}
			}
			{
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_4 = __this->___sslStream_2;
				SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* L_5 = V_1;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = TcpClientSession_get_HostName_m3E871F4DB16E0D145DC7A23685A50E33A3C286B3_inline(L_5, NULL);
				SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_7 = __this->___securityOption_4;
				NullCheck(L_7);
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_8;
				L_8 = SecurityOption_get_Certificates_m5DFD0F44ED9A215D8A982E41D18327CFEA4C8F66_inline(L_7, NULL);
				SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_9 = __this->___securityOption_4;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = SecurityOption_get_EnabledSslProtocols_mC7E74BF42854B811D79D7F8673BAB7192E6A9A87_inline(L_9, NULL);
				NullCheck(L_4);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
				L_11 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, int32_t, bool >::Invoke(43 /* System.Threading.Tasks.Task System.Net.Security.SslStream::AuthenticateAsClientAsync(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean) */, L_4, L_6, L_8, L_10, (bool)0);
				NullCheck(L_11);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12;
				L_12 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_11, NULL);
				V_2 = L_12;
				bool L_13;
				L_13 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
				if (L_13)
				{
					goto IL_0087_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = V_2;
				__this->___U3CU3Eu__1_5 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m01FD1C8EB17391A09FD93906811F9CDCC9DB1B7A(L_16, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED_m01FD1C8EB17391A09FD93906811F9CDCC9DB1B7A_RuntimeMethod_var);
				goto IL_00e3;
			}

IL_006b_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_17 = __this->___U3CU3Eu__1_5;
				V_2 = L_17;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_18 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_0087_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
				il2cpp_codegen_initobj((&V_2), sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				goto IL_00a9_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0098_1;
			}
			throw e;
		}

CATCH_0098_1:
		{// begin catch(System.Exception)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* L_20 = V_1;
			NullCheck(L_20);
			bool L_21;
			L_21 = TcpClientSession_EnsureSocketClosed_m7ED3CC83EA0A3D3A8BD2DCB084F974719CEEDB92(L_20, NULL);
			SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* L_22 = V_1;
			Exception_t* L_23 = V_3;
			NullCheck(L_22);
			VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, L_22, L_23);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00d0;
		}// end catch (depth: 2)

IL_00a9_1:
		{
			SslStreamTcpSession_t4B0E1AAF1F4AA528DFD050A7CB78B410109BCCFC* L_24 = V_1;
			SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_25 = __this->___sslStream_2;
			NullCheck(L_24);
			AuthenticatedStreamTcpSession_OnAuthenticatedStreamConnected_m7FACF0723B3A1B2188DC1B60A906A8DBD6D63F7D(L_24, L_25, NULL);
			goto IL_00d0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b7;
		}
		throw e;
	}

CATCH_00b7:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_26 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_27 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_26, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e3;
	}// end catch (depth: 1)

IL_00d0:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_28 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_28, NULL);
	}

IL_00e3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAuthenticateAsClientAsyncU3Ed__1_MoveNext_m93911B92E76779763869577CAAA018E664578343_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED*>(__this + _offset);
	U3CAuthenticateAsClientAsyncU3Ed__1_MoveNext_m93911B92E76779763869577CAAA018E664578343(_thisAdjusted, method);
}
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession/<AuthenticateAsClientAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthenticateAsClientAsyncU3Ed__1_SetStateMachine_m71775CAF0FAD3FF295AC62F2E35BA0BF5CF6B78A (U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAuthenticateAsClientAsyncU3Ed__1_SetStateMachine_m71775CAF0FAD3FF295AC62F2E35BA0BF5CF6B78A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAuthenticateAsClientAsyncU3Ed__1_tDFB184519BC74DDE68B797EA85DAF109A62119ED*>(__this + _offset);
	U3CAuthenticateAsClientAsyncU3Ed__1_SetStateMachine_m71775CAF0FAD3FF295AC62F2E35BA0BF5CF6B78A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SuperSocket.ClientEngine.TcpClientSession::get_HostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpClientSession_get_HostName_m3E871F4DB16E0D145DC7A23685A50E33A3C286B3 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CHostNameU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::set_HostName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_set_HostName_m859EEF2978FB6389DE1A1FAE2E2B47F92EF26E2F (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CHostNameU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHostNameU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession__ctor_m5D4CAF3F324DD3313AA50290DC28B7FA41E8DF3A (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	{
		ClientSession__ctor_m110A1594F63F019CAA6F1A874F753DD0E613528E(__this, NULL);
		return;
	}
}
// System.Net.EndPoint SuperSocket.ClientEngine.TcpClientSession::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* TcpClientSession_get_LocalEndPoint_m6E2F0F5A5B5A96DA4BA6F0131B71A1985865F01B (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0;
		L_0 = ClientSession_get_LocalEndPoint_mF3ECCC5C8EEA5AC9705757E072D3BB6236A999D0_inline(__this, NULL);
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_set_LocalEndPoint_m6F95F80C8D26565ADCDDD40DB0B47B315F2DD332 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_InConnecting_15;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = ClientSession_get_IsConnected_m888AF6C0AA82F028612BB4F5F93C6A79524AE01B_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC77060BFDCA3E6D381803D899265B5012FFFEE31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_set_LocalEndPoint_m6F95F80C8D26565ADCDDD40DB0B47B315F2DD332_RuntimeMethod_var)));
	}

IL_001b:
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_3 = ___value0;
		ClientSession_set_LocalEndPoint_mD831A832AFA571CD9127D2057D49BC04164AE357_inline(__this, L_3, NULL);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.TcpClientSession::get_ReceiveBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TcpClientSession_get_ReceiveBufferSize_m74ACB02D31BBC9F62F8B53F38BFFBDDFB5B178B3 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ClientSession_get_ReceiveBufferSize_m59353D95FD19AF22E44A70BB53C8B3ED12855993_inline(__this, NULL);
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::set_ReceiveBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_set_ReceiveBufferSize_m786D35D21C686E55F86143EF9A6785D60E8F8BC5 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0;
		L_0 = ClientSession_get_Buffer_mCE99012D5FAC9BC66D94D08DC719431040E4B87F_inline(__this, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1E270CA14C4008A5702888CAB42400E2F53D420)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_set_ReceiveBufferSize_m786D35D21C686E55F86143EF9A6785D60E8F8BC5_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_3 = ___value0;
		ClientSession_set_ReceiveBufferSize_mC7359571F59312D93A36668A3151465D5F6D7097_inline(__this, L_3, NULL);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_IsIgnorableException_m3A3F855D8E1AE68B8F3B19EE552798C89EF24719 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___e0;
		if (!((ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)IsInstClass((RuntimeObject*)L_0, ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		Exception_t* L_1 = ___e0;
		if (!((NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)IsInstClass((RuntimeObject*)L_1, NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableSocketError(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_IsIgnorableSocketError_mB810DBC8ACEEB5C43D761120433CD0E63C6B87A1 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, int32_t ___errorCode0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___errorCode0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10058))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___errorCode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)10053))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___errorCode0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10054))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___errorCode0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)995)))))
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		return (bool)1;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_Connect_m4749061D3653ECF77B6000EB143C648DB3D08247 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProxyConnector_t499453376DA2BC6F6502360EC5F4E7B3936EE11A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClientSession_ProcessConnect_m84104C6EE240AEF2D1223F51723645E2F8620AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClientSession_Proxy_Completed_mA1165AB4FA66DDFCFFCA9C9533B517B859FF7D49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___remoteEndPoint0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9A99CC761E2CB91E2370DFDEEE6A4CB64952140)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_Connect_m4749061D3653ECF77B6000EB143C648DB3D08247_RuntimeMethod_var)));
	}

IL_000e:
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_2 = ___remoteEndPoint0;
		V_0 = ((DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)IsInstClass((RuntimeObject*)L_2, DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var));
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline(L_4, NULL);
		V_1 = L_5;
		String_t* L_6 = V_1;
		bool L_7;
		L_7 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_6, NULL);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_8 = V_1;
		TcpClientSession_set_HostName_m859EEF2978FB6389DE1A1FAE2E2B47F92EF26E2F_inline(__this, L_8, NULL);
	}

IL_002e:
	{
		bool L_9 = __this->___m_InConnecting_15;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8325B4D1F0CCCFC8664C40D56B573FB6FF1D2E75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_Connect_m4749061D3653ECF77B6000EB143C648DB3D08247_RuntimeMethod_var)));
	}

IL_0041:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_11;
		L_11 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(__this, NULL);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		Exception_t* L_12 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBA0C3BB5E3C1CD683A7D2040C039F6DEA8426FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_Connect_m4749061D3653ECF77B6000EB143C648DB3D08247_RuntimeMethod_var)));
	}

IL_0054:
	{
		RuntimeObject* L_13;
		L_13 = ClientSession_get_Proxy_mF2BC62F677AE8E50BC46F15B7B0E8C59522131D1_inline(__this, NULL);
		if (!L_13)
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject* L_14;
		L_14 = ClientSession_get_Proxy_mF2BC62F677AE8E50BC46F15B7B0E8C59522131D1_inline(__this, NULL);
		EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* L_15 = (EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845*)il2cpp_codegen_object_new(EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler_1__ctor_mFD23F08F404AA392A844CC7E9C845D4F28ED6CEC(L_15, __this, (intptr_t)((void*)TcpClientSession_Proxy_Completed_mA1165AB4FA66DDFCFFCA9C9533B517B859FF7D49_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* >::Invoke(1 /* System.Void SuperSocket.ClientEngine.IProxyConnector::add_Completed(System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>) */, IProxyConnector_t499453376DA2BC6F6502360EC5F4E7B3936EE11A_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16;
		L_16 = ClientSession_get_Proxy_mF2BC62F677AE8E50BC46F15B7B0E8C59522131D1_inline(__this, NULL);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_17 = ___remoteEndPoint0;
		NullCheck(L_16);
		InterfaceActionInvoker1< EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* >::Invoke(0 /* System.Void SuperSocket.ClientEngine.IProxyConnector::Connect(System.Net.EndPoint) */, IProxyConnector_t499453376DA2BC6F6502360EC5F4E7B3936EE11A_il2cpp_TypeInfo_var, L_16, L_17);
		__this->___m_InConnecting_15 = (bool)1;
		return;
	}

IL_0087:
	{
		__this->___m_InConnecting_15 = (bool)1;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_18 = ___remoteEndPoint0;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_19;
		L_19 = VirtualFuncInvoker0< EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* >::Invoke(28 /* System.Net.EndPoint SuperSocket.ClientEngine.ClientSession::get_LocalEndPoint() */, __this);
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_20 = (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306*)il2cpp_codegen_object_new(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ConnectedCallback__ctor_m6DAA355E984F3A1CD08967D05AC1BC6B0651ECE0(L_20, __this, (intptr_t)((void*)TcpClientSession_ProcessConnect_m84104C6EE240AEF2D1223F51723645E2F8620AE1_RuntimeMethod_var), NULL);
		ConnectAsyncExtension_ConnectAsync_m74BC656D31E575DA3907AB27F4B5A7D5744AAFEC(L_18, L_19, L_20, NULL, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::Proxy_Completed(System.Object,SuperSocket.ClientEngine.ProxyEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_Proxy_Completed_mA1165AB4FA66DDFCFFCA9C9533B517B859FF7D49 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, RuntimeObject* ___sender0, ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProxyConnector_t499453376DA2BC6F6502360EC5F4E7B3936EE11A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClientSession_Proxy_Completed_mA1165AB4FA66DDFCFFCA9C9533B517B859FF7D49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D2BDFF5B409ECE88D3A160453177AC48918C1F);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ClientSession_get_Proxy_mF2BC62F677AE8E50BC46F15B7B0E8C59522131D1_inline(__this, NULL);
		EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* L_1 = (EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845*)il2cpp_codegen_object_new(EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mFD23F08F404AA392A844CC7E9C845D4F28ED6CEC(L_1, __this, (intptr_t)((void*)TcpClientSession_Proxy_Completed_mA1165AB4FA66DDFCFFCA9C9533B517B859FF7D49_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* >::Invoke(2 /* System.Void SuperSocket.ClientEngine.IProxyConnector::remove_Completed(System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>) */, IProxyConnector_t499453376DA2BC6F6502360EC5F4E7B3936EE11A_il2cpp_TypeInfo_var, L_0, L_1);
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_2 = ___e1;
		NullCheck(L_2);
		bool L_3;
		L_3 = ProxyEventArgs_get_Connected_m8A391B02F012434E52E559AFFF9A3DA8FE48EF61_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		V_0 = (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)NULL;
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_4 = ___e1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ProxyEventArgs_get_TargetHostName_m9337094046F7F4C35DAAE81DFE1E65533F416F58_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)il2cpp_codegen_object_new(SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SocketAsyncEventArgs__ctor_m0D655E713579F9A0548D1889E29B09C19DA5A0B5(L_6, NULL);
		V_0 = L_6;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = V_0;
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_8 = ___e1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ProxyEventArgs_get_TargetHostName_m9337094046F7F4C35DAAE81DFE1E65533F416F58_inline(L_8, NULL);
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_10 = (DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)il2cpp_codegen_object_new(DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		DnsEndPoint__ctor_m259B045DC765E7703F15CA12E7F9CD90C69B81E7(L_10, L_9, 0, NULL);
		NullCheck(L_7);
		SocketAsyncEventArgs_set_RemoteEndPoint_m63E183C33AA5B60D8331A1CEC30A008B6AC7206F_inline(L_7, L_10, NULL);
	}

IL_0041:
	{
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_11 = ___e1;
		NullCheck(L_11);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_12;
		L_12 = ProxyEventArgs_get_Socket_mDF9D2F534DD7DA5B25C2ABDF95EDD17395D82280_inline(L_11, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_13 = V_0;
		TcpClientSession_ProcessConnect_m84104C6EE240AEF2D1223F51723645E2F8620AE1(__this, L_12, NULL, L_13, (Exception_t*)NULL, NULL);
		return;
	}

IL_0051:
	{
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_14 = ___e1;
		NullCheck(L_14);
		Exception_t* L_15;
		L_15 = ProxyEventArgs_get_Exception_m8C045D73C2B3EB103276CCB2BA163E5A9A2D78D3_inline(L_14, NULL);
		Exception_t* L_16 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_16, _stringLiteral58D2BDFF5B409ECE88D3A160453177AC48918C1F, L_15, NULL);
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_16);
		__this->___m_InConnecting_15 = (bool)0;
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::ProcessConnect(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_ProcessConnect_m84104C6EE240AEF2D1223F51723645E2F8620AE1 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* V_0 = NULL;
	int32_t V_1 = 0;
	DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* V_2 = NULL;
	String_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* G_B19_0 = NULL;
	{
		Exception_t* L_0 = ___exception3;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->___m_InConnecting_15 = (bool)0;
		Exception_t* L_1 = ___exception3;
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_1);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e2;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = ___e2;
		NullCheck(L_3);
		SocketAsyncEventArgs_Dispose_m6DCE1086200FEDE70AFC93B221810F02334FCEA1(L_3, NULL);
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_4 = ___e2;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_5 = ___e2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		__this->___m_InConnecting_15 = (bool)0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = ___e2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_7, NULL);
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_9 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_9, L_8, NULL);
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_9);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_10 = ___e2;
		NullCheck(L_10);
		SocketAsyncEventArgs_Dispose_m6DCE1086200FEDE70AFC93B221810F02334FCEA1(L_10, NULL);
		return;
	}

IL_0047:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_11 = ___socket0;
		if (L_11)
		{
			goto IL_0062;
		}
	}
	{
		__this->___m_InConnecting_15 = (bool)0;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_12 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_12, ((int32_t)10053), NULL);
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_12);
		return;
	}

IL_0062:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_13 = ___socket0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_0084;
		}
	}
	{
		__this->___m_InConnecting_15 = (bool)0;
		V_1 = ((int32_t)10065);
		int32_t L_15 = V_1;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_16 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_16, L_15, NULL);
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_16);
		return;
	}

IL_0084:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_17 = ___e2;
		if (L_17)
		{
			goto IL_008e;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_18 = (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)il2cpp_codegen_object_new(SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		SocketAsyncEventArgs__ctor_m0D655E713579F9A0548D1889E29B09C19DA5A0B5(L_18, NULL);
		___e2 = L_18;
	}

IL_008e:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_19 = ___e2;
		EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* L_20 = (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED*)il2cpp_codegen_object_new(EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		EventHandler_1__ctor_m3162B2AFD9F220E204A172584D64190CFE312CA1(L_20, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 42)), NULL);
		NullCheck(L_19);
		SocketAsyncEventArgs_add_Completed_mB0C757C44387F256E3F7AE0A373F90750D450805(L_19, L_20, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_21 = ___socket0;
		ClientSession_set_Client_m7E4ED2242469AA906FC402D2AE413D49362C90A3_inline(__this, L_21, NULL);
		__this->___m_InConnecting_15 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_22 = ___socket0;
		NullCheck(L_22);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_23;
		L_23 = Socket_get_LocalEndPoint_m3A2B4E60F0096E2DB31F7C28EF3CDE148D256E26(L_22, NULL);
		VirtualActionInvoker1< EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* >::Invoke(29 /* System.Void SuperSocket.ClientEngine.ClientSession::set_LocalEndPoint(System.Net.EndPoint) */, __this, L_23);
		goto IL_00c0;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bd;
		}
		throw e;
	}

CATCH_00bd:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c0;
	}// end catch (depth: 1)

IL_00c0:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_24 = ___e2;
		NullCheck(L_24);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_25;
		L_25 = SocketAsyncEventArgs_get_RemoteEndPoint_mD2C9FA961E3B75726DC445E4CA1864015BD10185_inline(L_24, NULL);
		if (L_25)
		{
			goto IL_00d0;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_26 = ___socket0;
		NullCheck(L_26);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_27;
		L_27 = Socket_get_RemoteEndPoint_m6A626481D55A640C7654B91BFDE00199C2C95479(L_26, NULL);
		G_B19_0 = L_27;
		goto IL_00d6;
	}

IL_00d0:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_28 = ___e2;
		NullCheck(L_28);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_29;
		L_29 = SocketAsyncEventArgs_get_RemoteEndPoint_mD2C9FA961E3B75726DC445E4CA1864015BD10185_inline(L_28, NULL);
		G_B19_0 = L_29;
	}

IL_00d6:
	{
		V_0 = G_B19_0;
		String_t* L_30;
		L_30 = TcpClientSession_get_HostName_m3E871F4DB16E0D145DC7A23685A50E33A3C286B3_inline(__this, NULL);
		bool L_31;
		L_31 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_30, NULL);
		if (!L_31)
		{
			goto IL_00f3;
		}
	}
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_32 = V_0;
		String_t* L_33;
		L_33 = TcpClientSession_GetHostOfEndPoint_m3F0E7CC4A60A181AAE514A326C02DD209E3FFE42(__this, L_32, NULL);
		TcpClientSession_set_HostName_m859EEF2978FB6389DE1A1FAE2E2B47F92EF26E2F_inline(__this, L_33, NULL);
		goto IL_0122;
	}

IL_00f3:
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_34 = V_0;
		V_2 = ((DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)IsInstClass((RuntimeObject*)L_34, DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var));
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_35 = V_2;
		if (!L_35)
		{
			goto IL_0122;
		}
	}
	{
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_36 = V_2;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline(L_36, NULL);
		V_3 = L_37;
		String_t* L_38 = V_3;
		bool L_39;
		L_39 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_38, NULL);
		if (L_39)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_40;
		L_40 = TcpClientSession_get_HostName_m3E871F4DB16E0D145DC7A23685A50E33A3C286B3_inline(__this, NULL);
		String_t* L_41 = V_3;
		NullCheck(L_40);
		bool L_42;
		L_42 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_40, L_41, 5, NULL);
		if (L_42)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_43 = V_3;
		TcpClientSession_set_HostName_m859EEF2978FB6389DE1A1FAE2E2B47F92EF26E2F_inline(__this, L_43, NULL);
	}

IL_0122:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_44 = ___e2;
		VirtualActionInvoker1< SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(43 /* System.Void SuperSocket.ClientEngine.TcpClientSession::OnGetSocket(System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_44);
		return;
	}
}
// System.String SuperSocket.ClientEngine.TcpClientSession::GetHostOfEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpClientSession_GetHostOfEndPoint_m3F0E7CC4A60A181AAE514A326C02DD209E3FFE42 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___endPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* V_0 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_1 = NULL;
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___endPoint0;
		V_0 = ((DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)IsInstClass((RuntimeObject*)L_0, DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var));
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline(L_2, NULL);
		return L_3;
	}

IL_0011:
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_4 = ___endPoint0;
		V_1 = ((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_4, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var));
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = V_1;
		NullCheck(L_6);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_7;
		L_7 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_8 = V_1;
		NullCheck(L_8);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9;
		L_9 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}

IL_002f:
	{
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_11;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::EnsureSocketClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_EnsureSocketClosed_m7ED3CC83EA0A3D3A8BD2DCB084F974719CEEDB92 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = TcpClientSession_EnsureSocketClosed_mAF81B14078A8FC9A9785DF8FDC269C119F0DD709(__this, (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL, NULL);
		return L_0;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::EnsureSocketClosed(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_EnsureSocketClosed_mAF81B14078A8FC9A9785DF8FDC269C119F0DD709 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___prevClient0, const RuntimeMethod* method) 
{
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0;
		L_0 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(__this, NULL);
		V_0 = L_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		V_1 = (bool)1;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = ___prevClient0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = ___prevClient0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = V_0;
		if ((((RuntimeObject*)(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)L_3) == ((RuntimeObject*)(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)L_4)))
		{
			goto IL_001b;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5 = ___prevClient0;
		V_0 = L_5;
		V_1 = (bool)0;
		goto IL_0029;
	}

IL_001b:
	{
		ClientSession_set_Client_m7E4ED2242469AA906FC402D2AE413D49362C90A3_inline(__this, (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL, NULL);
		__this->___m_IsSending_18 = 0;
	}

IL_0029:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				{
				}
				try
				{// begin try (depth: 2)
					Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_6 = V_0;
					NullCheck(L_6);
					Socket_Dispose_mED966D36CA8914F199BCE9497FFC5261AC99C1AC(L_6, NULL);
					goto IL_0042;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_003f;
					}
					throw e;
				}

CATCH_003f:
				{// begin catch(System.Object)
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0042;
				}// end catch (depth: 2)

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = V_0;
				NullCheck(L_7);
				Socket_Shutdown_mA7D259CF81614B311DD97C3748144FB1284683E3(L_7, 2, NULL);
				goto IL_0043;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0033_1;
				}
				throw e;
			}

CATCH_0033_1:
			{// begin catch(System.Object)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0043;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::DetectConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_DetectConnected_m7C7C0C868D6D7E9EF66C260CF78457A925FBF881 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0;
		L_0 = ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_1 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_1, ((int32_t)10057), NULL);
		VirtualActionInvoker1< Exception_t* >::Invoke(35 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_1);
		return (bool)0;
	}
}
// SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::GetSendingQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TcpClientSession_GetSendingQueue_m1E0420F7A3A3930CAAC129CD7CD31F005073995C (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentBatchQueue_1__ctor_m5B22CD1C4D185347C83F868754F15C4641213289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetSendingQueueU3Eb__24_0_m9DBF6ACB8B1F26D0855E142B7FCCFD20A3276507_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* G_B7_2 = NULL;
	Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* G_B6_2 = NULL;
	{
		RuntimeObject* L_0 = __this->___m_SendingQueue_16;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_SendingQueue_16;
		return L_1;
	}

IL_000f:
	{
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006f:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0078;
					}
				}
				{
					TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_0078:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				RuntimeObject* L_5 = __this->___m_SendingQueue_16;
				if (!L_5)
				{
					goto IL_002c_1;
				}
			}
			{
				RuntimeObject* L_6 = __this->___m_SendingQueue_16;
				V_2 = L_6;
				goto IL_0079;
			}

IL_002c_1:
			{
				int32_t L_7;
				L_7 = ClientSession_get_SendingQueueSize_m94DD655400F8F06CD2914FCB4B542601DB93AC3C_inline(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_8;
				L_8 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(L_7, ((int32_t)1024), NULL);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var);
				Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* L_9 = ((U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1;
				Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* L_10 = L_9;
				G_B6_0 = L_10;
				G_B6_1 = L_8;
				G_B6_2 = __this;
				if (L_10)
				{
					G_B7_0 = L_10;
					G_B7_1 = L_8;
					G_B7_2 = __this;
					goto IL_005c_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var);
				U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682* L_11 = ((U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* L_12 = (Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077*)il2cpp_codegen_object_new(Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				Func_2__ctor_m12797C6DD4A7F6D34BCD7CB149848060CEA7827C(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CGetSendingQueueU3Eb__24_0_m9DBF6ACB8B1F26D0855E142B7FCCFD20A3276507_RuntimeMethod_var), NULL);
				Func_2_tC637B450474C08BAB391B91F55133ACEF5DD4077* L_13 = L_12;
				((U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1), (void*)L_13);
				G_B7_0 = L_13;
				G_B7_1 = G_B6_1;
				G_B7_2 = G_B6_2;
			}

IL_005c_1:
			{
				ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6* L_14 = (ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6*)il2cpp_codegen_object_new(ConcurrentBatchQueue_1_t9710D7C1D915E3437598270EB5D8566B05E4B1B6_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				ConcurrentBatchQueue_1__ctor_m5B22CD1C4D185347C83F868754F15C4641213289(L_14, G_B7_1, G_B7_0, ConcurrentBatchQueue_1__ctor_m5B22CD1C4D185347C83F868754F15C4641213289_RuntimeMethod_var);
				NullCheck(G_B7_2);
				G_B7_2->___m_SendingQueue_16 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&G_B7_2->___m_SendingQueue_16), (void*)L_14);
				RuntimeObject* L_15 = __this->___m_SendingQueue_16;
				V_2 = L_15;
				goto IL_0079;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		RuntimeObject* L_16 = V_2;
		return L_16;
	}
}
// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::GetSendingItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* TcpClientSession_GetSendingItems_m1696980628849F9123C7E591506D85D35D67EDF7 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosList_1__ctor_mE6DCFB008BA4AC4F54D0A0C0D1607794A8E79F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_0 = __this->___m_SendingItems_17;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_1 = (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3*)il2cpp_codegen_object_new(PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PosList_1__ctor_mE6DCFB008BA4AC4F54D0A0C0D1607794A8E79F5A(L_1, PosList_1__ctor_mE6DCFB008BA4AC4F54D0A0C0D1607794A8E79F5A_RuntimeMethod_var);
		__this->___m_SendingItems_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SendingItems_17), (void*)L_1);
	}

IL_0013:
	{
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_2 = __this->___m_SendingItems_17;
		return L_2;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::get_IsSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_get_IsSending_mDFD47CCEB333B01599F5DC3AA3CE8F549554AEE5 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_IsSending_18;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::TrySend(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_TrySend_mFA8A0EDE0C9ACB3840C1490AAF3D8E65647C98C0 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBatchQueue_1_tAEF9205FAFE38599386E1148E23B8A509CAA59A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___segment0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1;
		L_1 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___segment0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23BD664C9380D0D43279CDEC5524917A4EDF97B9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_TrySend_mFA8A0EDE0C9ACB3840C1490AAF3D8E65647C98C0_RuntimeMethod_var)));
	}

IL_001d:
	{
		bool L_3;
		L_3 = TcpClientSession_DetectConnected_m7C7C0C868D6D7E9EF66C260CF78457A925FBF881(__this, NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}

IL_0027:
	{
		RuntimeObject* L_4;
		L_4 = TcpClientSession_GetSendingQueue_m1E0420F7A3A3930CAAC129CD7CD31F005073995C(__this, NULL);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5 = ___segment0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(0 /* System.Boolean SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>>::Enqueue(T) */, IBatchQueue_1_tAEF9205FAFE38599386E1148E23B8A509CAA59A7_il2cpp_TypeInfo_var, L_4, L_5);
		V_0 = L_6;
		int32_t* L_7 = (&__this->___m_IsSending_18);
		int32_t L_8;
		L_8 = Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA(L_7, 1, 0, NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		bool L_9 = V_0;
		return L_9;
	}

IL_0045:
	{
		TcpClientSession_DequeueSend_m299C1F831A565F6D0C81016D670CA6FDFD6DDA3F(__this, NULL);
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::TrySend(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_TrySend_m7DDAAB81623CD6B180CF4D0BE3DC4CC890C0269B (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, RuntimeObject* ___segments0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBatchQueue_1_tAEF9205FAFE38599386E1148E23B8A509CAA59A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t514D217B02A1263745BC812DCF32A1EB592E769A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t80970C26B61C899A37E146F69BC51E2443270FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___segments0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___segments0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.ArraySegment`1<System.Byte>>::get_Count() */, ICollection_1_t514D217B02A1263745BC812DCF32A1EB592E769A_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_000b:
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E241A10F4936825F3F2EAF776F78642B71A2701)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_TrySend_m7DDAAB81623CD6B180CF4D0BE3DC4CC890C0269B_RuntimeMethod_var)));
	}

IL_0016:
	{
		V_1 = 0;
		goto IL_003a;
	}

IL_001a:
	{
		RuntimeObject* L_4 = ___segments0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6;
		L_6 = InterfaceFuncInvoker1< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>::get_Item(System.Int32) */, IList_1_t80970C26B61C899A37E146F69BC51E2443270FC1_il2cpp_TypeInfo_var, L_4, L_5);
		V_2 = L_6;
		int32_t L_7;
		L_7 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_2), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral08E890D488D4C95D954C033487BFEA3B8A967A9C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_TrySend_m7DDAAB81623CD6B180CF4D0BE3DC4CC890C0269B_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003a:
	{
		int32_t L_10 = V_1;
		RuntimeObject* L_11 = ___segments0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.ArraySegment`1<System.Byte>>::get_Count() */, ICollection_1_t514D217B02A1263745BC812DCF32A1EB592E769A_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		bool L_13;
		L_13 = TcpClientSession_DetectConnected_m7C7C0C868D6D7E9EF66C260CF78457A925FBF881(__this, NULL);
		if (L_13)
		{
			goto IL_004d;
		}
	}
	{
		return (bool)1;
	}

IL_004d:
	{
		RuntimeObject* L_14;
		L_14 = TcpClientSession_GetSendingQueue_m1E0420F7A3A3930CAAC129CD7CD31F005073995C(__this, NULL);
		RuntimeObject* L_15 = ___segments0;
		NullCheck(L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(1 /* System.Boolean SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>>::Enqueue(System.Collections.Generic.IList`1<T>) */, IBatchQueue_1_tAEF9205FAFE38599386E1148E23B8A509CAA59A7_il2cpp_TypeInfo_var, L_14, L_15);
		V_0 = L_16;
		int32_t* L_17 = (&__this->___m_IsSending_18);
		int32_t L_18;
		L_18 = Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA(L_17, 1, 0, NULL);
		if (!L_18)
		{
			goto IL_006b;
		}
	}
	{
		bool L_19 = V_0;
		return L_19;
	}

IL_006b:
	{
		TcpClientSession_DequeueSend_m299C1F831A565F6D0C81016D670CA6FDFD6DDA3F(__this, NULL);
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::DequeueSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_DequeueSend_m299C1F831A565F6D0C81016D670CA6FDFD6DDA3F (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBatchQueue_1_tAEF9205FAFE38599386E1148E23B8A509CAA59A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* V_0 = NULL;
	{
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_0;
		L_0 = TcpClientSession_GetSendingItems_m1696980628849F9123C7E591506D85D35D67EDF7(__this, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = __this->___m_SendingQueue_16;
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(2 /* System.Boolean SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>>::TryDequeue(System.Collections.Generic.IList`1<T>) */, IBatchQueue_1_tAEF9205FAFE38599386E1148E23B8A509CAA59A7_il2cpp_TypeInfo_var, L_1, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		__this->___m_IsSending_18 = 0;
		return;
	}

IL_001d:
	{
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_4 = V_0;
		VirtualActionInvoker1< PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* >::Invoke(44 /* System.Void SuperSocket.ClientEngine.TcpClientSession::SendInternal(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>) */, __this, L_4);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::OnSendingCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_OnSendingCompleted_m67F5E56BDB2F34667DF8D4A553BFF8A07AB6B014 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBatchQueue_1_tAEF9205FAFE38599386E1148E23B8A509CAA59A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3E7851A50F010CDB1C66FD28BE5D6334A3AEC982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosList_1_set_Position_m455114C7C5067B62DFB35A48D5E496EBE4B4CAC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* V_0 = NULL;
	{
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_0;
		L_0 = TcpClientSession_GetSendingItems_m1696980628849F9123C7E591506D85D35D67EDF7(__this, NULL);
		V_0 = L_0;
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_1 = V_0;
		NullCheck(L_1);
		List_1_Clear_m3E7851A50F010CDB1C66FD28BE5D6334A3AEC982_inline(L_1, List_1_Clear_m3E7851A50F010CDB1C66FD28BE5D6334A3AEC982_RuntimeMethod_var);
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_2 = V_0;
		NullCheck(L_2);
		PosList_1_set_Position_m455114C7C5067B62DFB35A48D5E496EBE4B4CAC3_inline(L_2, 0, PosList_1_set_Position_m455114C7C5067B62DFB35A48D5E496EBE4B4CAC3_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->___m_SendingQueue_16;
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(2 /* System.Boolean SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>>::TryDequeue(System.Collections.Generic.IList`1<T>) */, IBatchQueue_1_tAEF9205FAFE38599386E1148E23B8A509CAA59A7_il2cpp_TypeInfo_var, L_3, L_4);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		__this->___m_IsSending_18 = 0;
		return;
	}

IL_002a:
	{
		PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* L_6 = V_0;
		VirtualActionInvoker1< PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* >::Invoke(44 /* System.Void SuperSocket.ClientEngine.TcpClientSession::SendInternal(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>) */, __this, L_6);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_Close_m7393A6EBDDC6E7EFC09E1C14D5762568D1193301 (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = TcpClientSession_EnsureSocketClosed_m7ED3CC83EA0A3D3A8BD2DCB084F974719CEEDB92(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtualActionInvoker0::Invoke(34 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
	}

IL_000e:
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
// System.Void SuperSocket.ClientEngine.TcpClientSession/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m48BB98B3000E1FBCC793B91A06EC920CAF71862A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682* L_0 = (U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682*)il2cpp_codegen_object_new(U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mCD592D4EDFEBC3301526EF1D359FEE95EDFA5483(L_0, NULL);
		((U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD592D4EDFEBC3301526EF1D359FEE95EDFA5483 (U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession/<>c::<GetSendingQueue>b__24_0(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSendingQueueU3Eb__24_0_m9DBF6ACB8B1F26D0855E142B7FCCFD20A3276507 (U3CU3Ec_tCA2C2304DDB98BE1DCEF8D2C0812B22ED64E2682* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___t0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___t0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0014:
	{
		return (bool)1;
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
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpConnectProxy__cctor_m98EC7F8E8C7374987B80E99043C90BEA5CE14291 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral448B2A8F336E0AF6B2C13B1BEB41E1F82018638A);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral448B2A8F336E0AF6B2C13B1BEB41E1F82018638A);
		((HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_StaticFields*)il2cpp_codegen_static_fields_for(HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_il2cpp_TypeInfo_var))->___m_LineSeparator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_StaticFields*)il2cpp_codegen_static_fields_for(HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_il2cpp_TypeInfo_var))->___m_LineSeparator_7), (void*)L_1);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy::.ctor(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpConnectProxy__ctor_mBD985551B45387E3489CD72BBEE9630CAD41E4FD (HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___proxyEndPoint0;
		HttpConnectProxy__ctor_mCD3E2D4A203359F02543EBEFF457F9515E4EFA5F(__this, L_0, ((int32_t)128), (String_t*)NULL, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy::.ctor(System.Net.EndPoint,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpConnectProxy__ctor_m5901407FBC550B236A06C79F5F9E0FA926E2375F (HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, String_t* ___targetHostName1, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___proxyEndPoint0;
		String_t* L_1 = ___targetHostName1;
		HttpConnectProxy__ctor_mCD3E2D4A203359F02543EBEFF457F9515E4EFA5F(__this, L_0, ((int32_t)128), L_1, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy::.ctor(System.Net.EndPoint,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpConnectProxy__ctor_mCD3E2D4A203359F02543EBEFF457F9515E4EFA5F (HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, int32_t ___receiveBufferSize1, String_t* ___targetHostName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___proxyEndPoint0;
		String_t* L_1 = ___targetHostName2;
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		ProxyConnectorBase__ctor_m1BE4CC44CFC7C758600A9F34AE2A9D22AA015D8B(__this, L_0, L_1, NULL);
		int32_t L_2 = ___receiveBufferSize1;
		__this->___m_ReceiveBufferSize_8 = L_2;
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpConnectProxy_Connect_m2F674217E3D2C9A29D546B7E119A8A7093FB7B61 (HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___remoteEndPoint0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9A99CC761E2CB91E2370DFDEEE6A4CB64952140)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpConnectProxy_Connect_m2F674217E3D2C9A29D546B7E119A8A7093FB7B61_RuntimeMethod_var)));
	}

IL_000e:
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_2 = ___remoteEndPoint0;
		if (((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_2, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_3 = ___remoteEndPoint0;
		if (((DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)IsInstClass((RuntimeObject*)L_3, DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BC738A629D18597D5302074A043E029E50416F5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9A99CC761E2CB91E2370DFDEEE6A4CB64952140)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpConnectProxy_Connect_m2F674217E3D2C9A29D546B7E119A8A7093FB7B61_RuntimeMethod_var)));
	}

IL_002e:
	{
	}
	try
	{// begin try (depth: 1)
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_5;
		L_5 = ProxyConnectorBase_get_ProxyEndPoint_m681C23F213B9DBE6302068701DAA933088453746_inline(__this, NULL);
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_6 = (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306*)il2cpp_codegen_object_new(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ConnectedCallback__ctor_m6DAA355E984F3A1CD08967D05AC1BC6B0651ECE0(L_6, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_7 = ___remoteEndPoint0;
		ConnectAsyncExtension_ConnectAsync_m74BC656D31E575DA3907AB27F4B5A7D5744AAFEC(L_5, (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*)NULL, L_6, L_7, NULL);
		goto IL_005f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004b;
		}
		throw e;
	}

CATCH_004b:
	{// begin catch(System.Exception)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_8 = V_0;
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8847D4DDA13ED26452075655926FBB3AC17F4B68)), L_8, NULL);
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_9, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005f;
	}// end catch (depth: 1)

IL_005f:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy::ProcessConnect(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpConnectProxy_ProcessConnect_mF9F0E1223FC38A8CC0BCFF27508A131BA1C8BB6F (HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___targetEndPoint1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_AsyncEventArgsCompleted_mDF820233F7E1B539CFBEB8E00D91D0AE20B41BCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchMarkState_1__ctor_mE7AED19883E4EC57D944DD09007B7E857861B370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FE9D306D9E11DEC4FEE1AAAA2B20ABB46DE748F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* V_2 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_3 = NULL;
	{
		Exception_t* L_0 = ___exception3;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		Exception_t* L_1 = ___exception3;
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_1, NULL);
		return;
	}

IL_000d:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = ___e2;
		bool L_4;
		L_4 = ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5 = ___socket0;
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_6 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_6, ((int32_t)10053), NULL);
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_6, NULL);
		return;
	}

IL_002e:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = ___e2;
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)il2cpp_codegen_object_new(SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		SocketAsyncEventArgs__ctor_m0D655E713579F9A0548D1889E29B09C19DA5A0B5(L_8, NULL);
		___e2 = L_8;
	}

IL_0038:
	{
		RuntimeObject* L_9 = ___targetEndPoint1;
		if (!((DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)IsInstClass((RuntimeObject*)L_9, DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var)))
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_10 = ___targetEndPoint1;
		V_2 = ((DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)CastclassClass((RuntimeObject*)L_10, DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var));
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline(L_11, NULL);
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = DnsEndPoint_get_Port_m8BF7822883A89804034265E3582A1F9C09E7B98E_inline(L_13, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral2FE9D306D9E11DEC4FEE1AAAA2B20ABB46DE748F, L_12, L_16, NULL);
		V_0 = L_17;
		goto IL_0088;
	}

IL_0065:
	{
		RuntimeObject* L_18 = ___targetEndPoint1;
		V_3 = ((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)CastclassClass((RuntimeObject*)L_18, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var));
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_19 = V_3;
		NullCheck(L_19);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_20;
		L_20 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_19, NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_21, NULL);
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral2FE9D306D9E11DEC4FEE1AAAA2B20ABB46DE748F, L_20, L_24, NULL);
		V_0 = L_25;
	}

IL_0088:
	{
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_26 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		String_t* L_27 = V_0;
		NullCheck(L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_26, L_27);
		V_1 = L_28;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_29 = ___e2;
		EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* L_30 = (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED*)il2cpp_codegen_object_new(EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		EventHandler_1__ctor_m3162B2AFD9F220E204A172584D64190CFE312CA1(L_30, __this, (intptr_t)((void*)ProxyConnectorBase_AsyncEventArgsCompleted_mDF820233F7E1B539CFBEB8E00D91D0AE20B41BCE_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		SocketAsyncEventArgs_add_Completed_mB0C757C44387F256E3F7AE0A373F90750D450805(L_29, L_30, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_31 = ___e2;
		ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* L_32 = (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48*)il2cpp_codegen_object_new(ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		ConnectContext__ctor_mCD09AE9188C40711CF4FE2608DC99803387B152D(L_32, NULL);
		ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* L_33 = L_32;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_34 = ___socket0;
		NullCheck(L_33);
		ConnectContext_set_Socket_mB1245D7E38495FA532053E5F03BD8889650F2D6E_inline(L_33, L_34, NULL);
		ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* L_35 = L_33;
		il2cpp_codegen_runtime_class_init_inline(HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ((HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_StaticFields*)il2cpp_codegen_static_fields_for(HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_il2cpp_TypeInfo_var))->___m_LineSeparator_7;
		SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* L_37 = (SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9*)il2cpp_codegen_object_new(SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		SearchMarkState_1__ctor_mE7AED19883E4EC57D944DD09007B7E857861B370(L_37, L_36, SearchMarkState_1__ctor_mE7AED19883E4EC57D944DD09007B7E857861B370_RuntimeMethod_var);
		NullCheck(L_35);
		ConnectContext_set_SearchState_mF28E9367DF4DA96C817686849C3E325D59CBA2D4_inline(L_35, L_37, NULL);
		NullCheck(L_31);
		SocketAsyncEventArgs_set_UserToken_m10B93BD715163BE1A9C813413BD5BD3C4209032D_inline(L_31, L_35, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_38 = ___e2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_1;
		NullCheck(L_40);
		NullCheck(L_38);
		SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221(L_38, L_39, 0, ((int32_t)(((RuntimeArray*)L_40)->max_length)), NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_41 = ___socket0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_42 = ___e2;
		ProxyConnectorBase_StartSend_m263008DD196E8022B9839D7E4234C954E9D3A3F3(__this, L_41, L_42, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy::ProcessSend(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpConnectProxy_ProcessSend_m0A834D932F1B87EF1F6F62299D04E015394C42C3 (HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		bool L_1;
		L_1 = ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline(L_2, NULL);
		V_0 = ((ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48*)CastclassClass((RuntimeObject*)L_3, ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48_il2cpp_TypeInfo_var));
		int32_t L_4 = __this->___m_ReceiveBufferSize_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = ___e0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		NullCheck(L_8);
		NullCheck(L_6);
		SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221(L_6, L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* L_9 = V_0;
		NullCheck(L_9);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_10;
		L_10 = ConnectContext_get_Socket_mD84BE701E5CDFF3D2AC351052CDCB62AA8D1801F_inline(L_9, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_11 = ___e0;
		VirtualActionInvoker2< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(8 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_10, L_11);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy::ProcessReceive(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpConnectProxy_ProcessReceive_m8CEFC5C54181EDE2037227FDBDF8B36124833104 (HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_SearchMark_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA119CD2303607713DBC09BFA160C19C005A74464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchMarkState_1_get_Matched_m17B7FD6E847B3CF1CA116853C3FB141BE86BDB29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09D77773A387B7C4DBCB47645BC62AF89E0024FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA0EDB52576C6472D6857B0A537C0EBBEC9437E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E07990C47BC933334BB01D4F434F01DD9A84D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70706375951EE99AE498EC72709F2BFDFB053D5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A05787CC149E16741B1569540C6B750B1AB1DFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C5895E5407A911300E48B9CC7616FBF94B416B7);
		s_Il2CppMethodInitialized = true;
	}
	ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t G_B9_0 = 0;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		bool L_1;
		L_1 = ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline(L_2, NULL);
		V_0 = ((ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48*)CastclassClass((RuntimeObject*)L_3, ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48_il2cpp_TypeInfo_var));
		ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* L_4 = V_0;
		NullCheck(L_4);
		SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* L_5;
		L_5 = ConnectContext_get_SearchState_mF4C19FEE9FCDE5ED3BFF46927C4F124C41647967_inline(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SearchMarkState_1_get_Matched_m17B7FD6E847B3CF1CA116853C3FB141BE86BDB29_inline(L_5, SearchMarkState_1_get_Matched_m17B7FD6E847B3CF1CA116853C3FB141BE86BDB29_RuntimeMethod_var);
		V_1 = L_6;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = ___e0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805(L_7, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_9 = ___e0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline(L_9, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_11 = ___e0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline(L_11, NULL);
		ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* L_13 = V_0;
		NullCheck(L_13);
		SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* L_14;
		L_14 = ConnectContext_get_SearchState_mF4C19FEE9FCDE5ED3BFF46927C4F124C41647967_inline(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Extensions_t6D7AAA689CC35698F20C2A32213221DB6E6FEE8F_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = Extensions_SearchMark_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA119CD2303607713DBC09BFA160C19C005A74464((RuntimeObject*)L_8, L_10, L_12, L_14, Extensions_SearchMark_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA119CD2303607713DBC09BFA160C19C005A74464_RuntimeMethod_var);
		V_2 = L_15;
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_17 = ___e0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline(L_17, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_19 = ___e0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline(L_19, NULL);
		V_9 = ((int32_t)il2cpp_codegen_add(L_18, L_20));
		int32_t L_21 = V_9;
		int32_t L_22 = __this->___m_ReceiveBufferSize_8;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0069;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral7A05787CC149E16741B1569540C6B750B1AB1DFC, NULL);
		return;
	}

IL_0069:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_23 = ___e0;
		int32_t L_24 = V_9;
		int32_t L_25 = __this->___m_ReceiveBufferSize_8;
		int32_t L_26 = V_9;
		NullCheck(L_23);
		SocketAsyncEventArgs_SetBuffer_m349C9A40CD8210266DAC1A12F3028C4951E7B896(L_23, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, L_26)), NULL);
		ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* L_27 = V_0;
		NullCheck(L_27);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_28;
		L_28 = ConnectContext_get_Socket_mD84BE701E5CDFF3D2AC351052CDCB62AA8D1801F_inline(L_27, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_29 = ___e0;
		VirtualActionInvoker2< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(8 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_28, L_29);
		return;
	}

IL_0088:
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_31 = ___e0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline(L_31, NULL);
		int32_t L_33 = V_2;
		G_B9_0 = ((int32_t)il2cpp_codegen_add(L_32, L_33));
		goto IL_009e;
	}

IL_0096:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_34 = ___e0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline(L_34, NULL);
		int32_t L_36 = V_1;
		G_B9_0 = ((int32_t)il2cpp_codegen_subtract(L_35, L_36));
	}

IL_009e:
	{
		V_3 = G_B9_0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_37 = ___e0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline(L_37, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_39 = ___e0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline(L_39, NULL);
		int32_t L_41 = V_3;
		il2cpp_codegen_runtime_class_init_inline(HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ((HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_StaticFields*)il2cpp_codegen_static_fields_for(HttpConnectProxy_t05EA617685BDD01FE0F1DC50238F971F4E56ECBA_il2cpp_TypeInfo_var))->___m_LineSeparator_7;
		NullCheck(L_42);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_38, L_40))) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_41, ((int32_t)(((RuntimeArray*)L_42)->max_length)))))))
		{
			goto IL_00c3;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral0BA0EDB52576C6472D6857B0A537C0EBBEC9437E, NULL);
		return;
	}

IL_00c3:
	{
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_43 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_44 = ___e0;
		NullCheck(L_44);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805(L_44, NULL);
		int32_t L_46 = V_3;
		NullCheck(L_43);
		String_t* L_47;
		L_47 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_43, L_45, 0, L_46);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_48 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_48, L_47, NULL);
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.IO.TextReader::ReadLine() */, L_48);
		V_4 = L_49;
		String_t* L_50 = V_4;
		bool L_51;
		L_51 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_50, NULL);
		if (!L_51)
		{
			goto IL_00f6;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral7C5895E5407A911300E48B9CC7616FBF94B416B7, NULL);
		return;
	}

IL_00f6:
	{
		String_t* L_52 = V_4;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_52, ((int32_t)32), NULL);
		V_5 = L_53;
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_55, NULL);
		int32_t L_57 = V_5;
		if ((((int32_t)L_56) > ((int32_t)((int32_t)il2cpp_codegen_add(L_57, 2)))))
		{
			goto IL_011f;
		}
	}

IL_0113:
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral7C5895E5407A911300E48B9CC7616FBF94B416B7, NULL);
		return;
	}

IL_011f:
	{
		String_t* L_58 = V_4;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		String_t* L_60;
		L_60 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_58, 0, L_59, NULL);
		V_6 = L_60;
		String_t* L_61 = V_6;
		NullCheck(_stringLiteral09D77773A387B7C4DBCB47645BC62AF89E0024FF);
		bool L_62;
		L_62 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(_stringLiteral09D77773A387B7C4DBCB47645BC62AF89E0024FF, L_61, NULL);
		if (L_62)
		{
			goto IL_0145;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral26E07990C47BC933334BB01D4F434F01DD9A84D8, NULL);
		return;
	}

IL_0145:
	{
		String_t* L_63 = V_4;
		int32_t L_64 = V_5;
		NullCheck(L_63);
		int32_t L_65;
		L_65 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_63, ((int32_t)32), ((int32_t)il2cpp_codegen_add(L_64, 1)), NULL);
		V_7 = L_65;
		int32_t L_66 = V_7;
		if ((((int32_t)L_66) >= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral7C5895E5407A911300E48B9CC7616FBF94B416B7, NULL);
		return;
	}

IL_0165:
	{
		String_t* L_67 = V_4;
		int32_t L_68 = V_5;
		int32_t L_69 = V_7;
		int32_t L_70 = V_5;
		NullCheck(L_67);
		String_t* L_71;
		L_71 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_67, ((int32_t)il2cpp_codegen_add(L_68, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_69, L_70)), 1)), NULL);
		bool L_72;
		L_72 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_71, (&V_8), NULL);
		if (!L_72)
		{
			goto IL_0192;
		}
	}
	{
		int32_t L_73 = V_8;
		if ((((int32_t)L_73) > ((int32_t)((int32_t)299))))
		{
			goto IL_0192;
		}
	}
	{
		int32_t L_74 = V_8;
		if ((((int32_t)L_74) >= ((int32_t)((int32_t)200))))
		{
			goto IL_019e;
		}
	}

IL_0192:
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral70706375951EE99AE498EC72709F2BFDFB053D5A, NULL);
		return;
	}

IL_019e:
	{
		ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* L_75 = V_0;
		NullCheck(L_75);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_76;
		L_76 = ConnectContext_get_Socket_mD84BE701E5CDFF3D2AC351052CDCB62AA8D1801F_inline(L_75, NULL);
		String_t* L_77;
		L_77 = ProxyConnectorBase_get_TargetHostHame_mF2A1E074E2DBB4715BBA769F7B9445AB5B4AA953_inline(__this, NULL);
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_78 = (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3*)il2cpp_codegen_object_new(ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		NullCheck(L_78);
		ProxyEventArgs__ctor_m05FB1D68CCF51A9A7D07EFBCF7FE8E0DD8A17B15(L_78, L_76, L_77, NULL);
		ProxyConnectorBase_OnCompleted_m9AF2FA5B8454FEB2AEF13688DFC351672AE99781(__this, L_78, NULL);
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
// System.Net.Sockets.Socket SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::get_Socket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ConnectContext_get_Socket_mD84BE701E5CDFF3D2AC351052CDCB62AA8D1801F (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CSocketU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::set_Socket(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectContext_set_Socket_mB1245D7E38495FA532053E5F03BD8889650F2D6E (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CSocketU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSocketU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// SuperSocket.ClientEngine.SearchMarkState`1<System.Byte> SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::get_SearchState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* ConnectContext_get_SearchState_mF4C19FEE9FCDE5ED3BFF46927C4F124C41647967 (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, const RuntimeMethod* method) 
{
	{
		SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* L_0 = __this->___U3CSearchStateU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::set_SearchState(SuperSocket.ClientEngine.SearchMarkState`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectContext_set_SearchState_mF28E9367DF4DA96C817686849C3E325D59CBA2D4 (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* ___value0, const RuntimeMethod* method) 
{
	{
		SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* L_0 = ___value0;
		__this->___U3CSearchStateU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSearchStateU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.HttpConnectProxy/ConnectContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectContext__ctor_mCD09AE9188C40711CF4FE2608DC99803387B152D (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Net.EndPoint SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::get_ProxyEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ProxyConnectorBase_get_ProxyEndPoint_m681C23F213B9DBE6302068701DAA933088453746 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___U3CProxyEndPointU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::set_ProxyEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_set_ProxyEndPoint_m574892E6EE33E076F767934C3E2652B4A0593E34 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___U3CProxyEndPointU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProxyEndPointU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::get_TargetHostHame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProxyConnectorBase_get_TargetHostHame_mF2A1E074E2DBB4715BBA769F7B9445AB5B4AA953 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetHostHameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::set_TargetHostHame(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_set_TargetHostHame_m8FF5D848A1039FC505DA782FAB88F5F1ECFAD55D (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTargetHostHameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetHostHameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::.ctor(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase__ctor_mC0E12606622D1C700603CD1CFA68A5A73F07EDA4 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___proxyEndPoint0;
		ProxyConnectorBase__ctor_m1BE4CC44CFC7C758600A9F34AE2A9D22AA015D8B(__this, L_0, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::.ctor(System.Net.EndPoint,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase__ctor_m1BE4CC44CFC7C758600A9F34AE2A9D22AA015D8B (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, String_t* ___targetHostHame1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___proxyEndPoint0;
		ProxyConnectorBase_set_ProxyEndPoint_m574892E6EE33E076F767934C3E2652B4A0593E34_inline(__this, L_0, NULL);
		String_t* L_1 = ___targetHostHame1;
		ProxyConnectorBase_set_TargetHostHame_m8FF5D848A1039FC505DA782FAB88F5F1ECFAD55D_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::add_Completed(System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_add_Completed_mF5465D277059A7C49A6EFD294DA29661802F5512 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* L_0 = __this->___m_Completed_3;
		EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		__this->___m_Completed_3 = ((EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845*)Castclass((RuntimeObject*)L_2, EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Completed_3), (void*)((EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845*)Castclass((RuntimeObject*)L_2, EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::remove_Completed(System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_remove_Completed_m767F31428982EF1D5B67D5230EAC0278F8283EF5 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* L_0 = __this->___m_Completed_3;
		EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		__this->___m_Completed_3 = ((EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845*)Castclass((RuntimeObject*)L_2, EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Completed_3), (void*)((EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845*)Castclass((RuntimeObject*)L_2, EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::OnCompleted(SuperSocket.ClientEngine.ProxyEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_OnCompleted_m9AF2FA5B8454FEB2AEF13688DFC351672AE99781 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* ___args0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* L_0 = __this->___m_Completed_3;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		EventHandler_1_tA20086139FB26770C89ADB35A803F30F50B4F845* L_1 = __this->___m_Completed_3;
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_2 = ___args0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m6AF19A653D81488A6E294B6986F868FFC47F258F_inline(L_1, __this, L_2, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::OnException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___exception0;
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_1 = (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3*)il2cpp_codegen_object_new(ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ProxyEventArgs__ctor_m8D43757816F752EA84AA4E553D13F9873F586EF8(L_1, L_0, NULL);
		ProxyConnectorBase_OnCompleted_m9AF2FA5B8454FEB2AEF13688DFC351672AE99781(__this, L_1, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::OnException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, String_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___exception0;
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, L_0, NULL);
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_2 = (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3*)il2cpp_codegen_object_new(ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ProxyEventArgs__ctor_m8D43757816F752EA84AA4E553D13F9873F586EF8(L_2, L_1, NULL);
		ProxyConnectorBase_OnCompleted_m9AF2FA5B8454FEB2AEF13688DFC351672AE99781(__this, L_2, NULL);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::ValidateAsyncResult(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_0 = NULL;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline(L_2, NULL);
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_4 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_4, L_3, NULL);
		V_0 = L_4;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_7 = V_0;
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_8, L_6, L_7, NULL);
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_9 = (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3*)il2cpp_codegen_object_new(ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ProxyEventArgs__ctor_m8D43757816F752EA84AA4E553D13F9873F586EF8(L_9, L_8, NULL);
		ProxyConnectorBase_OnCompleted_m9AF2FA5B8454FEB2AEF13688DFC351672AE99781(__this, L_9, NULL);
		return (bool)0;
	}

IL_002d:
	{
		return (bool)1;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::AsyncEventArgsCompleted(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_AsyncEventArgsCompleted_mDF820233F7E1B539CFBEB8E00D91D0AE20B41BCE (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, RuntimeObject* ___sender0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SocketAsyncEventArgs_get_LastOperation_m16A89968CA3F3185A1AE2E1DE1106CA6FBDF9AC3_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)7))))
		{
			goto IL_0011;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e1;
		VirtualActionInvoker1< SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(10 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::ProcessSend(System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_2);
		return;
	}

IL_0011:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = ___e1;
		VirtualActionInvoker1< SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(11 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::ProcessReceive(System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_3);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartSend(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_StartSend_m263008DD196E8022B9839D7E4234C954E9D3A3F3 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___socket0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = ___e1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Socket_SendAsync_m0492E6DD02BBA2878FC8BAD3770F619B57370A26(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000c;
		}
		throw e;
	}

CATCH_000c:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_3 = V_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		Exception_t* L_5 = V_1;
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_6, L_4, L_5, NULL);
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002b;
	}// end catch (depth: 1)

IL_0021:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = ___e1;
		VirtualActionInvoker1< SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(10 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::ProcessSend(System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_8);
	}

IL_002b:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase_StartReceive_m2A9E32C41944CB069F6845E6847A6240A92FDE47 (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___socket0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = ___e1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Socket_ReceiveAsync_m158A08D073322BE419CDF11B449F07191F7576CA(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000c;
		}
		throw e;
	}

CATCH_000c:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_3 = V_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		Exception_t* L_5 = V_1;
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_6, L_4, L_5, NULL);
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002b;
	}// end catch (depth: 1)

IL_0021:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = ___e1;
		VirtualActionInvoker1< SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(11 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::ProcessReceive(System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_8);
	}

IL_002b:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyConnectorBase__cctor_mADAB215D7BD6FE34B9C5C0B0279EE9BB79DF44E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* L_0 = (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80*)il2cpp_codegen_object_new(ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ASCIIEncoding__ctor_m1BFBB1A5C4BAEB260340201E39067F77CA3687C2(L_0, NULL);
		((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2), (void*)L_0);
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
// System.Void SuperSocket.ClientEngine.Proxy.Socks4aConnector::.ctor(System.Net.EndPoint,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4aConnector__ctor_mE7A7ADC926B25A352768231F4553F9CC290D1C95 (Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, String_t* ___userID1, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___proxyEndPoint0;
		String_t* L_1 = ___userID1;
		Socks4Connector__ctor_mE53FD8CE6BAFE3765410912B76175CF95B64FF40(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks4aConnector::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4aConnector_Connect_mAF17108E5BD8D6A7B11F1833E6E7A82C36261344 (Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6DEED01B6E792CB1E7407CD78621350DD987B2C);
		s_Il2CppMethodInitialized = true;
	}
	DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___remoteEndPoint0;
		V_0 = ((DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)IsInstClass((RuntimeObject*)L_0, DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var));
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, _stringLiteralA6DEED01B6E792CB1E7407CD78621350DD987B2C, NULL);
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_3 = (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3*)il2cpp_codegen_object_new(ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ProxyEventArgs__ctor_m8D43757816F752EA84AA4E553D13F9873F586EF8(L_3, L_2, NULL);
		ProxyConnectorBase_OnCompleted_m9AF2FA5B8454FEB2AEF13688DFC351672AE99781(__this, L_3, NULL);
		return;
	}

IL_0020:
	{
	}
	try
	{// begin try (depth: 1)
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_4;
		L_4 = ProxyConnectorBase_get_ProxyEndPoint_m681C23F213B9DBE6302068701DAA933088453746_inline(__this, NULL);
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_5 = (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306*)il2cpp_codegen_object_new(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ConnectedCallback__ctor_m6DAA355E984F3A1CD08967D05AC1BC6B0651ECE0(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_6 = V_0;
		ConnectAsyncExtension_ConnectAsync_m74BC656D31E575DA3907AB27F4B5A7D5744AAFEC(L_4, (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*)NULL, L_5, L_6, NULL);
		goto IL_0051;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_7 = V_1;
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8847D4DDA13ED26452075655926FBB3AC17F4B68)), L_7, NULL);
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		return;
	}
}
// System.Byte[] SuperSocket.ClientEngine.Proxy.Socks4aConnector::GetSendingBuffer(System.Net.EndPoint,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Socks4aConnector_GetSendingBuffer_m86FDF1300419AC97FEE87236AA233DBFB1A980E1 (Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___targetEndPoint0, int32_t* ___actualLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___targetEndPoint0;
		V_0 = ((DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)IsInstClass((RuntimeObject*)L_0, DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var));
		String_t* L_1;
		L_1 = Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline(__this, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		G_B1_0 = 8;
		if (L_2)
		{
			G_B2_0 = 8;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		String_t* L_4;
		L_4 = Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(32 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_3, L_5);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		NullCheck(L_7);
		int32_t L_11;
		L_11 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(32 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_7, L_10);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(G_B3_1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(G_B3_0, 5)), 4)), L_11)), 1)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_1 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = DnsEndPoint_get_Port_m8BF7822883A89804034265E3582A1F9C09E7B98E_inline(L_17, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_18/((int32_t)256)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = DnsEndPoint_get_Port_m8BF7822883A89804034265E3582A1F9C09E7B98E_inline(L_20, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_21%((int32_t)256)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_26 = ((Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_StaticFields*)il2cpp_codegen_static_fields_for(Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_il2cpp_TypeInfo_var))->___m_Random_6;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_26, 1, ((int32_t)255));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)L_27));
		int32_t* L_28 = ___actualLength1;
		*((int32_t*)L_28) = (int32_t)8;
		String_t* L_29;
		L_29 = Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline(__this, NULL);
		bool L_30;
		L_30 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_29, NULL);
		if (L_30)
		{
			goto IL_00d0;
		}
	}
	{
		int32_t* L_31 = ___actualLength1;
		int32_t* L_32 = ___actualLength1;
		int32_t L_33 = *((int32_t*)L_32);
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_34 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		String_t* L_35;
		L_35 = Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline(__this, NULL);
		String_t* L_36;
		L_36 = Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline(__this, NULL);
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_1;
		int32_t* L_39 = ___actualLength1;
		int32_t L_40 = *((int32_t*)L_39);
		NullCheck(L_34);
		int32_t L_41;
		L_41 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_34, L_35, 0, L_37, L_38, L_40);
		*((int32_t*)L_31) = (int32_t)((int32_t)il2cpp_codegen_add(L_33, L_41));
	}

IL_00d0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_1;
		int32_t* L_43 = ___actualLength1;
		int32_t* L_44 = ___actualLength1;
		int32_t L_45 = *((int32_t*)L_44);
		V_2 = L_45;
		int32_t L_46 = V_2;
		*((int32_t*)L_43) = (int32_t)((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_2;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (uint8_t)0);
		int32_t* L_48 = ___actualLength1;
		int32_t* L_49 = ___actualLength1;
		int32_t L_50 = *((int32_t*)L_49);
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_51 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_52 = V_0;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline(L_52, NULL);
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_54 = V_0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline(L_54, NULL);
		NullCheck(L_55);
		int32_t L_56;
		L_56 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_55, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_1;
		int32_t* L_58 = ___actualLength1;
		int32_t L_59 = *((int32_t*)L_58);
		NullCheck(L_51);
		int32_t L_60;
		L_60 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_51, L_53, 0, L_56, L_57, L_59);
		*((int32_t*)L_48) = (int32_t)((int32_t)il2cpp_codegen_add(L_50, L_60));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_1;
		int32_t* L_62 = ___actualLength1;
		int32_t* L_63 = ___actualLength1;
		int32_t L_64 = *((int32_t*)L_63);
		V_2 = L_64;
		int32_t L_65 = V_2;
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_66 = V_2;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_1;
		return L_67;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks4aConnector::HandleFaultStatus(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4aConnector_HandleFaultStatus_mC4423DAE23DA0B1314079B6D94C97CFE3F7E768D (Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC* __this, uint8_t ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral013CDD277130C7C88B81578887F3F1B7759BCE5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA19118C6008208C66435CC0E794F357857BB9FD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC99597724A994445932B1CBDE9FF7FB4CE0F5BB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF79CE7B03412B08CCD54B8D48DC558F0850E58DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		uint8_t L_1 = ___status0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0035;
	}

IL_001d:
	{
		V_0 = _stringLiteralF79CE7B03412B08CCD54B8D48DC558F0850E58DA;
		goto IL_003b;
	}

IL_0025:
	{
		V_0 = _stringLiteralA19118C6008208C66435CC0E794F357857BB9FD2;
		goto IL_003b;
	}

IL_002d:
	{
		V_0 = _stringLiteral013CDD277130C7C88B81578887F3F1B7759BCE5B;
		goto IL_003b;
	}

IL_0035:
	{
		V_0 = _stringLiteralC99597724A994445932B1CBDE9FF7FB4CE0F5BB5;
	}

IL_003b:
	{
		String_t* L_2 = V_0;
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, L_2, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks4aConnector::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4aConnector__cctor_m1CEAF162A7EF5A8645AD1025EAA97AD0DCE4F0BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_StaticFields*)il2cpp_codegen_static_fields_for(Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_il2cpp_TypeInfo_var))->___m_Random_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_StaticFields*)il2cpp_codegen_static_fields_for(Socks4aConnector_tF5904D685BBAFD21D781433750C4B13F5A29B5CC_il2cpp_TypeInfo_var))->___m_Random_6), (void*)L_0);
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
// System.Void SuperSocket.ClientEngine.Proxy.ReceiveState::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveState__ctor_m3F5D00EED2915A6C2344488D872D37E07680436D (ReceiveState_t289EC0EBF10BB0FD948B3375B98ABF33D0BF20D9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		ReceiveState_set_Buffer_m647990F067EC0D5CD97FBA386F590CD40AF99B9F_inline(__this, L_0, NULL);
		return;
	}
}
// System.Byte[] SuperSocket.ClientEngine.Proxy.ReceiveState::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReceiveState_get_Buffer_m2B468D5B9C99ACD01B58214A7186171E8E3E7730 (ReceiveState_t289EC0EBF10BB0FD948B3375B98ABF33D0BF20D9* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CBufferU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ReceiveState::set_Buffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveState_set_Buffer_m647990F067EC0D5CD97FBA386F590CD40AF99B9F (ReceiveState_t289EC0EBF10BB0FD948B3375B98ABF33D0BF20D9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CBufferU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBufferU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.Proxy.ReceiveState::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReceiveState_get_Length_mBD52C77E50BDB3033C6E9983A01C6DB80493D62E (ReceiveState_t289EC0EBF10BB0FD948B3375B98ABF33D0BF20D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.ReceiveState::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveState_set_Length_m4DEF75487878241E49B6C77E43D74D573218B48F (ReceiveState_t289EC0EBF10BB0FD948B3375B98ABF33D0BF20D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_1 = L_0;
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
// System.String SuperSocket.ClientEngine.Proxy.Socks4Connector::get_UserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserIDU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks4Connector::set_UserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4Connector_set_UserID_m94211BA29BDB5B013EA513EDEC5CE13625C462B7 (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CUserIDU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIDU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks4Connector::.ctor(System.Net.EndPoint,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4Connector__ctor_mE53FD8CE6BAFE3765410912B76175CF95B64FF40 (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, String_t* ___userID1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___proxyEndPoint0;
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		ProxyConnectorBase__ctor_mC0E12606622D1C700603CD1CFA68A5A73F07EDA4(__this, L_0, NULL);
		String_t* L_1 = ___userID1;
		Socks4Connector_set_UserID_m94211BA29BDB5B013EA513EDEC5CE13625C462B7_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks4Connector::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4Connector_Connect_mE2C5EFB8E90E24B02B0FD9CD170605CDAFF479A5 (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EDD56A1DBF870EE048CF2AAB56A5DD8B74F2E1C);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___remoteEndPoint0;
		V_0 = ((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var));
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, _stringLiteral7EDD56A1DBF870EE048CF2AAB56A5DD8B74F2E1C, NULL);
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_3 = (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3*)il2cpp_codegen_object_new(ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ProxyEventArgs__ctor_m8D43757816F752EA84AA4E553D13F9873F586EF8(L_3, L_2, NULL);
		ProxyConnectorBase_OnCompleted_m9AF2FA5B8454FEB2AEF13688DFC351672AE99781(__this, L_3, NULL);
		return;
	}

IL_0020:
	{
	}
	try
	{// begin try (depth: 1)
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_4;
		L_4 = ProxyConnectorBase_get_ProxyEndPoint_m681C23F213B9DBE6302068701DAA933088453746_inline(__this, NULL);
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_5 = (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306*)il2cpp_codegen_object_new(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ConnectedCallback__ctor_m6DAA355E984F3A1CD08967D05AC1BC6B0651ECE0(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = V_0;
		ConnectAsyncExtension_ConnectAsync_m74BC656D31E575DA3907AB27F4B5A7D5744AAFEC(L_4, (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*)NULL, L_5, L_6, NULL);
		goto IL_0051;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_7 = V_1;
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8847D4DDA13ED26452075655926FBB3AC17F4B68)), L_7, NULL);
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		return;
	}
}
// System.Byte[] SuperSocket.ClientEngine.Proxy.Socks4Connector::GetSendingBuffer(System.Net.EndPoint,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Socks4Connector_GetSendingBuffer_m70B1E04AC31CB9B56B0FABEAF5DBE389141FF3E7 (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___targetEndPoint0, int32_t* ___actualLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___targetEndPoint0;
		V_0 = ((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var));
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1 = V_0;
		NullCheck(L_1);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2;
		L_2 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_1, NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_2, NULL);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline(__this, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		G_B1_0 = 8;
		if (L_5)
		{
			G_B2_0 = 8;
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		String_t* L_7;
		L_7 = Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(32 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_6, L_8);
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0039:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_10);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(G_B3_1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(G_B3_0, 5)), ((int32_t)(((RuntimeArray*)L_10)->max_length)))), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_2 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_16, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_17/((int32_t)256)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_19, NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_20%((int32_t)256)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_1;
		NullCheck(L_23);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_21, 0, (RuntimeArray*)L_22, 4, ((int32_t)(((RuntimeArray*)L_23)->max_length)), NULL);
		int32_t* L_24 = ___actualLength1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		NullCheck(L_25);
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(4, ((int32_t)(((RuntimeArray*)L_25)->max_length))));
		String_t* L_26;
		L_26 = Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline(__this, NULL);
		bool L_27;
		L_27 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_26, NULL);
		if (L_27)
		{
			goto IL_00b6;
		}
	}
	{
		int32_t* L_28 = ___actualLength1;
		int32_t* L_29 = ___actualLength1;
		int32_t L_30 = *((int32_t*)L_29);
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_31 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		String_t* L_32;
		L_32 = Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline(__this, NULL);
		String_t* L_33;
		L_33 = Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline(__this, NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_33, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_2;
		int32_t* L_36 = ___actualLength1;
		int32_t L_37 = *((int32_t*)L_36);
		NullCheck(L_31);
		int32_t L_38;
		L_38 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_31, L_32, 0, L_34, L_35, L_37);
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, L_38));
	}

IL_00b6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		int32_t* L_40 = ___actualLength1;
		int32_t* L_41 = ___actualLength1;
		int32_t L_42 = *((int32_t*)L_41);
		V_3 = L_42;
		int32_t L_43 = V_3;
		*((int32_t*)L_40) = (int32_t)((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_3;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_2;
		return L_45;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks4Connector::ProcessConnect(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4Connector_ProcessConnect_m4F7028CA7F3C87E4B5F5A877CD528A9EA8A895C7 (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___targetEndPoint1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_AsyncEventArgsCompleted_mDF820233F7E1B539CFBEB8E00D91D0AE20B41BCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Exception_t* L_0 = ___exception3;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		Exception_t* L_1 = ___exception3;
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_1, NULL);
		return;
	}

IL_000d:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = ___e2;
		bool L_4;
		L_4 = ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5 = ___socket0;
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_6 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_6, ((int32_t)10053), NULL);
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_6, NULL);
		return;
	}

IL_002e:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = ___e2;
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)il2cpp_codegen_object_new(SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		SocketAsyncEventArgs__ctor_m0D655E713579F9A0548D1889E29B09C19DA5A0B5(L_8, NULL);
		___e2 = L_8;
	}

IL_0038:
	{
		RuntimeObject* L_9 = ___targetEndPoint1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = VirtualFuncInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*, int32_t* >::Invoke(12 /* System.Byte[] SuperSocket.ClientEngine.Proxy.Socks4Connector::GetSendingBuffer(System.Net.EndPoint,System.Int32&) */, __this, ((EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*)CastclassClass((RuntimeObject*)L_9, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564_il2cpp_TypeInfo_var)), (&V_0));
		V_1 = L_10;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_11 = ___e2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		int32_t L_13 = V_0;
		NullCheck(L_11);
		SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221(L_11, L_12, 0, L_13, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_14 = ___e2;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = ___socket0;
		NullCheck(L_14);
		SocketAsyncEventArgs_set_UserToken_m10B93BD715163BE1A9C813413BD5BD3C4209032D_inline(L_14, L_15, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_16 = ___e2;
		EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* L_17 = (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED*)il2cpp_codegen_object_new(EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_m3162B2AFD9F220E204A172584D64190CFE312CA1(L_17, __this, (intptr_t)((void*)ProxyConnectorBase_AsyncEventArgsCompleted_mDF820233F7E1B539CFBEB8E00D91D0AE20B41BCE_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		SocketAsyncEventArgs_add_Completed_mB0C757C44387F256E3F7AE0A373F90750D450805(L_16, L_17, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_18 = ___socket0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_19 = ___e2;
		ProxyConnectorBase_StartSend_m263008DD196E8022B9839D7E4234C954E9D3A3F3(__this, L_18, L_19, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks4Connector::ProcessSend(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4Connector_ProcessSend_m97380B723F27A1C428EFC72955810E4298C2F620 (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		bool L_1;
		L_1 = ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e0;
		NullCheck(L_2);
		SocketAsyncEventArgs_SetBuffer_m349C9A40CD8210266DAC1A12F3028C4951E7B896(L_2, 0, 8, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = ___e0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline(L_3, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_5 = ___e0;
		VirtualActionInvoker2< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(8 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs) */, __this, ((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_4, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), L_5);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks4Connector::ProcessReceive(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4Connector_ProcessReceive_mBFB4026D3B0C64F21AB66B951AD1E8A7DC0441EE (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CB7042D3FB741B41F09922E1007584B28BC770B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		bool L_1;
		L_1 = ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline(L_2, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_4 = ___e0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline(L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_5));
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)8)))
		{
			goto IL_0039;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = ___e0;
		int32_t L_8 = V_0;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		SocketAsyncEventArgs_SetBuffer_m349C9A40CD8210266DAC1A12F3028C4951E7B896(L_7, L_8, ((int32_t)il2cpp_codegen_subtract(8, L_9)), NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_10 = ___e0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline(L_10, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_12 = ___e0;
		VirtualActionInvoker2< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(8 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs) */, __this, ((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_11, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), L_12);
		return;
	}

IL_0039:
	{
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)8))))
		{
			goto IL_006a;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_14 = ___e0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805(L_14, NULL);
		NullCheck(L_15);
		int32_t L_16 = 1;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = L_17;
		uint8_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)90)))))
		{
			goto IL_0062;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_19 = ___e0;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline(L_19, NULL);
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_21 = (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3*)il2cpp_codegen_object_new(ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ProxyEventArgs__ctor_m2C42B67A464115813EF4C439DF44187EEB3B4044(L_21, ((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_20, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), NULL);
		ProxyConnectorBase_OnCompleted_m9AF2FA5B8454FEB2AEF13688DFC351672AE99781(__this, L_21, NULL);
		return;
	}

IL_0062:
	{
		uint8_t L_22 = V_1;
		VirtualActionInvoker1< uint8_t >::Invoke(13 /* System.Void SuperSocket.ClientEngine.Proxy.Socks4Connector::HandleFaultStatus(System.Byte) */, __this, L_22);
		return;
	}

IL_006a:
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral4CB7042D3FB741B41F09922E1007584B28BC770B, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks4Connector::HandleFaultStatus(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks4Connector_HandleFaultStatus_mE5B79764079C26D82D55EA2B381D7DC412EFEEE2 (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, uint8_t ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral013CDD277130C7C88B81578887F3F1B7759BCE5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA19118C6008208C66435CC0E794F357857BB9FD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC99597724A994445932B1CBDE9FF7FB4CE0F5BB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF79CE7B03412B08CCD54B8D48DC558F0850E58DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		uint8_t L_1 = ___status0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0035;
	}

IL_001d:
	{
		V_0 = _stringLiteralF79CE7B03412B08CCD54B8D48DC558F0850E58DA;
		goto IL_003b;
	}

IL_0025:
	{
		V_0 = _stringLiteralA19118C6008208C66435CC0E794F357857BB9FD2;
		goto IL_003b;
	}

IL_002d:
	{
		V_0 = _stringLiteral013CDD277130C7C88B81578887F3F1B7759BCE5B;
		goto IL_003b;
	}

IL_0035:
	{
		V_0 = _stringLiteralC99597724A994445932B1CBDE9FF7FB4CE0F5BB5;
	}

IL_003b:
	{
		String_t* L_2 = V_0;
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, L_2, NULL);
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
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::.ctor(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector__ctor_m97F8F6AE7C23BF3B01519780FC0BEA82F56EA741 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___proxyEndPoint0;
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		ProxyConnectorBase__ctor_mC0E12606622D1C700603CD1CFA68A5A73F07EDA4(__this, L_0, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::.ctor(System.Net.EndPoint,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector__ctor_m8FBB1BE0FF3CDF8D648E329ABC31424DC6E93434 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___proxyEndPoint0, String_t* ___username1, String_t* ___password2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___proxyEndPoint0;
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		ProxyConnectorBase__ctor_mC0E12606622D1C700603CD1CFA68A5A73F07EDA4(__this, L_0, NULL);
		String_t* L_1 = ___username1;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Socks5Connector__ctor_m8FBB1BE0FF3CDF8D648E329ABC31424DC6E93434_RuntimeMethod_var)));
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		String_t* L_5 = ___username1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(32 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_4, L_6);
		String_t* L_8 = ___password2;
		bool L_9;
		L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_add(3, L_7));
		if (L_9)
		{
			G_B4_0 = ((int32_t)il2cpp_codegen_add(3, L_7));
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		String_t* L_11 = ___password2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		NullCheck(L_10);
		int32_t L_13;
		L_13 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(32 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_10, L_12);
		G_B5_0 = L_13;
		G_B5_1 = G_B3_0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_0047:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0)));
		V_0 = L_14;
		V_1 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)5);
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_16 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		String_t* L_17 = ___username1;
		String_t* L_18 = ___username1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		NullCheck(L_16);
		int32_t L_21;
		L_21 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_16, L_17, 0, L_19, L_20, 2);
		V_2 = L_21;
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0081;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61A70E5EF4407F055D74C67160D6D8B21F16CBDD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Socks5Connector__ctor_m8FBB1BE0FF3CDF8D648E329ABC31424DC6E93434_RuntimeMethod_var)));
	}

IL_0081:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_25));
		int32_t L_26 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 2));
		String_t* L_27 = ___password2;
		bool L_28;
		L_28 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_27, NULL);
		if (L_28)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_29 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		String_t* L_30 = ___password2;
		String_t* L_31 = ___password2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_31, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_0;
		int32_t L_34 = V_1;
		NullCheck(L_29);
		int32_t L_35;
		L_35 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_29, L_30, 0, L_32, L_33, ((int32_t)il2cpp_codegen_add(L_34, 1)));
		V_2 = L_35;
		int32_t L_36 = V_2;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)255))))
		{
			goto IL_00c1;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_37 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB98826249527CDFC7A1E62333FDE1007B08C3235)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Socks5Connector__ctor_m8FBB1BE0FF3CDF8D648E329ABC31424DC6E93434_RuntimeMethod_var)));
	}

IL_00c1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		int32_t L_39 = V_1;
		int32_t L_40 = V_2;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint8_t)((int32_t)(uint8_t)L_40));
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, ((int32_t)il2cpp_codegen_add(L_42, 1))));
		goto IL_00d6;
	}

IL_00ce:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint8_t)0);
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00d6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = V_1;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_48;
		memset((&L_48), 0, sizeof(L_48));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_48), L_46, 0, L_47, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		__this->___m_UserNameAuthenRequest_4 = L_48;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_UserNameAuthenRequest_4))->____array_1), (void*)NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector_Connect_m25613B9F76F80A7F1DD2C096D10CE5306941D4AD (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___remoteEndPoint0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9A99CC761E2CB91E2370DFDEEE6A4CB64952140)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Socks5Connector_Connect_m25613B9F76F80A7F1DD2C096D10CE5306941D4AD_RuntimeMethod_var)));
	}

IL_000e:
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_2 = ___remoteEndPoint0;
		if (((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_2, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_3 = ___remoteEndPoint0;
		if (((DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)IsInstClass((RuntimeObject*)L_3, DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BC738A629D18597D5302074A043E029E50416F5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9A99CC761E2CB91E2370DFDEEE6A4CB64952140)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Socks5Connector_Connect_m25613B9F76F80A7F1DD2C096D10CE5306941D4AD_RuntimeMethod_var)));
	}

IL_002e:
	{
	}
	try
	{// begin try (depth: 1)
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_5;
		L_5 = ProxyConnectorBase_get_ProxyEndPoint_m681C23F213B9DBE6302068701DAA933088453746_inline(__this, NULL);
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_6 = (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306*)il2cpp_codegen_object_new(ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ConnectedCallback__ctor_m6DAA355E984F3A1CD08967D05AC1BC6B0651ECE0(L_6, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_7 = ___remoteEndPoint0;
		ConnectAsyncExtension_ConnectAsync_m74BC656D31E575DA3907AB27F4B5A7D5744AAFEC(L_5, (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*)NULL, L_6, L_7, NULL);
		goto IL_005f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004b;
		}
		throw e;
	}

CATCH_004b:
	{// begin catch(System.Exception)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_8 = V_0;
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8847D4DDA13ED26452075655926FBB3AC17F4B68)), L_8, NULL);
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_9, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005f;
	}// end catch (depth: 1)

IL_005f:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::ProcessConnect(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector_ProcessConnect_mDE40F07D218EFA025CEC17FA64D6FBD19D718EF9 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___targetEndPoint1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_AsyncEventArgsCompleted_mDF820233F7E1B539CFBEB8E00D91D0AE20B41BCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___exception3;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		Exception_t* L_1 = ___exception3;
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_1, NULL);
		return;
	}

IL_000d:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = ___e2;
		bool L_4;
		L_4 = ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5 = ___socket0;
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_6 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_6, ((int32_t)10053), NULL);
		ProxyConnectorBase_OnException_mA3A7A75BD925B5171F4CDFA5E783C9B5294A0424(__this, L_6, NULL);
		return;
	}

IL_002e:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = ___e2;
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)il2cpp_codegen_object_new(SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		SocketAsyncEventArgs__ctor_m0D655E713579F9A0548D1889E29B09C19DA5A0B5(L_8, NULL);
		___e2 = L_8;
	}

IL_0038:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_9 = ___e2;
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_10 = (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882*)il2cpp_codegen_object_new(SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		SocksContext__ctor_mE15A036B0F4A334F8AC4DDBC4B77E0576C2596C0(L_10, NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_11 = L_10;
		RuntimeObject* L_12 = ___targetEndPoint1;
		NullCheck(L_11);
		SocksContext_set_TargetEndPoint_m8DC922519D97CA65DAB5C1705F300CC722ECE21F_inline(L_11, ((EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*)CastclassClass((RuntimeObject*)L_12, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564_il2cpp_TypeInfo_var)), NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_13 = L_11;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_14 = ___socket0;
		NullCheck(L_13);
		SocksContext_set_Socket_m4AEEB2974A95EE84FF7866AC416C61D5B87C3F21_inline(L_13, L_14, NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_15 = L_13;
		NullCheck(L_15);
		SocksContext_set_State_mE5CC638808BE688B270B1FE25479C0DE12F3C947_inline(L_15, 0, NULL);
		NullCheck(L_9);
		SocketAsyncEventArgs_set_UserToken_m10B93BD715163BE1A9C813413BD5BD3C4209032D_inline(L_9, L_15, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_16 = ___e2;
		EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* L_17 = (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED*)il2cpp_codegen_object_new(EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_m3162B2AFD9F220E204A172584D64190CFE312CA1(L_17, __this, (intptr_t)((void*)ProxyConnectorBase_AsyncEventArgsCompleted_mDF820233F7E1B539CFBEB8E00D91D0AE20B41BCE_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		SocketAsyncEventArgs_add_Completed_mB0C757C44387F256E3F7AE0A373F90750D450805(L_16, L_17, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_18 = ___e2;
		il2cpp_codegen_runtime_class_init_inline(Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_StaticFields*)il2cpp_codegen_static_fields_for(Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_il2cpp_TypeInfo_var))->___m_AuthenHandshake_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ((Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_StaticFields*)il2cpp_codegen_static_fields_for(Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_il2cpp_TypeInfo_var))->___m_AuthenHandshake_5;
		NullCheck(L_20);
		NullCheck(L_18);
		SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221(L_18, L_19, 0, ((int32_t)(((RuntimeArray*)L_20)->max_length)), NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_21 = ___socket0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_22 = ___e2;
		ProxyConnectorBase_StartSend_m263008DD196E8022B9839D7E4234C954E9D3A3F3(__this, L_21, L_22, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::ProcessSend(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector_ProcessSend_mB05F1CB75A18A0A67E19DED761C01092833365E9 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* V_0 = NULL;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		bool L_1;
		L_1 = ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline(L_2, NULL);
		V_0 = ((SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882*)IsInstClass((RuntimeObject*)L_3, SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var));
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SocksContext_get_State_m5B58B760C950DFA5311A66150021FB933C26DA25_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = ___e0;
		NullCheck(L_6);
		SocketAsyncEventArgs_SetBuffer_m349C9A40CD8210266DAC1A12F3028C4951E7B896(L_6, 0, 2, NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_7 = V_0;
		NullCheck(L_7);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8;
		L_8 = SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline(L_7, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_9 = ___e0;
		VirtualActionInvoker2< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(8 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_8, L_9);
		return;
	}

IL_0034:
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = SocksContext_get_State_m5B58B760C950DFA5311A66150021FB933C26DA25_inline(L_10, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0053;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_12 = ___e0;
		NullCheck(L_12);
		SocketAsyncEventArgs_SetBuffer_m349C9A40CD8210266DAC1A12F3028C4951E7B896(L_12, 0, 2, NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_13 = V_0;
		NullCheck(L_13);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_14;
		L_14 = SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline(L_13, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_15 = ___e0;
		VirtualActionInvoker2< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(8 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_14, L_15);
		return;
	}

IL_0053:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_16 = ___e0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_17 = ___e0;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805(L_17, NULL);
		NullCheck(L_18);
		NullCheck(L_16);
		SocketAsyncEventArgs_SetBuffer_m349C9A40CD8210266DAC1A12F3028C4951E7B896(L_16, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_19 = V_0;
		NullCheck(L_19);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_20;
		L_20 = SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline(L_19, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_21 = ___e0;
		VirtualActionInvoker2< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(8 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_20, L_21);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.Proxy.Socks5Connector::ProcessAuthenticationResponse(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socks5Connector_ProcessAuthenticationResponse_mEE165B17783647982F78A60DA1F76E9ED51C0D90 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral449D70E6B112CFE1759AB48ED83649B50268B69A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A815F812D200882A833CC5F2058A3F30CAA3B89);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline(L_0, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_3));
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)2)))
		{
			goto IL_0026;
		}
	}
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_5 = ___e1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		SocketAsyncEventArgs_SetBuffer_m349C9A40CD8210266DAC1A12F3028C4951E7B896(L_5, L_6, ((int32_t)il2cpp_codegen_subtract(2, L_7)), NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8 = ___socket0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_9 = ___e1;
		VirtualActionInvoker2< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(8 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_8, L_9);
		return (bool)0;
	}

IL_0026:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)2)))
		{
			goto IL_0037;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral449D70E6B112CFE1759AB48ED83649B50268B69A, NULL);
		return (bool)0;
	}

IL_0037:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_11 = ___e1;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_14) == ((int32_t)5)))
		{
			goto IL_004f;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral6A815F812D200882A833CC5F2058A3F30CAA3B89, NULL);
		return (bool)0;
	}

IL_004f:
	{
		return (bool)1;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::ProcessReceive(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector_ProcessReceive_m12DF830EE791AED9553972C1583F5E487CA29C89 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0244E2CEFD64C5E2AEC3ED40FBB9E928F3A889B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3D90B35215CE6F3D3B0BE205FE6BA7BD48DDF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72DE00FCE7FE14BA9F72665DB510815B51425B8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7840D7B77D606A48EFB9EFA74C48E8D2FCFECCB);
		s_Il2CppMethodInitialized = true;
	}
	SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* V_0 = NULL;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		bool L_1;
		L_1 = ProxyConnectorBase_ValidateAsyncResult_m832A66F1769807C0E6B03E6FAD9A6D06795BD71C(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = ___e0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline(L_2, NULL);
		V_0 = ((SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882*)CastclassClass((RuntimeObject*)L_3, SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var));
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SocksContext_get_State_m5B58B760C950DFA5311A66150021FB933C26DA25_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_007c;
		}
	}
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_6 = V_0;
		NullCheck(L_6);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7;
		L_7 = SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline(L_6, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = ___e0;
		bool L_9;
		L_9 = Socks5Connector_ProcessAuthenticationResponse_mEE165B17783647982F78A60DA1F76E9ED51C0D90(__this, L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_10 = ___e0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		uint8_t L_14 = V_1;
		if (L_14)
		{
			goto IL_0049;
		}
	}
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_15 = V_0;
		NullCheck(L_15);
		SocksContext_set_State_mE5CC638808BE688B270B1FE25479C0DE12F3C947_inline(L_15, 2, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_16 = ___e0;
		Socks5Connector_SendHandshake_m752EA9F1064448CD0BE7DD7BD3AAFE035F939050(__this, L_16, NULL);
		return;
	}

IL_0049:
	{
		uint8_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_18 = V_0;
		NullCheck(L_18);
		SocksContext_set_State_mE5CC638808BE688B270B1FE25479C0DE12F3C947_inline(L_18, 1, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_19 = ___e0;
		Socks5Connector_AutheticateWithUserNamePassword_mC1707CEF5FB5D1F4CDAA6C35F1C8EB6D9AC7C380(__this, L_19, NULL);
		return;
	}

IL_005c:
	{
		uint8_t L_20 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0070;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteralE7840D7B77D606A48EFB9EFA74C48E8D2FCFECCB, NULL);
		return;
	}

IL_0070:
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral72DE00FCE7FE14BA9F72665DB510815B51425B8D, NULL);
		return;
	}

IL_007c:
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = SocksContext_get_State_m5B58B760C950DFA5311A66150021FB933C26DA25_inline(L_21, NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_00ba;
		}
	}
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_23 = V_0;
		NullCheck(L_23);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_24;
		L_24 = SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline(L_23, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_25 = ___e0;
		bool L_26;
		L_26 = Socks5Connector_ProcessAuthenticationResponse_mEE165B17783647982F78A60DA1F76E9ED51C0D90(__this, L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_0095;
		}
	}
	{
		return;
	}

IL_0095:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_27 = ___e0;
		NullCheck(L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805(L_27, NULL);
		NullCheck(L_28);
		int32_t L_29 = 1;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if (L_30)
		{
			goto IL_00ae;
		}
	}
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_31 = V_0;
		NullCheck(L_31);
		SocksContext_set_State_mE5CC638808BE688B270B1FE25479C0DE12F3C947_inline(L_31, 2, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_32 = ___e0;
		Socks5Connector_SendHandshake_m752EA9F1064448CD0BE7DD7BD3AAFE035F939050(__this, L_32, NULL);
		return;
	}

IL_00ae:
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral3F3D90B35215CE6F3D3B0BE205FE6BA7BD48DDF0, NULL);
		return;
	}

IL_00ba:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_33 = ___e0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline(L_33, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_2 = L_35;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_36 = ___e0;
		NullCheck(L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = SocketAsyncEventArgs_get_Buffer_mD52D3E1245BC03B6C127A60FA19837FE1F649805(L_36, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_38 = ___e0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline(L_38, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_2;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_41 = ___e0;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline(L_41, NULL);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_37, L_39, (RuntimeArray*)L_40, 0, L_42, NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_43 = V_0;
		NullCheck(L_43);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_44;
		L_44 = SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD_inline(L_43, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_2;
		NullCheck(L_44);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_44, (RuntimeObject*)L_45, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = SocksContext_get_ExpectedLength_m5FA2806AD2AFD8ACF99AF6709053DDCE43377514_inline(L_46, NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_48 = V_0;
		NullCheck(L_48);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_49;
		L_49 = SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD_inline(L_48, NULL);
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_49, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		if ((((int32_t)L_47) <= ((int32_t)L_50)))
		{
			goto IL_010c;
		}
	}
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_51 = V_0;
		NullCheck(L_51);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_52;
		L_52 = SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline(L_51, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_53 = ___e0;
		VirtualActionInvoker2< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(8 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_52, L_53);
		return;
	}

IL_010c:
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = SocksContext_get_State_m5B58B760C950DFA5311A66150021FB933C26DA25_inline(L_54, NULL);
		if ((((int32_t)L_55) == ((int32_t)3)))
		{
			goto IL_018e;
		}
	}
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_56 = V_0;
		NullCheck(L_56);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_57;
		L_57 = SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD_inline(L_56, NULL);
		NullCheck(L_57);
		uint8_t L_58;
		L_58 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_57, 3, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		V_3 = L_58;
		uint8_t L_59 = V_3;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_012c;
		}
	}
	{
		V_4 = ((int32_t)10);
		goto IL_0146;
	}

IL_012c:
	{
		uint8_t L_60 = V_3;
		if ((!(((uint32_t)L_60) == ((uint32_t)3))))
		{
			goto IL_0142;
		}
	}
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_61 = V_0;
		NullCheck(L_61);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_62;
		L_62 = SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD_inline(L_61, NULL);
		NullCheck(L_62);
		uint8_t L_63;
		L_63 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_62, 4, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_add(7, (int32_t)L_63));
		goto IL_0146;
	}

IL_0142:
	{
		V_4 = ((int32_t)22);
	}

IL_0146:
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_64 = V_0;
		NullCheck(L_64);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_65;
		L_65 = SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD_inline(L_64, NULL);
		NullCheck(L_65);
		int32_t L_66;
		L_66 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_65, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		int32_t L_67 = V_4;
		if ((((int32_t)L_66) >= ((int32_t)L_67)))
		{
			goto IL_016b;
		}
	}
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_68 = V_0;
		int32_t L_69 = V_4;
		NullCheck(L_68);
		SocksContext_set_ExpectedLength_m9B8D92D1F17305814AE056721FC7AB7F563EB6E0_inline(L_68, L_69, NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_70 = V_0;
		NullCheck(L_70);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_71;
		L_71 = SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline(L_70, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_72 = ___e0;
		VirtualActionInvoker2< Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(8 /* System.Void SuperSocket.ClientEngine.Proxy.ProxyConnectorBase::StartReceive(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_71, L_72);
		return;
	}

IL_016b:
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_73 = V_0;
		NullCheck(L_73);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_74;
		L_74 = SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD_inline(L_73, NULL);
		NullCheck(L_74);
		int32_t L_75;
		L_75 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_74, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		int32_t L_76 = V_4;
		if ((((int32_t)L_75) <= ((int32_t)L_76)))
		{
			goto IL_0186;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral0244E2CEFD64C5E2AEC3ED40FBB9E928F3A889B8, NULL);
		return;
	}

IL_0186:
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_77 = V_0;
		Socks5Connector_OnGetFullResponse_m5463E7F08C8B0A58F8B4A9649E5A89979B9A7B2D(__this, L_77, NULL);
		return;
	}

IL_018e:
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_78 = V_0;
		NullCheck(L_78);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_79;
		L_79 = SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD_inline(L_78, NULL);
		NullCheck(L_79);
		int32_t L_80;
		L_80 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_79, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = SocksContext_get_ExpectedLength_m5FA2806AD2AFD8ACF99AF6709053DDCE43377514_inline(L_81, NULL);
		if ((((int32_t)L_80) <= ((int32_t)L_82)))
		{
			goto IL_01ad;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral0244E2CEFD64C5E2AEC3ED40FBB9E928F3A889B8, NULL);
		return;
	}

IL_01ad:
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_83 = V_0;
		Socks5Connector_OnGetFullResponse_m5463E7F08C8B0A58F8B4A9649E5A89979B9A7B2D(__this, L_83, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::OnGetFullResponse(SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector_OnGetFullResponse_m5463E7F08C8B0A58F8B4A9649E5A89979B9A7B2D (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03E4744C1E0FE6FF24C9B201C03727CF7C6E1E65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EE96CE3278E49B63B29C106EB13A04CBCAF27B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A815F812D200882A833CC5F2058A3F30CAA3B89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D17BFBD771968A5A7FDB863C1485174A64C4064);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFBAA5B85AF8CDEC80BD1FA2E164C443D3E67440);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8DBCB33C056EF474A1988B11FB692C05EC47EE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB179E9AE6E3F3FE9CB508FA7C6D0D2DE4ECE511);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9D52B3A4D944C196F1B9E2E11EF007C074515C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBD3DD723DA83D433F50112C0D3A59F754E0C4AA);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	uint8_t V_1 = 0x0;
	String_t* V_2 = NULL;
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_0 = ___context0;
		NullCheck(L_0);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1;
		L_1 = SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD_inline(L_0, NULL);
		V_0 = L_1;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_2, 0, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_001d;
		}
	}
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral6A815F812D200882A833CC5F2058A3F30CAA3B89, NULL);
		return;
	}

IL_001d:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = V_0;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_4, 1, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		V_1 = L_5;
		uint8_t L_6 = V_1;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_7 = ___context0;
		NullCheck(L_7);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8;
		L_8 = SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline(L_7, NULL);
		ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* L_9 = (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3*)il2cpp_codegen_object_new(ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ProxyEventArgs__ctor_m2C42B67A464115813EF4C439DF44187EEB3B4044(L_9, L_8, NULL);
		ProxyConnectorBase_OnCompleted_m9AF2FA5B8454FEB2AEF13688DFC351672AE99781(__this, L_9, NULL);
		return;
	}

IL_003a:
	{
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_10;
		uint8_t L_11 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, 2)))
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_006e;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_007e;
			}
			case 4:
			{
				goto IL_0086;
			}
			case 5:
			{
				goto IL_008e;
			}
			case 6:
			{
				goto IL_0096;
			}
		}
	}
	{
		goto IL_009e;
	}

IL_0066:
	{
		V_2 = _stringLiteralAFBAA5B85AF8CDEC80BD1FA2E164C443D3E67440;
		goto IL_00a4;
	}

IL_006e:
	{
		V_2 = _stringLiteralB8DBCB33C056EF474A1988B11FB692C05EC47EE8;
		goto IL_00a4;
	}

IL_0076:
	{
		V_2 = _stringLiteral0EE96CE3278E49B63B29C106EB13A04CBCAF27B0;
		goto IL_00a4;
	}

IL_007e:
	{
		V_2 = _stringLiteralBB179E9AE6E3F3FE9CB508FA7C6D0D2DE4ECE511;
		goto IL_00a4;
	}

IL_0086:
	{
		V_2 = _stringLiteral6D17BFBD771968A5A7FDB863C1485174A64C4064;
		goto IL_00a4;
	}

IL_008e:
	{
		V_2 = _stringLiteral03E4744C1E0FE6FF24C9B201C03727CF7C6E1E65;
		goto IL_00a4;
	}

IL_0096:
	{
		V_2 = _stringLiteralEBD3DD723DA83D433F50112C0D3A59F754E0C4AA;
		goto IL_00a4;
	}

IL_009e:
	{
		V_2 = _stringLiteralCA9D52B3A4D944C196F1B9E2E11EF007C074515C;
	}

IL_00a4:
	{
		String_t* L_12 = V_2;
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, L_12, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::SendHandshake(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector_SendHandshake_m752EA9F1064448CD0BE7DD7BD3AAFE035F939050 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EA2943E51D84A4F4B1FA74FF13E668C4BC9A9B4);
		s_Il2CppMethodInitialized = true;
	}
	SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* V_0 = NULL;
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_5 = NULL;
	DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* V_6 = NULL;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline(L_0, NULL);
		V_0 = ((SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882*)IsInstClass((RuntimeObject*)L_1, SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var));
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_2 = V_0;
		NullCheck(L_2);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_3;
		L_3 = SocksContext_get_TargetEndPoint_m170E6ACD631747CD93B267B278E6A6B0896F5C40_inline(L_2, NULL);
		V_1 = L_3;
		V_4 = 0;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_4 = V_1;
		if (!((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_4, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var)))
		{
			goto IL_009d;
		}
	}
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_5 = V_1;
		V_5 = ((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_5, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var));
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = V_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_6, NULL);
		V_4 = L_7;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_8 = V_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		V_2 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)1);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_12 = V_5;
		NullCheck(L_12);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_13;
		L_13 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_12, NULL);
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, 4, 4, NULL);
		goto IL_0097;
	}

IL_005c:
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_16 = V_5;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily() */, L_16);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_008b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)22));
		V_2 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)4);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_20 = V_5;
		NullCheck(L_20);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21;
		L_21 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_20, NULL);
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_21, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, 4, ((int32_t)16), NULL);
		goto IL_0097;
	}

IL_008b:
	{
		ProxyConnectorBase_OnException_mA3E1FF3613521FA798A500119785F85477925D79(__this, _stringLiteral6EA2943E51D84A4F4B1FA74FF13E668C4BC9A9B4, NULL);
		return;
	}

IL_0097:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		NullCheck(L_24);
		V_3 = ((int32_t)(((RuntimeArray*)L_24)->max_length));
		goto IL_00f9;
	}

IL_009d:
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_25 = V_1;
		V_6 = ((DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565*)IsInstClass((RuntimeObject*)L_25, DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565_il2cpp_TypeInfo_var));
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_26 = V_6;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = DnsEndPoint_get_Port_m8BF7822883A89804034265E3582A1F9C09E7B98E_inline(L_26, NULL);
		V_4 = L_27;
		il2cpp_codegen_runtime_class_init_inline(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_28 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_29 = V_6;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline(L_29, NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		NullCheck(L_28);
		int32_t L_32;
		L_32 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(32 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_28, L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(7, L_32)));
		V_2 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)3);
		V_3 = 5;
		int32_t L_35 = V_3;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_36 = ((ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_StaticFields*)il2cpp_codegen_static_fields_for(ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918_il2cpp_TypeInfo_var))->___ASCIIEncoding_2;
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_37 = V_6;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline(L_37, NULL);
		DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* L_39 = V_6;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline(L_39, NULL);
		NullCheck(L_40);
		int32_t L_41;
		L_41 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_40, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_2;
		int32_t L_43 = V_3;
		NullCheck(L_36);
		int32_t L_44;
		L_44 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_36, L_38, 0, L_41, L_42, L_43);
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, L_44));
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 2));
	}

IL_00f9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_2;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_2;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_2;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_2;
		int32_t L_50 = V_3;
		int32_t L_51 = V_4;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_50, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_51/((int32_t)256)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_2;
		int32_t L_53 = V_3;
		int32_t L_54 = V_4;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_53, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_54%((int32_t)256)))));
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_55 = ___e0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_2;
		int32_t L_57 = V_3;
		NullCheck(L_55);
		SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221(L_55, L_56, 0, L_57, NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_58 = V_0;
		int32_t L_59 = V_3;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_60 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B(L_60, ((int32_t)il2cpp_codegen_add(L_59, 5)), List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		NullCheck(L_58);
		SocksContext_set_ReceivedData_m8AE58A4D022E2425E12EC5272E30584DE60C4118_inline(L_58, L_60, NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_61 = V_0;
		NullCheck(L_61);
		SocksContext_set_ExpectedLength_m9B8D92D1F17305814AE056721FC7AB7F563EB6E0_inline(L_61, 5, NULL);
		SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* L_62 = V_0;
		NullCheck(L_62);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_63;
		L_63 = SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline(L_62, NULL);
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_64 = ___e0;
		ProxyConnectorBase_StartSend_m263008DD196E8022B9839D7E4234C954E9D3A3F3(__this, L_63, L_64, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::AutheticateWithUserNamePassword(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector_AutheticateWithUserNamePassword_mC1707CEF5FB5D1F4CDAA6C35F1C8EB6D9AC7C380 (Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline(L_0, NULL);
		NullCheck(((SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882*)CastclassClass((RuntimeObject*)L_1, SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var)));
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2;
		L_2 = SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline(((SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882*)CastclassClass((RuntimeObject*)L_1, SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_2;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_3 = ___e0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_4 = (&__this->___m_UserNameAuthenRequest_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline(L_4, ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_6 = (&__this->___m_UserNameAuthenRequest_4);
		int32_t L_7;
		L_7 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline(L_6, ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_8 = (&__this->___m_UserNameAuthenRequest_4);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline(L_8, ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		NullCheck(L_3);
		SocketAsyncEventArgs_SetBuffer_m0FD0A66A22DB01867E3B4FACFF8F4BEF63AAC221(L_3, L_5, L_7, L_9, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_10 = V_0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_11 = ___e0;
		ProxyConnectorBase_StartSend_m263008DD196E8022B9839D7E4234C954E9D3A3F3(__this, L_10, L_11, NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socks5Connector__cctor_m52F4CA6CD827AE0173A780BDB769B5EEC6FAED18 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tA5273FBA5D4AE11BFE51679534392AC9A24725C1____BB32F1DA18A347847825FCB7B9096876CBFA36F8_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tA5273FBA5D4AE11BFE51679534392AC9A24725C1____BB32F1DA18A347847825FCB7B9096876CBFA36F8_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_StaticFields*)il2cpp_codegen_static_fields_for(Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_il2cpp_TypeInfo_var))->___m_AuthenHandshake_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_StaticFields*)il2cpp_codegen_static_fields_for(Socks5Connector_tC9A9F9568B04CECEE42583CE8D7D438823638704_il2cpp_TypeInfo_var))->___m_AuthenHandshake_5), (void*)L_1);
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
// System.Net.Sockets.Socket SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::get_Socket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4 (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CSocketU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::set_Socket(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocksContext_set_Socket_m4AEEB2974A95EE84FF7866AC416C61D5B87C3F21 (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CSocketU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSocketU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksState SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocksContext_get_State_m5B58B760C950DFA5311A66150021FB933C26DA25 (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::set_State(SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocksContext_set_State_mE5CC638808BE688B270B1FE25479C0DE12F3C947 (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Net.EndPoint SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::get_TargetEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* SocksContext_get_TargetEndPoint_m170E6ACD631747CD93B267B278E6A6B0896F5C40 (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___U3CTargetEndPointU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::set_TargetEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocksContext_set_TargetEndPoint_m8DC922519D97CA65DAB5C1705F300CC722ECE21F (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___U3CTargetEndPointU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetEndPointU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte> SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::get_ReceivedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = __this->___U3CReceivedDataU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::set_ReceivedData(System.Collections.Generic.List`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocksContext_set_ReceivedData_m8AE58A4D022E2425E12EC5272E30584DE60C4118 (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = ___value0;
		__this->___U3CReceivedDataU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceivedDataU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::get_ExpectedLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocksContext_get_ExpectedLength_m5FA2806AD2AFD8ACF99AF6709053DDCE43377514 (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CExpectedLengthU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::set_ExpectedLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocksContext_set_ExpectedLength_m9B8D92D1F17305814AE056721FC7AB7F563EB6E0 (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CExpectedLengthU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void SuperSocket.ClientEngine.Proxy.Socks5Connector/SocksContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocksContext__ctor_mE15A036B0F4A334F8AC4DDBC4B77E0576C2596C0 (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ASCIIEncoding_set_FallbackByte_m7BD85DF33CBD1AE5B5510C37A935E5F3199D73B3_inline (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_0 = ___value0;
		__this->___U3CFallbackByteU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ASCIIEncoding_get_FallbackByte_m6B8FEAD4555FD0E7CD5D2ACA9D1A691367D78939_inline (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_0 = __this->___U3CFallbackByteU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 ASCIIEncoding_get_FallbackCharacter_m40CEA1C38EFD5B3EFD077BC4BBC2807D925F1A54_inline (ASCIIEncoding_t55D18DB1679DDD7F4748A9A571766897F6610A80* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_0 = __this->___fallbackCharacter_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SocketAsyncEventArgs_get_UserToken_m7953E8417ECA92D0AE46615B343136763B0CFB12_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CUserTokenU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_UserToken_m10B93BD715163BE1A9C813413BD5BD3C4209032D_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CUserTokenU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserTokenU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ConnectToken_get_Callback_mDB4BAE7AA209F4694BDCE943197FA9E4176599C7_inline (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, const RuntimeMethod* method) 
{
	{
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_0 = __this->___U3CCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectToken_get_State_m78DBB4CF30AD06BB2A000000D46D2AEAB0FAAA57_inline (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectedCallback_Invoke_m297D5BDA83CA84CB0309785CADF4EB209C570C88_inline (ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, RuntimeObject* ___state1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e2, Exception_t* ___exception3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*, RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, Exception_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___socket0, ___state1, ___e2, ___exception3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectToken_set_State_mC4F0E28F37C21A92F4EFDFCCE65E4180DC066E50_inline (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectToken_set_Callback_m3FCE63A3DF8E001C9404D72570E59431669F1796_inline (ConnectToken_t74AF3DE548D73878DD7466E669FE58F244C2693C* __this, ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* ___value0, const RuntimeMethod* method) 
{
	{
		ConnectedCallback_t28EF1A6403D25F3B5BB3326EF761B74AC8AD1306* L_0 = ___value0;
		__this->___U3CCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_RemoteEndPoint_m63E183C33AA5B60D8331A1CEC30A008B6AC7206F_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___remote_ep_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remote_ep_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyEventArgs_set_Connected_mCC9A44D394AD2AE34C3F88D41B059016C2C02BCB_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CConnectedU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyEventArgs_set_Socket_m3E8300379B58C11AF923FE8898166C15CE3DA59B_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CSocketU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSocketU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyEventArgs_set_TargetHostName_m27C586D7CCA42B3BD98293107B7D93101AE47C2D_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTargetHostNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetHostNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyEventArgs_set_Exception_m77A739C36837E4C6148592C99FCD85BFBE567CB0_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, Exception_t* ___value0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___value0;
		__this->___U3CExceptionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_LastOperation_m16A89968CA3F3185A1AE2E1DE1106CA6FBDF9AC3_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLastOperationU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ClientSession_get_Buffer_mCE99012D5FAC9BC66D94D08DC719431040E4B87F_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = __this->___U3CBufferU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_Buffer_m7508DEAC6096ED1129727B9F2E476FE6AA6702DD_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___value0, const RuntimeMethod* method) 
{
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___value0;
		__this->___U3CBufferU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBufferU3Ek__BackingField_13))->____array_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ClientSession_get_Client_m2F8CCD8B4750BDA9AE163661ADA98FCF70411123_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSocketErrorU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBytesTransferredU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_Offset_m0D3ADE0DFB4BACC0FC3C85ED389DC9DCE451EA01_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____offset_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SocketAsyncEventArgs_get_BufferList_mD9E837C74ED11F81EC7076E532FA5067DCCAB173_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____bufferList_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ClientSession_get_IsConnected_m888AF6C0AA82F028612BB4F5F93C6A79524AE01B_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsConnectedU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_IsConnected_m64E1F85C8E94FC06D5919D4D75BF21906867F458_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsConnectedU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ClientSession_get_NoDelay_m5C9D0770C0A50542BA5D05BA8200FAA439CE3AB9_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CNoDelayU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Data_mC53E02DE55FD98AF68980FA2AE14BEA1FEB17871_inline (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Offset_m35441E92E83A5B0E99DF4950FE1530E3FF1FF20C_inline (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3COffsetU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Length_m692AE047B4CB2154C7C46A6F79A4DE6268C7E780_inline (DataEventArgs_t59A1B58C691EFA39B03449E4B1A4D95935CEC1BD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorEventArgs_set_Exception_m748058239B7A1C5801518AB60626084E02F7CB09_inline (ErrorEventArgs_t32AF4D881274009DE61D2D5418DD313A7CD93502* __this, Exception_t* ___value0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___value0;
		__this->___U3CExceptionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* AuthenticatedStreamTcpSession_get_Security_mB42BAC8CCEF9B17C8ACD86D6A7F29BD9B855ECCB_inline (AuthenticatedStreamTcpSession_t57ABF014A58AE52E2F8C5B9CF4456B5B1360128F* __this, const RuntimeMethod* method) 
{
	{
		SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* L_0 = __this->___U3CSecurityU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* SecurityOption_get_Credential_m0490FFC63CE8980C7A8486BF4B3FA01CD50EECB6_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* L_0 = __this->___U3CCredentialU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CredentialCache_get_DefaultCredentials_mFD45861A5151E546B6DF04F6D527E82214EA4143_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemNetworkCredential_tFBEE5F9E93DECB97C8622974DD2F2EBCB0CBD4FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SystemNetworkCredential_tFBEE5F9E93DECB97C8622974DD2F2EBCB0CBD4FF_il2cpp_TypeInfo_var);
		SystemNetworkCredential_tFBEE5F9E93DECB97C8622974DD2F2EBCB0CBD4FF* L_0 = ((SystemNetworkCredential_tFBEE5F9E93DECB97C8622974DD2F2EBCB0CBD4FF_StaticFields*)il2cpp_codegen_static_fields_for(SystemNetworkCredential_tFBEE5F9E93DECB97C8622974DD2F2EBCB0CBD4FF_il2cpp_TypeInfo_var))->___defaultCredential_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TcpClientSession_get_HostName_m3E871F4DB16E0D145DC7A23685A50E33A3C286B3_inline (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CHostNameU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurityOption_set_EnabledSslProtocols_mA961B5CD81E81A829D6007B1A318FE568C549A52_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CEnabledSslProtocolsU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurityOption_set_Certificates_mBFF7AA4DCB277D25E69152F9B78087A83163EE64_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___value0, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = ___value0;
		__this->___U3CCertificatesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCertificatesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurityOption_set_Credential_mAD0E371644C28A8B9E5069F4880B567AFA8FB744_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* ___value0, const RuntimeMethod* method) 
{
	{
		NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313* L_0 = ___value0;
		__this->___U3CCredentialU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCredentialU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowNameMismatchCertificate_mB1EDB7C7E998C9B2CF7CE4DFB8068BA3EFF78921_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAllowNameMismatchCertificateU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowCertificateChainErrors_mF364E130DDDE4F8232FA804303C520D1DB32C21C_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAllowCertificateChainErrorsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowUnstrustedCertificate_m297287899B106BA05B5F833F52986A90B49EDD66_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAllowUnstrustedCertificateU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t X509ChainStatus_get_Status_m58AB369B6D5CDF2436644C1936953058FBBDEF99_inline (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___status_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* SecurityOption_get_Certificates_m5DFD0F44ED9A215D8A982E41D18327CFEA4C8F66_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = __this->___U3CCertificatesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SecurityOption_get_EnabledSslProtocols_mC7E74BF42854B811D79D7F8673BAB7192E6A9A87_inline (SecurityOption_t7A6E2536EEB03123A9DCC0600E3728891A11E341* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CEnabledSslProtocolsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ClientSession_get_LocalEndPoint_mF3ECCC5C8EEA5AC9705757E072D3BB6236A999D0_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___U3CLocalEndPointU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_LocalEndPoint_mD831A832AFA571CD9127D2057D49BC04164AE357_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___U3CLocalEndPointU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocalEndPointU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientSession_get_ReceiveBufferSize_m59353D95FD19AF22E44A70BB53C8B3ED12855993_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReceiveBufferSizeU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_ReceiveBufferSize_mC7359571F59312D93A36668A3151465D5F6D7097_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReceiveBufferSizeU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DnsEndPoint_get_Host_m5A3224D5EF8BFDCE5215299A593DCCDD6E4DD2F0_inline (DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_Host_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TcpClientSession_set_HostName_m859EEF2978FB6389DE1A1FAE2E2B47F92EF26E2F_inline (TcpClientSession_t66A1320A24EE30FBD9F39A5AD477A732B214C5DD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CHostNameU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHostNameU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ClientSession_get_Proxy_mF2BC62F677AE8E50BC46F15B7B0E8C59522131D1_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CProxyU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProxyEventArgs_get_Connected_m8A391B02F012434E52E559AFFF9A3DA8FE48EF61_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CConnectedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProxyEventArgs_get_TargetHostName_m9337094046F7F4C35DAAE81DFE1E65533F416F58_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetHostNameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ProxyEventArgs_get_Socket_mDF9D2F534DD7DA5B25C2ABDF95EDD17395D82280_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CSocketU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ProxyEventArgs_get_Exception_m8C045D73C2B3EB103276CCB2BA163E5A9A2D78D3_inline (ProxyEventArgs_t360D86321AF72DF372F95B828C40A909D9D3A0D3* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->___U3CExceptionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_connected_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_Client_m7E4ED2242469AA906FC402D2AE413D49362C90A3_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* SocketAsyncEventArgs_get_RemoteEndPoint_mD2C9FA961E3B75726DC445E4CA1864015BD10185_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___remote_ep_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->____address_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientSession_get_SendingQueueSize_m94DD655400F8F06CD2914FCB4B542601DB93AC3C_inline (ClientSession_tE5B0068C9EB846CF5BCBD1DA1D516277E20F1395* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSendingQueueSizeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ProxyConnectorBase_get_ProxyEndPoint_m681C23F213B9DBE6302068701DAA933088453746_inline (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___U3CProxyEndPointU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsEndPoint_get_Port_m8BF7822883A89804034265E3582A1F9C09E7B98E_inline (DnsEndPoint_t54BB86A9D94D8C604562407CE49F5F7323856565* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Port_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____port_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectContext_set_Socket_mB1245D7E38495FA532053E5F03BD8889650F2D6E_inline (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CSocketU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSocketU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectContext_set_SearchState_mF28E9367DF4DA96C817686849C3E325D59CBA2D4_inline (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* ___value0, const RuntimeMethod* method) 
{
	{
		SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* L_0 = ___value0;
		__this->___U3CSearchStateU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSearchStateU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ConnectContext_get_Socket_mD84BE701E5CDFF3D2AC351052CDCB62AA8D1801F_inline (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CSocketU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* ConnectContext_get_SearchState_mF4C19FEE9FCDE5ED3BFF46927C4F124C41647967_inline (ConnectContext_t0E96627FD3591DADA4368D965D8085CDC38F5A48* __this, const RuntimeMethod* method) 
{
	{
		SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* L_0 = __this->___U3CSearchStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProxyConnectorBase_get_TargetHostHame_mF2A1E074E2DBB4715BBA769F7B9445AB5B4AA953_inline (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetHostHameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyConnectorBase_set_ProxyEndPoint_m574892E6EE33E076F767934C3E2652B4A0593E34_inline (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___U3CProxyEndPointU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProxyEndPointU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyConnectorBase_set_TargetHostHame_m8FF5D848A1039FC505DA782FAB88F5F1ECFAD55D_inline (ProxyConnectorBase_tEFCE5D7FB678FBB8F2AD7C145ACDB9749A7DD918* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTargetHostHameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetHostHameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Socks4Connector_get_UserID_mA1981A6CC9CCEE1139BB77C577F098837545A6AC_inline (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserIDU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiveState_set_Buffer_m647990F067EC0D5CD97FBA386F590CD40AF99B9F_inline (ReceiveState_t289EC0EBF10BB0FD948B3375B98ABF33D0BF20D9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CBufferU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBufferU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Socks4Connector_set_UserID_m94211BA29BDB5B013EA513EDEC5CE13625C462B7_inline (Socks4Connector_t8BE5126FD92D5CD86C692FB956E2B3E5C6CFFA34* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CUserIDU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIDU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocksContext_set_TargetEndPoint_m8DC922519D97CA65DAB5C1705F300CC722ECE21F_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___U3CTargetEndPointU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetEndPointU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocksContext_set_Socket_m4AEEB2974A95EE84FF7866AC416C61D5B87C3F21_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CSocketU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSocketU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocksContext_set_State_mE5CC638808BE688B270B1FE25479C0DE12F3C947_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocksContext_get_State_m5B58B760C950DFA5311A66150021FB933C26DA25_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* SocksContext_get_Socket_m91D7C8DCE6DEFA1CDFFD5FD7B34E44BEAF8E1DC4_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CSocketU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* SocksContext_get_ReceivedData_mA86A7AAC15502E81EBA16F1F91A913E780F181CD_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = __this->___U3CReceivedDataU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocksContext_get_ExpectedLength_m5FA2806AD2AFD8ACF99AF6709053DDCE43377514_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CExpectedLengthU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocksContext_set_ExpectedLength_m9B8D92D1F17305814AE056721FC7AB7F563EB6E0_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CExpectedLengthU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* SocksContext_get_TargetEndPoint_m170E6ACD631747CD93B267B278E6A6B0896F5C40_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___U3CTargetEndPointU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocksContext_set_ReceivedData_m8AE58A4D022E2425E12EC5272E30584DE60C4118_inline (SocksContext_t11C058837EAB33D77F499F89F9BA86E847374882* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = ___value0;
		__this->___U3CReceivedDataU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceivedDataU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_gshared_inline (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_gshared_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5DFE935412BFEF969417FF2FB31799FA9B21C895_gshared_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PosList_1_get_Position_m4FB82DF33C65339452C4621944A312602D783FD9_gshared_inline (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CPositionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m3E7851A50F010CDB1C66FD28BE5D6334A3AEC982_gshared_inline (List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* L_3 = (ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PosList_1_set_Position_m455114C7C5067B62DFB35A48D5E496EBE4B4CAC3_gshared_inline (PosList_1_tC14A134B26B9552CA128636EF66DB0E2F81B28A3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SearchMarkState_1_get_Matched_m17B7FD6E847B3CF1CA116853C3FB141BE86BDB29_gshared_inline (SearchMarkState_1_tE9888FC4958C38C80776960013F19F217FECFBA9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CMatchedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
