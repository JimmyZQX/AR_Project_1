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

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Image,UnityEngine.Coroutine>
struct Dictionary_2_t49F1158DD0F9B40E86C1081BEA0209D395CB878F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Image>
struct IEqualityComparer_1_t8621E224890868CF921CC578332BCE8F9CDF5CF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.Image,UnityEngine.Coroutine>
struct KeyCollection_tA5EB73FADD210414129D9D904835058EBE0C0A29;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<extOSC.Core.IOSCBind>
struct List_1_tA80FCD8A467AB5E1BDCE410684CEC4B527A22A0E;
// System.Collections.Generic.List`1<extOSC.Core.IOSCBindBundle>
struct List_1_tB4A0909742CD549B9E1FA8E9B310D6B3934C23F7;
// System.Collections.Generic.List`1<extOSC.Core.IOSCPacket>
struct List_1_tD1F0FC1EEA9E2F7256304EF68ABE9F497785C8B5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<extOSC.OSCValue>
struct List_1_t5A6CC9898A7072BA7FA49E41631EDFC471750789;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<extOSC.Core.IOSCPacket>
struct Queue_1_tF36EA41D8BB8B1C7E94DD5813337C728016C9B76;
// System.Collections.Generic.Stack`1<extOSC.Core.IOSCBind>
struct Stack_1_tD0FE2E31DE41D92BBEF774A4EE4CCFD1EC58E293;
// System.Collections.Generic.Stack`1<extOSC.Core.IOSCBindBundle>
struct Stack_1_t3E549306636A5DFD7340E55AA10D3E114DFE345F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<extOSC.OSCMessage>
struct UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Image,UnityEngine.Coroutine>
struct ValueCollection_t07A81BB4E812F91AA2BD9E1CB60F8AA511AE3D2A;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.UI.Image,UnityEngine.Coroutine>[]
struct EntryU5BU5D_t226735A85C08FF832FA056746AF475681E87E709;
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
// extOSC.OSCValue[]
struct OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7;
// extOSC.OSCValueType[]
struct OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// extOSC.Examples.AddressMaskExample
struct AddressMaskExample_tE8F986BF3D2A9658CCE0987DEC6F1B7F24796F21;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// extOSC.Examples.ArrayExample
struct ArrayExample_t98CD918ED1419285964DD8AD404308D3D9E12F7C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// extOSC.Examples.EventsExample
struct EventsExample_t4F484AE910980C9686B89DED5749219E57D28669;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// extOSC.Core.IOSCPacket
struct IOSCPacket_t06012C3D5E9C3C69986B0B516D801D78A4E54DFE;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// extOSC.Examples.InformersExample
struct InformersExample_t13284A3D4343FB6EA1506CF98EC99117E871D36A;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// extOSC.Examples.MappingExample
struct MappingExample_t1A44019105C5469EB0F6495739EBF7CA507A64D2;
// extOSC.Examples.MarshallingExample
struct MarshallingExample_t4AB5B1623A491F4D28F3BFCD890C337ECEAA2C22;
// extOSC.Examples.MatchPatternExample
struct MatchPatternExample_t8E9EA68F37D93C1D72111096543CCF4663421812;
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
// extOSC.OSCBind
struct OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC;
// extOSC.Core.Events.OSCEventMessage
struct OSCEventMessage_t955FBFA3BA7B58B4E07E4F09448698508E5B9369;
// extOSC.Core.Events.OSCEventVector2
struct OSCEventVector2_tC2E7B15223A37B447B91EBE7B12C5B90B2AF0BC7;
// extOSC.Mapping.OSCMapBundle
struct OSCMapBundle_tE95BDA970D5C248398CE48B35F9211EF8B409A8E;
// extOSC.OSCMatchPattern
struct OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1;
// extOSC.OSCMessage
struct OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953;
// extOSC.UI.OSCPad
struct OSCPad_t2EE006490402D02087FD0485B5223229C2C1DFF6;
// extOSC.OSCReceiver
struct OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765;
// extOSC.Core.Network.OSCReceiverBackend
struct OSCReceiverBackend_t76BEC619EC7A36C5D0BE4908BF55852E850A1B22;
// extOSC.OSCTransmitter
struct OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6;
// extOSC.Core.Network.OSCTransmitterBackend
struct OSCTransmitterBackend_t9ED37ED2D3901B7AA96A1DC6BA87A4E3F47235B4;
// extOSC.OSCValue
struct OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// extOSC.Examples.PingExample
struct PingExample_tCBA69BA219A78CD02B551C9D09C129D6C67CDDED;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// extOSC.Examples.ScriptingExample
struct ScriptingExample_t5397023DF17AF01A832CD10863E9B4201C97FDEA;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
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
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// extOSC.Examples.ValueTypesExample
struct ValueTypesExample_tF7068C33FD401694DA46B4B7F27E9532FD05E292;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119
struct U3CImageBlinkCoroutineU3Ed__119_t5C5B3169F8882758619D9227E57ABA367F3B5F47;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____63B5CDF91FEEDBADC4A01DE52B0B2489DB8E8D0E250312B3EF012D256A5558E6_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____ACB86A9CB70A84F695DE89E7FE22819466205759D798D52D4A3DD95B0CDAA2A1_4_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral2E76DCD448C5D6B3AF3B2E25352B550E5BAF50C6;
IL2CPP_EXTERN_C String_t* _stringLiteral30D374B70B2087F4469B36427A14700D61D7BB93;
IL2CPP_EXTERN_C String_t* _stringLiteral488F8172A4CB7551FABFDE2DD59F3E11D840CAC5;
IL2CPP_EXTERN_C String_t* _stringLiteral4ADF7DC825176313ED786DEF37490496FED7AAEF;
IL2CPP_EXTERN_C String_t* _stringLiteral5079451FC4B0EB34225C37036BA1EFFF1309DEF7;
IL2CPP_EXTERN_C String_t* _stringLiteral567C01790360DC1E070F7222517F82F9F68BBB6B;
IL2CPP_EXTERN_C String_t* _stringLiteral5CD4FC66FE70607C681ED9B8836D055B9D2CC73F;
IL2CPP_EXTERN_C String_t* _stringLiteral69A3D5976F7EF3E938B54591C3F33238F42C1576;
IL2CPP_EXTERN_C String_t* _stringLiteral73B2C0C0C9962AE5705BD5AF6E241C5CA93597EB;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral77200C21A79C6A53952F5BB20A3956F1603E6B06;
IL2CPP_EXTERN_C String_t* _stringLiteral80825D24EFAC0B8C89BBE2432BCCD5A1F233D18F;
IL2CPP_EXTERN_C String_t* _stringLiteral813716A857D9878DFCEA928EFEDC4EAFE603BDD3;
IL2CPP_EXTERN_C String_t* _stringLiteral952D5701009D7D0250406860C36731AB17DB673E;
IL2CPP_EXTERN_C String_t* _stringLiteral9C2B620E0F514D1CB39D98DFD2079BA43DC8F0C9;
IL2CPP_EXTERN_C String_t* _stringLiteral9DE46B230ADBD580354150F22800CD138E4C5F89;
IL2CPP_EXTERN_C String_t* _stringLiteralA327B83B488BF613A61C837A555CDAA42CAA4D40;
IL2CPP_EXTERN_C String_t* _stringLiteralA6D02502C75BE72D3B0B519ED51AE6DE4FCDF58E;
IL2CPP_EXTERN_C String_t* _stringLiteralBB64D2B0667F290772C87125679328EAFD75E868;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B3C20B0157922E7AC237525B2A416C3E27FA1A;
IL2CPP_EXTERN_C String_t* _stringLiteralCAB120B6834B15CB3D71E7EF222F80EF8DCD943D;
IL2CPP_EXTERN_C String_t* _stringLiteralD120F4C7D317080847A870F80AC51BE90DC2EB92;
IL2CPP_EXTERN_C String_t* _stringLiteralDCBF58A87AC20F72918839DF3C498B8AEBEB1695;
IL2CPP_EXTERN_C String_t* _stringLiteralE13D60321F9B59216074A0E60D124ECA63A72BA7;
IL2CPP_EXTERN_C String_t* _stringLiteralE9F19ECBF516BFC80511A6C00D0226B625799559;
IL2CPP_EXTERN_C String_t* _stringLiteralEB63945994CB9CC7807BC73FD69BD60FFA5DB146;
IL2CPP_EXTERN_C String_t* _stringLiteralF07A9F74C9C190770C568CA75A353103054E6018;
IL2CPP_EXTERN_C String_t* _stringLiteralFB85F32B67700C3C852105B1116ECD101064C332;
IL2CPP_EXTERN_C String_t* _stringLiteralFC56B7E3A4791E3857CDBE0D0820E944F1EB389D;
IL2CPP_EXTERN_C const RuntimeMethod* AddressMaskExample_MessageReceived_m432901008FAD680EC9A237188191FCF92F8152BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayExample_MessageReceived_m6DAC36B577C7B90D889F4BBC2D5D4B944D223223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisOSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5_mB8514B6BCFDC5F4BE3D48CE0F5016B3B25E37473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m791C2389291D51ECC74E27B3DEC07F3E51438F8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m668D862E47728A9BD0968155950ECE4205A8B503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA9B39BCA4B24A78D2F42ECF382DAAB8DDA5AACB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m57B7C5555C17A6B7E1C1F34ECAA079BD32748610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m94C1227DE6EA234D3A61212C5030279A6D85D392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisOSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765_m6AF2FEED04B3ECDE4AEE7F3F83715E5CE43819CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisOSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6_mC3C2D8A034E626456AFDA7E04C1F37D50841C880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformersExample_ReceivePosition_m0E3D996B8FC6E2E0171B6294CCBE4D675FE05C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformersExample_ReceiveRotate_m9E650015AD1E6845ACE39C0E943923E79FA63B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformersExample_ReceiveScale_m43BBE0E5CF0142B9D46E7C176716B8C666C62FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCC2633EA14C082BA3A9D9C6F9F1A2A460EAE7F03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshallingExample_ReceiveMessage_m13A596C7BA0888A5CF5EE30D67199B976C324B47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatchPatternExample_ReceiveMessage_m7DB6DA99F3588A37B5CFE0268139E0563A74CDFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OSCUtilities_ByteToStruct_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_m8E2620529FA33EB7AB85E6339C207D02E090874D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OSCUtilities_StructToByte_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_mC73D9C3D0D7152A7885B64EF247A3B300CEA4DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptingExample_MessageReceived_m09FC221BFEBF04503C524D6A90E760501537BC5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CImageBlinkCoroutineU3Ed__119_System_Collections_IEnumerator_Reset_mE9552E17A6F87B3938A90D9ACAC354D85263774E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7;
struct OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Image,UnityEngine.Coroutine>
struct Dictionary_2_t49F1158DD0F9B40E86C1081BEA0209D395CB878F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t226735A85C08FF832FA056746AF475681E87E709* ____entries_1;
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
	KeyCollection_tA5EB73FADD210414129D9D904835058EBE0C0A29* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t07A81BB4E812F91AA2BD9E1CB60F8AA511AE3D2A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<extOSC.OSCValue>
struct List_1_t5A6CC9898A7072BA7FA49E41631EDFC471750789  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5A6CC9898A7072BA7FA49E41631EDFC471750789_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// extOSC.OSCBind
struct OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC  : public RuntimeObject
{
	// System.String extOSC.OSCBind::_address
	String_t* ____address_0;
	// extOSC.Core.Events.OSCEventMessage extOSC.OSCBind::_callback
	OSCEventMessage_t955FBFA3BA7B58B4E07E4F09448698508E5B9369* ____callback_1;
};

// extOSC.OSCMatchPattern
struct OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1  : public RuntimeObject
{
	// extOSC.OSCValueType[] extOSC.OSCMatchPattern::<Types>k__BackingField
	OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F* ___U3CTypesU3Ek__BackingField_0;
};

// extOSC.OSCMessage
struct OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953  : public RuntimeObject
{
	// System.String extOSC.OSCMessage::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_0;
	// System.Net.IPAddress extOSC.OSCMessage::<Ip>k__BackingField
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___U3CIpU3Ek__BackingField_1;
	// System.Int32 extOSC.OSCMessage::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<extOSC.OSCValue> extOSC.OSCMessage::<Values>k__BackingField
	List_1_t5A6CC9898A7072BA7FA49E41631EDFC471750789* ___U3CValuesU3Ek__BackingField_3;
};

// extOSC.OSCValue
struct OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5  : public RuntimeObject
{
	// System.Object extOSC.OSCValue::_value
	RuntimeObject* ____value_0;
	// extOSC.OSCValueType extOSC.OSCValue::_type
	int32_t ____type_1;
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

// extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119
struct U3CImageBlinkCoroutineU3Ed__119_t5C5B3169F8882758619D9227E57ABA367F3B5F47  : public RuntimeObject
{
	// System.Int32 extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Image extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_2;
	// extOSC.Examples.ValueTypesExample extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::<>4__this
	ValueTypesExample_tF7068C33FD401694DA46B4B7F27E9532FD05E292* ___U3CU3E4__this_3;
	// System.Single extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::<blinkTimer>5__2
	float ___U3CblinkTimerU3E5__2_4;
	// System.Single extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::<blinkDuration>5__3
	float ___U3CblinkDurationU3E5__3_5;
};

// System.Collections.Generic.List`1/Enumerator<extOSC.OSCValue>
struct Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5A6CC9898A7072BA7FA49E41631EDFC471750789* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* ____current_3;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// extOSC.Examples.MarshallingStructure
struct MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 
{
	// System.Int32 extOSC.Examples.MarshallingStructure::IntValue
	int32_t ___IntValue_0;
	// System.String extOSC.Examples.MarshallingStructure::StringValue
	String_t* ___StringValue_1;
	// System.Single extOSC.Examples.MarshallingStructure::FloatValue
	float ___FloatValue_2;
};
// Native definition for P/Invoke marshalling of extOSC.Examples.MarshallingStructure
struct MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshaled_pinvoke
{
	int32_t ___IntValue_0;
	char* ___StringValue_1;
	float ___FloatValue_2;
};
// Native definition for COM marshalling of extOSC.Examples.MarshallingStructure
struct MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshaled_com
{
	int32_t ___IntValue_0;
	char* ___StringValue_1;
	float ___FloatValue_2;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// extOSC.OSCMidi
struct OSCMidi_t6963C417E4F32EDD53C3CD9C27F908D47EE24DC7 
{
	// System.Byte extOSC.OSCMidi::Channel
	uint8_t ___Channel_0;
	// System.Byte extOSC.OSCMidi::Status
	uint8_t ___Status_1;
	// System.Byte extOSC.OSCMidi::Data1
	uint8_t ___Data1_2;
	// System.Byte extOSC.OSCMidi::Data2
	uint8_t ___Data2_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::63B5CDF91FEEDBADC4A01DE52B0B2489DB8E8D0E250312B3EF012D256A5558E6
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___63B5CDF91FEEDBADC4A01DE52B0B2489DB8E8D0E250312B3EF012D256A5558E6_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_3;
	// System.Int32 <PrivateImplementationDetails>::ACB86A9CB70A84F695DE89E7FE22819466205759D798D52D4A3DD95B0CDAA2A1
	int32_t ___ACB86A9CB70A84F695DE89E7FE22819466205759D798D52D4A3DD95B0CDAA2A1_4;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// extOSC.OSCValueType
struct OSCValueType_tD72A95F2884E3DD5C52671335FD070837D2FBF5E 
{
	// System.Int32 extOSC.OSCValueType::value__
	int32_t ___value___2;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Events.UnityAction`1<extOSC.OSCMessage>
struct UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// extOSC.Examples.AddressMaskExample
struct AddressMaskExample_tE8F986BF3D2A9658CCE0987DEC6F1B7F24796F21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// extOSC.OSCTransmitter extOSC.Examples.AddressMaskExample::Transmitter
	OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* ___Transmitter_4;
	// extOSC.OSCReceiver extOSC.Examples.AddressMaskExample::Receiver
	OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* ___Receiver_5;
	// UnityEngine.UI.Text extOSC.Examples.AddressMaskExample::TransmitterAddressFirst
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressFirst_6;
	// UnityEngine.UI.Text extOSC.Examples.AddressMaskExample::TransmitterAddressSecond
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressSecond_7;
	// UnityEngine.UI.Text extOSC.Examples.AddressMaskExample::TransmitterTextFirst
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterTextFirst_8;
	// UnityEngine.UI.Text extOSC.Examples.AddressMaskExample::TransmitterTextSecond
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterTextSecond_9;
	// UnityEngine.UI.Text extOSC.Examples.AddressMaskExample::ReceiverAddressMask
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverAddressMask_10;
	// UnityEngine.UI.Text extOSC.Examples.AddressMaskExample::ReceiverText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverText_11;
	// UnityEngine.UI.Text extOSC.Examples.AddressMaskExample::ReceiverAddress
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverAddress_12;
	// UnityEngine.UI.Slider extOSC.Examples.AddressMaskExample::ReceiverSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___ReceiverSlider_13;
};

// extOSC.Examples.ArrayExample
struct ArrayExample_t98CD918ED1419285964DD8AD404308D3D9E12F7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// extOSC.OSCReceiver extOSC.Examples.ArrayExample::Receiver
	OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* ___Receiver_4;
	// extOSC.OSCTransmitter extOSC.Examples.ArrayExample::Transmitter
	OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* ___Transmitter_5;
};

// extOSC.Examples.EventsExample
struct EventsExample_t4F484AE910980C9686B89DED5749219E57D28669  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// extOSC.OSCTransmitter extOSC.Examples.EventsExample::Transmitter
	OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* ___Transmitter_4;
	// UnityEngine.UI.Text extOSC.Examples.EventsExample::TextRotate
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextRotate_5;
	// UnityEngine.UI.Text extOSC.Examples.EventsExample::TextScale
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextScale_6;
	// UnityEngine.UI.Text extOSC.Examples.EventsExample::TextPosition
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextPosition_7;
	// UnityEngine.Vector3 extOSC.Examples.EventsExample::_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_11;
};

// extOSC.Examples.InformersExample
struct InformersExample_t13284A3D4343FB6EA1506CF98EC99117E871D36A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// extOSC.OSCReceiver extOSC.Examples.InformersExample::Receiver
	OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* ___Receiver_4;
	// UnityEngine.RectTransform extOSC.Examples.InformersExample::InformerItem
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___InformerItem_5;
	// UnityEngine.UI.Text extOSC.Examples.InformersExample::ReceiverTextRotate
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverTextRotate_6;
	// UnityEngine.UI.Slider extOSC.Examples.InformersExample::ReceiverSliderRotate
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___ReceiverSliderRotate_7;
	// UnityEngine.UI.Text extOSC.Examples.InformersExample::ReceiverTextScale
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverTextScale_8;
	// UnityEngine.UI.Slider extOSC.Examples.InformersExample::ReceiverSliderScale
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___ReceiverSliderScale_9;
	// extOSC.UI.OSCPad extOSC.Examples.InformersExample::ReceiverPadPosition
	OSCPad_t2EE006490402D02087FD0485B5223229C2C1DFF6* ___ReceiverPadPosition_10;
	// UnityEngine.UI.Text extOSC.Examples.InformersExample::ReceiverTextPosition
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverTextPosition_11;
	// System.Single extOSC.Examples.InformersExample::PositionSpeed
	float ___PositionSpeed_12;
	// System.Single extOSC.Examples.InformersExample::PositionDepth
	float ___PositionDepth_13;
	// System.Single extOSC.Examples.InformersExample::RotationSpeed
	float ___RotationSpeed_14;
	// System.Single extOSC.Examples.InformersExample::RotationDepth
	float ___RotationDepth_15;
	// System.Single extOSC.Examples.InformersExample::ScaleSpeed
	float ___ScaleSpeed_16;
	// System.Single extOSC.Examples.InformersExample::ScaleDepth
	float ___ScaleDepth_17;
	// UnityEngine.Vector3 extOSC.Examples.InformersExample::_noisePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____noisePosition_21;
	// UnityEngine.Vector3 extOSC.Examples.InformersExample::_noiseRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____noiseRotation_22;
	// UnityEngine.Vector3 extOSC.Examples.InformersExample::_noiseScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____noiseScale_23;
};

// extOSC.Examples.MappingExample
struct MappingExample_t1A44019105C5469EB0F6495739EBF7CA507A64D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// extOSC.OSCTransmitter extOSC.Examples.MappingExample::Transmitter
	OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* ___Transmitter_4;
	// UnityEngine.UI.Text extOSC.Examples.MappingExample::TextRotate
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextRotate_5;
	// UnityEngine.UI.Text extOSC.Examples.MappingExample::TextScale
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextScale_6;
	// UnityEngine.UI.Text extOSC.Examples.MappingExample::TextPositionX
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextPositionX_7;
	// UnityEngine.UI.Text extOSC.Examples.MappingExample::TextPositionY
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextPositionY_8;
	// UnityEngine.Vector3 extOSC.Examples.MappingExample::_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_12;
};

// extOSC.Examples.MarshallingExample
struct MarshallingExample_t4AB5B1623A491F4D28F3BFCD890C337ECEAA2C22  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// extOSC.OSCReceiver extOSC.Examples.MarshallingExample::Receiver
	OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* ___Receiver_4;
	// extOSC.OSCTransmitter extOSC.Examples.MarshallingExample::Transmitter
	OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* ___Transmitter_5;
};

// extOSC.Examples.MatchPatternExample
struct MatchPatternExample_t8E9EA68F37D93C1D72111096543CCF4663421812  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// extOSC.OSCReceiver extOSC.Examples.MatchPatternExample::Receiver
	OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* ___Receiver_4;
	// extOSC.OSCTransmitter extOSC.Examples.MatchPatternExample::Transmitter
	OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* ___Transmitter_5;
	// UnityEngine.UI.Text extOSC.Examples.MatchPatternExample::CorrectMessageAddress
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CorrectMessageAddress_6;
	// UnityEngine.UI.Text extOSC.Examples.MatchPatternExample::WrongMessageAddress
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___WrongMessageAddress_7;
};

// extOSC.Core.OSCBase
struct OSCBase_t246010073FFE46518BA923A552AED20F19750F14  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean extOSC.Core.OSCBase::_autoConnect
	bool ____autoConnect_4;
	// System.Boolean extOSC.Core.OSCBase::_closeOnPause
	bool ____closeOnPause_5;
	// extOSC.Mapping.OSCMapBundle extOSC.Core.OSCBase::_mapBundle
	OSCMapBundle_tE95BDA970D5C248398CE48B35F9211EF8B409A8E* ____mapBundle_6;
	// System.Boolean extOSC.Core.OSCBase::_workInEditor
	bool ____workInEditor_7;
	// System.Boolean extOSC.Core.OSCBase::_restoreOnEnable
	bool ____restoreOnEnable_8;
	// System.Boolean extOSC.Core.OSCBase::_wasClosed
	bool ____wasClosed_9;
};

// extOSC.Examples.PingExample
struct PingExample_tCBA69BA219A78CD02B551C9D09C129D6C67CDDED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text extOSC.Examples.PingExample::IntervalText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___IntervalText_4;
};

// extOSC.Examples.ScriptingExample
struct ScriptingExample_t5397023DF17AF01A832CD10863E9B4201C97FDEA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// extOSC.OSCTransmitter extOSC.Examples.ScriptingExample::_transmitter
	OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* ____transmitter_4;
	// extOSC.OSCReceiver extOSC.Examples.ScriptingExample::_receiver
	OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* ____receiver_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// extOSC.Examples.ValueTypesExample
struct ValueTypesExample_tF7068C33FD401694DA46B4B7F27E9532FD05E292  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// extOSC.OSCReceiver extOSC.Examples.ValueTypesExample::Receiver
	OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* ___Receiver_4;
	// extOSC.OSCTransmitter extOSC.Examples.ValueTypesExample::Transmitter
	OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* ___Transmitter_5;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressBlob
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressBlob_6;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressChar
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressChar_7;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressColor
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressColor_8;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressDouble
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressDouble_9;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressBool
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressBool_10;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressFloat
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressFloat_11;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressImpulse
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressImpulse_12;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressInt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressInt_13;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressLong
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressLong_14;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressNull
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressNull_15;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressString
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressString_16;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressTimeTag
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressTimeTag_17;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterAddressMidi
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterAddressMidi_18;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterTextBlob
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterTextBlob_19;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterTextDouble
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterTextDouble_20;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterTextBool
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterTextBool_21;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterTextFloat
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterTextFloat_22;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterTextInt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterTextInt_23;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::TransmitterTextLong
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TransmitterTextLong_24;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputTimeTagMonth
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputTimeTagMonth_25;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputTimeTagDay
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputTimeTagDay_26;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputTimeTagYear
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputTimeTagYear_27;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputTimeTagHour
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputTimeTagHour_28;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputTimeTagMinute
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputTimeTagMinute_29;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputTimeTagSecond
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputTimeTagSecond_30;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputTimeTagMillisecond
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputTimeTagMillisecond_31;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputMidiChannel
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputMidiChannel_32;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputMidiStatus
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputMidiStatus_33;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputMidiData1
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputMidiData1_34;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::TransmitterInputMidiData2
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___TransmitterInputMidiData2_35;
	// UnityEngine.UI.Image extOSC.Examples.ValueTypesExample::TransmitterImageColor
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___TransmitterImageColor_36;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::ReceiverTextBlob
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverTextBlob_37;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputChar
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputChar_38;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::ReceiverTextDouble
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverTextDouble_39;
	// UnityEngine.UI.Slider extOSC.Examples.ValueTypesExample::ReceiverSliderDouble
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___ReceiverSliderDouble_40;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::ReceiverTextBool
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverTextBool_41;
	// UnityEngine.UI.Toggle extOSC.Examples.ValueTypesExample::ReceiverToggleBool
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___ReceiverToggleBool_42;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::ReceiverTextFloat
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverTextFloat_43;
	// UnityEngine.UI.Slider extOSC.Examples.ValueTypesExample::ReceiverSliderFloat
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___ReceiverSliderFloat_44;
	// UnityEngine.UI.Image extOSC.Examples.ValueTypesExample::ReceiverImageImpulse
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ReceiverImageImpulse_45;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::ReceiverTextInt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverTextInt_46;
	// UnityEngine.UI.Slider extOSC.Examples.ValueTypesExample::ReceiverSliderInt
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___ReceiverSliderInt_47;
	// UnityEngine.UI.Text extOSC.Examples.ValueTypesExample::ReceiverTextLong
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ReceiverTextLong_48;
	// UnityEngine.UI.Slider extOSC.Examples.ValueTypesExample::ReceiverSliderLong
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___ReceiverSliderLong_49;
	// UnityEngine.UI.Image extOSC.Examples.ValueTypesExample::ReceiverImageNull
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ReceiverImageNull_50;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputString
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputString_51;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputTimeTagMonth
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputTimeTagMonth_52;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputTimeTagDay
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputTimeTagDay_53;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputTimeTagYear
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputTimeTagYear_54;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputTimeTagHour
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputTimeTagHour_55;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputTimeTagMinute
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputTimeTagMinute_56;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputTimeTagSecond
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputTimeTagSecond_57;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputTimeTagMillisecond
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputTimeTagMillisecond_58;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputMidiChannel
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputMidiChannel_59;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputMidiStatus
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputMidiStatus_60;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputMidiData1
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputMidiData1_61;
	// UnityEngine.UI.InputField extOSC.Examples.ValueTypesExample::ReceiverInputMidiData2
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___ReceiverInputMidiData2_62;
	// UnityEngine.UI.Image extOSC.Examples.ValueTypesExample::ReceiverImageColor
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ReceiverImageColor_63;
	// UnityEngine.Color extOSC.Examples.ValueTypesExample::BlinkImage
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___BlinkImage_64;
	// System.DateTime extOSC.Examples.ValueTypesExample::_timeTag
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____timeTag_78;
	// extOSC.OSCMidi extOSC.Examples.ValueTypesExample::_midi
	OSCMidi_t6963C417E4F32EDD53C3CD9C27F908D47EE24DC7 ____midi_79;
	// UnityEngine.Color extOSC.Examples.ValueTypesExample::_defaultImageColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____defaultImageColor_80;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Image,UnityEngine.Coroutine> extOSC.Examples.ValueTypesExample::_blinkCoroutinePool
	Dictionary_2_t49F1158DD0F9B40E86C1081BEA0209D395CB878F* ____blinkCoroutinePool_81;
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

// extOSC.OSCReceiver
struct OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765  : public OSCBase_t246010073FFE46518BA923A552AED20F19750F14
{
	// extOSC.OSCLocalHostMode extOSC.OSCReceiver::_localHostMode
	int32_t ____localHostMode_10;
	// System.String extOSC.OSCReceiver::_localHost
	String_t* ____localHost_11;
	// System.Int32 extOSC.OSCReceiver::_localPort
	int32_t ____localPort_12;
	// System.Collections.Generic.Queue`1<extOSC.Core.IOSCPacket> extOSC.OSCReceiver::_packets
	Queue_1_tF36EA41D8BB8B1C7E94DD5813337C728016C9B76* ____packets_13;
	// System.Collections.Generic.List`1<extOSC.Core.IOSCBind> extOSC.OSCReceiver::_messageBindings
	List_1_tA80FCD8A467AB5E1BDCE410684CEC4B527A22A0E* ____messageBindings_14;
	// System.Collections.Generic.Stack`1<extOSC.Core.IOSCBind> extOSC.OSCReceiver::_messageBindStack
	Stack_1_tD0FE2E31DE41D92BBEF774A4EE4CCFD1EC58E293* ____messageBindStack_15;
	// System.Collections.Generic.Stack`1<extOSC.Core.IOSCBind> extOSC.OSCReceiver::_messageUnbindStack
	Stack_1_tD0FE2E31DE41D92BBEF774A4EE4CCFD1EC58E293* ____messageUnbindStack_16;
	// System.Collections.Generic.List`1<extOSC.Core.IOSCBindBundle> extOSC.OSCReceiver::_bundleBindings
	List_1_tB4A0909742CD549B9E1FA8E9B310D6B3934C23F7* ____bundleBindings_17;
	// System.Collections.Generic.Stack`1<extOSC.Core.IOSCBindBundle> extOSC.OSCReceiver::_bundleBindStack
	Stack_1_t3E549306636A5DFD7340E55AA10D3E114DFE345F* ____bundleBindStack_18;
	// System.Collections.Generic.Stack`1<extOSC.Core.IOSCBindBundle> extOSC.OSCReceiver::_bundleUnbindStack
	Stack_1_t3E549306636A5DFD7340E55AA10D3E114DFE345F* ____bundleUnbindStack_19;
	// System.Object extOSC.OSCReceiver::_lock
	RuntimeObject* ____lock_20;
	// extOSC.Core.Network.OSCReceiverBackend extOSC.OSCReceiver::__receiverBackend
	OSCReceiverBackend_t76BEC619EC7A36C5D0BE4908BF55852E850A1B22* _____receiverBackend_21;
	// System.Boolean extOSC.OSCReceiver::_processMessage
	bool ____processMessage_22;
};

// extOSC.OSCTransmitter
struct OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6  : public OSCBase_t246010073FFE46518BA923A552AED20F19750F14
{
	// extOSC.OSCLocalHostMode extOSC.OSCTransmitter::_localHostMode
	int32_t ____localHostMode_10;
	// extOSC.OSCLocalPortMode extOSC.OSCTransmitter::_localPortMode
	int32_t ____localPortMode_11;
	// extOSC.OSCReceiver extOSC.OSCTransmitter::_localReceiver
	OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* ____localReceiver_12;
	// System.String extOSC.OSCTransmitter::_localHost
	String_t* ____localHost_13;
	// System.Int32 extOSC.OSCTransmitter::_localPort
	int32_t ____localPort_14;
	// System.String extOSC.OSCTransmitter::_remoteHost
	String_t* ____remoteHost_15;
	// System.Int32 extOSC.OSCTransmitter::_remotePort
	int32_t ____remotePort_16;
	// System.Boolean extOSC.OSCTransmitter::_useBundle
	bool ____useBundle_17;
	// System.Collections.Generic.List`1<extOSC.Core.IOSCPacket> extOSC.OSCTransmitter::_bundleBuffer
	List_1_tD1F0FC1EEA9E2F7256304EF68ABE9F497785C8B5* ____bundleBuffer_18;
	// extOSC.Core.Network.OSCTransmitterBackend extOSC.OSCTransmitter::__transmitterBackend
	OSCTransmitterBackend_t9ED37ED2D3901B7AA96A1DC6BA87A4E3F47235B4* _____transmitterBackend_19;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
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

// extOSC.UI.OSCPad
struct OSCPad_t2EE006490402D02087FD0485B5223229C2C1DFF6  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.Vector2 extOSC.UI.OSCPad::_value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____value_20;
	// UnityEngine.Vector2 extOSC.UI.OSCPad::_maxValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____maxValue_21;
	// UnityEngine.Vector2 extOSC.UI.OSCPad::_minValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____minValue_22;
	// extOSC.Core.Events.OSCEventVector2 extOSC.UI.OSCPad::_onValueChanged
	OSCEventVector2_tC2E7B15223A37B447B91EBE7B12C5B90B2AF0BC7* ____onValueChanged_23;
	// UnityEngine.RectTransform extOSC.UI.OSCPad::_handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____handleRect_24;
	// UnityEngine.RectTransform extOSC.UI.OSCPad::_xAxisRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____xAxisRect_25;
	// UnityEngine.RectTransform extOSC.UI.OSCPad::_yAxisRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____yAxisRect_26;
	// System.Boolean extOSC.UI.OSCPad::_wholeNumbers
	bool ____wholeNumbers_27;
	// System.Boolean extOSC.UI.OSCPad::_resetValue
	bool ____resetValue_28;
	// System.Single extOSC.UI.OSCPad::_resetValueTime
	float ____resetValueTime_29;
	// System.Boolean extOSC.UI.OSCPad::_callbackOnReset
	bool ____callbackOnReset_30;
	// extOSC.UI.OSCPad/PointAlignment extOSC.UI.OSCPad::_handleAlignment
	int32_t ____handleAlignment_31;
	// UnityEngine.Vector2 extOSC.UI.OSCPad::_defaultValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____defaultValue_32;
	// UnityEngine.Vector2 extOSC.UI.OSCPad::_offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____offset_33;
	// UnityEngine.Transform extOSC.UI.OSCPad::_handleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____handleTransform_34;
	// UnityEngine.RectTransform extOSC.UI.OSCPad::_handleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____handleContainerRect_35;
	// UnityEngine.DrivenRectTransformTracker extOSC.UI.OSCPad::_tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ____tracker_36;
	// System.Boolean extOSC.UI.OSCPad::_dragged
	bool ____dragged_37;
	// UnityEngine.Coroutine extOSC.UI.OSCPad::_resetAnimationCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____resetAnimationCoroutine_38;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
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
// extOSC.OSCValue[]
struct OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7  : public RuntimeArray
{
	ALIGN_FIELD (8) OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* m_Items[1];

	inline OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// extOSC.OSCValueType[]
struct OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F  : public RuntimeArray
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Byte[] extOSC.OSCUtilities::StructToByte<extOSC.Examples.MarshallingStructure>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OSCUtilities_StructToByte_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_mC73D9C3D0D7152A7885B64EF247A3B300CEA4DF9_gshared (MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 ___structure0, const RuntimeMethod* method) ;
// T extOSC.OSCUtilities::ByteToStruct<extOSC.Examples.MarshallingStructure>(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 OSCUtilities_ByteToStruct_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_m8E2620529FA33EB7AB85E6339C207D02E090874D_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Image,UnityEngine.Coroutine>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m791C2389291D51ECC74E27B3DEC07F3E51438F8A (Dictionary_2_t49F1158DD0F9B40E86C1081BEA0209D395CB878F* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t49F1158DD0F9B40E86C1081BEA0209D395CB878F*, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Image,UnityEngine.Coroutine>::Remove(TKey)
inline bool Dictionary_2_Remove_m668D862E47728A9BD0968155950ECE4205A8B503 (Dictionary_2_t49F1158DD0F9B40E86C1081BEA0209D395CB878F* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t49F1158DD0F9B40E86C1081BEA0209D395CB878F*, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Single extOSC.OSCUtilities::Map(System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC (float ___value0, float ___inputMin1, float ___inputMax2, float ___outputMin3, float ___outputMax4, bool ___clamp5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void extOSC.Examples.EventsExample::SendVector(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsExample_SendVector_mC0D501989F11D6DB0460EA70335DEC153366A302 (EventsExample_t4F484AE910980C9686B89DED5749219E57D28669* __this, String_t* ___address0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector1, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void extOSC.OSCMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCMessage__ctor_m1F7B91DD0B215B47A4AAA38FD8E83185939079D9 (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* __this, String_t* ___address0, const RuntimeMethod* method) ;
// extOSC.OSCValue extOSC.OSCValue::Float(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53 (float ___value0, const RuntimeMethod* method) ;
// System.Void extOSC.OSCMessage::AddValue(extOSC.OSCValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* __this, OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void extOSC.OSCTransmitter::Send(extOSC.Core.IOSCPacket,extOSC.OSCSendOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCTransmitter_Send_m5F0B6D48885E29AE45F574A57B2BCD20B81B3917 (OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* __this, RuntimeObject* ___packet0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<extOSC.OSCMessage>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mB9B1A18C059475C6036EF7CF2A1419F4E6036E05 (UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// extOSC.OSCBind extOSC.OSCReceiver::Bind(System.String,UnityEngine.Events.UnityAction`1<extOSC.OSCMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC* OSCReceiver_Bind_m4C8E663DC0C59E94D934056DE8BE796F62FD3C00 (OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* __this, String_t* ___address0, UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC* ___callback1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RectTransform::get_anchoredPosition3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RectTransform_get_anchoredPosition3D_mE2E0547DCA8921F42B5C666E562E6A59B4894CDA (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4 (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean extOSC.OSCUtilities::ToVector3(extOSC.OSCMessage,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSCUtilities_ToVector3_m61E2DD10690A592C84DBC3503CC2CA6946EC05D1 (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value1, bool ___force2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void extOSC.Examples.MappingExample::SendVector(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingExample_SendVector_m579B03D72A16C438673D91DF53E98DCF41CDA5EA (MappingExample_t1A44019105C5469EB0F6495739EBF7CA507A64D2* __this, String_t* ___address0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<extOSC.OSCTransmitter>()
inline OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* GameObject_AddComponent_TisOSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6_mC3C2D8A034E626456AFDA7E04C1F37D50841C880 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void extOSC.OSCTransmitter::set_RemoteHost(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCTransmitter_set_RemoteHost_m6D720E6A6693237F8667D6F4E5F3B7F8B7F9629B (OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void extOSC.OSCTransmitter::set_RemotePort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCTransmitter_set_RemotePort_mD32851BD9677EC37B05E573062F0020607176E21 (OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<extOSC.OSCReceiver>()
inline OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* GameObject_AddComponent_TisOSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765_m6AF2FEED04B3ECDE4AEE7F3F83715E5CE43819CE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void extOSC.OSCReceiver::set_LocalPort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCReceiver_set_LocalPort_mDC0BD49229AE91D073CA93756153F391B5D051DC (OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// extOSC.OSCValue extOSC.OSCValue::String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* OSCValue_String_m2BF644B79EB74362357F56C4E52A852E72792EFF (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void extOSC.OSCMessage::.ctor(System.String,extOSC.OSCValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCMessage__ctor_m2B47D68779EBE5140692A8E8F18DF2B124BD1778 (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* __this, String_t* ___address0, OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* ___values1, const RuntimeMethod* method) ;
// System.Boolean extOSC.OSCUtilities::ToFloat(extOSC.OSCMessage,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSCUtilities_ToFloat_mFA02B5C95F3F9B9B37A8A610BF49E46E23575A74 (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, float* ___value1, const RuntimeMethod* method) ;
// System.String extOSC.OSCMessage::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OSCMessage_get_Address_m32466F502BA1ADC3CF7DA23081E8DDFB202366A1_inline (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<extOSC.OSCValue>()
inline OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* Array_Empty_TisOSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5_mB8514B6BCFDC5F4BE3D48CE0F5016B3B25E37473_inline (const RuntimeMethod* method)
{
	return ((  OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// extOSC.OSCMessage extOSC.OSCMessage::Create(System.String,extOSC.OSCValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* OSCMessage_Create_mCF59DF1BE199F6497900705F3A4DCEDDB02180BE (String_t* ___address0, OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* ___values1, const RuntimeMethod* method) ;
// extOSC.OSCValue extOSC.OSCValue::Array(extOSC.OSCValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* OSCValue_Array_m30F27AC89B97B7DF0FBC3D5EFC8487AC4B8A61B6 (OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* ___values0, const RuntimeMethod* method) ;
// extOSC.OSCValue extOSC.OSCValue::Int(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* OSCValue_Int_m4D78B45616C42125A7CD216908E80B4F8DD71829 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void extOSC.OSCValue::AddValue(extOSC.OSCValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCValue_AddValue_m53BFE443B0F7EEB03F2524E1B9ACD973696DB6BD (OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* __this, OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* ___arrayValue0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// extOSC.OSCValue extOSC.OSCValue::Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* OSCValue_Color_mEE3BF67BB75FF425974C51F4E06DC152CA6B2491 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Boolean extOSC.OSCUtilities::ToArray(extOSC.OSCMessage,System.Collections.Generic.List`1<extOSC.OSCValue>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSCUtilities_ToArray_m22E35A9AE9652BA58BC6D6A4AD3E99D546CD23BC (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, List_1_t5A6CC9898A7072BA7FA49E41631EDFC471750789** ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<extOSC.OSCValue>::GetEnumerator()
inline Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791 List_1_GetEnumerator_mCC2633EA14C082BA3A9D9C6F9F1A2A460EAE7F03 (List_1_t5A6CC9898A7072BA7FA49E41631EDFC471750789* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791 (*) (List_1_t5A6CC9898A7072BA7FA49E41631EDFC471750789*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<extOSC.OSCValue>::Dispose()
inline void Enumerator_Dispose_mA9B39BCA4B24A78D2F42ECF382DAAB8DDA5AACB1 (Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<extOSC.OSCValue>::get_Current()
inline OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* Enumerator_get_Current_m94C1227DE6EA234D3A61212C5030279A6D85D392_inline (Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791* __this, const RuntimeMethod* method)
{
	return ((  OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* (*) (Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<extOSC.OSCValue>::MoveNext()
inline bool Enumerator_MoveNext_m57B7C5555C17A6B7E1C1F34ECAA079BD32748610 (Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// extOSC.OSCValue extOSC.OSCValue::Bool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* OSCValue_Bool_mE9A8CCA92E3B652C2F36CC21E5D7A7C32345AEC6 (bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// extOSC.OSCValue extOSC.OSCValue::Blob(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* OSCValue_Blob_m9EA33028F3698B40F82121D68E582984970E0F58 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void extOSC.OSCMatchPattern::.ctor(extOSC.OSCValueType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSCMatchPattern__ctor_mF2C935321910E13A511F702315EB91F3D1EDC5D1 (OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1* __this, OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F* ___types0, const RuntimeMethod* method) ;
// System.Boolean extOSC.OSCUtilities::IsMatch(extOSC.OSCMessage,extOSC.OSCMatchPattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSCUtilities_IsMatch_m22F438AF119B86D3BF8E7AE10CD07C1BB42C2092 (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1* ___pattern1, const RuntimeMethod* method) ;
// System.Byte[] extOSC.OSCUtilities::StructToByte<extOSC.Examples.MarshallingStructure>(T)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OSCUtilities_StructToByte_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_mC73D9C3D0D7152A7885B64EF247A3B300CEA4DF9 (MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 ___structure0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36, const RuntimeMethod*))OSCUtilities_StructToByte_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_mC73D9C3D0D7152A7885B64EF247A3B300CEA4DF9_gshared)(___structure0, method);
}
// System.Boolean extOSC.OSCUtilities::ToBlob(extOSC.OSCMessage,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSCUtilities_ToBlob_m9282923280C7B850E5B5672DC6B794018EA31D40 (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value1, const RuntimeMethod* method) ;
// T extOSC.OSCUtilities::ByteToStruct<extOSC.Examples.MarshallingStructure>(System.Byte[])
inline MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 OSCUtilities_ByteToStruct_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_m8E2620529FA33EB7AB85E6339C207D02E090874D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	return ((  MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))OSCUtilities_ByteToStruct_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_m8E2620529FA33EB7AB85E6339C207D02E090874D_gshared)(___data0, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImageBlinkCoroutineU3Ed__119__ctor_mF9EEF1BA36C55847D34FD3D54044B2DE13FBD4FF (U3CImageBlinkCoroutineU3Ed__119_t5C5B3169F8882758619D9227E57ABA367F3B5F47* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImageBlinkCoroutineU3Ed__119_System_IDisposable_Dispose_m9F7C9B72C8FD5AB751306EF828D9C25CCBB4874D (U3CImageBlinkCoroutineU3Ed__119_t5C5B3169F8882758619D9227E57ABA367F3B5F47* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CImageBlinkCoroutineU3Ed__119_MoveNext_m7E7A58F3D5984792B33F3D28BEF5DFE790CA2F6B (U3CImageBlinkCoroutineU3Ed__119_t5C5B3169F8882758619D9227E57ABA367F3B5F47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m791C2389291D51ECC74E27B3DEC07F3E51438F8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m668D862E47728A9BD0968155950ECE4205A8B503_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ValueTypesExample_tF7068C33FD401694DA46B4B7F27E9532FD05E292* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ValueTypesExample_tF7068C33FD401694DA46B4B7F27E9532FD05E292* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0091;
			}
			case 2:
			{
				goto IL_0109;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var blinkTimer = 0f;
		__this->___U3CblinkTimerU3E5__2_4 = (0.0f);
		// var blinkDuration = 0.05f;
		__this->___U3CblinkDurationU3E5__3_5 = (0.0500000007f);
		goto IL_0098;
	}

IL_0041:
	{
		// blinkTimer += Time.deltaTime;
		float L_3 = __this->___U3CblinkTimerU3E5__2_4;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CblinkTimerU3E5__2_4 = ((float)il2cpp_codegen_add(L_3, L_4));
		// image.color = Color.Lerp(image.color, BlinkImage, blinkTimer / blinkDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___image_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___image_2;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		ValueTypesExample_tF7068C33FD401694DA46B4B7F27E9532FD05E292* L_8 = V_1;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = L_8->___BlinkImage_64;
		float L_10 = __this->___U3CblinkTimerU3E5__2_4;
		float L_11 = __this->___U3CblinkDurationU3E5__3_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_7, L_9, ((float)(L_10/L_11)), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_12);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0091:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0098:
	{
		// while (blinkTimer < blinkDuration)
		float L_13 = __this->___U3CblinkTimerU3E5__2_4;
		float L_14 = __this->___U3CblinkDurationU3E5__3_5;
		if ((((float)L_13) < ((float)L_14)))
		{
			goto IL_0041;
		}
	}
	{
		// blinkTimer = 0;
		__this->___U3CblinkTimerU3E5__2_4 = (0.0f);
		// blinkDuration = 0.2f;
		__this->___U3CblinkDurationU3E5__3_5 = (0.200000003f);
		goto IL_0110;
	}

IL_00be:
	{
		// blinkTimer += Time.deltaTime;
		float L_15 = __this->___U3CblinkTimerU3E5__2_4;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CblinkTimerU3E5__2_4 = ((float)il2cpp_codegen_add(L_15, L_16));
		// image.color = Color.Lerp(BlinkImage, _defaultImageColor, blinkTimer / blinkDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___image_2;
		ValueTypesExample_tF7068C33FD401694DA46B4B7F27E9532FD05E292* L_18 = V_1;
		NullCheck(L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = L_18->___BlinkImage_64;
		ValueTypesExample_tF7068C33FD401694DA46B4B7F27E9532FD05E292* L_20 = V_1;
		NullCheck(L_20);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = L_20->____defaultImageColor_80;
		float L_22 = __this->___U3CblinkTimerU3E5__2_4;
		float L_23 = __this->___U3CblinkDurationU3E5__3_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_19, L_21, ((float)(L_22/L_23)), NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_24);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0109:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0110:
	{
		// while (blinkTimer < blinkDuration)
		float L_25 = __this->___U3CblinkTimerU3E5__2_4;
		float L_26 = __this->___U3CblinkDurationU3E5__3_5;
		if ((((float)L_25) < ((float)L_26)))
		{
			goto IL_00be;
		}
	}
	{
		// if (_blinkCoroutinePool.ContainsKey(image))
		ValueTypesExample_tF7068C33FD401694DA46B4B7F27E9532FD05E292* L_27 = V_1;
		NullCheck(L_27);
		Dictionary_2_t49F1158DD0F9B40E86C1081BEA0209D395CB878F* L_28 = L_27->____blinkCoroutinePool_81;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___image_2;
		NullCheck(L_28);
		bool L_30;
		L_30 = Dictionary_2_ContainsKey_m791C2389291D51ECC74E27B3DEC07F3E51438F8A(L_28, L_29, Dictionary_2_ContainsKey_m791C2389291D51ECC74E27B3DEC07F3E51438F8A_RuntimeMethod_var);
		if (!L_30)
		{
			goto IL_0143;
		}
	}
	{
		// _blinkCoroutinePool.Remove(image);
		ValueTypesExample_tF7068C33FD401694DA46B4B7F27E9532FD05E292* L_31 = V_1;
		NullCheck(L_31);
		Dictionary_2_t49F1158DD0F9B40E86C1081BEA0209D395CB878F* L_32 = L_31->____blinkCoroutinePool_81;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___image_2;
		NullCheck(L_32);
		bool L_34;
		L_34 = Dictionary_2_Remove_m668D862E47728A9BD0968155950ECE4205A8B503(L_32, L_33, Dictionary_2_Remove_m668D862E47728A9BD0968155950ECE4205A8B503_RuntimeMethod_var);
	}

IL_0143:
	{
		// }
		return (bool)0;
	}
}
// System.Object extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CImageBlinkCoroutineU3Ed__119_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m788C683726F3F4D3A589749214E08DBA568732B7 (U3CImageBlinkCoroutineU3Ed__119_t5C5B3169F8882758619D9227E57ABA367F3B5F47* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImageBlinkCoroutineU3Ed__119_System_Collections_IEnumerator_Reset_mE9552E17A6F87B3938A90D9ACAC354D85263774E (U3CImageBlinkCoroutineU3Ed__119_t5C5B3169F8882758619D9227E57ABA367F3B5F47* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CImageBlinkCoroutineU3Ed__119_System_Collections_IEnumerator_Reset_mE9552E17A6F87B3938A90D9ACAC354D85263774E_RuntimeMethod_var)));
	}
}
// System.Object extOSC.Examples.ValueTypesExample/<ImageBlinkCoroutine>d__119::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CImageBlinkCoroutineU3Ed__119_System_Collections_IEnumerator_get_Current_mBB5BE5511A365C85668EDC053CC81A9AA0A0AA3C (U3CImageBlinkCoroutineU3Ed__119_t5C5B3169F8882758619D9227E57ABA367F3B5F47* __this, const RuntimeMethod* method) 
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
// System.Void extOSC.Examples.EventsExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsExample_Start_mB41E32395A612CB96A4787222E702286D1A9013C (EventsExample_t4F484AE910980C9686B89DED5749219E57D28669* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextScale.text = $"{Vector3.one}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___TextScale_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// TextRotate.text = $"{Vector3.zero}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___TextRotate_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_8, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// TextPosition.text = $"{Vector3.zero}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___TextPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11;
		RuntimeObject* L_13 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_13, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_14);
		// }
		return;
	}
}
// System.Void extOSC.Examples.EventsExample::SendRotate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsExample_SendRotate_m3C95AB4698BD38C68C009916B77614724497F8A2 (EventsExample_t4F484AE910980C9686B89DED5749219E57D28669* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD120F4C7D317080847A870F80AC51BE90DC2EB92);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// value = OSCUtilities.Map(value, 0, 1, 0, 360);
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_0, (0.0f), (1.0f), (0.0f), (360.0f), (bool)1, NULL);
		___value0 = L_1;
		// var vector = new Vector3(0, 0, value);
		float L_2 = ___value0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), (0.0f), L_2, NULL);
		// SendVector(_rotateAddress, vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		EventsExample_SendVector_mC0D501989F11D6DB0460EA70335DEC153366A302(__this, _stringLiteralD120F4C7D317080847A870F80AC51BE90DC2EB92, L_3, NULL);
		// TextRotate.text = vector.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___TextRotate_5;
		String_t* L_5;
		L_5 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void extOSC.Examples.EventsExample::SendScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsExample_SendScale_m426FA4A301F4B35810692EA19B8D03501DFFCA4A (EventsExample_t4F484AE910980C9686B89DED5749219E57D28669* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC56B7E3A4791E3857CDBE0D0820E944F1EB389D);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// value = OSCUtilities.Map(value, 0, 1, 1, 5);
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_0, (0.0f), (1.0f), (1.0f), (5.0f), (bool)1, NULL);
		___value0 = L_1;
		// var vector = new Vector3(value, value, value);
		float L_2 = ___value0;
		float L_3 = ___value0;
		float L_4 = ___value0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, L_3, L_4, NULL);
		// SendVector(_scaleAddress, vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		EventsExample_SendVector_mC0D501989F11D6DB0460EA70335DEC153366A302(__this, _stringLiteralFC56B7E3A4791E3857CDBE0D0820E944F1EB389D, L_5, NULL);
		// TextScale.text = vector.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___TextScale_6;
		String_t* L_7;
		L_7 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void extOSC.Examples.EventsExample::SendPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsExample_SendPosition_mCE2DA2F3357E5AAB1FF6782708F34EA5A85A09BB (EventsExample_t4F484AE910980C9686B89DED5749219E57D28669* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DE46B230ADBD580354150F22800CD138E4C5F89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _position.x = OSCUtilities.Map(value.x, -1, 1, -100, 100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->____position_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value0;
		float L_2 = L_1.___x_0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_2, (-1.0f), (1.0f), (-100.0f), (100.0f), (bool)1, NULL);
		L_0->___x_2 = L_3;
		// _position.y = OSCUtilities.Map(value.y, -1, 1, -100, 100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->____position_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___value0;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_6, (-1.0f), (1.0f), (-100.0f), (100.0f), (bool)1, NULL);
		L_4->___y_3 = L_7;
		// SendVector(_positionAddress, _position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->____position_11;
		EventsExample_SendVector_mC0D501989F11D6DB0460EA70335DEC153366A302(__this, _stringLiteral9DE46B230ADBD580354150F22800CD138E4C5F89, L_8, NULL);
		// TextPosition.text = _position.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___TextPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->____position_11);
		String_t* L_11;
		L_11 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		// }
		return;
	}
}
// System.Void extOSC.Examples.EventsExample::SendVector(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsExample_SendVector_mC0D501989F11D6DB0460EA70335DEC153366A302 (EventsExample_t4F484AE910980C9686B89DED5749219E57D28669* __this, String_t* ___address0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* V_0 = NULL;
	{
		// var message = new OSCMessage(address);
		String_t* L_0 = ___address0;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_1 = (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953*)il2cpp_codegen_object_new(OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OSCMessage__ctor_m1F7B91DD0B215B47A4AAA38FD8E83185939079D9(L_1, L_0, NULL);
		V_0 = L_1;
		// message.AddValue(OSCValue.Float(vector.x));
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___vector1;
		float L_4 = L_3.___x_2;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_5;
		L_5 = OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53(L_4, NULL);
		NullCheck(L_2);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_2, L_5, NULL);
		// message.AddValue(OSCValue.Float(vector.y));
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector1;
		float L_8 = L_7.___y_3;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_9;
		L_9 = OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53(L_8, NULL);
		NullCheck(L_6);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_6, L_9, NULL);
		// message.AddValue(OSCValue.Float(vector.z));
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___vector1;
		float L_12 = L_11.___z_4;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_13;
		L_13 = OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53(L_12, NULL);
		NullCheck(L_10);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_10, L_13, NULL);
		// if (Transmitter != null)
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_14 = __this->___Transmitter_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		// Transmitter.Send(message);
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_16 = __this->___Transmitter_4;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_17 = V_0;
		NullCheck(L_16);
		OSCTransmitter_Send_m5F0B6D48885E29AE45F574A57B2BCD20B81B3917(L_16, L_17, 0, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void extOSC.Examples.EventsExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsExample__ctor_m472697968AFA081668100729AB9739CFDABF3557 (EventsExample_t4F484AE910980C9686B89DED5749219E57D28669* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 _position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____position_11 = L_0;
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
// System.Void extOSC.Examples.InformersExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformersExample_Start_mA026B9C4AB7A518D3C12A8F4FDB6EAB203723112 (InformersExample_t13284A3D4343FB6EA1506CF98EC99117E871D36A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformersExample_ReceivePosition_m0E3D996B8FC6E2E0171B6294CCBE4D675FE05C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformersExample_ReceiveRotate_m9E650015AD1E6845ACE39C0E943923E79FA63B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformersExample_ReceiveScale_m43BBE0E5CF0142B9D46E7C176716B8C666C62FD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30D374B70B2087F4469B36427A14700D61D7BB93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6D02502C75BE72D3B0B519ED51AE6DE4FCDF58E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF07A9F74C9C190770C568CA75A353103054E6018);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var scale = Random.Range(1f, 5f);
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((1.0f), (5.0f), NULL);
		V_0 = L_0;
		// _noiseScale = new Vector3(scale, scale, scale);
		float L_1 = V_0;
		float L_2 = V_0;
		float L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->____noiseScale_23 = L_4;
		// _noisePosition = new Vector3(Random.Range(0f, 100f), Random.Range(0f, 100f), 0);
		float L_5;
		L_5 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (100.0f), NULL);
		float L_6;
		L_6 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (100.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), L_5, L_6, (0.0f), /*hidden argument*/NULL);
		__this->____noisePosition_21 = L_7;
		// _noiseRotation = new Vector3(0, 0, Random.Range(0f, 360f));
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (360.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		__this->____noiseRotation_22 = L_9;
		// ReceiverTextScale.text = Vector3.one.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___ReceiverTextScale_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		V_1 = L_11;
		String_t* L_12;
		L_12 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_1), NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		// ReceiverTextRotate.text = Vector3.zero.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___ReceiverTextRotate_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_1 = L_14;
		String_t* L_15;
		L_15 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_1), NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
		// Receiver.Bind(_positionAddress, ReceivePosition);
		OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* L_16 = __this->___Receiver_4;
		UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC* L_17 = (UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC*)il2cpp_codegen_object_new(UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mB9B1A18C059475C6036EF7CF2A1419F4E6036E05(L_17, __this, (intptr_t)((void*)InformersExample_ReceivePosition_m0E3D996B8FC6E2E0171B6294CCBE4D675FE05C67_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC* L_18;
		L_18 = OSCReceiver_Bind_m4C8E663DC0C59E94D934056DE8BE796F62FD3C00(L_16, _stringLiteral30D374B70B2087F4469B36427A14700D61D7BB93, L_17, NULL);
		// Receiver.Bind(_rotateAddress, ReceiveRotate);
		OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* L_19 = __this->___Receiver_4;
		UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC* L_20 = (UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC*)il2cpp_codegen_object_new(UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_mB9B1A18C059475C6036EF7CF2A1419F4E6036E05(L_20, __this, (intptr_t)((void*)InformersExample_ReceiveRotate_m9E650015AD1E6845ACE39C0E943923E79FA63B6A_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC* L_21;
		L_21 = OSCReceiver_Bind_m4C8E663DC0C59E94D934056DE8BE796F62FD3C00(L_19, _stringLiteralF07A9F74C9C190770C568CA75A353103054E6018, L_20, NULL);
		// Receiver.Bind(_scaleAddress, ReceiveScale);
		OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* L_22 = __this->___Receiver_4;
		UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC* L_23 = (UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC*)il2cpp_codegen_object_new(UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction_1__ctor_mB9B1A18C059475C6036EF7CF2A1419F4E6036E05(L_23, __this, (intptr_t)((void*)InformersExample_ReceiveScale_m43BBE0E5CF0142B9D46E7C176716B8C666C62FD1_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC* L_24;
		L_24 = OSCReceiver_Bind_m4C8E663DC0C59E94D934056DE8BE796F62FD3C00(L_22, _stringLiteralA6D02502C75BE72D3B0B519ED51AE6DE4FCDF58E, L_23, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.InformersExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformersExample_Update_m22E1312FA3A6F3BCCEF1016ED04C5B8BC1424673 (InformersExample_t13284A3D4343FB6EA1506CF98EC99117E871D36A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// _noisePosition.x += PositionSpeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->____noisePosition_21);
		float* L_1 = (&L_0->___x_2);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->___PositionSpeed_12;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// _noisePosition.y += PositionSpeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->____noisePosition_21);
		float* L_7 = (&L_6->___y_3);
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		float L_10 = __this->___PositionSpeed_12;
		float L_11;
		L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_8) = (float)((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_10, L_11))));
		// var position = InformerItem.anchoredPosition3D;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___InformerItem_5;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = RectTransform_get_anchoredPosition3D_mE2E0547DCA8921F42B5C666E562E6A59B4894CDA(L_12, NULL);
		V_0 = L_13;
		// position.x = Mathf.PerlinNoise(_noisePosition.x, _noisePosition.x) * PositionDepth;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->____noisePosition_21);
		float L_15 = L_14->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->____noisePosition_21);
		float L_17 = L_16->___x_2;
		float L_18;
		L_18 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_15, L_17, NULL);
		float L_19 = __this->___PositionDepth_13;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(L_18, L_19));
		// position.y = Mathf.PerlinNoise(_noisePosition.y, _noisePosition.y) * PositionDepth;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->____noisePosition_21);
		float L_21 = L_20->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->____noisePosition_21);
		float L_23 = L_22->___y_3;
		float L_24;
		L_24 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_21, L_23, NULL);
		float L_25 = __this->___PositionDepth_13;
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(L_24, L_25));
		// position.x = OSCUtilities.Map(position.x, 0, PositionDepth, -100, 100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		float L_27 = L_26.___x_2;
		float L_28 = __this->___PositionDepth_13;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		float L_29;
		L_29 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_27, (0.0f), L_28, (-100.0f), (100.0f), (bool)1, NULL);
		(&V_0)->___x_2 = L_29;
		// position.y = OSCUtilities.Map(position.y, 0, PositionDepth, -100, 100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		float L_31 = L_30.___y_3;
		float L_32 = __this->___PositionDepth_13;
		float L_33;
		L_33 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_31, (0.0f), L_32, (-100.0f), (100.0f), (bool)1, NULL);
		(&V_0)->___y_3 = L_33;
		// InformerItem.anchoredPosition3D = position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34 = __this->___InformerItem_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_0;
		NullCheck(L_34);
		RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4(L_34, L_35, NULL);
		// _noiseRotation.z += RotationSpeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->____noiseRotation_22);
		float* L_37 = (&L_36->___z_4);
		float* L_38 = L_37;
		float L_39 = *((float*)L_38);
		float L_40 = __this->___RotationSpeed_14;
		float L_41;
		L_41 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_38) = (float)((float)il2cpp_codegen_add(L_39, ((float)il2cpp_codegen_multiply(L_40, L_41))));
		// var rotation = InformerItem.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42 = __this->___InformerItem_5;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_42, NULL);
		V_1 = L_43;
		// rotation.z = Mathf.PerlinNoise(_noiseRotation.z, _noiseRotation.z) * RotationDepth;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->____noiseRotation_22);
		float L_45 = L_44->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (&__this->____noiseRotation_22);
		float L_47 = L_46->___z_4;
		float L_48;
		L_48 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_45, L_47, NULL);
		float L_49 = __this->___RotationDepth_15;
		(&V_1)->___z_4 = ((float)il2cpp_codegen_multiply(L_48, L_49));
		// rotation.z = OSCUtilities.Map(rotation.z, 0, RotationDepth, 0, 360);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_1;
		float L_51 = L_50.___z_4;
		float L_52 = __this->___RotationDepth_15;
		float L_53;
		L_53 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_51, (0.0f), L_52, (0.0f), (360.0f), (bool)1, NULL);
		(&V_1)->___z_4 = L_53;
		// InformerItem.localEulerAngles = rotation;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_54 = __this->___InformerItem_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_1;
		NullCheck(L_54);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_54, L_55, NULL);
		// _noiseScale.x += ScaleSpeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (&__this->____noiseScale_23);
		float* L_57 = (&L_56->___x_2);
		float* L_58 = L_57;
		float L_59 = *((float*)L_58);
		float L_60 = __this->___ScaleSpeed_16;
		float L_61;
		L_61 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_58) = (float)((float)il2cpp_codegen_add(L_59, ((float)il2cpp_codegen_multiply(L_60, L_61))));
		// var scale = InformerItem.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_62 = __this->___InformerItem_5;
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_62, NULL);
		V_2 = L_63;
		// scale.x = Mathf.PerlinNoise(_noiseScale.x, _noiseScale.x) * ScaleDepth;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_64 = (&__this->____noiseScale_23);
		float L_65 = L_64->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_66 = (&__this->____noiseScale_23);
		float L_67 = L_66->___x_2;
		float L_68;
		L_68 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_65, L_67, NULL);
		float L_69 = __this->___ScaleDepth_17;
		(&V_2)->___x_2 = ((float)il2cpp_codegen_multiply(L_68, L_69));
		// scale.x = scale.y = scale.z = OSCUtilities.Map(scale.x, 0, ScaleDepth, 1, 5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_2;
		float L_71 = L_70.___x_2;
		float L_72 = __this->___ScaleDepth_17;
		float L_73;
		L_73 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_71, (0.0f), L_72, (1.0f), (5.0f), (bool)1, NULL);
		float L_74 = L_73;
		V_3 = L_74;
		(&V_2)->___z_4 = L_74;
		float L_75 = V_3;
		float L_76 = L_75;
		V_3 = L_76;
		(&V_2)->___y_3 = L_76;
		float L_77 = V_3;
		(&V_2)->___x_2 = L_77;
		// InformerItem.localScale = scale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_78 = __this->___InformerItem_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_2;
		NullCheck(L_78);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_78, L_79, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.InformersExample::ReceiveRotate(extOSC.OSCMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformersExample_ReceiveRotate_m9E650015AD1E6845ACE39C0E943923E79FA63B6A (InformersExample_t13284A3D4343FB6EA1506CF98EC99117E871D36A* __this, OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (message.ToVector3(out var vector))
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = OSCUtilities_ToVector3_m61E2DD10690A592C84DBC3503CC2CA6946EC05D1(L_0, (&V_0), (bool)0, NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// ReceiverTextRotate.text = vector.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___ReceiverTextRotate_6;
		String_t* L_3;
		L_3 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// ReceiverSliderRotate.value = OSCUtilities.Map(vector.z, 0, 360, 0, 1);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___ReceiverSliderRotate_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___z_4;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_6, (0.0f), (360.0f), (0.0f), (1.0f), (bool)1, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_7);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void extOSC.Examples.InformersExample::ReceiveScale(extOSC.OSCMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformersExample_ReceiveScale_m43BBE0E5CF0142B9D46E7C176716B8C666C62FD1 (InformersExample_t13284A3D4343FB6EA1506CF98EC99117E871D36A* __this, OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (message.ToVector3(out var vector))
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = OSCUtilities_ToVector3_m61E2DD10690A592C84DBC3503CC2CA6946EC05D1(L_0, (&V_0), (bool)0, NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// ReceiverTextScale.text = vector.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___ReceiverTextScale_8;
		String_t* L_3;
		L_3 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// ReceiverSliderScale.value = OSCUtilities.Map(vector.x, 1, 5, 0, 1);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___ReceiverSliderScale_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___x_2;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_6, (1.0f), (5.0f), (0.0f), (1.0f), (bool)1, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_7);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void extOSC.Examples.InformersExample::ReceivePosition(extOSC.OSCMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformersExample_ReceivePosition_m0E3D996B8FC6E2E0171B6294CCBE4D675FE05C67 (InformersExample_t13284A3D4343FB6EA1506CF98EC99117E871D36A* __this, OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (message.ToVector3(out var vector))
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = OSCUtilities_ToVector3_m61E2DD10690A592C84DBC3503CC2CA6946EC05D1(L_0, (&V_0), (bool)0, NULL);
		if (!L_1)
		{
			goto IL_0086;
		}
	}
	{
		// vector = new Vector2(OSCUtilities.Map(vector.x, -100, 100, -1, 1), OSCUtilities.Map(vector.y, -100, 100, -1, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___x_2;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_3, (-100.0f), (100.0f), (-1.0f), (1.0f), (bool)1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___y_3;
		float L_7;
		L_7 = OSCUtilities_Map_m36E8A68057CE7500963F95425D3872EBF1A474EC(L_6, (-100.0f), (100.0f), (-1.0f), (1.0f), (bool)1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_4, L_7, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_8, NULL);
		V_0 = L_9;
		// ReceiverTextPosition.text = ((Vector2) vector).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___ReceiverTextPosition_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_11, NULL);
		V_1 = L_12;
		String_t* L_13;
		L_13 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_1), NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// ReceiverPadPosition.Value = vector;
		OSCPad_t2EE006490402D02087FD0485B5223229C2C1DFF6* L_14 = __this->___ReceiverPadPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_15, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(47 /* System.Void extOSC.UI.OSCPad::set_Value(UnityEngine.Vector2) */, L_14, L_16);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void extOSC.Examples.InformersExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformersExample__ctor_mD5116C1DFE526CB664F11C4443B6954165D21607 (InformersExample_t13284A3D4343FB6EA1506CF98EC99117E871D36A* __this, const RuntimeMethod* method) 
{
	{
		// public float PositionSpeed = 0.5f;
		__this->___PositionSpeed_12 = (0.5f);
		// public float PositionDepth = 200;
		__this->___PositionDepth_13 = (200.0f);
		// public float RotationSpeed = 0.6f;
		__this->___RotationSpeed_14 = (0.600000024f);
		// public float RotationDepth = 360;
		__this->___RotationDepth_15 = (360.0f);
		// public float ScaleSpeed = 0.2f;
		__this->___ScaleSpeed_16 = (0.200000003f);
		// public float ScaleDepth = 5;
		__this->___ScaleDepth_17 = (5.0f);
		// private Vector3 _noisePosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____noisePosition_21 = L_0;
		// private Vector3 _noiseRotation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____noiseRotation_22 = L_1;
		// private Vector3 _noiseScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		__this->____noiseScale_23 = L_2;
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
// System.Void extOSC.Examples.MappingExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingExample_Start_mDD3EC274CB8DD335E29F85A4F046AB031C1A7F30 (MappingExample_t1A44019105C5469EB0F6495739EBF7CA507A64D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E76DCD448C5D6B3AF3B2E25352B550E5BAF50C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextScale.text = $"<color=grey>{Vector3.one}</color>";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___TextScale_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral2E76DCD448C5D6B3AF3B2E25352B550E5BAF50C6, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// TextRotate.text = $"<color=grey>{Vector3.zero}</color>";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___TextRotate_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral2E76DCD448C5D6B3AF3B2E25352B550E5BAF50C6, L_8, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MappingExample::SendRotate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingExample_SendRotate_m79854ED1707EAA6931E61E794B100DD648BBC53C (MappingExample_t1A44019105C5469EB0F6495739EBF7CA507A64D2* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CD4FC66FE70607C681ED9B8836D055B9D2CC73F);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var vector = new Vector3(0, 0, value);
		float L_0 = ___value0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), (0.0f), L_0, NULL);
		// SendVector(_rotateAddress, vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		MappingExample_SendVector_m579B03D72A16C438673D91DF53E98DCF41CDA5EA(__this, _stringLiteral5CD4FC66FE70607C681ED9B8836D055B9D2CC73F, L_1, NULL);
		// TextRotate.text = vector.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___TextRotate_5;
		String_t* L_3;
		L_3 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MappingExample::SendScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingExample_SendScale_mE9EBE2D6FA5FA470C9BBE0C2DC492EA4DE0558ED (MappingExample_t1A44019105C5469EB0F6495739EBF7CA507A64D2* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral567C01790360DC1E070F7222517F82F9F68BBB6B);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var vector = new Vector3(value, value, value);
		float L_0 = ___value0;
		float L_1 = ___value0;
		float L_2 = ___value0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_0, L_1, L_2, NULL);
		// SendVector(_scaleAddress, vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		MappingExample_SendVector_m579B03D72A16C438673D91DF53E98DCF41CDA5EA(__this, _stringLiteral567C01790360DC1E070F7222517F82F9F68BBB6B, L_3, NULL);
		// TextScale.text = vector.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___TextScale_6;
		String_t* L_5;
		L_5 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MappingExample::SendPositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingExample_SendPositionX_m022FF2AE63B111AEA8515DB9ECE5113659ABD80B (MappingExample_t1A44019105C5469EB0F6495739EBF7CA507A64D2* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B2C0C0C9962AE5705BD5AF6E241C5CA93597EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _position.x = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->____position_12);
		float L_1 = ___value0;
		L_0->___x_2 = L_1;
		// SendVector(_positionAddress, _position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____position_12;
		MappingExample_SendVector_m579B03D72A16C438673D91DF53E98DCF41CDA5EA(__this, _stringLiteral73B2C0C0C9962AE5705BD5AF6E241C5CA93597EB, L_2, NULL);
		// TextPositionX.text = _position.x.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___TextPositionX_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->____position_12);
		float* L_5 = (&L_4->___x_2);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MappingExample::SendPositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingExample_SendPositionY_m456D328987670D37AE36CF1C4059580C20035379 (MappingExample_t1A44019105C5469EB0F6495739EBF7CA507A64D2* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B2C0C0C9962AE5705BD5AF6E241C5CA93597EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _position.y = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->____position_12);
		float L_1 = ___value0;
		L_0->___y_3 = L_1;
		// SendVector(_positionAddress, _position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____position_12;
		MappingExample_SendVector_m579B03D72A16C438673D91DF53E98DCF41CDA5EA(__this, _stringLiteral73B2C0C0C9962AE5705BD5AF6E241C5CA93597EB, L_2, NULL);
		// TextPositionY.text = _position.y.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___TextPositionY_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->____position_12);
		float* L_5 = (&L_4->___y_3);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MappingExample::SendVector(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingExample_SendVector_m579B03D72A16C438673D91DF53E98DCF41CDA5EA (MappingExample_t1A44019105C5469EB0F6495739EBF7CA507A64D2* __this, String_t* ___address0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* V_0 = NULL;
	{
		// var message = new OSCMessage(address);
		String_t* L_0 = ___address0;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_1 = (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953*)il2cpp_codegen_object_new(OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OSCMessage__ctor_m1F7B91DD0B215B47A4AAA38FD8E83185939079D9(L_1, L_0, NULL);
		V_0 = L_1;
		// message.AddValue(OSCValue.Float(vector.x));
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___vector1;
		float L_4 = L_3.___x_2;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_5;
		L_5 = OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53(L_4, NULL);
		NullCheck(L_2);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_2, L_5, NULL);
		// message.AddValue(OSCValue.Float(vector.y));
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector1;
		float L_8 = L_7.___y_3;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_9;
		L_9 = OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53(L_8, NULL);
		NullCheck(L_6);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_6, L_9, NULL);
		// message.AddValue(OSCValue.Float(vector.z));
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___vector1;
		float L_12 = L_11.___z_4;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_13;
		L_13 = OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53(L_12, NULL);
		NullCheck(L_10);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_10, L_13, NULL);
		// if (Transmitter != null)
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_14 = __this->___Transmitter_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		// Transmitter.Send(message);
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_16 = __this->___Transmitter_4;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_17 = V_0;
		NullCheck(L_16);
		OSCTransmitter_Send_m5F0B6D48885E29AE45F574A57B2BCD20B81B3917(L_16, L_17, 0, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void extOSC.Examples.MappingExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingExample__ctor_m2FB7D54C43AB3DE2850034DBA77B3DCD5EB35E2C (MappingExample_t1A44019105C5469EB0F6495739EBF7CA507A64D2* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 _position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____position_12 = L_0;
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
// System.Void extOSC.Examples.ScriptingExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptingExample_Start_m7F99D10AC7517D7B8D8C4A736F3EF9A1D2AE6A59 (ScriptingExample_t5397023DF17AF01A832CD10863E9B4201C97FDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisOSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765_m6AF2FEED04B3ECDE4AEE7F3F83715E5CE43819CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisOSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6_mC3C2D8A034E626456AFDA7E04C1F37D50841C880_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptingExample_MessageReceived_m09FC221BFEBF04503C524D6A90E760501537BC5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80825D24EFAC0B8C89BBE2432BCCD5A1F233D18F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _transmitter = gameObject.AddComponent<OSCTransmitter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_1;
		L_1 = GameObject_AddComponent_TisOSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6_mC3C2D8A034E626456AFDA7E04C1F37D50841C880(L_0, GameObject_AddComponent_TisOSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6_mC3C2D8A034E626456AFDA7E04C1F37D50841C880_RuntimeMethod_var);
		__this->____transmitter_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transmitter_4), (void*)L_1);
		// _transmitter.RemoteHost = "127.0.0.1";
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_2 = __this->____transmitter_4;
		NullCheck(L_2);
		OSCTransmitter_set_RemoteHost_m6D720E6A6693237F8667D6F4E5F3B7F8B7F9629B(L_2, _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE, NULL);
		// _transmitter.RemotePort = 7001;
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_3 = __this->____transmitter_4;
		NullCheck(L_3);
		OSCTransmitter_set_RemotePort_mD32851BD9677EC37B05E573062F0020607176E21(L_3, ((int32_t)7001), NULL);
		// _receiver = gameObject.AddComponent<OSCReceiver>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* L_5;
		L_5 = GameObject_AddComponent_TisOSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765_m6AF2FEED04B3ECDE4AEE7F3F83715E5CE43819CE(L_4, GameObject_AddComponent_TisOSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765_m6AF2FEED04B3ECDE4AEE7F3F83715E5CE43819CE_RuntimeMethod_var);
		__this->____receiver_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____receiver_5), (void*)L_5);
		// _receiver.LocalPort = 7001;
		OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* L_6 = __this->____receiver_5;
		NullCheck(L_6);
		OSCReceiver_set_LocalPort_mDC0BD49229AE91D073CA93756153F391B5D051DC(L_6, ((int32_t)7001), NULL);
		// _receiver.Bind(_oscAddress, MessageReceived);
		OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* L_7 = __this->____receiver_5;
		UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC* L_8 = (UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC*)il2cpp_codegen_object_new(UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mB9B1A18C059475C6036EF7CF2A1419F4E6036E05(L_8, __this, (intptr_t)((void*)ScriptingExample_MessageReceived_m09FC221BFEBF04503C524D6A90E760501537BC5A_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC* L_9;
		L_9 = OSCReceiver_Bind_m4C8E663DC0C59E94D934056DE8BE796F62FD3C00(L_7, _stringLiteral80825D24EFAC0B8C89BBE2432BCCD5A1F233D18F, L_8, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.ScriptingExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptingExample_Update_mFC78D934E7FB6E8EAF24653190ECB644F86076E6 (ScriptingExample_t5397023DF17AF01A832CD10863E9B4201C97FDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80825D24EFAC0B8C89BBE2432BCCD5A1F233D18F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB63945994CB9CC7807BC73FD69BD60FFA5DB146);
		s_Il2CppMethodInitialized = true;
	}
	OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* V_0 = NULL;
	{
		// if (_transmitter == null) return;
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_0 = __this->____transmitter_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (_transmitter == null) return;
		return;
	}

IL_000f:
	{
		// var message = new OSCMessage(_oscAddress);
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_2 = (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953*)il2cpp_codegen_object_new(OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OSCMessage__ctor_m1F7B91DD0B215B47A4AAA38FD8E83185939079D9(L_2, _stringLiteral80825D24EFAC0B8C89BBE2432BCCD5A1F233D18F, NULL);
		V_0 = L_2;
		// message.AddValue(OSCValue.String("Hello, world!"));
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_3 = V_0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_4;
		L_4 = OSCValue_String_m2BF644B79EB74362357F56C4E52A852E72792EFF(_stringLiteralEB63945994CB9CC7807BC73FD69BD60FFA5DB146, NULL);
		NullCheck(L_3);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_3, L_4, NULL);
		// message.AddValue(OSCValue.Float(Random.Range(0f, 1f)));
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_5 = V_0;
		float L_6;
		L_6 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (1.0f), NULL);
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_7;
		L_7 = OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53(L_6, NULL);
		NullCheck(L_5);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_5, L_7, NULL);
		// _transmitter.Send(message);
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_8 = __this->____transmitter_4;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_9 = V_0;
		NullCheck(L_8);
		OSCTransmitter_Send_m5F0B6D48885E29AE45F574A57B2BCD20B81B3917(L_8, L_9, 0, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.ScriptingExample::MessageReceived(extOSC.OSCMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptingExample_MessageReceived_m09FC221BFEBF04503C524D6A90E760501537BC5A (ScriptingExample_t5397023DF17AF01A832CD10863E9B4201C97FDEA* __this, OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(message);
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_0, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.ScriptingExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptingExample__ctor_m40735C7D69D0EECC3811597AAFBCBED6562C55FB (ScriptingExample_t5397023DF17AF01A832CD10863E9B4201C97FDEA* __this, const RuntimeMethod* method) 
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
// System.Void extOSC.Examples.AddressMaskExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressMaskExample_Start_m453CBD3149835950E402637E4FD1050FD7689B7B (AddressMaskExample_tE8F986BF3D2A9658CCE0987DEC6F1B7F24796F21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressMaskExample_MessageReceived_m432901008FAD680EC9A237188191FCF92F8152BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5079451FC4B0EB34225C37036BA1EFFF1309DEF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C2B620E0F514D1CB39D98DFD2079BA43DC8F0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCBF58A87AC20F72918839DF3C498B8AEBEB1695);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ReceiverAddressMask.text = _maskAddress;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___ReceiverAddressMask_10;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral5079451FC4B0EB34225C37036BA1EFFF1309DEF7);
		// TransmitterAddressFirst.text = _firstSlider;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___TransmitterAddressFirst_6;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral9C2B620E0F514D1CB39D98DFD2079BA43DC8F0C9);
		// TransmitterAddressSecond.text = _secondSlider;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___TransmitterAddressSecond_7;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralDCBF58A87AC20F72918839DF3C498B8AEBEB1695);
		// Receiver.Bind(_maskAddress, MessageReceived);
		OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* L_3 = __this->___Receiver_5;
		UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC* L_4 = (UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC*)il2cpp_codegen_object_new(UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mB9B1A18C059475C6036EF7CF2A1419F4E6036E05(L_4, __this, (intptr_t)((void*)AddressMaskExample_MessageReceived_m432901008FAD680EC9A237188191FCF92F8152BA_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC* L_5;
		L_5 = OSCReceiver_Bind_m4C8E663DC0C59E94D934056DE8BE796F62FD3C00(L_3, _stringLiteral5079451FC4B0EB34225C37036BA1EFFF1309DEF7, L_4, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.AddressMaskExample::SendFirst(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressMaskExample_SendFirst_m4BC0ED7D6F9B02CFA7953D080C5F9963BB7C756D (AddressMaskExample_tE8F986BF3D2A9658CCE0987DEC6F1B7F24796F21* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C2B620E0F514D1CB39D98DFD2079BA43DC8F0C9);
		s_Il2CppMethodInitialized = true;
	}
	OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* V_0 = NULL;
	{
		// var message = new OSCMessage(_firstSlider, OSCValue.Float(value));
		OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* L_0 = (OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7*)(OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7*)SZArrayNew(OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7_il2cpp_TypeInfo_var, (uint32_t)1);
		OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* L_1 = L_0;
		float L_2 = ___value0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_3;
		L_3 = OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5*)L_3);
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_4 = (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953*)il2cpp_codegen_object_new(OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OSCMessage__ctor_m2B47D68779EBE5140692A8E8F18DF2B124BD1778(L_4, _stringLiteral9C2B620E0F514D1CB39D98DFD2079BA43DC8F0C9, L_1, NULL);
		V_0 = L_4;
		// Transmitter.Send(message);
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_5 = __this->___Transmitter_4;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_6 = V_0;
		NullCheck(L_5);
		OSCTransmitter_Send_m5F0B6D48885E29AE45F574A57B2BCD20B81B3917(L_5, L_6, 0, NULL);
		// TransmitterTextFirst.text = value.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___TransmitterTextFirst_8;
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void extOSC.Examples.AddressMaskExample::SendSecond(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressMaskExample_SendSecond_mDB4EA6E4223D7FCE73CAF3684110DB7962F8AADB (AddressMaskExample_tE8F986BF3D2A9658CCE0987DEC6F1B7F24796F21* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C2B620E0F514D1CB39D98DFD2079BA43DC8F0C9);
		s_Il2CppMethodInitialized = true;
	}
	OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* V_0 = NULL;
	{
		// var message = new OSCMessage(_firstSlider, OSCValue.Float(value));
		OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* L_0 = (OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7*)(OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7*)SZArrayNew(OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7_il2cpp_TypeInfo_var, (uint32_t)1);
		OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* L_1 = L_0;
		float L_2 = ___value0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_3;
		L_3 = OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5*)L_3);
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_4 = (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953*)il2cpp_codegen_object_new(OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OSCMessage__ctor_m2B47D68779EBE5140692A8E8F18DF2B124BD1778(L_4, _stringLiteral9C2B620E0F514D1CB39D98DFD2079BA43DC8F0C9, L_1, NULL);
		V_0 = L_4;
		// Transmitter.Send(message);
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_5 = __this->___Transmitter_4;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_6 = V_0;
		NullCheck(L_5);
		OSCTransmitter_Send_m5F0B6D48885E29AE45F574A57B2BCD20B81B3917(L_5, L_6, 0, NULL);
		// TransmitterTextSecond.text = value.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___TransmitterTextSecond_9;
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void extOSC.Examples.AddressMaskExample::MessageReceived(extOSC.OSCMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressMaskExample_MessageReceived_m432901008FAD680EC9A237188191FCF92F8152BA (AddressMaskExample_tE8F986BF3D2A9658CCE0987DEC6F1B7F24796F21* __this, OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (message.ToFloat(out var value))
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = OSCUtilities_ToFloat_mFA02B5C95F3F9B9B37A8A610BF49E46E23575A74(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// ReceiverAddress.text = message.Address;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___ReceiverAddress_12;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_3 = ___message0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = OSCMessage_get_Address_m32466F502BA1ADC3CF7DA23081E8DDFB202366A1_inline(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// ReceiverText.text = value.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___ReceiverText_11;
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// ReceiverSlider.value = value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___ReceiverSlider_13;
		float L_8 = V_0;
		NullCheck(L_7);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_7, L_8);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void extOSC.Examples.AddressMaskExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressMaskExample__ctor_mBFDDA75D5D982C8E597066DE03C87D249B817ED7 (AddressMaskExample_tE8F986BF3D2A9658CCE0987DEC6F1B7F24796F21* __this, const RuntimeMethod* method) 
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
// System.Void extOSC.Examples.PingExample::ChangeInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingExample_ChangeInterval_mD541CFF390C4A45E1A2A12F3365239EC3B31BC47 (PingExample_tCBA69BA219A78CD02B551C9D09C129D6C67CDDED* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// IntervalText.text = value.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___IntervalText_4;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void extOSC.Examples.PingExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingExample__ctor_mE943AF19451143C078CC09E7F8592524142F0D27 (PingExample_tCBA69BA219A78CD02B551C9D09C129D6C67CDDED* __this, const RuntimeMethod* method) 
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
// System.Void extOSC.Examples.ArrayExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayExample_Start_mF4F46C2358CF872C3E7161C113EBE60497D280BA (ArrayExample_t98CD918ED1419285964DD8AD404308D3D9E12F7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayExample_MessageReceived_m6DAC36B577C7B90D889F4BBC2D5D4B944D223223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisOSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5_mB8514B6BCFDC5F4BE3D48CE0F5016B3B25E37473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA327B83B488BF613A61C837A555CDAA42CAA4D40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B3C20B0157922E7AC237525B2A416C3E27FA1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F19ECBF516BFC80511A6C00D0226B625799559);
		s_Il2CppMethodInitialized = true;
	}
	OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* V_0 = NULL;
	OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* V_1 = NULL;
	OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* V_2 = NULL;
	{
		// Receiver.Bind(_address, MessageReceived);
		OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* L_0 = __this->___Receiver_4;
		UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC* L_1 = (UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC*)il2cpp_codegen_object_new(UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mB9B1A18C059475C6036EF7CF2A1419F4E6036E05(L_1, __this, (intptr_t)((void*)ArrayExample_MessageReceived_m6DAC36B577C7B90D889F4BBC2D5D4B944D223223_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC* L_2;
		L_2 = OSCReceiver_Bind_m4C8E663DC0C59E94D934056DE8BE796F62FD3C00(L_0, _stringLiteralC7B3C20B0157922E7AC237525B2A416C3E27FA1A, L_1, NULL);
		// var message = OSCMessage.Create(_address);
		OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* L_3;
		L_3 = Array_Empty_TisOSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5_mB8514B6BCFDC5F4BE3D48CE0F5016B3B25E37473_inline(Array_Empty_TisOSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5_mB8514B6BCFDC5F4BE3D48CE0F5016B3B25E37473_RuntimeMethod_var);
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_4;
		L_4 = OSCMessage_Create_mCF59DF1BE199F6497900705F3A4DCEDDB02180BE(_stringLiteralC7B3C20B0157922E7AC237525B2A416C3E27FA1A, L_3, NULL);
		V_0 = L_4;
		// var array = OSCValue.Array();
		OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* L_5;
		L_5 = Array_Empty_TisOSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5_mB8514B6BCFDC5F4BE3D48CE0F5016B3B25E37473_inline(Array_Empty_TisOSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5_mB8514B6BCFDC5F4BE3D48CE0F5016B3B25E37473_RuntimeMethod_var);
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_6;
		L_6 = OSCValue_Array_m30F27AC89B97B7DF0FBC3D5EFC8487AC4B8A61B6(L_5, NULL);
		V_1 = L_6;
		// array.AddValue(OSCValue.Int(1)); // You can use AddValue(OSCValue) method only with OSCValue what stored Array type.
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_7 = V_1;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_8;
		L_8 = OSCValue_Int_m4D78B45616C42125A7CD216908E80B4F8DD71829(1, NULL);
		NullCheck(L_7);
		OSCValue_AddValue_m53BFE443B0F7EEB03F2524E1B9ACD973696DB6BD(L_7, L_8, NULL);
		// array.AddValue(OSCValue.Float(2.5f));
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_9 = V_1;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_10;
		L_10 = OSCValue_Float_mD9729B61C77F28E96BCE53BD57B6B4606B379B53((2.5f), NULL);
		NullCheck(L_9);
		OSCValue_AddValue_m53BFE443B0F7EEB03F2524E1B9ACD973696DB6BD(L_9, L_10, NULL);
		// array.AddValue(OSCValue.Color(Color.red));
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_11 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_13;
		L_13 = OSCValue_Color_mEE3BF67BB75FF425974C51F4E06DC152CA6B2491(L_12, NULL);
		NullCheck(L_11);
		OSCValue_AddValue_m53BFE443B0F7EEB03F2524E1B9ACD973696DB6BD(L_11, L_13, NULL);
		// var secondArray = OSCValue.Array();
		OSCValueU5BU5D_tE4514860F08412A1946539C43EFBEB7260F649D7* L_14;
		L_14 = Array_Empty_TisOSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5_mB8514B6BCFDC5F4BE3D48CE0F5016B3B25E37473_inline(Array_Empty_TisOSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5_mB8514B6BCFDC5F4BE3D48CE0F5016B3B25E37473_RuntimeMethod_var);
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_15;
		L_15 = OSCValue_Array_m30F27AC89B97B7DF0FBC3D5EFC8487AC4B8A61B6(L_14, NULL);
		V_2 = L_15;
		// secondArray.AddValue(OSCValue.String("This array..."));
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_16 = V_2;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_17;
		L_17 = OSCValue_String_m2BF644B79EB74362357F56C4E52A852E72792EFF(_stringLiteralA327B83B488BF613A61C837A555CDAA42CAA4D40, NULL);
		NullCheck(L_16);
		OSCValue_AddValue_m53BFE443B0F7EEB03F2524E1B9ACD973696DB6BD(L_16, L_17, NULL);
		// secondArray.AddValue(OSCValue.String("...inside another array!"));
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_18 = V_2;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_19;
		L_19 = OSCValue_String_m2BF644B79EB74362357F56C4E52A852E72792EFF(_stringLiteralE9F19ECBF516BFC80511A6C00D0226B625799559, NULL);
		NullCheck(L_18);
		OSCValue_AddValue_m53BFE443B0F7EEB03F2524E1B9ACD973696DB6BD(L_18, L_19, NULL);
		// array.AddValue(secondArray);
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_20 = V_1;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_21 = V_2;
		NullCheck(L_20);
		OSCValue_AddValue_m53BFE443B0F7EEB03F2524E1B9ACD973696DB6BD(L_20, L_21, NULL);
		// message.AddValue(array);
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_22 = V_0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_23 = V_1;
		NullCheck(L_22);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_22, L_23, NULL);
		// Transmitter.Send(message);
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_24 = __this->___Transmitter_5;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_25 = V_0;
		NullCheck(L_24);
		OSCTransmitter_Send_m5F0B6D48885E29AE45F574A57B2BCD20B81B3917(L_24, L_25, 0, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.ArrayExample::MessageReceived(extOSC.OSCMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayExample_MessageReceived_m6DAC36B577C7B90D889F4BBC2D5D4B944D223223 (ArrayExample_t98CD918ED1419285964DD8AD404308D3D9E12F7C* __this, OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA9B39BCA4B24A78D2F42ECF382DAAB8DDA5AACB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m57B7C5555C17A6B7E1C1F34ECAA079BD32748610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m94C1227DE6EA234D3A61212C5030279A6D85D392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCC2633EA14C082BA3A9D9C6F9F1A2A460EAE7F03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral488F8172A4CB7551FABFDE2DD59F3E11D840CAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE13D60321F9B59216074A0E60D124ECA63A72BA7);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t5A6CC9898A7072BA7FA49E41631EDFC471750789* V_0 = NULL;
	Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791 V_1;
	memset((&V_1), 0, sizeof(V_1));
	OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* V_2 = NULL;
	{
		// if (message.ToArray(out var arrayValues)) // Get all values from first array in message.
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = OSCUtilities_ToArray_m22E35A9AE9652BA58BC6D6A4AD3E99D546CD23BC(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		// Debug.Log("Array values:");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral488F8172A4CB7551FABFDE2DD59F3E11D840CAC5, NULL);
		// foreach (var value in arrayValues)
		List_1_t5A6CC9898A7072BA7FA49E41631EDFC471750789* L_2 = V_0;
		NullCheck(L_2);
		Enumerator_t4838D378AB9BE437A7796A8F55D659349C722791 L_3;
		L_3 = List_1_GetEnumerator_mCC2633EA14C082BA3A9D9C6F9F1A2A460EAE7F03(L_2, List_1_GetEnumerator_mCC2633EA14C082BA3A9D9C6F9F1A2A460EAE7F03_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA9B39BCA4B24A78D2F42ECF382DAAB8DDA5AACB1((&V_1), Enumerator_Dispose_mA9B39BCA4B24A78D2F42ECF382DAAB8DDA5AACB1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_001d_1:
			{
				// foreach (var value in arrayValues)
				OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_4;
				L_4 = Enumerator_get_Current_m94C1227DE6EA234D3A61212C5030279A6D85D392_inline((&V_1), Enumerator_get_Current_m94C1227DE6EA234D3A61212C5030279A6D85D392_RuntimeMethod_var);
				V_2 = L_4;
				// Debug.LogFormat("\t {0}", value);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
				OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_7 = V_2;
				NullCheck(L_6);
				ArrayElementTypeCheck (L_6, L_7);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralE13D60321F9B59216074A0E60D124ECA63A72BA7, L_6, NULL);
			}

IL_0039_1:
			{
				// foreach (var value in arrayValues)
				bool L_8;
				L_8 = Enumerator_MoveNext_m57B7C5555C17A6B7E1C1F34ECAA079BD32748610((&V_1), Enumerator_MoveNext_m57B7C5555C17A6B7E1C1F34ECAA079BD32748610_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void extOSC.Examples.ArrayExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayExample__ctor_m94C05D6C4518F0CDDEFBA2DDE8B30500744EB12F (ArrayExample_t98CD918ED1419285964DD8AD404308D3D9E12F7C* __this, const RuntimeMethod* method) 
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
// System.Void extOSC.Examples.MatchPatternExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchPatternExample_Start_mFE65FA5816BB5154899BEAE35EBD2DBEA71CCA85 (MatchPatternExample_t8E9EA68F37D93C1D72111096543CCF4663421812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchPatternExample_ReceiveMessage_m7DB6DA99F3588A37B5CFE0268139E0563A74CDFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral813716A857D9878DFCEA928EFEDC4EAFE603BDD3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CorrectMessageAddress.text = _address;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___CorrectMessageAddress_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral813716A857D9878DFCEA928EFEDC4EAFE603BDD3);
		// WrongMessageAddress.text = _address;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___WrongMessageAddress_7;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral813716A857D9878DFCEA928EFEDC4EAFE603BDD3);
		// Receiver.Bind(_address, ReceiveMessage);
		OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* L_2 = __this->___Receiver_4;
		UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC* L_3 = (UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC*)il2cpp_codegen_object_new(UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mB9B1A18C059475C6036EF7CF2A1419F4E6036E05(L_3, __this, (intptr_t)((void*)MatchPatternExample_ReceiveMessage_m7DB6DA99F3588A37B5CFE0268139E0563A74CDFC_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC* L_4;
		L_4 = OSCReceiver_Bind_m4C8E663DC0C59E94D934056DE8BE796F62FD3C00(L_2, _stringLiteral813716A857D9878DFCEA928EFEDC4EAFE603BDD3, L_3, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MatchPatternExample::SendCorrectMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchPatternExample_SendCorrectMessage_m70F3028D0976A736FAFCFC63ACD40FA5B906FBF9 (MatchPatternExample_t8E9EA68F37D93C1D72111096543CCF4663421812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral813716A857D9878DFCEA928EFEDC4EAFE603BDD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952D5701009D7D0250406860C36731AB17DB673E);
		s_Il2CppMethodInitialized = true;
	}
	OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* V_0 = NULL;
	{
		// var message = new OSCMessage(_address);
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_0 = (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953*)il2cpp_codegen_object_new(OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OSCMessage__ctor_m1F7B91DD0B215B47A4AAA38FD8E83185939079D9(L_0, _stringLiteral813716A857D9878DFCEA928EFEDC4EAFE603BDD3, NULL);
		V_0 = L_0;
		// message.AddValue(OSCValue.String("Correct Message")); // String
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_1 = V_0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_2;
		L_2 = OSCValue_String_m2BF644B79EB74362357F56C4E52A852E72792EFF(_stringLiteral952D5701009D7D0250406860C36731AB17DB673E, NULL);
		NullCheck(L_1);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_1, L_2, NULL);
		// message.AddValue(OSCValue.Int(137));                  // Int
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_3 = V_0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_4;
		L_4 = OSCValue_Int_m4D78B45616C42125A7CD216908E80B4F8DD71829(((int32_t)137), NULL);
		NullCheck(L_3);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_3, L_4, NULL);
		// message.AddValue(OSCValue.Bool(true));                // Bool
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_5 = V_0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_6;
		L_6 = OSCValue_Bool_mE9A8CCA92E3B652C2F36CC21E5D7A7C32345AEC6((bool)1, NULL);
		NullCheck(L_5);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_5, L_6, NULL);
		// message.AddValue(OSCValue.Bool(true));                // Bool
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_7 = V_0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_8;
		L_8 = OSCValue_Bool_mE9A8CCA92E3B652C2F36CC21E5D7A7C32345AEC6((bool)1, NULL);
		NullCheck(L_7);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_7, L_8, NULL);
		// Transmitter.Send(message);
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_9 = __this->___Transmitter_5;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_10 = V_0;
		NullCheck(L_9);
		OSCTransmitter_Send_m5F0B6D48885E29AE45F574A57B2BCD20B81B3917(L_9, L_10, 0, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MatchPatternExample::SendWrongMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchPatternExample_SendWrongMessage_m991502A8A96FDE91B3C441F7A372F3A96FDCEFC0 (MatchPatternExample_t8E9EA68F37D93C1D72111096543CCF4663421812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____ACB86A9CB70A84F695DE89E7FE22819466205759D798D52D4A3DD95B0CDAA2A1_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77200C21A79C6A53952F5BB20A3956F1603E6B06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral813716A857D9878DFCEA928EFEDC4EAFE603BDD3);
		s_Il2CppMethodInitialized = true;
	}
	OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* V_0 = NULL;
	{
		// var message = new OSCMessage(_address);
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_0 = (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953*)il2cpp_codegen_object_new(OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OSCMessage__ctor_m1F7B91DD0B215B47A4AAA38FD8E83185939079D9(L_0, _stringLiteral813716A857D9878DFCEA928EFEDC4EAFE603BDD3, NULL);
		V_0 = L_0;
		// message.AddValue(OSCValue.Int(137));                              // Int
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_1 = V_0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_2;
		L_2 = OSCValue_Int_m4D78B45616C42125A7CD216908E80B4F8DD71829(((int32_t)137), NULL);
		NullCheck(L_1);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_1, L_2, NULL);
		// message.AddValue(OSCValue.String("Wrong Message"));               // String
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_3 = V_0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_4;
		L_4 = OSCValue_String_m2BF644B79EB74362357F56C4E52A852E72792EFF(_stringLiteral77200C21A79C6A53952F5BB20A3956F1603E6B06, NULL);
		NullCheck(L_3);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_3, L_4, NULL);
		// message.AddValue(OSCValue.Blob(new byte[] {0x1, 0x3, 0x3, 0x7})); // Byte
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____ACB86A9CB70A84F695DE89E7FE22819466205759D798D52D4A3DD95B0CDAA2A1_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_9;
		L_9 = OSCValue_Blob_m9EA33028F3698B40F82121D68E582984970E0F58(L_7, NULL);
		NullCheck(L_5);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_5, L_9, NULL);
		// message.AddValue(OSCValue.Bool(true));                            // Bool
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_10 = V_0;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_11;
		L_11 = OSCValue_Bool_mE9A8CCA92E3B652C2F36CC21E5D7A7C32345AEC6((bool)1, NULL);
		NullCheck(L_10);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_10, L_11, NULL);
		// Transmitter.Send(message);
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_12 = __this->___Transmitter_5;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_13 = V_0;
		NullCheck(L_12);
		OSCTransmitter_Send_m5F0B6D48885E29AE45F574A57B2BCD20B81B3917(L_12, L_13, 0, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MatchPatternExample::ReceiveMessage(extOSC.OSCMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchPatternExample_ReceiveMessage_m7DB6DA99F3588A37B5CFE0268139E0563A74CDFC (MatchPatternExample_t8E9EA68F37D93C1D72111096543CCF4663421812* __this, OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____63B5CDF91FEEDBADC4A01DE52B0B2489DB8E8D0E250312B3EF012D256A5558E6_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69A3D5976F7EF3E938B54591C3F33238F42C1576);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAB120B6834B15CB3D71E7EF222F80EF8DCD943D);
		s_Il2CppMethodInitialized = true;
	}
	OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1* V_0 = NULL;
	{
		// var matchPattern = new OSCMatchPattern(OSCValueType.String, // String
		//                                        OSCValueType.Int,    // Int
		//                                        OSCValueType.True,   // Bool
		//                                        OSCValueType.False); // Bool
		OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F* L_0 = (OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F*)(OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F*)SZArrayNew(OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F_il2cpp_TypeInfo_var, (uint32_t)4);
		OSCValueTypeU5BU5D_tAE97C9D91A96C9E8211D764B41742FF23064214F* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____63B5CDF91FEEDBADC4A01DE52B0B2489DB8E8D0E250312B3EF012D256A5558E6_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1* L_3 = (OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1*)il2cpp_codegen_object_new(OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OSCMatchPattern__ctor_mF2C935321910E13A511F702315EB91F3D1EDC5D1(L_3, L_1, NULL);
		V_0 = L_3;
		// if (message.IsMatch(matchPattern))
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_4 = ___message0;
		OSCMatchPattern_t52A65A8620EAFF2F6521D52BA13FB31992DE2CE1* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = OSCUtilities_IsMatch_m22F438AF119B86D3BF8E7AE10CD07C1BB42C2092(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.Log("We got a correct message! Yeah! Maybe you want parse it?");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralCAB120B6834B15CB3D71E7EF222F80EF8DCD943D, NULL);
		return;
	}

IL_002b:
	{
		// Debug.Log("Oh, no! It's a wrong message!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral69A3D5976F7EF3E938B54591C3F33238F42C1576, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MatchPatternExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchPatternExample__ctor_m77FC758864B4D064F8422A5F98DB654668392B4C (MatchPatternExample_t8E9EA68F37D93C1D72111096543CCF4663421812* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: extOSC.Examples.MarshallingStructure
IL2CPP_EXTERN_C void MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshal_pinvoke(const MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36& unmarshaled, MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshaled_pinvoke& marshaled)
{
	marshaled.___IntValue_0 = unmarshaled.___IntValue_0;
	marshaled.___StringValue_1 = il2cpp_codegen_marshal_string(unmarshaled.___StringValue_1);
	marshaled.___FloatValue_2 = unmarshaled.___FloatValue_2;
}
IL2CPP_EXTERN_C void MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshal_pinvoke_back(const MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshaled_pinvoke& marshaled, MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36& unmarshaled)
{
	int32_t unmarshaledIntValue_temp_0 = 0;
	unmarshaledIntValue_temp_0 = marshaled.___IntValue_0;
	unmarshaled.___IntValue_0 = unmarshaledIntValue_temp_0;
	unmarshaled.___StringValue_1 = il2cpp_codegen_marshal_string_result(marshaled.___StringValue_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___StringValue_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___StringValue_1));
	float unmarshaledFloatValue_temp_2 = 0.0f;
	unmarshaledFloatValue_temp_2 = marshaled.___FloatValue_2;
	unmarshaled.___FloatValue_2 = unmarshaledFloatValue_temp_2;
}
// Conversion method for clean up from marshalling of: extOSC.Examples.MarshallingStructure
IL2CPP_EXTERN_C void MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshal_pinvoke_cleanup(MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___StringValue_1);
	marshaled.___StringValue_1 = NULL;
}
// Conversion methods for marshalling of: extOSC.Examples.MarshallingStructure
IL2CPP_EXTERN_C void MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshal_com(const MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36& unmarshaled, MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshaled_com& marshaled)
{
	marshaled.___IntValue_0 = unmarshaled.___IntValue_0;
	marshaled.___StringValue_1 = il2cpp_codegen_marshal_string(unmarshaled.___StringValue_1);
	marshaled.___FloatValue_2 = unmarshaled.___FloatValue_2;
}
IL2CPP_EXTERN_C void MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshal_com_back(const MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshaled_com& marshaled, MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36& unmarshaled)
{
	int32_t unmarshaledIntValue_temp_0 = 0;
	unmarshaledIntValue_temp_0 = marshaled.___IntValue_0;
	unmarshaled.___IntValue_0 = unmarshaledIntValue_temp_0;
	unmarshaled.___StringValue_1 = il2cpp_codegen_marshal_string_result(marshaled.___StringValue_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___StringValue_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___StringValue_1));
	float unmarshaledFloatValue_temp_2 = 0.0f;
	unmarshaledFloatValue_temp_2 = marshaled.___FloatValue_2;
	unmarshaled.___FloatValue_2 = unmarshaledFloatValue_temp_2;
}
// Conversion method for clean up from marshalling of: extOSC.Examples.MarshallingStructure
IL2CPP_EXTERN_C void MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshal_com_cleanup(MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___StringValue_1);
	marshaled.___StringValue_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void extOSC.Examples.MarshallingExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshallingExample_Start_m099B5AF59B2EC5D86111BCBEE17D69A2F28069EE (MarshallingExample_t4AB5B1623A491F4D28F3BFCD890C337ECEAA2C22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshallingExample_ReceiveMessage_m13A596C7BA0888A5CF5EE30D67199B976C324B47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_StructToByte_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_mC73D9C3D0D7152A7885B64EF247A3B300CEA4DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ADF7DC825176313ED786DEF37490496FED7AAEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB85F32B67700C3C852105B1116ECD101064C332);
		s_Il2CppMethodInitialized = true;
	}
	OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* V_0 = NULL;
	MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// Receiver.Bind(_address, ReceiveMessage);
		OSCReceiver_t387779369CE42691B2D4244B68C49F4459D72765* L_0 = __this->___Receiver_4;
		UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC* L_1 = (UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC*)il2cpp_codegen_object_new(UnityAction_1_t20F56D6A3BB21115D4E99FE53142E98409B98FFC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mB9B1A18C059475C6036EF7CF2A1419F4E6036E05(L_1, __this, (intptr_t)((void*)MarshallingExample_ReceiveMessage_m13A596C7BA0888A5CF5EE30D67199B976C324B47_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		OSCBind_t507685AF4CE5F76C829D940F85F8B1871A6FB7BC* L_2;
		L_2 = OSCReceiver_Bind_m4C8E663DC0C59E94D934056DE8BE796F62FD3C00(L_0, _stringLiteral4ADF7DC825176313ED786DEF37490496FED7AAEF, L_1, NULL);
		// var message = new OSCMessage(_address);
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_3 = (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953*)il2cpp_codegen_object_new(OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OSCMessage__ctor_m1F7B91DD0B215B47A4AAA38FD8E83185939079D9(L_3, _stringLiteral4ADF7DC825176313ED786DEF37490496FED7AAEF, NULL);
		V_0 = L_3;
		// var structure = new MarshallingStructure();
		il2cpp_codegen_initobj((&V_1), sizeof(MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36));
		// structure.IntValue = 1337;
		(&V_1)->___IntValue_0 = ((int32_t)1337);
		// structure.StringValue = "Hello, OSC World!";
		(&V_1)->___StringValue_1 = _stringLiteralFB85F32B67700C3C852105B1116ECD101064C332;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___StringValue_1), (void*)_stringLiteralFB85F32B67700C3C852105B1116ECD101064C332);
		// structure.FloatValue = 13.37f;
		(&V_1)->___FloatValue_2 = (13.3699999f);
		// var bytes = OSCUtilities.StructToByte(structure);
		MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = OSCUtilities_StructToByte_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_mC73D9C3D0D7152A7885B64EF247A3B300CEA4DF9(L_4, OSCUtilities_StructToByte_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_mC73D9C3D0D7152A7885B64EF247A3B300CEA4DF9_RuntimeMethod_var);
		V_2 = L_5;
		// message.AddValue(OSCValue.Blob(bytes));
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		OSCValue_t282375F2FA89F6A45EE1F0733251A7302CE2C2D5* L_8;
		L_8 = OSCValue_Blob_m9EA33028F3698B40F82121D68E582984970E0F58(L_7, NULL);
		NullCheck(L_6);
		OSCMessage_AddValue_mD27ABAC2200AD05AA9BA74BE8B978B81065CABED(L_6, L_8, NULL);
		// Transmitter.Send(message);
		OSCTransmitter_t1A98221DDD95D4908DC4E5D5766ED49821E093A6* L_9 = __this->___Transmitter_5;
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_10 = V_0;
		NullCheck(L_9);
		OSCTransmitter_Send_m5F0B6D48885E29AE45F574A57B2BCD20B81B3917(L_9, L_10, 0, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MarshallingExample::ReceiveMessage(extOSC.OSCMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshallingExample_ReceiveMessage_m13A596C7BA0888A5CF5EE30D67199B976C324B47 (MarshallingExample_t4AB5B1623A491F4D28F3BFCD890C337ECEAA2C22* __this, OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_ByteToStruct_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_m8E2620529FA33EB7AB85E6339C207D02E090874D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB64D2B0667F290772C87125679328EAFD75E868);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!message.ToBlob(out bytes))
		OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = OSCUtilities_ToBlob_m9282923280C7B850E5B5672DC6B794018EA31D40(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// var structure = OSCUtilities.ByteToStruct<MarshallingStructure>(bytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(OSCUtilities_t4FA1ECB3E4DF8CA6D4EA6621B23B184B71C50990_il2cpp_TypeInfo_var);
		MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 L_3;
		L_3 = OSCUtilities_ByteToStruct_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_m8E2620529FA33EB7AB85E6339C207D02E090874D(L_2, OSCUtilities_ByteToStruct_TisMarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36_m8E2620529FA33EB7AB85E6339C207D02E090874D_RuntimeMethod_var);
		V_1 = L_3;
		// Debug.LogFormat("Received structure with data:\nIntValue: {0}\nStringValue: {1}\nFloatValue: {2}",
		//                 structure.IntValue, structure.StringValue, structure.FloatValue);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 L_6 = V_1;
		int32_t L_7 = L_6.___IntValue_0;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_5;
		MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 L_11 = V_1;
		String_t* L_12 = L_11.___StringValue_1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_10;
		MarshallingStructure_tDE7421A5184777C9582C1990622954AB810BBB36 L_14 = V_1;
		float L_15 = L_14.___FloatValue_2;
		float L_16 = L_15;
		RuntimeObject* L_17 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralBB64D2B0667F290772C87125679328EAFD75E868, L_13, NULL);
		// }
		return;
	}
}
// System.Void extOSC.Examples.MarshallingExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshallingExample__ctor_mECEE5214B89C3929325C07BA0C1D65AFE7873817 (MarshallingExample_t4AB5B1623A491F4D28F3BFCD890C337ECEAA2C22* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OSCMessage_get_Address_m32466F502BA1ADC3CF7DA23081E8DDFB202366A1_inline (OSCMessage_tE48CFDFBDAE1A2F2C76C5678636BCE5625D3D953* __this, const RuntimeMethod* method) 
{
	{
		// public string Address { get; set; }
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
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
