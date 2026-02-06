#include "pch-cpp.hpp"





template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct IList_1_tAA396174F5FA4AE5649BFC7A43DDC0CD5528D5AF;
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
struct ISerializer_1_t83334448FFA68FC2F829AC42C41894CDE2E661F1;
struct tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC;
struct tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F;
struct tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IInputBuffer_t14A70FD163319CA055DA912C0D7A845CFA9B8F3F;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB;

IL2CPP_EXTERN_C RuntimeClass* ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};
struct ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B  : public RuntimeObject
{
	RuntimeObject* ___U3CtextU3Ek__BackingField;
	RuntimeObject* ___U3CstackTraceU3Ek__BackingField;
	RuntimeObject* ___U3ClogLevelU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED  : public RuntimeObject
{
	String_t* ___FullName;
	bool ___SharedString;
	bool ___WriteThrough;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_pinvoke
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_com
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
#pragma pack(push, tp, 1)
struct VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint16_t ___offset0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___offset0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2_OffsetPadding[2];
					uint16_t ___offset2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2_OffsetPadding_forAlignmentOnly[2];
					uint16_t ___offset2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4_OffsetPadding[4];
					uint16_t ___offset4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___offset4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset6_OffsetPadding[6];
					uint16_t ___offset6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset6_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___offset6_forAlignmentOnly;
				};
			};
		};
		uint8_t VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42__padding[8];
	};
};
#pragma pack(pop, tp)
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
struct tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC  : public ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B
{
	bool _____isRoot;
	RuntimeObject* _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 _____vtable;
	uint8_t _____mask0;
	RuntimeObject* _____index0Value;
	RuntimeObject* _____index1Value;
	RuntimeObject* _____index2Value;
};
struct tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F  : public ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B
{
	bool _____isRoot;
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 _____vtable;
	uint8_t _____mask0;
	RuntimeObject* _____index0Value;
	RuntimeObject* _____index1Value;
	RuntimeObject* _____index2Value;
};
struct tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6 : public ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B {};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FlatBufferDeserializationOption_tB957A515173AD5B19DF2CBBD617732622867EA06 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 
{
	int32_t ___U3CDeserializationOptionU3Ek__BackingField;
};
struct NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	bool ___IsLittleEndian;
};
struct ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_StaticFields
{
	RuntimeObject* ___U3CSerializerU3Ek__BackingField;
};
struct tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields
{
	TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___text;
	TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___stackTrace;
	TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___logLevel;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mD96298DFDAA6E8429D957C4380076466185F8A5C_gshared_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m74EF860716FDFDBE63F7E29A3E869C0D5E0335D1_gshared_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_gshared_inline (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_mE7559CEB804542524747AD800499D1090C39F0FE_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m05AD6788F3EC4FE9641E228A2AA95877AAA9C5F2_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mCBDA7669CE1DC35D993045D69B1B4FCAF16D9272_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_gshared_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, RuntimeObject* ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Helpers_Parse_Progressive_TisRuntimeObject_mA9EA413DD0562D9FD0E9ED77345F4097F6E763DD_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Helpers_Parse_Progressive_TisRuntimeObject_m4ABC628B458EF3E9F7171F5BF571B11341D35AE7_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mEC1835F46A44F86FF328D29425C468D8E9B2EE08_gshared_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m0D6B36BA31FBD4DEDA17075575FE9219190A4473_gshared_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_m71385284E5DE13A5B6ED337F6C336F2B0F59AC9E_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m9103874B41AE681E9E4E158934CF07C05C0879A5_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mC5899A803983C86A3D759CF3FE96C3AEE5F43FFA_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_gshared_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m9E72385A2707020F25459AFB125E8019334F8098_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mE4A2D9F3B1319B08878014F83F6458684ABA53A2_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable4_CreateLittleEndian_TisRuntimeObject_m2AEB2F6D232B4D6418A750F0D38F8BEE8A235783_gshared (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable4_CreateBigEndian_TisRuntimeObject_m850E15FAC67AEDED66C79E1AFE5DD94383A2BF04_gshared (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable4_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m16F3A2758D9CC40D680AA6C28B2DFBB3BE9DD935_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable4_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mB11C354F60C7A309338C8A8B5BAE8A36FBD5FD5F_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;

inline void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mD96298DFDAA6E8429D957C4380076466185F8A5C_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC*, const RuntimeMethod*))tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mD96298DFDAA6E8429D957C4380076466185F8A5C_gshared_inline)(__this, method);
}
inline void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m74EF860716FDFDBE63F7E29A3E869C0D5E0335D1_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC*, RuntimeObject*, int32_t, int16_t, const RuntimeMethod*))tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m74EF860716FDFDBE63F7E29A3E869C0D5E0335D1_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogMessageData__ctor_mEB73A50AA506D1AD0DBBDD140D03AB3E77311BE4 (ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B* __this, FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 ___0_context, const RuntimeMethod* method) ;
inline void VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_inline (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_gshared_inline)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogMessageData_OnFlatSharpDeserialized_m14C86C0812ED8B30C8C0C40CF475FBB96355AD5B (ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B* __this, FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 ___0_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_mE7559CEB804542524747AD800499D1090C39F0FE_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t, const RuntimeMethod*))tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_mE7559CEB804542524747AD800499D1090C39F0FE_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* __this, const RuntimeMethod* method) ;
inline RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m05AD6788F3EC4FE9641E228A2AA95877AAA9C5F2_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t, const RuntimeMethod*))tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m05AD6788F3EC4FE9641E228A2AA95877AAA9C5F2_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mCBDA7669CE1DC35D993045D69B1B4FCAF16D9272_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t, const RuntimeMethod*))tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mCBDA7669CE1DC35D993045D69B1B4FCAF16D9272_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, RuntimeObject* ___0_buffer, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, RuntimeObject*, int32_t, const RuntimeMethod*))VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_gshared_inline)(__this, ___0_buffer, ___1_index, method);
}
inline RuntimeObject* Helpers_Parse_Progressive_TisRuntimeObject_mA9EA413DD0562D9FD0E9ED77345F4097F6E763DD (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED*, const RuntimeMethod*))Helpers_Parse_Progressive_TisRuntimeObject_mA9EA413DD0562D9FD0E9ED77345F4097F6E763DD_gshared)(___0_buffer, ___1_offset, ___2_remainingDepth, ___3_fieldContext, method);
}
inline RuntimeObject* Helpers_Parse_Progressive_TisRuntimeObject_m4ABC628B458EF3E9F7171F5BF571B11341D35AE7 (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED*, const RuntimeMethod*))Helpers_Parse_Progressive_TisRuntimeObject_m4ABC628B458EF3E9F7171F5BF571B11341D35AE7_gshared)(___0_buffer, ___1_offset, ___2_remainingDepth, ___3_fieldContext, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline (FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9* __this, int32_t ___0_deserializationOption, const RuntimeMethod* method) ;
inline void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mEC1835F46A44F86FF328D29425C468D8E9B2EE08_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F*, const RuntimeMethod*))tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mEC1835F46A44F86FF328D29425C468D8E9B2EE08_gshared_inline)(__this, method);
}
inline void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m0D6B36BA31FBD4DEDA17075575FE9219190A4473_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F*, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, int16_t, const RuntimeMethod*))tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m0D6B36BA31FBD4DEDA17075575FE9219190A4473_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_gshared_inline)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_m71385284E5DE13A5B6ED337F6C336F2B0F59AC9E_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t, const RuntimeMethod*))tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_m71385284E5DE13A5B6ED337F6C336F2B0F59AC9E_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m9103874B41AE681E9E4E158934CF07C05C0879A5_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t, const RuntimeMethod*))tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m9103874B41AE681E9E4E158934CF07C05C0879A5_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mC5899A803983C86A3D759CF3FE96C3AEE5F43FFA_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t, const RuntimeMethod*))tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mC5899A803983C86A3D759CF3FE96C3AEE5F43FFA_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, const RuntimeMethod*))VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_gshared_inline)(__this, ___0_buffer, ___1_index, method);
}
inline RuntimeObject* Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m9E72385A2707020F25459AFB125E8019334F8098 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED*, const RuntimeMethod*))Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m9E72385A2707020F25459AFB125E8019334F8098_gshared)(___0_buffer, ___1_offset, ___2_remainingDepth, ___3_fieldContext, method);
}
inline RuntimeObject* Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mE4A2D9F3B1319B08878014F83F6458684ABA53A2 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED*, const RuntimeMethod*))Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mE4A2D9F3B1319B08878014F83F6458684ABA53A2_gshared)(___0_buffer, ___1_offset, ___2_remainingDepth, ___3_fieldContext, method);
}
inline void VTable4_CreateLittleEndian_TisRuntimeObject_m2AEB2F6D232B4D6418A750F0D38F8BEE8A235783 (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_CreateLittleEndian_TisRuntimeObject_m2AEB2F6D232B4D6418A750F0D38F8BEE8A235783_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable4_CreateBigEndian_TisRuntimeObject_m850E15FAC67AEDED66C79E1AFE5DD94383A2BF04 (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_CreateBigEndian_TisRuntimeObject_m850E15FAC67AEDED66C79E1AFE5DD94383A2BF04_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable4_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m16F3A2758D9CC40D680AA6C28B2DFBB3BE9DD935 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m16F3A2758D9CC40D680AA6C28B2DFBB3BE9DD935_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable4_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mB11C354F60C7A309338C8A8B5BAE8A36FBD5FD5F (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mB11C354F60C7A309338C8A8B5BAE8A36FBD5FD5F_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_GetOrCreate_m2302388E99FF4FBD5F0842E7CB281B5D95DAC3A7_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* L_0 = (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mD96298DFDAA6E8429D957C4380076466185F8A5C_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* L_1 = L_0;
		RuntimeObject* L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m74EF860716FDFDBE63F7E29A3E869C0D5E0335D1_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mD96298DFDAA6E8429D957C4380076466185F8A5C_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var);
		ConsoleLogMessageData__ctor_mEB73A50AA506D1AD0DBBDD140D03AB3E77311BE4((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m74EF860716FDFDBE63F7E29A3E869C0D5E0335D1_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____buffer), (void*)L_0);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		RuntimeObject* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)(&__this->_____vtable);
		VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this);
		ConsoleLogMessageData_OnFlatSharpDeserialized_m14C86C0812ED8B30C8C0C40CF475FBB96355AD5B((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReturnToPool_m6CDC0365C90BCD49955C711F2D6311EA1BE1C8C6_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_mD2CD02BACBFC26BF119198FEBC1AB2B915AAE87E_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_mD09372A067892D542A5E9B596685EB5E71F5D524_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m22782BF15CB4FAD674DAE1168375AB3A9307E1FB_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mC30ED3E74CC4BA483B56559CC825A41AEE43C338_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m0BFE553E94B8572465019C008C5DA03DD90BE692_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_m076980355CD8B207F8AD443037C1E5658ED1E2F5_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_get_text_mDE0743A9C4FCBDA3BF8359B79F7BD1FDDA21EF40_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_mE7559CEB804542524747AD800499D1090C39F0FE_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->_____index0Value = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____index0Value), (void*)L_5);
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|1)));
	}

IL_003c:
	{
		RuntimeObject* L_7 = __this->_____index0Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_set_text_mED3024AC264B8845DAD3B63084F56FF75CA0979D_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_get_stackTrace_m9D0B91D86828C81CD98719B86F32F12DF1CB5CFB_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m05AD6788F3EC4FE9641E228A2AA95877AAA9C5F2_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->_____index1Value = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____index1Value), (void*)L_5);
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|2))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|2)));
	}

IL_003c:
	{
		RuntimeObject* L_7 = __this->_____index1Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_set_stackTrace_mCF6E3E403AEF0ED8DEF1FF2BC8C41F13474836AA_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_get_logLevel_m6E0CA919E91991FF3BD82BC88C1893D3BA08FACD_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mCBDA7669CE1DC35D993045D69B1B4FCAF16D9272_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->_____index2Value = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____index2Value), (void*)L_5);
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|4))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|4)));
	}

IL_003c:
	{
		RuntimeObject* L_7 = __this->_____index2Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_set_logLevel_mCA9BDA1C4E9C70521A9B4EA9DB15E3D31672CEA1_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_mE7559CEB804542524747AD800499D1090C39F0FE_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___text;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisRuntimeObject_mA9EA413DD0562D9FD0E9ED77345F4097F6E763DD(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m05AD6788F3EC4FE9641E228A2AA95877AAA9C5F2_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___stackTrace;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisRuntimeObject_mA9EA413DD0562D9FD0E9ED77345F4097F6E763DD(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mCBDA7669CE1DC35D993045D69B1B4FCAF16D9272_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___logLevel;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisRuntimeObject_m4ABC628B458EF3E9F7171F5BF571B11341D35AE7(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__cctor_m88EDE8E0AB2C3939E2E22F5DDDBF4DFE1AE3466A_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_GetOrCreate_m13B6741093D20A0A0C9E286B12154986E581B1A5_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* L_0 = (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mEC1835F46A44F86FF328D29425C468D8E9B2EE08_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* L_1 = L_0;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m0D6B36BA31FBD4DEDA17075575FE9219190A4473_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mEC1835F46A44F86FF328D29425C468D8E9B2EE08_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var);
		ConsoleLogMessageData__ctor_mEB73A50AA506D1AD0DBBDD140D03AB3E77311BE4((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m0D6B36BA31FBD4DEDA17075575FE9219190A4473_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)(&__this->_____vtable);
		VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this);
		ConsoleLogMessageData_OnFlatSharpDeserialized_m14C86C0812ED8B30C8C0C40CF475FBB96355AD5B((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReturnToPool_mF5D9D4B196241194A49F551FF5CE29FEE0C0146A_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_mC558461A6DCD48DBB6C837EA5032DF08CB416EC8_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_mB679169ED6D6C5F08C9D32E22D2DCE4ED65CA9B2_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m99716690F079904A716BF47FF38972D695898922_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mB79949BDCE14CF6C1DDF1D447F67C6CB0862FF68_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m2F9223DF4A521A4BB74DD62E1A623EFFD08978B1_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_mBF2DCC87B37939E131EEE233C278AAB31022DBD6_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_get_text_m2A23C7787FD99FA7865DAFA507BFBEBA4ABFC849_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_m71385284E5DE13A5B6ED337F6C336F2B0F59AC9E_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->_____index0Value = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____index0Value), (void*)L_5);
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|1)));
	}

IL_003c:
	{
		RuntimeObject* L_7 = __this->_____index0Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_set_text_m1FDF665981C209AE09230668007E086AE5F73B4F_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_get_stackTrace_m8D4C9419CD766DB5E6B523019ADAB28E1B12AB62_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_003c;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m9103874B41AE681E9E4E158934CF07C05C0879A5_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->_____index1Value = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____index1Value), (void*)L_5);
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|2))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|2)));
	}

IL_003c:
	{
		RuntimeObject* L_7 = __this->_____index1Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_set_stackTrace_m093B39A05CA010A1A74ADD6627E2907A76B8BC44_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_get_logLevel_m5C1FA4B0C4FCD1EEEE04AA7A25AA3CECCD0E18C5_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_003c;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mC5899A803983C86A3D759CF3FE96C3AEE5F43FFA_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->_____index2Value = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____index2Value), (void*)L_5);
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|4))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|4)));
	}

IL_003c:
	{
		RuntimeObject* L_7 = __this->_____index2Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_set_logLevel_m4534E7CE0C624B0BE1C82066E886A709A3F4CCCD_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_m71385284E5DE13A5B6ED337F6C336F2B0F59AC9E_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___text;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m9E72385A2707020F25459AFB125E8019334F8098(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m9103874B41AE681E9E4E158934CF07C05C0879A5_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___stackTrace;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m9E72385A2707020F25459AFB125E8019334F8098(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mC5899A803983C86A3D759CF3FE96C3AEE5F43FFA_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___logLevel;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mE4A2D9F3B1319B08878014F83F6458684ABA53A2(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__cctor_m6075CEFC9ABA16082FD853ABA199979F58D3EDA5_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_GetOrCreate_m99DC4232C769EE2407042DEB0C5CBCE66E95A630_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
	{
		tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* L_0 = (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* L_1 = L_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mDDBF991EAA467E7C227D636E2C3CD42EFC956AF0_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var);
		ConsoleLogMessageData__ctor_mEB73A50AA506D1AD0DBBDD140D03AB3E77311BE4((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_mA2B0F33E1B0BECB49FBB80BF1AECCF29153044FE_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0, SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_1 = ___1_offset;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_1);
		int16_t L_2 = ___2_remainingDepth;
		il2cpp_codegen_write_instance_field_data<int16_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_2);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_4 = ___1_offset;
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, (((VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_5 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this);
		ConsoleLogMessageData_OnFlatSharpDeserialized_m14C86C0812ED8B30C8C0C40CF475FBB96355AD5B((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReturnToPool_m8375D738A365DE53C9B8F090996792046225902D_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_mB2064AF96BFDC37D1BE02158EAD0740B8BB1C4F2_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_m29989A47DA2239EDB32F180417DEA4289DC90900_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m322EA5F388BCC6C450BFF612DC3D80CEB725E10D_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_m2DFCB0E2C19DA73CFA0AE0747EAFE6FC137ADFB1_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m7B8BEB67606235A0AAF15798D3659F0572231CAC_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_m3DDE917EA7F967ABDBF002A5892171F7E503293B_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_get_text_m3A4146B4AC2A1E6939817C77E3177136548CA750_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = *(VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = InvokerFuncInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|1))));
	}

IL_003c:
	{
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_set_text_m744E1852212E7C662D1E07B30D57708E01088A4D_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_get_stackTrace_m314A5FEDA169ACEAD548F31E0E462DDBED0C3EC4_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = *(VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = InvokerFuncInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|2))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|2))));
	}

IL_003c:
	{
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_set_stackTrace_mF344021A3AD5AEE7A6F35F2CD3A0A8D1AF3DC82D_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_get_logLevel_mB240883B4349AA047A8E94724583484E5D2DC00D_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = *(VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = InvokerFuncInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|4))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|4))));
	}

IL_003c:
	{
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_set_logLevel_m6B4302C0D28BD4FAC4E159D4499095A056729594_gshared (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_m2AAB78F7F1BF157648B4F0C268AEFFD1D2E33592_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___text;
		RuntimeObject* L_9;
		L_9 = InvokerFuncInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m6AC49795E643D99983364A69387FB50ABDD57FA0_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 1);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___stackTrace;
		RuntimeObject* L_9;
		L_9 = InvokerFuncInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_m9A1BE7FF729EE05C4631284A9F69236B1FC937B1_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 2);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t136604EC7728DEE70A14D49406496F3BA736B6D9);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___logLevel;
		RuntimeObject* L_9;
		L_9 = InvokerFuncInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__cctor_m2172A41C0347953C19EA1AA74DA1C562CC7B80AC_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_t10B3F0DE7FD6F456797E0F51BC7501DA62C912E6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline (FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9* __this, int32_t ___0_deserializationOption, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_deserializationOption;
		__this->___U3CDeserializationOptionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mD96298DFDAA6E8429D957C4380076466185F8A5C_gshared_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var);
		ConsoleLogMessageData__ctor_mEB73A50AA506D1AD0DBBDD140D03AB3E77311BE4((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m74EF860716FDFDBE63F7E29A3E869C0D5E0335D1_gshared_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____buffer), (void*)L_0);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		RuntimeObject* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)(&__this->_____vtable);
		VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tAB5A97DAE1F96C250F99039F5AFBF3ACF411F1FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this);
		ConsoleLogMessageData_OnFlatSharpDeserialized_m14C86C0812ED8B30C8C0C40CF475FBB96355AD5B((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_gshared_inline (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_0 = ___0_inputBuffer;
		int32_t L_1 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_2 = ___2_item;
		VTable4_CreateLittleEndian_TisRuntimeObject_m2AEB2F6D232B4D6418A750F0D38F8BEE8A235783(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		RuntimeObject* L_3 = ___0_inputBuffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = ___2_item;
		VTable4_CreateBigEndian_TisRuntimeObject_m850E15FAC67AEDED66C79E1AFE5DD94383A2BF04(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_mE7559CEB804542524747AD800499D1090C39F0FE_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___text;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisRuntimeObject_mA9EA413DD0562D9FD0E9ED77345F4097F6E763DD(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m05AD6788F3EC4FE9641E228A2AA95877AAA9C5F2_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___stackTrace;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisRuntimeObject_mA9EA413DD0562D9FD0E9ED77345F4097F6E763DD(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mCBDA7669CE1DC35D993045D69B1B4FCAF16D9272_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___logLevel;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisRuntimeObject_m4ABC628B458EF3E9F7171F5BF571B11341D35AE7(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_gshared_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, RuntimeObject* ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0018:
	{
		uint16_t L_1 = __this->___offset0;
		return (int32_t)L_1;
	}

IL_001f:
	{
		uint16_t L_2 = __this->___offset2;
		return (int32_t)L_2;
	}

IL_0026:
	{
		uint16_t L_3 = __this->___offset4;
		return (int32_t)L_3;
	}

IL_002d:
	{
		uint16_t L_4 = __this->___offset6;
		return (int32_t)L_4;
	}

IL_0034:
	{
		return 0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1__ctor_mEC1835F46A44F86FF328D29425C468D8E9B2EE08_gshared_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B_il2cpp_TypeInfo_var);
		ConsoleLogMessageData__ctor_mEB73A50AA506D1AD0DBBDD140D03AB3E77311BE4((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_Initialize_m0D6B36BA31FBD4DEDA17075575FE9219190A4473_gshared_inline (tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)(&__this->_____vtable);
		VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_tFB48D8733DFEEBBA81D82C2203274C44FCC20F1F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this);
		ConsoleLogMessageData_OnFlatSharpDeserialized_m14C86C0812ED8B30C8C0C40CF475FBB96355AD5B((ConsoleLogMessageData_t3767F60AB0DB6576F8CDDD6A1ADBB47C4A0F652B*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0010;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_inputBuffer;
		int32_t L_1 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_2 = ___2_item;
		VTable4_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m16F3A2758D9CC40D680AA6C28B2DFBB3BE9DD935(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_inputBuffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = ___2_item;
		VTable4_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mB11C354F60C7A309338C8A8B5BAE8A36FBD5FD5F(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex0Value_m71385284E5DE13A5B6ED337F6C336F2B0F59AC9E_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___text;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m9E72385A2707020F25459AFB125E8019334F8098(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex1Value_m9103874B41AE681E9E4E158934CF07C05C0879A5_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___stackTrace;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m9E72385A2707020F25459AFB125E8019334F8098(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_ff87ea7f6b2a4c999787894d66b74529_Progressive_1_ReadIndex2Value_mC5899A803983C86A3D759CF3FE96C3AEE5F43FFA_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_1167bc59497a4a4a93f1dcf1cbd8a756_t29B760AAC3CBF12B173AD8D57ECB8C9008A6CC37_il2cpp_TypeInfo_var))->___logLevel;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mE4A2D9F3B1319B08878014F83F6458684ABA53A2(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_gshared_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0018:
	{
		uint16_t L_1 = __this->___offset0;
		return (int32_t)L_1;
	}

IL_001f:
	{
		uint16_t L_2 = __this->___offset2;
		return (int32_t)L_2;
	}

IL_0026:
	{
		uint16_t L_3 = __this->___offset4;
		return (int32_t)L_3;
	}

IL_002d:
	{
		uint16_t L_4 = __this->___offset6;
		return (int32_t)L_4;
	}

IL_0034:
	{
		return 0;
	}
}
