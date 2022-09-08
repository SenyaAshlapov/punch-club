#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding>
struct IEnumerable_1_tB0371F6D0932F0C778CAEED128603B65772AC357;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraLooker
struct CameraLooker_t0B208D90E6BCB79B16F17446FFEF1544DA114F5E;
// CamerasChanger
struct CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Cinemachine.CinemachinePathBase
struct CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D;
// Cinemachine.CinemachineTrackedDolly
struct CinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Destroyer
struct Destroyer_t983B298AE2EF96174E323D953D2A1DA07A3DA2BB;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// EnemyFightState
struct EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6;
// EnemyFighting
struct EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03;
// EnemyIdleState
struct EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09;
// EnemyNockdownState
struct EnemyNockdownState_t7B6076EE81F0823C79772BA34856C477ED64B474;
// EnemyRestState
struct EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF;
// EnemySingletone
struct EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D;
// EnemySuperPunch
struct EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F;
// EnemySuperPunchState
struct EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F;
// Events
struct Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HealthBar
struct HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t3741E5378B5C1636777589A1BE1811E9E96ADF1B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// IState
struct IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// LevelSaves
struct LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544;
// Market
struct Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerAnimation
struct PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3;
// PlayerFightState
struct PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD;
// PlayerFighting
struct PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F;
// PlayerIdleState
struct PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3;
// PlayerInput
struct PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE;
// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351;
// PlayerNockdownState
struct PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE;
// PlayerSingleton
struct PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484;
// PlayerWaitState
struct PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F;
// PlayerWinState
struct PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CamerasChanger/<cameraToGamePlay>d__13
struct U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589;
// CamerasChanger/<cameraToVanFacey>d__14
struct U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67;
// CamerasChanger/CameraEvent
struct CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842;
// Destroyer/<destroy>d__2
struct U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814;
// Enemy/<restAfterSuperPunch>d__35
struct U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A;
// Enemy/<superPunchTimer>d__34
struct U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5;
// Enemy/EnemyEvent
struct EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D;
// EnemyFighting/<fight>d__5
struct U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE;
// EnemySuperPunch/<createRedZone>d__23
struct U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF;
// EnemySuperPunch/<pauseAnimation>d__24
struct U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F;
// EnemySuperPunch/FloatPunchEvent
struct FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21;
// EnemySuperPunch/PunchEvent
struct PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E;
// Events/SingleEvent
struct SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Player/PlayerEvent
struct PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7;
// PlayerFighting/<punching>d__8
struct U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3;
// PlayerInput/IPlayerActions
struct IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C;
// UIController/UIEvent
struct UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007835EBD0D94AA60DE89B750255B7624BCA89C6;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral08DF9C2253A15D90D2EB01C158B269F4CA471ACD;
IL2CPP_EXTERN_C String_t* _stringLiteral127C9EC2DC1DE963FE25E1E89EED5673C3F3E0A3;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2CCF1529F456B8C252663510967A3496E929D9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B;
IL2CPP_EXTERN_C String_t* _stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral37F19146F56860FDCBDEBC08A296816B9019AA44;
IL2CPP_EXTERN_C String_t* _stringLiteral3BFE38CEE251C36338B498B02C77D814DEC37052;
IL2CPP_EXTERN_C String_t* _stringLiteral47F8DB26842095682C5EF9985D118DB2CCE2B74F;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0122430DFA810371E986B14D76392BC62DE8E7;
IL2CPP_EXTERN_C String_t* _stringLiteral5729B5D48E34010515CD5F7BA59C9E03EBACC980;
IL2CPP_EXTERN_C String_t* _stringLiteral6188A10B64B98F8546ADE8EDF7D18CEC2EAB9EA9;
IL2CPP_EXTERN_C String_t* _stringLiteral6A2B34784C84554FE4F96DF2462D1BC1C01C5A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF;
IL2CPP_EXTERN_C String_t* _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE;
IL2CPP_EXTERN_C String_t* _stringLiteral9F827D1EF36BBE2393AB3FD70C75A6CADD59F7AE;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C96532E4E9719BC23A895553CD5062D33397F2;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26;
IL2CPP_EXTERN_C String_t* _stringLiteralC218360721C7149E4C95F03CA58052B651561CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD1BA2C702703FD128B3431AF56C4A23D748EC804;
IL2CPP_EXTERN_C String_t* _stringLiteralDE27A4F059A2B59DD3DE0962087CF63F894976D2;
IL2CPP_EXTERN_C const RuntimeMethod* CamerasChanger_changeCameraToGamePlay_m0F7FDBEC9230B24A19F92DB5278685D99BE2BFB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CamerasChanger_changeCameraToVanFace_m2FDA0CCAAC858283E49277A8109FF920E49B4ADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037_m1D47FB565280560AE57CAF7DAE5D6018B433262C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enemy_endSuperPunch_m6BD43E393FD65BE8BE9AD686134B0F9FD0DEE4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enemy_freaze_mA2532211CB5635D71FD7810797AD3CAEA7C581DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HealthBar_hideHpBar_m13612B51088FD2332A77F4ECAF499F1902BAF720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HealthBar_showHpBar_m26924203FCE9036465B0451F731DAE98EB97E518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mF4BCB220B1836F634054646B14A5F3E00EC51EE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelSaves_levelUp_m8AD0849B48FB427FE9C673D50D72238187B1247D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Player_StartGame_mE23BCE89340970E3B32B873E9EBE4D4255958FC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Player_Win_mD3AC67F1CD62F54CC6456A2271C1212DD5D6ABC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Player_superPunchHit_mEEB9A82F6860EB67242D052B881AF8FA8C15D5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcameraToGamePlayU3Ed__13_System_Collections_IEnumerator_Reset_m40513CEEA926A4244470AB46B7E0D2C72C990B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcameraToVanFaceyU3Ed__14_System_Collections_IEnumerator_Reset_mE0E70953FED33BD384E5DCD9443329914A588A42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcreateRedZoneU3Ed__23_System_Collections_IEnumerator_Reset_mC2157986D7A7F1A034DD7A6CE00392B4DBA0A4BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CdestroyU3Ed__2_System_Collections_IEnumerator_Reset_m45511FB842A74A63B2B500EDC16AA3212F07AB96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CfightU3Ed__5_System_Collections_IEnumerator_Reset_m1CD276D4018CD445721235B005FFF64BF51EC7E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CpauseAnimationU3Ed__24_System_Collections_IEnumerator_Reset_mB0F1698DA0319CA3CC0133A5B718FF6A275892B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CpunchingU3Ed__8_System_Collections_IEnumerator_Reset_mB7BF332D5A3F7DB8BB80AE10CF4FE1144B1A2902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CrestAfterSuperPunchU3Ed__35_System_Collections_IEnumerator_Reset_mFA0D41EE626FF77BB4395DFCB832167D61689D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CsuperPunchTimerU3Ed__34_System_Collections_IEnumerator_Reset_m17E32FA7A2B93EFA5530419AE93BDBE92F689A7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_hideAllUI_m85B3D8B3EB347DFC145AF9EBD88FAECED03C3FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_showFailUI_m36BD36D93C85C89D2B3B458A81E45401CE846F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_showGamePlayUI_mB3DB9C2B86EE624FFE73B7B9D7CAB0BAE3D0CEAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_showWinUI_m112818BFD21D8411B50371ACFEA3E789C51A9DF9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// EnemyFightState
struct EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6  : public RuntimeObject
{
	// Player EnemyFightState::_player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ____player_0;
	// Enemy EnemyFightState::_enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ____enemy_1;
	// UnityEngine.Animator EnemyFightState::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_2;
	// System.Single EnemyFightState::_damage
	float ____damage_3;
};

// EnemyIdleState
struct EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09  : public RuntimeObject
{
	// Player EnemyIdleState::_player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ____player_0;
	// Enemy EnemyIdleState::_enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ____enemy_1;
	// UnityEngine.Animator EnemyIdleState::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_2;
};

// EnemyNockdownState
struct EnemyNockdownState_t7B6076EE81F0823C79772BA34856C477ED64B474  : public RuntimeObject
{
};

// EnemyRestState
struct EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF  : public RuntimeObject
{
	// UnityEngine.Animator EnemyRestState::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_0;
};

// EnemySuperPunchState
struct EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F  : public RuntimeObject
{
	// UnityEngine.Animator EnemySuperPunchState::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_0;
	// System.Single EnemySuperPunchState::_damage
	float ____damage_1;
	// Enemy EnemySuperPunchState::_enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ____enemy_2;
};

// PlayerAnimation
struct PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3  : public RuntimeObject
{
	// System.Int32 PlayerAnimation::_fightLayerIndex
	int32_t ____fightLayerIndex_0;
	// UnityEngine.Animator PlayerAnimation::_currentAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____currentAnimator_1;
};

// PlayerFightState
struct PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD  : public RuntimeObject
{
	// Player PlayerFightState::_player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ____player_0;
};

// PlayerIdleState
struct PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3  : public RuntimeObject
{
	// Player PlayerIdleState::_player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ____player_0;
};

// PlayerInput
struct PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionAsset PlayerInput::<asset>k__BackingField
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap PlayerInput::m_Player
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Player_1;
	// PlayerInput/IPlayerActions PlayerInput::m_PlayerActionsCallbackInterface
	RuntimeObject* ___m_PlayerActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction PlayerInput::m_Player_Move
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Move_3;
};

// PlayerNockdownState
struct PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE  : public RuntimeObject
{
	// Player PlayerNockdownState::_player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ____player_0;
	// UnityEngine.Animator PlayerNockdownState::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_1;
};

// PlayerWaitState
struct PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F  : public RuntimeObject
{
	// UnityEngine.Animator PlayerWaitState::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_0;
};

// PlayerWinState
struct PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC  : public RuntimeObject
{
	// UnityEngine.Animator PlayerWinState::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_0;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CamerasChanger/<cameraToGamePlay>d__13
struct U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589  : public RuntimeObject
{
	// System.Int32 CamerasChanger/<cameraToGamePlay>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CamerasChanger/<cameraToGamePlay>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CamerasChanger CamerasChanger/<cameraToGamePlay>d__13::<>4__this
	CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* ___U3CU3E4__this_2;
	// System.Single CamerasChanger/<cameraToGamePlay>d__13::<progress>5__1
	float ___U3CprogressU3E5__1_3;
};

// CamerasChanger/<cameraToVanFacey>d__14
struct U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67  : public RuntimeObject
{
	// System.Int32 CamerasChanger/<cameraToVanFacey>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CamerasChanger/<cameraToVanFacey>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CamerasChanger CamerasChanger/<cameraToVanFacey>d__14::<>4__this
	CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* ___U3CU3E4__this_2;
	// System.Single CamerasChanger/<cameraToVanFacey>d__14::<progress>5__1
	float ___U3CprogressU3E5__1_3;
};

// Destroyer/<destroy>d__2
struct U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814  : public RuntimeObject
{
	// System.Int32 Destroyer/<destroy>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Destroyer/<destroy>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Destroyer Destroyer/<destroy>d__2::<>4__this
	Destroyer_t983B298AE2EF96174E323D953D2A1DA07A3DA2BB* ___U3CU3E4__this_2;
};

// Enemy/<restAfterSuperPunch>d__35
struct U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A  : public RuntimeObject
{
	// System.Int32 Enemy/<restAfterSuperPunch>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<restAfterSuperPunch>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Enemy Enemy/<restAfterSuperPunch>d__35::<>4__this
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___U3CU3E4__this_2;
};

// Enemy/<superPunchTimer>d__34
struct U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5  : public RuntimeObject
{
	// System.Int32 Enemy/<superPunchTimer>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<superPunchTimer>d__34::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Enemy Enemy/<superPunchTimer>d__34::<>4__this
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___U3CU3E4__this_2;
};

// EnemyFighting/<fight>d__5
struct U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE  : public RuntimeObject
{
	// System.Int32 EnemyFighting/<fight>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemyFighting/<fight>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Player EnemyFighting/<fight>d__5::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_2;
	// EnemyFighting EnemyFighting/<fight>d__5::<>4__this
	EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* ___U3CU3E4__this_3;
};

// EnemySuperPunch/<createRedZone>d__23
struct U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF  : public RuntimeObject
{
	// System.Int32 EnemySuperPunch/<createRedZone>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySuperPunch/<createRedZone>d__23::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EnemySuperPunch EnemySuperPunch/<createRedZone>d__23::<>4__this
	EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* ___U3CU3E4__this_2;
	// System.Single EnemySuperPunch/<createRedZone>d__23::<scaleProgress>5__1
	float ___U3CscaleProgressU3E5__1_3;
};

// EnemySuperPunch/<pauseAnimation>d__24
struct U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F  : public RuntimeObject
{
	// System.Int32 EnemySuperPunch/<pauseAnimation>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySuperPunch/<pauseAnimation>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EnemySuperPunch EnemySuperPunch/<pauseAnimation>d__24::<>4__this
	EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* ___U3CU3E4__this_2;
};

// PlayerFighting/<punching>d__8
struct U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3  : public RuntimeObject
{
	// System.Int32 PlayerFighting/<punching>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerFighting/<punching>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerFighting PlayerFighting/<punching>d__8::<>4__this
	PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* ___U3CU3E4__this_2;
	// System.Single PlayerFighting/<punching>d__8::<punchCount>5__1
	float ___U3CpunchCountU3E5__1_3;
	// System.Single PlayerFighting/<punching>d__8::<totalDamage>5__2
	float ___U3CtotalDamageU3E5__2_4;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>
struct Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A 
{
	// System.Int32 PlayerData::Level
	int32_t ___Level_0;
	// System.Int32 PlayerData::PlayerHealth
	int32_t ___PlayerHealth_1;
	// System.Int32 PlayerData::PlayerDamage
	int32_t ___PlayerDamage_2;
	// System.Int32 PlayerData::Money
	int32_t ___Money_3;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;
};

// Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t2A1304C5BB63C2FF83D89FEDB930C94D9ECA0115 
{
	// System.Boolean Cinemachine.CinemachineTrackedDolly/AutoDolly::m_Enabled
	bool ___m_Enabled_0;
	// System.Single Cinemachine.CinemachineTrackedDolly/AutoDolly::m_PositionOffset
	float ___m_PositionOffset_1;
	// System.Int32 Cinemachine.CinemachineTrackedDolly/AutoDolly::m_SearchRadius
	int32_t ___m_SearchRadius_2;
	// System.Int32 Cinemachine.CinemachineTrackedDolly/AutoDolly::m_SearchResolution
	int32_t ___m_SearchResolution_3;
};
// Native definition for P/Invoke marshalling of Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t2A1304C5BB63C2FF83D89FEDB930C94D9ECA0115_marshaled_pinvoke
{
	int32_t ___m_Enabled_0;
	float ___m_PositionOffset_1;
	int32_t ___m_SearchRadius_2;
	int32_t ___m_SearchResolution_3;
};
// Native definition for COM marshalling of Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t2A1304C5BB63C2FF83D89FEDB930C94D9ECA0115_marshaled_com
{
	int32_t ___m_Enabled_0;
	float ___m_PositionOffset_1;
	int32_t ___m_SearchRadius_2;
	int32_t ___m_SearchResolution_3;
};

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA 
{
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// PlayerInput/PlayerActions
struct PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 
{
	// PlayerInput PlayerInput/PlayerActions::m_Wrapper
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of PlayerInput/PlayerActions
struct PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_pinvoke
{
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___m_Wrapper_0;
};
// Native definition for COM marshalling of PlayerInput/PlayerActions
struct PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_com
{
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___m_Wrapper_0;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE 
{
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;
};

struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_StaticFields
{
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Default_0;
};
// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 
{
	// Cinemachine.LensSettings Cinemachine.CameraState::Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Lens_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceLookAt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::RawPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::RawOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionDampingBypass
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	// System.Single Cinemachine.CameraState::ShotQuality
	float ___ShotQuality_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionCorrection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::OrientationCorrection
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::BlendHint
	int32_t ___BlendHint_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_StaticFields
{
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___kNoPoint_3;
};
// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_pinvoke
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_com
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_ControlsForEachActionInitialized
	bool ___m_ControlsForEachActionInitialized_7;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_BindingsForEachActionInitialized
	bool ___m_BindingsForEachActionInitialized_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_9;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_10;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_11;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_12;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_13;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_9;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CamerasChanger/CameraEvent
struct CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405  : public MulticastDelegate_t
{
};

// Enemy/EnemyEvent
struct EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D  : public MulticastDelegate_t
{
};

// EnemySuperPunch/FloatPunchEvent
struct FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21  : public MulticastDelegate_t
{
};

// EnemySuperPunch/PunchEvent
struct PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E  : public MulticastDelegate_t
{
};

// Events/SingleEvent
struct SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597  : public MulticastDelegate_t
{
};

// Player/PlayerEvent
struct PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7  : public MulticastDelegate_t
{
};

// UIController/UIEvent
struct UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CameraLooker
struct CameraLooker_t0B208D90E6BCB79B16F17446FFEF1544DA114F5E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraLooker::_objectTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____objectTransform_4;
};

// CamerasChanger
struct CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CamerasChanger::_playCameraSpeed
	float ____playCameraSpeed_6;
	// System.Single CamerasChanger::_marketCameraSpeed
	float ____marketCameraSpeed_7;
	// UnityEngine.GameObject CamerasChanger::_marketCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____marketCamera_8;
	// UnityEngine.GameObject CamerasChanger::_gamePlayCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gamePlayCamera_9;
	// Cinemachine.CinemachineVirtualCamera CamerasChanger::_trackedDollyCamera
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ____trackedDollyCamera_10;
	// Cinemachine.CinemachineTrackedDolly CamerasChanger::_trackedDolly
	CinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037* ____trackedDolly_11;
};

struct CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields
{
	// CamerasChanger/CameraEvent CamerasChanger::ChangeCameraToGamePlay
	CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* ___ChangeCameraToGamePlay_4;
	// CamerasChanger/CameraEvent CamerasChanger::ChangingCameraToGamePlay
	CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* ___ChangingCameraToGamePlay_5;
};

// Cinemachine.CinemachineComponentBase
struct CinemachineComponentBase_tDF1741220995A46FEA90E1FB7EA206D973D7428A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::m_vcamOwner
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_vcamOwner_5;
};

// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::FollowTargetAttachment
	float ___FollowTargetAttachment_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::LookAtTargetAttachment
	float ___LookAtTargetAttachment_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC* ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedFollowTarget_20;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedFollowTargetVcam_21;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetGroup
	RuntimeObject* ___m_CachedFollowTargetGroup_22;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedLookAtTarget_23;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedLookAtTargetVcam_24;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetGroup
	RuntimeObject* ___m_CachedLookAtTargetGroup_25;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<FollowTargetChanged>k__BackingField
	bool ___U3CFollowTargetChangedU3Ek__BackingField_26;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetChanged>k__BackingField
	bool ___U3CLookAtTargetChangedU3Ek__BackingField_27;
};

// Destroyer
struct Destroyer_t983B298AE2EF96174E323D953D2A1DA07A3DA2BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Destroyer::_timeToDestroy
	float ____timeToDestroy_4;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LevelSaves Enemy::_levelSaves
	LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* ____levelSaves_5;
	// Player Enemy::_player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ____player_6;
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody> Enemy::_ragdollRB
	List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* ____ragdollRB_7;
	// UnityEngine.BoxCollider Enemy::_enemyCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____enemyCollider_8;
	// System.Single Enemy::_health
	float ____health_9;
	// System.Single Enemy::_damage
	float ____damage_10;
	// System.Single Enemy::_distance
	float ____distance_11;
	// System.Single Enemy::_thrust
	float ____thrust_12;
	// System.Single Enemy::_timeBetweenPunches
	float ____timeBetweenPunches_13;
	// System.Single Enemy::_timeBetweenSuperPunches
	float ____timeBetweenSuperPunches_14;
	// System.Single Enemy::_restTime
	float ____restTime_15;
	// UnityEngine.Animator Enemy::_enemyAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____enemyAnimator_16;
	// EnemyFighting Enemy::EnemyFighting
	EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* ___EnemyFighting_17;
	// EnemySuperPunch Enemy::EnemySuperPunch
	EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* ___EnemySuperPunch_18;
	// IState Enemy::_currentState
	RuntimeObject* ____currentState_19;
	// EnemyIdleState Enemy::_idleState
	EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* ____idleState_20;
	// EnemyFightState Enemy::_fightState
	EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6* ____fightState_21;
	// EnemySuperPunchState Enemy::_superPunchState
	EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F* ____superPunchState_22;
	// EnemyRestState Enemy::_restState
	EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF* ____restState_23;
	// System.Boolean Enemy::_isRest
	bool ____isRest_24;
	// System.Boolean Enemy::_isSuperPunch
	bool ____isSuperPunch_25;
	// System.Boolean Enemy::_isDead
	bool ____isDead_26;
	// System.Boolean Enemy::_isFreaze
	bool ____isFreaze_27;
	// HealthBar Enemy::_hpBar
	HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* ____hpBar_28;
};

struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields
{
	// Enemy/EnemyEvent Enemy::EnemyDead
	EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* ___EnemyDead_4;
};

// EnemyFighting
struct EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyFighting::_damage
	float ____damage_4;
	// System.Single EnemyFighting::_timeBetweenPunches
	float ____timeBetweenPunches_5;
	// System.Boolean EnemyFighting::_isCanFight
	bool ____isCanFight_6;
};

// EnemySingletone
struct EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields
{
	// EnemySingletone EnemySingletone::SingltoneEnemy
	EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D* ___SingltoneEnemy_4;
	// Enemy EnemySingletone::SingleEnemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___SingleEnemy_5;
};

// EnemySuperPunch
struct EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player EnemySuperPunch::_player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ____player_4;
	// System.Collections.Generic.List`1<System.String> EnemySuperPunch::_enemySuperPunchesAnimations
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____enemySuperPunchesAnimations_7;
	// UnityEngine.GameObject EnemySuperPunch::_redRange
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____redRange_8;
	// System.Single EnemySuperPunch::_range
	float ____range_9;
	// UnityEngine.GameObject EnemySuperPunch::_puffPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____puffPrefab_10;
	// UnityEngine.Transform EnemySuperPunch::_puffSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____puffSpawnPoint_11;
	// UnityEngine.Animator EnemySuperPunch::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_12;
	// System.Single EnemySuperPunch::_zoneSpeed
	float ____zoneSpeed_13;
	// System.Single EnemySuperPunch::_pauseAnimtion
	float ____pauseAnimtion_14;
	// System.Single EnemySuperPunch::_damage
	float ____damage_15;
	// System.Single EnemySuperPunch::_damageFactor
	float ____damageFactor_16;
};

struct EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields
{
	// EnemySuperPunch/PunchEvent EnemySuperPunch::SuperPunchEnd
	PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* ___SuperPunchEnd_5;
	// EnemySuperPunch/FloatPunchEvent EnemySuperPunch::SuperPunchHit
	FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* ___SuperPunchHit_6;
};

// Events
struct Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields
{
	// Events/SingleEvent Events::PauseSuperPunchAnimation
	SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* ___PauseSuperPunchAnimation_4;
	// Events/SingleEvent Events::CreateRedZone
	SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* ___CreateRedZone_5;
	// Events/SingleEvent Events::DeleteRedZone
	SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* ___DeleteRedZone_6;
	// Events/SingleEvent Events::CastSuperPunch
	SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* ___CastSuperPunch_7;
};

// HealthBar
struct HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image HealthBar::_hpBarImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____hpBarImage_4;
	// UnityEngine.UI.Text HealthBar::_hpText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____hpText_5;
	// UnityEngine.GameObject HealthBar::_hpBar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____hpBar_6;
	// System.Single HealthBar::_maxHp
	float ____maxHp_7;
};

// LevelSaves
struct LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String LevelSaves::_savePlayerDataPath
	String_t* ____savePlayerDataPath_4;
	// System.String LevelSaves::_savePlayerDataFile
	String_t* ____savePlayerDataFile_5;
	// System.Int32 LevelSaves::_defaultDamage
	int32_t ____defaultDamage_6;
	// System.Int32 LevelSaves::_defaultHealth
	int32_t ____defaultHealth_7;
};

// Market
struct Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LevelSaves Market::_levelSaves
	LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* ____levelSaves_4;
	// UnityEngine.UI.Text Market::_moneyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____moneyText_5;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody> Player::_ragdollRB
	List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* ____ragdollRB_5;
	// UnityEngine.BoxCollider Player::_playerCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____playerCollider_6;
	// System.Single Player::_thrust
	float ____thrust_7;
	// LevelSaves Player::_levelSaves
	LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* ____levelSaves_8;
	// UnityEngine.Transform Player::mainCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mainCamera_9;
	// Enemy Player::_enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ____enemy_10;
	// PlayerInput Player::_playerInput
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ____playerInput_11;
	// IState Player::_currentState
	RuntimeObject* ____currentState_12;
	// PlayerWaitState Player::_waitState
	PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F* ____waitState_13;
	// PlayerIdleState Player::_idleState
	PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3* ____idleState_14;
	// PlayerFightState Player::_fightState
	PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD* ____fightState_15;
	// PlayerNockdownState Player::_nockdownState
	PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE* ____nockdownState_16;
	// PlayerWinState Player::_winState
	PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC* ____winState_17;
	// UnityEngine.Transform Player::_playerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____playerTransform_18;
	// System.Single Player::_speed
	float ____speed_19;
	// PlayerMovement Player::PlayerMovement
	PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* ___PlayerMovement_20;
	// System.Single Player::_distance
	float ____distance_21;
	// System.Single Player::_health
	float ____health_22;
	// System.Single Player::_damage
	float ____damage_23;
	// System.Single Player::_timeBetweenPunches
	float ____timeBetweenPunches_24;
	// PlayerFighting Player::PlayerFighting
	PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* ___PlayerFighting_25;
	// System.Boolean Player::_isDead
	bool ____isDead_26;
	// System.Boolean Player::_isWin
	bool ____isWin_27;
	// UnityEngine.Animator Player::_playerAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____playerAnimator_28;
	// HealthBar Player::_hpBar
	HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* ____hpBar_29;
};

struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields
{
	// Player/PlayerEvent Player::PlayerDead
	PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* ___PlayerDead_4;
};

// PlayerFighting
struct PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerAnimation PlayerFighting::_animation
	PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* ____animation_4;
	// System.Single PlayerFighting::_damage
	float ____damage_5;
	// System.Single PlayerFighting::_timeBetweenPunches
	float ____timeBetweenPunches_6;
	// Enemy PlayerFighting::_enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ____enemy_7;
	// UnityEngine.Coroutine PlayerFighting::_lastRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____lastRoutine_8;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform PlayerMovement::mainCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mainCamera_4;
	// PlayerInput PlayerMovement::_playerInput
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ____playerInput_5;
	// System.Single PlayerMovement::_speed
	float ____speed_6;
	// UnityEngine.Transform PlayerMovement::_playerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____playerTransform_7;
	// UnityEngine.Transform PlayerMovement::_enemyTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____enemyTransform_8;
	// UnityEngine.Animator PlayerMovement::_playerAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____playerAnimator_9;
	// PlayerAnimation PlayerMovement::_animation
	PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* ____animation_10;
};

// PlayerSingleton
struct PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields
{
	// PlayerSingleton PlayerSingleton::SingltonePlayer
	PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* ___SingltonePlayer_4;
	// Player PlayerSingleton::SinglePlayer
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___SinglePlayer_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UIController::_gamePlayUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gamePlayUI_5;
	// UnityEngine.GameObject UIController::_marketUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____marketUI_6;
	// UnityEngine.GameObject UIController::_failUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____failUI_7;
	// UnityEngine.GameObject UIController::_winUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____winUI_8;
	// UnityEngine.GameObject UIController::_currentUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____currentUI_9;
};

struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields
{
	// UIController/UIEvent UIController::StartGame
	UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* ___StartGame_4;
};

// Cinemachine.CinemachineTrackedDolly
struct CinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037  : public CinemachineComponentBase_tDF1741220995A46FEA90E1FB7EA206D973D7428A
{
	// Cinemachine.CinemachinePathBase Cinemachine.CinemachineTrackedDolly::m_Path
	CinemachinePathBase_t9BA180040D1DA9F876C41BC313973F3A24EE7B8D* ___m_Path_6;
	// System.Single Cinemachine.CinemachineTrackedDolly::m_PathPosition
	float ___m_PathPosition_7;
	// Cinemachine.CinemachinePathBase/PositionUnits Cinemachine.CinemachineTrackedDolly::m_PositionUnits
	int32_t ___m_PositionUnits_8;
	// UnityEngine.Vector3 Cinemachine.CinemachineTrackedDolly::m_PathOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PathOffset_9;
	// System.Single Cinemachine.CinemachineTrackedDolly::m_XDamping
	float ___m_XDamping_10;
	// System.Single Cinemachine.CinemachineTrackedDolly::m_YDamping
	float ___m_YDamping_11;
	// System.Single Cinemachine.CinemachineTrackedDolly::m_ZDamping
	float ___m_ZDamping_12;
	// Cinemachine.CinemachineTrackedDolly/CameraUpMode Cinemachine.CinemachineTrackedDolly::m_CameraUp
	int32_t ___m_CameraUp_13;
	// System.Single Cinemachine.CinemachineTrackedDolly::m_PitchDamping
	float ___m_PitchDamping_14;
	// System.Single Cinemachine.CinemachineTrackedDolly::m_YawDamping
	float ___m_YawDamping_15;
	// System.Single Cinemachine.CinemachineTrackedDolly::m_RollDamping
	float ___m_RollDamping_16;
	// Cinemachine.CinemachineTrackedDolly/AutoDolly Cinemachine.CinemachineTrackedDolly::m_AutoDolly
	AutoDolly_t2A1304C5BB63C2FF83D89FEDB930C94D9ECA0115 ___m_AutoDolly_17;
	// System.Single Cinemachine.CinemachineTrackedDolly::m_PreviousPathPosition
	float ___m_PreviousPathPosition_18;
	// UnityEngine.Quaternion Cinemachine.CinemachineTrackedDolly::m_PreviousOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_PreviousOrientation_19;
	// UnityEngine.Vector3 Cinemachine.CinemachineTrackedDolly::m_PreviousCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PreviousCameraPosition_20;
};

// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50  : public CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE
{
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LookAt_28;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Follow_29;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___m_Lens_30;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineVirtualCamera::m_Transitions
	TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA ___m_Transitions_31;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCamera::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_32;
	// System.Boolean Cinemachine.CinemachineVirtualCamera::m_UserIsDragging
	bool ___m_UserIsDragging_36;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___m_State_37;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077* ___m_ComponentPipeline_38;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ComponentOwner_39;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::mCachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mCachedLookAtTarget_40;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCamera::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___mCachedLookAtTargetVcam_41;
};

struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_StaticFields
{
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC* ___CreatePipelineOverride_34;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842* ___DestroyPipelineOverride_35;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T Cinemachine.CinemachineVirtualCamera::GetCinemachineComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CinemachineVirtualCamera_GetCinemachineComponent_TisRuntimeObject_m70B9E2B45173016F7928E3F968524E521FABFD34_gshared (CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<PlayerData>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A JsonUtility_FromJson_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mF4BCB220B1836F634054646B14A5F3E00EC51EE0_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;

// System.Void EnemySingletone::SetEnemy(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySingletone_SetEnemy_m72AABA0D5400620F916903899954ACC9DB43E972 (EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___newEnemy0, const RuntimeMethod* method) ;
// System.Void EnemySuperPunch/PunchEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunchEvent__ctor_mD3D01DD9FE32B6C2F3CDA1452FCAFFABB008832E (PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void Player/PlayerEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEvent__ctor_m69BDA96FE7CC43F16CB084335AC57BAA11F908B8 (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Enemy::activityRagdoll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_activityRagdoll_m4B45661A594F3DE9C97E5ACF4264A3E9D5301F9F (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, bool ___activity0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Enemy::loadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_loadLevel_mACC6D4CD14521D5AD7B04D88369C4F911D3A7590 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// Player PlayerSingleton::GetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* PlayerSingleton_GetPlayer_m8E367402FAC842B57A993A637B5299E3184BF01E (PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* __this, const RuntimeMethod* method) ;
// System.Void EnemyIdleState::.ctor(Player,Enemy,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyIdleState__ctor_m8AF49F78A0F57651C5CF1B9FA634E93E70A9F8A8 (EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy1, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator2, const RuntimeMethod* method) ;
// System.Void EnemyFightState::.ctor(Player,Enemy,UnityEngine.Animator,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFightState__ctor_m5F800D2A68940CDDB9FF026D1BB9BDE34BD40643 (EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy1, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator2, float ___damage3, const RuntimeMethod* method) ;
// System.Void EnemySuperPunchState::.ctor(Enemy,UnityEngine.Animator,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunchState__ctor_m9C8F50A088862FA52BAA4E941461D208F3AECCCB (EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, float ___damage2, const RuntimeMethod* method) ;
// System.Void EnemyRestState::.ctor(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyRestState__ctor_mBF2E916F5C6D14F9AB5C39D69E915329324C382B (EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Enemy::superPunchTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_superPunchTimer_mBE22490B8022D1A626711E4097F7C9E72F9FD7FB (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void HealthBar::InitHpUI(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_InitHpUI_m88A037D1C02C09638EEBC3B2BF8E4451C6FE7FB6 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___maxHp0, const RuntimeMethod* method) ;
// System.Single Enemy::checkDistanceToPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enemy_checkDistanceToPlayer_mDC9E8F119CF43C7ED59AD3A94BAE9171A9F7416C (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void Enemy::changeState(IState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_changeState_mC58E13F6656CD1A7151ACD8C8CA3F389BE6B94C3 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, RuntimeObject* ___newState0, const RuntimeMethod* method) ;
// System.Void Enemy/EnemyEvent::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_inline (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, const RuntimeMethod* method) ;
// System.Void Enemy::enemyDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_enemyDead_m78A07E908C2CC2D8CE08EB197BE9363FD176E43A (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void HealthBar::UpdateHpUI(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_UpdateHpUI_m766C28EF28A53C6472FA28462ECE562122244A79 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___newHp0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Enemy::restAfterSuperPunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_restAfterSuperPunch_m4AE418E9E89DE058FB66574C5FA07FEAC281411C (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void Enemy/<superPunchTimer>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsuperPunchTimerU3Ed__34__ctor_m459C7F297A60AC7B76B93DADAEB8A56F644D1A5F (U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Enemy/<restAfterSuperPunch>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrestAfterSuperPunchU3Ed__35__ctor_mA1857D3798751C2D5285371F7528C4967D77FC09 (U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody>::GetEnumerator()
inline Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>::Dispose()
inline void Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280 (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>::get_Current()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_inline (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>::MoveNext()
inline bool Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m264F2851A456AA18D4F04B21AF23814E61A39B75 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method) ;
// PlayerData LevelSaves::LoadPlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A LevelSaves_LoadPlayerData_mD10196434333422E898CAE8C07917A9450B65E49 (LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody>::.ctor()
inline void List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025 (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EnemyFighting::fight(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyFighting_fight_m90BA85B96E29754672760BEBFDBB5FFF38E095EC (EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void EnemyFighting/<fight>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfightU3Ed__5__ctor_m75CEDD2373827E678347F6D1909CEA28C518A0A5 (U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Player::GetDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GetDamage_mD1E0121E4E59C2DCECC111089F619707F1CA4C32 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___damage0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void EnemySingletone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySingletone__ctor_m177D45C9A259BB8668634D6CC8303B7F7D0D9083 (EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void EnemySuperPunch/FloatPunchEvent::Invoke(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_inline (FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, float ___damage0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Void EnemySuperPunch/PunchEvent::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_inline (PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, const RuntimeMethod* method) ;
// System.Void EnemySuperPunch/<createRedZone>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateRedZoneU3Ed__23__ctor_mAA9B31E67F9EB48D5F93F58D73C315DA288874CE (U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void EnemySuperPunch/<pauseAnimation>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseAnimationU3Ed__24__ctor_m4473D0BB67565A5BB9CB52D1CF07463DC574145C (U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void EnemyFighting::StartFight(Player,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFighting_StartFight_m7FFC57AB946A3E97C15C1184969ED126B827299B (EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, float ___damage1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mF76C04C0678092D85FC58A8D983AFA3E4364A8B3 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldUp1, const RuntimeMethod* method) ;
// System.Void EnemyFighting::StopFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFighting_StopFight_m0717A813239E5889076C08ED6065E7E4F8DE69E7 (EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* __this, const RuntimeMethod* method) ;
// System.Void EnemySuperPunch::SuperPunch(UnityEngine.Animator,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch_SuperPunch_m9DED615B484FC4C67752012F3BF6ED07D8E88F4D (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, float ___damage1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Void Enemy/EnemyEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352 (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UIController/UIEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEvent__ctor_m4C5372CA4E05AE5615EB07EBBB4847FF0A053379 (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void CamerasChanger/<cameraToGamePlay>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcameraToGamePlayU3Ed__13__ctor_m0590439ADE0BB5B96B2D249F86D09854656A87F4 (U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void CamerasChanger/<cameraToVanFacey>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcameraToVanFaceyU3Ed__14__ctor_m7A20F709F65FACE79BA4F767BAA8F30AC616FEBB (U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void CamerasChanger/CameraEvent::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_inline (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, const RuntimeMethod* method) ;
// T Cinemachine.CinemachineVirtualCamera::GetCinemachineComponent<Cinemachine.CinemachineTrackedDolly>()
inline CinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037* CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037_m1D47FB565280560AE57CAF7DAE5D6018B433262C (CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* __this, const RuntimeMethod* method)
{
	return ((  CinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037* (*) (CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50*, const RuntimeMethod*))CinemachineVirtualCamera_GetCinemachineComponent_TisRuntimeObject_m70B9E2B45173016F7928E3F968524E521FABFD34_gshared)(__this, method);
}
// System.Void Destroyer/<destroy>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdestroyU3Ed__2__ctor_m9864CFAEB9D2C018839D0E68B2F8B53872EC3D6C (U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void LevelSaves::SavePlayerData(PlayerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaves_SavePlayerData_m8C366DBF02F122485CEE508D241C038026944E72 (LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* __this, PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A ___playerData0, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<PlayerData>(System.String)
inline PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A JsonUtility_FromJson_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mF4BCB220B1836F634054646B14A5F3E00EC51EE0 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mF4BCB220B1836F634054646B14A5F3E00EC51EE0_gshared)(___json0, method);
}
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53 (RuntimeObject* ___obj0, bool ___prettyPrint1, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1 (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.Void Market::updateMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_updateMoney_mB46934218FACC14D2297B154D6BEEC611846694B (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void PlayerInput::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Enable_mE3EC3D4631D753DB2B6EEA9FF407DC0CA920A2E5 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void PlayerInput::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Disable_m9DA10D3B65ECD087D0C78E77A9719D31F1EC23ED (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void Player::ActivityRagdoll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ActivityRagdoll_mAF5996A546EEA3C678022D5EB4456FC646934F17 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___activity0, const RuntimeMethod* method) ;
// System.Void PlayerSingleton::SetPlayer(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSingleton_SetPlayer_mA5961E1F090DEE4D631FF95C99632F1AD2615E05 (PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___newPlayer0, const RuntimeMethod* method) ;
// System.Void PlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_m24FD924FB39A9A023CDEA8F6916EEC47B471B3A8 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void EnemySuperPunch/FloatPunchEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPunchEvent__ctor_m28241D1F7EC89444F083B6B8883018BD4468B506 (FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Enemy EnemySingletone::GetEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* EnemySingletone_GetEnemy_mF9A22C7B3C96D9072F438BE3B4D4E6AAA2DC4A60 (EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D* __this, const RuntimeMethod* method) ;
// System.Void PlayerMovement::InitPlayerMovement(UnityEngine.Animator,PlayerInput,System.Single,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_InitPlayerMovement_mA0E9BC30F2BB4A26CF4FC9919F35C4892DFE9E19 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___playerAnimator0, PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___playerInput1, float ___speed2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTransform3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___enemyTransform4, const RuntimeMethod* method) ;
// System.Void PlayerFighting::InitPlayerFighting(UnityEngine.Animator,System.Single,System.Single,Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFighting_InitPlayerFighting_m5C8AF2B97BCFF8B06CF69AC5E7155B1B17CC46ED (PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___playerAnimator0, float ___damage1, float ___timeBetweenPunches2, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy3, const RuntimeMethod* method) ;
// System.Void PlayerIdleState::.ctor(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdleState__ctor_mEA6CF2A6AAA94F35916468395659C2CBDC3A943E (PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___newPlayer0, const RuntimeMethod* method) ;
// System.Void PlayerFightState::.ctor(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFightState__ctor_m8CDCA7027AFBE0FF07F3CA82C2CEBF2021345541 (PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___newPlayer0, const RuntimeMethod* method) ;
// System.Void PlayerNockdownState::.ctor(Player,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNockdownState__ctor_m4BA0560905FF57A732286E4AF6A5541D4B390DA8 (PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___newPlayer0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, const RuntimeMethod* method) ;
// System.Void PlayerWinState::.ctor(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWinState__ctor_m097CBFE37F00D26318B3A5B69467692E2807E4F7 (PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) ;
// System.Void PlayerWaitState::.ctor(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWaitState__ctor_m8450CEB7D1CA1D66ABF5F802E7FBD109B12B1AD3 (PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) ;
// System.Single Player::checkDistanceToEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_checkDistanceToEnemy_m805B552E3E65E2FAE8EEF73116AC972156ADE80B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::changeState(IState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_changeState_mF59CD14CF0B0B3C9026168439484BF17408C668E (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, RuntimeObject* ___newState0, const RuntimeMethod* method) ;
// System.Void Player::Dead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Dead_mA0F00C0EB6A997C8821CCA15E80442BB2CBBA69E (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player/PlayerEvent::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_inline (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, const RuntimeMethod* method) ;
// System.Void Player::loadPlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_loadPlayerData_m46CF2AD9C261C734406FA1FA617F8BB739ED1A1D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetLayerIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method) ;
// System.Void PlayerAnimation::.ctor(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation__ctor_mE33A11C06749B8064791C4EC1F3F361CA8D50EE4 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) ;
// System.Void PlayerAnimation::AnimateFighting(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_AnimateFighting_mF34F220F67FD6C87BE7981C9D9AF93E5E1A63839 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, float ___layerWeight0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerFighting::punching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerFighting_punching_m12B413ACAA9D7AA5D77C9DD0E5E44EFBB2A26DA2 (PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Void PlayerFighting/<punching>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpunchingU3Ed__8__ctor_m70590970B99D3A7D7478E9AE9E0A7A77876EE87B (U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Enemy::GetDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_GetDamage_mFA8C3DE793019E8A1C046503DEF232D213BDCC66 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, float ___damage0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C (String_t* ___json0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset PlayerInput::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> PlayerInput::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_GetEnumerator_m718C2FBF1A4AE370122B0CBA506776EBF2A0C4A6 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___mask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) ;
// System.Void PlayerInput/PlayerActions::.ctor(PlayerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_mFB67A0C7AC5A9A8567059747B2C20ABD72C3C2E5 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___wrapper0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction PlayerInput/PlayerActions::get_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap PlayerInput/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void PlayerInput/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_m6F3D5774ADBFC24A605C290EFB34297E1B6B7E23 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void PlayerInput/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_m4495A28F317429F59CC26C461292910CE6DC9F5F (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean PlayerInput/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_mC7D12518775B7A6155191458B2C7B9CD14DE6A40 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerInput/PlayerActions::SetCallbacks(PlayerInput/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_m28DF740FE33BD08EDFA5B38ADABBA046F9DA36A7 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// PlayerInput/PlayerActions PlayerInput::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 PlayerInput_get_Player_m0D1809F4AF04ADCB4EF11E26B5A46F38B7DCC794 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void PlayerAnimation::AnimateMovement(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_AnimateMovement_m541E6BEFD59FE7BC281B0787D9B0324379FAA992 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) ;
// System.Void PlayerSingleton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSingleton__ctor_m143AFC3246DE87934BD84F3559A9C755FF08D2C4 (PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* __this, const RuntimeMethod* method) ;
// System.Void PlayerFighting::StartFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFighting_StartFight_mC507557942748A50274754B850C19C232C772083 (PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* __this, const RuntimeMethod* method) ;
// System.Void PlayerMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Move_m49FF83A1018F85FA83A97516D57FE7D8331EB1C9 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) ;
// System.Void PlayerFighting::StopFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFighting_StopFight_mAE840CF6E48B2BBFAA9ECD6336791C3AE82308DD (PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* __this, const RuntimeMethod* method) ;
// System.Void CamerasChanger/CameraEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraEvent__ctor_mE426CEC567DA70088E24149949ABE0C9D0B719F7 (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UIController/UIEvent::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_inline (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mB58E74200229275689E6D9ADCDB6443D4E426624 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_endSuperPunch_m6BD43E393FD65BE8BE9AD686134B0F9FD0DEE4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_freaze_mA2532211CB5635D71FD7810797AD3CAEA7C581DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnemySingletone.SingltoneEnemy.SetEnemy(this);
		il2cpp_codegen_runtime_class_init_inline(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D* L_0 = ((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingltoneEnemy_4;
		EnemySingletone_SetEnemy_m72AABA0D5400620F916903899954ACC9DB43E972(L_0, __this, NULL);
		// EnemySuperPunch.SuperPunchEnd += endSuperPunch;
		PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* L_1 = ((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchEnd_5;
		PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* L_2 = (PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E*)il2cpp_codegen_object_new(PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E_il2cpp_TypeInfo_var);
		PunchEvent__ctor_mD3D01DD9FE32B6C2F3CDA1452FCAFFABB008832E(L_2, __this, (intptr_t)((void*)Enemy_endSuperPunch_m6BD43E393FD65BE8BE9AD686134B0F9FD0DEE4D3_RuntimeMethod_var), NULL);
		Delegate_t* L_3;
		L_3 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_1, L_2, NULL);
		((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchEnd_5 = ((PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E*)CastclassSealed((RuntimeObject*)L_3, PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchEnd_5), (void*)((PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E*)CastclassSealed((RuntimeObject*)L_3, PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E_il2cpp_TypeInfo_var)));
		// Player.PlayerDead += freaze;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_4 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_5 = (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)il2cpp_codegen_object_new(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		PlayerEvent__ctor_m69BDA96FE7CC43F16CB084335AC57BAA11F908B8(L_5, __this, (intptr_t)((void*)Enemy_freaze_mA2532211CB5635D71FD7810797AD3CAEA7C581DA_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4 = ((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_6, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4), (void*)((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_6, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var)));
		// activityRagdoll(false);
		Enemy_activityRagdoll_m4B45661A594F3DE9C97E5ACF4264A3E9D5301F9F(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Enemy::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnDestroy_mC2515446E98C292AFB2060269E2653B405D461E8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_endSuperPunch_m6BD43E393FD65BE8BE9AD686134B0F9FD0DEE4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_freaze_mA2532211CB5635D71FD7810797AD3CAEA7C581DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnemySuperPunch.SuperPunchEnd -= endSuperPunch;
		PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* L_0 = ((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchEnd_5;
		PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* L_1 = (PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E*)il2cpp_codegen_object_new(PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E_il2cpp_TypeInfo_var);
		PunchEvent__ctor_mD3D01DD9FE32B6C2F3CDA1452FCAFFABB008832E(L_1, __this, (intptr_t)((void*)Enemy_endSuperPunch_m6BD43E393FD65BE8BE9AD686134B0F9FD0DEE4D3_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchEnd_5 = ((PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E*)CastclassSealed((RuntimeObject*)L_2, PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchEnd_5), (void*)((PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E*)CastclassSealed((RuntimeObject*)L_2, PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E_il2cpp_TypeInfo_var)));
		// Player.PlayerDead -= freaze;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_3 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_4 = (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)il2cpp_codegen_object_new(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		PlayerEvent__ctor_m69BDA96FE7CC43F16CB084335AC57BAA11F908B8(L_4, __this, (intptr_t)((void*)Enemy_freaze_mA2532211CB5635D71FD7810797AD3CAEA7C581DA_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4 = ((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_5, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4), (void*)((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_5, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m8BBD9A5AE10A27ABDFCD9168B93CD9C69D229034 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loadLevel();
		Enemy_loadLevel_mACC6D4CD14521D5AD7B04D88369C4F911D3A7590(__this, NULL);
		// _player = PlayerSingleton.SingltonePlayer.GetPlayer();
		il2cpp_codegen_runtime_class_init_inline(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* L_0 = ((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SingltonePlayer_4;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1;
		L_1 = PlayerSingleton_GetPlayer_m8E367402FAC842B57A993A637B5299E3184BF01E(L_0, NULL);
		__this->____player_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_6), (void*)L_1);
		// _idleState = new EnemyIdleState(_player, this, _enemyAnimator);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2 = __this->____player_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____enemyAnimator_16;
		EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* L_4 = (EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09*)il2cpp_codegen_object_new(EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09_il2cpp_TypeInfo_var);
		EnemyIdleState__ctor_m8AF49F78A0F57651C5CF1B9FA634E93E70A9F8A8(L_4, L_2, __this, L_3, NULL);
		__this->____idleState_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____idleState_20), (void*)L_4);
		// _fightState = new EnemyFightState(_player, this, _enemyAnimator, _damage);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->____player_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->____enemyAnimator_16;
		float L_7 = __this->____damage_10;
		EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6* L_8 = (EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6*)il2cpp_codegen_object_new(EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6_il2cpp_TypeInfo_var);
		EnemyFightState__ctor_m5F800D2A68940CDDB9FF026D1BB9BDE34BD40643(L_8, L_5, __this, L_6, L_7, NULL);
		__this->____fightState_21 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fightState_21), (void*)L_8);
		// _superPunchState = new EnemySuperPunchState(this, _enemyAnimator, _damage);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->____enemyAnimator_16;
		float L_10 = __this->____damage_10;
		EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F* L_11 = (EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F*)il2cpp_codegen_object_new(EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F_il2cpp_TypeInfo_var);
		EnemySuperPunchState__ctor_m9C8F50A088862FA52BAA4E941461D208F3AECCCB(L_11, __this, L_9, L_10, NULL);
		__this->____superPunchState_22 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____superPunchState_22), (void*)L_11);
		// _restState = new EnemyRestState(_enemyAnimator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->____enemyAnimator_16;
		EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF* L_13 = (EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF*)il2cpp_codegen_object_new(EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF_il2cpp_TypeInfo_var);
		EnemyRestState__ctor_mBF2E916F5C6D14F9AB5C39D69E915329324C382B(L_13, L_12, NULL);
		__this->____restState_23 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____restState_23), (void*)L_13);
		// _currentState = _idleState;
		EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* L_14 = __this->____idleState_20;
		__this->____currentState_19 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentState_19), (void*)L_14);
		// StartCoroutine(superPunchTimer());
		RuntimeObject* L_15;
		L_15 = Enemy_superPunchTimer_mBE22490B8022D1A626711E4097F7C9E72F9FD7FB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_15, NULL);
		// _hpBar.InitHpUI(_health);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_17 = __this->____hpBar_28;
		float L_18 = __this->____health_9;
		HealthBar_InitHpUI_m88A037D1C02C09638EEBC3B2BF8E4451C6FE7FB6(L_17, L_18, NULL);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4149CFC3AC081AF0D654D9BDB6BC9B5540CE03D8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if(_isDead == false && _isFreaze == false)
		bool L_0 = __this->____isDead_26;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->____isFreaze_27;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// _currentState.Loop();
		RuntimeObject* L_3 = __this->____currentState_19;
		InterfaceActionInvoker0::Invoke(1 /* System.Void IState::Loop() */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_3);
	}

IL_0027:
	{
		// if(_isRest == false && _isSuperPunch == false && _isDead == false )
		bool L_4 = __this->____isRest_24;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		bool L_5 = __this->____isSuperPunch_25;
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		bool L_6 = __this->____isDead_26;
		G_B9_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B9_0 = 0;
	}

IL_0043:
	{
		V_1 = (bool)G_B9_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_00b3;
		}
	}
	{
		// if(checkDistanceToPlayer() > _distance && _currentState != _idleState)
		float L_8;
		L_8 = Enemy_checkDistanceToPlayer_mDC9E8F119CF43C7ED59AD3A94BAE9171A9F7416C(__this, NULL);
		float L_9 = __this->____distance_11;
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_10 = __this->____currentState_19;
		EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* L_11 = __this->____idleState_20;
		G_B13_0 = ((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09*)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B13_0 = 0;
	}

IL_006a:
	{
		V_2 = (bool)G_B13_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// changeState(_idleState);
		EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* L_13 = __this->____idleState_20;
		Enemy_changeState_mC58E13F6656CD1A7151ACD8C8CA3F389BE6B94C3(__this, L_13, NULL);
	}

IL_007d:
	{
		// if(checkDistanceToPlayer() <= _distance && _currentState != _fightState)
		float L_14;
		L_14 = Enemy_checkDistanceToPlayer_mDC9E8F119CF43C7ED59AD3A94BAE9171A9F7416C(__this, NULL);
		float L_15 = __this->____distance_11;
		if ((!(((float)L_14) <= ((float)L_15))))
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject* L_16 = __this->____currentState_19;
		EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6* L_17 = __this->____fightState_21;
		G_B18_0 = ((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_16) == ((RuntimeObject*)(EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6*)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009f;
	}

IL_009e:
	{
		G_B18_0 = 0;
	}

IL_009f:
	{
		V_3 = (bool)G_B18_0;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00b2;
		}
	}
	{
		// changeState(_fightState);
		EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6* L_19 = __this->____fightState_21;
		Enemy_changeState_mC58E13F6656CD1A7151ACD8C8CA3F389BE6B94C3(__this, L_19, NULL);
	}

IL_00b2:
	{
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void Enemy::GetDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_GetDamage_mFA8C3DE793019E8A1C046503DEF232D213BDCC66 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, float ___damage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* G_B11_0 = NULL;
	EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* G_B10_0 = NULL;
	{
		// if(_isFreaze == false && _isDead == false )
		bool L_0 = __this->____isFreaze_27;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->____isDead_26;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// _health -= damage;
		float L_3 = __this->____health_9;
		float L_4 = ___damage0;
		__this->____health_9 = ((float)il2cpp_codegen_subtract(L_3, L_4));
	}

IL_0027:
	{
		// if(_health <= 0 && _isDead == false )
		float L_5 = __this->____health_9;
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		bool L_6 = __this->____isDead_26;
		G_B8_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B8_0 = 0;
	}

IL_0040:
	{
		V_1 = (bool)G_B8_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		// EnemyDead?.Invoke();
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_8 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_9 = L_8;
		G_B10_0 = L_9;
		if (L_9)
		{
			G_B11_0 = L_9;
			goto IL_0050;
		}
	}
	{
		goto IL_0056;
	}

IL_0050:
	{
		EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_inline(G_B11_0, NULL);
	}

IL_0056:
	{
		// _health = 0;
		__this->____health_9 = (0.0f);
		// enemyDead();
		Enemy_enemyDead_m78A07E908C2CC2D8CE08EB197BE9363FD176E43A(__this, NULL);
	}

IL_0069:
	{
		// _hpBar.UpdateHpUI(_health);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_10 = __this->____hpBar_28;
		float L_11 = __this->____health_9;
		HealthBar_UpdateHpUI_m766C28EF28A53C6472FA28462ECE562122244A79(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void Enemy::changeState(IState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_changeState_mC58E13F6656CD1A7151ACD8C8CA3F389BE6B94C3 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, RuntimeObject* ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentState.Exit();
		RuntimeObject* L_0 = __this->____currentState_19;
		InterfaceActionInvoker0::Invoke(2 /* System.Void IState::Exit() */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_0);
		// newState.Enter();
		RuntimeObject* L_1 = ___newState0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void IState::Enter() */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_1);
		// _currentState = newState;
		RuntimeObject* L_2 = ___newState0;
		__this->____currentState_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentState_19), (void*)L_2);
		// }
		return;
	}
}
// System.Single Enemy::checkDistanceToPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enemy_checkDistanceToPlayer_mDC9E8F119CF43C7ED59AD3A94BAE9171A9F7416C (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float distance =  Vector3.Distance(_player.transform.position, transform.position);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->____player_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// return distance;
		float L_6 = V_0;
		V_1 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		float L_7 = V_1;
		return L_7;
	}
}
// System.Void Enemy::endSuperPunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_endSuperPunch_m6BD43E393FD65BE8BE9AD686134B0F9FD0DEE4D3 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(restAfterSuperPunch());
		RuntimeObject* L_0;
		L_0 = Enemy_restAfterSuperPunch_m4AE418E9E89DE058FB66574C5FA07FEAC281411C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::superPunchTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_superPunchTimer_mBE22490B8022D1A626711E4097F7C9E72F9FD7FB (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5* L_0 = (U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5*)il2cpp_codegen_object_new(U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5_il2cpp_TypeInfo_var);
		U3CsuperPunchTimerU3Ed__34__ctor_m459C7F297A60AC7B76B93DADAEB8A56F644D1A5F(L_0, 0, NULL);
		U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Enemy::restAfterSuperPunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_restAfterSuperPunch_m4AE418E9E89DE058FB66574C5FA07FEAC281411C (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A* L_0 = (U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A*)il2cpp_codegen_object_new(U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A_il2cpp_TypeInfo_var);
		U3CrestAfterSuperPunchU3Ed__35__ctor_mA1857D3798751C2D5285371F7528C4967D77FC09(L_0, 0, NULL);
		U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Enemy::enemyDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_enemyDead_m78A07E908C2CC2D8CE08EB197BE9363FD176E43A (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// _isDead = true;
		__this->____isDead_26 = (bool)1;
		// _enemyAnimator.enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____enemyAnimator_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// activityRagdoll(true);
		Enemy_activityRagdoll_m4B45661A594F3DE9C97E5ACF4264A3E9D5301F9F(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Enemy::activityRagdoll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_activityRagdoll_m4B45661A594F3DE9C97E5ACF4264A3E9D5301F9F (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, bool ___activity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_1 = NULL;
	bool V_2 = false;
	Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_4 = NULL;
	{
		// foreach(Rigidbody rb in _ragdollRB)
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_0 = __this->____ragdollRB_7;
		Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 L_1;
		L_1 = List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE(L_0, List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280((&V_0), Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_0010_1:
			{
				// foreach(Rigidbody rb in _ragdollRB)
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
				L_2 = Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_inline((&V_0), Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_RuntimeMethod_var);
				V_1 = L_2;
				// rb.isKinematic = !activity;
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = V_1;
				bool L_4 = ___activity0;
				Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_3, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
			}

IL_0025_1:
			{
				// foreach(Rigidbody rb in _ragdollRB)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A((&V_0), Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// _enemyCollider.enabled = !activity;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6 = __this->____enemyCollider_8;
		bool L_7 = ___activity0;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_6, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), NULL);
		// if(activity == true)
		bool L_8 = ___activity0;
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_00a3;
		}
	}
	{
		// foreach(Rigidbody rb in _ragdollRB)
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_10 = __this->____ragdollRB_7;
		Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 L_11;
		L_11 = List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE(L_10, List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE_RuntimeMethod_var);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280((&V_3), Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0088_1;
			}

IL_0064_1:
			{
				// foreach(Rigidbody rb in _ragdollRB)
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12;
				L_12 = Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_inline((&V_3), Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_RuntimeMethod_var);
				V_4 = L_12;
				// rb.AddForce(0, _thrust, 0, ForceMode.Impulse);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = V_4;
				float L_14 = __this->____thrust_12;
				Rigidbody_AddForce_m264F2851A456AA18D4F04B21AF23814E61A39B75(L_13, (0.0f), L_14, (0.0f), 1, NULL);
			}

IL_0088_1:
			{
				// foreach(Rigidbody rb in _ragdollRB)
				bool L_15;
				L_15 = Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A((&V_3), Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void Enemy::freaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_freaze_mA2532211CB5635D71FD7810797AD3CAEA7C581DA (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// changeState(_idleState);
		EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* L_0 = __this->____idleState_20;
		Enemy_changeState_mC58E13F6656CD1A7151ACD8C8CA3F389BE6B94C3(__this, L_0, NULL);
		// _isFreaze = true;
		__this->____isFreaze_27 = (bool)1;
		// }
		return;
	}
}
// System.Void Enemy::loadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_loadLevel_mACC6D4CD14521D5AD7B04D88369C4F911D3A7590 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PlayerData data = _levelSaves.LoadPlayerData();
		LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* L_0 = __this->____levelSaves_5;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_1;
		L_1 = LevelSaves_LoadPlayerData_mD10196434333422E898CAE8C07917A9450B65E49(L_0, NULL);
		V_0 = L_1;
		// _health = data.Level * 24;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_2 = V_0;
		int32_t L_3 = L_2.___Level_0;
		__this->____health_9 = ((float)((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)24))));
		// _damage = data.Level * 2.5f;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_4 = V_0;
		int32_t L_5 = L_4.___Level_0;
		__this->____damage_10 = ((float)il2cpp_codegen_multiply(((float)L_5), (2.5f)));
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField]private List<Rigidbody> _ragdollRB = new List<Rigidbody>();
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_0 = (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*)il2cpp_codegen_object_new(List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025(L_0, List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		__this->____ragdollRB_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ragdollRB_7), (void*)L_0);
		// private bool _isRest = false;
		__this->____isRest_24 = (bool)0;
		// private bool _isSuperPunch = false;
		__this->____isSuperPunch_25 = (bool)0;
		// private bool _isDead = false;
		__this->____isDead_26 = (bool)0;
		// private bool _isFreaze = false;
		__this->____isFreaze_27 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_Multicast(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* currentDelegate = reinterpret_cast<EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_OpenInst(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_OpenStatic(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_OpenStaticInvoker(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_ClosedStaticInvoker(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Enemy/EnemyEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352 (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_Multicast;
}
// System.Void Enemy/EnemyEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920 (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Enemy/EnemyEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyEvent_BeginInvoke_m9C889E75792A60AC982C2E1476C6D1F3E8D1668B (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Enemy/EnemyEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyEvent_EndInvoke_mA366848778F24CA81716B0E30735403EB9C62B7F (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Enemy/<superPunchTimer>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsuperPunchTimerU3Ed__34__ctor_m459C7F297A60AC7B76B93DADAEB8A56F644D1A5F (U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Enemy/<superPunchTimer>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsuperPunchTimerU3Ed__34_System_IDisposable_Dispose_m8E6E53DD41836669134D59EB7E48C3982A813F12 (U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Enemy/<superPunchTimer>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CsuperPunchTimerU3Ed__34_MoveNext_m850C52A39ADA143F0EB93A4A83DBC9842D5AA31A (U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_004a;
	}

IL_001f:
	{
		goto IL_0084;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(_timeBetweenSuperPunches);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_2 = __this->___U3CU3E4__this_2;
		float L_3 = L_2->____timeBetweenSuperPunches_14;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _isSuperPunch = true;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_5 = __this->___U3CU3E4__this_2;
		L_5->____isSuperPunch_25 = (bool)1;
		// changeState(_superPunchState);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_6 = __this->___U3CU3E4__this_2;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_7 = __this->___U3CU3E4__this_2;
		EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F* L_8 = L_7->____superPunchState_22;
		Enemy_changeState_mC58E13F6656CD1A7151ACD8C8CA3F389BE6B94C3(L_6, L_8, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0084:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<superPunchTimer>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CsuperPunchTimerU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m22895886D0E8EB5DFF3269CB8666AC1A30A9A808 (U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Enemy/<superPunchTimer>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsuperPunchTimerU3Ed__34_System_Collections_IEnumerator_Reset_m17E32FA7A2B93EFA5530419AE93BDBE92F689A7D (U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CsuperPunchTimerU3Ed__34_System_Collections_IEnumerator_Reset_m17E32FA7A2B93EFA5530419AE93BDBE92F689A7D_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<superPunchTimer>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CsuperPunchTimerU3Ed__34_System_Collections_IEnumerator_get_Current_mF42B238A50B78C7CF6C3652CEA65ED64BD07282B (U3CsuperPunchTimerU3Ed__34_t11F5A2B3452F5B368B1C359ADF6F829BB655FFF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Enemy/<restAfterSuperPunch>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrestAfterSuperPunchU3Ed__35__ctor_mA1857D3798751C2D5285371F7528C4967D77FC09 (U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Enemy/<restAfterSuperPunch>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrestAfterSuperPunchU3Ed__35_System_IDisposable_Dispose_mD272460A47BECCA96AD75485ED4A770DCA7FC458 (U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Enemy/<restAfterSuperPunch>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CrestAfterSuperPunchU3Ed__35_MoveNext_m28AB8EB36FF97AC3F4A500D64F21A45E1D5FF1AF (U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
		goto IL_007c;
	}

IL_001f:
	{
		goto IL_00b6;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _isSuperPunch = false;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_2 = __this->___U3CU3E4__this_2;
		L_2->____isSuperPunch_25 = (bool)0;
		// _isRest = true;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_3 = __this->___U3CU3E4__this_2;
		L_3->____isRest_24 = (bool)1;
		// changeState(_restState);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_4 = __this->___U3CU3E4__this_2;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_5 = __this->___U3CU3E4__this_2;
		EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF* L_6 = L_5->____restState_23;
		Enemy_changeState_mC58E13F6656CD1A7151ACD8C8CA3F389BE6B94C3(L_4, L_6, NULL);
		// yield return new WaitForSeconds(_restTime);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_7 = __this->___U3CU3E4__this_2;
		float L_8 = L_7->____restTime_15;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _isRest = false;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_10 = __this->___U3CU3E4__this_2;
		L_10->____isRest_24 = (bool)0;
		// StartCoroutine(superPunchTimer());
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_11 = __this->___U3CU3E4__this_2;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_12 = __this->___U3CU3E4__this_2;
		RuntimeObject* L_13;
		L_13 = Enemy_superPunchTimer_mBE22490B8022D1A626711E4097F7C9E72F9FD7FB(L_12, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_13, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<restAfterSuperPunch>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CrestAfterSuperPunchU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m94648A094E671CA931D4CFD78E61818E7E126898 (U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Enemy/<restAfterSuperPunch>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrestAfterSuperPunchU3Ed__35_System_Collections_IEnumerator_Reset_mFA0D41EE626FF77BB4395DFCB832167D61689D22 (U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CrestAfterSuperPunchU3Ed__35_System_Collections_IEnumerator_Reset_mFA0D41EE626FF77BB4395DFCB832167D61689D22_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<restAfterSuperPunch>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CrestAfterSuperPunchU3Ed__35_System_Collections_IEnumerator_get_Current_m4561C5C1C70A66B492A16F59C2D568BC09136E51 (U3CrestAfterSuperPunchU3Ed__35_t6127EE34F3685507637DF4BF83849B69CF64F05A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EnemyFighting::StartFight(Player,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFighting_StartFight_m7FFC57AB946A3E97C15C1184969ED126B827299B (EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, float ___damage1, const RuntimeMethod* method) 
{
	{
		// _isCanFight = true;
		__this->____isCanFight_6 = (bool)1;
		// _damage = damage;
		float L_0 = ___damage1;
		__this->____damage_4 = L_0;
		// StartCoroutine(fight(player));
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = ___player0;
		RuntimeObject* L_2;
		L_2 = EnemyFighting_fight_m90BA85B96E29754672760BEBFDBB5FFF38E095EC(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void EnemyFighting::StopFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFighting_StopFight_m0717A813239E5889076C08ED6065E7E4F8DE69E7 (EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CCF1529F456B8C252663510967A3496E929D9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5729B5D48E34010515CD5F7BA59C9E03EBACC980);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _isCanFight = false;
		__this->____isCanFight_6 = (bool)0;
		// StopCoroutine("fight");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral5729B5D48E34010515CD5F7BA59C9E03EBACC980, NULL);
		// Debug.Log("fight is stoped");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2CCF1529F456B8C252663510967A3496E929D9BE, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemyFighting::fight(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyFighting_fight_m90BA85B96E29754672760BEBFDBB5FFF38E095EC (EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE* L_0 = (U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE*)il2cpp_codegen_object_new(U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE_il2cpp_TypeInfo_var);
		U3CfightU3Ed__5__ctor_m75CEDD2373827E678347F6D1909CEA28C518A0A5(L_0, 0, NULL);
		U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE* L_1 = L_0;
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE* L_2 = L_1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = ___player0;
		L_2->___player_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___player_2), (void*)L_3);
		return L_2;
	}
}
// System.Void EnemyFighting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFighting__ctor_m5D532B3332BA40B4201190ED07E6853FA2C6DD16 (EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* __this, const RuntimeMethod* method) 
{
	{
		// private bool _isCanFight = false;
		__this->____isCanFight_6 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemyFighting/<fight>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfightU3Ed__5__ctor_m75CEDD2373827E678347F6D1909CEA28C518A0A5 (U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemyFighting/<fight>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfightU3Ed__5_System_IDisposable_Dispose_m1C967786860D51EE7113B2927119BE90FCC35680 (U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnemyFighting/<fight>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CfightU3Ed__5_MoveNext_mA7AC945950F6A1DCDACA078EC46B5B95E1E0291C (U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
		goto IL_0059;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0061;
	}

IL_0022:
	{
		// player.GetDamage(_damage);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = __this->___player_2;
		EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* L_4 = __this->___U3CU3E4__this_3;
		float L_5 = L_4->____damage_4;
		Player_GetDamage_mD1E0121E4E59C2DCECC111089F619707F1CA4C32(L_3, L_5, NULL);
		// yield return new WaitForSeconds(_timeBetweenPunches);
		EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* L_6 = __this->___U3CU3E4__this_3;
		float L_7 = L_6->____timeBetweenPunches_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0059:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0061:
	{
		// while(_isCanFight == true)
		EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* L_9 = __this->___U3CU3E4__this_3;
		bool L_10 = L_9->____isCanFight_6;
		V_1 = L_10;
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0022;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EnemyFighting/<fight>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CfightU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAB19A028551FB401E8012065D93BF3BFA421138F (U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemyFighting/<fight>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfightU3Ed__5_System_Collections_IEnumerator_Reset_m1CD276D4018CD445721235B005FFF64BF51EC7E8 (U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CfightU3Ed__5_System_Collections_IEnumerator_Reset_m1CD276D4018CD445721235B005FFF64BF51EC7E8_RuntimeMethod_var)));
	}
}
// System.Object EnemyFighting/<fight>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CfightU3Ed__5_System_Collections_IEnumerator_get_Current_mB38074EA683FF2572B0F73B320995B20CDEDA3FB (U3CfightU3Ed__5_tA477BF790AEED9AD194719A8D6A5B465451C92AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EnemySingletone::SetEnemy(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySingletone_SetEnemy_m72AABA0D5400620F916903899954ACC9DB43E972 (EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___newEnemy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(SingleEnemy == null)
		il2cpp_codegen_runtime_class_init_inline(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = ((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingleEnemy_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// SingleEnemy = newEnemy;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_3 = ___newEnemy0;
		il2cpp_codegen_runtime_class_init_inline(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingleEnemy_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingleEnemy_5), (void*)L_3);
	}

IL_0016:
	{
		// Debug.Log(SingleEnemy == null);
		il2cpp_codegen_runtime_class_init_inline(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_4 = ((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingleEnemy_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// }
		return;
	}
}
// Enemy EnemySingletone::GetEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* EnemySingletone_GetEnemy_mF9A22C7B3C96D9072F438BE3B4D4E6AAA2DC4A60 (EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_0 = NULL;
	{
		// Debug.Log(SingleEnemy == null);
		il2cpp_codegen_runtime_class_init_inline(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = ((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingleEnemy_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// return SingleEnemy;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_4 = ((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingleEnemy_5;
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_5 = V_0;
		return L_5;
	}
}
// System.Void EnemySingletone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySingletone__ctor_m177D45C9A259BB8668634D6CC8303B7F7D0D9083 (EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void EnemySingletone::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySingletone__cctor_m24C5B8D8C329C18DC194473AC92B7D8CDD8BB7D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static EnemySingletone SingltoneEnemy = new EnemySingletone();
		EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D* L_0 = (EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D*)il2cpp_codegen_object_new(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		EnemySingletone__ctor_m177D45C9A259BB8668634D6CC8303B7F7D0D9083(L_0, NULL);
		((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingltoneEnemy_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingltoneEnemy_4), (void*)L_0);
		// public static Enemy SingleEnemy = null;
		((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingleEnemy_5 = (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingleEnemy_5), (void*)(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)NULL);
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
// System.Void EnemySuperPunch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch_Start_m2B3C76B4C81A58E9D28A99148A35A1AD165178D2 (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _player = PlayerSingleton.SingltonePlayer.GetPlayer();
		il2cpp_codegen_runtime_class_init_inline(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* L_0 = ((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SingltonePlayer_4;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1;
		L_1 = PlayerSingleton_GetPlayer_m8E367402FAC842B57A993A637B5299E3184BF01E(L_0, NULL);
		__this->____player_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void EnemySuperPunch::SuperPunch(UnityEngine.Animator,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch_SuperPunch_m9DED615B484FC4C67752012F3BF6ED07D8E88F4D (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, float ___damage1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _damage =  _damageFactor * damage;
		float L_0 = __this->____damageFactor_16;
		float L_1 = ___damage1;
		__this->____damage_15 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// int randomPunch = Random.Range(0, _enemySuperPunchesAnimations.Count);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->____enemySuperPunchesAnimations_7;
		int32_t L_3;
		L_3 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_2, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_3, NULL);
		V_0 = L_4;
		// animator.Play(_enemySuperPunchesAnimations[randomPunch], 0, 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = ___animator0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->____enemySuperPunchesAnimations_7;
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_6, L_7, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_5, L_8, 0, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void EnemySuperPunch::TestEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch_TestEvent_m13E38F77CBA46A540170400934894B92AC85DA24 (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47F8DB26842095682C5EF9985D118DB2CCE2B74F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("all work");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral47F8DB26842095682C5EF9985D118DB2CCE2B74F, NULL);
		// }
		return;
	}
}
// System.Void EnemySuperPunch::PauseAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch_PauseAnimation_m12EC948199BEAB88AF91842D4BBA3E591CD177CD (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1BA2C702703FD128B3431AF56C4A23D748EC804);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("pauseAnimation");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralD1BA2C702703FD128B3431AF56C4A23D748EC804, NULL);
		// }
		return;
	}
}
// System.Void EnemySuperPunch::CreateRedZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch_CreateRedZone_m5EE5385E0BE5EB9712DE130F433AAC50366A3AA4 (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC218360721C7149E4C95F03CA58052B651561CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("createRedZone");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralC218360721C7149E4C95F03CA58052B651561CC8, NULL);
		// }
		return;
	}
}
// System.Void EnemySuperPunch::CastSuperPunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch_CastSuperPunch_m5A3EA05F3FA08B14C4D68C3195F4AFC124F48A69 (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* G_B3_0 = NULL;
	FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* G_B2_0 = NULL;
	{
		// float distanceToPlayer = Vector3.Distance(_player.transform.position, transform.position);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->____player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// if(distanceToPlayer < _range)
		float L_6 = V_0;
		float L_7 = __this->____range_9;
		V_1 = (bool)((((float)L_6) < ((float)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// SuperPunchHit?.Invoke(_damage);
		FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* L_9 = ((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchHit_6;
		FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* L_10 = L_9;
		G_B2_0 = L_10;
		if (L_10)
		{
			G_B3_0 = L_10;
			goto IL_003b;
		}
	}
	{
		goto IL_0047;
	}

IL_003b:
	{
		float L_11 = __this->____damage_15;
		FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_inline(G_B3_0, L_11, NULL);
	}

IL_0047:
	{
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void EnemySuperPunch::CreateFog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch_CreateFog_m36508E517BA512B34F15800EFE9D3EB7840B42D1 (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(_puffPrefab, _puffSpawnPoint);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____puffPrefab_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____puffSpawnPoint_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EnemySuperPunch::EndSuperPunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch_EndSuperPunch_m90B42446D10A2ABA4D3E6883FE552CD6E43B9060 (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		s_Il2CppMethodInitialized = true;
	}
	PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* G_B2_0 = NULL;
	PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* G_B1_0 = NULL;
	{
		// SuperPunchEnd?.Invoke();
		PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* L_0 = ((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchEnd_5;
		PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		// Debug.Log("end");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemySuperPunch::createRedZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySuperPunch_createRedZone_m5DCCE2E6173002C9D90CA0A42FEBD1FA1300CA72 (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF* L_0 = (U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF*)il2cpp_codegen_object_new(U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF_il2cpp_TypeInfo_var);
		U3CcreateRedZoneU3Ed__23__ctor_mAA9B31E67F9EB48D5F93F58D73C315DA288874CE(L_0, 0, NULL);
		U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator EnemySuperPunch::pauseAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySuperPunch_pauseAnimation_mBA74839E2D31E6BD492ED10F4939F4CF61E896C8 (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F* L_0 = (U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F*)il2cpp_codegen_object_new(U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F_il2cpp_TypeInfo_var);
		U3CpauseAnimationU3Ed__24__ctor_m4473D0BB67565A5BB9CB52D1CF07463DC574145C(L_0, 0, NULL);
		U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EnemySuperPunch::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch_OnDrawGizmos_m1C25CF59C8372C4C19D8E9144F20FFC07E33D9CD (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawWireSphere(transform.position, _range);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->____range_9;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void EnemySuperPunch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunch__ctor_m7CB013BA58D5966E0B1DE9DC0DCB401618F94D94 (EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField]private List<string> _enemySuperPunchesAnimations = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____enemySuperPunchesAnimations_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemySuperPunchesAnimations_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_Multicast(PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* currentDelegate = reinterpret_cast<PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_OpenInst(PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_OpenStatic(PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_OpenStaticInvoker(PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_ClosedStaticInvoker(PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E (PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void EnemySuperPunch/PunchEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunchEvent__ctor_mD3D01DD9FE32B6C2F3CDA1452FCAFFABB008832E (PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_Multicast;
}
// System.Void EnemySuperPunch/PunchEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00 (PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EnemySuperPunch/PunchEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PunchEvent_BeginInvoke_mF225316ED5677D0A217A2F449B421B5C38524614 (PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void EnemySuperPunch/PunchEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunchEvent_EndInvoke_mE304A3DC22A2CABD454948181FDABC41188FBE36 (PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_Multicast(FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, float ___damage0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* currentDelegate = reinterpret_cast<FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___damage0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_OpenInst(FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, float ___damage0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___damage0, method);
}
void FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_OpenStatic(FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, float ___damage0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___damage0, method);
}
void FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_OpenStaticInvoker(FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, float ___damage0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< float >::Invoke(__this->___method_ptr_0, method, NULL, ___damage0);
}
void FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_ClosedStaticInvoker(FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, float ___damage0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___damage0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21 (FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, float ___damage0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___damage0);

}
// System.Void EnemySuperPunch/FloatPunchEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPunchEvent__ctor_m28241D1F7EC89444F083B6B8883018BD4468B506 (FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_Multicast;
}
// System.Void EnemySuperPunch/FloatPunchEvent::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1 (FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, float ___damage0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___damage0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EnemySuperPunch/FloatPunchEvent::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FloatPunchEvent_BeginInvoke_mD18C9F5C8161D4C9714E92AC213F6CC565AD1E08 (FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, float ___damage0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___damage0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void EnemySuperPunch/FloatPunchEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPunchEvent_EndInvoke_m7B2E5E9D617FFCE78ADEFDA6840C2C24871F690B (FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void EnemySuperPunch/<createRedZone>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateRedZoneU3Ed__23__ctor_mAA9B31E67F9EB48D5F93F58D73C315DA288874CE (U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemySuperPunch/<createRedZone>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateRedZoneU3Ed__23_System_IDisposable_Dispose_mC29BF92722FC6D5150DCC498EDD76A95FE1CF395 (U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnemySuperPunch/<createRedZone>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CcreateRedZoneU3Ed__23_MoveNext_m6C41C6F9CBFC1A45BEE65B93EC4467F96448315A (U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00d4;
	}

IL_0022:
	{
		goto IL_0112;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _redRange.SetActive(true);
		EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* L_2 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->____redRange_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// float scaleProgress = 0;
		__this->___U3CscaleProgressU3E5__1_3 = (0.0f);
		goto IL_00dc;
	}

IL_0053:
	{
		// _redRange.transform.localScale = Vector3.Lerp(new Vector3(0,0,0), new Vector3(1,1,1), scaleProgress);
		EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* L_4 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->____redRange_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		float L_9 = __this->___U3CscaleProgressU3E5__1_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_7, L_8, L_9, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_10, NULL);
		// scaleProgress +=  Time.deltaTime * _zoneSpeed;
		float L_11 = __this->___U3CscaleProgressU3E5__1_3;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* L_13 = __this->___U3CU3E4__this_2;
		float L_14 = L_13->____zoneSpeed_13;
		__this->___U3CscaleProgressU3E5__1_3 = ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(L_12, L_14))));
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, (0.00999999978f), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d4:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00dc:
	{
		// while(scaleProgress < 1)
		float L_16 = __this->___U3CscaleProgressU3E5__1_3;
		V_1 = (bool)((((float)L_16) < ((float)(1.0f)))? 1 : 0);
		bool L_17 = V_1;
		if (L_17)
		{
			goto IL_0053;
		}
	}
	{
		// _redRange.SetActive(false);
		EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* L_18 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18->____redRange_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0112:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object EnemySuperPunch/<createRedZone>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcreateRedZoneU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m717AB7B9E33CA84DD93A23786E8BBE6C357B1604 (U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemySuperPunch/<createRedZone>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateRedZoneU3Ed__23_System_Collections_IEnumerator_Reset_mC2157986D7A7F1A034DD7A6CE00392B4DBA0A4BE (U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CcreateRedZoneU3Ed__23_System_Collections_IEnumerator_Reset_mC2157986D7A7F1A034DD7A6CE00392B4DBA0A4BE_RuntimeMethod_var)));
	}
}
// System.Object EnemySuperPunch/<createRedZone>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcreateRedZoneU3Ed__23_System_Collections_IEnumerator_get_Current_m8D246B44EAD8F165A32B7D445A9B6C6301A27E31 (U3CcreateRedZoneU3Ed__23_tDBA7EAA240B2854583F68E05628AAF424B93CFFF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EnemySuperPunch/<pauseAnimation>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseAnimationU3Ed__24__ctor_m4473D0BB67565A5BB9CB52D1CF07463DC574145C (U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemySuperPunch/<pauseAnimation>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseAnimationU3Ed__24_System_IDisposable_Dispose_m874D85C22C830094179DE3D757D46C441507ADD4 (U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnemySuperPunch/<pauseAnimation>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CpauseAnimationU3Ed__24_MoveNext_m2071E6A6CDD2B132BA7526002C3C6714F787C245 (U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_0065;
	}

IL_001f:
	{
		goto IL_0097;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _animator.SetFloat("speed", 0);
		EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* L_2 = __this->___U3CU3E4__this_2;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = L_2->____animator_12;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_3, _stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B, (0.0f), NULL);
		// yield return new WaitForSeconds(_pauseAnimtion);
		EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* L_4 = __this->___U3CU3E4__this_2;
		float L_5 = L_4->____pauseAnimtion_14;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0065:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _animator.SetFloat("speed", 1);
		EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* L_7 = __this->___U3CU3E4__this_2;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = L_7->____animator_12;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_8, _stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B, (1.0f), NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0097:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object EnemySuperPunch/<pauseAnimation>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CpauseAnimationU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDD22908B0847F47E74551E1339C60DDB4F74B056 (U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemySuperPunch/<pauseAnimation>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseAnimationU3Ed__24_System_Collections_IEnumerator_Reset_mB0F1698DA0319CA3CC0133A5B718FF6A275892B8 (U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CpauseAnimationU3Ed__24_System_Collections_IEnumerator_Reset_mB0F1698DA0319CA3CC0133A5B718FF6A275892B8_RuntimeMethod_var)));
	}
}
// System.Object EnemySuperPunch/<pauseAnimation>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CpauseAnimationU3Ed__24_System_Collections_IEnumerator_get_Current_mE52D4FBD427E1893CEBA671E3978FD61AA35C98F (U3CpauseAnimationU3Ed__24_t68A25223BE17DB8CD95E2E4039F890643865671F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EnemyFightState::.ctor(Player,Enemy,UnityEngine.Animator,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFightState__ctor_m5F800D2A68940CDDB9FF026D1BB9BDE34BD40643 (EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy1, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator2, float ___damage3, const RuntimeMethod* method) 
{
	{
		// public EnemyFightState(Player player, Enemy enemy, Animator animator, float damage)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _player = player;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ___player0;
		__this->____player_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_0), (void*)L_0);
		// _enemy = enemy;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1 = ___enemy1;
		__this->____enemy_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemy_1), (void*)L_1);
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = ___animator2;
		__this->____animator_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_2), (void*)L_2);
		// _damage = damage;
		float L_3 = ___damage3;
		__this->____damage_3 = L_3;
		// }
		return;
	}
}
// System.Void EnemyFightState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFightState_Enter_m3E8F068331BB07C20E44F8496ABA3E5781E095C1 (EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A2B34784C84554FE4F96DF2462D1BC1C01C5A1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.Play("Main.Fight", 0, 0.25f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_2;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_0, _stringLiteral6A2B34784C84554FE4F96DF2462D1BC1C01C5A1B, 0, (0.25f), NULL);
		// _enemy.EnemyFighting.StartFight(_player, _damage);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1 = __this->____enemy_1;
		EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* L_2 = L_1->___EnemyFighting_17;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = __this->____player_0;
		float L_4 = __this->____damage_3;
		EnemyFighting_StartFight_m7FFC57AB946A3E97C15C1184969ED126B827299B(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void EnemyFightState::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFightState_Loop_mB693BA77A1FDA7EC68828C2DDC5BCC25B9029B41 (EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5729B5D48E34010515CD5F7BA59C9E03EBACC980);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("fight");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5729B5D48E34010515CD5F7BA59C9E03EBACC980, NULL);
		// _enemy.transform.LookAt(_player.transform, Vector3.up);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = __this->____enemy_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2 = __this->____player_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Transform_LookAt_mF76C04C0678092D85FC58A8D983AFA3E4364A8B3(L_1, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void EnemyFightState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFightState_Exit_m6A80A11CDBD5848ABCCC931508B68A38C91B3EAF (EnemyFightState_t95962108FBFB34867AD69633771633E3BCAC89D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BFE38CEE251C36338B498B02C77D814DEC37052);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _enemy.EnemyFighting.StopFight();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = __this->____enemy_1;
		EnemyFighting_tBBE83FAC85D6735FC984311CB52B022A4D380E03* L_1 = L_0->___EnemyFighting_17;
		EnemyFighting_StopFight_m0717A813239E5889076C08ED6065E7E4F8DE69E7(L_1, NULL);
		// Debug.Log("stop Fight");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3BFE38CEE251C36338B498B02C77D814DEC37052, NULL);
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
// System.Void EnemyIdleState::.ctor(Player,Enemy,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyIdleState__ctor_m8AF49F78A0F57651C5CF1B9FA634E93E70A9F8A8 (EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy1, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator2, const RuntimeMethod* method) 
{
	{
		// public EnemyIdleState(Player player, Enemy enemy, Animator animator)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _player = player;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ___player0;
		__this->____player_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_0), (void*)L_0);
		// _enemy = enemy;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1 = ___enemy1;
		__this->____enemy_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemy_1), (void*)L_1);
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = ___animator2;
		__this->____animator_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void EnemyIdleState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyIdleState_Enter_m53F47C41A29DBE62B6FAB361B3EFE32C10F8CD64 (EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6188A10B64B98F8546ADE8EDF7D18CEC2EAB9EA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.Play("Main.Idle", 0, 0.5f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_2;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_0, _stringLiteral6188A10B64B98F8546ADE8EDF7D18CEC2EAB9EA9, 0, (0.5f), NULL);
		// }
		return;
	}
}
// System.Void EnemyIdleState::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyIdleState_Loop_mD81B7DEB2B93E11EBCFB0D2F383535EEF514CF90 (EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* __this, const RuntimeMethod* method) 
{
	{
		// _enemy.transform.LookAt(_player.transform, Vector3.up);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = __this->____enemy_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2 = __this->____player_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Transform_LookAt_mF76C04C0678092D85FC58A8D983AFA3E4364A8B3(L_1, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void EnemyIdleState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyIdleState_Exit_m99474014BF4F6F5240B5720030F9302935803509 (EnemyIdleState_tBEE84866E0D45FDCED52D6C07C19A86557B9CC09* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void EnemyNockdownState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyNockdownState_Enter_m079F49E12381B009E4628D76EEC72C8DBDFE40C9 (EnemyNockdownState_t7B6076EE81F0823C79772BA34856C477ED64B474* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyNockdownState::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyNockdownState_Loop_m4C22DDB6D302B59C3B1AE2CA292A81159C84133B (EnemyNockdownState_t7B6076EE81F0823C79772BA34856C477ED64B474* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyNockdownState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyNockdownState_Exit_mB076E1103D5756D9EE079190498D6A481275B384 (EnemyNockdownState_t7B6076EE81F0823C79772BA34856C477ED64B474* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyNockdownState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyNockdownState__ctor_m10A951BF04AF31AE27A6D2C59BAD4F3F82583B0E (EnemyNockdownState_t7B6076EE81F0823C79772BA34856C477ED64B474* __this, const RuntimeMethod* method) 
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
// System.Void EnemyRestState::.ctor(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyRestState__ctor_mBF2E916F5C6D14F9AB5C39D69E915329324C382B (EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) 
{
	{
		// public EnemyRestState( Animator animator)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___animator0;
		__this->____animator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void EnemyRestState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyRestState_Enter_mD5785A2A6B8D63E0329C55202BF1E8997C6E0A18 (EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37F19146F56860FDCBDEBC08A296816B9019AA44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.Play("Main.Rest",0,0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_0;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_0, _stringLiteral37F19146F56860FDCBDEBC08A296816B9019AA44, 0, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void EnemyRestState::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyRestState_Loop_mA9CA3869056E34E5871F1F1AFADA65AA21C7EDDD (EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyRestState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyRestState_Exit_m5E631C0E47BDAD7CCA105587335225C4E35F13A7 (EnemyRestState_t2FA9AAF3B1C6F25408059435270753F261B6F5FF* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void EnemySuperPunchState::.ctor(Enemy,UnityEngine.Animator,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunchState__ctor_m9C8F50A088862FA52BAA4E941461D208F3AECCCB (EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, float ___damage2, const RuntimeMethod* method) 
{
	{
		// public EnemySuperPunchState(Enemy enemy, Animator animator, float damage)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _enemy = enemy;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = ___enemy0;
		__this->____enemy_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemy_2), (void*)L_0);
		// _damage = damage;
		float L_1 = ___damage2;
		__this->____damage_1 = L_1;
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = ___animator1;
		__this->____animator_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void EnemySuperPunchState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunchState_Enter_m0D3B8C97ED5084163221DC50331EF0440D8893B0 (EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F* __this, const RuntimeMethod* method) 
{
	{
		// _enemy.EnemySuperPunch.SuperPunch(_animator, _damage);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = __this->____enemy_2;
		EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F* L_1 = L_0->___EnemySuperPunch_18;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->____animator_0;
		float L_3 = __this->____damage_1;
		EnemySuperPunch_SuperPunch_m9DED615B484FC4C67752012F3BF6ED07D8E88F4D(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void EnemySuperPunchState::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunchState_Loop_m2B61A9474DFC64B9C7022BC24E88E467C09449C7 (EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemySuperPunchState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySuperPunchState_Exit_m3E12002C18746350393547A3629C941F37E85363 (EnemySuperPunchState_t36244A50E47D6EA80DCA08318D4A979633C0CA0F* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Events::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Events__ctor_m7252526B9DDE74A4BC4145D658080478E9D6AC43 (Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void SingleEvent_Invoke_mF7D12D313EE6D7C76AD5D8A7246E0B6FF73E84CC_Multicast(SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* currentDelegate = reinterpret_cast<SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SingleEvent_Invoke_mF7D12D313EE6D7C76AD5D8A7246E0B6FF73E84CC_OpenInst(SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void SingleEvent_Invoke_mF7D12D313EE6D7C76AD5D8A7246E0B6FF73E84CC_OpenStatic(SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void SingleEvent_Invoke_mF7D12D313EE6D7C76AD5D8A7246E0B6FF73E84CC_OpenStaticInvoker(SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void SingleEvent_Invoke_mF7D12D313EE6D7C76AD5D8A7246E0B6FF73E84CC_ClosedStaticInvoker(SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597 (SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Events/SingleEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent__ctor_mBCA57F87DE470AFD070CAD6AEB9E67F918762A30 (SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SingleEvent_Invoke_mF7D12D313EE6D7C76AD5D8A7246E0B6FF73E84CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SingleEvent_Invoke_mF7D12D313EE6D7C76AD5D8A7246E0B6FF73E84CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SingleEvent_Invoke_mF7D12D313EE6D7C76AD5D8A7246E0B6FF73E84CC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SingleEvent_Invoke_mF7D12D313EE6D7C76AD5D8A7246E0B6FF73E84CC_Multicast;
}
// System.Void Events/SingleEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent_Invoke_mF7D12D313EE6D7C76AD5D8A7246E0B6FF73E84CC (SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Events/SingleEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingleEvent_BeginInvoke_mE135F62DB340CEC40BFABDF51DC25A01DF55C48C (SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Events/SingleEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent_EndInvoke_m21A4AF4A286DFA257527E42540FBEBEBA800EF2D (SingleEvent_t65807A17529D91F5D0E482AE3F336D88A9DD4597* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void CameraLooker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLooker_Update_mAD6601FFCD3CA502AF2BBFB2A8BF621EC411AE25 (CameraLooker_t0B208D90E6BCB79B16F17446FFEF1544DA114F5E* __this, const RuntimeMethod* method) 
{
	{
		// _objectTransform.LookAt(Camera.main.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____objectTransform_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_0, L_3, NULL);
		// _objectTransform.Rotate(0,180,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____objectTransform_4;
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_4, (0.0f), (180.0f), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void CameraLooker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLooker__ctor_m1FF7D290120803301F35F549F52293123E3FAD25 (CameraLooker_t0B208D90E6BCB79B16F17446FFEF1544DA114F5E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CamerasChanger::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamerasChanger_Awake_m14A56E72EAB9A558E262E6E2F3FBDDBFE0760C60 (CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamerasChanger_changeCameraToGamePlay_m0F7FDBEC9230B24A19F92DB5278685D99BE2BFB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamerasChanger_changeCameraToVanFace_m2FDA0CCAAC858283E49277A8109FF920E49B4ADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enemy.EnemyDead += changeCameraToVanFace;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_0 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_1 = (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)il2cpp_codegen_object_new(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352(L_1, __this, (intptr_t)((void*)CamerasChanger_changeCameraToVanFace_m2FDA0CCAAC858283E49277A8109FF920E49B4ADA_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4 = ((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_2, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4), (void*)((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_2, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var)));
		// UIController.StartGame += changeCameraToGamePlay;
		UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* L_3 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___StartGame_4;
		UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* L_4 = (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21*)il2cpp_codegen_object_new(UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var);
		UIEvent__ctor_m4C5372CA4E05AE5615EB07EBBB4847FF0A053379(L_4, __this, (intptr_t)((void*)CamerasChanger_changeCameraToGamePlay_m0F7FDBEC9230B24A19F92DB5278685D99BE2BFB8_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___StartGame_4 = ((UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21*)CastclassSealed((RuntimeObject*)L_5, UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___StartGame_4), (void*)((UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21*)CastclassSealed((RuntimeObject*)L_5, UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void CamerasChanger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamerasChanger_OnDestroy_mCC4ACF169523FFFFDEA8FC618281F90975B3A149 (CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamerasChanger_changeCameraToGamePlay_m0F7FDBEC9230B24A19F92DB5278685D99BE2BFB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamerasChanger_changeCameraToVanFace_m2FDA0CCAAC858283E49277A8109FF920E49B4ADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enemy.EnemyDead -= changeCameraToVanFace;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_0 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_1 = (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)il2cpp_codegen_object_new(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352(L_1, __this, (intptr_t)((void*)CamerasChanger_changeCameraToVanFace_m2FDA0CCAAC858283E49277A8109FF920E49B4ADA_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4 = ((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_2, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4), (void*)((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_2, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var)));
		// UIController.StartGame -= changeCameraToGamePlay;
		UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* L_3 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___StartGame_4;
		UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* L_4 = (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21*)il2cpp_codegen_object_new(UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var);
		UIEvent__ctor_m4C5372CA4E05AE5615EB07EBBB4847FF0A053379(L_4, __this, (intptr_t)((void*)CamerasChanger_changeCameraToGamePlay_m0F7FDBEC9230B24A19F92DB5278685D99BE2BFB8_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___StartGame_4 = ((UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21*)CastclassSealed((RuntimeObject*)L_5, UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___StartGame_4), (void*)((UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21*)CastclassSealed((RuntimeObject*)L_5, UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void CamerasChanger::changeCameraToGamePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamerasChanger_changeCameraToGamePlay_m0F7FDBEC9230B24A19F92DB5278685D99BE2BFB8 (CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08DF9C2253A15D90D2EB01C158B269F4CA471ACD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void changeCameraToGamePlay() => StartCoroutine("cameraToGamePlay");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral08DF9C2253A15D90D2EB01C158B269F4CA471ACD, NULL);
		return;
	}
}
// System.Void CamerasChanger::changeCameraToVanFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamerasChanger_changeCameraToVanFace_m2FDA0CCAAC858283E49277A8109FF920E49B4ADA (CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0C96532E4E9719BC23A895553CD5062D33397F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void changeCameraToVanFace() => StartCoroutine("cameraToVanFacey");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralA0C96532E4E9719BC23A895553CD5062D33397F2, NULL);
		return;
	}
}
// System.Collections.IEnumerator CamerasChanger::cameraToGamePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CamerasChanger_cameraToGamePlay_m4156EA1EEC89F3FC49749E366CD6BE17B93F182D (CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589* L_0 = (U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589*)il2cpp_codegen_object_new(U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589_il2cpp_TypeInfo_var);
		U3CcameraToGamePlayU3Ed__13__ctor_m0590439ADE0BB5B96B2D249F86D09854656A87F4(L_0, 0, NULL);
		U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator CamerasChanger::cameraToVanFacey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CamerasChanger_cameraToVanFacey_m7F9E1C55B98FC0563050F43E3D6F3D1931CD5058 (CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67* L_0 = (U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67*)il2cpp_codegen_object_new(U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67_il2cpp_TypeInfo_var);
		U3CcameraToVanFaceyU3Ed__14__ctor_m7A20F709F65FACE79BA4F767BAA8F30AC616FEBB(L_0, 0, NULL);
		U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CamerasChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamerasChanger__ctor_m6F2586689C6AC6D7219692B09FFE6F9ADDD22C27 (CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_Multicast(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* currentDelegate = reinterpret_cast<CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_OpenInst(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_OpenStatic(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_OpenStaticInvoker(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_ClosedStaticInvoker(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405 (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CamerasChanger/CameraEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraEvent__ctor_mE426CEC567DA70088E24149949ABE0C9D0B719F7 (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_Multicast;
}
// System.Void CamerasChanger/CameraEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22 (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CamerasChanger/CameraEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraEvent_BeginInvoke_m3DCC3A3B439232ED7693983997AB7C333D5BB947 (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void CamerasChanger/CameraEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraEvent_EndInvoke_m206C92E987E41DE637918FA2E36606BBAC043021 (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void CamerasChanger/<cameraToGamePlay>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcameraToGamePlayU3Ed__13__ctor_m0590439ADE0BB5B96B2D249F86D09854656A87F4 (U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CamerasChanger/<cameraToGamePlay>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcameraToGamePlayU3Ed__13_System_IDisposable_Dispose_m7458FB6CD4E50CA2E70CB84F0140907DD407B20B (U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CamerasChanger/<cameraToGamePlay>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CcameraToGamePlayU3Ed__13_MoveNext_m09115276AE87B7222AC7F4A68DA20DB432A9F77F (U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037_m1D47FB565280560AE57CAF7DAE5D6018B433262C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* G_B8_0 = NULL;
	CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* G_B7_0 = NULL;
	CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* G_B15_0 = NULL;
	CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* G_B14_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00b8;
	}

IL_0022:
	{
		goto IL_0116;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ChangingCameraToGamePlay?.Invoke();
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_2 = ((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangingCameraToGamePlay_5;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_3 = L_2;
		G_B7_0 = L_3;
		if (L_3)
		{
			G_B8_0 = L_3;
			goto IL_003c;
		}
	}
	{
		goto IL_0042;
	}

IL_003c:
	{
		CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_inline(G_B8_0, NULL);
	}

IL_0042:
	{
		// float progress = 0;
		__this->___U3CprogressU3E5__1_3 = (0.0f);
		// _trackedDolly = _trackedDollyCamera.GetCinemachineComponent<CinemachineTrackedDolly> ();
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_4 = __this->___U3CU3E4__this_2;
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_5 = __this->___U3CU3E4__this_2;
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_6 = L_5->____trackedDollyCamera_10;
		CinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037* L_7;
		L_7 = CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037_m1D47FB565280560AE57CAF7DAE5D6018B433262C(L_6, CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037_m1D47FB565280560AE57CAF7DAE5D6018B433262C_RuntimeMethod_var);
		L_4->____trackedDolly_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____trackedDolly_11), (void*)L_7);
		goto IL_00c0;
	}

IL_006a:
	{
		// progress += _playCameraSpeed * Time.deltaTime;
		float L_8 = __this->___U3CprogressU3E5__1_3;
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_9 = __this->___U3CU3E4__this_2;
		float L_10 = L_9->____playCameraSpeed_6;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CprogressU3E5__1_3 = ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_10, L_11))));
		// _trackedDolly.m_PathPosition = progress;
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_12 = __this->___U3CU3E4__this_2;
		CinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037* L_13 = L_12->____trackedDolly_11;
		float L_14 = __this->___U3CprogressU3E5__1_3;
		L_13->___m_PathPosition_7 = L_14;
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, (0.00999999978f), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b8:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c0:
	{
		// while(progress < 3)
		float L_16 = __this->___U3CprogressU3E5__1_3;
		V_1 = (bool)((((float)L_16) < ((float)(3.0f)))? 1 : 0);
		bool L_17 = V_1;
		if (L_17)
		{
			goto IL_006a;
		}
	}
	{
		// _marketCamera.SetActive(false);
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_18 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18->____marketCamera_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// _gamePlayCamera.SetActive(true);
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_20 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->____gamePlayCamera_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// ChangeCameraToGamePlay?.Invoke();
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_22 = ((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_23 = L_22;
		G_B14_0 = L_23;
		if (L_23)
		{
			G_B15_0 = L_23;
			goto IL_0100;
		}
	}
	{
		goto IL_0106;
	}

IL_0100:
	{
		CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_inline(G_B15_0, NULL);
	}

IL_0106:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0116:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object CamerasChanger/<cameraToGamePlay>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcameraToGamePlayU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m057D1A0FE647E8C5768B94EDCAB69C2EA035EC3D (U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CamerasChanger/<cameraToGamePlay>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcameraToGamePlayU3Ed__13_System_Collections_IEnumerator_Reset_m40513CEEA926A4244470AB46B7E0D2C72C990B01 (U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CcameraToGamePlayU3Ed__13_System_Collections_IEnumerator_Reset_m40513CEEA926A4244470AB46B7E0D2C72C990B01_RuntimeMethod_var)));
	}
}
// System.Object CamerasChanger/<cameraToGamePlay>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcameraToGamePlayU3Ed__13_System_Collections_IEnumerator_get_Current_m5EE3C93F36F83074FECB3A32705815DA728A8B6C (U3CcameraToGamePlayU3Ed__13_tC21B90E84EECEFBC5A8E725FE3E6DD094315D589* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void CamerasChanger/<cameraToVanFacey>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcameraToVanFaceyU3Ed__14__ctor_m7A20F709F65FACE79BA4F767BAA8F30AC616FEBB (U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CamerasChanger/<cameraToVanFacey>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcameraToVanFaceyU3Ed__14_System_IDisposable_Dispose_m0951489BC9D5D6BCA6070363EDC0469FDC72D4E6 (U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CamerasChanger/<cameraToVanFacey>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CcameraToVanFaceyU3Ed__14_MoveNext_mD12F29FA0D6BB7AC0FB13ADD677ED36C2059161A (U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037_m1D47FB565280560AE57CAF7DAE5D6018B433262C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00cb;
	}

IL_0022:
	{
		goto IL_00f4;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _marketCamera.SetActive(true);
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_2 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->____marketCamera_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// _gamePlayCamera.SetActive(false);
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_4 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->____gamePlayCamera_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// float progress = 3;
		__this->___U3CprogressU3E5__1_3 = (3.0f);
		// _trackedDolly = _trackedDollyCamera.GetCinemachineComponent<CinemachineTrackedDolly> ();
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_6 = __this->___U3CU3E4__this_2;
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_7 = __this->___U3CU3E4__this_2;
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_8 = L_7->____trackedDollyCamera_10;
		CinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037* L_9;
		L_9 = CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037_m1D47FB565280560AE57CAF7DAE5D6018B433262C(L_8, CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037_m1D47FB565280560AE57CAF7DAE5D6018B433262C_RuntimeMethod_var);
		L_6->____trackedDolly_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____trackedDolly_11), (void*)L_9);
		goto IL_00d3;
	}

IL_007d:
	{
		// progress -= _marketCameraSpeed * Time.deltaTime;
		float L_10 = __this->___U3CprogressU3E5__1_3;
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_11 = __this->___U3CU3E4__this_2;
		float L_12 = L_11->____marketCameraSpeed_7;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CprogressU3E5__1_3 = ((float)il2cpp_codegen_subtract(L_10, ((float)il2cpp_codegen_multiply(L_12, L_13))));
		// _trackedDolly.m_PathPosition = progress;
		CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15* L_14 = __this->___U3CU3E4__this_2;
		CinemachineTrackedDolly_tF6AD39CDE4ECE4A1828476535B327CF2EF9D4037* L_15 = L_14->____trackedDolly_11;
		float L_16 = __this->___U3CprogressU3E5__1_3;
		L_15->___m_PathPosition_7 = L_16;
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, (0.00999999978f), NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00cb:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00d3:
	{
		// while(progress > 0)
		float L_18 = __this->___U3CprogressU3E5__1_3;
		V_1 = (bool)((((float)L_18) > ((float)(0.0f)))? 1 : 0);
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_007d;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00f4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object CamerasChanger/<cameraToVanFacey>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcameraToVanFaceyU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBFD123431188773DABBB18DA94FACA106A9489AE (U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CamerasChanger/<cameraToVanFacey>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcameraToVanFaceyU3Ed__14_System_Collections_IEnumerator_Reset_mE0E70953FED33BD384E5DCD9443329914A588A42 (U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CcameraToVanFaceyU3Ed__14_System_Collections_IEnumerator_Reset_mE0E70953FED33BD384E5DCD9443329914A588A42_RuntimeMethod_var)));
	}
}
// System.Object CamerasChanger/<cameraToVanFacey>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcameraToVanFaceyU3Ed__14_System_Collections_IEnumerator_get_Current_m048EFC5BFB75FD7CF02B6943269E5DE608A2DD42 (U3CcameraToVanFaceyU3Ed__14_t023A60BAFF71A75381DC4DD0543A69B477EE0D67* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Destroyer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroyer_Start_m01875FD0467D84C4D3817ED804BBE9A3E9F27264 (Destroyer_t983B298AE2EF96174E323D953D2A1DA07A3DA2BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("destroy");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Destroyer::destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Destroyer_destroy_mAEBFEC928A87CC96BCC089F84FD0C42B288E5B01 (Destroyer_t983B298AE2EF96174E323D953D2A1DA07A3DA2BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814* L_0 = (U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814*)il2cpp_codegen_object_new(U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814_il2cpp_TypeInfo_var);
		U3CdestroyU3Ed__2__ctor_m9864CFAEB9D2C018839D0E68B2F8B53872EC3D6C(L_0, 0, NULL);
		U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Destroyer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroyer__ctor_m5A5E4BE2F1791A2800E871619A9AA1E9FA0C4601 (Destroyer_t983B298AE2EF96174E323D953D2A1DA07A3DA2BB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Destroyer/<destroy>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdestroyU3Ed__2__ctor_m9864CFAEB9D2C018839D0E68B2F8B53872EC3D6C (U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Destroyer/<destroy>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdestroyU3Ed__2_System_IDisposable_Dispose_m0CBAC29FEDBA993CD377A3007F9B6204E630445A (U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Destroyer/<destroy>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CdestroyU3Ed__2_MoveNext_m89B4D8807C40AEA39A236E4A032F8D9D885C3670 (U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
		goto IL_003f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(_timeToDestroy);
		Destroyer_t983B298AE2EF96174E323D953D2A1DA07A3DA2BB* L_3 = __this->___U3CU3E4__this_2;
		float L_4 = L_3->____timeToDestroy_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(this.gameObject);
		Destroyer_t983B298AE2EF96174E323D953D2A1DA07A3DA2BB* L_6 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Destroyer/<destroy>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CdestroyU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBDC7B6499E82F1AC38C60EA33B7B788B4DE09343 (U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Destroyer/<destroy>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdestroyU3Ed__2_System_Collections_IEnumerator_Reset_m45511FB842A74A63B2B500EDC16AA3212F07AB96 (U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CdestroyU3Ed__2_System_Collections_IEnumerator_Reset_m45511FB842A74A63B2B500EDC16AA3212F07AB96_RuntimeMethod_var)));
	}
}
// System.Object Destroyer/<destroy>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CdestroyU3Ed__2_System_Collections_IEnumerator_get_Current_mCB201A861FDF08A1A7CAE231459952A6FB007405 (U3CdestroyU3Ed__2_t3B7E1D3FF0EB849C9AAF3537DD3991749022C814* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LevelSaves::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaves_Awake_mF3946CFD63B1B22D2AAFCE73B3A5A8BE87A82ED7 (LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaves_levelUp_m8AD0849B48FB427FE9C673D50D72238187B1247D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enemy.EnemyDead += levelUp;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_0 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_1 = (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)il2cpp_codegen_object_new(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352(L_1, __this, (intptr_t)((void*)LevelSaves_levelUp_m8AD0849B48FB427FE9C673D50D72238187B1247D_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4 = ((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_2, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4), (void*)((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_2, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void LevelSaves::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaves_OnDestroy_m0215A30AD2515B573E90C116C34232481123AB21 (LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaves_levelUp_m8AD0849B48FB427FE9C673D50D72238187B1247D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enemy.EnemyDead -= levelUp;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_0 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_1 = (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)il2cpp_codegen_object_new(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352(L_1, __this, (intptr_t)((void*)LevelSaves_levelUp_m8AD0849B48FB427FE9C673D50D72238187B1247D_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4 = ((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_2, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4), (void*)((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_2, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// PlayerData LevelSaves::LoadPlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A LevelSaves_LoadPlayerData_mD10196434333422E898CAE8C07917A9450B65E49 (LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mF4BCB220B1836F634054646B14A5F3E00EC51EE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	bool V_2 = false;
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// _savePlayerDataPath = Path.Combine(Application.dataPath, _savePlayerDataFile);
		String_t* L_0;
		L_0 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_1 = __this->____savePlayerDataFile_5;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		__this->____savePlayerDataPath_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____savePlayerDataPath_4), (void*)L_2);
		// PlayerData player = new PlayerData();
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A));
		// if(!File.Exists(_savePlayerDataPath))
		String_t* L_3 = __this->____savePlayerDataPath_4;
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		// player.Level = 1;
		(&V_0)->___Level_0 = 1;
		// player.PlayerHealth = _defaultHealth;
		int32_t L_6 = __this->____defaultHealth_7;
		(&V_0)->___PlayerHealth_1 = L_6;
		// player.PlayerDamage = _defaultDamage;
		int32_t L_7 = __this->____defaultDamage_6;
		(&V_0)->___PlayerDamage_2 = L_7;
		// player.Money = 0;
		(&V_0)->___Money_3 = 0;
		// SavePlayerData(player);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_8 = V_0;
		LevelSaves_SavePlayerData_m8C366DBF02F122485CEE508D241C038026944E72(__this, L_8, NULL);
	}

IL_0065:
	{
		// string playerJsonData = File.ReadAllText(_savePlayerDataPath);
		String_t* L_9 = __this->____savePlayerDataPath_4;
		String_t* L_10;
		L_10 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(L_9, NULL);
		V_1 = L_10;
		// player = JsonUtility.FromJson<PlayerData>(playerJsonData);
		String_t* L_11 = V_1;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_12;
		L_12 = JsonUtility_FromJson_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mF4BCB220B1836F634054646B14A5F3E00EC51EE0(L_11, JsonUtility_FromJson_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mF4BCB220B1836F634054646B14A5F3E00EC51EE0_RuntimeMethod_var);
		V_0 = L_12;
		// return player;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_13 = V_0;
		V_3 = L_13;
		goto IL_007c;
	}

IL_007c:
	{
		// }
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_14 = V_3;
		return L_14;
	}
}
// System.Void LevelSaves::SavePlayerData(PlayerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaves_SavePlayerData_m8C366DBF02F122485CEE508D241C038026944E72 (LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* __this, PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A ___playerData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// string playerJsonData = JsonUtility.ToJson(playerData, true);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_0 = ___playerData0;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(L_2, (bool)1, NULL);
		V_0 = L_3;
	}
	try
	{// begin try (depth: 1)
		// File.WriteAllText(_savePlayerDataPath, playerJsonData);
		String_t* L_4 = __this->____savePlayerDataPath_4;
		String_t* L_5 = V_0;
		File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1(L_4, L_5, NULL);
		goto IL_002b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001f;
		}
		throw e;
	}

CATCH_001f:
	{// begin catch(System.Exception)
		// catch(Exception exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.Log(exception);
		Exception_t* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002b;
	}// end catch (depth: 1)

IL_002b:
	{
		// }
		return;
	}
}
// System.Void LevelSaves::levelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaves_levelUp_m8AD0849B48FB427FE9C673D50D72238187B1247D (LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* __this, const RuntimeMethod* method) 
{
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PlayerData data = LoadPlayerData();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_0;
		L_0 = LevelSaves_LoadPlayerData_mD10196434333422E898CAE8C07917A9450B65E49(__this, NULL);
		V_0 = L_0;
		// data.Level += 1;
		int32_t* L_1 = (&(&V_0)->___Level_0);
		int32_t* L_2 = L_1;
		int32_t L_3 = *((int32_t*)L_2);
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, 1));
		// data.Money += data.Level * 147;
		int32_t* L_4 = (&(&V_0)->___Money_3);
		int32_t* L_5 = L_4;
		int32_t L_6 = *((int32_t*)L_5);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_7 = V_0;
		int32_t L_8 = L_7.___Level_0;
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)147)))));
		// SavePlayerData(data);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_9 = V_0;
		LevelSaves_SavePlayerData_m8C366DBF02F122485CEE508D241C038026944E72(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void LevelSaves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaves__ctor_mCE6CD6B1C39B4918386A51C0F9932B1451940F92 (LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral127C9EC2DC1DE963FE25E1E89EED5673C3F3E0A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _savePlayerDataFile = "PlayerSaves.json";
		__this->____savePlayerDataFile_5 = _stringLiteral127C9EC2DC1DE963FE25E1E89EED5673C3F3E0A3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____savePlayerDataFile_5), (void*)_stringLiteral127C9EC2DC1DE963FE25E1E89EED5673C3F3E0A3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Market::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_Start_m519D59E68F3483D064E9AB13B742A96E4BC0C9D5 (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) 
{
	{
		// updateMoney();
		Market_updateMoney_mB46934218FACC14D2297B154D6BEEC611846694B(__this, NULL);
		// }
		return;
	}
}
// System.Void Market::LevelUpHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_LevelUpHealth_m90476FFF1564901206CDEABF2C0AB00D6D6E7D15 (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) 
{
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// PlayerData data = _levelSaves.LoadPlayerData();
		LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* L_0 = __this->____levelSaves_4;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_1;
		L_1 = LevelSaves_LoadPlayerData_mD10196434333422E898CAE8C07917A9450B65E49(L_0, NULL);
		V_0 = L_1;
		// if(data.Money >= 100)
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_2 = V_0;
		int32_t L_3 = L_2.___Money_3;
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)100)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// data.Money -= 100;
		int32_t* L_5 = (&(&V_0)->___Money_3);
		int32_t* L_6 = L_5;
		int32_t L_7 = *((int32_t*)L_6);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)100)));
		// data.PlayerHealth += 10;
		int32_t* L_8 = (&(&V_0)->___PlayerHealth_1);
		int32_t* L_9 = L_8;
		int32_t L_10 = *((int32_t*)L_9);
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, ((int32_t)10)));
		// _levelSaves.SavePlayerData(data);
		LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* L_11 = __this->____levelSaves_4;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_12 = V_0;
		LevelSaves_SavePlayerData_m8C366DBF02F122485CEE508D241C038026944E72(L_11, L_12, NULL);
		// updateMoney();
		Market_updateMoney_mB46934218FACC14D2297B154D6BEEC611846694B(__this, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Market::LevelUpDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_LevelUpDamage_m943F56D72AD7C2E0E34CF4EDDF79661CCDF0D0DC (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) 
{
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// PlayerData data = _levelSaves.LoadPlayerData();
		LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* L_0 = __this->____levelSaves_4;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_1;
		L_1 = LevelSaves_LoadPlayerData_mD10196434333422E898CAE8C07917A9450B65E49(L_0, NULL);
		V_0 = L_1;
		// if(data.Money >= 100)
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_2 = V_0;
		int32_t L_3 = L_2.___Money_3;
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)100)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// data.Money -= 100;
		int32_t* L_5 = (&(&V_0)->___Money_3);
		int32_t* L_6 = L_5;
		int32_t L_7 = *((int32_t*)L_6);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)100)));
		// data.PlayerDamage += 10;
		int32_t* L_8 = (&(&V_0)->___PlayerDamage_2);
		int32_t* L_9 = L_8;
		int32_t L_10 = *((int32_t*)L_9);
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, ((int32_t)10)));
		// _levelSaves.SavePlayerData(data);
		LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* L_11 = __this->____levelSaves_4;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_12 = V_0;
		LevelSaves_SavePlayerData_m8C366DBF02F122485CEE508D241C038026944E72(L_11, L_12, NULL);
		// updateMoney();
		Market_updateMoney_mB46934218FACC14D2297B154D6BEEC611846694B(__this, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Market::updateMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_updateMoney_mB46934218FACC14D2297B154D6BEEC611846694B (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) 
{
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PlayerData data = _levelSaves.LoadPlayerData();
		LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* L_0 = __this->____levelSaves_4;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_1;
		L_1 = LevelSaves_LoadPlayerData_mD10196434333422E898CAE8C07917A9450B65E49(L_0, NULL);
		V_0 = L_1;
		// _moneyText.text = data.Money.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____moneyText_5;
		int32_t* L_3 = (&(&V_0)->___Money_3);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void Market::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market__ctor_m8C3694D9AAAC7450C405FEB0AACAA036813C59EF (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Player::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnEnable_mE0997C2EDE52E3BC53CCBF961D4FE375347F0906 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// _playerInput.Enable();
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->____playerInput_11;
		PlayerInput_Enable_mE3EC3D4631D753DB2B6EEA9FF407DC0CA920A2E5(L_0, NULL);
		// }
		return;
	}
}
// System.Void Player::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDisable_m37872CE0A672A116C94A05662826159004ECB59C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// _playerInput.Disable();
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->____playerInput_11;
		PlayerInput_Disable_m9DA10D3B65ECD087D0C78E77A9719D31F1EC23ED(L_0, NULL);
		// }
		return;
	}
}
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_StartGame_mE23BCE89340970E3B32B873E9EBE4D4255958FC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_Win_mD3AC67F1CD62F54CC6456A2271C1212DD5D6ABC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_superPunchHit_mEEB9A82F6860EB67242D052B881AF8FA8C15D5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActivityRagdoll(false);
		Player_ActivityRagdoll_mAF5996A546EEA3C678022D5EB4456FC646934F17(__this, (bool)0, NULL);
		// PlayerSingleton.SingltonePlayer.SetPlayer(this);
		il2cpp_codegen_runtime_class_init_inline(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* L_0 = ((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SingltonePlayer_4;
		PlayerSingleton_SetPlayer_mA5961E1F090DEE4D631FF95C99632F1AD2615E05(L_0, __this, NULL);
		// _playerInput = new PlayerInput();
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_1 = (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE*)il2cpp_codegen_object_new(PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var);
		PlayerInput__ctor_m24FD924FB39A9A023CDEA8F6916EEC47B471B3A8(L_1, NULL);
		__this->____playerInput_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerInput_11), (void*)L_1);
		// EnemySuperPunch.SuperPunchHit += superPunchHit;
		FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* L_2 = ((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchHit_6;
		FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* L_3 = (FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21*)il2cpp_codegen_object_new(FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21_il2cpp_TypeInfo_var);
		FloatPunchEvent__ctor_m28241D1F7EC89444F083B6B8883018BD4468B506(L_3, __this, (intptr_t)((void*)Player_superPunchHit_mEEB9A82F6860EB67242D052B881AF8FA8C15D5B3_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchHit_6 = ((FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21*)CastclassSealed((RuntimeObject*)L_4, FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchHit_6), (void*)((FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21*)CastclassSealed((RuntimeObject*)L_4, FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21_il2cpp_TypeInfo_var)));
		// Enemy.EnemyDead += Win;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_5 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_6 = (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)il2cpp_codegen_object_new(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352(L_6, __this, (intptr_t)((void*)Player_Win_mD3AC67F1CD62F54CC6456A2271C1212DD5D6ABC3_RuntimeMethod_var), NULL);
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4 = ((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_7, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4), (void*)((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_7, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var)));
		// UIController.StartGame += StartGame;
		UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* L_8 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___StartGame_4;
		UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* L_9 = (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21*)il2cpp_codegen_object_new(UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var);
		UIEvent__ctor_m4C5372CA4E05AE5615EB07EBBB4847FF0A053379(L_9, __this, (intptr_t)((void*)Player_StartGame_mE23BCE89340970E3B32B873E9EBE4D4255958FC6_RuntimeMethod_var), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___StartGame_4 = ((UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21*)CastclassSealed((RuntimeObject*)L_10, UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___StartGame_4), (void*)((UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21*)CastclassSealed((RuntimeObject*)L_10, UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Player::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDestroy_m130A1BF02C7F0D5620BF35D6D2C198F2F011552C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_Win_mD3AC67F1CD62F54CC6456A2271C1212DD5D6ABC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_superPunchHit_mEEB9A82F6860EB67242D052B881AF8FA8C15D5B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnemySuperPunch.SuperPunchHit -= superPunchHit;
		FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* L_0 = ((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchHit_6;
		FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* L_1 = (FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21*)il2cpp_codegen_object_new(FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21_il2cpp_TypeInfo_var);
		FloatPunchEvent__ctor_m28241D1F7EC89444F083B6B8883018BD4468B506(L_1, __this, (intptr_t)((void*)Player_superPunchHit_mEEB9A82F6860EB67242D052B881AF8FA8C15D5B3_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchHit_6 = ((FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21*)CastclassSealed((RuntimeObject*)L_2, FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_StaticFields*)il2cpp_codegen_static_fields_for(EnemySuperPunch_t24D767C77C66FF02403D7443A5BEAAA4FE07F42F_il2cpp_TypeInfo_var))->___SuperPunchHit_6), (void*)((FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21*)CastclassSealed((RuntimeObject*)L_2, FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21_il2cpp_TypeInfo_var)));
		// Enemy.EnemyDead -= Win;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_3 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_4 = (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)il2cpp_codegen_object_new(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352(L_4, __this, (intptr_t)((void*)Player_Win_mD3AC67F1CD62F54CC6456A2271C1212DD5D6ABC3_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4 = ((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_5, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4), (void*)((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_5, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _enemy = EnemySingletone.SingltoneEnemy.GetEnemy();
		il2cpp_codegen_runtime_class_init_inline(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var);
		EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D* L_0 = ((EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_StaticFields*)il2cpp_codegen_static_fields_for(EnemySingletone_t183BF6F0D256B0674BD11A5C06D461AA6FE06A2D_il2cpp_TypeInfo_var))->___SingltoneEnemy_4;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1;
		L_1 = EnemySingletone_GetEnemy_mF9A22C7B3C96D9072F438BE3B4D4E6AAA2DC4A60(L_0, NULL);
		__this->____enemy_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemy_10), (void*)L_1);
		// PlayerMovement.InitPlayerMovement(
		//     _playerAnimator,
		//     _playerInput,
		//     _speed,
		//     _playerTransform,
		//     _enemy.transform);
		PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* L_2 = __this->___PlayerMovement_20;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____playerAnimator_28;
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_4 = __this->____playerInput_11;
		float L_5 = __this->____speed_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____playerTransform_18;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_7 = __this->____enemy_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		PlayerMovement_InitPlayerMovement_mA0E9BC30F2BB4A26CF4FC9919F35C4892DFE9E19(L_2, L_3, L_4, L_5, L_6, L_8, NULL);
		// PlayerFighting.InitPlayerFighting(
		//     _playerAnimator,
		//     _damage,
		//     _timeBetweenPunches,
		//     _enemy);
		PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* L_9 = __this->___PlayerFighting_25;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->____playerAnimator_28;
		float L_11 = __this->____damage_23;
		float L_12 = __this->____timeBetweenPunches_24;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_13 = __this->____enemy_10;
		PlayerFighting_InitPlayerFighting_m5C8AF2B97BCFF8B06CF69AC5E7155B1B17CC46ED(L_9, L_10, L_11, L_12, L_13, NULL);
		// _idleState = new PlayerIdleState(this);
		PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3* L_14 = (PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3*)il2cpp_codegen_object_new(PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3_il2cpp_TypeInfo_var);
		PlayerIdleState__ctor_mEA6CF2A6AAA94F35916468395659C2CBDC3A943E(L_14, __this, NULL);
		__this->____idleState_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____idleState_14), (void*)L_14);
		// _fightState = new PlayerFightState(this);
		PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD* L_15 = (PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD*)il2cpp_codegen_object_new(PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD_il2cpp_TypeInfo_var);
		PlayerFightState__ctor_m8CDCA7027AFBE0FF07F3CA82C2CEBF2021345541(L_15, __this, NULL);
		__this->____fightState_15 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fightState_15), (void*)L_15);
		// _nockdownState = new PlayerNockdownState(this, _playerAnimator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->____playerAnimator_28;
		PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE* L_17 = (PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE*)il2cpp_codegen_object_new(PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE_il2cpp_TypeInfo_var);
		PlayerNockdownState__ctor_m4BA0560905FF57A732286E4AF6A5541D4B390DA8(L_17, __this, L_16, NULL);
		__this->____nockdownState_16 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nockdownState_16), (void*)L_17);
		// _winState = new PlayerWinState(_playerAnimator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->____playerAnimator_28;
		PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC* L_19 = (PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC*)il2cpp_codegen_object_new(PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC_il2cpp_TypeInfo_var);
		PlayerWinState__ctor_m097CBFE37F00D26318B3A5B69467692E2807E4F7(L_19, L_18, NULL);
		__this->____winState_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____winState_17), (void*)L_19);
		// _waitState = new PlayerWaitState(_playerAnimator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20 = __this->____playerAnimator_28;
		PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F* L_21 = (PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F*)il2cpp_codegen_object_new(PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F_il2cpp_TypeInfo_var);
		PlayerWaitState__ctor_m8450CEB7D1CA1D66ABF5F802E7FBD109B12B1AD3(L_21, L_20, NULL);
		__this->____waitState_13 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____waitState_13), (void*)L_21);
		// _currentState = _waitState;
		PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F* L_22 = __this->____waitState_13;
		__this->____currentState_12 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentState_12), (void*)L_22);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// _currentState.Loop();
		RuntimeObject* L_0 = __this->____currentState_12;
		InterfaceActionInvoker0::Invoke(1 /* System.Void IState::Loop() */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_0);
		// if(_isWin == false && _isDead == false)
		bool L_1 = __this->____isWin_27;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		bool L_2 = __this->____isDead_26;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		// if(checkDistanceToEnemy() <= _distance && _currentState != _fightState)
		float L_4;
		L_4 = Player_checkDistanceToEnemy_m805B552E3E65E2FAE8EEF73116AC972156ADE80B(__this, NULL);
		float L_5 = __this->____distance_21;
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_6 = __this->____currentState_12;
		PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD* L_7 = __this->____fightState_15;
		G_B7_0 = ((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD*)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_1 = (bool)G_B7_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// changeState(_fightState);
		PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD* L_9 = __this->____fightState_15;
		Player_changeState_mF59CD14CF0B0B3C9026168439484BF17408C668E(__this, L_9, NULL);
	}

IL_005b:
	{
		// if(checkDistanceToEnemy() > _distance && _currentState != _idleState)
		float L_10;
		L_10 = Player_checkDistanceToEnemy_m805B552E3E65E2FAE8EEF73116AC972156ADE80B(__this, NULL);
		float L_11 = __this->____distance_21;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_12 = __this->____currentState_12;
		PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3* L_13 = __this->____idleState_14;
		G_B12_0 = ((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_12) == ((RuntimeObject*)(PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3*)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B12_0 = 0;
	}

IL_007d:
	{
		V_2 = (bool)G_B12_0;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		// changeState(_idleState);
		PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3* L_15 = __this->____idleState_14;
		Player_changeState_mF59CD14CF0B0B3C9026168439484BF17408C668E(__this, L_15, NULL);
	}

IL_0090:
	{
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void Player::GetDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GetDamage_mD1E0121E4E59C2DCECC111089F619707F1CA4C32 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___damage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* G_B6_0 = NULL;
	PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* G_B5_0 = NULL;
	{
		// _health -= damage;
		float L_0 = __this->____health_22;
		float L_1 = ___damage0;
		__this->____health_22 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if(_health < 0 && _isDead == false)
		float L_2 = __this->____health_22;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = __this->____isDead_26;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// _health = 0;
		__this->____health_22 = (0.0f);
		// _isDead = true;
		__this->____isDead_26 = (bool)1;
		// Dead();
		Player_Dead_mA0F00C0EB6A997C8821CCA15E80442BB2CBBA69E(__this, NULL);
		// PlayerDead?.Invoke();
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_5 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_6 = L_5;
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0051;
		}
	}
	{
		goto IL_0057;
	}

IL_0051:
	{
		PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_inline(G_B6_0, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		// _hpBar.UpdateHpUI(_health);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_7 = __this->____hpBar_29;
		float L_8 = __this->____health_22;
		HealthBar_UpdateHpUI_m766C28EF28A53C6472FA28462ECE562122244A79(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Player::changeState(IState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_changeState_mF59CD14CF0B0B3C9026168439484BF17408C668E (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, RuntimeObject* ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentState.Exit();
		RuntimeObject* L_0 = __this->____currentState_12;
		InterfaceActionInvoker0::Invoke(2 /* System.Void IState::Exit() */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_0);
		// newState.Enter();
		RuntimeObject* L_1 = ___newState0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void IState::Enter() */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_1);
		// _currentState = newState;
		RuntimeObject* L_2 = ___newState0;
		__this->____currentState_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentState_12), (void*)L_2);
		// }
		return;
	}
}
// System.Single Player::checkDistanceToEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_checkDistanceToEnemy_m805B552E3E65E2FAE8EEF73116AC972156ADE80B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float distance =  Vector3.Distance(_enemy.transform.position, transform.position);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = __this->____enemy_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// return distance;
		float L_6 = V_0;
		V_1 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		float L_7 = V_1;
		return L_7;
	}
}
// System.Void Player::loadPlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_loadPlayerData_m46CF2AD9C261C734406FA1FA617F8BB739ED1A1D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PlayerData data = _levelSaves.LoadPlayerData();
		LevelSaves_t9E9017CD95C505B6C7441EB7869671E8D9D4F544* L_0 = __this->____levelSaves_8;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_1;
		L_1 = LevelSaves_LoadPlayerData_mD10196434333422E898CAE8C07917A9450B65E49(L_0, NULL);
		V_0 = L_1;
		// _health = data.PlayerHealth;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_2 = V_0;
		int32_t L_3 = L_2.___PlayerHealth_1;
		__this->____health_22 = ((float)L_3);
		// _damage = data.PlayerDamage;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_4 = V_0;
		int32_t L_5 = L_4.___PlayerDamage_2;
		__this->____damage_23 = ((float)L_5);
		// }
		return;
	}
}
// System.Void Player::superPunchHit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_superPunchHit_mEEB9A82F6860EB67242D052B881AF8FA8C15D5B3 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___damage0, const RuntimeMethod* method) 
{
	{
		// GetDamage(damage);
		float L_0 = ___damage0;
		Player_GetDamage_mD1E0121E4E59C2DCECC111089F619707F1CA4C32(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Player::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_StartGame_mE23BCE89340970E3B32B873E9EBE4D4255958FC6 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// changeState(_idleState);
		PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3* L_0 = __this->____idleState_14;
		Player_changeState_mF59CD14CF0B0B3C9026168439484BF17408C668E(__this, L_0, NULL);
		// loadPlayerData();
		Player_loadPlayerData_m46CF2AD9C261C734406FA1FA617F8BB739ED1A1D(__this, NULL);
		// _hpBar.InitHpUI(_health);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_1 = __this->____hpBar_29;
		float L_2 = __this->____health_22;
		HealthBar_InitHpUI_m88A037D1C02C09638EEBC3B2BF8E4451C6FE7FB6(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Player::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Win_mD3AC67F1CD62F54CC6456A2271C1212DD5D6ABC3 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// _isWin = true;
		__this->____isWin_27 = (bool)1;
		// changeState(_winState);
		PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC* L_0 = __this->____winState_17;
		Player_changeState_mF59CD14CF0B0B3C9026168439484BF17408C668E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Player::Dead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Dead_mA0F00C0EB6A997C8821CCA15E80442BB2CBBA69E (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// ActivityRagdoll(true);
		Player_ActivityRagdoll_mAF5996A546EEA3C678022D5EB4456FC646934F17(__this, (bool)1, NULL);
		// _playerAnimator.enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____playerAnimator_28;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Player::ActivityRagdoll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ActivityRagdoll_mAF5996A546EEA3C678022D5EB4456FC646934F17 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___activity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_1 = NULL;
	bool V_2 = false;
	Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_4 = NULL;
	{
		// foreach(Rigidbody rb in _ragdollRB)
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_0 = __this->____ragdollRB_5;
		Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 L_1;
		L_1 = List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE(L_0, List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280((&V_0), Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_0010_1:
			{
				// foreach(Rigidbody rb in _ragdollRB)
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
				L_2 = Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_inline((&V_0), Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_RuntimeMethod_var);
				V_1 = L_2;
				// rb.isKinematic = !activity;
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = V_1;
				bool L_4 = ___activity0;
				Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_3, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
			}

IL_0025_1:
			{
				// foreach(Rigidbody rb in _ragdollRB)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A((&V_0), Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// _playerCollider.enabled = !activity;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6 = __this->____playerCollider_6;
		bool L_7 = ___activity0;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_6, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), NULL);
		// if(activity == true)
		bool L_8 = ___activity0;
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_00a3;
		}
	}
	{
		// foreach(Rigidbody rb in _ragdollRB)
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_10 = __this->____ragdollRB_5;
		Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 L_11;
		L_11 = List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE(L_10, List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE_RuntimeMethod_var);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280((&V_3), Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0088_1;
			}

IL_0064_1:
			{
				// foreach(Rigidbody rb in _ragdollRB)
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12;
				L_12 = Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_inline((&V_3), Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_RuntimeMethod_var);
				V_4 = L_12;
				// rb.AddForce(0, _thrust, 0, ForceMode.Impulse);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = V_4;
				float L_14 = __this->____thrust_7;
				Rigidbody_AddForce_m264F2851A456AA18D4F04B21AF23814E61A39B75(L_13, (0.0f), L_14, (0.0f), 1, NULL);
			}

IL_0088_1:
			{
				// foreach(Rigidbody rb in _ragdollRB)
				bool L_15;
				L_15 = Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A((&V_3), Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField]private List<Rigidbody> _ragdollRB = new List<Rigidbody>();
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_0 = (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*)il2cpp_codegen_object_new(List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025(L_0, List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		__this->____ragdollRB_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ragdollRB_5), (void*)L_0);
		// private bool _isDead = false;
		__this->____isDead_26 = (bool)0;
		// private bool _isWin = false;
		__this->____isWin_27 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_Multicast(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* currentDelegate = reinterpret_cast<PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_OpenInst(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_OpenStatic(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_OpenStaticInvoker(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_ClosedStaticInvoker(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7 (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Player/PlayerEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEvent__ctor_m69BDA96FE7CC43F16CB084335AC57BAA11F908B8 (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_Multicast;
}
// System.Void Player/PlayerEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9 (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Player/PlayerEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerEvent_BeginInvoke_mAF74BF6D73A9B1802EC80F2C74627E7A5D3B8058 (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Player/PlayerEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEvent_EndInvoke_m9D9EBE5D9B9AE2082B70B19E6D2C2E7E97AC4488 (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void PlayerAnimation::.ctor(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation__ctor_mE33A11C06749B8064791C4EC1F3F361CA8D50EE4 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F827D1EF36BBE2393AB3FD70C75A6CADD59F7AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlayerAnimation(Animator animator)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _currentAnimator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___animator0;
		__this->____currentAnimator_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentAnimator_1), (void*)L_0);
		// _fightLayerIndex = _currentAnimator.GetLayerIndex("PlayerUpper");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____currentAnimator_1;
		int32_t L_2;
		L_2 = Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B(L_1, _stringLiteral9F827D1EF36BBE2393AB3FD70C75A6CADD59F7AE, NULL);
		__this->____fightLayerIndex_0 = L_2;
		// }
		return;
	}
}
// System.Void PlayerAnimation::AnimateMovement(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_AnimateMovement_m541E6BEFD59FE7BC281B0787D9B0324379FAA992 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentAnimator.SetFloat("horizontal", input.x);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____currentAnimator_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___input0;
		float L_2 = L_1.___x_0;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_0, _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26, L_2, NULL);
		// _currentAnimator.SetFloat("vertical", input.y);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____currentAnimator_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___input0;
		float L_5 = L_4.___y_1;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_3, _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE, L_5, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimation::AnimateFighting(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_AnimateFighting_mF34F220F67FD6C87BE7981C9D9AF93E5E1A63839 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, float ___layerWeight0, const RuntimeMethod* method) 
{
	{
		// _currentAnimator.SetLayerWeight(_fightLayerIndex, layerWeight);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____currentAnimator_1;
		int32_t L_1 = __this->____fightLayerIndex_0;
		float L_2 = ___layerWeight0;
		Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F(L_0, L_1, L_2, NULL);
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
// System.Void PlayerFighting::InitPlayerFighting(UnityEngine.Animator,System.Single,System.Single,Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFighting_InitPlayerFighting_m5C8AF2B97BCFF8B06CF69AC5E7155B1B17CC46ED (PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___playerAnimator0, float ___damage1, float ___timeBetweenPunches2, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animation = new PlayerAnimation(playerAnimator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___playerAnimator0;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_1 = (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3*)il2cpp_codegen_object_new(PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3_il2cpp_TypeInfo_var);
		PlayerAnimation__ctor_mE33A11C06749B8064791C4EC1F3F361CA8D50EE4(L_1, L_0, NULL);
		__this->____animation_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animation_4), (void*)L_1);
		// _timeBetweenPunches = timeBetweenPunches;
		float L_2 = ___timeBetweenPunches2;
		__this->____timeBetweenPunches_6 = L_2;
		// _damage = damage;
		float L_3 = ___damage1;
		__this->____damage_5 = L_3;
		// _enemy = enemy;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_4 = ___enemy3;
		__this->____enemy_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemy_7), (void*)L_4);
		// }
		return;
	}
}
// System.Void PlayerFighting::StartFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFighting_StartFight_mC507557942748A50274754B850C19C232C772083 (PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("start");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, NULL);
		// _animation.AnimateFighting(1);
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_0 = __this->____animation_4;
		PlayerAnimation_AnimateFighting_mF34F220F67FD6C87BE7981C9D9AF93E5E1A63839(L_0, (1.0f), NULL);
		// _lastRoutine = StartCoroutine(punching());
		RuntimeObject* L_1;
		L_1 = PlayerFighting_punching_m12B413ACAA9D7AA5D77C9DD0E5E44EFBB2A26DA2(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		__this->____lastRoutine_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastRoutine_8), (void*)L_2);
		// }
		return;
	}
}
// System.Void PlayerFighting::StopFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFighting_StopFight_mAE840CF6E48B2BBFAA9ECD6336791C3AE82308DD (PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* __this, const RuntimeMethod* method) 
{
	{
		// _animation.AnimateFighting(0);
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_0 = __this->____animation_4;
		PlayerAnimation_AnimateFighting_mF34F220F67FD6C87BE7981C9D9AF93E5E1A63839(L_0, (0.0f), NULL);
		// StopCoroutine(_lastRoutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->____lastRoutine_8;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerFighting::punching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerFighting_punching_m12B413ACAA9D7AA5D77C9DD0E5E44EFBB2A26DA2 (PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3* L_0 = (U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3*)il2cpp_codegen_object_new(U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3_il2cpp_TypeInfo_var);
		U3CpunchingU3Ed__8__ctor_m70590970B99D3A7D7478E9AE9E0A7A77876EE87B(L_0, 0, NULL);
		U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerFighting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFighting__ctor_m7B3348A40A72E5F3199F4EB3BB29E1063749AB7D (PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* __this, const RuntimeMethod* method) 
{
	{
		// private Coroutine _lastRoutine = null;
		__this->____lastRoutine_8 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastRoutine_8), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerFighting/<punching>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpunchingU3Ed__8__ctor_m70590970B99D3A7D7478E9AE9E0A7A77876EE87B (U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerFighting/<punching>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpunchingU3Ed__8_System_IDisposable_Dispose_m86FC864841725CEA67FB059A9FE4E466A886EA53 (U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerFighting/<punching>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CpunchingU3Ed__8_MoveNext_mE1E14AD1F7409C7683AE9FC437120C6AFE5C7A88 (U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00aa;
	}

IL_0022:
	{
		goto IL_00b6;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float punchCount = 1;
		__this->___U3CpunchCountU3E5__1_3 = (1.0f);
		// float totalDamage = 0;
		__this->___U3CtotalDamageU3E5__2_4 = (0.0f);
		goto IL_00b2;
	}

IL_0049:
	{
		// totalDamage = _damage * punchCount;
		PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* L_2 = __this->___U3CU3E4__this_2;
		float L_3 = L_2->____damage_5;
		float L_4 = __this->___U3CpunchCountU3E5__1_3;
		__this->___U3CtotalDamageU3E5__2_4 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		// _enemy.GetDamage(totalDamage);
		PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* L_5 = __this->___U3CU3E4__this_2;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_6 = L_5->____enemy_7;
		float L_7 = __this->___U3CtotalDamageU3E5__2_4;
		Enemy_GetDamage_mFA8C3DE793019E8A1C046503DEF232D213BDCC66(L_6, L_7, NULL);
		// punchCount += 0.1f;
		float L_8 = __this->___U3CpunchCountU3E5__1_3;
		__this->___U3CpunchCountU3E5__1_3 = ((float)il2cpp_codegen_add(L_8, (0.100000001f)));
		// yield return new WaitForSeconds(_timeBetweenPunches);
		PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* L_9 = __this->___U3CU3E4__this_2;
		float L_10 = L_9->____timeBetweenPunches_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, L_10, NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00aa:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b2:
	{
		// while (true)
		V_1 = (bool)1;
		goto IL_0049;
	}

IL_00b6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		return (bool)0;
	}
}
// System.Object PlayerFighting/<punching>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CpunchingU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4D651E82BC975090CD5FA746E9D9590FEAA56AD8 (U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerFighting/<punching>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpunchingU3Ed__8_System_Collections_IEnumerator_Reset_mB7BF332D5A3F7DB8BB80AE10CF4FE1144B1A2902 (U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CpunchingU3Ed__8_System_Collections_IEnumerator_Reset_mB7BF332D5A3F7DB8BB80AE10CF4FE1144B1A2902_RuntimeMethod_var)));
	}
}
// System.Object PlayerFighting/<punching>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CpunchingU3Ed__8_System_Collections_IEnumerator_get_Current_m61C24EBD9895A6ADFD1F65A6F5562AEE6A4B5FC3 (U3CpunchingU3Ed__8_tC2841E0A34877AB53DD10E5A9FAFC52278C08ED3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// UnityEngine.InputSystem.InputActionAsset PlayerInput::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void PlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_m24FD924FB39A9A023CDEA8F6916EEC47B471B3A8 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007835EBD0D94AA60DE89B750255B7624BCA89C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public @PlayerInput()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""PlayerInput"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Player"",
		//             ""id"": ""dd0967af-daf0-4130-b169-789d1a53ce03"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Move"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""d61c9f02-9da2-4038-b917-db2d785e38bf"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""51a14b60-88c4-4b14-9fdb-960fddd17284"",
		//                     ""path"": ""<Gamepad>/leftStick"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""WASD"",
		//                     ""id"": ""a76fd8a3-16bf-4a65-baae-92d2e2927064"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""71d08c97-1225-4eb4-b385-d3ddc15b62ea"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""8f6fb9af-bbfd-4128-bd2d-c2ccc652a986"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""080fdf3d-7d00-4cac-a114-ec7cdb60137d"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""edd7428c-c553-430b-8357-18e39b0b96e9"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": []
		// }");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C(_stringLiteral007835EBD0D94AA60DE89B750255B7624BCA89C6, NULL);
		__this->___U3CassetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetU3Ek__BackingField_0), (void*)L_0);
		// m_Player = asset.FindActionMap("Player", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2;
		L_2 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, (bool)1, NULL);
		__this->___m_Player_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_1), (void*)L_2);
		// m_Player_Move = m_Player.FindAction("Move", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3 = __this->___m_Player_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_3, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, (bool)1, NULL);
		__this->___m_Player_Move_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Move_3), (void*)L_4);
		// }
		return;
	}
}
// System.Void PlayerInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Dispose_mED8AB62E19D2B6DF4610354C380D122AF54F60F5 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> PlayerInput::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 PlayerInput_get_bindingMask_mE9D628D8534C3F84B6120729E5868509A86FBF50 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1;
		L_1 = InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerInput::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_bindingMask_m32F66DD9FBB010F6F9297F345C4D3D5C5FADC354 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1 = ___value0;
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_0, L_1, NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> PlayerInput::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D PlayerInput_get_devices_m970521FB3C8BC58D21FBAD5535438670E5B5A76D (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.devices;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1;
		L_1 = InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerInput::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_devices_mF37D9BFB40C8FE4F6D6AA4B750CE412AD651D7F0 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1 = ___value0;
		InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> PlayerInput::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 PlayerInput_get_controlSchemes_m7894888243769B1B8E856FBF1525FE8818F51B50 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_1;
		L_1 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_0, NULL);
		return L_1;
	}
}
// System.Boolean PlayerInput::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_Contains_mEABB2AA00C1CC1F789CAC71C9B301622ED8EA65E (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return asset.Contains(action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = ___action0;
		bool L_2;
		L_2 = InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> PlayerInput::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_GetEnumerator_m718C2FBF1A4AE370122B0CBA506776EBF2A0C4A6 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator PlayerInput::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_System_Collections_IEnumerable_GetEnumerator_m79D4B6BDDF3AC172AEAE8B9C3E140C55CF95D54C (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = PlayerInput_GetEnumerator_m718C2FBF1A4AE370122B0CBA506776EBF2A0C4A6(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerInput::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Enable_mE3EC3D4631D753DB2B6EEA9FF407DC0CA920A2E5 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// asset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerInput::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Disable_m9DA10D3B65ECD087D0C78E77A9719D31F1EC23ED (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// asset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> PlayerInput::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_get_bindings_m18B4B8DE3CB2CE5BAA798B334C162667408E8F38 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<InputBinding> bindings => asset.bindings;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.InputSystem.InputAction PlayerInput::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerInput_FindAction_m742A99ACB197ECCC39B4F25315FA5F29832883F9 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) 
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	{
		// return asset.FindAction(actionNameOrId, throwIfNotFound);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		String_t* L_1 = ___actionNameOrId0;
		bool L_2 = ___throwIfNotFound1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 PlayerInput::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerInput_FindBinding_m6214B5095DA36F8751C0C80C7963346EBA298321 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return asset.FindBinding(bindingMask, out action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_1 = ___bindingMask0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** L_2 = ___action1;
		int32_t L_3;
		L_3 = InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// PlayerInput/PlayerActions PlayerInput::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 PlayerInput_get_Player_m0D1809F4AF04ADCB4EF11E26B5A46F38B7DCC794 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerActions @Player => new PlayerActions(this);
		PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayerActions__ctor_mFB67A0C7AC5A9A8567059747B2C20ABD72C3C2E5((&L_0), __this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: PlayerInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_pinvoke(const PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80& unmarshaled, PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_pinvoke_back(const PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_pinvoke& marshaled, PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_pinvoke_cleanup(PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: PlayerInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_com(const PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80& unmarshaled, PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_com_back(const PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_com& marshaled, PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_com_cleanup(PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_com& marshaled)
{
}
// System.Void PlayerInput/PlayerActions::.ctor(PlayerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_mFB67A0C7AC5A9A8567059747B2C20ABD72C3C2E5 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public PlayerActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public PlayerActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions__ctor_mFB67A0C7AC5A9A8567059747B2C20ABD72C3C2E5_AdjustorThunk (RuntimeObject* __this, PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___wrapper0, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	PlayerActions__ctor_mFB67A0C7AC5A9A8567059747B2C20ABD72C3C2E5(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction PlayerInput/PlayerActions::get_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Move => m_Wrapper.m_Player_Move;
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___m_Wrapper_0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Move_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerInput/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public InputActionMap Get() { return m_Wrapper.m_Player; }
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___m_Wrapper_0;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Player_1;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public InputActionMap Get() { return m_Wrapper.m_Player; }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void PlayerInput/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_m6F3D5774ADBFC24A605C290EFB34297E1B6B7E23 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E(__this, NULL);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Enable_m6F3D5774ADBFC24A605C290EFB34297E1B6B7E23_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	PlayerActions_Enable_m6F3D5774ADBFC24A605C290EFB34297E1B6B7E23(_thisAdjusted, method);
}
// System.Void PlayerInput/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_m4495A28F317429F59CC26C461292910CE6DC9F5F (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E(__this, NULL);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Disable_m4495A28F317429F59CC26C461292910CE6DC9F5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	PlayerActions_Disable_m4495A28F317429F59CC26C461292910CE6DC9F5F(_thisAdjusted, method);
}
// System.Boolean PlayerInput/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_mC7D12518775B7A6155191458B2C7B9CD14DE6A40 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E(__this, NULL);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayerActions_get_enabled_mC7D12518775B7A6155191458B2C7B9CD14DE6A40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayerActions_get_enabled_mC7D12518775B7A6155191458B2C7B9CD14DE6A40(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerInput/PlayerActions::op_Implicit(PlayerInput/PlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_op_Implicit_m00FE8104DBFBA0A8F29A97EE08F83EACE97FB3F8 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 ___set0, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E((&___set0), NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerInput/PlayerActions::SetCallbacks(PlayerInput/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_m28DF740FE33BD08EDFA5B38ADABBA046F9DA36A7 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Wrapper.m_PlayerActionsCallbackInterface != null)
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___m_Wrapper_0;
		RuntimeObject* L_1 = L_0->___m_PlayerActionsCallbackInterface_2;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007e;
		}
	}
	{
		// @Move.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92(__this, NULL);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_4 = __this->___m_Wrapper_0;
		RuntimeObject* L_5 = L_4->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_6 = L_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, L_6, (intptr_t)((void*)GetInterfaceMethodInfo(L_6, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_3, L_7, NULL);
		// @Move.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92(__this, NULL);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_9 = __this->___m_Wrapper_0;
		RuntimeObject* L_10 = L_9->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_11 = L_10;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, L_11, (intptr_t)((void*)GetInterfaceMethodInfo(L_11, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_8, L_12, NULL);
		// @Move.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92(__this, NULL);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_14 = __this->___m_Wrapper_0;
		RuntimeObject* L_15 = L_14->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_16 = L_15;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_17 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_17, L_16, (intptr_t)((void*)GetInterfaceMethodInfo(L_16, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_13, L_17, NULL);
	}

IL_007e:
	{
		// m_Wrapper.m_PlayerActionsCallbackInterface = instance;
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_18 = __this->___m_Wrapper_0;
		RuntimeObject* L_19 = ___instance0;
		L_18->___m_PlayerActionsCallbackInterface_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___m_PlayerActionsCallbackInterface_2), (void*)L_19);
		// if (instance != null)
		RuntimeObject* L_20 = ___instance0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_00df;
		}
	}
	{
		// @Move.started += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92(__this, NULL);
		RuntimeObject* L_23 = ___instance0;
		RuntimeObject* L_24 = L_23;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_25 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_25, L_24, (intptr_t)((void*)GetInterfaceMethodInfo(L_24, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_22, L_25, NULL);
		// @Move.performed += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_26;
		L_26 = PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92(__this, NULL);
		RuntimeObject* L_27 = ___instance0;
		RuntimeObject* L_28 = L_27;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_29 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_29, L_28, (intptr_t)((void*)GetInterfaceMethodInfo(L_28, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_26, L_29, NULL);
		// @Move.canceled += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_30;
		L_30 = PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92(__this, NULL);
		RuntimeObject* L_31 = ___instance0;
		RuntimeObject* L_32 = L_31;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_33 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_33, L_32, (intptr_t)((void*)GetInterfaceMethodInfo(L_32, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_30, L_33, NULL);
	}

IL_00df:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_SetCallbacks_m28DF740FE33BD08EDFA5B38ADABBA046F9DA36A7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	PlayerActions_SetCallbacks_m28DF740FE33BD08EDFA5B38ADABBA046F9DA36A7(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::InitPlayerMovement(UnityEngine.Animator,PlayerInput,System.Single,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_InitPlayerMovement_mA0E9BC30F2BB4A26CF4FC9919F35C4892DFE9E19 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___playerAnimator0, PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___playerInput1, float ___speed2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTransform3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___enemyTransform4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animation = new PlayerAnimation(playerAnimator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___playerAnimator0;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_1 = (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3*)il2cpp_codegen_object_new(PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3_il2cpp_TypeInfo_var);
		PlayerAnimation__ctor_mE33A11C06749B8064791C4EC1F3F361CA8D50EE4(L_1, L_0, NULL);
		__this->____animation_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animation_10), (void*)L_1);
		// _playerAnimator = playerAnimator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = ___playerAnimator0;
		__this->____playerAnimator_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerAnimator_9), (void*)L_2);
		// _playerInput = playerInput;
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_3 = ___playerInput1;
		__this->____playerInput_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerInput_5), (void*)L_3);
		// _speed = speed;
		float L_4 = ___speed2;
		__this->____speed_6 = L_4;
		// _playerTransform = playerTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___playerTransform3;
		__this->____playerTransform_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerTransform_7), (void*)L_5);
		// _enemyTransform = enemyTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___enemyTransform4;
		__this->____enemyTransform_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemyTransform_8), (void*)L_6);
		// }
		return;
	}
}
// System.Void PlayerMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Move_m49FF83A1018F85FA83A97516D57FE7D8331EB1C9 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// mainCamera = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___mainCamera_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_4), (void*)L_1);
		// Vector2 sticDirection = _playerInput.Player.Move.ReadValue<Vector2>();
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_2 = __this->____playerInput_5;
		PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 L_3;
		L_3 = PlayerInput_get_Player_m0D1809F4AF04ADCB4EF11E26B5A46F38B7DCC794(L_2, NULL);
		V_4 = L_3;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = PlayerActions_get_Move_mB4E38D3FB57BDAD7BC3263E4B16F2CA5C8B4FE92((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_4, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		V_0 = L_5;
		// Vector3 forwardVector = mainCamera.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___mainCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		V_1 = L_7;
		// Vector3 rightVector = mainCamera.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___mainCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_8, NULL);
		V_2 = L_9;
		// forwardVector.y = 0;
		(&V_1)->___y_3 = (0.0f);
		// rightVector.y = 0;
		(&V_2)->___y_3 = (0.0f);
		// Vector3 moveDirection = sticDirection.x * rightVector.normalized + sticDirection.y * forwardVector.normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_11, L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		float L_15 = L_14.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_17, NULL);
		V_3 = L_18;
		// _playerTransform.position += moveDirection * _speed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->____playerTransform_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_3;
		float L_23 = __this->____speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_26, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_27, NULL);
		// _playerTransform.LookAt(_enemyTransform.transform, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->____playerTransform_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->____enemyTransform_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Transform_LookAt_mF76C04C0678092D85FC58A8D983AFA3E4364A8B3(L_28, L_30, L_31, NULL);
		// _animation.AnimateMovement(sticDirection);
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_32 = __this->____animation_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_0;
		PlayerAnimation_AnimateMovement_m541E6BEFD59FE7BC281B0787D9B0324379FAA992(L_32, L_33, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB37559C5B0638161878D20E00B7C672FC38BBBAA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerSingleton::SetPlayer(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSingleton_SetPlayer_mA5961E1F090DEE4D631FF95C99632F1AD2615E05 (PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___newPlayer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(SinglePlayer == null)
		il2cpp_codegen_runtime_class_init_inline(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SinglePlayer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// SinglePlayer = newPlayer;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = ___newPlayer0;
		il2cpp_codegen_runtime_class_init_inline(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SinglePlayer_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SinglePlayer_5), (void*)L_3);
	}

IL_0016:
	{
		// Debug.Log(SinglePlayer == null);
		il2cpp_codegen_runtime_class_init_inline(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = ((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SinglePlayer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// }
		return;
	}
}
// Player PlayerSingleton::GetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* PlayerSingleton_GetPlayer_m8E367402FAC842B57A993A637B5299E3184BF01E (PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_0 = NULL;
	{
		// Debug.Log(SinglePlayer == null);
		il2cpp_codegen_runtime_class_init_inline(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SinglePlayer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// return SinglePlayer;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = ((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SinglePlayer_5;
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = V_0;
		return L_5;
	}
}
// System.Void PlayerSingleton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSingleton__ctor_m143AFC3246DE87934BD84F3559A9C755FF08D2C4 (PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PlayerSingleton::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSingleton__cctor_m28C62BEBF62D9B69D40A56334063B871A5AA55A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PlayerSingleton SingltonePlayer = new PlayerSingleton();
		PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484* L_0 = (PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484*)il2cpp_codegen_object_new(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var);
		PlayerSingleton__ctor_m143AFC3246DE87934BD84F3559A9C755FF08D2C4(L_0, NULL);
		((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SingltonePlayer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SingltonePlayer_4), (void*)L_0);
		// public static Player SinglePlayer = null;
		((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SinglePlayer_5 = (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSingleton_tADA7F8E5E66A524E024F21C67D202BDFD8FDB484_il2cpp_TypeInfo_var))->___SinglePlayer_5), (void*)(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)NULL);
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
// System.Void PlayerFightState::.ctor(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFightState__ctor_m8CDCA7027AFBE0FF07F3CA82C2CEBF2021345541 (PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___newPlayer0, const RuntimeMethod* method) 
{
	{
		// public PlayerFightState(Player newPlayer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _player = newPlayer;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ___newPlayer0;
		__this->____player_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerFightState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFightState_Enter_mA3A60E64C98568C9955F6C6FC78DA76D96730071 (PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD* __this, const RuntimeMethod* method) 
{
	{
		// _player.PlayerFighting.StartFight();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->____player_0;
		PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* L_1 = L_0->___PlayerFighting_25;
		PlayerFighting_StartFight_mC507557942748A50274754B850C19C232C772083(L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerFightState::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFightState_Loop_m71D0DBD3E4B1662B731509F01F730FE94397AD2D (PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD* __this, const RuntimeMethod* method) 
{
	{
		// _player.PlayerMovement.Move();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->____player_0;
		PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* L_1 = L_0->___PlayerMovement_20;
		PlayerMovement_Move_m49FF83A1018F85FA83A97516D57FE7D8331EB1C9(L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerFightState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFightState_Exit_mA616B3324900B89F1F171F3E0F59DE9F62A1A1AE (PlayerFightState_t9A9CA963B36E3FC6E39B007E51A1331FB6FB7BFD* __this, const RuntimeMethod* method) 
{
	{
		// _player.PlayerFighting.StopFight();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->____player_0;
		PlayerFighting_t28BCBEAFF49D923C3CBDE6F99FDD36CCEE4F567F* L_1 = L_0->___PlayerFighting_25;
		PlayerFighting_StopFight_mAE840CF6E48B2BBFAA9ECD6336791C3AE82308DD(L_1, NULL);
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
// System.Void PlayerIdleState::.ctor(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdleState__ctor_mEA6CF2A6AAA94F35916468395659C2CBDC3A943E (PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___newPlayer0, const RuntimeMethod* method) 
{
	{
		// public PlayerIdleState(Player newPlayer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _player = newPlayer;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ___newPlayer0;
		__this->____player_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerIdleState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdleState_Enter_m812BF95618FB3DA8345F64AEF9097D3ED5E24BC7 (PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerIdleState::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdleState_Loop_m5ABFAE1ECD2491A8D87B01F5A1DC0619D7974227 (PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3* __this, const RuntimeMethod* method) 
{
	{
		// _player.PlayerMovement.Move();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->____player_0;
		PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* L_1 = L_0->___PlayerMovement_20;
		PlayerMovement_Move_m49FF83A1018F85FA83A97516D57FE7D8331EB1C9(L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerIdleState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdleState_Exit_m0C1100AB7A2B7043B1C18B3D205A37578FAE807D (PlayerIdleState_tE57AC84FF279EBD64DF00582CAAF1F9C9BAAF3C3* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void PlayerNockdownState::.ctor(Player,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNockdownState__ctor_m4BA0560905FF57A732286E4AF6A5541D4B390DA8 (PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___newPlayer0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, const RuntimeMethod* method) 
{
	{
		// public PlayerNockdownState(Player newPlayer, Animator animator)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _player = newPlayer;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ___newPlayer0;
		__this->____player_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_0), (void*)L_0);
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = ___animator1;
		__this->____animator_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void PlayerNockdownState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNockdownState_Enter_m581884191622ADECA0DE16D1FB9B90572EB0562C (PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE* __this, const RuntimeMethod* method) 
{
	{
		// _player.ActivityRagdoll(true);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->____player_0;
		Player_ActivityRagdoll_mAF5996A546EEA3C678022D5EB4456FC646934F17(L_0, (bool)1, NULL);
		// _animator.enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____animator_1;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerNockdownState::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNockdownState_Loop_m62D3D7D6AAAD08BEB3DF53BEA2E22C3733D5828D (PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerNockdownState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNockdownState_Exit_m1ED99F234306C1A2311C9B01EC8F6768B9CF1048 (PlayerNockdownState_t9CDD7F9F60186B6D3F784D74C4C8C9A759C283BE* __this, const RuntimeMethod* method) 
{
	{
		// _player.ActivityRagdoll(false);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->____player_0;
		Player_ActivityRagdoll_mAF5996A546EEA3C678022D5EB4456FC646934F17(L_0, (bool)0, NULL);
		// _animator.enabled = true;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____animator_1;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
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
// System.Void PlayerWaitState::.ctor(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWaitState__ctor_m8450CEB7D1CA1D66ABF5F802E7FBD109B12B1AD3 (PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) 
{
	{
		// public PlayerWaitState(Animator animator)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___animator0;
		__this->____animator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerWaitState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWaitState_Enter_mE4606E8F8B06B79728DFEC0174DBB73F947E6C62 (PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE27A4F059A2B59DD3DE0962087CF63F894976D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.Play("Main.Wait", 0, 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_0;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_0, _stringLiteralDE27A4F059A2B59DD3DE0962087CF63F894976D2, 0, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void PlayerWaitState::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWaitState_Loop_m5FD5E6978A5C523BECD509D4ACD0F4CDAD1A080B (PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerWaitState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWaitState_Exit_m747188D78D3785E2B191E2D9DC7B27016B5AFD12 (PlayerWaitState_t8C42116438CE608267A86585CE64DF2A211C020F* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void PlayerWinState::.ctor(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWinState__ctor_m097CBFE37F00D26318B3A5B69467692E2807E4F7 (PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) 
{
	{
		// public PlayerWinState(Animator animator)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___animator0;
		__this->____animator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerWinState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWinState_Enter_m63742F1DCF992961BB7776508B7CE5BF7731B31C (PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0122430DFA810371E986B14D76392BC62DE8E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("win");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E, NULL);
		// _animator.Play("Main.Win", 0, 0.5f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_0;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_0, _stringLiteral4D0122430DFA810371E986B14D76392BC62DE8E7, 0, (0.5f), NULL);
		// }
		return;
	}
}
// System.Void PlayerWinState::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWinState_Loop_m8DCDEA8700CF646C89F9B3FCB32303CF0F910398 (PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerWinState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWinState_Exit_mD1BCF9E4A572FA1F1750791C0BA1CB50B967ECA4 (PlayerWinState_tCACBF9A3CB3B5861175152804A2CDEF67E5431FC* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void HealthBar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Awake_mD335445D153349F1E440D2FAAA2AC3CEC8803ED2 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthBar_hideHpBar_m13612B51088FD2332A77F4ECAF499F1902BAF720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthBar_showHpBar_m26924203FCE9036465B0451F731DAE98EB97E518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player.PlayerDead += hideHpBar;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_1 = (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)il2cpp_codegen_object_new(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		PlayerEvent__ctor_m69BDA96FE7CC43F16CB084335AC57BAA11F908B8(L_1, __this, (intptr_t)((void*)HealthBar_hideHpBar_m13612B51088FD2332A77F4ECAF499F1902BAF720_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4 = ((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_2, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4), (void*)((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_2, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var)));
		// Enemy.EnemyDead += hideHpBar;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_3 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_4 = (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)il2cpp_codegen_object_new(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352(L_4, __this, (intptr_t)((void*)HealthBar_hideHpBar_m13612B51088FD2332A77F4ECAF499F1902BAF720_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4 = ((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_5, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4), (void*)((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_5, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var)));
		// CamerasChanger.ChangeCameraToGamePlay += showHpBar;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_6 = ((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_7 = (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)il2cpp_codegen_object_new(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var);
		CameraEvent__ctor_mE426CEC567DA70088E24149949ABE0C9D0B719F7(L_7, __this, (intptr_t)((void*)HealthBar_showHpBar_m26924203FCE9036465B0451F731DAE98EB97E518_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_6, L_7, NULL);
		((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4 = ((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_8, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4), (void*)((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_8, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void HealthBar::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_OnDestroy_mEE9FF34E954383650E771C24B330484E840F00B4 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthBar_hideHpBar_m13612B51088FD2332A77F4ECAF499F1902BAF720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthBar_showHpBar_m26924203FCE9036465B0451F731DAE98EB97E518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player.PlayerDead -= hideHpBar;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_1 = (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)il2cpp_codegen_object_new(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		PlayerEvent__ctor_m69BDA96FE7CC43F16CB084335AC57BAA11F908B8(L_1, __this, (intptr_t)((void*)HealthBar_hideHpBar_m13612B51088FD2332A77F4ECAF499F1902BAF720_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4 = ((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_2, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4), (void*)((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_2, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var)));
		// Enemy.EnemyDead -= hideHpBar;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_3 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_4 = (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)il2cpp_codegen_object_new(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352(L_4, __this, (intptr_t)((void*)HealthBar_hideHpBar_m13612B51088FD2332A77F4ECAF499F1902BAF720_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4 = ((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_5, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4), (void*)((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_5, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var)));
		// CamerasChanger.ChangeCameraToGamePlay -= showHpBar;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_6 = ((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_7 = (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)il2cpp_codegen_object_new(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var);
		CameraEvent__ctor_mE426CEC567DA70088E24149949ABE0C9D0B719F7(L_7, __this, (intptr_t)((void*)HealthBar_showHpBar_m26924203FCE9036465B0451F731DAE98EB97E518_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_6, L_7, NULL);
		((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4 = ((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_8, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4), (void*)((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_8, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void HealthBar::InitHpUI(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_InitHpUI_m88A037D1C02C09638EEBC3B2BF8E4451C6FE7FB6 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___maxHp0, const RuntimeMethod* method) 
{
	{
		// _maxHp = maxHp;
		float L_0 = ___maxHp0;
		__this->____maxHp_7 = L_0;
		// _hpText.text = _maxHp.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____hpText_5;
		float* L_2 = (&__this->____maxHp_7);
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void HealthBar::UpdateHpUI(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_UpdateHpUI_m766C28EF28A53C6472FA28462ECE562122244A79 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___newHp0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float newAmount = newHp/_maxHp;
		float L_0 = ___newHp0;
		float L_1 = __this->____maxHp_7;
		V_0 = ((float)(L_0/L_1));
		// _hpBarImage.fillAmount = newAmount;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->____hpBarImage_4;
		float L_3 = V_0;
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_2, L_3, NULL);
		// _hpText.text = newHp.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____hpText_5;
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___newHp0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void HealthBar::showHpBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_showHpBar_m26924203FCE9036465B0451F731DAE98EB97E518 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	{
		// _hpBar.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____hpBar_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void HealthBar::hideHpBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_hideHpBar_m13612B51088FD2332A77F4ECAF499F1902BAF720 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	{
		// _hpBar.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____hpBar_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HealthBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar__ctor_m6874A2796BC8D86E80B24E349500653ACFA80662 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Awake_m8D57F9A6CDDF4400F8E75A66BA0719BE0A125A3D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_hideAllUI_m85B3D8B3EB347DFC145AF9EBD88FAECED03C3FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_showFailUI_m36BD36D93C85C89D2B3B458A81E45401CE846F38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_showGamePlayUI_mB3DB9C2B86EE624FFE73B7B9D7CAB0BAE3D0CEAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_showWinUI_m112818BFD21D8411B50371ACFEA3E789C51A9DF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player.PlayerDead += showFailUI;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_1 = (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)il2cpp_codegen_object_new(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		PlayerEvent__ctor_m69BDA96FE7CC43F16CB084335AC57BAA11F908B8(L_1, __this, (intptr_t)((void*)UIController_showFailUI_m36BD36D93C85C89D2B3B458A81E45401CE846F38_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4 = ((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_2, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4), (void*)((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_2, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var)));
		// Enemy.EnemyDead += showWinUI;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_3 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_4 = (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)il2cpp_codegen_object_new(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352(L_4, __this, (intptr_t)((void*)UIController_showWinUI_m112818BFD21D8411B50371ACFEA3E789C51A9DF9_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4 = ((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_5, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4), (void*)((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_5, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var)));
		// CamerasChanger.ChangeCameraToGamePlay += showGamePlayUI;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_6 = ((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_7 = (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)il2cpp_codegen_object_new(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var);
		CameraEvent__ctor_mE426CEC567DA70088E24149949ABE0C9D0B719F7(L_7, __this, (intptr_t)((void*)UIController_showGamePlayUI_mB3DB9C2B86EE624FFE73B7B9D7CAB0BAE3D0CEAB_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_6, L_7, NULL);
		((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4 = ((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_8, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4), (void*)((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_8, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var)));
		// CamerasChanger.ChangingCameraToGamePlay += hideAllUI;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_9 = ((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangingCameraToGamePlay_5;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_10 = (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)il2cpp_codegen_object_new(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var);
		CameraEvent__ctor_mE426CEC567DA70088E24149949ABE0C9D0B719F7(L_10, __this, (intptr_t)((void*)UIController_hideAllUI_m85B3D8B3EB347DFC145AF9EBD88FAECED03C3FDF_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangingCameraToGamePlay_5 = ((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_11, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangingCameraToGamePlay_5), (void*)((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_11, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var)));
		// _currentUI = _marketUI;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____marketUI_6;
		__this->____currentUI_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentUI_9), (void*)L_12);
		// }
		return;
	}
}
// System.Void UIController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OnDestroy_m4B7FA244EC6551821F7F7B3E71BD4FD64E175B66 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_hideAllUI_m85B3D8B3EB347DFC145AF9EBD88FAECED03C3FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_showFailUI_m36BD36D93C85C89D2B3B458A81E45401CE846F38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_showGamePlayUI_mB3DB9C2B86EE624FFE73B7B9D7CAB0BAE3D0CEAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_showWinUI_m112818BFD21D8411B50371ACFEA3E789C51A9DF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player.PlayerDead -= showFailUI;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4;
		PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* L_1 = (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)il2cpp_codegen_object_new(PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var);
		PlayerEvent__ctor_m69BDA96FE7CC43F16CB084335AC57BAA11F908B8(L_1, __this, (intptr_t)((void*)UIController_showFailUI_m36BD36D93C85C89D2B3B458A81E45401CE846F38_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4 = ((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_2, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___PlayerDead_4), (void*)((PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7*)CastclassSealed((RuntimeObject*)L_2, PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7_il2cpp_TypeInfo_var)));
		// Enemy.EnemyDead -= showWinUI;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_3 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4;
		EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* L_4 = (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)il2cpp_codegen_object_new(EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var);
		EnemyEvent__ctor_mA2C08936898C4635F3EB703D247D770FEF87A352(L_4, __this, (intptr_t)((void*)UIController_showWinUI_m112818BFD21D8411B50371ACFEA3E789C51A9DF9_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4 = ((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_5, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___EnemyDead_4), (void*)((EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D*)CastclassSealed((RuntimeObject*)L_5, EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D_il2cpp_TypeInfo_var)));
		// CamerasChanger.ChangeCameraToGamePlay -= showGamePlayUI;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_6 = ((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_7 = (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)il2cpp_codegen_object_new(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var);
		CameraEvent__ctor_mE426CEC567DA70088E24149949ABE0C9D0B719F7(L_7, __this, (intptr_t)((void*)UIController_showGamePlayUI_mB3DB9C2B86EE624FFE73B7B9D7CAB0BAE3D0CEAB_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_6, L_7, NULL);
		((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4 = ((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_8, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangeCameraToGamePlay_4), (void*)((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_8, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var)));
		// CamerasChanger.ChangingCameraToGamePlay -= hideAllUI;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_9 = ((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangingCameraToGamePlay_5;
		CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* L_10 = (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)il2cpp_codegen_object_new(CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var);
		CameraEvent__ctor_mE426CEC567DA70088E24149949ABE0C9D0B719F7(L_10, __this, (intptr_t)((void*)UIController_hideAllUI_m85B3D8B3EB347DFC145AF9EBD88FAECED03C3FDF_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_9, L_10, NULL);
		((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangingCameraToGamePlay_5 = ((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_11, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_StaticFields*)il2cpp_codegen_static_fields_for(CamerasChanger_t346ED0070076BBDEAF8C9BE937A590BA65FD1B15_il2cpp_TypeInfo_var))->___ChangingCameraToGamePlay_5), (void*)((CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405*)CastclassSealed((RuntimeObject*)L_11, CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UIController::showMarketUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_showMarketUI_mA0606BF66F1243F9F71586F86033D88959433FB5 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// _currentUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____currentUI_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _marketUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____marketUI_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// _currentUI = _marketUI;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____marketUI_6;
		__this->____currentUI_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentUI_9), (void*)L_2);
		// }
		return;
	}
}
// System.Void UIController::showGamePlayUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_showGamePlayUI_mB3DB9C2B86EE624FFE73B7B9D7CAB0BAE3D0CEAB (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// _currentUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____currentUI_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _gamePlayUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____gamePlayUI_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// _currentUI = _gamePlayUI;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____gamePlayUI_5;
		__this->____currentUI_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentUI_9), (void*)L_2);
		// }
		return;
	}
}
// System.Void UIController::showFailUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_showFailUI_m36BD36D93C85C89D2B3B458A81E45401CE846F38 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// _currentUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____currentUI_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _failUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____failUI_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// _currentUI = _failUI;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____failUI_7;
		__this->____currentUI_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentUI_9), (void*)L_2);
		// }
		return;
	}
}
// System.Void UIController::showWinUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_showWinUI_m112818BFD21D8411B50371ACFEA3E789C51A9DF9 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// _currentUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____currentUI_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _winUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____winUI_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// _currentUI = _winUI;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____winUI_8;
		__this->____currentUI_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentUI_9), (void*)L_2);
		// }
		return;
	}
}
// System.Void UIController::hideAllUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_hideAllUI_m85B3D8B3EB347DFC145AF9EBD88FAECED03C3FDF (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// _currentUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____currentUI_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIController::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_RestartGame_m79F5F74879B996AB943874DD2FA6580416B0FFFC (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void UIController::StartGamePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_StartGamePlay_m7C0CA6A92E27D0E9CA7025D9F5912744A4FA4AAC (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* G_B2_0 = NULL;
	UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* G_B1_0 = NULL;
	{
		// StartGame?.Invoke();
		UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* L_0 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___StartGame_4;
		UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_mFF218DBC8CCEFE36AAC295D2376501658CD8B7A2 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// private GameObject _currentUI = null;
		__this->____currentUI_9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentUI_9), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_Multicast(UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* currentDelegate = reinterpret_cast<UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_OpenInst(UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_OpenStatic(UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_OpenStaticInvoker(UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_ClosedStaticInvoker(UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21 (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UIController/UIEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEvent__ctor_m4C5372CA4E05AE5615EB07EBBB4847FF0A053379 (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_Multicast;
}
// System.Void UIController/UIEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584 (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UIController/UIEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIEvent_BeginInvoke_mA26CA18DF269D98A4A07975385E226F3FA854B50 (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UIController/UIEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEvent_EndInvoke_m72F00996489FC8A285D0E5BABFC6EFC401D2847B (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyEvent_Invoke_mF21A32DAC42E7587919F56284D3858BDA7435920_inline (EnemyEvent_tE060039366AEAF7E3B44464A5E5553F4FB04317D* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatPunchEvent_Invoke_mF5FEB490B20B9E4AD3CD69E0456892D5831C12A1_inline (FloatPunchEvent_t5AA50156D11C7BBA313DAC6409C4920AD13F5A21* __this, float ___damage0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___damage0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PunchEvent_Invoke_mCD89E11364FC46AD2EB8BE2F9DE596D810FBBA00_inline (PunchEvent_t493E835289A113B574AE42DF059650B581E1E82E* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraEvent_Invoke_mE9E063A9D8D3A2831C32DE8A49AF490958D03F22_inline (CameraEvent_t30D0C397CD376886414ADF59CD3FED013503F405* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerEvent_Invoke_m0D34B90F2E075EF4C7622DED0EB7E997BA404DE9_inline (PlayerEvent_t0666209265F85382F10C933A89784A1C14887EE7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BindingMask;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_0 = __this->___m_BindingMask_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIEvent_Invoke_mCD5D1ABD9EEE38C90252C33FF122E84741A8C584_inline (UIEvent_t3454E43F9F0B12440CF11666D480082C260C1E21* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
