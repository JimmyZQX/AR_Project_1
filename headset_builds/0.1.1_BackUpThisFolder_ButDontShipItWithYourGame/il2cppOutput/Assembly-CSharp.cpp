#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,OVRPassthroughLayer/PassthroughMeshInstance>
struct Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2;
// System.Collections.Generic.IList`1<OVRBone>
struct IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC;
// System.Collections.Generic.IList`1<OVRBoneCapsule>
struct IList_1_tFFC33E12DD64329607D75CE292E627E8EE4B5870;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<OVRBone>
struct List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71;
// System.Collections.Generic.List`1<OVRBoneCapsule>
struct List_1_t961B63350603C7ECDDDCD6793D2157F9BE734EEA;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<OVRInput/OVRControllerBase>
struct List_1_t86E75F5042EFDDED6CC644C92E125E248E01D577;
// System.Collections.Generic.List`1<OVRPassthroughLayer/DeferredPassthroughMeshAddition>
struct List_1_tE96A44A704D2D0F763BBB5A6DA3B61D6F4322B3D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// OVRHand[]
struct OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839;
// OVRSkeleton[]
struct OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.SphereCollider[]
struct SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.TextMesh[]
struct TextMeshU5BU5D_tB11D93924D72DFB58F3CA12C9A37D6480B62C4B2;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// OVRInput/HapticInfo[]
struct HapticInfoU5BU5D_tD7F089695199232CD57B8C3C73F549036B5BC2CB;
// OVRInput/OpenVRControllerDetails[]
struct OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4;
// OVRPlugin/Bone[]
struct BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784;
// OVRPlugin/BoneCapsule[]
struct BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44;
// OVRPlugin/Quatf[]
struct QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF;
// OVRPlugin/TrackingConfidence[]
struct TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// AugmentedObject
struct AugmentedObject_t0CBF487F7FE0CF799607E204DB091174E52BF43E;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BrushController
struct BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
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
// EnableUnpremultipliedAlpha
struct EnableUnpremultipliedAlpha_t16B442BC747B81FD6E8EC9DA15C3D1E38D4F5DBF;
// Flashlight
struct Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471;
// FlashlightController
struct FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GrabObject
struct GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// HandMeshMask
struct HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825;
// HandMeshUI
struct HandMeshUI_tA9E45B97E256958006F46E223574B6B59C875526;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// OVRBone
struct OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A;
// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9;
// OVRHand
struct OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509;
// OVROverlay
struct OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D;
// OVRPassthroughLayer
struct OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F;
// OVRSkeleton
struct OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectManipulator
struct ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37;
// OverlayPassthrough
struct OverlayPassthrough_tB1254B7C8C316EE465B3D82B5DADBBB4B9DFD657;
// PassthroughBrush
struct PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F;
// PassthroughController
struct PassthroughController_t9CFF0C42C4A8A23558F84FD91439EABAE9B8D58B;
// PassthroughProjectionSurface
struct PassthroughProjectionSurface_tB27B44A28747BCB4495785540EBA23852E5C2BCA;
// PassthroughStyler
struct PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E;
// PassthroughSurface
struct PassthroughSurface_t5DEF489C691B1678CA206E5B904FF22B8FCD4264;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// SPPquad
struct SPPquad_tD70A2698723A9430EE9B2CE7BC816F928DF020DE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneSampler
struct SceneSampler_tFF2381F55831EBDE8EE29061F1914F893DFF1932;
// SelectivePassthroughExperience
struct SelectivePassthroughExperience_t84E3D92EBFC4E0E85C43ED4F488E29F19DE72C6B;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// BrushController/<FadeCameraClearColor>d__8
struct U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B;
// BrushController/<FadeSphere>d__9
struct U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// FlashlightController/<FadeLighting>d__17
struct U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// GrabObject/GrabbedObject
struct GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA;
// GrabObject/ReleasedObject
struct ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3;
// GrabObject/SetCursorPosition
struct SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// OVRSkeleton/IOVRSkeletonDataProvider
struct IOVRSkeletonDataProvider_t3C0B47D347E1D2C6FC2A1AB062490F8792E4F460;
// ObjectManipulator/<StartDemo>d__23
struct U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67;
// PassthroughStyler/<FadeToCurrentStyle>d__18
struct U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A;
// PassthroughStyler/<FadeToDefaultPassthrough>d__19
struct U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Controller_tBCAA59EAD9BFE2381E974A48B203D044B6CE1ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral019246066B5E16B1BFDC59D722DAD704A68A3BD0;
IL2CPP_EXTERN_C String_t* _stringLiteral0DBC684C5809081E5C16423955A5853D6626D36D;
IL2CPP_EXTERN_C String_t* _stringLiteral12BB5E0F43A088955B851C4E109E86C78AD45626;
IL2CPP_EXTERN_C String_t* _stringLiteral18135B337564B147F8F3C857356E9A8C8B6236C6;
IL2CPP_EXTERN_C String_t* _stringLiteral2874EF83369B550F7785E38A29E43121158E6B67;
IL2CPP_EXTERN_C String_t* _stringLiteral454D6933DAC8514D38FC97BDCED23ADB660BE446;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77D85A50F9BBB0344E75546C4B240B84801DD73A;
IL2CPP_EXTERN_C String_t* _stringLiteral79A62EF1CA5619E1F18101A859B2610828ED3A89;
IL2CPP_EXTERN_C String_t* _stringLiteral7E0D888AD2B37768070F720A6324E0D300832EFB;
IL2CPP_EXTERN_C String_t* _stringLiteral9669A52A6DAFB3BFCBE9076ECD66349FF639A62D;
IL2CPP_EXTERN_C String_t* _stringLiteral9C28C75BF544CA27623067FCCCB3AE7EA4ECA1E9;
IL2CPP_EXTERN_C String_t* _stringLiteralA6FA72EC45FD0E48D18B8AAD3CF4675AC718B834;
IL2CPP_EXTERN_C String_t* _stringLiteralA83365DE47F10CF708EE1858733DE1AA5560C7D5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF1B522ED0EDFDFA9B9158B84A066DD4DF20743D3;
IL2CPP_EXTERN_C const RuntimeMethod* AugmentedObject_Grab_m18C04DE3FB099FE53D1872C233618369D4834A49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AugmentedObject_Release_m0B126A1B0B9270E6C9D67BA02F97D39BCAFC85AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrushController_Grab_m3A959DAEBB63FB6D9D74122DB59E036CE34AA564_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BrushController_Release_m9F9205A72FFC2AD41D6DDC85455D3D978EE17395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_m0543730C95B7A7C25271B600774F5D229A8E8A35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlashlightController_Grab_m55741248764824A1FC8DE504F8B949935DEFB72F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlashlightController_Release_m04247B1A1F7224465E07C18D7C32272B3E6537D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m14CB596F15E21C110AF10B5B7E0C475BE9D25744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PassthroughStyler_Cursor_mE779FE7AEE92BA34E25D05902D96ABD5C9BB67C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PassthroughStyler_Grab_m50A0EA69866DFA4487D1132BC7DA0EE567366B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PassthroughStyler_Release_m8AC3DC4B2DD06AF399D8F46D7E8E7F26A7FDC547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SPPquad_Grab_m55429F1BD5186B99DF1EB3F7B25EAFBAFDA916D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SPPquad_Release_m6091EB850236963B2CFC76A385AA3B32154B7F9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeCameraClearColorU3Ed__8_System_Collections_IEnumerator_Reset_m40F836AFF44ED04B7814E3C0A0CD5E7E65E99A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeLightingU3Ed__17_System_Collections_IEnumerator_Reset_mB3A3C20291867B9574DCB3AA343FAA2CC100EE58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeSphereU3Ed__9_System_Collections_IEnumerator_Reset_m20AF78BF1DAD8EF72A8B965BDBE3AEE1F178FEDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeToCurrentStyleU3Ed__18_System_Collections_IEnumerator_Reset_m3D2231C570E15E4D7B50039331C5F9ED7A611A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeToDefaultPassthroughU3Ed__19_System_Collections_IEnumerator_Reset_m2CAC05E5C8C9E0BDA4DC8FAE769DA1FC864C2BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartDemoU3Ed__23_System_Collections_IEnumerator_Reset_m38A51810105F9FD357C6D6B1222AC599C89228EE_RuntimeMethod_var;
struct BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74;
struct Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839;
struct OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952;
struct TextMeshU5BU5D_tB11D93924D72DFB58F3CA12C9A37D6480B62C4B2;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

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

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// OVRBone
struct OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A  : public RuntimeObject
{
	// OVRSkeleton/BoneId OVRBone::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.Int16 OVRBone::<ParentBoneIndex>k__BackingField
	int16_t ___U3CParentBoneIndexU3Ek__BackingField_1;
	// UnityEngine.Transform OVRBone::<Transform>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTransformU3Ek__BackingField_2;
};

// OVRInput
struct OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A  : public RuntimeObject
{
};

struct OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_StaticFields
{
	// System.Single OVRInput::AXIS_AS_BUTTON_THRESHOLD
	float ___AXIS_AS_BUTTON_THRESHOLD_0;
	// System.Single OVRInput::AXIS_DEADZONE_THRESHOLD
	float ___AXIS_DEADZONE_THRESHOLD_1;
	// System.Collections.Generic.List`1<OVRInput/OVRControllerBase> OVRInput::controllers
	List_1_t86E75F5042EFDDED6CC644C92E125E248E01D577* ___controllers_2;
	// OVRInput/Controller OVRInput::activeControllerType
	int32_t ___activeControllerType_3;
	// OVRInput/Controller OVRInput::connectedControllerTypes
	int32_t ___connectedControllerTypes_4;
	// OVRPlugin/Step OVRInput::stepType
	int32_t ___stepType_5;
	// System.Int32 OVRInput::fixedUpdateCount
	int32_t ___fixedUpdateCount_6;
	// System.Boolean OVRInput::_pluginSupportsActiveController
	bool ____pluginSupportsActiveController_7;
	// System.Boolean OVRInput::_pluginSupportsActiveControllerCached
	bool ____pluginSupportsActiveControllerCached_8;
	// System.Version OVRInput::_pluginSupportsActiveControllerMinVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____pluginSupportsActiveControllerMinVersion_9;
	// System.Int32 OVRInput::NUM_HAPTIC_CHANNELS
	int32_t ___NUM_HAPTIC_CHANNELS_10;
	// OVRInput/HapticInfo[] OVRInput::hapticInfos
	HapticInfoU5BU5D_tD7F089695199232CD57B8C3C73F549036B5BC2CB* ___hapticInfos_11;
	// System.Single OVRInput::OPENVR_MAX_HAPTIC_AMPLITUDE
	float ___OPENVR_MAX_HAPTIC_AMPLITUDE_12;
	// System.Single OVRInput::HAPTIC_VIBRATION_DURATION_SECONDS
	float ___HAPTIC_VIBRATION_DURATION_SECONDS_13;
	// System.String OVRInput::OPENVR_TOUCH_NAME
	String_t* ___OPENVR_TOUCH_NAME_14;
	// System.String OVRInput::OPENVR_VIVE_CONTROLLER_NAME
	String_t* ___OPENVR_VIVE_CONTROLLER_NAME_15;
	// System.String OVRInput::OPENVR_WINDOWSMR_CONTROLLER_NAME
	String_t* ___OPENVR_WINDOWSMR_CONTROLLER_NAME_16;
	// OVRInput/OpenVRControllerDetails[] OVRInput::openVRControllerDetails
	OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4* ___openVRControllerDetails_17;
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

// ObjectManipulator/<StartDemo>d__23
struct U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67  : public RuntimeObject
{
	// System.Int32 ObjectManipulator/<StartDemo>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ObjectManipulator/<StartDemo>d__23::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ObjectManipulator ObjectManipulator/<StartDemo>d__23::<>4__this
	ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* ___U3CU3E4__this_2;
	// System.Single ObjectManipulator/<StartDemo>d__23::<timer>5__2
	float ___U3CtimerU3E5__2_3;
	// System.Single ObjectManipulator/<StartDemo>d__23::<fadeTime>5__3
	float ___U3CfadeTimeU3E5__3_4;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// OVRPlugin/Quatf
struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A 
{
	// System.Single OVRPlugin/Quatf::x
	float ___x_0;
	// System.Single OVRPlugin/Quatf::y
	float ___y_1;
	// System.Single OVRPlugin/Quatf::z
	float ___z_2;
	// System.Single OVRPlugin/Quatf::w
	float ___w_3;
};

struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A_StaticFields
{
	// OVRPlugin/Quatf OVRPlugin/Quatf::identity
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A ___identity_4;
};

// OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F 
{
	// OVRPlugin/SkeletonType OVRPlugin/Skeleton2::Type
	int32_t ___Type_0;
	// System.UInt32 OVRPlugin/Skeleton2::NumBones
	uint32_t ___NumBones_1;
	// System.UInt32 OVRPlugin/Skeleton2::NumBoneCapsules
	uint32_t ___NumBoneCapsules_2;
	// OVRPlugin/Bone[] OVRPlugin/Skeleton2::Bones
	BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* ___Bones_3;
	// OVRPlugin/BoneCapsule[] OVRPlugin/Skeleton2::BoneCapsules
	BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* ___BoneCapsules_4;
};
// Native definition for P/Invoke marshalling of OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F_marshaled_pinvoke
{
	int32_t ___Type_0;
	uint32_t ___NumBones_1;
	uint32_t ___NumBoneCapsules_2;
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* ___Bones_3;
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* ___BoneCapsules_4;
};
// Native definition for COM marshalling of OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F_marshaled_com
{
	int32_t ___Type_0;
	uint32_t ___NumBones_1;
	uint32_t ___NumBoneCapsules_2;
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* ___Bones_3;
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* ___BoneCapsules_4;
};

// OVRPlugin/Vector3f
struct Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 
{
	// System.Single OVRPlugin/Vector3f::x
	float ___x_0;
	// System.Single OVRPlugin/Vector3f::y
	float ___y_1;
	// System.Single OVRPlugin/Vector3f::z
	float ___z_2;
};

struct Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562_StaticFields
{
	// OVRPlugin/Vector3f OVRPlugin/Vector3f::zero
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___zero_3;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// BrushController/<FadeCameraClearColor>d__8
struct U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B  : public RuntimeObject
{
	// System.Int32 BrushController/<FadeCameraClearColor>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BrushController/<FadeCameraClearColor>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single BrushController/<FadeCameraClearColor>d__8::fadeTime
	float ___fadeTime_2;
	// UnityEngine.Color BrushController/<FadeCameraClearColor>d__8::newColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor_3;
	// System.Single BrushController/<FadeCameraClearColor>d__8::<timer>5__2
	float ___U3CtimerU3E5__2_4;
	// UnityEngine.Color BrushController/<FadeCameraClearColor>d__8::<currentColor>5__3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CcurrentColorU3E5__3_5;
};

// BrushController/<FadeSphere>d__9
struct U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67  : public RuntimeObject
{
	// System.Int32 BrushController/<FadeSphere>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BrushController/<FadeSphere>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BrushController BrushController/<FadeSphere>d__9::<>4__this
	BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* ___U3CU3E4__this_2;
	// System.Single BrushController/<FadeSphere>d__9::fadeTime
	float ___fadeTime_3;
	// UnityEngine.Color BrushController/<FadeSphere>d__9::newColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor_4;
	// System.Boolean BrushController/<FadeSphere>d__9::disableOnFinish
	bool ___disableOnFinish_5;
	// System.Single BrushController/<FadeSphere>d__9::<timer>5__2
	float ___U3CtimerU3E5__2_6;
	// UnityEngine.Color BrushController/<FadeSphere>d__9::<currentColor>5__3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CcurrentColorU3E5__3_7;
};

// FlashlightController/<FadeLighting>d__17
struct U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA  : public RuntimeObject
{
	// System.Int32 FlashlightController/<FadeLighting>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FlashlightController/<FadeLighting>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FlashlightController FlashlightController/<FadeLighting>d__17::<>4__this
	FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* ___U3CU3E4__this_2;
	// System.Single FlashlightController/<FadeLighting>d__17::fadeTime
	float ___fadeTime_3;
	// UnityEngine.Color FlashlightController/<FadeLighting>d__17::newColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor_4;
	// System.Single FlashlightController/<FadeLighting>d__17::sceneLightIntensity
	float ___sceneLightIntensity_5;
	// System.Single FlashlightController/<FadeLighting>d__17::<timer>5__2
	float ___U3CtimerU3E5__2_6;
	// UnityEngine.Color FlashlightController/<FadeLighting>d__17::<currentColor>5__3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CcurrentColorU3E5__3_7;
	// System.Single FlashlightController/<FadeLighting>d__17::<currentLight>5__4
	float ___U3CcurrentLightU3E5__4_8;
};

// OVRPlugin/Posef
struct Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 
{
	// OVRPlugin/Quatf OVRPlugin/Posef::Orientation
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A ___Orientation_0;
	// OVRPlugin/Vector3f OVRPlugin/Posef::Position
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___Position_1;
};

struct Posef_t51A2C10B4094B44A8D3C1913292B839172887B61_StaticFields
{
	// OVRPlugin/Posef OVRPlugin/Posef::identity
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___identity_2;
};

// PassthroughStyler/<FadeToCurrentStyle>d__18
struct U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A  : public RuntimeObject
{
	// System.Int32 PassthroughStyler/<FadeToCurrentStyle>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PassthroughStyler/<FadeToCurrentStyle>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PassthroughStyler PassthroughStyler/<FadeToCurrentStyle>d__18::<>4__this
	PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* ___U3CU3E4__this_2;
	// System.Single PassthroughStyler/<FadeToCurrentStyle>d__18::fadeTime
	float ___fadeTime_3;
	// System.Single PassthroughStyler/<FadeToCurrentStyle>d__18::<timer>5__2
	float ___U3CtimerU3E5__2_4;
	// System.Single PassthroughStyler/<FadeToCurrentStyle>d__18::<brightness>5__3
	float ___U3CbrightnessU3E5__3_5;
	// System.Single PassthroughStyler/<FadeToCurrentStyle>d__18::<contrast>5__4
	float ___U3CcontrastU3E5__4_6;
	// UnityEngine.Color PassthroughStyler/<FadeToCurrentStyle>d__18::<edgeCol>5__5
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CedgeColU3E5__5_7;
};

// PassthroughStyler/<FadeToDefaultPassthrough>d__19
struct U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61  : public RuntimeObject
{
	// System.Int32 PassthroughStyler/<FadeToDefaultPassthrough>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PassthroughStyler/<FadeToDefaultPassthrough>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PassthroughStyler PassthroughStyler/<FadeToDefaultPassthrough>d__19::<>4__this
	PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* ___U3CU3E4__this_2;
	// System.Single PassthroughStyler/<FadeToDefaultPassthrough>d__19::fadeTime
	float ___fadeTime_3;
	// System.Single PassthroughStyler/<FadeToDefaultPassthrough>d__19::<timer>5__2
	float ___U3CtimerU3E5__2_4;
	// System.Single PassthroughStyler/<FadeToDefaultPassthrough>d__19::<brightness>5__3
	float ___U3CbrightnessU3E5__3_5;
	// System.Single PassthroughStyler/<FadeToDefaultPassthrough>d__19::<contrast>5__4
	float ___U3CcontrastU3E5__4_6;
	// UnityEngine.Color PassthroughStyler/<FadeToDefaultPassthrough>d__19::<edgeCol>5__5
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CedgeColU3E5__5_7;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552 
{
	// OVRPlugin/HandStatus OVRPlugin/HandState::Status
	int32_t ___Status_0;
	// OVRPlugin/Posef OVRPlugin/HandState::RootPose
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	// OVRPlugin/Quatf[] OVRPlugin/HandState::BoneRotations
	QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* ___BoneRotations_2;
	// OVRPlugin/HandFingerPinch OVRPlugin/HandState::Pinches
	int32_t ___Pinches_3;
	// System.Single[] OVRPlugin/HandState::PinchStrength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___PinchStrength_4;
	// OVRPlugin/Posef OVRPlugin/HandState::PointerPose
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	// System.Single OVRPlugin/HandState::HandScale
	float ___HandScale_6;
	// OVRPlugin/TrackingConfidence OVRPlugin/HandState::HandConfidence
	int32_t ___HandConfidence_7;
	// OVRPlugin/TrackingConfidence[] OVRPlugin/HandState::FingerConfidences
	TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37* ___FingerConfidences_8;
	// System.Double OVRPlugin/HandState::RequestedTimeStamp
	double ___RequestedTimeStamp_9;
	// System.Double OVRPlugin/HandState::SampleTimeStamp
	double ___SampleTimeStamp_10;
};
// Native definition for P/Invoke marshalling of OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552_marshaled_pinvoke
{
	int32_t ___Status_0;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* ___BoneRotations_2;
	int32_t ___Pinches_3;
	Il2CppSafeArray/*NONE*/* ___PinchStrength_4;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	float ___HandScale_6;
	int32_t ___HandConfidence_7;
	int32_t* ___FingerConfidences_8;
	double ___RequestedTimeStamp_9;
	double ___SampleTimeStamp_10;
};
// Native definition for COM marshalling of OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552_marshaled_com
{
	int32_t ___Status_0;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* ___BoneRotations_2;
	int32_t ___Pinches_3;
	Il2CppSafeArray/*NONE*/* ___PinchStrength_4;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	float ___HandScale_6;
	int32_t ___HandConfidence_7;
	int32_t* ___FingerConfidences_8;
	double ___RequestedTimeStamp_9;
	double ___SampleTimeStamp_10;
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

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GrabObject/GrabbedObject
struct GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA  : public MulticastDelegate_t
{
};

// GrabObject/ReleasedObject
struct ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3  : public MulticastDelegate_t
{
};

// GrabObject/SetCursorPosition
struct SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C  : public MulticastDelegate_t
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

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// AugmentedObject
struct AugmentedObject_t0CBF487F7FE0CF799607E204DB091174E52BF43E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRInput/Controller AugmentedObject::controllerHand
	int32_t ___controllerHand_4;
	// UnityEngine.Transform AugmentedObject::shadow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shadow_5;
	// System.Boolean AugmentedObject::groundShadow
	bool ___groundShadow_6;
};

// BrushController
struct BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PassthroughBrush BrushController::brush
	PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* ___brush_4;
	// UnityEngine.MeshRenderer BrushController::backgroundSphere
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___backgroundSphere_5;
	// System.Collections.IEnumerator BrushController::grabRoutine
	RuntimeObject* ___grabRoutine_6;
	// System.Collections.IEnumerator BrushController::releaseRoutine
	RuntimeObject* ___releaseRoutine_7;
};

// EnableUnpremultipliedAlpha
struct EnableUnpremultipliedAlpha_t16B442BC747B81FD6E8EC9DA15C3D1E38D4F5DBF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Flashlight
struct Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Flashlight::lightVolume
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lightVolume_4;
	// UnityEngine.Light Flashlight::spotlight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___spotlight_5;
	// UnityEngine.GameObject Flashlight::bulbGlow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bulbGlow_6;
};

// FlashlightController
struct FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Light FlashlightController::sceneLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___sceneLight_4;
	// UnityEngine.Transform FlashlightController::flashlightRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___flashlightRoot_5;
	// UnityEngine.Vector3 FlashlightController::localPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition_6;
	// UnityEngine.Quaternion FlashlightController::localRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___localRotation_7;
	// UnityEngine.TextMesh FlashlightController::infoText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___infoText_8;
	// GrabObject FlashlightController::externalController
	GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* ___externalController_9;
	// OVRSkeleton[] FlashlightController::skeletons
	OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* ___skeletons_10;
	// OVRHand[] FlashlightController::hands
	OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839* ___hands_11;
	// System.Int32 FlashlightController::handIndex
	int32_t ___handIndex_12;
	// System.Boolean FlashlightController::pinching
	bool ___pinching_13;
};

// GrabObject
struct GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String GrabObject::ObjectName
	String_t* ___ObjectName_4;
	// System.String GrabObject::ObjectInstructions
	String_t* ___ObjectInstructions_5;
	// GrabObject/ManipulationType GrabObject::objectManipulationType
	int32_t ___objectManipulationType_6;
	// System.Boolean GrabObject::showLaserWhileGrabbed
	bool ___showLaserWhileGrabbed_7;
	// UnityEngine.Quaternion GrabObject::grabbedRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___grabbedRotation_8;
	// GrabObject/GrabbedObject GrabObject::GrabbedObjectDelegate
	GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* ___GrabbedObjectDelegate_9;
	// GrabObject/ReleasedObject GrabObject::ReleasedObjectDelegate
	ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* ___ReleasedObjectDelegate_10;
	// GrabObject/SetCursorPosition GrabObject::CursorPositionDelegate
	SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* ___CursorPositionDelegate_11;
};

// HandMeshMask
struct HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRSkeleton HandMeshMask::referenceHand
	OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___referenceHand_4;
	// UnityEngine.Material HandMeshMask::maskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___maskMaterial_5;
	// System.Int32 HandMeshMask::radialDivisions
	int32_t ___radialDivisions_6;
	// System.Single HandMeshMask::borderSize
	float ___borderSize_7;
	// System.Single HandMeshMask::fingerTaper
	float ___fingerTaper_8;
	// System.Single HandMeshMask::fingerTipLength
	float ___fingerTipLength_9;
	// System.Single HandMeshMask::webOffset
	float ___webOffset_10;
	// System.Single HandMeshMask::handScale
	float ___handScale_11;
	// UnityEngine.GameObject HandMeshMask::maskMeshObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___maskMeshObject_12;
	// UnityEngine.Mesh HandMeshMask::maskMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___maskMesh_13;
	// UnityEngine.Vector3[] HandMeshMask::handVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___handVertices_14;
	// UnityEngine.Vector2[] HandMeshMask::handUVs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___handUVs_15;
	// UnityEngine.Color32[] HandMeshMask::handColors
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___handColors_16;
	// System.Int32[] HandMeshMask::handTriangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___handTriangles_17;
	// System.Int32 HandMeshMask::vertCounter
	int32_t ___vertCounter_18;
	// System.Int32 HandMeshMask::triCounter
	int32_t ___triCounter_19;
};

// HandMeshUI
struct HandMeshUI_tA9E45B97E256958006F46E223574B6B59C875526  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SphereCollider[] HandMeshUI::knobs
	SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952* ___knobs_4;
	// UnityEngine.TextMesh[] HandMeshUI::readouts
	TextMeshU5BU5D_tB11D93924D72DFB58F3CA12C9A37D6480B62C4B2* ___readouts_5;
	// System.Int32 HandMeshUI::rightHeldKnob
	int32_t ___rightHeldKnob_6;
	// System.Int32 HandMeshUI::leftHeldKnob
	int32_t ___leftHeldKnob_7;
	// OVRSkeleton HandMeshUI::leftHand
	OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___leftHand_8;
	// OVRSkeleton HandMeshUI::rightHand
	OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___rightHand_9;
	// HandMeshMask HandMeshUI::leftMask
	HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* ___leftMask_10;
	// HandMeshMask HandMeshUI::rightMask
	HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* ___rightMask_11;
};

// OVRHand
struct OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRHand/Hand OVRHand::HandType
	int32_t ___HandType_4;
	// UnityEngine.Transform OVRHand::_pointerPoseRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____pointerPoseRoot_5;
	// UnityEngine.GameObject OVRHand::_pointerPoseGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____pointerPoseGO_6;
	// OVRPlugin/HandState OVRHand::_handState
	HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552 ____handState_7;
	// System.Boolean OVRHand::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_8;
	// System.Boolean OVRHand::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_9;
	// System.Boolean OVRHand::<IsTracked>k__BackingField
	bool ___U3CIsTrackedU3Ek__BackingField_10;
	// System.Boolean OVRHand::<IsSystemGestureInProgress>k__BackingField
	bool ___U3CIsSystemGestureInProgressU3Ek__BackingField_11;
	// System.Boolean OVRHand::<IsPointerPoseValid>k__BackingField
	bool ___U3CIsPointerPoseValidU3Ek__BackingField_12;
	// UnityEngine.Transform OVRHand::<PointerPose>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CPointerPoseU3Ek__BackingField_13;
	// System.Single OVRHand::<HandScale>k__BackingField
	float ___U3CHandScaleU3Ek__BackingField_14;
	// OVRHand/TrackingConfidence OVRHand::<HandConfidence>k__BackingField
	int32_t ___U3CHandConfidenceU3Ek__BackingField_15;
	// System.Boolean OVRHand::<IsDominantHand>k__BackingField
	bool ___U3CIsDominantHandU3Ek__BackingField_16;
};

// OVRPassthroughLayer
struct OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRPassthroughLayer/ProjectionSurfaceType OVRPassthroughLayer::projectionSurfaceType
	int32_t ___projectionSurfaceType_4;
	// OVROverlay/OverlayType OVRPassthroughLayer::overlayType
	int32_t ___overlayType_5;
	// System.Int32 OVRPassthroughLayer::compositionDepth
	int32_t ___compositionDepth_6;
	// System.Boolean OVRPassthroughLayer::hidden
	bool ___hidden_7;
	// System.Boolean OVRPassthroughLayer::overridePerLayerColorScaleAndOffset
	bool ___overridePerLayerColorScaleAndOffset_8;
	// UnityEngine.Vector4 OVRPassthroughLayer::colorScale
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___colorScale_9;
	// UnityEngine.Vector4 OVRPassthroughLayer::colorOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___colorOffset_10;
	// OVRPassthroughLayer/ColorMapEditorType OVRPassthroughLayer::colorMapEditorType_
	int32_t ___colorMapEditorType__11;
	// UnityEngine.Gradient OVRPassthroughLayer::colorMapEditorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___colorMapEditorGradient_12;
	// UnityEngine.Gradient OVRPassthroughLayer::colorMapEditorGradientOld
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___colorMapEditorGradientOld_13;
	// System.Single OVRPassthroughLayer::colorMapEditorContrast
	float ___colorMapEditorContrast_14;
	// System.Single OVRPassthroughLayer::colorMapEditorContrast_
	float ___colorMapEditorContrast__15;
	// System.Single OVRPassthroughLayer::colorMapEditorBrightness
	float ___colorMapEditorBrightness_16;
	// System.Single OVRPassthroughLayer::colorMapEditorBrightness_
	float ___colorMapEditorBrightness__17;
	// System.Single OVRPassthroughLayer::colorMapEditorPosterize
	float ___colorMapEditorPosterize_18;
	// System.Single OVRPassthroughLayer::colorMapEditorPosterize_
	float ___colorMapEditorPosterize__19;
	// OVRCameraRig OVRPassthroughLayer::cameraRig
	OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ___cameraRig_20;
	// System.Boolean OVRPassthroughLayer::cameraRigInitialized
	bool ___cameraRigInitialized_21;
	// UnityEngine.GameObject OVRPassthroughLayer::auxGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___auxGameObject_22;
	// OVROverlay OVRPassthroughLayer::passthroughOverlay
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* ___passthroughOverlay_23;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,OVRPassthroughLayer/PassthroughMeshInstance> OVRPassthroughLayer::surfaceGameObjects
	Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2* ___surfaceGameObjects_24;
	// System.Collections.Generic.List`1<OVRPassthroughLayer/DeferredPassthroughMeshAddition> OVRPassthroughLayer::deferredSurfaceGameObjects
	List_1_tE96A44A704D2D0F763BBB5A6DA3B61D6F4322B3D* ___deferredSurfaceGameObjects_25;
	// System.Single OVRPassthroughLayer::textureOpacity_
	float ___textureOpacity__26;
	// System.Boolean OVRPassthroughLayer::edgeRenderingEnabled_
	bool ___edgeRenderingEnabled__27;
	// UnityEngine.Color OVRPassthroughLayer::edgeColor_
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___edgeColor__28;
	// OVRPlugin/InsightPassthroughColorMapType OVRPassthroughLayer::colorMapType
	int32_t ___colorMapType_29;
	// System.Byte[] OVRPassthroughLayer::colorMapData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___colorMapData_30;
	// System.Byte[] OVRPassthroughLayer::tmpColorMapData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tmpColorMapData_31;
	// System.Runtime.InteropServices.GCHandle OVRPassthroughLayer::colorMapDataHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___colorMapDataHandle_32;
	// System.Boolean OVRPassthroughLayer::styleDirty
	bool ___styleDirty_33;
};

struct OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_StaticFields
{
	// UnityEngine.Gradient OVRPassthroughLayer::colorMapNeutralGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___colorMapNeutralGradient_34;
};

// OVRSkeleton
struct OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRSkeleton/SkeletonType OVRSkeleton::_skeletonType
	int32_t ____skeletonType_4;
	// OVRSkeleton/IOVRSkeletonDataProvider OVRSkeleton::_dataProvider
	RuntimeObject* ____dataProvider_5;
	// System.Boolean OVRSkeleton::_updateRootPose
	bool ____updateRootPose_6;
	// System.Boolean OVRSkeleton::_updateRootScale
	bool ____updateRootScale_7;
	// System.Boolean OVRSkeleton::_enablePhysicsCapsules
	bool ____enablePhysicsCapsules_8;
	// System.Boolean OVRSkeleton::_applyBoneTranslations
	bool ____applyBoneTranslations_9;
	// UnityEngine.GameObject OVRSkeleton::_bonesGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____bonesGO_10;
	// UnityEngine.GameObject OVRSkeleton::_bindPosesGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____bindPosesGO_11;
	// UnityEngine.GameObject OVRSkeleton::_capsulesGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____capsulesGO_12;
	// System.Collections.Generic.List`1<OVRBone> OVRSkeleton::_bones
	List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71* ____bones_13;
	// System.Collections.Generic.List`1<OVRBone> OVRSkeleton::_bindPoses
	List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71* ____bindPoses_14;
	// System.Collections.Generic.List`1<OVRBoneCapsule> OVRSkeleton::_capsules
	List_1_t961B63350603C7ECDDDCD6793D2157F9BE734EEA* ____capsules_15;
	// OVRPlugin/Skeleton2 OVRSkeleton::_skeleton
	Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F ____skeleton_16;
	// UnityEngine.Quaternion OVRSkeleton::wristFixupRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___wristFixupRotation_17;
	// System.Boolean OVRSkeleton::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_18;
	// System.Boolean OVRSkeleton::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_19;
	// System.Boolean OVRSkeleton::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_20;
	// System.Collections.Generic.IList`1<OVRBone> OVRSkeleton::<Bones>k__BackingField
	RuntimeObject* ___U3CBonesU3Ek__BackingField_21;
	// System.Collections.Generic.IList`1<OVRBone> OVRSkeleton::<BindPoses>k__BackingField
	RuntimeObject* ___U3CBindPosesU3Ek__BackingField_22;
	// System.Collections.Generic.IList`1<OVRBoneCapsule> OVRSkeleton::<Capsules>k__BackingField
	RuntimeObject* ___U3CCapsulesU3Ek__BackingField_23;
	// System.Int32 OVRSkeleton::<SkeletonChangedCount>k__BackingField
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField_24;
};

// ObjectManipulator
struct ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRInput/Controller ObjectManipulator::controller
	int32_t ___controller_4;
	// UnityEngine.GameObject ObjectManipulator::hoverObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hoverObject_5;
	// UnityEngine.GameObject ObjectManipulator::grabObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grabObject_6;
	// System.Single ObjectManipulator::grabTime
	float ___grabTime_7;
	// UnityEngine.Vector3 ObjectManipulator::localGrabOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localGrabOffset_8;
	// UnityEngine.Quaternion ObjectManipulator::localGrabRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___localGrabRotation_9;
	// UnityEngine.Vector3 ObjectManipulator::camGrabPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___camGrabPosition_10;
	// UnityEngine.Quaternion ObjectManipulator::camGrabRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___camGrabRotation_11;
	// UnityEngine.Vector3 ObjectManipulator::handGrabPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___handGrabPosition_12;
	// UnityEngine.Quaternion ObjectManipulator::handGrabRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___handGrabRotation_13;
	// UnityEngine.Vector3 ObjectManipulator::cursorPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition_14;
	// System.Single ObjectManipulator::rotationOffset
	float ___rotationOffset_15;
	// UnityEngine.LineRenderer ObjectManipulator::laser
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___laser_16;
	// UnityEngine.Transform ObjectManipulator::objectInfo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objectInfo_17;
	// UnityEngine.TextMesh ObjectManipulator::objectNameLabel
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___objectNameLabel_18;
	// UnityEngine.TextMesh ObjectManipulator::objectInstructionsLabel
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___objectInstructionsLabel_19;
	// UnityEngine.UI.Image ObjectManipulator::objectInfoBG
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___objectInfoBG_20;
	// UnityEngine.GameObject ObjectManipulator::demoObjects
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___demoObjects_21;
	// OVRPassthroughLayer ObjectManipulator::passthrough
	OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* ___passthrough_22;
};

// OverlayPassthrough
struct OverlayPassthrough_tB1254B7C8C316EE465B3D82B5DADBBB4B9DFD657  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRPassthroughLayer OverlayPassthrough::passthroughLayer
	OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* ___passthroughLayer_4;
};

// PassthroughBrush
struct PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRInput/Controller PassthroughBrush::controllerHand
	int32_t ___controllerHand_4;
	// UnityEngine.GameObject PassthroughBrush::lineSegmentPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lineSegmentPrefab_5;
	// UnityEngine.GameObject PassthroughBrush::lineContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lineContainer_6;
	// System.Boolean PassthroughBrush::forceActive
	bool ___forceActive_7;
	// UnityEngine.LineRenderer PassthroughBrush::currentLineSegment
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___currentLineSegment_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> PassthroughBrush::inkPositions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___inkPositions_9;
	// System.Single PassthroughBrush::minInkDist
	float ___minInkDist_10;
	// System.Single PassthroughBrush::strokeWidth
	float ___strokeWidth_11;
	// System.Single PassthroughBrush::strokeLength
	float ___strokeLength_12;
	// PassthroughBrush/BrushState PassthroughBrush::brushStatus
	int32_t ___brushStatus_13;
};

// PassthroughController
struct PassthroughController_t9CFF0C42C4A8A23558F84FD91439EABAE9B8D58B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRPassthroughLayer PassthroughController::passthroughLayer
	OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* ___passthroughLayer_4;
};

// PassthroughProjectionSurface
struct PassthroughProjectionSurface_tB27B44A28747BCB4495785540EBA23852E5C2BCA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRPassthroughLayer PassthroughProjectionSurface::passthroughLayer
	OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* ___passthroughLayer_4;
	// UnityEngine.MeshFilter PassthroughProjectionSurface::projectionObject
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___projectionObject_5;
	// UnityEngine.MeshRenderer PassthroughProjectionSurface::quadOutline
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___quadOutline_6;
};

// PassthroughStyler
struct PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRInput/Controller PassthroughStyler::controllerHand
	int32_t ___controllerHand_4;
	// OVRPassthroughLayer PassthroughStyler::passthroughLayer
	OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* ___passthroughLayer_5;
	// System.Collections.IEnumerator PassthroughStyler::fadeIn
	RuntimeObject* ___fadeIn_6;
	// System.Collections.IEnumerator PassthroughStyler::fadeOut
	RuntimeObject* ___fadeOut_7;
	// UnityEngine.RectTransform[] PassthroughStyler::menuOptions
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ___menuOptions_8;
	// UnityEngine.RectTransform PassthroughStyler::colorWheel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___colorWheel_9;
	// UnityEngine.Texture2D PassthroughStyler::colorTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___colorTexture_10;
	// UnityEngine.Vector3 PassthroughStyler::cursorPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition_11;
	// System.Boolean PassthroughStyler::settingColor
	bool ___settingColor_12;
	// UnityEngine.Color PassthroughStyler::savedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___savedColor_13;
	// System.Single PassthroughStyler::savedBrightness
	float ___savedBrightness_14;
	// System.Single PassthroughStyler::savedContrast
	float ___savedContrast_15;
	// UnityEngine.CanvasGroup PassthroughStyler::mainCanvas
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___mainCanvas_16;
	// UnityEngine.GameObject[] PassthroughStyler::compactObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___compactObjects_17;
};

// PassthroughSurface
struct PassthroughSurface_t5DEF489C691B1678CA206E5B904FF22B8FCD4264  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRPassthroughLayer PassthroughSurface::passthroughLayer
	OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* ___passthroughLayer_4;
	// UnityEngine.MeshFilter PassthroughSurface::projectionObject
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___projectionObject_5;
};

// SPPquad
struct SPPquad_tD70A2698723A9430EE9B2CE7BC816F928DF020DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRPassthroughLayer SPPquad::passthroughLayer
	OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* ___passthroughLayer_4;
	// UnityEngine.MeshFilter SPPquad::projectionObject
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___projectionObject_5;
	// OVRInput/Controller SPPquad::controllerHand
	int32_t ___controllerHand_6;
};

// SceneSampler
struct SceneSampler_tFF2381F55831EBDE8EE29061F1914F893DFF1932  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SceneSampler::currentSceneIndex
	int32_t ___currentSceneIndex_4;
	// UnityEngine.GameObject SceneSampler::displayText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___displayText_5;
};

// SelectivePassthroughExperience
struct SelectivePassthroughExperience_t84E3D92EBFC4E0E85C43ED4F488E29F19DE72C6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SelectivePassthroughExperience::leftMaskObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftMaskObject_4;
	// UnityEngine.GameObject SelectivePassthroughExperience::rightMaskObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightMaskObject_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// OVRSkeleton[]
struct OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* m_Items[1];

	inline OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OVRHand[]
struct OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* m_Items[1];

	inline OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// UnityEngine.SphereCollider[]
struct SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952  : public RuntimeArray
{
	ALIGN_FIELD (8) SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* m_Items[1];

	inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.TextMesh[]
struct TextMeshU5BU5D_tB11D93924D72DFB58F3CA12C9A37D6480B62C4B2  : public RuntimeArray
{
	ALIGN_FIELD (8) TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* m_Items[1];

	inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<GrabObject>()
inline GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void GrabObject/GrabbedObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbedObject__ctor_m9B22A387B9350AA1E0D2DECB2DE2D7302D944786 (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void GrabObject/ReleasedObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleasedObject__ctor_mE889B3F2A51BDB89BCEC05EF41D36A3AFC980E10 (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean OVRInput::GetUp(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_GetUp_m11DA43291070262B20D13A3E599EBE0C6A2D02D5 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Void AugmentedObject::ToggleShadowType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AugmentedObject_ToggleShadowType_m16A0545A6B6D17BB02E23A7FB53D844F8622A095 (AugmentedObject_t0CBF487F7FE0CF799607E204DB091174E52BF43E* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator BrushController::FadeSphere(UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BrushController_FadeSphere_m72B1053C48CA32980BD11B664B9530649F689788 (BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor0, float ___fadeTime1, bool ___disableOnFinish2, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void BrushController/<FadeCameraClearColor>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeCameraClearColorU3Ed__8__ctor_mCD9B8B3B110D871F5E361E6E12487CF3A42D12E0 (U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void BrushController/<FadeSphere>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSphereU3Ed__9__ctor_m3169BA799A2089CF95C17DF71279966DE93E51E3 (U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void OVRManager::set_eyeFovPremultipliedAlphaModeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRManager_set_eyeFovPremultipliedAlphaModeEnabled_m3FB6C95CB509E5EFF8254267725DEB816584A073 (bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Flashlight>()
inline Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Flashlight::EnableFlashlight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flashlight_EnableFlashlight_m39842B1224D46F448F3246A514B8DEA6C7AA3814 (Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* __this, bool ___doEnable0, const RuntimeMethod* method) ;
// System.Void FlashlightController::FindHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController_FindHands_mB9388B1B32F8F42BCF392F9ED79103C72F188CA1 (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, const RuntimeMethod* method) ;
// OVRInput/Controller OVRInput::GetActiveController()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline (const RuntimeMethod* method) ;
// System.Void FlashlightController::AlignWithHand(OVRHand,OVRSkeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController_AlignWithHand_m3E7F5B3D29CD54F21A8A483FA3A7A015E1CB5A25 (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* ___hand0, OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___skeleton1, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void FlashlightController::AlignWithController(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController_AlignWithController_m1F7D3D7614A672C2BEACB72F04AB8C739F809D93 (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, int32_t ___controller0, const RuntimeMethod* method) ;
// System.Boolean OVRInput::GetUp(OVRInput/RawButton,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_GetUp_m744B92CAFECBDE18143C162274A3AD02BC210559 (int32_t ___rawMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Void Flashlight::ToggleFlashlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flashlight_ToggleFlashlight_m5EB1E2D1DFCE9D37D45EFFE9FB19DA02F1BD276A (Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<OVRSkeleton>()
inline OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* Object_FindObjectsOfType_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m14CB596F15E21C110AF10B5B7E0C475BE9D25744 (const RuntimeMethod* method)
{
	return ((  OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// T UnityEngine.Component::GetComponent<OVRHand>()
inline OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean OVRHand::GetFingerIsPinching(OVRHand/HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, int32_t ___finger0, const RuntimeMethod* method) ;
// System.Single OVRHand::GetFingerPinchStrength(OVRHand/HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRHand_GetFingerPinchStrength_mF6517B5CA9FF87146ECDAED8914DE2EFA29BE4E6 (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, int32_t ___finger0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<OVRBone> OVRSkeleton::get_Bones()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform OVRBone::get_Transform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline (OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 OVRInput::GetLocalControllerPosition(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRInput_GetLocalControllerPosition_m5630E056EBDF6BD0A317D19DE90AFC0C80233B69 (int32_t ___controllerType0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion OVRInput::GetLocalControllerRotation(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 OVRInput_GetLocalControllerRotation_mD0D287501357996403558E697CC65161E0B5D51A (int32_t ___controllerType0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FlashlightController::FadeLighting(UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlashlightController_FadeLighting_m1BFD9F5BF2D831AB35F87CF392104FEB26018B47 (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor0, float ___sceneLightIntensity1, float ___fadeTime2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) ;
// System.Void FlashlightController/<FadeLighting>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeLightingU3Ed__17__ctor_m92D0FC0FC597BB610DF8057D8B33465D6D346D66 (U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void GrabObject/GrabbedObject::Invoke(OVRInput/Controller)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_inline (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, int32_t ___grabHand0, const RuntimeMethod* method) ;
// System.Void GrabObject/ReleasedObject::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_inline (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, const RuntimeMethod* method) ;
// System.Void GrabObject/SetCursorPosition::Invoke(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_inline (SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Single OVRHand::get_HandScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OVRHand_get_HandScale_mF8A57EFEAA517331FBA93803439620C8EE94CE52_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) ;
// System.Void HandMeshMask::CreateHandMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask_CreateHandMesh_mA8BE9C3CAAE9CD6CCF820790843E00D625F1286F (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, const RuntimeMethod* method) ;
// System.Void HandMeshMask::AddKnuckleMesh(System.Int32,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564 (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, int32_t ___knuckleVerts0, float ___point1scale1, float ___point2scale2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point13, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point24, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void HandMeshMask::AddPalmMesh(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask_AddPalmMesh_mEB5A28F96491FC8721B1741E5CD24BD3470186C4 (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, int32_t ___knuckleVerts0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::OrthoNormalize(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_OrthoNormalize_m44FC8B03D0B4E3A36AD1FBE3764E78376E7ED1CF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___tangent1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void HandMeshMask::AddVertex(UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550 (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void HandMeshUI::SetSliderValue(System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshUI_SetSliderValue_m9B751073A2781E0A16E07C86FF40975FE1E306B9 (HandMeshUI_tA9E45B97E256958006F46E223574B6B59C875526* __this, int32_t ___sliderID0, float ___value1, bool ___isNormalized2, const RuntimeMethod* method) ;
// System.Void HandMeshUI::CheckForHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshUI_CheckForHands_m5C070FDB64A936C24309B76018940F607943FA6A (HandMeshUI_tA9E45B97E256958006F46E223574B6B59C875526* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ObjectManipulator::StartDemo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectManipulator_StartDemo_m0FFD506D769E53DA7249CE19DDC373BBD75F6802 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, const RuntimeMethod* method) ;
// UnityEngine.Font UnityEngine.TextMesh::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* TextMesh_get_font_m94D3A4C8E4DB171B74E4FF00AC7EC27F3D495664 (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Font::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Font_get_material_m61ABDEC14C6D659DDC5A4F080023699116C17364 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* __this, const RuntimeMethod* method) ;
// System.Void ObjectManipulator::FindHoverObject(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_FindHoverObject_mD36FA3CA19DD081444BA3991300C49D9046E1FB7 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___controllerPos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___controllerRot1, const RuntimeMethod* method) ;
// System.Boolean OVRInput::GetDown(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_GetDown_mB545BE1CFB07364E7DE792A9CD7C4B614736525A (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Void ObjectManipulator::GrabHoverObject(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_GrabHoverObject_m09DB5539C45636C069F70674DC4C227A38DD8AC9 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grbObj0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___controllerPos1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___controllerRot2, const RuntimeMethod* method) ;
// System.Void ObjectManipulator::ManipulateObject(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_ManipulateObject_m4C26DB7F3DBDE7C3CF51F8D76C1E9FBD1070A127 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___controllerPos1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___controllerRot2, const RuntimeMethod* method) ;
// System.Boolean OVRInput::Get(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Void ObjectManipulator::ReleaseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_ReleaseObject_m523C25C4DC25E7328C0E5A9DC7656828CF98F113 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GrabObject>()
inline GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GrabObject::Grab(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_Grab_mD9EF49274AB5B829403244704E99B5D9D1E268F6 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, int32_t ___grabHand0, const RuntimeMethod* method) ;
// System.Void ObjectManipulator::AssignInstructions(GrabObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_AssignInstructions_m6E1ACD52C1382B530968DFCA4A7943BD51B65F0A (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* ___targetObject0, const RuntimeMethod* method) ;
// System.Void GrabObject::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_Release_m436A4F1D4784EBAC0381F430B78E45763C23E0EF (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) ;
// System.Void ObjectManipulator/<StartDemo>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartDemoU3Ed__23__ctor_m12403FDDEB2C7E3D78B91B5074609B24356EA708 (U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_RaycastAll_mB136F6D0B51A4F9BE0B2B6EBE2D833C1B0B2B8E2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_m91C80EEBDE4096D5648F78E48772E44474CD62F2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Void GrabObject::CursorPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_CursorPos_mE7703B3C6FEA5EB1DF457A368E579E6E307C1BF6 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPos0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 OVRInput::Get(OVRInput/Axis2D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInput_Get_m5DC55CC9D553D98F95937AB80D77C1120BB56CC6 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void ObjectManipulator::ClampGrabOffset(UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_ClampGrabOffset_m3C05C7CC516676554B1718DB24562B0B21888515 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___localOffset0, float ___thumbY1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ObjectManipulator::ClampScale(UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ObjectManipulator_ClampScale_m8A1DF0D63CDBEDB49F04219BD301EC0BA0CB1B60 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___thumb1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Boolean OVRInput::Get(OVRInput/RawButton,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_Get_mE1592108DD22A90FA3B639CE2C0C8252456978BA (int32_t ___rawMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<OVRPassthroughLayer>()
inline OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void OVRPassthroughLayer::set_textureOpacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPassthroughLayer_set_textureOpacity_mEACE3A3ACF194F76196F3E2CAD1955755CB053CC (OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void PassthroughBrush::UndoInkLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughBrush_UndoInkLine_m7EEAD7C142125FF7A48F33B977041CD805E4728B (PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* __this, const RuntimeMethod* method) ;
// System.Void PassthroughBrush::StartLine(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughBrush_StartLine_m56ED493AE63D35FD26B6CCF277FFE10C0381792E (PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inkPos0, const RuntimeMethod* method) ;
// System.Void PassthroughBrush::UpdateLine(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughBrush_UpdateLine_m264FA6BEC44B965FE247E3677B172D25C9E3A0E7 (PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inkPos0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.LineRenderer::get_startWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LineRenderer_get_startWidth_mBCCB6AAF695BDAC66A971805A8E141E2757133FA (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_mD057CF0F1810C00D0F9E98A5CC5599213CF167DB_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) ;
// System.Void OVRPassthroughLayer::set_edgeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPassthroughLayer_set_edgeColor_mA3002CE6A3BAF02E96A4F6C96456C285C3CC76C2 (OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void OVRPassthroughLayer::SetColorMapControls(System.Single,System.Single,System.Single,UnityEngine.Gradient,OVRPassthroughLayer/ColorMapEditorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPassthroughLayer_SetColorMapControls_m09E4D3B393E14D8044CAD156C495BF59A6B82A73 (OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* __this, float ___contrast0, float ___brightness1, float ___posterize2, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient3, int32_t ___colorMapType4, const RuntimeMethod* method) ;
// System.Void OVRPassthroughLayer::AddSurfaceGeometry(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPassthroughLayer_AddSurfaceGeometry_mF2776AE6648CC7D9965F7B034DFCC43754B5C1DC (OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, bool ___updateTransform1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void OVRPassthroughLayer::RemoveSurfaceGeometry(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPassthroughLayer_RemoveSurfaceGeometry_mC4E7F005E96534F8039A5E474A396FD897F7A705 (OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) ;
// System.Void GrabObject/SetCursorPosition::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCursorPosition__ctor_m9A55912654491E64786814ADBA0C7EF86F8B7246 (SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void PassthroughStyler::ShowFullMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_ShowFullMenu_m6892265715E3CA3314F8E1F9B429FD8482E534BF (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, bool ___doShow0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void OVRPassthroughLayer::set_colorMapEditorType(OVRPassthroughLayer/ColorMapEditorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPassthroughLayer_set_colorMapEditorType_m29A2DD086E958C85617DFB8782A4070020D8C8B5 (OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void PassthroughStyler::GetColorFromWheel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_GetColorFromWheel_mE2E626FCA9318AEA470176ADF4AE1D7019E73353 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PassthroughStyler::FadeToCurrentStyle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PassthroughStyler_FadeToCurrentStyle_m90283EA370FECB79C4798986865C56C9D5569562 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, float ___fadeTime0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PassthroughStyler::FadeToDefaultPassthrough(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PassthroughStyler_FadeToDefaultPassthrough_m2ACDFD225651A64DBFCAD680B1F80AC68D68DFC5 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, float ___fadeTime0, const RuntimeMethod* method) ;
// System.Void PassthroughStyler/<FadeToCurrentStyle>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToCurrentStyleU3Ed__18__ctor_m25CFB19646B43BF313EE7061F3E9C67E17527763 (U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PassthroughStyler/<FadeToDefaultPassthrough>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToDefaultPassthroughU3Ed__19__ctor_mDD53ACD2920F366C9D702DF7AE761A682839BA1B (U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void OVRPassthroughLayer::set_edgeRenderingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPassthroughLayer_set_edgeRenderingEnabled_mE8DE1C2F5009B6F7ECCBE62B3C8B1FAA1690F1DC (OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color OVRPassthroughLayer::get_edgeColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F OVRPassthroughLayer_get_edgeColor_m7310EE93BAEA4840CEF66DA2BA583544DA65DB98_inline (OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCountInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCountInBuildSettings_m7C49222A2A771B11C1CAD7D743BDDF8F8F39E685 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<OVRPassthroughLayer>()
inline OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* Component_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_m0543730C95B7A7C25271B600774F5D229A8E8A35 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_mE35BBC0ADCBAA2E71E90C080D7A8A4A19AABCC74 (float ___H0, float ___S1, float ___V2, bool ___hdr3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void AugmentedObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AugmentedObject_Start_m4045AFA836974B82BC9313FA44C63F525806CE8C (AugmentedObject_t0CBF487F7FE0CF799607E204DB091174E52BF43E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AugmentedObject_Grab_m18C04DE3FB099FE53D1872C233618369D4834A49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AugmentedObject_Release_m0B126A1B0B9270E6C9D67BA02F97D39BCAFC85AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<GrabObject>())
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_0;
		L_0 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		// GetComponent<GrabObject>().GrabbedObjectDelegate += Grab;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_2;
		L_2 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_3 = L_2;
		NullCheck(L_3);
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_4 = L_3->___GrabbedObjectDelegate_9;
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_5 = (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)il2cpp_codegen_object_new(GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GrabbedObject__ctor_m9B22A387B9350AA1E0D2DECB2DE2D7302D944786(L_5, __this, (intptr_t)((void*)AugmentedObject_Grab_m18C04DE3FB099FE53D1872C233618369D4834A49_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___GrabbedObjectDelegate_9 = ((GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)CastclassSealed((RuntimeObject*)L_6, GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___GrabbedObjectDelegate_9), (void*)((GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)CastclassSealed((RuntimeObject*)L_6, GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var)));
		// GetComponent<GrabObject>().ReleasedObjectDelegate += Release;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_7;
		L_7 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_8 = L_7;
		NullCheck(L_8);
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_9 = L_8->___ReleasedObjectDelegate_10;
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_10 = (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)il2cpp_codegen_object_new(ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ReleasedObject__ctor_mE889B3F2A51BDB89BCEC05EF41D36A3AFC980E10(L_10, __this, (intptr_t)((void*)AugmentedObject_Release_m0B126A1B0B9270E6C9D67BA02F97D39BCAFC85AC_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_9, L_10, NULL);
		NullCheck(L_8);
		L_8->___ReleasedObjectDelegate_10 = ((ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)CastclassSealed((RuntimeObject*)L_11, ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___ReleasedObjectDelegate_10), (void*)((ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)CastclassSealed((RuntimeObject*)L_11, ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var)));
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void AugmentedObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AugmentedObject_Update_m7A4FD53DEFA7800B2A8A208CCEF19B3BFE97C79A (AugmentedObject_t0CBF487F7FE0CF799607E204DB091174E52BF43E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (controllerHand != OVRInput.Controller.None)
		int32_t L_0 = __this->___controllerHand_4;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// if (OVRInput.GetUp(OVRInput.Button.One, controllerHand))
		int32_t L_1 = __this->___controllerHand_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = OVRInput_GetUp_m11DA43291070262B20D13A3E599EBE0C6A2D02D5(1, L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// ToggleShadowType();
		AugmentedObject_ToggleShadowType_m16A0545A6B6D17BB02E23A7FB53D844F8622A095(__this, NULL);
	}

IL_001c:
	{
		// if (shadow)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___shadow_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_0081;
		}
	}
	{
		// if (groundShadow)
		bool L_5 = __this->___groundShadow_6;
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		// shadow.transform.position = new Vector3(transform.position.x, 0, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___shadow_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_10, (0.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_14, NULL);
		return;
	}

IL_006c:
	{
		// shadow.transform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___shadow_5;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_17, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void AugmentedObject::Grab(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AugmentedObject_Grab_m18C04DE3FB099FE53D1872C233618369D4834A49 (AugmentedObject_t0CBF487F7FE0CF799607E204DB091174E52BF43E* __this, int32_t ___grabHand0, const RuntimeMethod* method) 
{
	{
		// controllerHand = grabHand;
		int32_t L_0 = ___grabHand0;
		__this->___controllerHand_4 = L_0;
		// }
		return;
	}
}
// System.Void AugmentedObject::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AugmentedObject_Release_m0B126A1B0B9270E6C9D67BA02F97D39BCAFC85AC (AugmentedObject_t0CBF487F7FE0CF799607E204DB091174E52BF43E* __this, const RuntimeMethod* method) 
{
	{
		// controllerHand = OVRInput.Controller.None;
		__this->___controllerHand_4 = 0;
		// }
		return;
	}
}
// System.Void AugmentedObject::ToggleShadowType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AugmentedObject_ToggleShadowType_m16A0545A6B6D17BB02E23A7FB53D844F8622A095 (AugmentedObject_t0CBF487F7FE0CF799607E204DB091174E52BF43E* __this, const RuntimeMethod* method) 
{
	{
		// groundShadow = !groundShadow;
		bool L_0 = __this->___groundShadow_6;
		__this->___groundShadow_6 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void AugmentedObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AugmentedObject__ctor_m68086218609B77D131DD73F6B775CF3864BCB989 (AugmentedObject_t0CBF487F7FE0CF799607E204DB091174E52BF43E* __this, const RuntimeMethod* method) 
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
// System.Void BrushController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrushController_Start_m5C675491789F8D80EA3D3EDD64BE4BCC8FE87CE2 (BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrushController_Grab_m3A959DAEBB63FB6D9D74122DB59E036CE34AA564_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrushController_Release_m9F9205A72FFC2AD41D6DDC85455D3D978EE17395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral454D6933DAC8514D38FC97BDCED23ADB660BE446);
		s_Il2CppMethodInitialized = true;
	}
	{
		// brush.controllerHand = OVRInput.Controller.None;
		PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* L_0 = __this->___brush_4;
		NullCheck(L_0);
		L_0->___controllerHand_4 = 0;
		// if (!brush.lineContainer)
		PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* L_1 = __this->___brush_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1->___lineContainer_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		// brush.lineContainer = new GameObject("LineContainer");
		PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* L_4 = __this->___brush_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_5, _stringLiteral454D6933DAC8514D38FC97BDCED23ADB660BE446, NULL);
		NullCheck(L_4);
		L_4->___lineContainer_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___lineContainer_6), (void*)L_5);
	}

IL_0033:
	{
		// backgroundSphere.material.renderQueue = 3998;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = __this->___backgroundSphere_5;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		NullCheck(L_7);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_7, ((int32_t)3998), NULL);
		// backgroundSphere.transform.parent = null;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8 = __this->___backgroundSphere_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_9, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// backgroundSphere.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10 = __this->___backgroundSphere_5;
		NullCheck(L_10);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_10, (bool)0, NULL);
		// if (GetComponent<GrabObject>())
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_11;
		L_11 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_11, NULL);
		if (!L_12)
		{
			goto IL_00c0;
		}
	}
	{
		// GetComponent<GrabObject>().GrabbedObjectDelegate += Grab;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_13;
		L_13 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_14 = L_13;
		NullCheck(L_14);
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_15 = L_14->___GrabbedObjectDelegate_9;
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_16 = (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)il2cpp_codegen_object_new(GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		GrabbedObject__ctor_m9B22A387B9350AA1E0D2DECB2DE2D7302D944786(L_16, __this, (intptr_t)((void*)BrushController_Grab_m3A959DAEBB63FB6D9D74122DB59E036CE34AA564_RuntimeMethod_var), NULL);
		Delegate_t* L_17;
		L_17 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_15, L_16, NULL);
		NullCheck(L_14);
		L_14->___GrabbedObjectDelegate_9 = ((GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)CastclassSealed((RuntimeObject*)L_17, GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___GrabbedObjectDelegate_9), (void*)((GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)CastclassSealed((RuntimeObject*)L_17, GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var)));
		// GetComponent<GrabObject>().ReleasedObjectDelegate += Release;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_18;
		L_18 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_19 = L_18;
		NullCheck(L_19);
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_20 = L_19->___ReleasedObjectDelegate_10;
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_21 = (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)il2cpp_codegen_object_new(ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ReleasedObject__ctor_mE889B3F2A51BDB89BCEC05EF41D36A3AFC980E10(L_21, __this, (intptr_t)((void*)BrushController_Release_m9F9205A72FFC2AD41D6DDC85455D3D978EE17395_RuntimeMethod_var), NULL);
		Delegate_t* L_22;
		L_22 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_20, L_21, NULL);
		NullCheck(L_19);
		L_19->___ReleasedObjectDelegate_10 = ((ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)CastclassSealed((RuntimeObject*)L_22, ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___ReleasedObjectDelegate_10), (void*)((ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)CastclassSealed((RuntimeObject*)L_22, ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var)));
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void BrushController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrushController_Update_m74EF101F849ABCB9500821CBC4A3B66195F91B99 (BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* __this, const RuntimeMethod* method) 
{
	{
		// backgroundSphere.transform.position = Camera.main.transform.position;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___backgroundSphere_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void BrushController::Grab(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrushController_Grab_m3A959DAEBB63FB6D9D74122DB59E036CE34AA564 (BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* __this, int32_t ___grabHand0, const RuntimeMethod* method) 
{
	{
		// brush.controllerHand = grabHand;
		PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* L_0 = __this->___brush_4;
		int32_t L_1 = ___grabHand0;
		NullCheck(L_0);
		L_0->___controllerHand_4 = L_1;
		// brush.lineContainer.SetActive(true);
		PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* L_2 = __this->___brush_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___lineContainer_6;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// backgroundSphere.enabled = true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = __this->___backgroundSphere_5;
		NullCheck(L_4);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)1, NULL);
		// if (grabRoutine != null) StopCoroutine(grabRoutine);
		RuntimeObject* L_5 = __this->___grabRoutine_6;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// if (grabRoutine != null) StopCoroutine(grabRoutine);
		RuntimeObject* L_6 = __this->___grabRoutine_6;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_6, NULL);
	}

IL_003d:
	{
		// if (releaseRoutine != null) StopCoroutine(releaseRoutine);
		RuntimeObject* L_7 = __this->___releaseRoutine_7;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// if (releaseRoutine != null) StopCoroutine(releaseRoutine);
		RuntimeObject* L_8 = __this->___releaseRoutine_7;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_8, NULL);
	}

IL_0051:
	{
		// grabRoutine = FadeSphere(Color.grey, 0.25f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline(NULL);
		RuntimeObject* L_10;
		L_10 = BrushController_FadeSphere_m72B1053C48CA32980BD11B664B9530649F689788(__this, L_9, (0.25f), (bool)0, NULL);
		__this->___grabRoutine_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabRoutine_6), (void*)L_10);
		// StartCoroutine(grabRoutine);
		RuntimeObject* L_11 = __this->___grabRoutine_6;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Void BrushController::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrushController_Release_m9F9205A72FFC2AD41D6DDC85455D3D978EE17395 (BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* __this, const RuntimeMethod* method) 
{
	{
		// brush.controllerHand = OVRInput.Controller.None;
		PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* L_0 = __this->___brush_4;
		NullCheck(L_0);
		L_0->___controllerHand_4 = 0;
		// brush.lineContainer.SetActive(false);
		PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* L_1 = __this->___brush_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1->___lineContainer_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// if (grabRoutine != null) StopCoroutine(grabRoutine);
		RuntimeObject* L_3 = __this->___grabRoutine_6;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// if (grabRoutine != null) StopCoroutine(grabRoutine);
		RuntimeObject* L_4 = __this->___grabRoutine_6;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_4, NULL);
	}

IL_0031:
	{
		// if (releaseRoutine != null) StopCoroutine(releaseRoutine);
		RuntimeObject* L_5 = __this->___releaseRoutine_7;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// if (releaseRoutine != null) StopCoroutine(releaseRoutine);
		RuntimeObject* L_6 = __this->___releaseRoutine_7;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_6, NULL);
	}

IL_0045:
	{
		// releaseRoutine = FadeSphere(new Color(0.5f, 0.5f, 0.5f, 0.0f), 0.25f, true);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), (0.5f), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_8;
		L_8 = BrushController_FadeSphere_m72B1053C48CA32980BD11B664B9530649F689788(__this, L_7, (0.25f), (bool)1, NULL);
		__this->___releaseRoutine_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___releaseRoutine_7), (void*)L_8);
		// StartCoroutine(releaseRoutine);
		RuntimeObject* L_9 = __this->___releaseRoutine_7;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BrushController::FadeCameraClearColor(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BrushController_FadeCameraClearColor_mB87BB285A993CA5F0EA5EDC374C43D75A59285F3 (BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor0, float ___fadeTime1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B* L_0 = (U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B*)il2cpp_codegen_object_new(U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeCameraClearColorU3Ed__8__ctor_mCD9B8B3B110D871F5E361E6E12487CF3A42D12E0(L_0, 0, NULL);
		U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B* L_1 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___newColor0;
		NullCheck(L_1);
		L_1->___newColor_3 = L_2;
		U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B* L_3 = L_1;
		float L_4 = ___fadeTime1;
		NullCheck(L_3);
		L_3->___fadeTime_2 = L_4;
		return L_3;
	}
}
// System.Collections.IEnumerator BrushController::FadeSphere(UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BrushController_FadeSphere_m72B1053C48CA32980BD11B664B9530649F689788 (BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor0, float ___fadeTime1, bool ___disableOnFinish2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* L_0 = (U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67*)il2cpp_codegen_object_new(U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeSphereU3Ed__9__ctor_m3169BA799A2089CF95C17DF71279966DE93E51E3(L_0, 0, NULL);
		U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* L_2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___newColor0;
		NullCheck(L_2);
		L_2->___newColor_4 = L_3;
		U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* L_4 = L_2;
		float L_5 = ___fadeTime1;
		NullCheck(L_4);
		L_4->___fadeTime_3 = L_5;
		U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* L_6 = L_4;
		bool L_7 = ___disableOnFinish2;
		NullCheck(L_6);
		L_6->___disableOnFinish_5 = L_7;
		return L_6;
	}
}
// System.Void BrushController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrushController__ctor_mC4A19D803F710F882B7485E992CE08C58496AF72 (BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* __this, const RuntimeMethod* method) 
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
// System.Void BrushController/<FadeCameraClearColor>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeCameraClearColorU3Ed__8__ctor_mCD9B8B3B110D871F5E361E6E12487CF3A42D12E0 (U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BrushController/<FadeCameraClearColor>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeCameraClearColorU3Ed__8_System_IDisposable_Dispose_m8BD74CF0755F08A27347F81EF6F2C2241566DDEF (U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BrushController/<FadeCameraClearColor>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeCameraClearColorU3Ed__8_MoveNext_m5E19E360CEA49784C59BE89256F31B70A25F5B20 (U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_4 = (0.0f);
		// Color currentColor = Camera.main.backgroundColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F(L_3, NULL);
		__this->___U3CcurrentColorU3E5__3_5 = L_4;
		goto IL_008c;
	}

IL_0034:
	{
		// timer += Time.deltaTime;
		float L_5 = __this->___U3CtimerU3E5__2_4;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CtimerU3E5__2_4 = ((float)il2cpp_codegen_add(L_5, L_6));
		// float normTimer = Mathf.Clamp01(timer / fadeTime);
		float L_7 = __this->___U3CtimerU3E5__2_4;
		float L_8 = __this->___fadeTime_2;
		float L_9;
		L_9 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_7/L_8)), NULL);
		V_1 = L_9;
		// Camera.main.backgroundColor = Color.Lerp(currentColor, newColor, normTimer);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___U3CcurrentColorU3E5__3_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___newColor_3;
		float L_13 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_11, L_12, L_13, NULL);
		NullCheck(L_10);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_10, L_14, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0085:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008c:
	{
		// while (timer <= fadeTime)
		float L_15 = __this->___U3CtimerU3E5__2_4;
		float L_16 = __this->___fadeTime_2;
		if ((((float)L_15) <= ((float)L_16)))
		{
			goto IL_0034;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object BrushController/<FadeCameraClearColor>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeCameraClearColorU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m87A8A36089703DB22DFDA47F81C0B690295C0F09 (U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BrushController/<FadeCameraClearColor>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeCameraClearColorU3Ed__8_System_Collections_IEnumerator_Reset_m40F836AFF44ED04B7814E3C0A0CD5E7E65E99A8A (U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeCameraClearColorU3Ed__8_System_Collections_IEnumerator_Reset_m40F836AFF44ED04B7814E3C0A0CD5E7E65E99A8A_RuntimeMethod_var)));
	}
}
// System.Object BrushController/<FadeCameraClearColor>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeCameraClearColorU3Ed__8_System_Collections_IEnumerator_get_Current_mCD77E82111F97BB81906736D6C34067D50D887DC (U3CFadeCameraClearColorU3Ed__8_t7F9154C6D6CB3421AF971C0DB5D9EBB5F1A9243B* __this, const RuntimeMethod* method) 
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
// System.Void BrushController/<FadeSphere>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSphereU3Ed__9__ctor_m3169BA799A2089CF95C17DF71279966DE93E51E3 (U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BrushController/<FadeSphere>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSphereU3Ed__9_System_IDisposable_Dispose_mA6904555E6E9D323BC991460420677E9F8AACC8D (U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BrushController/<FadeSphere>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeSphereU3Ed__9_MoveNext_mFD3EE603587ACE606E97CA52158BCB447764051F (U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ca;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_6 = (0.0f);
		// Color currentColor = backgroundSphere.material.GetColor("_Color");
		BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* L_4 = V_1;
		NullCheck(L_4);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = L_4->___backgroundSphere_5;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_6, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		__this->___U3CcurrentColorU3E5__3_7 = L_7;
		goto IL_00d1;
	}

IL_004c:
	{
		// timer += Time.deltaTime;
		float L_8 = __this->___U3CtimerU3E5__2_6;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CtimerU3E5__2_6 = ((float)il2cpp_codegen_add(L_8, L_9));
		// float normTimer = Mathf.Clamp01(timer / fadeTime);
		float L_10 = __this->___U3CtimerU3E5__2_6;
		float L_11 = __this->___fadeTime_3;
		float L_12;
		L_12 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_10/L_11)), NULL);
		V_2 = L_12;
		// backgroundSphere.material.SetColor("_Color", Color.Lerp(currentColor, newColor, normTimer));
		BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* L_13 = V_1;
		NullCheck(L_13);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_14 = L_13->___backgroundSphere_5;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_14, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___U3CcurrentColorU3E5__3_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___newColor_4;
		float L_18 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_16, L_17, L_18, NULL);
		NullCheck(L_15);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_15, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_19, NULL);
		// if (disableOnFinish && timer >= fadeTime)
		bool L_20 = __this->___disableOnFinish_5;
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		float L_21 = __this->___U3CtimerU3E5__2_6;
		float L_22 = __this->___fadeTime_3;
		if ((!(((float)L_21) >= ((float)L_22))))
		{
			goto IL_00ba;
		}
	}
	{
		// backgroundSphere.enabled = false;
		BrushController_t195554DE5F42BBD3D5585F9240F40192A4EE1266* L_23 = V_1;
		NullCheck(L_23);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_24 = L_23->___backgroundSphere_5;
		NullCheck(L_24);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_24, (bool)0, NULL);
	}

IL_00ba:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ca:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00d1:
	{
		// while (timer <= fadeTime)
		float L_25 = __this->___U3CtimerU3E5__2_6;
		float L_26 = __this->___fadeTime_3;
		if ((((float)L_25) <= ((float)L_26)))
		{
			goto IL_004c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object BrushController/<FadeSphere>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeSphereU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m783EC6CA80FB7DAE2747307577778DE8978AA48A (U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BrushController/<FadeSphere>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSphereU3Ed__9_System_Collections_IEnumerator_Reset_m20AF78BF1DAD8EF72A8B965BDBE3AEE1F178FEDD (U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeSphereU3Ed__9_System_Collections_IEnumerator_Reset_m20AF78BF1DAD8EF72A8B965BDBE3AEE1F178FEDD_RuntimeMethod_var)));
	}
}
// System.Object BrushController/<FadeSphere>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeSphereU3Ed__9_System_Collections_IEnumerator_get_Current_mBC84E5AE4B995FAEF69999EF0BCB5AF2F215066A (U3CFadeSphereU3Ed__9_tF4AB0EF58BE91341B96026AEF076F31562334A67* __this, const RuntimeMethod* method) 
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
// System.Void EnableUnpremultipliedAlpha::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableUnpremultipliedAlpha_Start_m431BDA31D19E97505F77BB38845000D448A445F3 (EnableUnpremultipliedAlpha_t16B442BC747B81FD6E8EC9DA15C3D1E38D4F5DBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRManager.eyeFovPremultipliedAlphaModeEnabled = false;
		il2cpp_codegen_runtime_class_init_inline(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		OVRManager_set_eyeFovPremultipliedAlphaModeEnabled_m3FB6C95CB509E5EFF8254267725DEB816584A073((bool)0, NULL);
		// }
		return;
	}
}
// System.Void EnableUnpremultipliedAlpha::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableUnpremultipliedAlpha__ctor_mB5A2E58A1AACE079E166C66546F06BCD23D07D16 (EnableUnpremultipliedAlpha_t16B442BC747B81FD6E8EC9DA15C3D1E38D4F5DBF* __this, const RuntimeMethod* method) 
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
// System.Void Flashlight::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flashlight_LateUpdate_m2EAABFBC38D156CC42A6D9F6AA5C0AC5B802BE16 (Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < lightVolume.transform.childCount; i++)
		V_0 = 0;
		goto IL_0055;
	}

IL_0004:
	{
		// lightVolume.transform.GetChild(i).rotation = Quaternion.LookRotation((lightVolume.transform.GetChild(i).position - Camera.main.transform.position).normalized);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lightVolume_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___lightVolume_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_11, NULL);
		V_1 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_13, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_14, NULL);
		// for (int i = 0; i < lightVolume.transform.childCount; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < lightVolume.transform.childCount; i++)
		int32_t L_16 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___lightVolume_4;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_18, NULL);
		if ((((int32_t)L_16) < ((int32_t)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Flashlight::ToggleFlashlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flashlight_ToggleFlashlight_m5EB1E2D1DFCE9D37D45EFFE9FB19DA02F1BD276A (Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* __this, const RuntimeMethod* method) 
{
	{
		// lightVolume.SetActive(!lightVolume.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lightVolume_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___lightVolume_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// spotlight.enabled = !spotlight.enabled;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = __this->___spotlight_5;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = __this->___spotlight_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_4, NULL);
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		// bulbGlow.SetActive(lightVolume.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___bulbGlow_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___lightVolume_4;
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void Flashlight::EnableFlashlight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flashlight_EnableFlashlight_m39842B1224D46F448F3246A514B8DEA6C7AA3814 (Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* __this, bool ___doEnable0, const RuntimeMethod* method) 
{
	{
		// lightVolume.SetActive(doEnable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lightVolume_4;
		bool L_1 = ___doEnable0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// spotlight.enabled = doEnable;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = __this->___spotlight_5;
		bool L_3 = ___doEnable0;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, L_3, NULL);
		// bulbGlow.SetActive(doEnable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___bulbGlow_6;
		bool L_5 = ___doEnable0;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Flashlight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flashlight__ctor_m7294B3C2665EB1C5F7296574CEDEBE7033C31F2E (Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* __this, const RuntimeMethod* method) 
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
// System.Void FlashlightController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController_Start_mF73A12C90DAC7FC7CF7B4C42E911454A2A0BC6EA (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlashlightController_Grab_m55741248764824A1FC8DE504F8B949935DEFB72F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlashlightController_Release_m04247B1A1F7224465E07C18D7C32272B3E6537D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// localRotation = flashlightRoot.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___flashlightRoot_5;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		__this->___localRotation_7 = L_1;
		// localPosition = flashlightRoot.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___flashlightRoot_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		__this->___localPosition_6 = L_3;
		// skeletons = new OVRSkeleton[2];
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_4 = (OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89*)(OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89*)SZArrayNew(OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___skeletons_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skeletons_10), (void*)L_4);
		// hands = new OVRHand[2];
		OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839* L_5 = (OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839*)(OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839*)SZArrayNew(OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___hands_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hands_11), (void*)L_5);
		// externalController = GetComponent<GrabObject>();
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_6;
		L_6 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		__this->___externalController_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___externalController_9), (void*)L_6);
		// if (externalController)
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_7 = __this->___externalController_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_00a1;
		}
	}
	{
		// externalController.GrabbedObjectDelegate += Grab;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_9 = __this->___externalController_9;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_10 = L_9;
		NullCheck(L_10);
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_11 = L_10->___GrabbedObjectDelegate_9;
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_12 = (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)il2cpp_codegen_object_new(GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		GrabbedObject__ctor_m9B22A387B9350AA1E0D2DECB2DE2D7302D944786(L_12, __this, (intptr_t)((void*)FlashlightController_Grab_m55741248764824A1FC8DE504F8B949935DEFB72F_RuntimeMethod_var), NULL);
		Delegate_t* L_13;
		L_13 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_11, L_12, NULL);
		NullCheck(L_10);
		L_10->___GrabbedObjectDelegate_9 = ((GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)CastclassSealed((RuntimeObject*)L_13, GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___GrabbedObjectDelegate_9), (void*)((GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)CastclassSealed((RuntimeObject*)L_13, GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var)));
		// externalController.ReleasedObjectDelegate += Release;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_14 = __this->___externalController_9;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_15 = L_14;
		NullCheck(L_15);
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_16 = L_15->___ReleasedObjectDelegate_10;
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_17 = (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)il2cpp_codegen_object_new(ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		ReleasedObject__ctor_mE889B3F2A51BDB89BCEC05EF41D36A3AFC980E10(L_17, __this, (intptr_t)((void*)FlashlightController_Release_m04247B1A1F7224465E07C18D7C32272B3E6537D6_RuntimeMethod_var), NULL);
		Delegate_t* L_18;
		L_18 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_16, L_17, NULL);
		NullCheck(L_15);
		L_15->___ReleasedObjectDelegate_10 = ((ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)CastclassSealed((RuntimeObject*)L_18, ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___ReleasedObjectDelegate_10), (void*)((ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)CastclassSealed((RuntimeObject*)L_18, ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var)));
	}

IL_00a1:
	{
		// if (GetComponent<Flashlight>())
		Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* L_19;
		L_19 = Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8(__this, Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_19, NULL);
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		// GetComponent<Flashlight>().EnableFlashlight(false);
		Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* L_21;
		L_21 = Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8(__this, Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		NullCheck(L_21);
		Flashlight_EnableFlashlight_m39842B1224D46F448F3246A514B8DEA6C7AA3814(L_21, (bool)0, NULL);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void FlashlightController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController_LateUpdate_m1F7C18ED465C417CD3B1E6BF5AFE654ABB13BCA0 (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12BB5E0F43A088955B851C4E109E86C78AD45626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79A62EF1CA5619E1F18101A859B2610828ED3A89);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		// if (!externalController)
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_0 = __this->___externalController_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_00c3;
		}
	}
	{
		// FindHands();
		FlashlightController_FindHands_mB9388B1B32F8F42BCF392F9ED79103C72F188CA1(__this, NULL);
		// bool usingControllers =
		//   (OVRInput.GetActiveController() == OVRInput.Controller.RTouch ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.LTouch ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.Touch);
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 1;
	}

IL_0031:
	{
		// if (!usingControllers)
		if (G_B5_0)
		{
			goto IL_007a;
		}
	}
	{
		// if (handIndex >= 0)
		int32_t L_5 = __this->___handIndex_12;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// AlignWithHand(hands[handIndex], skeletons[handIndex]);
		OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839* L_6 = __this->___hands_11;
		int32_t L_7 = __this->___handIndex_12;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_10 = __this->___skeletons_10;
		int32_t L_11 = __this->___handIndex_12;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		FlashlightController_AlignWithHand_m3E7F5B3D29CD54F21A8A483FA3A7A015E1CB5A25(__this, L_9, L_13, NULL);
	}

IL_005c:
	{
		// if (infoText) infoText.text = "Pinch to toggle flashlight";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_14 = __this->___infoText_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_14, NULL);
		if (!L_15)
		{
			goto IL_00c3;
		}
	}
	{
		// if (infoText) infoText.text = "Pinch to toggle flashlight";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_16 = __this->___infoText_8;
		NullCheck(L_16);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_16, _stringLiteral12BB5E0F43A088955B851C4E109E86C78AD45626, NULL);
		return;
	}

IL_007a:
	{
		// AlignWithController(OVRInput.Controller.RTouch);
		FlashlightController_AlignWithController_m1F7D3D7614A672C2BEACB72F04AB8C739F809D93(__this, 2, NULL);
		// if (OVRInput.GetUp(OVRInput.RawButton.A))
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = OVRInput_GetUp_m744B92CAFECBDE18143C162274A3AD02BC210559(1, ((int32_t)-2147483648LL), NULL);
		if (!L_17)
		{
			goto IL_00a6;
		}
	}
	{
		// if (GetComponent<Flashlight>()) GetComponent<Flashlight>().ToggleFlashlight();
		Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* L_18;
		L_18 = Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8(__this, Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_18, NULL);
		if (!L_19)
		{
			goto IL_00a6;
		}
	}
	{
		// if (GetComponent<Flashlight>()) GetComponent<Flashlight>().ToggleFlashlight();
		Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* L_20;
		L_20 = Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8(__this, Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		NullCheck(L_20);
		Flashlight_ToggleFlashlight_m5EB1E2D1DFCE9D37D45EFFE9FB19DA02F1BD276A(L_20, NULL);
	}

IL_00a6:
	{
		// if (infoText) infoText.text = "Press A to toggle flashlight";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_21 = __this->___infoText_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_21, NULL);
		if (!L_22)
		{
			goto IL_00c3;
		}
	}
	{
		// if (infoText) infoText.text = "Press A to toggle flashlight";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_23 = __this->___infoText_8;
		NullCheck(L_23);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_23, _stringLiteral79A62EF1CA5619E1F18101A859B2610828ED3A89, NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void FlashlightController::FindHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController_FindHands_mB9388B1B32F8F42BCF392F9ED79103C72F188CA1 (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m14CB596F15E21C110AF10B5B7E0C475BE9D25744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* V_0 = NULL;
	{
		// if (skeletons[0] == null || skeletons[1] == null)
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_0 = __this->___skeletons_10;
		NullCheck(L_0);
		int32_t L_1 = 0;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_4 = __this->___skeletons_10;
		NullCheck(L_4);
		int32_t L_5 = 1;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0089;
		}
	}

IL_0020:
	{
		// OVRSkeleton[] foundSkeletons = FindObjectsOfType<OVRSkeleton>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_8;
		L_8 = Object_FindObjectsOfType_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m14CB596F15E21C110AF10B5B7E0C475BE9D25744(Object_FindObjectsOfType_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m14CB596F15E21C110AF10B5B7E0C475BE9D25744_RuntimeMethod_var);
		V_0 = L_8;
		// if (foundSkeletons[0])
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12;
		L_12 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_11, NULL);
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		// skeletons[0] = foundSkeletons[0];
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_13 = __this->___skeletons_10;
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374*)L_16);
		// hands[0] = skeletons[0].GetComponent<OVRHand>();
		OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839* L_17 = __this->___hands_11;
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_18 = __this->___skeletons_10;
		NullCheck(L_18);
		int32_t L_19 = 0;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_21;
		L_21 = Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E(L_20, Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E_RuntimeMethod_var);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509*)L_21);
		// handIndex = 0;
		__this->___handIndex_12 = 0;
	}

IL_0057:
	{
		// if (foundSkeletons[1])
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_24, NULL);
		if (!L_25)
		{
			goto IL_00c0;
		}
	}
	{
		// skeletons[1] = foundSkeletons[1];
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_26 = __this->___skeletons_10;
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 1;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374*)L_29);
		// hands[1] = skeletons[1].GetComponent<OVRHand>();
		OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839* L_30 = __this->___hands_11;
		OVRSkeletonU5BU5D_t8571A9F94528C9F3D576BA4834AED2D551212F89* L_31 = __this->___skeletons_10;
		NullCheck(L_31);
		int32_t L_32 = 1;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_34;
		L_34 = Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E(L_33, Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E_RuntimeMethod_var);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509*)L_34);
		// handIndex = 1;
		__this->___handIndex_12 = 1;
		return;
	}

IL_0089:
	{
		// if (handIndex == 0)
		int32_t L_35 = __this->___handIndex_12;
		if (L_35)
		{
			goto IL_00a9;
		}
	}
	{
		// if (hands[1].GetFingerIsPinching(OVRHand.HandFinger.Index))
		OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839* L_36 = __this->___hands_11;
		NullCheck(L_36);
		int32_t L_37 = 1;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		bool L_39;
		L_39 = OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD(L_38, 1, NULL);
		if (!L_39)
		{
			goto IL_00c0;
		}
	}
	{
		// handIndex = 1;
		__this->___handIndex_12 = 1;
		return;
	}

IL_00a9:
	{
		// if (hands[0].GetFingerIsPinching(OVRHand.HandFinger.Index))
		OVRHandU5BU5D_tF90935AD4A2EDB5D90711E5FEA8D5DD77029C839* L_40 = __this->___hands_11;
		NullCheck(L_40);
		int32_t L_41 = 0;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		bool L_43;
		L_43 = OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD(L_42, 1, NULL);
		if (!L_43)
		{
			goto IL_00c0;
		}
	}
	{
		// handIndex = 0;
		__this->___handIndex_12 = 0;
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void FlashlightController::AlignWithHand(OVRHand,OVRSkeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController_AlignWithHand_m3E7F5B3D29CD54F21A8A483FA3A7A015E1CB5A25 (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* ___hand0, OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___skeleton1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pinching)
		bool L_0 = __this->___pinching_13;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// if (hand.GetFingerPinchStrength(OVRHand.HandFinger.Index) < 0.8f)
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_1 = ___hand0;
		NullCheck(L_1);
		float L_2;
		L_2 = OVRHand_GetFingerPinchStrength_mF6517B5CA9FF87146ECDAED8914DE2EFA29BE4E6(L_1, 1, NULL);
		if ((!(((float)L_2) < ((float)(0.800000012f)))))
		{
			goto IL_0047;
		}
	}
	{
		// pinching = false;
		__this->___pinching_13 = (bool)0;
		goto IL_0047;
	}

IL_001f:
	{
		// if (hand.GetFingerIsPinching(OVRHand.HandFinger.Index))
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_3 = ___hand0;
		NullCheck(L_3);
		bool L_4;
		L_4 = OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD(L_3, 1, NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// if (GetComponent<Flashlight>()) GetComponent<Flashlight>().ToggleFlashlight();
		Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* L_5;
		L_5 = Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8(__this, Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// if (GetComponent<Flashlight>()) GetComponent<Flashlight>().ToggleFlashlight();
		Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* L_7;
		L_7 = Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8(__this, Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		NullCheck(L_7);
		Flashlight_ToggleFlashlight_m5EB1E2D1DFCE9D37D45EFFE9FB19DA02F1BD276A(L_7, NULL);
	}

IL_0040:
	{
		// pinching = true;
		__this->___pinching_13 = (bool)1;
	}

IL_0047:
	{
		// flashlightRoot.position = skeleton.Bones[6].Transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___flashlightRoot_5;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_9 = ___skeleton1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_9, NULL);
		NullCheck(L_10);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_11;
		L_11 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_10, 6);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_13, NULL);
		// flashlightRoot.rotation = Quaternion.LookRotation(skeleton.Bones[6].Transform.position - skeleton.Bones[0].Transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___flashlightRoot_5;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_15 = ___skeleton1;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_15, NULL);
		NullCheck(L_16);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_17;
		L_17 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_16, 6);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_20 = ___skeleton1;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_20, NULL);
		NullCheck(L_21);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_22;
		L_22 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_21, 0);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_19, L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_25, NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_26, NULL);
		// }
		return;
	}
}
// System.Void FlashlightController::AlignWithController(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController_AlignWithController_m1F7D3D7614A672C2BEACB72F04AB8C739F809D93 (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, int32_t ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = OVRInput.GetLocalControllerPosition(controller);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_1 = ___controller0;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = OVRInput_GetLocalControllerPosition_m5630E056EBDF6BD0A317D19DE90AFC0C80233B69(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// transform.rotation = OVRInput.GetLocalControllerRotation(controller);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_4 = ___controller0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = OVRInput_GetLocalControllerRotation_mD0D287501357996403558E697CC65161E0B5D51A(L_4, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_5, NULL);
		// flashlightRoot.localRotation = localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___flashlightRoot_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = __this->___localRotation_7;
		NullCheck(L_6);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_6, L_7, NULL);
		// flashlightRoot.localPosition = localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___flashlightRoot_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___localPosition_6;
		NullCheck(L_8);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void FlashlightController::Grab(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController_Grab_m55741248764824A1FC8DE504F8B949935DEFB72F (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, int32_t ___grabHand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<Flashlight>())
		Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* L_0;
		L_0 = Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8(__this, Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// GetComponent<Flashlight>().EnableFlashlight(true);
		Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* L_2;
		L_2 = Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8(__this, Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		NullCheck(L_2);
		Flashlight_EnableFlashlight_m39842B1224D46F448F3246A514B8DEA6C7AA3814(L_2, (bool)1, NULL);
	}

IL_0019:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(FadeLighting(new Color(0, 0, 0, 0.95f), 0.0f, 0.25f));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (0.0f), (0.0f), (0.0f), (0.949999988f), /*hidden argument*/NULL);
		RuntimeObject* L_4;
		L_4 = FlashlightController_FadeLighting_m1BFD9F5BF2D831AB35F87CF392104FEB26018B47(__this, L_3, (0.0f), (0.25f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlashlightController::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController_Release_m04247B1A1F7224465E07C18D7C32272B3E6537D6 (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<Flashlight>())
		Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* L_0;
		L_0 = Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8(__this, Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// GetComponent<Flashlight>().EnableFlashlight(false);
		Flashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471* L_2;
		L_2 = Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8(__this, Component_GetComponent_TisFlashlight_tE2A72D146B7B5B88025EC6027B6CD1C03660D471_mC2CE0F8B569A5C48A47973402B2FEA3C264EACB8_RuntimeMethod_var);
		NullCheck(L_2);
		Flashlight_EnableFlashlight_m39842B1224D46F448F3246A514B8DEA6C7AA3814(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(FadeLighting(Color.clear, 1.0f, 0.25f));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		RuntimeObject* L_4;
		L_4 = FlashlightController_FadeLighting_m1BFD9F5BF2D831AB35F87CF392104FEB26018B47(__this, L_3, (1.0f), (0.25f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FlashlightController::FadeLighting(UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlashlightController_FadeLighting_m1BFD9F5BF2D831AB35F87CF392104FEB26018B47 (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor0, float ___sceneLightIntensity1, float ___fadeTime2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* L_0 = (U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA*)il2cpp_codegen_object_new(U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeLightingU3Ed__17__ctor_m92D0FC0FC597BB610DF8057D8B33465D6D346D66(L_0, 0, NULL);
		U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* L_2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___newColor0;
		NullCheck(L_2);
		L_2->___newColor_4 = L_3;
		U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* L_4 = L_2;
		float L_5 = ___sceneLightIntensity1;
		NullCheck(L_4);
		L_4->___sceneLightIntensity_5 = L_5;
		U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* L_6 = L_4;
		float L_7 = ___fadeTime2;
		NullCheck(L_6);
		L_6->___fadeTime_3 = L_7;
		return L_6;
	}
}
// System.Void FlashlightController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashlightController__ctor_m5543EFC0B63975D4BBEDC974FE35586B62AA676E (FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* __this, const RuntimeMethod* method) 
{
	{
		// Vector3 localPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___localPosition_6 = L_0;
		// Quaternion localRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___localRotation_7 = L_1;
		// int handIndex = -1;
		__this->___handIndex_12 = (-1);
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
// System.Void FlashlightController/<FadeLighting>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeLightingU3Ed__17__ctor_m92D0FC0FC597BB610DF8057D8B33465D6D346D66 (U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FlashlightController/<FadeLighting>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeLightingU3Ed__17_System_IDisposable_Dispose_mCC57C3E07FFC59DF4FC7BB01F0FB8AB64DB2EEC3 (U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FlashlightController/<FadeLighting>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeLightingU3Ed__17_MoveNext_mF77A1D0BDFF960C3CDEFB50E132380CC1876FECD (U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* V_1 = NULL;
	float V_2 = 0.0f;
	U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* G_B5_0 = NULL;
	U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00e1;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_6 = (0.0f);
		// Color currentColor = Camera.main.backgroundColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F(L_4, NULL);
		__this->___U3CcurrentColorU3E5__3_7 = L_5;
		// float currentLight = sceneLight ? sceneLight.intensity : 0;
		FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* L_6 = V_1;
		NullCheck(L_6);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7 = L_6->___sceneLight_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		G_B4_0 = __this;
		if (L_8)
		{
			G_B5_0 = __this;
			goto IL_0051;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_005c;
	}

IL_0051:
	{
		FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* L_9 = V_1;
		NullCheck(L_9);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = L_9->___sceneLight_4;
		NullCheck(L_10);
		float L_11;
		L_11 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_10, NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_005c:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CcurrentLightU3E5__4_8 = G_B6_0;
		goto IL_00e8;
	}

IL_0066:
	{
		// timer += Time.deltaTime;
		float L_12 = __this->___U3CtimerU3E5__2_6;
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CtimerU3E5__2_6 = ((float)il2cpp_codegen_add(L_12, L_13));
		// float normTimer = Mathf.Clamp01(timer / fadeTime);
		float L_14 = __this->___U3CtimerU3E5__2_6;
		float L_15 = __this->___fadeTime_3;
		float L_16;
		L_16 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_14/L_15)), NULL);
		V_2 = L_16;
		// Camera.main.backgroundColor = Color.Lerp(currentColor, newColor, normTimer);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___U3CcurrentColorU3E5__3_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___newColor_4;
		float L_20 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_18, L_19, L_20, NULL);
		NullCheck(L_17);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_17, L_21, NULL);
		// if (sceneLight) sceneLight.intensity = Mathf.Lerp(currentLight, sceneLightIntensity, normTimer);
		FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* L_22 = V_1;
		NullCheck(L_22);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = L_22->___sceneLight_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_23, NULL);
		if (!L_24)
		{
			goto IL_00d1;
		}
	}
	{
		// if (sceneLight) sceneLight.intensity = Mathf.Lerp(currentLight, sceneLightIntensity, normTimer);
		FlashlightController_tD2D92F4C4986ADD3E9D1FE068AC8278FA59E283F* L_25 = V_1;
		NullCheck(L_25);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = L_25->___sceneLight_4;
		float L_27 = __this->___U3CcurrentLightU3E5__4_8;
		float L_28 = __this->___sceneLightIntensity_5;
		float L_29 = V_2;
		float L_30;
		L_30 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_27, L_28, L_29, NULL);
		NullCheck(L_26);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_26, L_30, NULL);
	}

IL_00d1:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00e1:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00e8:
	{
		// while (timer <= fadeTime)
		float L_31 = __this->___U3CtimerU3E5__2_6;
		float L_32 = __this->___fadeTime_3;
		if ((((float)L_31) <= ((float)L_32)))
		{
			goto IL_0066;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object FlashlightController/<FadeLighting>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeLightingU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFE2E9505B25A9BABEC6A676674015010DAC7179D (U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FlashlightController/<FadeLighting>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeLightingU3Ed__17_System_Collections_IEnumerator_Reset_mB3A3C20291867B9574DCB3AA343FAA2CC100EE58 (U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeLightingU3Ed__17_System_Collections_IEnumerator_Reset_mB3A3C20291867B9574DCB3AA343FAA2CC100EE58_RuntimeMethod_var)));
	}
}
// System.Object FlashlightController/<FadeLighting>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeLightingU3Ed__17_System_Collections_IEnumerator_get_Current_m1494F66DB958AF4D905B82C3557C947F1F303A69 (U3CFadeLightingU3Ed__17_tE1C34B6088608B092E8B68295F6D78ABE62138BA* __this, const RuntimeMethod* method) 
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
// System.Void GrabObject::Grab(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_Grab_mD9EF49274AB5B829403244704E99B5D9D1E268F6 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, int32_t ___grabHand0, const RuntimeMethod* method) 
{
	GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* G_B2_0 = NULL;
	GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* G_B1_0 = NULL;
	{
		// grabbedRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		__this->___grabbedRotation_8 = L_1;
		// GrabbedObjectDelegate?.Invoke(grabHand);
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_2 = __this->___GrabbedObjectDelegate_9;
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		int32_t L_4 = ___grabHand0;
		NullCheck(G_B2_0);
		GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_inline(G_B2_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void GrabObject::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_Release_m436A4F1D4784EBAC0381F430B78E45763C23E0EF (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* G_B2_0 = NULL;
	ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* G_B1_0 = NULL;
	{
		// ReleasedObjectDelegate?.Invoke();
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_0 = __this->___ReleasedObjectDelegate_10;
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void GrabObject::CursorPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_CursorPos_mE7703B3C6FEA5EB1DF457A368E579E6E307C1BF6 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPos0, const RuntimeMethod* method) 
{
	SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* G_B2_0 = NULL;
	SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* G_B1_0 = NULL;
	{
		// CursorPositionDelegate?.Invoke(cursorPos);
		SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* L_0 = __this->___CursorPositionDelegate_11;
		SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___cursorPos0;
		NullCheck(G_B2_0);
		SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void GrabObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject__ctor_m265AD0802B6FD0A9D273A386A69EAFB7286D7485 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion grabbedRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___grabbedRotation_8 = L_0;
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
void GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_Multicast(GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, int32_t ___grabHand0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* currentDelegate = reinterpret_cast<GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___grabHand0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_Open(GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, int32_t ___grabHand0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___grabHand0, method);
}
void GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_OpenStaticInvoker(GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, int32_t ___grabHand0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___grabHand0);
}
void GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_ClosedStaticInvoker(GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, int32_t ___grabHand0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___grabHand0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, int32_t ___grabHand0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___grabHand0);

}
// System.Void GrabObject/GrabbedObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbedObject__ctor_m9B22A387B9350AA1E0D2DECB2DE2D7302D944786 (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_Multicast;
}
// System.Void GrabObject/GrabbedObject::Invoke(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, int32_t ___grabHand0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___grabHand0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GrabObject/GrabbedObject::BeginInvoke(OVRInput/Controller,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrabbedObject_BeginInvoke_m89970768F84D2ACB24401F5208108E37E925B090 (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, int32_t ___grabHand0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Controller_tBCAA59EAD9BFE2381E974A48B203D044B6CE1ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Controller_tBCAA59EAD9BFE2381E974A48B203D044B6CE1ECB_il2cpp_TypeInfo_var, &___grabHand0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GrabObject/GrabbedObject::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbedObject_EndInvoke_m34E6FC3C9FEF77349AC7C5E0BF10356BE1D3FA70 (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_Multicast(ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* currentDelegate = reinterpret_cast<ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_Open(ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_OpenStaticInvoker(ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_ClosedStaticInvoker(ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3 (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GrabObject/ReleasedObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleasedObject__ctor_mE889B3F2A51BDB89BCEC05EF41D36A3AFC980E10 (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_Multicast;
}
// System.Void GrabObject/ReleasedObject::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06 (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GrabObject/ReleasedObject::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReleasedObject_BeginInvoke_m1333CDA84D6C5EA6705DFF015E2C20C3F07556CE (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void GrabObject/ReleasedObject::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleasedObject_EndInvoke_mDF9B5FC592EBC4C6530F5C3AA5143F1938B7D5A3 (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_Multicast(SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* currentDelegate = reinterpret_cast<SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___cursorPosition0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_Open(SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___cursorPosition0, method);
}
void SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_OpenStaticInvoker(SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___cursorPosition0);
}
void SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_ClosedStaticInvoker(SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___cursorPosition0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C (SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___cursorPosition0);

}
// System.Void GrabObject/SetCursorPosition::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCursorPosition__ctor_m9A55912654491E64786814ADBA0C7EF86F8B7246 (SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_Multicast;
}
// System.Void GrabObject/SetCursorPosition::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7 (SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___cursorPosition0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GrabObject/SetCursorPosition::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetCursorPosition_BeginInvoke_m322F8AEF862C1B8530E83BD6529E0CE8AC15766B (SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___cursorPosition0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GrabObject/SetCursorPosition::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCursorPosition_EndInvoke_m62FCF423ECFFACCD778FF4D879FC9E244DE20F37 (SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void HandMeshMask::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask_Awake_mEADF26DE527AFC45FEE8F8DB2E12B4B5B21E3724 (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2874EF83369B550F7785E38A29E43121158E6B67);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// maskMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_2, NULL);
		__this->___maskMesh_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maskMesh_13), (void*)L_2);
		// maskMeshObject = new GameObject("MeshMask");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral2874EF83369B550F7785E38A29E43121158E6B67, NULL);
		__this->___maskMeshObject_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maskMeshObject_12), (void*)L_3);
		// maskMeshObject.transform.parent = this.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___maskMeshObject_12;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_6, NULL);
		// maskMeshObject.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___maskMeshObject_12;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_8);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_8, L_9, NULL);
		// maskMeshObject.AddComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___maskMeshObject_12;
		NullCheck(L_10);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_11;
		L_11 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_10, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		// maskMeshObject.AddComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___maskMeshObject_12;
		NullCheck(L_12);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_13;
		L_13 = GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D(L_12, GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		// maskMeshObject.GetComponent<MeshFilter>().mesh = maskMesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___maskMeshObject_12;
		NullCheck(L_14);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_15;
		L_15 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_14, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = __this->___maskMesh_13;
		NullCheck(L_15);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_15, L_16, NULL);
		// maskMeshObject.GetComponent<MeshRenderer>().material = maskMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___maskMeshObject_12;
		NullCheck(L_17);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_18;
		L_18 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_17, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___maskMaterial_5;
		NullCheck(L_18);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void HandMeshMask::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask_Update_mF13B9FF69B21DA60A62F1ECDB6B37FE39A01CF86 (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		// radialDivisions = Mathf.Max(2, radialDivisions);
		int32_t L_0 = __this->___radialDivisions_6;
		int32_t L_1;
		L_1 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(2, L_0, NULL);
		__this->___radialDivisions_6 = L_1;
		// if (referenceHand)
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_2 = __this->___referenceHand_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// handScale = referenceHand.GetComponent<OVRHand>().HandScale;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_4 = __this->___referenceHand_4;
		NullCheck(L_4);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_5;
		L_5 = Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E(L_4, Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6;
		L_6 = OVRHand_get_HandScale_mF8A57EFEAA517331FBA93803439620C8EE94CE52_inline(L_5, NULL);
		__this->___handScale_11 = L_6;
		// CreateHandMesh();
		HandMeshMask_CreateHandMesh_mA8BE9C3CAAE9CD6CCF820790843E00D625F1286F(__this, NULL);
	}

IL_003b:
	{
		// bool handsActive = (
		//   OVRInput.GetActiveController() == OVRInput.Controller.Hands ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.LHand ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.RHand);
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)96))))
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)32))))
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		G_B6_0 = ((((int32_t)L_9) == ((int32_t)((int32_t)64)))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B6_0 = 1;
	}

IL_0059:
	{
		V_0 = (bool)G_B6_0;
		// maskMeshObject.SetActive(handsActive);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___maskMeshObject_12;
		bool L_11 = V_0;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void HandMeshMask::CreateHandMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask_CreateHandMesh_mA8BE9C3CAAE9CD6CCF820790843E00D625F1286F (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1B522ED0EDFDFA9B9158B84A066DD4DF20743D3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B4_0 = 0;
	{
		// int knuckleVerts = 8 + (radialDivisions - 2) * 2;
		int32_t L_0 = __this->___radialDivisions_6;
		V_0 = ((int32_t)il2cpp_codegen_add(8, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_0, 2)), 2))));
		// int knuckleCount = 25; // five fingers, three knuckles per finger, then 10 more as palm borders
		V_1 = ((int32_t)25);
		// int palmVerts = 12;
		V_2 = ((int32_t)12);
		// int palmTriIndices = 66; // 22 triangles, each triangle has three verts
		V_3 = ((int32_t)66);
		// handVertices = new Vector3[knuckleVerts * knuckleCount + palmVerts];
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_3)));
		__this->___handVertices_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handVertices_14), (void*)L_4);
		// handUVs = new Vector2[handVertices.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = __this->___handVertices_14;
		NullCheck(L_5);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		__this->___handUVs_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handUVs_15), (void*)L_6);
		// handColors = new Color32[handVertices.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = __this->___handVertices_14;
		NullCheck(L_7);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_8 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)));
		__this->___handColors_16 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handColors_16), (void*)L_8);
		// handTriangles = new int[handVertices.Length * 3 + palmTriIndices];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___handVertices_14;
		NullCheck(L_9);
		int32_t L_10 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_9)->max_length)), 3)), L_10)));
		__this->___handTriangles_17 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handTriangles_17), (void*)L_11);
		// vertCounter = 0;
		__this->___vertCounter_18 = 0;
		// triCounter = 0;
		__this->___triCounter_19 = 0;
		// for (int i = 0; i < 5; i++)
		V_4 = 0;
		goto IL_01e3;
	}

IL_0079:
	{
		// int pinkyOffset = i < 4 ? 0 : 1; // pinky bone numbering is slightly different than other fingers
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) < ((int32_t)4)))
		{
			goto IL_0081;
		}
	}
	{
		G_B4_0 = 1;
		goto IL_0082;
	}

IL_0081:
	{
		G_B4_0 = 0;
	}

IL_0082:
	{
		V_5 = G_B4_0;
		// int baseId = 3 + i * 3 + pinkyOffset;
		int32_t L_13 = V_4;
		int32_t L_14 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(3, ((int32_t)il2cpp_codegen_multiply(L_13, 3)))), L_14));
		// int tipId = 19 + i;
		int32_t L_15 = V_4;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)19), L_15));
		// float k0taper = 1.0f;
		V_8 = (1.0f);
		// float k1taper = 1.0f - fingerTaper;
		float L_16 = __this->___fingerTaper_8;
		V_9 = ((float)il2cpp_codegen_subtract((1.0f), L_16));
		// float k2taper = 1.0f - (fingerTaper * 2);
		float L_17 = __this->___fingerTaper_8;
		V_10 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_17, (2.0f)))));
		// float k3taper = 1.0f - (fingerTaper * 3);
		float L_18 = __this->___fingerTaper_8;
		V_11 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_18, (3.0f)))));
		// if (i == 0)
		int32_t L_19 = V_4;
		if (L_19)
		{
			goto IL_00eb;
		}
	}
	{
		// k0taper *= 1.2f;
		float L_20 = V_8;
		V_8 = ((float)il2cpp_codegen_multiply(L_20, (1.20000005f)));
		// k1taper *= 1.1f;
		float L_21 = V_9;
		V_9 = ((float)il2cpp_codegen_multiply(L_21, (1.10000002f)));
	}

IL_00eb:
	{
		// AddKnuckleMesh(knuckleVerts, k0taper, k1taper, referenceHand.Bones[baseId].Transform.position, referenceHand.Bones[baseId + 1].Transform.position);
		int32_t L_22 = V_0;
		float L_23 = V_8;
		float L_24 = V_9;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_25 = __this->___referenceHand_4;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_25, NULL);
		int32_t L_27 = V_6;
		NullCheck(L_26);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_28;
		L_28 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_26, L_27);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_31 = __this->___referenceHand_4;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_31, NULL);
		int32_t L_33 = V_6;
		NullCheck(L_32);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_34;
		L_34 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_32, ((int32_t)il2cpp_codegen_add(L_33, 1)));
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_34, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_22, L_23, L_24, L_30, L_36, NULL);
		// AddKnuckleMesh(knuckleVerts, k1taper, k2taper, referenceHand.Bones[baseId + 1].Transform.position, referenceHand.Bones[baseId + 2].Transform.position);
		int32_t L_37 = V_0;
		float L_38 = V_9;
		float L_39 = V_10;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_40 = __this->___referenceHand_4;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_40, NULL);
		int32_t L_42 = V_6;
		NullCheck(L_41);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_43;
		L_43 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_41, ((int32_t)il2cpp_codegen_add(L_42, 1)));
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_43, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_46 = __this->___referenceHand_4;
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_46, NULL);
		int32_t L_48 = V_6;
		NullCheck(L_47);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_49;
		L_49 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_47, ((int32_t)il2cpp_codegen_add(L_48, 2)));
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_49, NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_50, NULL);
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_37, L_38, L_39, L_45, L_51, NULL);
		// Vector3 lastKnucklePos = referenceHand.Bones[baseId + 2].Transform.position;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_52 = __this->___referenceHand_4;
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_52, NULL);
		int32_t L_54 = V_6;
		NullCheck(L_53);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_55;
		L_55 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_53, ((int32_t)il2cpp_codegen_add(L_54, 2)));
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_55, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		V_12 = L_57;
		// Vector3 tipPos = referenceHand.Bones[tipId].Transform.position;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_58 = __this->___referenceHand_4;
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_58, NULL);
		int32_t L_60 = V_7;
		NullCheck(L_59);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_61;
		L_61 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_59, L_60);
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_61, NULL);
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		// Vector3 offsetTipPos = (tipPos - lastKnucklePos) * fingerTipLength + lastKnucklePos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_63, L_64, NULL);
		float L_66 = __this->___fingerTipLength_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_65, L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_67, L_68, NULL);
		V_13 = L_69;
		// AddKnuckleMesh(knuckleVerts, k2taper, k3taper, lastKnucklePos, offsetTipPos);
		int32_t L_70 = V_0;
		float L_71 = V_10;
		float L_72 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_13;
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_70, L_71, L_72, L_73, L_74, NULL);
		// for (int i = 0; i < 5; i++)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01e3:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_76 = V_4;
		if ((((int32_t)L_76) < ((int32_t)5)))
		{
			goto IL_0079;
		}
	}
	{
		// AddPalmMesh(knuckleVerts);
		int32_t L_77 = V_0;
		HandMeshMask_AddPalmMesh_mEB5A28F96491FC8721B1741E5CD24BD3470186C4(__this, L_77, NULL);
		// maskMesh.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_78 = __this->___maskMesh_13;
		NullCheck(L_78);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_78, NULL);
		// maskMesh.name = "HandMeshMask";
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_79 = __this->___maskMesh_13;
		NullCheck(L_79);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_79, _stringLiteralF1B522ED0EDFDFA9B9158B84A066DD4DF20743D3, NULL);
		// maskMesh.vertices = handVertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_80 = __this->___maskMesh_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_81 = __this->___handVertices_14;
		NullCheck(L_80);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_80, L_81, NULL);
		// maskMesh.uv = handUVs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_82 = __this->___maskMesh_13;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_83 = __this->___handUVs_15;
		NullCheck(L_82);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_82, L_83, NULL);
		// maskMesh.colors32 = handColors;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_84 = __this->___maskMesh_13;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_85 = __this->___handColors_16;
		NullCheck(L_84);
		Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F(L_84, L_85, NULL);
		// maskMesh.triangles = handTriangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_86 = __this->___maskMesh_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->___handTriangles_17;
		NullCheck(L_86);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_86, L_87, NULL);
		// }
		return;
	}
}
// System.Void HandMeshMask::AddKnuckleMesh(System.Int32,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564 (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, int32_t ___knuckleVerts0, float ___point1scale1, float ___point2scale2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point13, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point24, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	float G_B4_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_2;
	memset((&G_B4_2), 0, sizeof(G_B4_2));
	{
		// int baseVertId = vertCounter;
		int32_t L_0 = __this->___vertCounter_18;
		V_0 = L_0;
		// Vector3 camPos = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_1 = L_3;
		// Vector3 fwdVec = (point1 + point2) * 0.5f - camPos; // use the center of the two points
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___point13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___point24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_7, L_8, NULL);
		V_2 = L_9;
		// Vector3 upVec = point2 - point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___point24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___point13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_10, L_11, NULL);
		V_3 = L_12;
		// Vector3.OrthoNormalize(ref fwdVec, ref upVec);
		Vector3_OrthoNormalize_m44FC8B03D0B4E3A36AD1FBE3764E78376E7ED1CF((&V_2), (&V_3), NULL);
		// Vector3 rightVec = Vector3.Cross(upVec, fwdVec);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_13, L_14, NULL);
		// AddVertex(point2, Vector2.zero, Color.black);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___point24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_16, L_17, L_18, NULL);
		// AddVertex(point1, Vector2.zero, Color.black);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___point13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_19, L_20, L_21, NULL);
		// int fanVerts = radialDivisions + 1;
		int32_t L_22 = __this->___radialDivisions_6;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// Vector3 windingVec = rightVec;
		V_5 = L_15;
		// for (int i = 0; i < fanVerts * 2; i++)
		V_6 = 0;
		goto IL_010e;
	}

IL_0083:
	{
		// int basePoint = (i / fanVerts) + baseVertId;
		int32_t L_23 = V_6;
		int32_t L_24 = V_4;
		int32_t L_25 = V_0;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_23/L_24)), L_25));
		// Vector3 vertPos = handVertices[basePoint] + windingVec * borderSize * handScale * (basePoint != baseVertId ? point1scale : point2scale);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = __this->___handVertices_14;
		int32_t L_27 = V_7;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_5;
		float L_31 = __this->___borderSize_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_30, L_31, NULL);
		float L_33 = __this->___handScale_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_32, L_33, NULL);
		int32_t L_35 = V_7;
		int32_t L_36 = V_0;
		G_B2_0 = L_34;
		G_B2_1 = L_29;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			G_B3_0 = L_34;
			G_B3_1 = L_29;
			goto IL_00b9;
		}
	}
	{
		float L_37 = ___point2scale2;
		G_B4_0 = L_37;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_00ba;
	}

IL_00b9:
	{
		float L_38 = ___point1scale1;
		G_B4_0 = L_38;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_00ba:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(G_B4_1, G_B4_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(G_B4_2, L_39, NULL);
		V_8 = L_40;
		// AddVertex(vertPos, new Vector2(1, 0), Color.black);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_42), (1.0f), (0.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_41, L_42, L_43, NULL);
		// if (i != radialDivisions) // after making the first fan, don't wind for one vert
		int32_t L_44 = V_6;
		int32_t L_45 = __this->___radialDivisions_6;
		if ((((int32_t)L_44) == ((int32_t)L_45)))
		{
			goto IL_0108;
		}
	}
	{
		// windingVec = Quaternion.AngleAxis(180.0f / radialDivisions, fwdVec) * windingVec;
		int32_t L_46 = __this->___radialDivisions_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((float)((180.0f)/((float)L_46))), L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_48, L_49, NULL);
		V_5 = L_50;
	}

IL_0108:
	{
		// for (int i = 0; i < fanVerts * 2; i++)
		int32_t L_51 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_010e:
	{
		// for (int i = 0; i < fanVerts * 2; i++)
		int32_t L_52 = V_6;
		int32_t L_53 = V_4;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_53, 2)))))
		{
			goto IL_0083;
		}
	}
	{
		// handTriangles[triCounter++] = baseVertId + 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___handTriangles_17;
		int32_t L_55 = __this->___triCounter_19;
		V_9 = L_55;
		int32_t L_56 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = V_9;
		int32_t L_58 = V_0;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_58);
		// handTriangles[triCounter++] = baseVertId + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = __this->___handTriangles_17;
		int32_t L_60 = __this->___triCounter_19;
		V_9 = L_60;
		int32_t L_61 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		int32_t L_63 = V_0;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (int32_t)((int32_t)il2cpp_codegen_add(L_63, 1)));
		// handTriangles[triCounter++] = baseVertId + radialDivisions + 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___handTriangles_17;
		int32_t L_65 = __this->___triCounter_19;
		V_9 = L_65;
		int32_t L_66 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		int32_t L_67 = V_9;
		int32_t L_68 = V_0;
		int32_t L_69 = __this->___radialDivisions_6;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_68, L_69)), 3)));
		// handTriangles[triCounter++] = baseVertId + 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = __this->___handTriangles_17;
		int32_t L_71 = __this->___triCounter_19;
		V_9 = L_71;
		int32_t L_72 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		int32_t L_73 = V_9;
		int32_t L_74 = V_0;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (int32_t)L_74);
		// handTriangles[triCounter++] = baseVertId + radialDivisions + 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = __this->___handTriangles_17;
		int32_t L_76 = __this->___triCounter_19;
		V_9 = L_76;
		int32_t L_77 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		int32_t L_78 = V_9;
		int32_t L_79 = V_0;
		int32_t L_80 = __this->___radialDivisions_6;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_79, L_80)), 3)));
		// handTriangles[triCounter++] = baseVertId + radialDivisions + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->___handTriangles_17;
		int32_t L_82 = __this->___triCounter_19;
		V_9 = L_82;
		int32_t L_83 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		int32_t L_84 = V_9;
		int32_t L_85 = V_0;
		int32_t L_86 = __this->___radialDivisions_6;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_85, L_86)), 2)));
		// handTriangles[triCounter++] = baseVertId + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->___handTriangles_17;
		int32_t L_88 = __this->___triCounter_19;
		V_9 = L_88;
		int32_t L_89 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = V_9;
		int32_t L_91 = V_0;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (int32_t)((int32_t)il2cpp_codegen_add(L_91, 2)));
		// handTriangles[triCounter++] = baseVertId + knuckleVerts - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = __this->___handTriangles_17;
		int32_t L_93 = __this->___triCounter_19;
		V_9 = L_93;
		int32_t L_94 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		int32_t L_95 = V_9;
		int32_t L_96 = V_0;
		int32_t L_97 = ___knuckleVerts0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_96, L_97)), 1)));
		// handTriangles[triCounter++] = baseVertId + 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = __this->___handTriangles_17;
		int32_t L_99 = __this->___triCounter_19;
		V_9 = L_99;
		int32_t L_100 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		int32_t L_101 = V_9;
		int32_t L_102 = V_0;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (int32_t)L_102);
		// handTriangles[triCounter++] = baseVertId + 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = __this->___handTriangles_17;
		int32_t L_104 = __this->___triCounter_19;
		V_9 = L_104;
		int32_t L_105 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		int32_t L_106 = V_9;
		int32_t L_107 = V_0;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (int32_t)L_107);
		// handTriangles[triCounter++] = baseVertId + knuckleVerts - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->___handTriangles_17;
		int32_t L_109 = __this->___triCounter_19;
		V_9 = L_109;
		int32_t L_110 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_9;
		int32_t L_112 = V_0;
		int32_t L_113 = ___knuckleVerts0;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_111), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_112, L_113)), 1)));
		// handTriangles[triCounter++] = baseVertId + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114 = __this->___handTriangles_17;
		int32_t L_115 = __this->___triCounter_19;
		V_9 = L_115;
		int32_t L_116 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		int32_t L_117 = V_9;
		int32_t L_118 = V_0;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (int32_t)((int32_t)il2cpp_codegen_add(L_118, 1)));
		// for (int i = 0; i < radialDivisions; i++)
		V_10 = 0;
		goto IL_02fb;
	}

IL_0297:
	{
		// handTriangles[triCounter++] = baseVertId + 2 + i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = __this->___handTriangles_17;
		int32_t L_120 = __this->___triCounter_19;
		V_9 = L_120;
		int32_t L_121 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_121, 1));
		int32_t L_122 = V_9;
		int32_t L_123 = V_0;
		int32_t L_124 = V_10;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(L_122), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_123, 2)), L_124)));
		// handTriangles[triCounter++] = baseVertId + 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = __this->___handTriangles_17;
		int32_t L_126 = __this->___triCounter_19;
		V_9 = L_126;
		int32_t L_127 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_127, 1));
		int32_t L_128 = V_9;
		int32_t L_129 = V_0;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(L_128), (int32_t)L_129);
		// handTriangles[triCounter++] = baseVertId + 3 + i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___handTriangles_17;
		int32_t L_131 = __this->___triCounter_19;
		V_9 = L_131;
		int32_t L_132 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_132, 1));
		int32_t L_133 = V_9;
		int32_t L_134 = V_0;
		int32_t L_135 = V_10;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(L_133), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_134, 3)), L_135)));
		// for (int i = 0; i < radialDivisions; i++)
		int32_t L_136 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_02fb:
	{
		// for (int i = 0; i < radialDivisions; i++)
		int32_t L_137 = V_10;
		int32_t L_138 = __this->___radialDivisions_6;
		if ((((int32_t)L_137) < ((int32_t)L_138)))
		{
			goto IL_0297;
		}
	}
	{
		// for (int i = 0; i < radialDivisions; i++)
		V_11 = 0;
		goto IL_0376;
	}

IL_030a:
	{
		// handTriangles[triCounter++] = baseVertId + fanVerts + 2 + i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = __this->___handTriangles_17;
		int32_t L_140 = __this->___triCounter_19;
		V_9 = L_140;
		int32_t L_141 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_141, 1));
		int32_t L_142 = V_9;
		int32_t L_143 = V_0;
		int32_t L_144 = V_4;
		int32_t L_145 = V_11;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(L_142), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_143, L_144)), 2)), L_145)));
		// handTriangles[triCounter++] = baseVertId + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_146 = __this->___handTriangles_17;
		int32_t L_147 = __this->___triCounter_19;
		V_9 = L_147;
		int32_t L_148 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_148, 1));
		int32_t L_149 = V_9;
		int32_t L_150 = V_0;
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (int32_t)((int32_t)il2cpp_codegen_add(L_150, 1)));
		// handTriangles[triCounter++] = baseVertId + fanVerts + 3 + i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_151 = __this->___handTriangles_17;
		int32_t L_152 = __this->___triCounter_19;
		V_9 = L_152;
		int32_t L_153 = V_9;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_153, 1));
		int32_t L_154 = V_9;
		int32_t L_155 = V_0;
		int32_t L_156 = V_4;
		int32_t L_157 = V_11;
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(L_154), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_155, L_156)), 3)), L_157)));
		// for (int i = 0; i < radialDivisions; i++)
		int32_t L_158 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_158, 1));
	}

IL_0376:
	{
		// for (int i = 0; i < radialDivisions; i++)
		int32_t L_159 = V_11;
		int32_t L_160 = __this->___radialDivisions_6;
		if ((((int32_t)L_159) < ((int32_t)L_160)))
		{
			goto IL_030a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HandMeshMask::AddPalmMesh(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask_AddPalmMesh_mEB5A28F96491FC8721B1741E5CD24BD3470186C4 (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, int32_t ___knuckleVerts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	{
		// int baseVertId = vertCounter;
		int32_t L_0 = __this->___vertCounter_18;
		V_0 = L_0;
		// Vector3 customVert1 = (referenceHand.Bones[9].Transform.position + referenceHand.Bones[12].Transform.position) * 0.5f;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_1 = __this->___referenceHand_4;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_1, NULL);
		NullCheck(L_2);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_3;
		L_3 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_2, ((int32_t)9));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_6 = __this->___referenceHand_4;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_6, NULL);
		NullCheck(L_7);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_8;
		L_8 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_7, ((int32_t)12));
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_11, (0.5f), NULL);
		V_1 = L_12;
		// Vector3 customVert2 = (referenceHand.Bones[4].Transform.position + referenceHand.Bones[6].Transform.position) * 0.5f;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_13 = __this->___referenceHand_4;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_13, NULL);
		NullCheck(L_14);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_15;
		L_15 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_14, 4);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_18 = __this->___referenceHand_4;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_18, NULL);
		NullCheck(L_19);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_20;
		L_20 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_19, 6);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_17, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, (0.5f), NULL);
		V_2 = L_24;
		// customVert2 = (customVert2 - referenceHand.Bones[15].Transform.position) * 0.9f + referenceHand.Bones[15].Transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_26 = __this->___referenceHand_4;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_26, NULL);
		NullCheck(L_27);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_28;
		L_28 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_27, ((int32_t)15));
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_25, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_31, (0.899999976f), NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_33 = __this->___referenceHand_4;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_33, NULL);
		NullCheck(L_34);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_35;
		L_35 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_34, ((int32_t)15));
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_32, L_37, NULL);
		V_2 = L_38;
		// Vector3 thumbPos = (referenceHand.Bones[5].Transform.position - referenceHand.Bones[4].Transform.position) * webOffset;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_39 = __this->___referenceHand_4;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_39, NULL);
		NullCheck(L_40);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_41;
		L_41 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_40, 5);
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_44 = __this->___referenceHand_4;
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_44, NULL);
		NullCheck(L_45);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_46;
		L_46 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_45, 4);
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_46, NULL);
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_43, L_48, NULL);
		float L_50 = __this->___webOffset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_49, L_50, NULL);
		V_3 = L_51;
		// thumbPos += referenceHand.Bones[4].Transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_3;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_53 = __this->___referenceHand_4;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_53, NULL);
		NullCheck(L_54);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_55;
		L_55 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_54, 4);
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_55, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_52, L_57, NULL);
		V_3 = L_58;
		// Vector3 indexPos = (referenceHand.Bones[7].Transform.position - referenceHand.Bones[6].Transform.position) * webOffset;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_59 = __this->___referenceHand_4;
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_59, NULL);
		NullCheck(L_60);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_61;
		L_61 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_60, 7);
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_61, NULL);
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_64 = __this->___referenceHand_4;
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_64, NULL);
		NullCheck(L_65);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_66;
		L_66 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_65, 6);
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_66, NULL);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_63, L_68, NULL);
		float L_70 = __this->___webOffset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_69, L_70, NULL);
		V_4 = L_71;
		// indexPos += referenceHand.Bones[6].Transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_4;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_73 = __this->___referenceHand_4;
		NullCheck(L_73);
		RuntimeObject* L_74;
		L_74 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_73, NULL);
		NullCheck(L_74);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_75;
		L_75 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_74, 6);
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_75, NULL);
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_72, L_77, NULL);
		V_4 = L_78;
		// Vector3 pinkyPos = (referenceHand.Bones[17].Transform.position - referenceHand.Bones[16].Transform.position) * webOffset;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_79 = __this->___referenceHand_4;
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_79, NULL);
		NullCheck(L_80);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_81;
		L_81 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_80, ((int32_t)17));
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_81, NULL);
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_82, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_84 = __this->___referenceHand_4;
		NullCheck(L_84);
		RuntimeObject* L_85;
		L_85 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_84, NULL);
		NullCheck(L_85);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_86;
		L_86 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_85, ((int32_t)16));
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_86, NULL);
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_83, L_88, NULL);
		float L_90 = __this->___webOffset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_89, L_90, NULL);
		V_5 = L_91;
		// pinkyPos += referenceHand.Bones[16].Transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_5;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_93 = __this->___referenceHand_4;
		NullCheck(L_93);
		RuntimeObject* L_94;
		L_94 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_93, NULL);
		NullCheck(L_94);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_95;
		L_95 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_94, ((int32_t)16));
		NullCheck(L_95);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_95, NULL);
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_96, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_92, L_97, NULL);
		V_5 = L_98;
		// Vector3 middlePos = (referenceHand.Bones[10].Transform.position - referenceHand.Bones[9].Transform.position) +
		//   (referenceHand.Bones[13].Transform.position - referenceHand.Bones[12].Transform.position);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_99 = __this->___referenceHand_4;
		NullCheck(L_99);
		RuntimeObject* L_100;
		L_100 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_99, NULL);
		NullCheck(L_100);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_101;
		L_101 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_100, ((int32_t)10));
		NullCheck(L_101);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_101, NULL);
		NullCheck(L_102);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_102, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_104 = __this->___referenceHand_4;
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_104, NULL);
		NullCheck(L_105);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_106;
		L_106 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_105, ((int32_t)9));
		NullCheck(L_106);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_106, NULL);
		NullCheck(L_107);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_107, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_103, L_108, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_110 = __this->___referenceHand_4;
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_110, NULL);
		NullCheck(L_111);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_112;
		L_112 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_111, ((int32_t)13));
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_112, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_115 = __this->___referenceHand_4;
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_115, NULL);
		NullCheck(L_116);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_117;
		L_117 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_116, ((int32_t)12));
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_117, NULL);
		NullCheck(L_118);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_118, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_114, L_119, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_109, L_120, NULL);
		V_6 = L_121;
		// middlePos *= 0.5f * webOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = V_6;
		float L_123 = __this->___webOffset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_122, ((float)il2cpp_codegen_multiply((0.5f), L_123)), NULL);
		V_6 = L_124;
		// middlePos += customVert1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_125, L_126, NULL);
		V_6 = L_127;
		// AddVertex(referenceHand.Bones[0].Transform.position, Vector2.zero, Color.black);  // baseVertId + 0
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_128 = __this->___referenceHand_4;
		NullCheck(L_128);
		RuntimeObject* L_129;
		L_129 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_128, NULL);
		NullCheck(L_129);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_130;
		L_130 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_129, 0);
		NullCheck(L_130);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131;
		L_131 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_130, NULL);
		NullCheck(L_131);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_131, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_133;
		L_133 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_134;
		L_134 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_132, L_133, L_134, NULL);
		// AddVertex(referenceHand.Bones[3].Transform.position, Vector2.zero, Color.black);  // +1
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_135 = __this->___referenceHand_4;
		NullCheck(L_135);
		RuntimeObject* L_136;
		L_136 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_135, NULL);
		NullCheck(L_136);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_137;
		L_137 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_136, 3);
		NullCheck(L_137);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_138;
		L_138 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_137, NULL);
		NullCheck(L_138);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_138, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_140;
		L_140 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_141;
		L_141 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_139, L_140, L_141, NULL);
		// AddVertex(referenceHand.Bones[4].Transform.position, Vector2.zero, Color.black);  // +2
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_142 = __this->___referenceHand_4;
		NullCheck(L_142);
		RuntimeObject* L_143;
		L_143 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_142, NULL);
		NullCheck(L_143);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_144;
		L_144 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_143, 4);
		NullCheck(L_144);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145;
		L_145 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_144, NULL);
		NullCheck(L_145);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_145, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_147;
		L_147 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_148;
		L_148 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_146, L_147, L_148, NULL);
		// AddVertex(thumbPos, Vector2.zero, Color.black);                                   // +3
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_150;
		L_150 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_151;
		L_151 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_149, L_150, L_151, NULL);
		// AddVertex(customVert2, Vector2.zero, Color.black);                                // +4
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_153;
		L_153 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_154;
		L_154 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_152, L_153, L_154, NULL);
		// AddVertex(referenceHand.Bones[6].Transform.position, Vector2.zero, Color.black);  // +5
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_155 = __this->___referenceHand_4;
		NullCheck(L_155);
		RuntimeObject* L_156;
		L_156 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_155, NULL);
		NullCheck(L_156);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_157;
		L_157 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_156, 6);
		NullCheck(L_157);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_158;
		L_158 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_157, NULL);
		NullCheck(L_158);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_158, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_160;
		L_160 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_161;
		L_161 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_159, L_160, L_161, NULL);
		// AddVertex(customVert1, Vector2.zero, Color.black);                                // +6
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_163;
		L_163 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_164;
		L_164 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_162, L_163, L_164, NULL);
		// AddVertex(referenceHand.Bones[15].Transform.position, Vector2.zero, Color.black); // +7
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_165 = __this->___referenceHand_4;
		NullCheck(L_165);
		RuntimeObject* L_166;
		L_166 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_165, NULL);
		NullCheck(L_166);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_167;
		L_167 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_166, ((int32_t)15));
		NullCheck(L_167);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_168;
		L_168 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_167, NULL);
		NullCheck(L_168);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		L_169 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_168, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_170;
		L_170 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_171;
		L_171 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_169, L_170, L_171, NULL);
		// AddVertex(referenceHand.Bones[16].Transform.position, Vector2.zero, Color.black); // +8
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_172 = __this->___referenceHand_4;
		NullCheck(L_172);
		RuntimeObject* L_173;
		L_173 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_172, NULL);
		NullCheck(L_173);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_174;
		L_174 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_173, ((int32_t)16));
		NullCheck(L_174);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_175;
		L_175 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_174, NULL);
		NullCheck(L_175);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176;
		L_176 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_175, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_177;
		L_177 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_178;
		L_178 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_176, L_177, L_178, NULL);
		// AddVertex(indexPos, Vector2.zero, Color.black);                                   // +9
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_180;
		L_180 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_181;
		L_181 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_179, L_180, L_181, NULL);
		// AddVertex(middlePos, Vector2.zero, Color.black);                                  // +10
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_183;
		L_183 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_184;
		L_184 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_182, L_183, L_184, NULL);
		// AddVertex(pinkyPos, Vector2.zero, Color.black);                                   // +11
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_185 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_186;
		L_186 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_187;
		L_187 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550(__this, L_185, L_186, L_187, NULL);
		// handTriangles[triCounter++] = baseVertId;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = __this->___handTriangles_17;
		int32_t L_189 = __this->___triCounter_19;
		V_7 = L_189;
		int32_t L_190 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_190, 1));
		int32_t L_191 = V_7;
		int32_t L_192 = V_0;
		NullCheck(L_188);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(L_191), (int32_t)L_192);
		// handTriangles[triCounter++] = baseVertId + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = __this->___handTriangles_17;
		int32_t L_194 = __this->___triCounter_19;
		V_7 = L_194;
		int32_t L_195 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_195, 1));
		int32_t L_196 = V_7;
		int32_t L_197 = V_0;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(L_196), (int32_t)((int32_t)il2cpp_codegen_add(L_197, 1)));
		// handTriangles[triCounter++] = baseVertId + 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = __this->___handTriangles_17;
		int32_t L_199 = __this->___triCounter_19;
		V_7 = L_199;
		int32_t L_200 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_200, 1));
		int32_t L_201 = V_7;
		int32_t L_202 = V_0;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(L_201), (int32_t)((int32_t)il2cpp_codegen_add(L_202, 4)));
		// handTriangles[triCounter++] = baseVertId + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_203 = __this->___handTriangles_17;
		int32_t L_204 = __this->___triCounter_19;
		V_7 = L_204;
		int32_t L_205 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_205, 1));
		int32_t L_206 = V_7;
		int32_t L_207 = V_0;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(L_206), (int32_t)((int32_t)il2cpp_codegen_add(L_207, 1)));
		// handTriangles[triCounter++] = baseVertId + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_208 = __this->___handTriangles_17;
		int32_t L_209 = __this->___triCounter_19;
		V_7 = L_209;
		int32_t L_210 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_210, 1));
		int32_t L_211 = V_7;
		int32_t L_212 = V_0;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(L_211), (int32_t)((int32_t)il2cpp_codegen_add(L_212, 2)));
		// handTriangles[triCounter++] = baseVertId + 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_213 = __this->___handTriangles_17;
		int32_t L_214 = __this->___triCounter_19;
		V_7 = L_214;
		int32_t L_215 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_215, 1));
		int32_t L_216 = V_7;
		int32_t L_217 = V_0;
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(L_216), (int32_t)((int32_t)il2cpp_codegen_add(L_217, 4)));
		// handTriangles[triCounter++] = baseVertId + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_218 = __this->___handTriangles_17;
		int32_t L_219 = __this->___triCounter_19;
		V_7 = L_219;
		int32_t L_220 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_220, 1));
		int32_t L_221 = V_7;
		int32_t L_222 = V_0;
		NullCheck(L_218);
		(L_218)->SetAt(static_cast<il2cpp_array_size_t>(L_221), (int32_t)((int32_t)il2cpp_codegen_add(L_222, 2)));
		// handTriangles[triCounter++] = baseVertId + 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_223 = __this->___handTriangles_17;
		int32_t L_224 = __this->___triCounter_19;
		V_7 = L_224;
		int32_t L_225 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_225, 1));
		int32_t L_226 = V_7;
		int32_t L_227 = V_0;
		NullCheck(L_223);
		(L_223)->SetAt(static_cast<il2cpp_array_size_t>(L_226), (int32_t)((int32_t)il2cpp_codegen_add(L_227, 3)));
		// handTriangles[triCounter++] = baseVertId + 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = __this->___handTriangles_17;
		int32_t L_229 = __this->___triCounter_19;
		V_7 = L_229;
		int32_t L_230 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_230, 1));
		int32_t L_231 = V_7;
		int32_t L_232 = V_0;
		NullCheck(L_228);
		(L_228)->SetAt(static_cast<il2cpp_array_size_t>(L_231), (int32_t)((int32_t)il2cpp_codegen_add(L_232, 4)));
		// handTriangles[triCounter++] = baseVertId;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = __this->___handTriangles_17;
		int32_t L_234 = __this->___triCounter_19;
		V_7 = L_234;
		int32_t L_235 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_235, 1));
		int32_t L_236 = V_7;
		int32_t L_237 = V_0;
		NullCheck(L_233);
		(L_233)->SetAt(static_cast<il2cpp_array_size_t>(L_236), (int32_t)L_237);
		// handTriangles[triCounter++] = baseVertId + 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_238 = __this->___handTriangles_17;
		int32_t L_239 = __this->___triCounter_19;
		V_7 = L_239;
		int32_t L_240 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_240, 1));
		int32_t L_241 = V_7;
		int32_t L_242 = V_0;
		NullCheck(L_238);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(L_241), (int32_t)((int32_t)il2cpp_codegen_add(L_242, 4)));
		// handTriangles[triCounter++] = baseVertId + 5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_243 = __this->___handTriangles_17;
		int32_t L_244 = __this->___triCounter_19;
		V_7 = L_244;
		int32_t L_245 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_245, 1));
		int32_t L_246 = V_7;
		int32_t L_247 = V_0;
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(L_246), (int32_t)((int32_t)il2cpp_codegen_add(L_247, 5)));
		// handTriangles[triCounter++] = baseVertId;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_248 = __this->___handTriangles_17;
		int32_t L_249 = __this->___triCounter_19;
		V_7 = L_249;
		int32_t L_250 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_250, 1));
		int32_t L_251 = V_7;
		int32_t L_252 = V_0;
		NullCheck(L_248);
		(L_248)->SetAt(static_cast<il2cpp_array_size_t>(L_251), (int32_t)L_252);
		// handTriangles[triCounter++] = baseVertId + 5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = __this->___handTriangles_17;
		int32_t L_254 = __this->___triCounter_19;
		V_7 = L_254;
		int32_t L_255 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_255, 1));
		int32_t L_256 = V_7;
		int32_t L_257 = V_0;
		NullCheck(L_253);
		(L_253)->SetAt(static_cast<il2cpp_array_size_t>(L_256), (int32_t)((int32_t)il2cpp_codegen_add(L_257, 5)));
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_258 = __this->___handTriangles_17;
		int32_t L_259 = __this->___triCounter_19;
		V_7 = L_259;
		int32_t L_260 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_260, 1));
		int32_t L_261 = V_7;
		int32_t L_262 = V_0;
		NullCheck(L_258);
		(L_258)->SetAt(static_cast<il2cpp_array_size_t>(L_261), (int32_t)((int32_t)il2cpp_codegen_add(L_262, 6)));
		// handTriangles[triCounter++] = baseVertId;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_263 = __this->___handTriangles_17;
		int32_t L_264 = __this->___triCounter_19;
		V_7 = L_264;
		int32_t L_265 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_265, 1));
		int32_t L_266 = V_7;
		int32_t L_267 = V_0;
		NullCheck(L_263);
		(L_263)->SetAt(static_cast<il2cpp_array_size_t>(L_266), (int32_t)L_267);
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = __this->___handTriangles_17;
		int32_t L_269 = __this->___triCounter_19;
		V_7 = L_269;
		int32_t L_270 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_270, 1));
		int32_t L_271 = V_7;
		int32_t L_272 = V_0;
		NullCheck(L_268);
		(L_268)->SetAt(static_cast<il2cpp_array_size_t>(L_271), (int32_t)((int32_t)il2cpp_codegen_add(L_272, 6)));
		// handTriangles[triCounter++] = baseVertId + 8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = __this->___handTriangles_17;
		int32_t L_274 = __this->___triCounter_19;
		V_7 = L_274;
		int32_t L_275 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_275, 1));
		int32_t L_276 = V_7;
		int32_t L_277 = V_0;
		NullCheck(L_273);
		(L_273)->SetAt(static_cast<il2cpp_array_size_t>(L_276), (int32_t)((int32_t)il2cpp_codegen_add(L_277, 8)));
		// handTriangles[triCounter++] = baseVertId;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_278 = __this->___handTriangles_17;
		int32_t L_279 = __this->___triCounter_19;
		V_7 = L_279;
		int32_t L_280 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_280, 1));
		int32_t L_281 = V_7;
		int32_t L_282 = V_0;
		NullCheck(L_278);
		(L_278)->SetAt(static_cast<il2cpp_array_size_t>(L_281), (int32_t)L_282);
		// handTriangles[triCounter++] = baseVertId + 8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_283 = __this->___handTriangles_17;
		int32_t L_284 = __this->___triCounter_19;
		V_7 = L_284;
		int32_t L_285 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_285, 1));
		int32_t L_286 = V_7;
		int32_t L_287 = V_0;
		NullCheck(L_283);
		(L_283)->SetAt(static_cast<il2cpp_array_size_t>(L_286), (int32_t)((int32_t)il2cpp_codegen_add(L_287, 8)));
		// handTriangles[triCounter++] = baseVertId + 7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = __this->___handTriangles_17;
		int32_t L_289 = __this->___triCounter_19;
		V_7 = L_289;
		int32_t L_290 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_290, 1));
		int32_t L_291 = V_7;
		int32_t L_292 = V_0;
		NullCheck(L_288);
		(L_288)->SetAt(static_cast<il2cpp_array_size_t>(L_291), (int32_t)((int32_t)il2cpp_codegen_add(L_292, 7)));
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_293 = __this->___handTriangles_17;
		int32_t L_294 = __this->___triCounter_19;
		V_7 = L_294;
		int32_t L_295 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_295, 1));
		int32_t L_296 = V_7;
		int32_t L_297 = V_0;
		NullCheck(L_293);
		(L_293)->SetAt(static_cast<il2cpp_array_size_t>(L_296), (int32_t)((int32_t)il2cpp_codegen_add(L_297, 6)));
		// handTriangles[triCounter++] = baseVertId + 5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_298 = __this->___handTriangles_17;
		int32_t L_299 = __this->___triCounter_19;
		V_7 = L_299;
		int32_t L_300 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_300, 1));
		int32_t L_301 = V_7;
		int32_t L_302 = V_0;
		NullCheck(L_298);
		(L_298)->SetAt(static_cast<il2cpp_array_size_t>(L_301), (int32_t)((int32_t)il2cpp_codegen_add(L_302, 5)));
		// handTriangles[triCounter++] = baseVertId + 9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_303 = __this->___handTriangles_17;
		int32_t L_304 = __this->___triCounter_19;
		V_7 = L_304;
		int32_t L_305 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_305, 1));
		int32_t L_306 = V_7;
		int32_t L_307 = V_0;
		NullCheck(L_303);
		(L_303)->SetAt(static_cast<il2cpp_array_size_t>(L_306), (int32_t)((int32_t)il2cpp_codegen_add(L_307, ((int32_t)9))));
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = __this->___handTriangles_17;
		int32_t L_309 = __this->___triCounter_19;
		V_7 = L_309;
		int32_t L_310 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_310, 1));
		int32_t L_311 = V_7;
		int32_t L_312 = V_0;
		NullCheck(L_308);
		(L_308)->SetAt(static_cast<il2cpp_array_size_t>(L_311), (int32_t)((int32_t)il2cpp_codegen_add(L_312, 6)));
		// handTriangles[triCounter++] = baseVertId + 9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_313 = __this->___handTriangles_17;
		int32_t L_314 = __this->___triCounter_19;
		V_7 = L_314;
		int32_t L_315 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_315, 1));
		int32_t L_316 = V_7;
		int32_t L_317 = V_0;
		NullCheck(L_313);
		(L_313)->SetAt(static_cast<il2cpp_array_size_t>(L_316), (int32_t)((int32_t)il2cpp_codegen_add(L_317, ((int32_t)9))));
		// handTriangles[triCounter++] = baseVertId + 10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = __this->___handTriangles_17;
		int32_t L_319 = __this->___triCounter_19;
		V_7 = L_319;
		int32_t L_320 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_320, 1));
		int32_t L_321 = V_7;
		int32_t L_322 = V_0;
		NullCheck(L_318);
		(L_318)->SetAt(static_cast<il2cpp_array_size_t>(L_321), (int32_t)((int32_t)il2cpp_codegen_add(L_322, ((int32_t)10))));
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_323 = __this->___handTriangles_17;
		int32_t L_324 = __this->___triCounter_19;
		V_7 = L_324;
		int32_t L_325 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_325, 1));
		int32_t L_326 = V_7;
		int32_t L_327 = V_0;
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(L_326), (int32_t)((int32_t)il2cpp_codegen_add(L_327, 6)));
		// handTriangles[triCounter++] = baseVertId + 10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = __this->___handTriangles_17;
		int32_t L_329 = __this->___triCounter_19;
		V_7 = L_329;
		int32_t L_330 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_330, 1));
		int32_t L_331 = V_7;
		int32_t L_332 = V_0;
		NullCheck(L_328);
		(L_328)->SetAt(static_cast<il2cpp_array_size_t>(L_331), (int32_t)((int32_t)il2cpp_codegen_add(L_332, ((int32_t)10))));
		// handTriangles[triCounter++] = baseVertId + 11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = __this->___handTriangles_17;
		int32_t L_334 = __this->___triCounter_19;
		V_7 = L_334;
		int32_t L_335 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_335, 1));
		int32_t L_336 = V_7;
		int32_t L_337 = V_0;
		NullCheck(L_333);
		(L_333)->SetAt(static_cast<il2cpp_array_size_t>(L_336), (int32_t)((int32_t)il2cpp_codegen_add(L_337, ((int32_t)11))));
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_338 = __this->___handTriangles_17;
		int32_t L_339 = __this->___triCounter_19;
		V_7 = L_339;
		int32_t L_340 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_340, 1));
		int32_t L_341 = V_7;
		int32_t L_342 = V_0;
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(L_341), (int32_t)((int32_t)il2cpp_codegen_add(L_342, 6)));
		// handTriangles[triCounter++] = baseVertId + 11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_343 = __this->___handTriangles_17;
		int32_t L_344 = __this->___triCounter_19;
		V_7 = L_344;
		int32_t L_345 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_345, 1));
		int32_t L_346 = V_7;
		int32_t L_347 = V_0;
		NullCheck(L_343);
		(L_343)->SetAt(static_cast<il2cpp_array_size_t>(L_346), (int32_t)((int32_t)il2cpp_codegen_add(L_347, ((int32_t)11))));
		// handTriangles[triCounter++] = baseVertId + 8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_348 = __this->___handTriangles_17;
		int32_t L_349 = __this->___triCounter_19;
		V_7 = L_349;
		int32_t L_350 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_350, 1));
		int32_t L_351 = V_7;
		int32_t L_352 = V_0;
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(L_351), (int32_t)((int32_t)il2cpp_codegen_add(L_352, 8)));
		// handTriangles[triCounter++] = baseVertId;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_353 = __this->___handTriangles_17;
		int32_t L_354 = __this->___triCounter_19;
		V_7 = L_354;
		int32_t L_355 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_355, 1));
		int32_t L_356 = V_7;
		int32_t L_357 = V_0;
		NullCheck(L_353);
		(L_353)->SetAt(static_cast<il2cpp_array_size_t>(L_356), (int32_t)L_357);
		// handTriangles[triCounter++] = baseVertId + 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = __this->___handTriangles_17;
		int32_t L_359 = __this->___triCounter_19;
		V_7 = L_359;
		int32_t L_360 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_360, 1));
		int32_t L_361 = V_7;
		int32_t L_362 = V_0;
		NullCheck(L_358);
		(L_358)->SetAt(static_cast<il2cpp_array_size_t>(L_361), (int32_t)((int32_t)il2cpp_codegen_add(L_362, 4)));
		// handTriangles[triCounter++] = baseVertId + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_363 = __this->___handTriangles_17;
		int32_t L_364 = __this->___triCounter_19;
		V_7 = L_364;
		int32_t L_365 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_365, 1));
		int32_t L_366 = V_7;
		int32_t L_367 = V_0;
		NullCheck(L_363);
		(L_363)->SetAt(static_cast<il2cpp_array_size_t>(L_366), (int32_t)((int32_t)il2cpp_codegen_add(L_367, 1)));
		// handTriangles[triCounter++] = baseVertId + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_368 = __this->___handTriangles_17;
		int32_t L_369 = __this->___triCounter_19;
		V_7 = L_369;
		int32_t L_370 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_370, 1));
		int32_t L_371 = V_7;
		int32_t L_372 = V_0;
		NullCheck(L_368);
		(L_368)->SetAt(static_cast<il2cpp_array_size_t>(L_371), (int32_t)((int32_t)il2cpp_codegen_add(L_372, 1)));
		// handTriangles[triCounter++] = baseVertId + 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_373 = __this->___handTriangles_17;
		int32_t L_374 = __this->___triCounter_19;
		V_7 = L_374;
		int32_t L_375 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_375, 1));
		int32_t L_376 = V_7;
		int32_t L_377 = V_0;
		NullCheck(L_373);
		(L_373)->SetAt(static_cast<il2cpp_array_size_t>(L_376), (int32_t)((int32_t)il2cpp_codegen_add(L_377, 4)));
		// handTriangles[triCounter++] = baseVertId + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_378 = __this->___handTriangles_17;
		int32_t L_379 = __this->___triCounter_19;
		V_7 = L_379;
		int32_t L_380 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_380, 1));
		int32_t L_381 = V_7;
		int32_t L_382 = V_0;
		NullCheck(L_378);
		(L_378)->SetAt(static_cast<il2cpp_array_size_t>(L_381), (int32_t)((int32_t)il2cpp_codegen_add(L_382, 2)));
		// handTriangles[triCounter++] = baseVertId + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_383 = __this->___handTriangles_17;
		int32_t L_384 = __this->___triCounter_19;
		V_7 = L_384;
		int32_t L_385 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_385, 1));
		int32_t L_386 = V_7;
		int32_t L_387 = V_0;
		NullCheck(L_383);
		(L_383)->SetAt(static_cast<il2cpp_array_size_t>(L_386), (int32_t)((int32_t)il2cpp_codegen_add(L_387, 2)));
		// handTriangles[triCounter++] = baseVertId + 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_388 = __this->___handTriangles_17;
		int32_t L_389 = __this->___triCounter_19;
		V_7 = L_389;
		int32_t L_390 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_390, 1));
		int32_t L_391 = V_7;
		int32_t L_392 = V_0;
		NullCheck(L_388);
		(L_388)->SetAt(static_cast<il2cpp_array_size_t>(L_391), (int32_t)((int32_t)il2cpp_codegen_add(L_392, 4)));
		// handTriangles[triCounter++] = baseVertId + 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = __this->___handTriangles_17;
		int32_t L_394 = __this->___triCounter_19;
		V_7 = L_394;
		int32_t L_395 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_395, 1));
		int32_t L_396 = V_7;
		int32_t L_397 = V_0;
		NullCheck(L_393);
		(L_393)->SetAt(static_cast<il2cpp_array_size_t>(L_396), (int32_t)((int32_t)il2cpp_codegen_add(L_397, 3)));
		// handTriangles[triCounter++] = baseVertId;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_398 = __this->___handTriangles_17;
		int32_t L_399 = __this->___triCounter_19;
		V_7 = L_399;
		int32_t L_400 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_400, 1));
		int32_t L_401 = V_7;
		int32_t L_402 = V_0;
		NullCheck(L_398);
		(L_398)->SetAt(static_cast<il2cpp_array_size_t>(L_401), (int32_t)L_402);
		// handTriangles[triCounter++] = baseVertId + 5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_403 = __this->___handTriangles_17;
		int32_t L_404 = __this->___triCounter_19;
		V_7 = L_404;
		int32_t L_405 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_405, 1));
		int32_t L_406 = V_7;
		int32_t L_407 = V_0;
		NullCheck(L_403);
		(L_403)->SetAt(static_cast<il2cpp_array_size_t>(L_406), (int32_t)((int32_t)il2cpp_codegen_add(L_407, 5)));
		// handTriangles[triCounter++] = baseVertId + 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_408 = __this->___handTriangles_17;
		int32_t L_409 = __this->___triCounter_19;
		V_7 = L_409;
		int32_t L_410 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_410, 1));
		int32_t L_411 = V_7;
		int32_t L_412 = V_0;
		NullCheck(L_408);
		(L_408)->SetAt(static_cast<il2cpp_array_size_t>(L_411), (int32_t)((int32_t)il2cpp_codegen_add(L_412, 4)));
		// handTriangles[triCounter++] = baseVertId;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = __this->___handTriangles_17;
		int32_t L_414 = __this->___triCounter_19;
		V_7 = L_414;
		int32_t L_415 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_415, 1));
		int32_t L_416 = V_7;
		int32_t L_417 = V_0;
		NullCheck(L_413);
		(L_413)->SetAt(static_cast<il2cpp_array_size_t>(L_416), (int32_t)L_417);
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_418 = __this->___handTriangles_17;
		int32_t L_419 = __this->___triCounter_19;
		V_7 = L_419;
		int32_t L_420 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_420, 1));
		int32_t L_421 = V_7;
		int32_t L_422 = V_0;
		NullCheck(L_418);
		(L_418)->SetAt(static_cast<il2cpp_array_size_t>(L_421), (int32_t)((int32_t)il2cpp_codegen_add(L_422, 6)));
		// handTriangles[triCounter++] = baseVertId + 5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_423 = __this->___handTriangles_17;
		int32_t L_424 = __this->___triCounter_19;
		V_7 = L_424;
		int32_t L_425 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_425, 1));
		int32_t L_426 = V_7;
		int32_t L_427 = V_0;
		NullCheck(L_423);
		(L_423)->SetAt(static_cast<il2cpp_array_size_t>(L_426), (int32_t)((int32_t)il2cpp_codegen_add(L_427, 5)));
		// handTriangles[triCounter++] = baseVertId;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = __this->___handTriangles_17;
		int32_t L_429 = __this->___triCounter_19;
		V_7 = L_429;
		int32_t L_430 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_430, 1));
		int32_t L_431 = V_7;
		int32_t L_432 = V_0;
		NullCheck(L_428);
		(L_428)->SetAt(static_cast<il2cpp_array_size_t>(L_431), (int32_t)L_432);
		// handTriangles[triCounter++] = baseVertId + 8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_433 = __this->___handTriangles_17;
		int32_t L_434 = __this->___triCounter_19;
		V_7 = L_434;
		int32_t L_435 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_435, 1));
		int32_t L_436 = V_7;
		int32_t L_437 = V_0;
		NullCheck(L_433);
		(L_433)->SetAt(static_cast<il2cpp_array_size_t>(L_436), (int32_t)((int32_t)il2cpp_codegen_add(L_437, 8)));
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_438 = __this->___handTriangles_17;
		int32_t L_439 = __this->___triCounter_19;
		V_7 = L_439;
		int32_t L_440 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_440, 1));
		int32_t L_441 = V_7;
		int32_t L_442 = V_0;
		NullCheck(L_438);
		(L_438)->SetAt(static_cast<il2cpp_array_size_t>(L_441), (int32_t)((int32_t)il2cpp_codegen_add(L_442, 6)));
		// handTriangles[triCounter++] = baseVertId;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_443 = __this->___handTriangles_17;
		int32_t L_444 = __this->___triCounter_19;
		V_7 = L_444;
		int32_t L_445 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_445, 1));
		int32_t L_446 = V_7;
		int32_t L_447 = V_0;
		NullCheck(L_443);
		(L_443)->SetAt(static_cast<il2cpp_array_size_t>(L_446), (int32_t)L_447);
		// handTriangles[triCounter++] = baseVertId + 7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = __this->___handTriangles_17;
		int32_t L_449 = __this->___triCounter_19;
		V_7 = L_449;
		int32_t L_450 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_450, 1));
		int32_t L_451 = V_7;
		int32_t L_452 = V_0;
		NullCheck(L_448);
		(L_448)->SetAt(static_cast<il2cpp_array_size_t>(L_451), (int32_t)((int32_t)il2cpp_codegen_add(L_452, 7)));
		// handTriangles[triCounter++] = baseVertId + 8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_453 = __this->___handTriangles_17;
		int32_t L_454 = __this->___triCounter_19;
		V_7 = L_454;
		int32_t L_455 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_455, 1));
		int32_t L_456 = V_7;
		int32_t L_457 = V_0;
		NullCheck(L_453);
		(L_453)->SetAt(static_cast<il2cpp_array_size_t>(L_456), (int32_t)((int32_t)il2cpp_codegen_add(L_457, 8)));
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_458 = __this->___handTriangles_17;
		int32_t L_459 = __this->___triCounter_19;
		V_7 = L_459;
		int32_t L_460 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_460, 1));
		int32_t L_461 = V_7;
		int32_t L_462 = V_0;
		NullCheck(L_458);
		(L_458)->SetAt(static_cast<il2cpp_array_size_t>(L_461), (int32_t)((int32_t)il2cpp_codegen_add(L_462, 6)));
		// handTriangles[triCounter++] = baseVertId + 9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_463 = __this->___handTriangles_17;
		int32_t L_464 = __this->___triCounter_19;
		V_7 = L_464;
		int32_t L_465 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_465, 1));
		int32_t L_466 = V_7;
		int32_t L_467 = V_0;
		NullCheck(L_463);
		(L_463)->SetAt(static_cast<il2cpp_array_size_t>(L_466), (int32_t)((int32_t)il2cpp_codegen_add(L_467, ((int32_t)9))));
		// handTriangles[triCounter++] = baseVertId + 5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_468 = __this->___handTriangles_17;
		int32_t L_469 = __this->___triCounter_19;
		V_7 = L_469;
		int32_t L_470 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_470, 1));
		int32_t L_471 = V_7;
		int32_t L_472 = V_0;
		NullCheck(L_468);
		(L_468)->SetAt(static_cast<il2cpp_array_size_t>(L_471), (int32_t)((int32_t)il2cpp_codegen_add(L_472, 5)));
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_473 = __this->___handTriangles_17;
		int32_t L_474 = __this->___triCounter_19;
		V_7 = L_474;
		int32_t L_475 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_475, 1));
		int32_t L_476 = V_7;
		int32_t L_477 = V_0;
		NullCheck(L_473);
		(L_473)->SetAt(static_cast<il2cpp_array_size_t>(L_476), (int32_t)((int32_t)il2cpp_codegen_add(L_477, 6)));
		// handTriangles[triCounter++] = baseVertId + 10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_478 = __this->___handTriangles_17;
		int32_t L_479 = __this->___triCounter_19;
		V_7 = L_479;
		int32_t L_480 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_480, 1));
		int32_t L_481 = V_7;
		int32_t L_482 = V_0;
		NullCheck(L_478);
		(L_478)->SetAt(static_cast<il2cpp_array_size_t>(L_481), (int32_t)((int32_t)il2cpp_codegen_add(L_482, ((int32_t)10))));
		// handTriangles[triCounter++] = baseVertId + 9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_483 = __this->___handTriangles_17;
		int32_t L_484 = __this->___triCounter_19;
		V_7 = L_484;
		int32_t L_485 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_485, 1));
		int32_t L_486 = V_7;
		int32_t L_487 = V_0;
		NullCheck(L_483);
		(L_483)->SetAt(static_cast<il2cpp_array_size_t>(L_486), (int32_t)((int32_t)il2cpp_codegen_add(L_487, ((int32_t)9))));
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_488 = __this->___handTriangles_17;
		int32_t L_489 = __this->___triCounter_19;
		V_7 = L_489;
		int32_t L_490 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_490, 1));
		int32_t L_491 = V_7;
		int32_t L_492 = V_0;
		NullCheck(L_488);
		(L_488)->SetAt(static_cast<il2cpp_array_size_t>(L_491), (int32_t)((int32_t)il2cpp_codegen_add(L_492, 6)));
		// handTriangles[triCounter++] = baseVertId + 11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = __this->___handTriangles_17;
		int32_t L_494 = __this->___triCounter_19;
		V_7 = L_494;
		int32_t L_495 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_495, 1));
		int32_t L_496 = V_7;
		int32_t L_497 = V_0;
		NullCheck(L_493);
		(L_493)->SetAt(static_cast<il2cpp_array_size_t>(L_496), (int32_t)((int32_t)il2cpp_codegen_add(L_497, ((int32_t)11))));
		// handTriangles[triCounter++] = baseVertId + 10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_498 = __this->___handTriangles_17;
		int32_t L_499 = __this->___triCounter_19;
		V_7 = L_499;
		int32_t L_500 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_500, 1));
		int32_t L_501 = V_7;
		int32_t L_502 = V_0;
		NullCheck(L_498);
		(L_498)->SetAt(static_cast<il2cpp_array_size_t>(L_501), (int32_t)((int32_t)il2cpp_codegen_add(L_502, ((int32_t)10))));
		// handTriangles[triCounter++] = baseVertId + 6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_503 = __this->___handTriangles_17;
		int32_t L_504 = __this->___triCounter_19;
		V_7 = L_504;
		int32_t L_505 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_505, 1));
		int32_t L_506 = V_7;
		int32_t L_507 = V_0;
		NullCheck(L_503);
		(L_503)->SetAt(static_cast<il2cpp_array_size_t>(L_506), (int32_t)((int32_t)il2cpp_codegen_add(L_507, 6)));
		// handTriangles[triCounter++] = baseVertId + 8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = __this->___handTriangles_17;
		int32_t L_509 = __this->___triCounter_19;
		V_7 = L_509;
		int32_t L_510 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_510, 1));
		int32_t L_511 = V_7;
		int32_t L_512 = V_0;
		NullCheck(L_508);
		(L_508)->SetAt(static_cast<il2cpp_array_size_t>(L_511), (int32_t)((int32_t)il2cpp_codegen_add(L_512, 8)));
		// handTriangles[triCounter++] = baseVertId + 11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_513 = __this->___handTriangles_17;
		int32_t L_514 = __this->___triCounter_19;
		V_7 = L_514;
		int32_t L_515 = V_7;
		__this->___triCounter_19 = ((int32_t)il2cpp_codegen_add(L_515, 1));
		int32_t L_516 = V_7;
		int32_t L_517 = V_0;
		NullCheck(L_513);
		(L_513)->SetAt(static_cast<il2cpp_array_size_t>(L_516), (int32_t)((int32_t)il2cpp_codegen_add(L_517, ((int32_t)11))));
		// AddKnuckleMesh(knuckleVerts, 1.0f, 1.0f, customVert2, referenceHand.Bones[6].Transform.position);
		int32_t L_518 = ___knuckleVerts0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_519 = V_2;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_520 = __this->___referenceHand_4;
		NullCheck(L_520);
		RuntimeObject* L_521;
		L_521 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_520, NULL);
		NullCheck(L_521);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_522;
		L_522 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_521, 6);
		NullCheck(L_522);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_523;
		L_523 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_522, NULL);
		NullCheck(L_523);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_524;
		L_524 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_523, NULL);
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_518, (1.0f), (1.0f), L_519, L_524, NULL);
		// AddKnuckleMesh(knuckleVerts, 1.0f - fingerTaper, 1.0f, thumbPos, customVert2);
		int32_t L_525 = ___knuckleVerts0;
		float L_526 = __this->___fingerTaper_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_527 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_528 = V_2;
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_525, ((float)il2cpp_codegen_subtract((1.0f), L_526)), (1.0f), L_527, L_528, NULL);
		// AddKnuckleMesh(knuckleVerts, 1.0f, 1.0f, indexPos, middlePos);
		int32_t L_529 = ___knuckleVerts0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_530 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_531 = V_6;
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_529, (1.0f), (1.0f), L_530, L_531, NULL);
		// AddKnuckleMesh(knuckleVerts, 1.0f, 1.0f, middlePos, pinkyPos);
		int32_t L_532 = ___knuckleVerts0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_533 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_534 = V_5;
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_532, (1.0f), (1.0f), L_533, L_534, NULL);
		// AddKnuckleMesh(knuckleVerts, 1.0f, 1.0f, referenceHand.Bones[6].Transform.position, customVert1);
		int32_t L_535 = ___knuckleVerts0;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_536 = __this->___referenceHand_4;
		NullCheck(L_536);
		RuntimeObject* L_537;
		L_537 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_536, NULL);
		NullCheck(L_537);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_538;
		L_538 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_537, 6);
		NullCheck(L_538);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_539;
		L_539 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_538, NULL);
		NullCheck(L_539);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_540;
		L_540 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_539, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_541 = V_1;
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_535, (1.0f), (1.0f), L_540, L_541, NULL);
		// AddKnuckleMesh(knuckleVerts, 1.0f, 1.0f, customVert1, referenceHand.Bones[16].Transform.position);
		int32_t L_542 = ___knuckleVerts0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_543 = V_1;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_544 = __this->___referenceHand_4;
		NullCheck(L_544);
		RuntimeObject* L_545;
		L_545 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_544, NULL);
		NullCheck(L_545);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_546;
		L_546 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_545, ((int32_t)16));
		NullCheck(L_546);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_547;
		L_547 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_546, NULL);
		NullCheck(L_547);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_548;
		L_548 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_547, NULL);
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_542, (1.0f), (1.0f), L_543, L_548, NULL);
		// AddKnuckleMesh(knuckleVerts, 1.2f, 1.0f, referenceHand.Bones[15].Transform.position, referenceHand.Bones[16].Transform.position);
		int32_t L_549 = ___knuckleVerts0;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_550 = __this->___referenceHand_4;
		NullCheck(L_550);
		RuntimeObject* L_551;
		L_551 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_550, NULL);
		NullCheck(L_551);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_552;
		L_552 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_551, ((int32_t)15));
		NullCheck(L_552);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_553;
		L_553 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_552, NULL);
		NullCheck(L_553);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_554;
		L_554 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_553, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_555 = __this->___referenceHand_4;
		NullCheck(L_555);
		RuntimeObject* L_556;
		L_556 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_555, NULL);
		NullCheck(L_556);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_557;
		L_557 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_556, ((int32_t)16));
		NullCheck(L_557);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_558;
		L_558 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_557, NULL);
		NullCheck(L_558);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_559;
		L_559 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_558, NULL);
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_549, (1.20000005f), (1.0f), L_554, L_559, NULL);
		// AddKnuckleMesh(knuckleVerts, 1.3f, 1.2f, referenceHand.Bones[0].Transform.position, referenceHand.Bones[15].Transform.position);
		int32_t L_560 = ___knuckleVerts0;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_561 = __this->___referenceHand_4;
		NullCheck(L_561);
		RuntimeObject* L_562;
		L_562 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_561, NULL);
		NullCheck(L_562);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_563;
		L_563 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_562, 0);
		NullCheck(L_563);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_564;
		L_564 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_563, NULL);
		NullCheck(L_564);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_565;
		L_565 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_564, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_566 = __this->___referenceHand_4;
		NullCheck(L_566);
		RuntimeObject* L_567;
		L_567 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_566, NULL);
		NullCheck(L_567);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_568;
		L_568 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_567, ((int32_t)15));
		NullCheck(L_568);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_569;
		L_569 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_568, NULL);
		NullCheck(L_569);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_570;
		L_570 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_569, NULL);
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_560, (1.29999995f), (1.20000005f), L_565, L_570, NULL);
		// AddKnuckleMesh(knuckleVerts, 1.3f, 1.2f, referenceHand.Bones[0].Transform.position, referenceHand.Bones[3].Transform.position);
		int32_t L_571 = ___knuckleVerts0;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_572 = __this->___referenceHand_4;
		NullCheck(L_572);
		RuntimeObject* L_573;
		L_573 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_572, NULL);
		NullCheck(L_573);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_574;
		L_574 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_573, 0);
		NullCheck(L_574);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_575;
		L_575 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_574, NULL);
		NullCheck(L_575);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_576;
		L_576 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_575, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_577 = __this->___referenceHand_4;
		NullCheck(L_577);
		RuntimeObject* L_578;
		L_578 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_577, NULL);
		NullCheck(L_578);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_579;
		L_579 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_578, 3);
		NullCheck(L_579);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_580;
		L_580 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_579, NULL);
		NullCheck(L_580);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_581;
		L_581 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_580, NULL);
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_571, (1.29999995f), (1.20000005f), L_576, L_581, NULL);
		// AddKnuckleMesh(knuckleVerts, 1.3f, 1.0f, referenceHand.Bones[0].Transform.position, referenceHand.Bones[6].Transform.position);
		int32_t L_582 = ___knuckleVerts0;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_583 = __this->___referenceHand_4;
		NullCheck(L_583);
		RuntimeObject* L_584;
		L_584 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_583, NULL);
		NullCheck(L_584);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_585;
		L_585 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_584, 0);
		NullCheck(L_585);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_586;
		L_586 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_585, NULL);
		NullCheck(L_586);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_587;
		L_587 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_586, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_588 = __this->___referenceHand_4;
		NullCheck(L_588);
		RuntimeObject* L_589;
		L_589 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_588, NULL);
		NullCheck(L_589);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_590;
		L_590 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_589, 6);
		NullCheck(L_590);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_591;
		L_591 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_590, NULL);
		NullCheck(L_591);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_592;
		L_592 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_591, NULL);
		HandMeshMask_AddKnuckleMesh_mA0CEEBB7160311978421D80908A6A528171E6564(__this, L_582, (1.29999995f), (1.0f), L_587, L_592, NULL);
		// }
		return;
	}
}
// System.Void HandMeshMask::AddVertex(UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask_AddVertex_m98FD324ACB23285A41411ACA2018E0E958A36550 (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) 
{
	{
		// handVertices[vertCounter] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___handVertices_14;
		int32_t L_1 = __this->___vertCounter_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_2);
		// handUVs[vertCounter] = uv;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = __this->___handUVs_15;
		int32_t L_4 = __this->___vertCounter_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___uv1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_5);
		// handColors[vertCounter] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = __this->___handColors_16;
		int32_t L_7 = __this->___vertCounter_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___color2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9;
		L_9 = Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline(L_8, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_9);
		// vertCounter++;
		int32_t L_10 = __this->___vertCounter_18;
		__this->___vertCounter_18 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// }
		return;
	}
}
// System.Void HandMeshMask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshMask__ctor_mE2C839774AD6422FB7172AD51CC0350D87D21FCD (HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* __this, const RuntimeMethod* method) 
{
	{
		// public int radialDivisions = 9;
		__this->___radialDivisions_6 = ((int32_t)9);
		// public float borderSize = 0.2f;
		__this->___borderSize_7 = (0.200000003f);
		// public float fingerTaper = 0.13f;
		__this->___fingerTaper_8 = (0.129999995f);
		// public float fingerTipLength = 0.8f;
		__this->___fingerTipLength_9 = (0.800000012f);
		// public float webOffset = 0.25f;
		__this->___webOffset_10 = (0.25f);
		// float handScale = 1.0f;
		__this->___handScale_11 = (1.0f);
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
// System.Void HandMeshUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshUI_Start_m5AFF7954F4F0C1858C59CFDDFF8817B1B91A39EE (HandMeshUI_tA9E45B97E256958006F46E223574B6B59C875526* __this, const RuntimeMethod* method) 
{
	{
		// SetSliderValue(0, rightMask.radialDivisions, false);
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_0 = __this->___rightMask_11;
		NullCheck(L_0);
		int32_t L_1 = L_0->___radialDivisions_6;
		HandMeshUI_SetSliderValue_m9B751073A2781E0A16E07C86FF40975FE1E306B9(__this, 0, ((float)L_1), (bool)0, NULL);
		// SetSliderValue(1, rightMask.borderSize, false);
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_2 = __this->___rightMask_11;
		NullCheck(L_2);
		float L_3 = L_2->___borderSize_7;
		HandMeshUI_SetSliderValue_m9B751073A2781E0A16E07C86FF40975FE1E306B9(__this, 1, L_3, (bool)0, NULL);
		// SetSliderValue(2, rightMask.fingerTaper, false);
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_4 = __this->___rightMask_11;
		NullCheck(L_4);
		float L_5 = L_4->___fingerTaper_8;
		HandMeshUI_SetSliderValue_m9B751073A2781E0A16E07C86FF40975FE1E306B9(__this, 2, L_5, (bool)0, NULL);
		// SetSliderValue(3, rightMask.fingerTipLength, false);
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_6 = __this->___rightMask_11;
		NullCheck(L_6);
		float L_7 = L_6->___fingerTipLength_9;
		HandMeshUI_SetSliderValue_m9B751073A2781E0A16E07C86FF40975FE1E306B9(__this, 3, L_7, (bool)0, NULL);
		// SetSliderValue(4, rightMask.webOffset, false);
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_8 = __this->___rightMask_11;
		NullCheck(L_8);
		float L_9 = L_8->___webOffset_10;
		HandMeshUI_SetSliderValue_m9B751073A2781E0A16E07C86FF40975FE1E306B9(__this, 4, L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HandMeshUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshUI_Update_m4166A8EDE21471009D4D2BD8C244D2A1D24A568E (HandMeshUI_tA9E45B97E256958006F46E223574B6B59C875526* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// CheckForHands();
		HandMeshUI_CheckForHands_m5C070FDB64A936C24309B76018940F607943FA6A(__this, NULL);
		// Vector3 RfingerPos = rightHand.Bones[20].Transform.position;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_0 = __this->___rightHand_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_0, NULL);
		NullCheck(L_1);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_2;
		L_2 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_1, ((int32_t)20));
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_0 = L_4;
		// Vector3 LfingerPos = leftHand.Bones[20].Transform.position;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_5 = __this->___leftHand_8;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_5, NULL);
		NullCheck(L_6);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_7;
		L_7 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_6, ((int32_t)20));
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		V_1 = L_9;
		// if (rightHeldKnob >= 0)
		int32_t L_10 = __this->___rightHeldKnob_6;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		// Vector3 localCursorPos = knobs[rightHeldKnob].transform.parent.InverseTransformPoint(RfingerPos);
		SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952* L_11 = __this->___knobs_4;
		int32_t L_12 = __this->___rightHeldKnob_6;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_16, L_17, NULL);
		V_2 = L_18;
		// SetSliderValue(rightHeldKnob, Mathf.Clamp01(localCursorPos.x * 10), true);
		int32_t L_19 = __this->___rightHeldKnob_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		float L_21 = L_20.___x_2;
		float L_22;
		L_22 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)il2cpp_codegen_multiply(L_21, (10.0f))), NULL);
		HandMeshUI_SetSliderValue_m9B751073A2781E0A16E07C86FF40975FE1E306B9(__this, L_19, L_22, (bool)1, NULL);
		// if (localCursorPos.z < -0.02f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		float L_24 = L_23.___z_4;
		if ((!(((float)L_24) < ((float)(-0.0199999996f)))))
		{
			goto IL_00df;
		}
	}
	{
		// rightHeldKnob = -1;
		__this->___rightHeldKnob_6 = (-1);
		goto IL_00df;
	}

IL_009b:
	{
		// for (int i = 0; i < knobs.Length; i++)
		V_3 = 0;
		goto IL_00d4;
	}

IL_009f:
	{
		// if (Vector3.Distance(RfingerPos, knobs[i].transform.position) <= 0.02f && leftHeldKnob != i)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952* L_26 = __this->___knobs_4;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32;
		L_32 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_25, L_31, NULL);
		if ((!(((float)L_32) <= ((float)(0.0199999996f)))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_33 = __this->___leftHeldKnob_7;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) == ((int32_t)L_34)))
		{
			goto IL_00d0;
		}
	}
	{
		// rightHeldKnob = i;
		int32_t L_35 = V_3;
		__this->___rightHeldKnob_6 = L_35;
		// break;
		goto IL_00df;
	}

IL_00d0:
	{
		// for (int i = 0; i < knobs.Length; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00d4:
	{
		// for (int i = 0; i < knobs.Length; i++)
		int32_t L_37 = V_3;
		SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952* L_38 = __this->___knobs_4;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_009f;
		}
	}

IL_00df:
	{
		// if (leftHeldKnob >= 0)
		int32_t L_39 = __this->___leftHeldKnob_7;
		if ((((int32_t)L_39) < ((int32_t)0)))
		{
			goto IL_013c;
		}
	}
	{
		// Vector3 localCursorPos = knobs[leftHeldKnob].transform.parent.InverseTransformPoint(LfingerPos);
		SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952* L_40 = __this->___knobs_4;
		int32_t L_41 = __this->___leftHeldKnob_7;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_1;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_45, L_46, NULL);
		V_4 = L_47;
		// SetSliderValue(leftHeldKnob, Mathf.Clamp01(localCursorPos.x * 10), true);
		int32_t L_48 = __this->___leftHeldKnob_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_4;
		float L_50 = L_49.___x_2;
		float L_51;
		L_51 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)il2cpp_codegen_multiply(L_50, (10.0f))), NULL);
		HandMeshUI_SetSliderValue_m9B751073A2781E0A16E07C86FF40975FE1E306B9(__this, L_48, L_51, (bool)1, NULL);
		// if (localCursorPos.z < -0.02f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_4;
		float L_53 = L_52.___z_4;
		if ((!(((float)L_53) < ((float)(-0.0199999996f)))))
		{
			goto IL_0186;
		}
	}
	{
		// leftHeldKnob = -1;
		__this->___leftHeldKnob_7 = (-1);
		return;
	}

IL_013c:
	{
		// for (int i = 0; i < knobs.Length; i++)
		V_5 = 0;
		goto IL_017a;
	}

IL_0141:
	{
		// if (Vector3.Distance(LfingerPos, knobs[i].transform.position) <= 0.02f && rightHeldKnob != i)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_1;
		SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952* L_55 = __this->___knobs_4;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_58, NULL);
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_59, NULL);
		float L_61;
		L_61 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_54, L_60, NULL);
		if ((!(((float)L_61) <= ((float)(0.0199999996f)))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_62 = __this->___rightHeldKnob_6;
		int32_t L_63 = V_5;
		if ((((int32_t)L_62) == ((int32_t)L_63)))
		{
			goto IL_0174;
		}
	}
	{
		// leftHeldKnob = i;
		int32_t L_64 = V_5;
		__this->___leftHeldKnob_7 = L_64;
		// break;
		return;
	}

IL_0174:
	{
		// for (int i = 0; i < knobs.Length; i++)
		int32_t L_65 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_017a:
	{
		// for (int i = 0; i < knobs.Length; i++)
		int32_t L_66 = V_5;
		SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952* L_67 = __this->___knobs_4;
		NullCheck(L_67);
		if ((((int32_t)L_66) < ((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)))))
		{
			goto IL_0141;
		}
	}

IL_0186:
	{
		// }
		return;
	}
}
// System.Void HandMeshUI::SetSliderValue(System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshUI_SetSliderValue_m9B751073A2781E0A16E07C86FF40975FE1E306B9 (HandMeshUI_tA9E45B97E256958006F46E223574B6B59C875526* __this, int32_t ___sliderID0, float ___value1, bool ___isNormalized2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral019246066B5E16B1BFDC59D722DAD704A68A3BD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9669A52A6DAFB3BFCBE9076ECD66349FF639A62D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C28C75BF544CA27623067FCCCB3AE7EA4ECA1E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	String_t* V_3 = NULL;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B13_0 = 0.0f;
	{
		// float sliderStart = 0.0f;
		V_0 = (0.0f);
		// float sliderEnd = 1.0f;
		V_1 = (1.0f);
		// float sliderScale = 0.1f;
		V_2 = (0.100000001f);
		// string displayString = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		int32_t L_0 = ___sliderID0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_0070;
			}
			case 4:
			{
				goto IL_0084;
			}
		}
	}
	{
		goto IL_0096;
	}

IL_0034:
	{
		// sliderStart = 2;
		V_0 = (2.0f);
		// sliderEnd = 16;
		V_1 = (16.0f);
		// displayString = "{0, 0:0}";
		V_3 = _stringLiteral019246066B5E16B1BFDC59D722DAD704A68A3BD0;
		// break;
		goto IL_0096;
	}

IL_0048:
	{
		// sliderStart = 0;
		V_0 = (0.0f);
		// sliderEnd = 0.05f;
		V_1 = (0.0500000007f);
		// displayString = "{0, 0:0.000}";
		V_3 = _stringLiteral9669A52A6DAFB3BFCBE9076ECD66349FF639A62D;
		// break;
		goto IL_0096;
	}

IL_005c:
	{
		// sliderStart = 0;
		V_0 = (0.0f);
		// sliderEnd = 0.3333f;
		V_1 = (0.333299994f);
		// displayString = "{0, 0:0.00}";
		V_3 = _stringLiteral9C28C75BF544CA27623067FCCCB3AE7EA4ECA1E9;
		// break;
		goto IL_0096;
	}

IL_0070:
	{
		// sliderStart = 0.5f;
		V_0 = (0.5f);
		// sliderEnd = 1.5f;
		V_1 = (1.5f);
		// displayString = "{0, 0:0.00}";
		V_3 = _stringLiteral9C28C75BF544CA27623067FCCCB3AE7EA4ECA1E9;
		// break;
		goto IL_0096;
	}

IL_0084:
	{
		// sliderStart = 0.0f;
		V_0 = (0.0f);
		// sliderEnd = 1.0f;
		V_1 = (1.0f);
		// displayString = "{0, 0:0.00}";
		V_3 = _stringLiteral9C28C75BF544CA27623067FCCCB3AE7EA4ECA1E9;
	}

IL_0096:
	{
		// float absoluteValue = isNormalized ? value * (sliderEnd - sliderStart) + sliderStart : value;
		bool L_1 = ___isNormalized2;
		if (L_1)
		{
			goto IL_009c;
		}
	}
	{
		float L_2 = ___value1;
		G_B10_0 = L_2;
		goto IL_00a3;
	}

IL_009c:
	{
		float L_3 = ___value1;
		float L_4 = V_1;
		float L_5 = V_0;
		float L_6 = V_0;
		G_B10_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)))), L_6));
	}

IL_00a3:
	{
		V_4 = G_B10_0;
		// float normalizedValue = isNormalized ? value : (value - sliderStart) / (sliderEnd - sliderStart);
		bool L_7 = ___isNormalized2;
		if (L_7)
		{
			goto IL_00b1;
		}
	}
	{
		float L_8 = ___value1;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_0;
		G_B13_0 = ((float)(((float)il2cpp_codegen_subtract(L_8, L_9))/((float)il2cpp_codegen_subtract(L_10, L_11))));
		goto IL_00b2;
	}

IL_00b1:
	{
		float L_12 = ___value1;
		G_B13_0 = L_12;
	}

IL_00b2:
	{
		V_5 = G_B13_0;
		// knobs[sliderID].transform.localPosition = Vector3.right * normalizedValue * sliderScale;
		SphereColliderU5BU5D_t2B81442A572C899ED95A6EF3273A3EF413E9D952* L_13 = __this->___knobs_4;
		int32_t L_14 = ___sliderID0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		float L_19 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, L_19, NULL);
		float L_21 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, L_21, NULL);
		NullCheck(L_17);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_17, L_22, NULL);
		// readouts[sliderID].text = string.Format(displayString, absoluteValue);
		TextMeshU5BU5D_tB11D93924D72DFB58F3CA12C9A37D6480B62C4B2* L_23 = __this->___readouts_5;
		int32_t L_24 = ___sliderID0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		String_t* L_27 = V_3;
		float L_28 = V_4;
		float L_29 = L_28;
		RuntimeObject* L_30 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_29);
		String_t* L_31;
		L_31 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(L_27, L_30, NULL);
		NullCheck(L_26);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_26, L_31, NULL);
		int32_t L_32 = ___sliderID0;
		switch (L_32)
		{
			case 0:
			{
				goto IL_010d;
			}
			case 1:
			{
				goto IL_012a;
			}
			case 2:
			{
				goto IL_0145;
			}
			case 3:
			{
				goto IL_0160;
			}
			case 4:
			{
				goto IL_017b;
			}
		}
	}
	{
		return;
	}

IL_010d:
	{
		// rightMask.radialDivisions = (int)absoluteValue;
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_33 = __this->___rightMask_11;
		float L_34 = V_4;
		NullCheck(L_33);
		L_33->___radialDivisions_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_34);
		// leftMask.radialDivisions = (int)absoluteValue;
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_35 = __this->___leftMask_10;
		float L_36 = V_4;
		NullCheck(L_35);
		L_35->___radialDivisions_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_36);
		// break;
		return;
	}

IL_012a:
	{
		// rightMask.borderSize = absoluteValue;
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_37 = __this->___rightMask_11;
		float L_38 = V_4;
		NullCheck(L_37);
		L_37->___borderSize_7 = L_38;
		// leftMask.borderSize = absoluteValue;
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_39 = __this->___leftMask_10;
		float L_40 = V_4;
		NullCheck(L_39);
		L_39->___borderSize_7 = L_40;
		// break;
		return;
	}

IL_0145:
	{
		// rightMask.fingerTaper = absoluteValue;
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_41 = __this->___rightMask_11;
		float L_42 = V_4;
		NullCheck(L_41);
		L_41->___fingerTaper_8 = L_42;
		// leftMask.fingerTaper = absoluteValue;
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_43 = __this->___leftMask_10;
		float L_44 = V_4;
		NullCheck(L_43);
		L_43->___fingerTaper_8 = L_44;
		// break;
		return;
	}

IL_0160:
	{
		// rightMask.fingerTipLength = absoluteValue;
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_45 = __this->___rightMask_11;
		float L_46 = V_4;
		NullCheck(L_45);
		L_45->___fingerTipLength_9 = L_46;
		// leftMask.fingerTipLength = absoluteValue;
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_47 = __this->___leftMask_10;
		float L_48 = V_4;
		NullCheck(L_47);
		L_47->___fingerTipLength_9 = L_48;
		// break;
		return;
	}

IL_017b:
	{
		// rightMask.webOffset = absoluteValue;
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_49 = __this->___rightMask_11;
		float L_50 = V_4;
		NullCheck(L_49);
		L_49->___webOffset_10 = L_50;
		// leftMask.webOffset = absoluteValue;
		HandMeshMask_tDF86653DF15ECBDF0A5C99B65525229497E0D825* L_51 = __this->___leftMask_10;
		float L_52 = V_4;
		NullCheck(L_51);
		L_51->___webOffset_10 = L_52;
		// }
		return;
	}
}
// System.Void HandMeshUI::CheckForHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshUI_CheckForHands_m5C070FDB64A936C24309B76018940F607943FA6A (HandMeshUI_tA9E45B97E256958006F46E223574B6B59C875526* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B4_0 = 0;
	{
		// bool handsActive = (
		//   OVRInput.GetActiveController() == OVRInput.Controller.Hands ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.LHand ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.RHand);
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)96))))
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)((int32_t)64)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B4_0;
		// if (transform.GetChild(0).gameObject.activeSelf)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, 0, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		// if (!handsActive)
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_015b;
		}
	}
	{
		// transform.GetChild(0).gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 0, NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// leftHeldKnob = -1;
		__this->___leftHeldKnob_7 = (-1);
		// rightHeldKnob = -1;
		__this->___rightHeldKnob_6 = (-1);
		return;
	}

IL_0063:
	{
		// if (handsActive)
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_015b;
		}
	}
	{
		// transform.GetChild(0).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_12, 0, NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// transform.position = (rightHand.Bones[20].Transform.position + rightHand.Bones[20].Transform.position) * 0.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_16 = __this->___rightHand_9;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_16, NULL);
		NullCheck(L_17);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_18;
		L_18 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_17, ((int32_t)20));
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_21 = __this->___rightHand_9;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_21, NULL);
		NullCheck(L_22);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_23;
		L_23 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_22, ((int32_t)20));
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_26, (0.5f), NULL);
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_27, NULL);
		// transform.position += (transform.position - Camera.main.transform.position).normalized * 0.1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33;
		L_33 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_32, L_35, NULL);
		V_1 = L_36;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_37, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_30, L_38, NULL);
		NullCheck(L_29);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_39, NULL);
		// transform.rotation = Quaternion.LookRotation(new Vector3(Camera.main.transform.forward.x, 0, Camera.main.transform.forward.z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41;
		L_41 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_42, NULL);
		float L_44 = L_43.___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_45;
		L_45 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_46, NULL);
		float L_48 = L_47.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_49), L_44, (0.0f), L_48, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_49, NULL);
		NullCheck(L_40);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_40, L_50, NULL);
	}

IL_015b:
	{
		// }
		return;
	}
}
// System.Void HandMeshUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshUI__ctor_mC088FAE20523659410D3C7ADF14ED5FDD82659E6 (HandMeshUI_tA9E45B97E256958006F46E223574B6B59C875526* __this, const RuntimeMethod* method) 
{
	{
		// int rightHeldKnob = -1;
		__this->___rightHeldKnob_6 = (-1);
		// int leftHeldKnob = -1;
		__this->___leftHeldKnob_7 = (-1);
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
// System.Void ObjectManipulator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_Start_m71561A2347970A64343ECC9405AA62C85223FC8B (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (passthrough)
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_0 = __this->___passthrough_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// passthrough.colorMapEditorBrightness = -1;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_2 = __this->___passthrough_22;
		NullCheck(L_2);
		L_2->___colorMapEditorBrightness_16 = (-1.0f);
		// passthrough.colorMapEditorContrast = -1;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_3 = __this->___passthrough_22;
		NullCheck(L_3);
		L_3->___colorMapEditorContrast_14 = (-1.0f);
	}

IL_002d:
	{
		// StartCoroutine(StartDemo());
		RuntimeObject* L_4;
		L_4 = ObjectManipulator_StartDemo_m0FFD506D769E53DA7249CE19DDC373BBD75F6802(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// if (objectNameLabel) objectNameLabel.font.material.renderQueue = 4600;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_6 = __this->___objectNameLabel_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// if (objectNameLabel) objectNameLabel.font.material.renderQueue = 4600;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_8 = __this->___objectNameLabel_18;
		NullCheck(L_8);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_9;
		L_9 = TextMesh_get_font_m94D3A4C8E4DB171B74E4FF00AC7EC27F3D495664(L_8, NULL);
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Font_get_material_m61ABDEC14C6D659DDC5A4F080023699116C17364(L_9, NULL);
		NullCheck(L_10);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_10, ((int32_t)4600), NULL);
	}

IL_0061:
	{
		// if (objectInstructionsLabel) objectInstructionsLabel.font.material.renderQueue = 4600;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_11 = __this->___objectInstructionsLabel_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_11, NULL);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		// if (objectInstructionsLabel) objectInstructionsLabel.font.material.renderQueue = 4600;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_13 = __this->___objectInstructionsLabel_19;
		NullCheck(L_13);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_14;
		L_14 = TextMesh_get_font_m94D3A4C8E4DB171B74E4FF00AC7EC27F3D495664(L_13, NULL);
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = Font_get_material_m61ABDEC14C6D659DDC5A4F080023699116C17364(L_14, NULL);
		NullCheck(L_15);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_15, ((int32_t)4600), NULL);
	}

IL_0088:
	{
		// if (objectInfoBG) objectInfoBG.materialForRendering.renderQueue = 4599;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___objectInfoBG_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_16, NULL);
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		// if (objectInfoBG) objectInfoBG.materialForRendering.renderQueue = 4599;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___objectInfoBG_20;
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(34 /* UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering() */, L_18);
		NullCheck(L_19);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_19, ((int32_t)4599), NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void ObjectManipulator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_Update_mFDC84F607BEB806DF8BB78B6924E4BAABA8D6B98 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 controllerPos = OVRInput.GetLocalControllerPosition(controller);
		int32_t L_0 = __this->___controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = OVRInput_GetLocalControllerPosition_m5630E056EBDF6BD0A317D19DE90AFC0C80233B69(L_0, NULL);
		V_0 = L_1;
		// Quaternion controllerRot = OVRInput.GetLocalControllerRotation(controller);
		int32_t L_2 = __this->___controller_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = OVRInput_GetLocalControllerRotation_mD0D287501357996403558E697CC65161E0B5D51A(L_2, NULL);
		V_1 = L_3;
		// FindHoverObject(controllerPos, controllerRot);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_1;
		ObjectManipulator_FindHoverObject_mD36FA3CA19DD081444BA3991300C49D9046E1FB7(__this, L_4, L_5, NULL);
		// if (hoverObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___hoverObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// if (OVRInput.GetDown(OVRInput.Button.PrimaryHandTrigger, controller))
		int32_t L_8 = __this->___controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = OVRInput_GetDown_mB545BE1CFB07364E7DE792A9CD7C4B614736525A(((int32_t)16384), L_8, NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		// grabObject = hoverObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___hoverObject_5;
		__this->___grabObject_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabObject_6), (void*)L_10);
		// GrabHoverObject(grabObject, controllerPos, controllerRot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___grabObject_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = V_1;
		ObjectManipulator_GrabHoverObject_m09DB5539C45636C069F70674DC4C227A38DD8AC9(__this, L_11, L_12, L_13, NULL);
	}

IL_0059:
	{
		// if (grabObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___grabObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_14, NULL);
		if (!L_15)
		{
			goto IL_00b6;
		}
	}
	{
		// grabTime += Time.deltaTime * 5;
		float L_16 = __this->___grabTime_7;
		float L_17;
		L_17 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___grabTime_7 = ((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_multiply(L_17, (5.0f)))));
		// grabTime = Mathf.Clamp01(grabTime);
		float L_18 = __this->___grabTime_7;
		float L_19;
		L_19 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_18, NULL);
		__this->___grabTime_7 = L_19;
		// ManipulateObject(grabObject, controllerPos, controllerRot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___grabObject_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_1;
		ObjectManipulator_ManipulateObject_m4C26DB7F3DBDE7C3CF51F8D76C1E9FBD1070A127(__this, L_20, L_21, L_22, NULL);
		// if (!OVRInput.Get(OVRInput.Button.PrimaryHandTrigger, controller))
		int32_t L_23 = __this->___controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41(((int32_t)16384), L_23, NULL);
		if (L_24)
		{
			goto IL_00df;
		}
	}
	{
		// ReleaseObject();
		ObjectManipulator_ReleaseObject_m523C25C4DC25E7328C0E5A9DC7656828CF98F113(__this, NULL);
		return;
	}

IL_00b6:
	{
		// grabTime -= Time.deltaTime * 5;
		float L_25 = __this->___grabTime_7;
		float L_26;
		L_26 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___grabTime_7 = ((float)il2cpp_codegen_subtract(L_25, ((float)il2cpp_codegen_multiply(L_26, (5.0f)))));
		// grabTime = Mathf.Clamp01(grabTime);
		float L_27 = __this->___grabTime_7;
		float L_28;
		L_28 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_27, NULL);
		__this->___grabTime_7 = L_28;
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void ObjectManipulator::GrabHoverObject(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_GrabHoverObject_m09DB5539C45636C069F70674DC4C227A38DD8AC9 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grbObj0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___controllerPos1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___controllerRot2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// localGrabOffset = Quaternion.Inverse(controllerRot) * (grabObject.transform.position - controllerPos);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___controllerRot2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___grabObject_6;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___controllerPos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_1, L_6, NULL);
		__this->___localGrabOffset_8 = L_7;
		// localGrabRotation = Quaternion.Inverse(controllerRot) * grabObject.transform.rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___controllerRot2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___grabObject_6;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_9, L_12, NULL);
		__this->___localGrabRotation_9 = L_13;
		// rotationOffset = 0.0f;
		__this->___rotationOffset_15 = (0.0f);
		// if (grabObject.GetComponent<GrabObject>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___grabObject_6;
		NullCheck(L_14);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_15;
		L_15 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_14, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_00ac;
		}
	}
	{
		// grabObject.GetComponent<GrabObject>().Grab(controller);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___grabObject_6;
		NullCheck(L_17);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_18;
		L_18 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_17, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		int32_t L_19 = __this->___controller_4;
		NullCheck(L_18);
		GrabObject_Grab_mD9EF49274AB5B829403244704E99B5D9D1E268F6(L_18, L_19, NULL);
		// grabObject.GetComponent<GrabObject>().grabbedRotation = grabObject.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___grabObject_6;
		NullCheck(L_20);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_21;
		L_21 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_20, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___grabObject_6;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		NullCheck(L_21);
		L_21->___grabbedRotation_8 = L_24;
		// AssignInstructions(grabObject.GetComponent<GrabObject>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___grabObject_6;
		NullCheck(L_25);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_26;
		L_26 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_25, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		ObjectManipulator_AssignInstructions_m6E1ACD52C1382B530968DFCA4A7943BD51B65F0A(__this, L_26, NULL);
	}

IL_00ac:
	{
		// handGrabPosition = controllerPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___controllerPos1;
		__this->___handGrabPosition_12 = L_27;
		// handGrabRotation = controllerRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___controllerRot2;
		__this->___handGrabRotation_13 = L_28;
		// camGrabPosition = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29;
		L_29 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		__this->___camGrabPosition_10 = L_31;
		// camGrabRotation = Camera.main.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32;
		L_32 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		__this->___camGrabRotation_11 = L_34;
		// }
		return;
	}
}
// System.Void ObjectManipulator::ReleaseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_ReleaseObject_m523C25C4DC25E7328C0E5A9DC7656828CF98F113 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (grabObject.GetComponent<GrabObject>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___grabObject_6;
		NullCheck(L_0);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_1;
		L_1 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_0, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0082;
		}
	}
	{
		// if (grabObject.GetComponent<GrabObject>().objectManipulationType == GrabObject.ManipulationType.Menu)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___grabObject_6;
		NullCheck(L_3);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_4;
		L_4 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_3, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = L_4->___objectManipulationType_6;
		if ((!(((uint32_t)L_5) == ((uint32_t)6))))
		{
			goto IL_0072;
		}
	}
	{
		// grabObject.transform.position = handGrabPosition + handGrabRotation * localGrabOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___grabObject_6;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___handGrabPosition_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->___handGrabRotation_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___localGrabOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_8, L_11, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_12, NULL);
		// grabObject.transform.rotation = handGrabRotation * localGrabRotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___grabObject_6;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = __this->___handGrabRotation_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = __this->___localGrabRotation_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_17, NULL);
	}

IL_0072:
	{
		// grabObject.GetComponent<GrabObject>().Release();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___grabObject_6;
		NullCheck(L_18);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_19;
		L_19 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_18, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		NullCheck(L_19);
		GrabObject_Release_m436A4F1D4784EBAC0381F430B78E45763C23E0EF(L_19, NULL);
	}

IL_0082:
	{
		// grabObject = null;
		__this->___grabObject_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabObject_6), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ObjectManipulator::StartDemo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectManipulator_StartDemo_m0FFD506D769E53DA7249CE19DDC373BBD75F6802 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67* L_0 = (U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67*)il2cpp_codegen_object_new(U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartDemoU3Ed__23__ctor_m12403FDDEB2C7E3D78B91B5074609B24356EA708(L_0, 0, NULL);
		U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ObjectManipulator::FindHoverObject(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_FindHoverObject_mD36FA3CA19DD081444BA3991300C49D9046E1FB7 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___controllerPos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___controllerRot1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_5 = NULL;
	int32_t V_6 = 0;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_9 = NULL;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_10 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	float G_B5_0 = 0.0f;
	int32_t G_B18_0 = 0;
	{
		// RaycastHit[] objectsHit = Physics.RaycastAll(controllerPos, controllerRot * Vector3.forward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___controllerPos0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___controllerRot1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_1, L_2, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_4;
		L_4 = Physics_RaycastAll_mB136F6D0B51A4F9BE0B2B6EBE2D833C1B0B2B8E2(L_0, L_3, NULL);
		V_0 = L_4;
		// float closestObject = Mathf.Infinity;
		V_1 = (std::numeric_limits<float>::infinity());
		// float rayDistance = 2.0f;
		V_2 = (2.0f);
		// bool showLaser = true;
		V_3 = (bool)1;
		// Vector3 labelPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_4 = L_5;
		// foreach (RaycastHit hit in objectsHit)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_6 = V_0;
		V_5 = L_6;
		V_6 = 0;
		goto IL_008c;
	}

IL_002f:
	{
		// foreach (RaycastHit hit in objectsHit)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_7 = L_10;
		// float thisHitDistance = Vector3.Distance(hit.point, controllerPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___controllerPos0;
		float L_13;
		L_13 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_11, L_12, NULL);
		V_8 = L_13;
		// if (thisHitDistance < closestObject)
		float L_14 = V_8;
		float L_15 = V_1;
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0086;
		}
	}
	{
		// hoverObject = hit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16;
		L_16 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_7), NULL);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		__this->___hoverObject_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hoverObject_5), (void*)L_17);
		// closestObject = thisHitDistance;
		float L_18 = V_8;
		V_1 = L_18;
		// rayDistance = grabObject ? thisHitDistance : thisHitDistance - 0.1f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___grabObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_19, NULL);
		if (L_20)
		{
			goto IL_007a;
		}
	}
	{
		float L_21 = V_8;
		G_B5_0 = ((float)il2cpp_codegen_subtract(L_21, (0.100000001f)));
		goto IL_007c;
	}

IL_007a:
	{
		float L_22 = V_8;
		G_B5_0 = L_22;
	}

IL_007c:
	{
		V_2 = G_B5_0;
		// labelPosition = hit.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_7), NULL);
		V_4 = L_23;
	}

IL_0086:
	{
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008c:
	{
		// foreach (RaycastHit hit in objectsHit)
		int32_t L_25 = V_6;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_26 = V_5;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		// if (objectsHit.Length == 0)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_27 = V_0;
		NullCheck(L_27);
		if ((((RuntimeArray*)L_27)->max_length))
		{
			goto IL_009f;
		}
	}
	{
		// hoverObject = null;
		__this->___hoverObject_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hoverObject_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_009f:
	{
		// Collider[] hitColliders = Physics.OverlapSphere(controllerPos, 0.05f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___controllerPos0;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_29;
		L_29 = Physics_OverlapSphere_m91C80EEBDE4096D5648F78E48772E44474CD62F2(L_28, (0.0500000007f), NULL);
		// foreach (var hitCollider in hitColliders)
		V_9 = L_29;
		V_6 = 0;
		goto IL_0109;
	}

IL_00b1:
	{
		// foreach (var hitCollider in hitColliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_30 = V_9;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_10 = L_33;
		// hoverObject = hitCollider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_34 = V_10;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
		__this->___hoverObject_5 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hoverObject_5), (void*)L_35);
		// showLaser = false;
		V_3 = (bool)0;
		// labelPosition = hitCollider.ClosestPoint(controllerPos);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_36 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___controllerPos0;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(L_36, L_37, NULL);
		V_4 = L_38;
		// labelPosition += (Camera.main.transform.position - labelPosition).normalized * 0.05f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_40;
		L_40 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_42, L_43, NULL);
		V_11 = L_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_11), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_45, (0.0500000007f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_39, L_46, NULL);
		V_4 = L_47;
		int32_t L_48 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0109:
	{
		// foreach (var hitCollider in hitColliders)
		int32_t L_49 = V_6;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_50 = V_9;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_00b1;
		}
	}
	{
		// if (objectInfo && objectInstructionsLabel)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = __this->___objectInfo_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_51, NULL);
		if (!L_52)
		{
			goto IL_02fd;
		}
	}
	{
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_53 = __this->___objectInstructionsLabel_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_53, NULL);
		if (!L_54)
		{
			goto IL_02fd;
		}
	}
	{
		// bool showObjectInfo = hoverObject || grabObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___hoverObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_55, NULL);
		if (L_56)
		{
			goto IL_014b;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___grabObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_57, NULL);
		G_B18_0 = ((int32_t)(L_58));
		goto IL_014c;
	}

IL_014b:
	{
		G_B18_0 = 1;
	}

IL_014c:
	{
		V_12 = (bool)G_B18_0;
		// objectInfo.gameObject.SetActive(showObjectInfo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = __this->___objectInfo_17;
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_59, NULL);
		bool L_61 = V_12;
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, L_61, NULL);
		// Vector3 toObj = labelPosition - Camera.main.transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_63;
		L_63 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_63, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_62, L_65, NULL);
		V_13 = L_66;
		// if (hoverObject && !grabObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___hoverObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_67, NULL);
		if (!L_68)
		{
			goto IL_0238;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___grabObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_69, NULL);
		if (L_70)
		{
			goto IL_0238;
		}
	}
	{
		// Vector3 targetPos = labelPosition - toObj.normalized * 0.05f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_13), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_72, (0.0500000007f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_71, L_73, NULL);
		V_14 = L_74;
		// objectInfo.position = Vector3.Lerp(targetPos, objectInfo.position, grabTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75 = __this->___objectInfo_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77 = __this->___objectInfo_17;
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_77, NULL);
		float L_79 = __this->___grabTime_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_76, L_78, L_79, NULL);
		NullCheck(L_75);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_75, L_80, NULL);
		// objectInfo.rotation = Quaternion.LookRotation(toObj);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81 = __this->___objectInfo_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_83;
		L_83 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_82, NULL);
		NullCheck(L_81);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_81, L_83, NULL);
		// objectInfo.localScale = Vector3.one * toObj.magnitude * 2.0f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = __this->___objectInfo_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_86;
		L_86 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_13), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_85, L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_87, (2.0f), NULL);
		NullCheck(L_84);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_84, L_88, NULL);
		// if (hoverObject.GetComponent<GrabObject>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___hoverObject_5;
		NullCheck(L_89);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_90;
		L_90 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_89, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_91;
		L_91 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_90, NULL);
		if (!L_91)
		{
			goto IL_02fd;
		}
	}
	{
		// AssignInstructions(hoverObject.GetComponent<GrabObject>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = __this->___hoverObject_5;
		NullCheck(L_92);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_93;
		L_93 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_92, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		ObjectManipulator_AssignInstructions_m6E1ACD52C1382B530968DFCA4A7943BD51B65F0A(__this, L_93, NULL);
		goto IL_02fd;
	}

IL_0238:
	{
		// else if (grabObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = __this->___grabObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_95;
		L_95 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_94, NULL);
		if (!L_95)
		{
			goto IL_02fd;
		}
	}
	{
		// Vector3 targetPos = controllerPos + (Camera.main.transform.position - controllerPos).normalized * 0.1f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = ___controllerPos0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_97;
		L_97 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_97, NULL);
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_98, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = ___controllerPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_99, L_100, NULL);
		V_11 = L_101;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_11), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_102, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_96, L_103, NULL);
		V_15 = L_104;
		// objectInfo.position = Vector3.Lerp(objectInfo.position, targetPos, grabTime); ;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105 = __this->___objectInfo_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_106 = __this->___objectInfo_17;
		NullCheck(L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_106, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_15;
		float L_109 = __this->___grabTime_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_107, L_108, L_109, NULL);
		NullCheck(L_105);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_105, L_110, NULL);
		// objectInfo.rotation = Quaternion.LookRotation(objectInfo.position - Camera.main.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111 = __this->___objectInfo_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112 = __this->___objectInfo_17;
		NullCheck(L_112);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_112, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_114;
		L_114 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_114);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_115;
		L_115 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_114, NULL);
		NullCheck(L_115);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_115, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_113, L_116, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_118;
		L_118 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_117, NULL);
		NullCheck(L_111);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_111, L_118, NULL);
		// objectInfo.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_119 = __this->___objectInfo_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_119);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_119, L_120, NULL);
		// if (grabObject.GetComponent<GrabObject>()) showLaser = grabObject.GetComponent<GrabObject>().showLaserWhileGrabbed;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_121 = __this->___grabObject_6;
		NullCheck(L_121);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_122;
		L_122 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_121, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_123;
		L_123 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_122, NULL);
		if (!L_123)
		{
			goto IL_02fd;
		}
	}
	{
		// if (grabObject.GetComponent<GrabObject>()) showLaser = grabObject.GetComponent<GrabObject>().showLaserWhileGrabbed;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = __this->___grabObject_6;
		NullCheck(L_124);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_125;
		L_125 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_124, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		NullCheck(L_125);
		bool L_126 = L_125->___showLaserWhileGrabbed_7;
		V_3 = L_126;
	}

IL_02fd:
	{
		// if (laser)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_127 = __this->___laser_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_128;
		L_128 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_127, NULL);
		if (!L_128)
		{
			goto IL_03b4;
		}
	}
	{
		// laser.positionCount = 2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_129 = __this->___laser_16;
		NullCheck(L_129);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_129, 2, NULL);
		// Vector3 pos1 = controllerPos + controllerRot * (Vector3.forward * 0.05f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = ___controllerPos0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_131 = ___controllerRot1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_132, (0.0500000007f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_131, L_133, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_130, L_134, NULL);
		V_16 = L_135;
		// cursorPosition = controllerPos + controllerRot * (Vector3.forward * rayDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = ___controllerPos0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_137 = ___controllerRot1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_139 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_138, L_139, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_137, L_140, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		L_142 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_136, L_141, NULL);
		__this->___cursorPosition_14 = L_142;
		// laser.SetPosition(0, pos1);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_143 = __this->___laser_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = V_16;
		NullCheck(L_143);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_143, 0, L_144, NULL);
		// laser.SetPosition(1, cursorPosition);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_145 = __this->___laser_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146 = __this->___cursorPosition_14;
		NullCheck(L_145);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_145, 1, L_146, NULL);
		// laser.enabled = (showLaser);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_147 = __this->___laser_16;
		bool L_148 = V_3;
		NullCheck(L_147);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_147, L_148, NULL);
		// if (grabObject && grabObject.GetComponent<GrabObject>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_149 = __this->___grabObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_150;
		L_150 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_149, NULL);
		if (!L_150)
		{
			goto IL_03b4;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_151 = __this->___grabObject_6;
		NullCheck(L_151);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_152;
		L_152 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_151, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_153;
		L_153 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_152, NULL);
		if (!L_153)
		{
			goto IL_03b4;
		}
	}
	{
		// grabObject.GetComponent<GrabObject>().CursorPos(cursorPosition);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_154 = __this->___grabObject_6;
		NullCheck(L_154);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_155;
		L_155 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_154, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = __this->___cursorPosition_14;
		NullCheck(L_155);
		GrabObject_CursorPos_mE7703B3C6FEA5EB1DF457A368E579E6E307C1BF6(L_155, L_156, NULL);
	}

IL_03b4:
	{
		// }
		return;
	}
}
// System.Void ObjectManipulator::ManipulateObject(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_ManipulateObject_m4C26DB7F3DBDE7C3CF51F8D76C1E9FBD1070A127 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___controllerPos1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___controllerRot2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	{
		// bool useDefaultManipulation = true;
		V_0 = (bool)1;
		// Vector2 thumbstick = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, controller);
		int32_t L_0 = __this->___controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = OVRInput_Get_m5DC55CC9D553D98F95937AB80D77C1120BB56CC6(1, L_0, NULL);
		V_1 = L_1;
		// if (obj.GetComponent<GrabObject>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___obj0;
		NullCheck(L_2);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_3;
		L_3 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_2, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_03b6;
		}
	}
	{
		// useDefaultManipulation = false;
		V_0 = (bool)0;
		// switch (obj.GetComponent<GrabObject>().objectManipulationType)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___obj0;
		NullCheck(L_5);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_6;
		L_6 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_5, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = L_6->___objectManipulationType_6;
		V_7 = L_7;
		int32_t L_8 = V_7;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_00a6;
			}
			case 3:
			{
				goto IL_013b;
			}
			case 4:
			{
				goto IL_0186;
			}
			case 5:
			{
				goto IL_0257;
			}
			case 6:
			{
				goto IL_0331;
			}
		}
	}
	{
		goto IL_03b4;
	}

IL_0056:
	{
		// useDefaultManipulation = true;
		V_0 = (bool)1;
		// break;
		goto IL_03b6;
	}

IL_005d:
	{
		// obj.transform.position = Vector3.Lerp(obj.transform.position, controllerPos, grabTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___obj0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___obj0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___controllerPos1;
		float L_15 = __this->___grabTime_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_13, L_14, L_15, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_16, NULL);
		// obj.transform.rotation = Quaternion.Lerp(obj.transform.rotation, controllerRot, grabTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___obj0;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = ___obj0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___controllerRot2;
		float L_23 = __this->___grabTime_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_21, L_22, L_23, NULL);
		NullCheck(L_18);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_24, NULL);
		// break;
		goto IL_03b6;
	}

IL_00a6:
	{
		// float targetDist = localGrabOffset.z + thumbstick.y * 0.01f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___localGrabOffset_8);
		float L_26 = L_25->___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_1;
		float L_28 = L_27.___y_1;
		V_2 = ((float)il2cpp_codegen_add(L_26, ((float)il2cpp_codegen_multiply(L_28, (0.00999999978f)))));
		// targetDist = Mathf.Clamp(targetDist, 0.1f, 2.0f);
		float L_29 = V_2;
		float L_30;
		L_30 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_29, (0.100000001f), (2.0f), NULL);
		V_2 = L_30;
		// localGrabOffset = Vector3.forward * targetDist;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_31, L_32, NULL);
		__this->___localGrabOffset_8 = L_33;
		// obj.transform.position = Vector3.Lerp(obj.transform.position, controllerPos + controllerRot * localGrabOffset, grabTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = ___obj0;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = ___obj0;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___controllerPos1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___controllerRot2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___localGrabOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_39, L_42, NULL);
		float L_44 = __this->___grabTime_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_38, L_43, L_44, NULL);
		NullCheck(L_35);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_45, NULL);
		// obj.transform.rotation = Quaternion.Lerp(obj.transform.rotation, controllerRot, grabTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = ___obj0;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = ___obj0;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
		NullCheck(L_49);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_49, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = ___controllerRot2;
		float L_52 = __this->___grabTime_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_50, L_51, L_52, NULL);
		NullCheck(L_47);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_47, L_53, NULL);
		// break;
		goto IL_03b6;
	}

IL_013b:
	{
		// obj.transform.position = controllerPos + controllerRot * localGrabOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = ___obj0;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___controllerPos1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57 = ___controllerRot2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = __this->___localGrabOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_57, L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_56, L_59, NULL);
		NullCheck(L_55);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_55, L_60, NULL);
		// obj.transform.rotation = controllerRot * localGrabRotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = ___obj0;
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_61, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63 = ___controllerRot2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64 = __this->___localGrabRotation_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65;
		L_65 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_63, L_64, NULL);
		NullCheck(L_62);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_62, L_65, NULL);
		// ClampGrabOffset(ref localGrabOffset, thumbstick.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_66 = (&__this->___localGrabOffset_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_1;
		float L_68 = L_67.___y_1;
		ObjectManipulator_ClampGrabOffset_m3C05C7CC516676554B1718DB24562B0B21888515(__this, L_66, L_68, NULL);
		// break;
		goto IL_03b6;
	}

IL_0186:
	{
		// obj.transform.position = controllerPos + controllerRot * localGrabOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = ___obj0;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = ___controllerPos1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72 = ___controllerRot2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = __this->___localGrabOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_72, L_73, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_71, L_74, NULL);
		NullCheck(L_70);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_70, L_75, NULL);
		// if (!OVRInput.Get(OVRInput.Button.PrimaryIndexTrigger, controller))
		int32_t L_76 = __this->___controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41(((int32_t)8192), L_76, NULL);
		if (L_77)
		{
			goto IL_01d4;
		}
	}
	{
		// obj.transform.localScale = ClampScale(obj.transform.localScale, thumbstick);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = ___obj0;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_78, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = ___obj0;
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_81, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = ObjectManipulator_ClampScale_m8A1DF0D63CDBEDB49F04219BD301EC0BA0CB1B60(__this, L_82, L_83, NULL);
		NullCheck(L_79);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_79, L_84, NULL);
		goto IL_01f9;
	}

IL_01d4:
	{
		// rotationOffset -= thumbstick.x;
		float L_85 = __this->___rotationOffset_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_86 = V_1;
		float L_87 = L_86.___x_0;
		__this->___rotationOffset_15 = ((float)il2cpp_codegen_subtract(L_85, L_87));
		// ClampGrabOffset(ref localGrabOffset, thumbstick.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_88 = (&__this->___localGrabOffset_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_1;
		float L_90 = L_89.___y_1;
		ObjectManipulator_ClampGrabOffset_m3C05C7CC516676554B1718DB24562B0B21888515(__this, L_88, L_90, NULL);
	}

IL_01f9:
	{
		// Vector3 newFwd = obj.GetComponent<GrabObject>().grabbedRotation * Vector3.forward;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = ___obj0;
		NullCheck(L_91);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_92;
		L_92 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_91, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		NullCheck(L_92);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93 = L_92->___grabbedRotation_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_93, L_94, NULL);
		V_3 = L_95;
		// newFwd = new Vector3(newFwd.x, 0, newFwd.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_3;
		float L_97 = L_96.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = V_3;
		float L_99 = L_98.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_97, (0.0f), L_99, NULL);
		// obj.transform.rotation = Quaternion.Euler(0, rotationOffset, 0) * Quaternion.LookRotation(newFwd);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100 = ___obj0;
		NullCheck(L_100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_100, NULL);
		float L_102 = __this->___rotationOffset_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_103;
		L_103 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_102, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_105;
		L_105 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_104, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_106;
		L_106 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_103, L_105, NULL);
		NullCheck(L_101);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_101, L_106, NULL);
		// break;
		goto IL_03b6;
	}

IL_0257:
	{
		// obj.transform.position = controllerPos + controllerRot * localGrabOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = ___obj0;
		NullCheck(L_107);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
		L_108 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_107, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = ___controllerPos1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_110 = ___controllerRot2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = __this->___localGrabOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_110, L_111, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_109, L_112, NULL);
		NullCheck(L_108);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_108, L_113, NULL);
		// if (!OVRInput.Get(OVRInput.Button.PrimaryIndexTrigger, controller))
		int32_t L_114 = __this->___controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41(((int32_t)8192), L_114, NULL);
		if (L_115)
		{
			goto IL_02a5;
		}
	}
	{
		// obj.transform.localScale = ClampScale(obj.transform.localScale, thumbstick);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116 = ___obj0;
		NullCheck(L_116);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_116, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_118 = ___obj0;
		NullCheck(L_118);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_119;
		L_119 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_118, NULL);
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_119, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_121 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = ObjectManipulator_ClampScale_m8A1DF0D63CDBEDB49F04219BD301EC0BA0CB1B60(__this, L_120, L_121, NULL);
		NullCheck(L_117);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_117, L_122, NULL);
		goto IL_02ca;
	}

IL_02a5:
	{
		// rotationOffset -= thumbstick.x;
		float L_123 = __this->___rotationOffset_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_124 = V_1;
		float L_125 = L_124.___x_0;
		__this->___rotationOffset_15 = ((float)il2cpp_codegen_subtract(L_123, L_125));
		// ClampGrabOffset(ref localGrabOffset, thumbstick.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_126 = (&__this->___localGrabOffset_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_127 = V_1;
		float L_128 = L_127.___y_1;
		ObjectManipulator_ClampGrabOffset_m3C05C7CC516676554B1718DB24562B0B21888515(__this, L_126, L_128, NULL);
	}

IL_02ca:
	{
		// Vector3 newUp = obj.GetComponent<GrabObject>().grabbedRotation * Vector3.up;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_129 = ___obj0;
		NullCheck(L_129);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_130;
		L_130 = GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68(L_129, GameObject_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m69CE932E0E30886326CD07CB6E0055391C0FFE68_RuntimeMethod_var);
		NullCheck(L_130);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_131 = L_130->___grabbedRotation_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_131, L_132, NULL);
		V_4 = L_133;
		// newUp = new Vector3(newUp.x, 0, newUp.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134 = V_4;
		float L_135 = L_134.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = V_4;
		float L_137 = L_136.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), L_135, (0.0f), L_137, NULL);
		// obj.transform.rotation = Quaternion.LookRotation(Vector3.up, Quaternion.Euler(0, rotationOffset, 0) * newUp);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = ___obj0;
		NullCheck(L_138);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139;
		L_139 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_138, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_141 = __this->___rotationOffset_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_142;
		L_142 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_141, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_142, L_143, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_145;
		L_145 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_140, L_144, NULL);
		NullCheck(L_139);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_139, L_145, NULL);
		// break;
		goto IL_03b6;
	}

IL_0331:
	{
		// Vector3 targetPos = handGrabPosition + (handGrabRotation * Vector3.forward * 0.4f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146 = __this->___handGrabPosition_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_147 = __this->___handGrabRotation_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		L_148 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_147, L_148, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_149, (0.400000006f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_146, L_150, NULL);
		V_5 = L_151;
		// Quaternion targetRotation = Quaternion.LookRotation(targetPos - camGrabPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153 = __this->___camGrabPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_152, L_153, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_155;
		L_155 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_154, NULL);
		V_6 = L_155;
		// obj.transform.position = Vector3.Lerp(obj.transform.position, targetPos, grabTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156 = ___obj0;
		NullCheck(L_156);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_157;
		L_157 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_156, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_158 = ___obj0;
		NullCheck(L_158);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_159;
		L_159 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_158, NULL);
		NullCheck(L_159);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
		L_160 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_159, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161 = V_5;
		float L_162 = __this->___grabTime_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163;
		L_163 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_160, L_161, L_162, NULL);
		NullCheck(L_157);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_157, L_163, NULL);
		// obj.transform.rotation = Quaternion.Lerp(obj.transform.rotation, targetRotation, grabTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_164 = ___obj0;
		NullCheck(L_164);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_165;
		L_165 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_164, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_166 = ___obj0;
		NullCheck(L_166);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_167;
		L_167 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_166, NULL);
		NullCheck(L_167);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_168;
		L_168 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_167, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_169 = V_6;
		float L_170 = __this->___grabTime_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_171;
		L_171 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_168, L_169, L_170, NULL);
		NullCheck(L_165);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_165, L_171, NULL);
		// break;
		goto IL_03b6;
	}

IL_03b4:
	{
		// useDefaultManipulation = true;
		V_0 = (bool)1;
	}

IL_03b6:
	{
		// if (useDefaultManipulation)
		bool L_172 = V_0;
		if (!L_172)
		{
			goto IL_0404;
		}
	}
	{
		// obj.transform.position = controllerPos + controllerRot * localGrabOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_173 = ___obj0;
		NullCheck(L_173);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_174;
		L_174 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_173, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175 = ___controllerPos1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_176 = ___controllerRot2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_177 = __this->___localGrabOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_178;
		L_178 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_176, L_177, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179;
		L_179 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_175, L_178, NULL);
		NullCheck(L_174);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_174, L_179, NULL);
		// obj.transform.Rotate(Vector3.up * -thumbstick.x);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_180 = ___obj0;
		NullCheck(L_180);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_181;
		L_181 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_180, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182;
		L_182 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_183 = V_1;
		float L_184 = L_183.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_185;
		L_185 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_182, ((-L_184)), NULL);
		NullCheck(L_181);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_181, L_185, NULL);
		// ClampGrabOffset(ref localGrabOffset, thumbstick.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_186 = (&__this->___localGrabOffset_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_187 = V_1;
		float L_188 = L_187.___y_1;
		ObjectManipulator_ClampGrabOffset_m3C05C7CC516676554B1718DB24562B0B21888515(__this, L_186, L_188, NULL);
	}

IL_0404:
	{
		// }
		return;
	}
}
// System.Void ObjectManipulator::ClampGrabOffset(UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_ClampGrabOffset_m3C05C7CC516676554B1718DB24562B0B21888515 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___localOffset0, float ___thumbY1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 projectedGrabOffset = localOffset + Vector3.forward * thumbY * 0.01f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___localOffset0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_3 = ___thumbY1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, (0.00999999978f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_5, NULL);
		V_0 = L_6;
		// if (projectedGrabOffset.z > 0.1f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___z_4;
		if ((!(((float)L_8) > ((float)(0.100000001f)))))
		{
			goto IL_0035;
		}
	}
	{
		// localOffset = projectedGrabOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___localOffset0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_9 = L_10;
	}

IL_0035:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 ObjectManipulator::ClampScale(UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ObjectManipulator_ClampScale_m8A1DF0D63CDBEDB49F04219BD301EC0BA0CB1B60 (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___thumb1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float newXscale = localScale.x + thumb.x * 0.01f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___localScale0;
		float L_1 = L_0.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___thumb1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_3, (0.00999999978f)))));
		// if (newXscale <= 0.1f) newXscale = 0.1f;
		float L_4 = V_0;
		if ((!(((float)L_4) <= ((float)(0.100000001f)))))
		{
			goto IL_0022;
		}
	}
	{
		// if (newXscale <= 0.1f) newXscale = 0.1f;
		V_0 = (0.100000001f);
	}

IL_0022:
	{
		// float newZscale = localScale.z + thumb.y * 0.01f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___localScale0;
		float L_6 = L_5.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___thumb1;
		float L_8 = L_7.___y_1;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_8, (0.00999999978f)))));
		// if (newZscale <= 0.1f) newZscale = 0.1f;
		float L_9 = V_1;
		if ((!(((float)L_9) <= ((float)(0.100000001f)))))
		{
			goto IL_0044;
		}
	}
	{
		// if (newZscale <= 0.1f) newZscale = 0.1f;
		V_1 = (0.100000001f);
	}

IL_0044:
	{
		// return new Vector3(newXscale, 0.0f, newZscale);
		float L_10 = V_0;
		float L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_10, (0.0f), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void ObjectManipulator::CheckForDominantHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_CheckForDominantHand_m26CA3020FA90F7F1421B3E622E02150E3BDB5D2D (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hoverObject || grabObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___hoverObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___grabObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		// return;
		return;
	}

IL_001b:
	{
		// if (controller == OVRInput.Controller.RTouch)
		int32_t L_4 = __this->___controller_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_003d;
		}
	}
	{
		// if (OVRInput.Get(OVRInput.RawButton.LHandTrigger))
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = OVRInput_Get_mE1592108DD22A90FA3B639CE2C0C8252456978BA(((int32_t)536870912), ((int32_t)-2147483648LL), NULL);
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		// controller = OVRInput.Controller.LTouch;
		__this->___controller_4 = 1;
		return;
	}

IL_003d:
	{
		// if (OVRInput.Get(OVRInput.RawButton.RHandTrigger))
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = OVRInput_Get_mE1592108DD22A90FA3B639CE2C0C8252456978BA(((int32_t)134217728), ((int32_t)-2147483648LL), NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// controller = OVRInput.Controller.RTouch;
		__this->___controller_4 = 2;
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void ObjectManipulator::AssignInstructions(GrabObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_AssignInstructions_m6E1ACD52C1382B530968DFCA4A7943BD51B65F0A (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* ___targetObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DBC684C5809081E5C16423955A5853D6626D36D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (objectNameLabel)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___objectNameLabel_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// objectNameLabel.text = targetObject.ObjectName;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2 = __this->___objectNameLabel_18;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_3 = ___targetObject0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___ObjectName_4;
		NullCheck(L_2);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_2, L_4, NULL);
	}

IL_001e:
	{
		// if (objectInstructionsLabel)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_5 = __this->___objectInstructionsLabel_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		// if (grabObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___grabObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// objectInstructionsLabel.text = targetObject.ObjectInstructions;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_9 = __this->___objectInstructionsLabel_19;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_10 = ___targetObject0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___ObjectInstructions_5;
		NullCheck(L_9);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_9, L_11, NULL);
		return;
	}

IL_004a:
	{
		// objectInstructionsLabel.text = "Grip Trigger to grab";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_12 = __this->___objectInstructionsLabel_19;
		NullCheck(L_12);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_12, _stringLiteral0DBC684C5809081E5C16423955A5853D6626D36D, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void ObjectManipulator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator__ctor_m56093D9D7B1068423B526220CF72C7C735AEBE3C (ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* __this, const RuntimeMethod* method) 
{
	{
		// OVRInput.Controller controller = OVRInput.Controller.RTouch;
		__this->___controller_4 = 2;
		// Vector3 localGrabOffset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___localGrabOffset_8 = L_0;
		// Quaternion localGrabRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___localGrabRotation_9 = L_1;
		// Vector3 camGrabPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___camGrabPosition_10 = L_2;
		// Quaternion camGrabRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___camGrabRotation_11 = L_3;
		// Vector3 handGrabPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___handGrabPosition_12 = L_4;
		// Quaternion handGrabRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___handGrabRotation_13 = L_5;
		// Vector3 cursorPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___cursorPosition_14 = L_6;
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
// System.Void ObjectManipulator/<StartDemo>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartDemoU3Ed__23__ctor_m12403FDDEB2C7E3D78B91B5074609B24356EA708 (U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ObjectManipulator/<StartDemo>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartDemoU3Ed__23_System_IDisposable_Dispose_m3A8D1C001859842878ED672C090ABEF43A176578 (U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ObjectManipulator/<StartDemo>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartDemoU3Ed__23_MoveNext_mAFA85B50106558C534EE3168B080C8F4F1F2DF4D (U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00bd;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// demoObjects.SetActive(false);
		ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___demoObjects_21;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_3 = (0.0f);
		// float fadeTime = 1.0f;
		__this->___U3CfadeTimeU3E5__3_4 = (1.0f);
		goto IL_00c4;
	}

IL_0045:
	{
		// timer += Time.deltaTime;
		float L_6 = __this->___U3CtimerU3E5__2_3;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CtimerU3E5__2_3 = ((float)il2cpp_codegen_add(L_6, L_7));
		// float normTimer = Mathf.Clamp01(timer / fadeTime);
		float L_8 = __this->___U3CtimerU3E5__2_3;
		float L_9 = __this->___U3CfadeTimeU3E5__3_4;
		float L_10;
		L_10 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_8/L_9)), NULL);
		V_3 = L_10;
		// if (passthrough)
		ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* L_11 = V_1;
		NullCheck(L_11);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_12 = L_11->___passthrough_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_12, NULL);
		if (!L_13)
		{
			goto IL_00ad;
		}
	}
	{
		// passthrough.colorMapEditorBrightness = Mathf.Lerp(-1.0f, 0.0f, normTimer);
		ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* L_14 = V_1;
		NullCheck(L_14);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_15 = L_14->___passthrough_22;
		float L_16 = V_3;
		float L_17;
		L_17 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((-1.0f), (0.0f), L_16, NULL);
		NullCheck(L_15);
		L_15->___colorMapEditorBrightness_16 = L_17;
		// passthrough.colorMapEditorContrast = Mathf.Lerp(-1.0f, 0.0f, normTimer);
		ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* L_18 = V_1;
		NullCheck(L_18);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_19 = L_18->___passthrough_22;
		float L_20 = V_3;
		float L_21;
		L_21 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((-1.0f), (0.0f), L_20, NULL);
		NullCheck(L_19);
		L_19->___colorMapEditorContrast_14 = L_21;
	}

IL_00ad:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00bd:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c4:
	{
		// while (timer <= fadeTime)
		float L_22 = __this->___U3CtimerU3E5__2_3;
		float L_23 = __this->___U3CfadeTimeU3E5__3_4;
		if ((((float)L_22) <= ((float)L_23)))
		{
			goto IL_0045;
		}
	}
	{
		// demoObjects.SetActive(true);
		ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* L_24 = V_1;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___demoObjects_21;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
		// Vector3 objFwd = new Vector3(Camera.main.transform.forward.x, 0, Camera.main.transform.forward.z).normalized;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26;
		L_26 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_27, NULL);
		float L_29 = L_28.___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30;
		L_30 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_31, NULL);
		float L_33 = L_32.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), L_29, (0.0f), L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		V_2 = L_35;
		// demoObjects.transform.position = Camera.main.transform.position + objFwd;
		ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* L_36 = V_1;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = L_36->___demoObjects_21;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39;
		L_39 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_41, L_42, NULL);
		NullCheck(L_38);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_38, L_43, NULL);
		// demoObjects.transform.rotation = Quaternion.LookRotation(objFwd);
		ObjectManipulator_tA13D2F669B8A95F2E2D5B70B62944C65DB0B4C37* L_44 = V_1;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = L_44->___demoObjects_21;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_47, NULL);
		NullCheck(L_46);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_46, L_48, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ObjectManipulator/<StartDemo>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartDemoU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF6C112B9AA3197EE46A50AAF9AFBC317D2AF0E79 (U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ObjectManipulator/<StartDemo>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartDemoU3Ed__23_System_Collections_IEnumerator_Reset_m38A51810105F9FD357C6D6B1222AC599C89228EE (U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartDemoU3Ed__23_System_Collections_IEnumerator_Reset_m38A51810105F9FD357C6D6B1222AC599C89228EE_RuntimeMethod_var)));
	}
}
// System.Object ObjectManipulator/<StartDemo>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartDemoU3Ed__23_System_Collections_IEnumerator_get_Current_mE5E24337C2DE22368FBD5B90C5230BBA6B9BD45D (U3CStartDemoU3Ed__23_t8EF1BC16F76CAFDF755471662CC5ECF96B6CDF67* __this, const RuntimeMethod* method) 
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
// System.Void OverlayPassthrough::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayPassthrough_Start_mC6CC1D35C0DE10FF65E046B26DD1B98B07868F52 (OverlayPassthrough_tB1254B7C8C316EE465B3D82B5DADBBB4B9DFD657* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E0D888AD2B37768070F720A6324E0D300832EFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6FA72EC45FD0E48D18B8AAD3CF4675AC718B834);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83365DE47F10CF708EE1858733DE1AA5560C7D5);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject ovrCameraRig = GameObject.Find("OVRCameraRig");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralA83365DE47F10CF708EE1858733DE1AA5560C7D5, NULL);
		V_0 = L_0;
		// if (ovrCameraRig == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("Scene does not contain an OVRCameraRig");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral7E0D888AD2B37768070F720A6324E0D300832EFB, NULL);
		// return;
		return;
	}

IL_001f:
	{
		// passthroughLayer = ovrCameraRig.GetComponent<OVRPassthroughLayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_4;
		L_4 = GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757(L_3, GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757_RuntimeMethod_var);
		__this->___passthroughLayer_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___passthroughLayer_4), (void*)L_4);
		// if (passthroughLayer == null)
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_5 = __this->___passthroughLayer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogError("OVRCameraRig does not contain an OVRPassthroughLayer component");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA6FA72EC45FD0E48D18B8AAD3CF4675AC718B834, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void OverlayPassthrough::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayPassthrough_Update_mFD5F321A621B646782D2AE909C69750DD66C8FB4 (OverlayPassthrough_tB1254B7C8C316EE465B3D82B5DADBBB4B9DFD657* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch))
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = OVRInput_GetDown_mB545BE1CFB07364E7DE792A9CD7C4B614736525A(1, 2, NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// passthroughLayer.hidden = !passthroughLayer.hidden;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_1 = __this->___passthroughLayer_4;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_2 = __this->___passthroughLayer_4;
		NullCheck(L_2);
		bool L_3 = L_2->___hidden_7;
		NullCheck(L_1);
		L_1->___hidden_7 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0022:
	{
		// float thumbstickX = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, OVRInput.Controller.RTouch).x;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = OVRInput_Get_m5DC55CC9D553D98F95937AB80D77C1120BB56CC6(1, 2, NULL);
		float L_5 = L_4.___x_0;
		V_0 = L_5;
		// passthroughLayer.textureOpacity = thumbstickX * 0.5f + 0.5f;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_6 = __this->___passthroughLayer_4;
		float L_7 = V_0;
		NullCheck(L_6);
		OVRPassthroughLayer_set_textureOpacity_mEACE3A3ACF194F76196F3E2CAD1955755CB053CC(L_6, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, (0.5f))), (0.5f))), NULL);
		// }
		return;
	}
}
// System.Void OverlayPassthrough::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayPassthrough__ctor_mBF4FA747A0B2D19EF7A40E25270504959FB24D12 (OverlayPassthrough_tB1254B7C8C316EE465B3D82B5DADBBB4B9DFD657* __this, const RuntimeMethod* method) 
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
// System.Void PassthroughBrush::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughBrush_OnDisable_mCB23CDD7CE4169642CCB5135584A3795140055ED (PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* __this, const RuntimeMethod* method) 
{
	{
		// brushStatus = BrushState.Idle;
		__this->___brushStatus_13 = 0;
		// }
		return;
	}
}
// System.Void PassthroughBrush::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughBrush_LateUpdate_m169256DCAA86D9A3FEC155FCE81E78BD30735322 (PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// transform.rotation = Quaternion.LookRotation(transform.position - Camera.main.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_6, NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_7, NULL);
		// if (!(controllerHand == OVRInput.Controller.LTouch || controllerHand == OVRInput.Controller.RTouch))
		int32_t L_8 = __this->___controllerHand_4;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_9 = __this->___controllerHand_4;
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_0042;
		}
	}
	{
		// return;
		return;
	}

IL_0042:
	{
		// Vector3 tipPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		V_0 = L_11;
		// switch (brushStatus)
		int32_t L_12 = __this->___brushStatus_13;
		V_1 = L_12;
		int32_t L_13 = V_1;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0092;
		}
	}
	{
		return;
	}

IL_005d:
	{
		// if (OVRInput.GetUp(OVRInput.Button.One, controllerHand))
		int32_t L_15 = __this->___controllerHand_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = OVRInput_GetUp_m11DA43291070262B20D13A3E599EBE0C6A2D02D5(1, L_15, NULL);
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		// UndoInkLine();
		PassthroughBrush_UndoInkLine_m7EEAD7C142125FF7A48F33B977041CD805E4728B(__this, NULL);
	}

IL_0071:
	{
		// if (OVRInput.GetDown(OVRInput.Button.PrimaryIndexTrigger, controllerHand))
		int32_t L_17 = __this->___controllerHand_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = OVRInput_GetDown_mB545BE1CFB07364E7DE792A9CD7C4B614736525A(((int32_t)8192), L_17, NULL);
		if (!L_18)
		{
			goto IL_00b2;
		}
	}
	{
		// StartLine(tipPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		PassthroughBrush_StartLine_m56ED493AE63D35FD26B6CCF277FFE10C0381792E(__this, L_19, NULL);
		// brushStatus = BrushState.Inking;
		__this->___brushStatus_13 = 1;
		// break;
		return;
	}

IL_0092:
	{
		// UpdateLine(tipPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		PassthroughBrush_UpdateLine_m264FA6BEC44B965FE247E3677B172D25C9E3A0E7(__this, L_20, NULL);
		// if (OVRInput.GetUp(OVRInput.Button.PrimaryIndexTrigger, controllerHand))
		int32_t L_21 = __this->___controllerHand_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = OVRInput_GetUp_m11DA43291070262B20D13A3E599EBE0C6A2D02D5(((int32_t)8192), L_21, NULL);
		if (!L_22)
		{
			goto IL_00b2;
		}
	}
	{
		// brushStatus = BrushState.Idle;
		__this->___brushStatus_13 = 0;
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void PassthroughBrush::StartLine(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughBrush_StartLine_m56ED493AE63D35FD26B6CCF277FFE10C0381792E (PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inkPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject newLine = Instantiate(lineSegmentPrefab, inkPos, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lineSegmentPrefab_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___inkPos0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_0 = L_3;
		// currentLineSegment = newLine.GetComponent<LineRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5;
		L_5 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_4, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		__this->___currentLineSegment_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLineSegment_8), (void*)L_5);
		// currentLineSegment.positionCount = 1;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = __this->___currentLineSegment_8;
		NullCheck(L_6);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_6, 1, NULL);
		// currentLineSegment.SetPosition(0, inkPos);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7 = __this->___currentLineSegment_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___inkPos0;
		NullCheck(L_7);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_7, 0, L_8, NULL);
		// strokeWidth = currentLineSegment.startWidth;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = __this->___currentLineSegment_8;
		NullCheck(L_9);
		float L_10;
		L_10 = LineRenderer_get_startWidth_mBCCB6AAF695BDAC66A971805A8E141E2757133FA(L_9, NULL);
		__this->___strokeWidth_11 = L_10;
		// strokeLength = 0.0f;
		__this->___strokeLength_12 = (0.0f);
		// inkPositions.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = __this->___inkPositions_9;
		NullCheck(L_11);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_11, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// inkPositions.Add(inkPos);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = __this->___inkPositions_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___inkPos0;
		NullCheck(L_12);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_12, L_13, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// newLine.transform.parent = lineContainer.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___lineContainer_6;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_15);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_15, L_17, NULL);
		// }
		return;
	}
}
// System.Void PassthroughBrush::UpdateLine(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughBrush_UpdateLine_m264FA6BEC44B965FE247E3677B172D25C9E3A0E7 (PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inkPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D85A50F9BBB0344E75546C4B240B84801DD73A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float segmentLength = (inkPos - inkPositions[inkPositions.Count - 1]).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___inkPos0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = __this->___inkPositions_9;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = __this->___inkPositions_9;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_2, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_1, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_4, NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		V_0 = L_6;
		// if (segmentLength >= minInkDist)
		float L_7 = V_0;
		float L_8 = __this->___minInkDist_10;
		if ((!(((float)L_7) >= ((float)L_8))))
		{
			goto IL_0098;
		}
	}
	{
		// inkPositions.Add(inkPos);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_9 = __this->___inkPositions_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___inkPos0;
		NullCheck(L_9);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_9, L_10, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// currentLineSegment.positionCount = inkPositions.Count;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_11 = __this->___currentLineSegment_8;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = __this->___inkPositions_9;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_12, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_11);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_11, L_13, NULL);
		// currentLineSegment.SetPositions(inkPositions.ToArray());
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_14 = __this->___currentLineSegment_8;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15 = __this->___inkPositions_9;
		NullCheck(L_15);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16;
		L_16 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_15, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		NullCheck(L_14);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_14, L_16, NULL);
		// strokeLength += segmentLength;
		float L_17 = __this->___strokeLength_12;
		float L_18 = V_0;
		__this->___strokeLength_12 = ((float)il2cpp_codegen_add(L_17, L_18));
		// currentLineSegment.material.SetFloat("_LineLength", strokeLength / strokeWidth);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_19 = __this->___currentLineSegment_8;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_19, NULL);
		float L_21 = __this->___strokeLength_12;
		float L_22 = __this->___strokeWidth_11;
		NullCheck(L_20);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_20, _stringLiteral77D85A50F9BBB0344E75546C4B240B84801DD73A, ((float)(L_21/L_22)), NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void PassthroughBrush::ClearLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughBrush_ClearLines_m40A828EBA922A5B24CB438F5AA8D397FA61BE728 (PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < lineContainer.transform.childCount; i++)
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		// Destroy(lineContainer.transform.GetChild(i).gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lineContainer_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// for (int i = 0; i < lineContainer.transform.childCount; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0023:
	{
		// for (int i = 0; i < lineContainer.transform.childCount; i++)
		int32_t L_6 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___lineContainer_6;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_8, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PassthroughBrush::UndoInkLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughBrush_UndoInkLine_m7EEAD7C142125FF7A48F33B977041CD805E4728B (PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lineContainer.transform.childCount >= 1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lineContainer_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		// Destroy(lineContainer.transform.GetChild(lineContainer.transform.childCount - 1).gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___lineContainer_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___lineContainer_6;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_6, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_9, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void PassthroughBrush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughBrush__ctor_m84607F4DDAFD0CAEA5F3E21C5DC5051C956E5A0E (PassthroughBrush_t10BDE8CD2D5F114064044E1020825B0DD5AB9A8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool forceActive = true;
		__this->___forceActive_7 = (bool)1;
		// List<Vector3> inkPositions = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___inkPositions_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inkPositions_9), (void*)L_0);
		// float minInkDist = 0.01f;
		__this->___minInkDist_10 = (0.00999999978f);
		// float strokeWidth = 0.1f;
		__this->___strokeWidth_11 = (0.100000001f);
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
// System.Void PassthroughController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughController_Start_mD8E1AAAF2E6B15C814B4C4A7FA10556BABCB456B (PassthroughController_t9CFF0C42C4A8A23558F84FD91439EABAE9B8D58B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E0D888AD2B37768070F720A6324E0D300832EFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6FA72EC45FD0E48D18B8AAD3CF4675AC718B834);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83365DE47F10CF708EE1858733DE1AA5560C7D5);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject ovrCameraRig = GameObject.Find("OVRCameraRig");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralA83365DE47F10CF708EE1858733DE1AA5560C7D5, NULL);
		V_0 = L_0;
		// if (ovrCameraRig == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("Scene does not contain an OVRCameraRig");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral7E0D888AD2B37768070F720A6324E0D300832EFB, NULL);
		// return;
		return;
	}

IL_001f:
	{
		// passthroughLayer = ovrCameraRig.GetComponent<OVRPassthroughLayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_4;
		L_4 = GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757(L_3, GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757_RuntimeMethod_var);
		__this->___passthroughLayer_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___passthroughLayer_4), (void*)L_4);
		// if (passthroughLayer == null)
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_5 = __this->___passthroughLayer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogError("OVRCameraRig does not contain an OVRPassthroughLayer component");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA6FA72EC45FD0E48D18B8AAD3CF4675AC718B834, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void PassthroughController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughController_Update_m5DD0B3F6211EA612D63B208F480EC53FADA07C44 (PassthroughController_t9CFF0C42C4A8A23558F84FD91439EABAE9B8D58B* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float colorHSV = Time.time * 0.1f;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		// colorHSV %= 1; // make sure value is normalized (0-1) so Color.HSVToRGB functions correctly
		// Color edgeColor = Color.HSVToRGB(colorHSV, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_HSVToRGB_mD057CF0F1810C00D0F9E98A5CC5599213CF167DB_inline((fmodf(((float)il2cpp_codegen_multiply(L_0, (0.100000001f))), (1.0f))), (1.0f), (1.0f), NULL);
		V_0 = L_1;
		// passthroughLayer.edgeColor = edgeColor;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_2 = __this->___passthroughLayer_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = V_0;
		NullCheck(L_2);
		OVRPassthroughLayer_set_edgeColor_mA3002CE6A3BAF02E96A4F6C96456C285C3CC76C2(L_2, L_3, NULL);
		// float contrastRange = Mathf.Sin(Time.time); // returns a value -1...1, ideal range for contrast
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_5;
		L_5 = sinf(L_4);
		V_1 = L_5;
		// passthroughLayer.SetColorMapControls(contrastRange);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_6 = __this->___passthroughLayer_4;
		float L_7 = V_1;
		NullCheck(L_6);
		OVRPassthroughLayer_SetColorMapControls_m09E4D3B393E14D8044CAD156C495BF59A6B82A73(L_6, L_7, (0.0f), (0.0f), (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*)NULL, 1, NULL);
		// transform.position = Camera.main.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_11, NULL);
		// transform.rotation = Quaternion.LookRotation(new Vector3(Camera.main.transform.forward.x, 0.0f, Camera.main.transform.forward.z).normalized);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		float L_16 = L_15.___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_18, NULL);
		float L_20 = L_19.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), L_16, (0.0f), L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_22, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_23, NULL);
		// }
		return;
	}
}
// System.Void PassthroughController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughController__ctor_m307DD082E03EC29FD25906AF0E38EEF7063F3563 (PassthroughController_t9CFF0C42C4A8A23558F84FD91439EABAE9B8D58B* __this, const RuntimeMethod* method) 
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
// System.Void PassthroughProjectionSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughProjectionSurface_Start_mE327B971C2343207AEEE876646A187BE8B1BBEE1 (PassthroughProjectionSurface_tB27B44A28747BCB4495785540EBA23852E5C2BCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E0D888AD2B37768070F720A6324E0D300832EFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6FA72EC45FD0E48D18B8AAD3CF4675AC718B834);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83365DE47F10CF708EE1858733DE1AA5560C7D5);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject ovrCameraRig = GameObject.Find("OVRCameraRig");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralA83365DE47F10CF708EE1858733DE1AA5560C7D5, NULL);
		V_0 = L_0;
		// if (ovrCameraRig == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("Scene does not contain an OVRCameraRig");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral7E0D888AD2B37768070F720A6324E0D300832EFB, NULL);
		// return;
		return;
	}

IL_001f:
	{
		// passthroughLayer = ovrCameraRig.GetComponent<OVRPassthroughLayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_4;
		L_4 = GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757(L_3, GameObject_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_mC30ED0209380576CE355980BD8A0A9C11C98C757_RuntimeMethod_var);
		__this->___passthroughLayer_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___passthroughLayer_4), (void*)L_4);
		// if (passthroughLayer == null)
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_5 = __this->___passthroughLayer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogError("OVRCameraRig does not contain an OVRPassthroughLayer component");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA6FA72EC45FD0E48D18B8AAD3CF4675AC718B834, NULL);
	}

IL_0043:
	{
		// passthroughLayer.AddSurfaceGeometry(projectionObject.gameObject, true);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_7 = __this->___passthroughLayer_4;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_8 = __this->___projectionObject_5;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_7);
		OVRPassthroughLayer_AddSurfaceGeometry_mF2776AE6648CC7D9965F7B034DFCC43754B5C1DC(L_7, L_9, (bool)1, NULL);
		// quadOutline = projectionObject.GetComponent<MeshRenderer>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_10 = __this->___projectionObject_5;
		NullCheck(L_10);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_11;
		L_11 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_10, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___quadOutline_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quadOutline_6), (void*)L_11);
		// quadOutline.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_12 = __this->___quadOutline_6;
		NullCheck(L_12);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PassthroughProjectionSurface::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughProjectionSurface_Update_m66308F34ECE41D00DB32AE198484B61A40C047AD (PassthroughProjectionSurface_tB27B44A28747BCB4495785540EBA23852E5C2BCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (OVRInput.GetDown(OVRInput.Button.One))
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = OVRInput_GetDown_mB545BE1CFB07364E7DE792A9CD7C4B614736525A(1, ((int32_t)-2147483648LL), NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// passthroughLayer.RemoveSurfaceGeometry(projectionObject.gameObject);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_1 = __this->___passthroughLayer_4;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2 = __this->___projectionObject_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_1);
		OVRPassthroughLayer_RemoveSurfaceGeometry_mC4E7F005E96534F8039A5E474A396FD897F7A705(L_1, L_3, NULL);
		// quadOutline.enabled = true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = __this->___quadOutline_6;
		NullCheck(L_4);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)1, NULL);
	}

IL_002f:
	{
		// if (OVRInput.Get(OVRInput.Button.One))
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41(1, ((int32_t)-2147483648LL), NULL);
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		// OVRInput.Controller controllingHand = OVRInput.Controller.RTouch;
		V_0 = 2;
		// transform.position = OVRInput.GetLocalControllerPosition(controllingHand);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = OVRInput_GetLocalControllerPosition_m5630E056EBDF6BD0A317D19DE90AFC0C80233B69(L_7, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_8, NULL);
		// transform.rotation = OVRInput.GetLocalControllerRotation(controllingHand);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = OVRInput_GetLocalControllerRotation_mD0D287501357996403558E697CC65161E0B5D51A(L_10, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_11, NULL);
	}

IL_0060:
	{
		// if (OVRInput.GetUp(OVRInput.Button.One))
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = OVRInput_GetUp_m11DA43291070262B20D13A3E599EBE0C6A2D02D5(1, ((int32_t)-2147483648LL), NULL);
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		// passthroughLayer.AddSurfaceGeometry(projectionObject.gameObject);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_13 = __this->___passthroughLayer_4;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_14 = __this->___projectionObject_5;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_13);
		OVRPassthroughLayer_AddSurfaceGeometry_mF2776AE6648CC7D9965F7B034DFCC43754B5C1DC(L_13, L_15, (bool)0, NULL);
		// quadOutline.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_16 = __this->___quadOutline_6;
		NullCheck(L_16);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_16, (bool)0, NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void PassthroughProjectionSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughProjectionSurface__ctor_m4E1304D0D9B3FCC4301919F9D726729EFC981B10 (PassthroughProjectionSurface_tB27B44A28747BCB4495785540EBA23852E5C2BCA* __this, const RuntimeMethod* method) 
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
// System.Void PassthroughStyler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_Start_mADA050D59B06523A73ACB1D24C0288A373A8CEFC (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PassthroughStyler_Cursor_mE779FE7AEE92BA34E25D05902D96ABD5C9BB67C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PassthroughStyler_Grab_m50A0EA69866DFA4487D1132BC7DA0EE567366B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PassthroughStyler_Release_m8AC3DC4B2DD06AF399D8F46D7E8E7F26A7FDC547_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<GrabObject>())
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_0;
		L_0 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0082;
		}
	}
	{
		// GetComponent<GrabObject>().GrabbedObjectDelegate += Grab;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_2;
		L_2 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_3 = L_2;
		NullCheck(L_3);
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_4 = L_3->___GrabbedObjectDelegate_9;
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_5 = (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)il2cpp_codegen_object_new(GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GrabbedObject__ctor_m9B22A387B9350AA1E0D2DECB2DE2D7302D944786(L_5, __this, (intptr_t)((void*)PassthroughStyler_Grab_m50A0EA69866DFA4487D1132BC7DA0EE567366B36_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___GrabbedObjectDelegate_9 = ((GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)CastclassSealed((RuntimeObject*)L_6, GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___GrabbedObjectDelegate_9), (void*)((GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)CastclassSealed((RuntimeObject*)L_6, GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var)));
		// GetComponent<GrabObject>().ReleasedObjectDelegate += Release;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_7;
		L_7 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_8 = L_7;
		NullCheck(L_8);
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_9 = L_8->___ReleasedObjectDelegate_10;
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_10 = (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)il2cpp_codegen_object_new(ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ReleasedObject__ctor_mE889B3F2A51BDB89BCEC05EF41D36A3AFC980E10(L_10, __this, (intptr_t)((void*)PassthroughStyler_Release_m8AC3DC4B2DD06AF399D8F46D7E8E7F26A7FDC547_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_9, L_10, NULL);
		NullCheck(L_8);
		L_8->___ReleasedObjectDelegate_10 = ((ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)CastclassSealed((RuntimeObject*)L_11, ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___ReleasedObjectDelegate_10), (void*)((ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)CastclassSealed((RuntimeObject*)L_11, ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var)));
		// GetComponent<GrabObject>().CursorPositionDelegate += Cursor;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_12;
		L_12 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_13 = L_12;
		NullCheck(L_13);
		SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* L_14 = L_13->___CursorPositionDelegate_11;
		SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* L_15 = (SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C*)il2cpp_codegen_object_new(SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		SetCursorPosition__ctor_m9A55912654491E64786814ADBA0C7EF86F8B7246(L_15, __this, (intptr_t)((void*)PassthroughStyler_Cursor_mE779FE7AEE92BA34E25D05902D96ABD5C9BB67C8_RuntimeMethod_var), NULL);
		Delegate_t* L_16;
		L_16 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_14, L_15, NULL);
		NullCheck(L_13);
		L_13->___CursorPositionDelegate_11 = ((SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C*)CastclassSealed((RuntimeObject*)L_16, SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___CursorPositionDelegate_11), (void*)((SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C*)CastclassSealed((RuntimeObject*)L_16, SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C_il2cpp_TypeInfo_var)));
	}

IL_0082:
	{
		// savedColor = new Color(1, 1, 1, 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_17), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___savedColor_13 = L_17;
		// ShowFullMenu(false);
		PassthroughStyler_ShowFullMenu_m6892265715E3CA3314F8E1F9B429FD8482E534BF(__this, (bool)0, NULL);
		// mainCanvas.interactable = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_18 = __this->___mainCanvas_16;
		NullCheck(L_18);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_18, (bool)0, NULL);
		// passthroughLayer.colorMapEditorType = OVRPassthroughLayer.ColorMapEditorType.ColorAdjustment;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_19 = __this->___passthroughLayer_5;
		NullCheck(L_19);
		OVRPassthroughLayer_set_colorMapEditorType_m29A2DD086E958C85617DFB8782A4070020D8C8B5(L_19, 4, NULL);
		// }
		return;
	}
}
// System.Void PassthroughStyler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_Update_m61190D1E114D32A619726343CB9AD8ECEE6D574D (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, const RuntimeMethod* method) 
{
	{
		// if (controllerHand == OVRInput.Controller.None)
		int32_t L_0 = __this->___controllerHand_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (settingColor)
		bool L_1 = __this->___settingColor_12;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GetColorFromWheel();
		PassthroughStyler_GetColorFromWheel_mE2E626FCA9318AEA470176ADF4AE1D7019E73353(__this, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void PassthroughStyler::Grab(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_Grab_m50A0EA69866DFA4487D1132BC7DA0EE567366B36 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, int32_t ___grabHand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controllerHand = grabHand;
		int32_t L_0 = ___grabHand0;
		__this->___controllerHand_4 = L_0;
		// ShowFullMenu(true);
		PassthroughStyler_ShowFullMenu_m6892265715E3CA3314F8E1F9B429FD8482E534BF(__this, (bool)1, NULL);
		// if (mainCanvas) mainCanvas.interactable = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1 = __this->___mainCanvas_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// if (mainCanvas) mainCanvas.interactable = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3 = __this->___mainCanvas_16;
		NullCheck(L_3);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_3, (bool)1, NULL);
	}

IL_0027:
	{
		// if (fadeIn != null) StopCoroutine(fadeIn);
		RuntimeObject* L_4 = __this->___fadeIn_6;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// if (fadeIn != null) StopCoroutine(fadeIn);
		RuntimeObject* L_5 = __this->___fadeIn_6;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_5, NULL);
	}

IL_003b:
	{
		// if (fadeOut != null) StopCoroutine(fadeOut);
		RuntimeObject* L_6 = __this->___fadeOut_7;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// if (fadeOut != null) StopCoroutine(fadeOut);
		RuntimeObject* L_7 = __this->___fadeOut_7;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_7, NULL);
	}

IL_004f:
	{
		// fadeIn = FadeToCurrentStyle(0.2f);
		RuntimeObject* L_8;
		L_8 = PassthroughStyler_FadeToCurrentStyle_m90283EA370FECB79C4798986865C56C9D5569562(__this, (0.200000003f), NULL);
		__this->___fadeIn_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fadeIn_6), (void*)L_8);
		// StartCoroutine(fadeIn);
		RuntimeObject* L_9 = __this->___fadeIn_6;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void PassthroughStyler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_Release_m8AC3DC4B2DD06AF399D8F46D7E8E7F26A7FDC547 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controllerHand = OVRInput.Controller.None;
		__this->___controllerHand_4 = 0;
		// ShowFullMenu(false);
		PassthroughStyler_ShowFullMenu_m6892265715E3CA3314F8E1F9B429FD8482E534BF(__this, (bool)0, NULL);
		// if (mainCanvas) mainCanvas.interactable = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___mainCanvas_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// if (mainCanvas) mainCanvas.interactable = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___mainCanvas_16;
		NullCheck(L_2);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_2, (bool)0, NULL);
	}

IL_0027:
	{
		// if (fadeIn != null) StopCoroutine(fadeIn);
		RuntimeObject* L_3 = __this->___fadeIn_6;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// if (fadeIn != null) StopCoroutine(fadeIn);
		RuntimeObject* L_4 = __this->___fadeIn_6;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_4, NULL);
	}

IL_003b:
	{
		// if (fadeOut != null) StopCoroutine(fadeOut);
		RuntimeObject* L_5 = __this->___fadeOut_7;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// if (fadeOut != null) StopCoroutine(fadeOut);
		RuntimeObject* L_6 = __this->___fadeOut_7;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_6, NULL);
	}

IL_004f:
	{
		// fadeOut = FadeToDefaultPassthrough(0.2f);
		RuntimeObject* L_7;
		L_7 = PassthroughStyler_FadeToDefaultPassthrough_m2ACDFD225651A64DBFCAD680B1F80AC68D68DFC5(__this, (0.200000003f), NULL);
		__this->___fadeOut_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fadeOut_7), (void*)L_7);
		// StartCoroutine(fadeOut);
		RuntimeObject* L_8 = __this->___fadeOut_7;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PassthroughStyler::FadeToCurrentStyle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PassthroughStyler_FadeToCurrentStyle_m90283EA370FECB79C4798986865C56C9D5569562 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, float ___fadeTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A* L_0 = (U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A*)il2cpp_codegen_object_new(U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeToCurrentStyleU3Ed__18__ctor_m25CFB19646B43BF313EE7061F3E9C67E17527763(L_0, 0, NULL);
		U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A* L_2 = L_1;
		float L_3 = ___fadeTime0;
		NullCheck(L_2);
		L_2->___fadeTime_3 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator PassthroughStyler::FadeToDefaultPassthrough(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PassthroughStyler_FadeToDefaultPassthrough_m2ACDFD225651A64DBFCAD680B1F80AC68D68DFC5 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, float ___fadeTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61* L_0 = (U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61*)il2cpp_codegen_object_new(U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeToDefaultPassthroughU3Ed__19__ctor_mDD53ACD2920F366C9D702DF7AE761A682839BA1B(L_0, 0, NULL);
		U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61* L_2 = L_1;
		float L_3 = ___fadeTime0;
		NullCheck(L_2);
		L_2->___fadeTime_3 = L_3;
		return L_2;
	}
}
// System.Void PassthroughStyler::OnBrightnessChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_OnBrightnessChanged_mA7C3CF4596B2E3456A88A3FEBD7DAF111265A50E (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, float ___newValue0, const RuntimeMethod* method) 
{
	{
		// savedBrightness = newValue;
		float L_0 = ___newValue0;
		__this->___savedBrightness_14 = L_0;
		// passthroughLayer.colorMapEditorBrightness = savedBrightness;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_1 = __this->___passthroughLayer_5;
		float L_2 = __this->___savedBrightness_14;
		NullCheck(L_1);
		L_1->___colorMapEditorBrightness_16 = L_2;
		// }
		return;
	}
}
// System.Void PassthroughStyler::OnContrastChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_OnContrastChanged_m2597636F6244617790E7EC09CDE17BF9E862A4B7 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, float ___newValue0, const RuntimeMethod* method) 
{
	{
		// savedContrast = newValue;
		float L_0 = ___newValue0;
		__this->___savedContrast_15 = L_0;
		// passthroughLayer.colorMapEditorContrast = savedContrast;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_1 = __this->___passthroughLayer_5;
		float L_2 = __this->___savedContrast_15;
		NullCheck(L_1);
		L_1->___colorMapEditorContrast_14 = L_2;
		// }
		return;
	}
}
// System.Void PassthroughStyler::OnAlphaChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_OnAlphaChanged_mAE935AC5081E38CD3B93B121858E9BAB60D14DE9 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, float ___newValue0, const RuntimeMethod* method) 
{
	{
		// savedColor = new Color(savedColor.r, savedColor.g, savedColor.b, newValue);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___savedColor_13);
		float L_1 = L_0->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2 = (&__this->___savedColor_13);
		float L_3 = L_2->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = (&__this->___savedColor_13);
		float L_5 = L_4->___b_2;
		float L_6 = ___newValue0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		__this->___savedColor_13 = L_7;
		// passthroughLayer.edgeColor = savedColor;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_8 = __this->___passthroughLayer_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___savedColor_13;
		NullCheck(L_8);
		OVRPassthroughLayer_set_edgeColor_mA3002CE6A3BAF02E96A4F6C96456C285C3CC76C2(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void PassthroughStyler::ShowFullMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_ShowFullMenu_m6892265715E3CA3314F8E1F9B429FD8482E534BF (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, bool ___doShow0, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject go in compactObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___compactObjects_17;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (GameObject go in compactObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// go.SetActive(doShow);
		bool L_5 = ___doShow0;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0018:
	{
		// foreach (GameObject go in compactObjects)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PassthroughStyler::Cursor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_Cursor_mE779FE7AEE92BA34E25D05902D96ABD5C9BB67C8 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cP0, const RuntimeMethod* method) 
{
	{
		// cursorPosition = cP;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___cP0;
		__this->___cursorPosition_11 = L_0;
		// }
		return;
	}
}
// System.Void PassthroughStyler::DoColorDrag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_DoColorDrag_m27EB231A403A310F2D472696B049AC249B3D020A (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, bool ___doDrag0, const RuntimeMethod* method) 
{
	{
		// settingColor = doDrag;
		bool L_0 = ___doDrag0;
		__this->___settingColor_12 = L_0;
		// }
		return;
	}
}
// System.Void PassthroughStyler::GetColorFromWheel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler_GetColorFromWheel_mE2E626FCA9318AEA470176ADF4AE1D7019E73353 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18135B337564B147F8F3C857356E9A8C8B6236C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// var localPos = colorWheel.transform.InverseTransformPoint(cursorPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___colorWheel_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___cursorPosition_11;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_2, NULL);
		V_0 = L_3;
		// var toImg = new Vector2(localPos.x / colorWheel.sizeDelta.x + 0.5f, localPos.y / colorWheel.sizeDelta.y + 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___colorWheel_9;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_6, NULL);
		float L_8 = L_7.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___colorWheel_9;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_11, NULL);
		float L_13 = L_12.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_add(((float)(L_5/L_8)), (0.5f))), ((float)il2cpp_codegen_add(((float)(L_10/L_13)), (0.5f))), NULL);
		// Debug.Log("Sanctuary: " + toImg.x.ToString() + ", " + toImg.y.ToString());
		float* L_14 = (&(&V_1)->___x_0);
		String_t* L_15;
		L_15 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_14, NULL);
		float* L_16 = (&(&V_1)->___y_1);
		String_t* L_17;
		L_17 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral18135B337564B147F8F3C857356E9A8C8B6236C6, L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_18, NULL);
		// Color sampledColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		V_2 = L_19;
		// if (toImg.x < 1.0 && toImg.x > 0.0f && toImg.y < 1.0 && toImg.y > 0.0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		float L_21 = L_20.___x_0;
		if ((!(((double)((double)L_21)) < ((double)(1.0)))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_1;
		float L_23 = L_22.___x_0;
		if ((!(((float)L_23) > ((float)(0.0f)))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		float L_25 = L_24.___y_1;
		if ((!(((double)((double)L_25)) < ((double)(1.0)))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		float L_27 = L_26.___y_1;
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_010a;
		}
	}
	{
		// int Upos = Mathf.RoundToInt(toImg.x * colorTexture.width);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		float L_29 = L_28.___x_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = __this->___colorTexture_10;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_30);
		int32_t L_32;
		L_32 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(L_29, ((float)L_31))), NULL);
		V_3 = L_32;
		// int Vpos = Mathf.RoundToInt(toImg.y * colorTexture.height);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_1;
		float L_34 = L_33.___y_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = __this->___colorTexture_10;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_35);
		int32_t L_37;
		L_37 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(L_34, ((float)L_36))), NULL);
		V_4 = L_37;
		// sampledColor = colorTexture.GetPixel(Upos, Vpos);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = __this->___colorTexture_10;
		int32_t L_39 = V_3;
		int32_t L_40 = V_4;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_38, L_39, L_40, NULL);
		V_2 = L_41;
	}

IL_010a:
	{
		// savedColor = new Color(sampledColor.r, sampledColor.g, sampledColor.b, savedColor.a);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = V_2;
		float L_43 = L_42.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = V_2;
		float L_45 = L_44.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46 = V_2;
		float L_47 = L_46.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_48 = (&__this->___savedColor_13);
		float L_49 = L_48->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50;
		memset((&L_50), 0, sizeof(L_50));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_50), L_43, L_45, L_47, L_49, /*hidden argument*/NULL);
		__this->___savedColor_13 = L_50;
		// passthroughLayer.edgeColor = savedColor;
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_51 = __this->___passthroughLayer_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = __this->___savedColor_13;
		NullCheck(L_51);
		OVRPassthroughLayer_set_edgeColor_mA3002CE6A3BAF02E96A4F6C96456C285C3CC76C2(L_51, L_52, NULL);
		// }
		return;
	}
}
// System.Void PassthroughStyler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughStyler__ctor_m9F2361AF9F0C7C9170F8AF97192D460A67F76432 (PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* __this, const RuntimeMethod* method) 
{
	{
		// Vector3 cursorPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___cursorPosition_11 = L_0;
		// Color savedColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___savedColor_13 = L_1;
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
// System.Void PassthroughStyler/<FadeToCurrentStyle>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToCurrentStyleU3Ed__18__ctor_m25CFB19646B43BF313EE7061F3E9C67E17527763 (U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PassthroughStyler/<FadeToCurrentStyle>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToCurrentStyleU3Ed__18_System_IDisposable_Dispose_m84C58EEC9275769A4D40C00D1B5F1FBD54B62FB4 (U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PassthroughStyler/<FadeToCurrentStyle>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeToCurrentStyleU3Ed__18_MoveNext_m3A52A165EF9F75FD5F6E154AED2AE0CA02CD50D6 (U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_011c;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_4 = (0.0f);
		// float brightness = passthroughLayer.colorMapEditorBrightness;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_4 = V_1;
		NullCheck(L_4);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_5 = L_4->___passthroughLayer_5;
		NullCheck(L_5);
		float L_6 = L_5->___colorMapEditorBrightness_16;
		__this->___U3CbrightnessU3E5__3_5 = L_6;
		// float contrast = passthroughLayer.colorMapEditorContrast;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_7 = V_1;
		NullCheck(L_7);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_8 = L_7->___passthroughLayer_5;
		NullCheck(L_8);
		float L_9 = L_8->___colorMapEditorContrast_14;
		__this->___U3CcontrastU3E5__4_6 = L_9;
		// Color edgeCol = new Color(savedColor.r, savedColor.g, savedColor.b, 0.0f);
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_10 = V_1;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11 = (&L_10->___savedColor_13);
		float L_12 = L_11->___r_0;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_13 = V_1;
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_14 = (&L_13->___savedColor_13);
		float L_15 = L_14->___g_1;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_16 = V_1;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_17 = (&L_16->___savedColor_13);
		float L_18 = L_17->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_19), L_12, L_15, L_18, (0.0f), /*hidden argument*/NULL);
		__this->___U3CedgeColU3E5__5_7 = L_19;
		// passthroughLayer.edgeRenderingEnabled = true;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_20 = V_1;
		NullCheck(L_20);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_21 = L_20->___passthroughLayer_5;
		NullCheck(L_21);
		OVRPassthroughLayer_set_edgeRenderingEnabled_mE8DE1C2F5009B6F7ECCBE62B3C8B1FAA1690F1DC(L_21, (bool)1, NULL);
		goto IL_0123;
	}

IL_0090:
	{
		// timer += Time.deltaTime;
		float L_22 = __this->___U3CtimerU3E5__2_4;
		float L_23;
		L_23 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CtimerU3E5__2_4 = ((float)il2cpp_codegen_add(L_22, L_23));
		// float normTimer = Mathf.Clamp01(timer / fadeTime);
		float L_24 = __this->___U3CtimerU3E5__2_4;
		float L_25 = __this->___fadeTime_3;
		float L_26;
		L_26 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_24/L_25)), NULL);
		V_2 = L_26;
		// passthroughLayer.colorMapEditorBrightness = Mathf.Lerp(brightness, savedBrightness, normTimer);
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_27 = V_1;
		NullCheck(L_27);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_28 = L_27->___passthroughLayer_5;
		float L_29 = __this->___U3CbrightnessU3E5__3_5;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_30 = V_1;
		NullCheck(L_30);
		float L_31 = L_30->___savedBrightness_14;
		float L_32 = V_2;
		float L_33;
		L_33 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_29, L_31, L_32, NULL);
		NullCheck(L_28);
		L_28->___colorMapEditorBrightness_16 = L_33;
		// passthroughLayer.colorMapEditorContrast = Mathf.Lerp(contrast, savedContrast, normTimer);
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_34 = V_1;
		NullCheck(L_34);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_35 = L_34->___passthroughLayer_5;
		float L_36 = __this->___U3CcontrastU3E5__4_6;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_37 = V_1;
		NullCheck(L_37);
		float L_38 = L_37->___savedContrast_15;
		float L_39 = V_2;
		float L_40;
		L_40 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_36, L_38, L_39, NULL);
		NullCheck(L_35);
		L_35->___colorMapEditorContrast_14 = L_40;
		// passthroughLayer.edgeColor = Color.Lerp(edgeCol, savedColor, normTimer);
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_41 = V_1;
		NullCheck(L_41);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_42 = L_41->___passthroughLayer_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = __this->___U3CedgeColU3E5__5_7;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_44 = V_1;
		NullCheck(L_44);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45 = L_44->___savedColor_13;
		float L_46 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47;
		L_47 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_43, L_45, L_46, NULL);
		NullCheck(L_42);
		OVRPassthroughLayer_set_edgeColor_mA3002CE6A3BAF02E96A4F6C96456C285C3CC76C2(L_42, L_47, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_011c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0123:
	{
		// while (timer <= fadeTime)
		float L_48 = __this->___U3CtimerU3E5__2_4;
		float L_49 = __this->___fadeTime_3;
		if ((((float)L_48) <= ((float)L_49)))
		{
			goto IL_0090;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PassthroughStyler/<FadeToCurrentStyle>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeToCurrentStyleU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m656CA6EBE722168D52FEB44F202452DADC856654 (U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PassthroughStyler/<FadeToCurrentStyle>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToCurrentStyleU3Ed__18_System_Collections_IEnumerator_Reset_m3D2231C570E15E4D7B50039331C5F9ED7A611A84 (U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeToCurrentStyleU3Ed__18_System_Collections_IEnumerator_Reset_m3D2231C570E15E4D7B50039331C5F9ED7A611A84_RuntimeMethod_var)));
	}
}
// System.Object PassthroughStyler/<FadeToCurrentStyle>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeToCurrentStyleU3Ed__18_System_Collections_IEnumerator_get_Current_m32A432FE52EDFA4A9096E651D6A77BB27BA5423C (U3CFadeToCurrentStyleU3Ed__18_t94DE0F49A37E81E741DFA4A513E637FFF344A13A* __this, const RuntimeMethod* method) 
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
// System.Void PassthroughStyler/<FadeToDefaultPassthrough>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToDefaultPassthroughU3Ed__19__ctor_mDD53ACD2920F366C9D702DF7AE761A682839BA1B (U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PassthroughStyler/<FadeToDefaultPassthrough>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToDefaultPassthroughU3Ed__19_System_IDisposable_Dispose_m4ADD7C3460CE4E944A1F1790280BD38B5BC8FC77 (U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PassthroughStyler/<FadeToDefaultPassthrough>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeToDefaultPassthroughU3Ed__19_MoveNext_mFC62D774B9E8532231B97DF90728BA6346E45019 (U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_012d;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_4 = (0.0f);
		// float brightness = passthroughLayer.colorMapEditorBrightness;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_4 = V_1;
		NullCheck(L_4);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_5 = L_4->___passthroughLayer_5;
		NullCheck(L_5);
		float L_6 = L_5->___colorMapEditorBrightness_16;
		__this->___U3CbrightnessU3E5__3_5 = L_6;
		// float contrast = passthroughLayer.colorMapEditorContrast;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_7 = V_1;
		NullCheck(L_7);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_8 = L_7->___passthroughLayer_5;
		NullCheck(L_8);
		float L_9 = L_8->___colorMapEditorContrast_14;
		__this->___U3CcontrastU3E5__4_6 = L_9;
		// Color edgeCol = passthroughLayer.edgeColor;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_10 = V_1;
		NullCheck(L_10);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_11 = L_10->___passthroughLayer_5;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = OVRPassthroughLayer_get_edgeColor_m7310EE93BAEA4840CEF66DA2BA583544DA65DB98_inline(L_11, NULL);
		__this->___U3CedgeColU3E5__5_7 = L_12;
		goto IL_0134;
	}

IL_0064:
	{
		// timer += Time.deltaTime;
		float L_13 = __this->___U3CtimerU3E5__2_4;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CtimerU3E5__2_4 = ((float)il2cpp_codegen_add(L_13, L_14));
		// float normTimer = Mathf.Clamp01(timer / fadeTime);
		float L_15 = __this->___U3CtimerU3E5__2_4;
		float L_16 = __this->___fadeTime_3;
		float L_17;
		L_17 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_15/L_16)), NULL);
		V_2 = L_17;
		// passthroughLayer.colorMapEditorBrightness = Mathf.Lerp(brightness, 0.0f, normTimer);
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_18 = V_1;
		NullCheck(L_18);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_19 = L_18->___passthroughLayer_5;
		float L_20 = __this->___U3CbrightnessU3E5__3_5;
		float L_21 = V_2;
		float L_22;
		L_22 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_20, (0.0f), L_21, NULL);
		NullCheck(L_19);
		L_19->___colorMapEditorBrightness_16 = L_22;
		// passthroughLayer.colorMapEditorContrast = Mathf.Lerp(contrast, 0.0f, normTimer);
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_23 = V_1;
		NullCheck(L_23);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_24 = L_23->___passthroughLayer_5;
		float L_25 = __this->___U3CcontrastU3E5__4_6;
		float L_26 = V_2;
		float L_27;
		L_27 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_25, (0.0f), L_26, NULL);
		NullCheck(L_24);
		L_24->___colorMapEditorContrast_14 = L_27;
		// passthroughLayer.edgeColor = Color.Lerp(edgeCol, new Color(edgeCol.r, edgeCol.g, edgeCol.b, 0.0f), normTimer);
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_28 = V_1;
		NullCheck(L_28);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_29 = L_28->___passthroughLayer_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = __this->___U3CedgeColU3E5__5_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_31 = (&__this->___U3CedgeColU3E5__5_7);
		float L_32 = L_31->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33 = (&__this->___U3CedgeColU3E5__5_7);
		float L_34 = L_33->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = (&__this->___U3CedgeColU3E5__5_7);
		float L_36 = L_35->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		memset((&L_37), 0, sizeof(L_37));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_37), L_32, L_34, L_36, (0.0f), /*hidden argument*/NULL);
		float L_38 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_30, L_37, L_38, NULL);
		NullCheck(L_29);
		OVRPassthroughLayer_set_edgeColor_mA3002CE6A3BAF02E96A4F6C96456C285C3CC76C2(L_29, L_39, NULL);
		// if (timer > fadeTime)
		float L_40 = __this->___U3CtimerU3E5__2_4;
		float L_41 = __this->___fadeTime_3;
		if ((!(((float)L_40) > ((float)L_41))))
		{
			goto IL_011d;
		}
	}
	{
		// passthroughLayer.edgeRenderingEnabled = false;
		PassthroughStyler_t87AC7A601361B0249EABA465575B8BC98524B79E* L_42 = V_1;
		NullCheck(L_42);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_43 = L_42->___passthroughLayer_5;
		NullCheck(L_43);
		OVRPassthroughLayer_set_edgeRenderingEnabled_mE8DE1C2F5009B6F7ECCBE62B3C8B1FAA1690F1DC(L_43, (bool)0, NULL);
	}

IL_011d:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_012d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0134:
	{
		// while (timer <= fadeTime)
		float L_44 = __this->___U3CtimerU3E5__2_4;
		float L_45 = __this->___fadeTime_3;
		if ((((float)L_44) <= ((float)L_45)))
		{
			goto IL_0064;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PassthroughStyler/<FadeToDefaultPassthrough>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeToDefaultPassthroughU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1116F38954CBCA6004A3EEBE07F8AB53E89D949B (U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PassthroughStyler/<FadeToDefaultPassthrough>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToDefaultPassthroughU3Ed__19_System_Collections_IEnumerator_Reset_m2CAC05E5C8C9E0BDA4DC8FAE769DA1FC864C2BF2 (U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeToDefaultPassthroughU3Ed__19_System_Collections_IEnumerator_Reset_m2CAC05E5C8C9E0BDA4DC8FAE769DA1FC864C2BF2_RuntimeMethod_var)));
	}
}
// System.Object PassthroughStyler/<FadeToDefaultPassthrough>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeToDefaultPassthroughU3Ed__19_System_Collections_IEnumerator_get_Current_m682C61F25DDDA220499D293FB3A8BAEABF2F21C8 (U3CFadeToDefaultPassthroughU3Ed__19_t43F0F1211961F705D488CC80DBD2F64DFF905A61* __this, const RuntimeMethod* method) 
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
// System.Void PassthroughSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughSurface_Start_m13626A1C7AFEAAFB95BDEBD5A94ED03593F4A5F5 (PassthroughSurface_t5DEF489C691B1678CA206E5B904FF22B8FCD4264* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(projectionObject.GetComponent<MeshRenderer>());
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___projectionObject_5;
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_0, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
		// passthroughLayer.AddSurfaceGeometry(projectionObject.gameObject, true);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_2 = __this->___passthroughLayer_4;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3 = __this->___projectionObject_5;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_2);
		OVRPassthroughLayer_AddSurfaceGeometry_mF2776AE6648CC7D9965F7B034DFCC43754B5C1DC(L_2, L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PassthroughSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassthroughSurface__ctor_mD4A56A8D704208E453D1CCED9C3BA73083099A67 (PassthroughSurface_t5DEF489C691B1678CA206E5B904FF22B8FCD4264* __this, const RuntimeMethod* method) 
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
// System.Void SceneSampler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSampler_Awake_m690EC500C60E3F72BD2DA76BFE753D2D1D63CD1D (SceneSampler_tFF2381F55831EBDE8EE29061F1914F893DFF1932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneSampler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSampler_Update_m15725C1EF0F05F1915A0281D70927E4AC9E21F86 (SceneSampler_tFF2381F55831EBDE8EE29061F1914F893DFF1932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B4_0 = 0;
	{
		// bool controllersActive = OVRInput.GetActiveController() == OVRInput.Controller.Touch ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.LTouch ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.RTouch;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B4_0 = 1;
	}

IL_001b:
	{
		V_0 = (bool)G_B4_0;
		// displayText.SetActive(controllersActive);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___displayText_5;
		bool L_4 = V_0;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
		// if (OVRInput.GetUp(OVRInput.Button.Start))
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = OVRInput_GetUp_m11DA43291070262B20D13A3E599EBE0C6A2D02D5(((int32_t)256), ((int32_t)-2147483648LL), NULL);
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		// currentSceneIndex++;
		int32_t L_6 = __this->___currentSceneIndex_4;
		__this->___currentSceneIndex_4 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// if (currentSceneIndex >= SceneManager.sceneCountInBuildSettings) currentSceneIndex = 0;
		int32_t L_7 = __this->___currentSceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = SceneManager_get_sceneCountInBuildSettings_m7C49222A2A771B11C1CAD7D743BDDF8F8F39E685(NULL);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_005b;
		}
	}
	{
		// if (currentSceneIndex >= SceneManager.sceneCountInBuildSettings) currentSceneIndex = 0;
		__this->___currentSceneIndex_4 = 0;
	}

IL_005b:
	{
		// SceneManager.LoadScene(currentSceneIndex);
		int32_t L_9 = __this->___currentSceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_9, NULL);
	}

IL_0066:
	{
		// Vector3 menuPosition = OVRInput.GetLocalControllerPosition(OVRInput.Controller.LTouch) + Vector3.up * 0.09f;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = OVRInput_GetLocalControllerPosition_m5630E056EBDF6BD0A317D19DE90AFC0C80233B69(1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_11, (0.0900000036f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_10, L_12, NULL);
		V_1 = L_13;
		// displayText.transform.position = menuPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___displayText_5;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_16, NULL);
		// displayText.transform.rotation = Quaternion.LookRotation(menuPosition - Camera.main.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___displayText_5;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20;
		L_20 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_19, L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_23, NULL);
		NullCheck(L_18);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_24, NULL);
		// }
		return;
	}
}
// System.Void SceneSampler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSampler__ctor_m849151EF1C33E4041289BB79C86FD88AB18AEB9A (SceneSampler_tFF2381F55831EBDE8EE29061F1914F893DFF1932* __this, const RuntimeMethod* method) 
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
// System.Void SelectivePassthroughExperience::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectivePassthroughExperience_Update_mA8170646C3A9B4D1EF0A67271C29A7A6181B585F (SelectivePassthroughExperience_t84E3D92EBFC4E0E85C43ED4F488E29F19DE72C6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B4_0 = 0;
	{
		// Camera.main.depthTextureMode = DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_0);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_0, 1, NULL);
		// bool controllersActive = (OVRInput.GetActiveController() == OVRInput.Controller.LTouch ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.RTouch ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.Touch);
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)3))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 1;
	}

IL_0026:
	{
		V_0 = (bool)G_B4_0;
		// leftMaskObject.SetActive(controllersActive);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___leftMaskObject_4;
		bool L_5 = V_0;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		// rightMaskObject.SetActive(controllersActive);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___rightMaskObject_5;
		bool L_7 = V_0;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, L_7, NULL);
		// if (controllersActive)
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_00b1;
		}
	}
	{
		// Vector3 Lpos = OVRInput.GetLocalControllerPosition(OVRInput.Controller.LTouch) + OVRInput.GetLocalControllerRotation(OVRInput.Controller.LTouch) * Vector3.forward * 0.1f;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = OVRInput_GetLocalControllerPosition_m5630E056EBDF6BD0A317D19DE90AFC0C80233B69(1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = OVRInput_GetLocalControllerRotation_mD0D287501357996403558E697CC65161E0B5D51A(1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_13, NULL);
		V_1 = L_14;
		// Vector3 Rpos = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch) + OVRInput.GetLocalControllerRotation(OVRInput.Controller.RTouch) * Vector3.forward * 0.1f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = OVRInput_GetLocalControllerPosition_m5630E056EBDF6BD0A317D19DE90AFC0C80233B69(2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = OVRInput_GetLocalControllerRotation_mD0D287501357996403558E697CC65161E0B5D51A(2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_19, NULL);
		V_2 = L_20;
		// leftMaskObject.transform.position = Lpos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___leftMaskObject_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_23, NULL);
		// rightMaskObject.transform.position = Rpos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___rightMaskObject_5;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_26, NULL);
		return;
	}

IL_00b1:
	{
		// else if (OVRInput.GetActiveController() == OVRInput.Controller.LHand ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.RHand ||
		//   OVRInput.GetActiveController() == OVRInput.Controller.Hands)
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)32))))
		{
			goto IL_00cc;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
		if ((((int32_t)L_28) == ((int32_t)((int32_t)64))))
		{
			goto IL_00cc;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline(NULL);
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void SelectivePassthroughExperience::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectivePassthroughExperience__ctor_mD565D6E3C009E6D862BB4622E0282E0E10E24FE7 (SelectivePassthroughExperience_t84E3D92EBFC4E0E85C43ED4F488E29F19DE72C6B* __this, const RuntimeMethod* method) 
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
// System.Void SPPquad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SPPquad_Start_m6D8F92146D150C18ADA8EC1AFA8DD9DC0263E1F2 (SPPquad_tD70A2698723A9430EE9B2CE7BC816F928DF020DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_m0543730C95B7A7C25271B600774F5D229A8E8A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SPPquad_Grab_m55429F1BD5186B99DF1EB3F7B25EAFBAFDA916D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SPPquad_Release_m6091EB850236963B2CFC76A385AA3B32154B7F9E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// passthroughLayer = GetComponent<OVRPassthroughLayer>();
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_0;
		L_0 = Component_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_m0543730C95B7A7C25271B600774F5D229A8E8A35(__this, Component_GetComponent_TisOVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F_m0543730C95B7A7C25271B600774F5D229A8E8A35_RuntimeMethod_var);
		__this->___passthroughLayer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___passthroughLayer_4), (void*)L_0);
		// passthroughLayer.AddSurfaceGeometry(projectionObject.gameObject, false);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_1 = __this->___passthroughLayer_4;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2 = __this->___projectionObject_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_1);
		OVRPassthroughLayer_AddSurfaceGeometry_mF2776AE6648CC7D9965F7B034DFCC43754B5C1DC(L_1, L_3, (bool)0, NULL);
		// if (GetComponent<GrabObject>())
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_4;
		L_4 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_007e;
		}
	}
	{
		// GetComponent<GrabObject>().GrabbedObjectDelegate += Grab;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_6;
		L_6 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_7 = L_6;
		NullCheck(L_7);
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_8 = L_7->___GrabbedObjectDelegate_9;
		GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* L_9 = (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)il2cpp_codegen_object_new(GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		GrabbedObject__ctor_m9B22A387B9350AA1E0D2DECB2DE2D7302D944786(L_9, __this, (intptr_t)((void*)SPPquad_Grab_m55429F1BD5186B99DF1EB3F7B25EAFBAFDA916D9_RuntimeMethod_var), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_8, L_9, NULL);
		NullCheck(L_7);
		L_7->___GrabbedObjectDelegate_9 = ((GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)CastclassSealed((RuntimeObject*)L_10, GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___GrabbedObjectDelegate_9), (void*)((GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA*)CastclassSealed((RuntimeObject*)L_10, GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA_il2cpp_TypeInfo_var)));
		// GetComponent<GrabObject>().ReleasedObjectDelegate += Release;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_11;
		L_11 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_12 = L_11;
		NullCheck(L_12);
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_13 = L_12->___ReleasedObjectDelegate_10;
		ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* L_14 = (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)il2cpp_codegen_object_new(ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ReleasedObject__ctor_mE889B3F2A51BDB89BCEC05EF41D36A3AFC980E10(L_14, __this, (intptr_t)((void*)SPPquad_Release_m6091EB850236963B2CFC76A385AA3B32154B7F9E_RuntimeMethod_var), NULL);
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_13, L_14, NULL);
		NullCheck(L_12);
		L_12->___ReleasedObjectDelegate_10 = ((ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)CastclassSealed((RuntimeObject*)L_15, ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___ReleasedObjectDelegate_10), (void*)((ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3*)CastclassSealed((RuntimeObject*)L_15, ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3_il2cpp_TypeInfo_var)));
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void SPPquad::Grab(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SPPquad_Grab_m55429F1BD5186B99DF1EB3F7B25EAFBAFDA916D9 (SPPquad_tD70A2698723A9430EE9B2CE7BC816F928DF020DE* __this, int32_t ___grabHand0, const RuntimeMethod* method) 
{
	{
		// passthroughLayer.RemoveSurfaceGeometry(projectionObject.gameObject);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_0 = __this->___passthroughLayer_4;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1 = __this->___projectionObject_5;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_0);
		OVRPassthroughLayer_RemoveSurfaceGeometry_mC4E7F005E96534F8039A5E474A396FD897F7A705(L_0, L_2, NULL);
		// controllerHand = grabHand;
		int32_t L_3 = ___grabHand0;
		__this->___controllerHand_6 = L_3;
		// }
		return;
	}
}
// System.Void SPPquad::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SPPquad_Release_m6091EB850236963B2CFC76A385AA3B32154B7F9E (SPPquad_tD70A2698723A9430EE9B2CE7BC816F928DF020DE* __this, const RuntimeMethod* method) 
{
	{
		// controllerHand = OVRInput.Controller.None;
		__this->___controllerHand_6 = 0;
		// passthroughLayer.AddSurfaceGeometry(projectionObject.gameObject, false);
		OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* L_0 = __this->___passthroughLayer_4;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1 = __this->___projectionObject_5;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_0);
		OVRPassthroughLayer_AddSurfaceGeometry_mF2776AE6648CC7D9965F7B034DFCC43754B5C1DC(L_0, L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SPPquad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SPPquad__ctor_m2ED84A749AD03C5F02501C61F2B6C0459AA70E84 (SPPquad_tD70A2698723A9430EE9B2CE7BC816F928DF020DE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OVRInput_GetActiveController_mFBDF474AA755532D526CC199FC821AD849FA049B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeControllerType;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_StaticFields*)il2cpp_codegen_static_fields_for(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var))->___activeControllerType_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) 
{
	{
		// public IList<OVRBone> Bones { get; protected set; }
		RuntimeObject* L_0 = __this->___U3CBonesU3Ek__BackingField_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline (OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Transform { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CTransformU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrabbedObject_Invoke_m5096E86219EF5C7641B6C87A75C395CFB4860D2F_inline (GrabbedObject_tA6B05BA3219A736CE99A71B4098441732453DFFA* __this, int32_t ___grabHand0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___grabHand0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReleasedObject_Invoke_m80FBAC1CC0B26FB818C489F7FA1FAD1964E10A06_inline (ReleasedObject_t03C81AEEB8828CDCAD8F6B13F9816FEA331DBAF3* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetCursorPosition_Invoke_m2D072ECAF4995C2DEB5E19332A670DCF710E9DD7_inline (SetCursorPosition_t35BF3398EC27487041A0DDD942509659DCEAD15C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPosition0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___cursorPosition0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OVRHand_get_HandScale_mF8A57EFEAA517331FBA93803439620C8EE94CE52_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) 
{
	{
		// public float HandScale { get; private set; }
		float L_0 = __this->___U3CHandScaleU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_mD057CF0F1810C00D0F9E98A5CC5599213CF167DB_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___H0;
		float L_1 = ___S1;
		float L_2 = ___V2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_mE35BBC0ADCBAA2E71E90C080D7A8A4A19AABCC74(L_0, L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F OVRPassthroughLayer_get_edgeColor_m7310EE93BAEA4840CEF66DA2BA583544DA65DB98_inline (OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F* __this, const RuntimeMethod* method) 
{
	{
		// return edgeColor_;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___edgeColor__28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
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
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
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
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
