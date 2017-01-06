#ifndef FILE_nova_datastruct_Nova_HashSet_NOVA
#define FILE_nova_datastruct_Nova_HashSet_NOVA

typedef struct nova_datastruct_Nova_HashSet nova_datastruct_Nova_HashSet;
typedef struct nova_datastruct_Nova_HashSetFunctionMap nova_datastruct_Nova_HashSetFunctionMap;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_Object nova_Nova_Object;
typedef struct nova_datastruct_Nova_HashSet nova_datastruct_Nova_HashSet;

typedef char (*nova_datastruct_Nova_HashSet_closure1_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure2_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure3_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure7_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure8_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_closure9_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_closure10_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_closure11_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_closure12_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure13_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure14_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure15_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure19_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure20_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef void (*nova_datastruct_Nova_HashSet_closure21_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef void (*nova_datastruct_Nova_HashSet_closure22_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef void (*nova_datastruct_Nova_HashSet_closure23_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef void (*nova_datastruct_Nova_HashSet_closure24_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSetFunctionMap_closure25_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSetFunctionMap_closure26_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSetFunctionMap_closure27_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSetFunctionMap_closure28_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSetFunctionMap_closure29_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef void (*nova_datastruct_Nova_HashSetFunctionMap_closure30_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);

#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_DivideByZeroException.h>
#include <nova/io/nova_io_Nova_Console.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Byte.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Short.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Int.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Long.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Float.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Double.h>
#include <nova/primitive/nova_primitive_Nova_Null.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Char.h>
#include <nova/primitive/nova_primitive_Nova_Bool.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/thread/async/nova_thread_async_Nova_Task.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_datastruct_Nova_HashSet, 
	
	nova_datastruct_HashSet_Extension_VTable* vtable;
	int nova_datastruct_Nova_HashSet_Nova_size;
	int nova_datastruct_Nova_HashSet_Nova_count;
	nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_HashSet_Nova_iterator;
	nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_first;
	nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_last;
	struct Private_nova_datastruct_Nova_HashSet* prv;
)

void nova_datastruct_Nova_HashSet_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSet_Nova_construct(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize);
void nova_datastruct_Nova_HashSet_Nova_destroy(nova_datastruct_Nova_HashSet** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_HashSet_Nova_this(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_toArray(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_datastruct_Nova_HashSet_0_Nova_any(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure4_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context);
char nova_datastruct_Nova_HashSet_0_Nova_all(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure8_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_0_Nova_map(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure12_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_0_Nova_filter(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure16_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context);
nova_Nova_String* nova_datastruct_Nova_HashSet_Nova_join(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_skip(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int num);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_take(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int num);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_reverse(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_Nova_HashSet_0_Nova_firstWhere(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure20_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context);
nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSet_0_Nova_forEach(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure24_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context);
nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSet_Nova_add(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_get(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_remove(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
char nova_datastruct_Nova_HashSet_0_Nova_contains(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
nova_Nova_String* nova_datastruct_Nova_HashSet_Nova_toString(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_datastruct_Nova_HashSet_Accessorfunc_Nova_count(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_datastruct_Nova_HashSet_Mutatorfunc_Nova_count(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_HashSet_Accessorfunc_Nova_iterator(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_HashSet_Mutatorfunc_Nova_iterator(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Iterator* value);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Accessorfunc_Nova_first(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Mutatorfunc_Nova_first(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Accessorfunc_Nova_last(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Mutatorfunc_Nova_last(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
void nova_datastruct_Nova_HashSet_Nova_super(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_datastruct_Nova_HashSetFunctionMap, 
	
	nova_datastruct_HashSet_HashSetFunctionMap_Extension_VTable* vtable;
)

void nova_datastruct_Nova_HashSetFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_HashSetFunctionMap* nova_datastruct_Nova_HashSetFunctionMap_Nova_construct(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_HashSetFunctionMap_Nova_destroy(nova_datastruct_Nova_HashSetFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_HashSetFunctionMap_Nova_this(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSetFunctionMap_functionMapHashSetFunctionMap_static_Nova_construct(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_toArray(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference);
char nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_any(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure25_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context);
char nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_all(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure26_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_map(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure27_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_filter(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure28_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context);
nova_Nova_String* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_join(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_String* delimiter);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_skip(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, int num);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_take(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, int num);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_reverse(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference);
nova_Nova_Object* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_firstWhere(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure29_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context);
nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_forEach(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure30_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_getBucket(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value);
nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_add(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value);
nova_Nova_Object* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_get(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value);
nova_Nova_Object* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_remove(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value);
char nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_contains(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value);
nova_Nova_String* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_toString(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference);
void nova_datastruct_Nova_HashSetFunctionMap_Nova_super(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
