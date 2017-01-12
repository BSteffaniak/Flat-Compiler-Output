#ifndef FILE_nova_datastruct_list_Nova_IntArray_NOVA
#define FILE_nova_datastruct_list_Nova_IntArray_NOVA

typedef struct nova_datastruct_list_Nova_IntArray nova_datastruct_list_Nova_IntArray;
typedef struct nova_datastruct_list_Nova_IntArrayFunctionMap nova_datastruct_list_Nova_IntArrayFunctionMap;
typedef struct nova_datastruct_list_Nova_IntArrayPropertyMap nova_datastruct_list_Nova_IntArrayPropertyMap;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_datastruct_list_Nova_IntArray nova_datastruct_list_Nova_IntArray;
typedef struct nova_Nova_Object nova_Nova_Object;

typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntArray_closure213_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntArray_closure214_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntArray_closure215_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntArray_closure216_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef void (*nova_datastruct_list_Nova_IntArray_closure217_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef void (*nova_datastruct_list_Nova_IntArray_closure218_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef void (*nova_datastruct_list_Nova_IntArray_closure219_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef void (*nova_datastruct_list_Nova_IntArray_closure220_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure221_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure222_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure223_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure224_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure225_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure226_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure227_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure228_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure229_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure230_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure231_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure232_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure233_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure234_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure235_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure236_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntArrayFunctionMap_closure445_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef void (*nova_datastruct_list_Nova_IntArrayFunctionMap_closure446_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArrayFunctionMap_closure447_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArrayFunctionMap_closure448_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArrayFunctionMap_closure449_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArrayFunctionMap_closure450_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);

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
#include <nova/meta/nova_meta_Nova_PropertyMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_PlusEqualsOperator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_OrderedList.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_OrderedList.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_PlusEqualsOperator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_OrderedList.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_PlusEqualsOperator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_datastruct_list_Nova_IntArray, 
	
	nova_datastruct_list_IntArray_Extension_VTable* vtable;
	int nova_datastruct_list_Nova_Array_Nova_capacity;
	int nova_datastruct_list_Nova_Array_Nova_count;
	int nova_datastruct_list_Nova_Array_Nova_position;
	nova_Nova_Object** nova_datastruct_list_Nova_Array_Nova_data;
)

void nova_datastruct_list_Nova_IntArray_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_0_Nova_construct(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_1_Nova_construct(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int count);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_2_Nova_construct(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int* data, int count);
void nova_datastruct_list_Nova_IntArray_Nova_destroy(nova_datastruct_list_Nova_IntArray** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_IntArray_Nova_this(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_IntArray_0_Nova_this(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int count);
void nova_datastruct_list_Nova_IntArray_1_Nova_this(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int* data, int count);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_clone(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_IntArray_Nova_map(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure216_Nova_mapFunc nova_datastruct_list_Nova_IntArray_Nova_mapFunc, void* nova_datastruct_list_Nova_IntArray_ref_Nova_mapFunc, void* mapFunc_context);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_forEach(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure220_Nova_func nova_datastruct_list_Nova_IntArray_Nova_func, void* nova_datastruct_list_Nova_IntArray_ref_Nova_func, void* func_context);
char nova_datastruct_list_Nova_IntArray_Nova_any(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure224_Nova_anyFunc nova_datastruct_list_Nova_IntArray_Nova_anyFunc, void* nova_datastruct_list_Nova_IntArray_ref_Nova_anyFunc, void* anyFunc_context);
char nova_datastruct_list_Nova_IntArray_Nova_all(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure228_Nova_allFunc nova_datastruct_list_Nova_IntArray_Nova_allFunc, void* nova_datastruct_list_Nova_IntArray_ref_Nova_allFunc, void* allFunc_context, int stopOnContradiction);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_filter(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure232_Nova_filterFunc nova_datastruct_list_Nova_IntArray_Nova_filterFunc, void* nova_datastruct_list_Nova_IntArray_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_take(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_skip(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
int nova_datastruct_list_Nova_IntArray_Nova_firstWhere(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure236_Nova_func nova_datastruct_list_Nova_IntArray_Nova_func, void* nova_datastruct_list_Nova_IntArray_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_reverse(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_datastruct_list_Nova_IntArray_Nova_join(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter);
int nova_datastruct_list_Nova_IntArray_Nova_get(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
int nova_datastruct_list_Nova_IntArray_Nova_set(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index, int value);
nova_datastruct_list_Nova_IntArrayIterator* nova_datastruct_list_Nova_IntArray_Accessor_Nova_iterator(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_datastruct_list_Nova_IntArray_Accessor_Nova_first(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_datastruct_list_Nova_IntArray_Accessor_Nova_last(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_IntArray_Nova_super(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_datastruct_list_Nova_IntArrayFunctionMap, 
	
	nova_datastruct_list_IntArray_IntArrayFunctionMap_Extension_VTable* vtable;
)

void nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_IntArrayFunctionMap* nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_construct(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_destroy(nova_datastruct_list_Nova_IntArrayFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_this(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMapIntArrayFunctionMap0_Nova_construct(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMapIntArrayFunctionMap1_Nova_construct(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int count);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMapIntArrayFunctionMap2_Nova_construct(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int* data, int count);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_clone(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_map(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure445_Nova_mapFunc nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_mapFunc, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_mapFunc, void* mapFunc_context);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_forEach(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure446_Nova_func nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_func, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_func, void* func_context);
char nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_any(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure447_Nova_anyFunc nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_anyFunc, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_anyFunc, void* anyFunc_context);
char nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_all(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure448_Nova_allFunc nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_allFunc, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_allFunc, void* allFunc_context, char stopOnContradiction);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_filter(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure449_Nova_filterFunc nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_filterFunc, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_take(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, int howMany);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_skip(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, int howMany);
int nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_firstWhere(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure450_Nova_func nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_func, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_reverse(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference);
nova_Nova_String* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_join(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_Nova_String* delimiter);
int nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_get(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, int index);
int nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_set(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, int index, int value);
void nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_super(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_datastruct_list_Nova_IntArrayPropertyMap, 
	
	nova_datastruct_list_IntArray_IntArrayPropertyMap_Extension_VTable* vtable;
)

void nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_IntArrayPropertyMap* nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_construct(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_destroy(nova_datastruct_list_Nova_IntArrayPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_this(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_IntArrayIterator* nova_datastruct_list_Nova_IntArrayPropertyMap_functionMap_Nova_iterator(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference);
int nova_datastruct_list_Nova_IntArrayPropertyMap_functionMap_Nova_first(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference);
int nova_datastruct_list_Nova_IntArrayPropertyMap_functionMap_Nova_last(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference);
void nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_super(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
