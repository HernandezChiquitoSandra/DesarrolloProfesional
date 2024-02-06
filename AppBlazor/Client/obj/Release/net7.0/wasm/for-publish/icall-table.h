#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
183,
189,
190,
191,
192,
193,
194,
195,
196,
197,
200,
201,
313,
314,
316,
344,
345,
346,
366,
367,
368,
369,
460,
461,
462,
465,
501,
502,
504,
506,
508,
510,
515,
523,
524,
525,
526,
527,
528,
529,
530,
531,
532,
665,
673,
676,
678,
683,
684,
686,
687,
691,
692,
694,
695,
698,
699,
700,
703,
705,
708,
710,
712,
783,
785,
787,
796,
797,
798,
799,
801,
808,
809,
810,
811,
812,
820,
821,
822,
826,
827,
829,
833,
834,
835,
1101,
1282,
1283,
6360,
6361,
6363,
6364,
6365,
6366,
6367,
6369,
6371,
6373,
6374,
6383,
6385,
6389,
6390,
6392,
6394,
6396,
6407,
6416,
6417,
6419,
6420,
6421,
6422,
6423,
6425,
6427,
7353,
7357,
7359,
7360,
7361,
7362,
7494,
7495,
7496,
7497,
7517,
7518,
7519,
7521,
7565,
7617,
7619,
7629,
7630,
7631,
8008,
8012,
8013,
8044,
8068,
8074,
8081,
8091,
8095,
8182,
8184,
8196,
8198,
8199,
8200,
8207,
8220,
8240,
8241,
8249,
8251,
8258,
8259,
8262,
8264,
8269,
8275,
8276,
8283,
8285,
8297,
8300,
8301,
8302,
8313,
8322,
8328,
8329,
8330,
8332,
8333,
8351,
8353,
8367,
8389,
8390,
8408,
8413,
8443,
8444,
8902,
9044,
9290,
9291,
9298,
9299,
9300,
9306,
9376,
9692,
9693,
10822,
10843,
10850,
10852,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 183,
ves_icall_System_Array_InternalCreate,
// token 189,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 190,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 191,
ves_icall_System_Array_CanChangePrimitive,
// token 192,
ves_icall_System_Array_FastCopy_raw,
// token 193,
ves_icall_System_Array_GetLength_raw,
// token 194,
ves_icall_System_Array_GetLowerBound_raw,
// token 195,
ves_icall_System_Array_GetGenericValue_icall,
// token 196,
ves_icall_System_Array_GetValueImpl_raw,
// token 197,
ves_icall_System_Array_SetGenericValue_icall,
// token 200,
ves_icall_System_Array_SetValueImpl_raw,
// token 201,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 313,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 314,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 316,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 344,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 345,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 346,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 366,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 367,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 368,
ves_icall_System_Enum_InternalGetCorElementType,
// token 369,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 460,
ves_icall_System_Environment_get_ProcessorCount,
// token 461,
ves_icall_System_Environment_get_TickCount,
// token 462,
ves_icall_System_Environment_get_TickCount64,
// token 465,
ves_icall_System_Environment_FailFast_raw,
// token 501,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 502,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 504,
ves_icall_System_GC_SuppressFinalize_raw,
// token 506,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 508,
ves_icall_System_GC_GetGCMemoryInfo,
// token 510,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 515,
ves_icall_System_Object_MemberwiseClone_raw,
// token 523,
ves_icall_System_Math_Ceiling,
// token 524,
ves_icall_System_Math_Cos,
// token 525,
ves_icall_System_Math_Floor,
// token 526,
ves_icall_System_Math_Log,
// token 527,
ves_icall_System_Math_Log10,
// token 528,
ves_icall_System_Math_Pow,
// token 529,
ves_icall_System_Math_Sin,
// token 530,
ves_icall_System_Math_Sqrt,
// token 531,
ves_icall_System_Math_Tan,
// token 532,
ves_icall_System_Math_ModF,
// token 665,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 673,
ves_icall_RuntimeType_make_array_type_raw,
// token 676,
ves_icall_RuntimeType_make_byref_type_raw,
// token 678,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 683,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 684,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 686,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 687,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 691,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 692,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 694,
ves_icall_System_RuntimeType_getFullName_raw,
// token 695,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 698,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 699,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 700,
ves_icall_RuntimeType_GetFields_native_raw,
// token 703,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 705,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 708,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 710,
ves_icall_RuntimeType_GetName_raw,
// token 712,
ves_icall_RuntimeType_GetNamespace_raw,
// token 783,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 785,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 787,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 796,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 797,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 798,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 799,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 801,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 808,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 809,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 810,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 811,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 812,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 820,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 821,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 822,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 826,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 827,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 829,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 833,
ves_icall_System_String_FastAllocateString_raw,
// token 834,
ves_icall_System_String_InternalIsInterned_raw,
// token 835,
ves_icall_System_String_InternalIntern_raw,
// token 1101,
ves_icall_System_Type_internal_from_handle_raw,
// token 1282,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1283,
ves_icall_System_ValueType_Equals_raw,
// token 6360,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6361,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6363,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6364,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6365,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6366,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6367,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6369,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6371,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6373,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 6374,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6383,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6385,
mono_monitor_exit_icall_raw,
// token 6389,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 6390,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6392,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6394,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6396,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6407,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 6416,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6417,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6419,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6420,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6421,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6422,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6423,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6425,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6427,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7353,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7357,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7359,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7360,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7361,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7362,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7494,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7495,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7496,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7497,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7517,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7518,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7519,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7521,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7565,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7617,
mono_object_hash_icall_raw,
// token 7619,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 7629,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7630,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7631,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8008,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8012,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8013,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8044,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8068,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8074,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8081,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8091,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8095,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8182,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8184,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8196,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8198,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8199,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8200,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 8207,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8220,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8240,
ves_icall_reflection_get_token_raw,
// token 8241,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8249,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8251,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8258,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8259,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8262,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8264,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8269,
ves_icall_reflection_get_token_raw,
// token 8275,
ves_icall_get_method_info_raw,
// token 8276,
ves_icall_get_method_attributes,
// token 8283,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8285,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8297,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8300,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8301,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8302,
ves_icall_reflection_get_token_raw,
// token 8313,
ves_icall_InternalInvoke_raw,
// token 8322,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8328,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8329,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8330,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8332,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8333,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8351,
ves_icall_InvokeClassConstructor_raw,
// token 8353,
ves_icall_InternalInvoke_raw,
// token 8367,
ves_icall_reflection_get_token_raw,
// token 8389,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 8390,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8408,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 8413,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8443,
ves_icall_reflection_get_token_raw,
// token 8444,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8902,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9044,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9290,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9291,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9298,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 9299,
ves_icall_ModuleBuilder_getToken_raw,
// token 9300,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 9306,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9376,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9692,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9693,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10822,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10843,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10850,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10852,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
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
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
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
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};
