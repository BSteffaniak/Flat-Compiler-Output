#ifndef FILE_nova_datastruct_list_Nova_OrderedList_NOVA
#define FILE_nova_datastruct_list_Nova_OrderedList_NOVA

typedef struct nova_datastruct_list_Nova_OrderedList nova_datastruct_list_Nova_OrderedList;
typedef struct nova_datastruct_list_Nova_OrderedListFunctionMap nova_datastruct_list_Nova_OrderedListFunctionMap;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_Object nova_Nova_Object;
typedef struct nova_datastruct_list_Nova_OrderedList nova_datastruct_list_Nova_OrderedList;

typedef char (*nova_datastruct_list_Nova_OrderedList_closure329_Nova_condition)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_OrderedList*, void*);
typedef char (*nova_datastruct_list_Nova_OrderedList_closure330_Nova_condition)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_OrderedList*, void*);
typedef char (*nova_datastruct_list_Nova_OrderedList_closure331_Nova_condition)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_OrderedList*, void*);
typedef char (*nova_datastruct_list_Nova_OrderedList_closure332_Nova_condition)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_OrderedList*, void*);
typedef char (*nova_datastruct_list_Nova_OrderedListFunctionMap_closure474_Nova_condition)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_OrderedList*, void*);

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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_datastruct_list_Nova_OrderedList, 
	
	nova_datastruct_list_OrderedList_Extension_VTable* vtable;
)

void nova_datastruct_list_Nova_OrderedList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
char nova_datastruct_list_Nova_OrderedList_Nova_findIndex(nova_datastruct_list_Nova_OrderedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_OrderedList_closure332_Nova_condition nova_datastruct_list_Nova_OrderedList_Nova_condition, void* nova_datastruct_list_Nova_OrderedList_ref_Nova_condition, void* condition_context, int defaultReturnValue);

CCLASS_CLASS
(
	nova_datastruct_list_Nova_OrderedListFunctionMap, 
	
	nova_datastruct_list_OrderedList_OrderedListFunctionMap_Extension_VTable* vtable;
)

void nova_datastruct_list_Nova_OrderedListFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_OrderedListFunctionMap* nova_datastruct_list_Nova_OrderedListFunctionMap_Nova_construct(nova_datastruct_list_Nova_OrderedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_OrderedListFunctionMap_Nova_destroy(nova_datastruct_list_Nova_OrderedListFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_OrderedListFunctionMap_Nova_this(nova_datastruct_list_Nova_OrderedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_datastruct_list_Nova_OrderedListFunctionMap_functionMap_Nova_findIndex(nova_datastruct_list_Nova_OrderedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_OrderedList* reference, nova_datastruct_list_Nova_OrderedListFunctionMap_closure474_Nova_condition nova_datastruct_list_Nova_OrderedListFunctionMap_Nova_condition, void* nova_datastruct_list_Nova_OrderedListFunctionMap_ref_Nova_condition, void* condition_context, int defaultReturnValue);
void nova_datastruct_list_Nova_OrderedListFunctionMap_Nova_super(nova_datastruct_list_Nova_OrderedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
