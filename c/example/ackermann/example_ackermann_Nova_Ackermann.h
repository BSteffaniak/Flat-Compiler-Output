#pragma once
#ifndef FILE_example_ackermann_Nova_Ackermann_NOVA
#define FILE_example_ackermann_Nova_Ackermann_NOVA

typedef struct example_ackermann_Nova_Ackermann example_ackermann_Nova_Ackermann;


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
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>


typedef struct example_ackermann_Ackermann_Extension_VTable example_ackermann_Ackermann_Extension_VTable;
struct example_ackermann_Ackermann_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern example_ackermann_Ackermann_Extension_VTable example_ackermann_Ackermann_Extension_VTable_val;


CCLASS_CLASS
(
	example_ackermann_Nova_Ackermann, 
	
	example_ackermann_Ackermann_Extension_VTable* vtable;
)

void example_ackermann_Nova_Ackermann_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
example_ackermann_Nova_Ackermann* example_ackermann_Nova_Ackermann_Nova_construct(example_ackermann_Nova_Ackermann* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_ackermann_Nova_Ackermann_Nova_destroy(example_ackermann_Nova_Ackermann** this, nova_exception_Nova_ExceptionData* exceptionData);
void example_ackermann_Nova_Ackermann_static_Nova_main(example_ackermann_Nova_Ackermann* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
int example_ackermann_Nova_Ackermann_static_Nova_run(example_ackermann_Nova_Ackermann* this, nova_exception_Nova_ExceptionData* exceptionData, int m, int n);
int example_ackermann_Nova_Ackermann_static_Nova_run2(example_ackermann_Nova_Ackermann* this, nova_exception_Nova_ExceptionData* exceptionData, int m, int n);
void example_ackermann_Nova_Ackermann_Nova_this(example_ackermann_Nova_Ackermann* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_ackermann_Nova_Ackermann_Nova_super(example_ackermann_Nova_Ackermann* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
