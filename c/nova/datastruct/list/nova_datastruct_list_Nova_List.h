#pragma once
#ifndef FILE_nova_datastruct_list_Nova_List_NOVA
#define FILE_nova_datastruct_list_Nova_List_NOVA

typedef struct nova_datastruct_list_Nova_List nova_datastruct_list_Nova_List;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_Object nova_Nova_Object;
typedef struct nova_datastruct_list_Nova_List nova_datastruct_list_Nova_List;
typedef struct OtherType OtherType;
typedef struct Out Out;

typedef void (*nova_datastruct_list_Nova_List_closure1_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef void (*nova_datastruct_list_Nova_List_closure2_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef void (*nova_datastruct_list_Nova_List_closure3_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure4_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure5_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure7_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure8_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure10_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure11_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure12_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure13_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure14_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef int (*nova_datastruct_list_Nova_List_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef int (*nova_datastruct_list_Nova_List_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef int (*nova_datastruct_list_Nova_List_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure19_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure20_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure21_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure22_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure23_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure24_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure25_Nova_zipper)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, OtherType*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure26_Nova_zipper)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, OtherType*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure27_Nova_zipper)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, OtherType*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure28_Nova_func)(void*, nova_exception_Nova_ExceptionData*, Out*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure29_Nova_func)(void*, nova_exception_Nova_ExceptionData*, Out*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure30_Nova_func)(void*, nova_exception_Nova_ExceptionData*, Out*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);

#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <NovaClassData.h>
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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>


typedef struct nova_datastruct_list_List_Extension_VTable nova_datastruct_list_List_Extension_VTable;
struct nova_datastruct_list_List_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern nova_datastruct_list_List_Extension_VTable nova_datastruct_list_List_Extension_VTable_val;


CCLASS_CLASS
(
	nova_datastruct_list_Nova_List, 
	
	nova_datastruct_list_List_Extension_VTable* vtable;
	nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_first;
	nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_last;
)

void nova_datastruct_list_Nova_List_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_Nova_toArray(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_datastruct_list_Nova_List_0_Nova_contains(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_forEach(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_map(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context);
char nova_datastruct_list_Nova_List_0_Nova_any(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context);
char nova_datastruct_list_Nova_List_0_Nova_all(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int stopOnContradiction);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_filter(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_filterEmpty(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_take(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_Nova_takeLast(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_skip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_firstOr(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _default, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_Nova_Object* nova_datastruct_list_Nova_List_0_Nova_firstWhere(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure21_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_firstNonNull(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure24_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_Nova_zip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* other, nova_datastruct_list_Nova_List_closure27_Nova_zipper nova_datastruct_list_Nova_List_Nova_zipper, void* nova_datastruct_list_Nova_List_ref_Nova_zipper, void* zipper_context);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_reverse(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData);nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_reduce(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure30_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context, nova_Nova_Object* initialValue);
nova_Nova_String* nova_datastruct_list_Nova_List_Nova_join(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter);
int nova_datastruct_list_Nova_List_Mutator_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
nova_datastruct_list_Nova_Iterator* nova_datastruct_list_Nova_List_Accessor_Nova_iterator(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_datastruct_list_Nova_List_Accessor_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_virtual_Nova_toArray(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_datastruct_list_Nova_List_virtual0_Nova_contains(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_forEach(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_map(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context);
char nova_datastruct_list_Nova_List_virtual0_Nova_any(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context);
char nova_datastruct_list_Nova_List_virtual0_Nova_all(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int stopOnContradiction);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_filter(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual_Nova_take(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual_Nova_skip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_Nova_Object* nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure21_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual_Nova_reverse(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_datastruct_list_Nova_List_virtual_Nova_join(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter);
int nova_datastruct_list_Nova_List_virtual_Mutator_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
int nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
