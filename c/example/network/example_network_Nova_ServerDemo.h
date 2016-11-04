#pragma once
#ifndef FILE_example_network_Nova_ServerDemo_NOVA
#define FILE_example_network_Nova_ServerDemo_NOVA

typedef struct example_network_Nova_ServerDemo example_network_Nova_ServerDemo;


#include <Nova.h>
#include <InterfaceVTAble.h>
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
#include <nova/network/nova_network_Nova_ServerSocket.h>
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <example/network/example_network_Nova_ConnectionThread.h>
#include <example/network/example_network_Nova_OutputThread.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct example_network_ServerDemo_Extension_VTable example_network_ServerDemo_Extension_VTable;
struct example_network_ServerDemo_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern example_network_ServerDemo_Extension_VTable example_network_ServerDemo_Extension_VTable_val;


CCLASS_CLASS
(
	example_network_Nova_ServerDemo, 
	
	example_network_ServerDemo_Extension_VTable* vtable;
)

void example_network_Nova_ServerDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
example_network_Nova_ServerDemo* example_network_Nova_ServerDemo_Nova_construct(example_network_Nova_ServerDemo* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_network_Nova_ServerDemo_Nova_destroy(example_network_Nova_ServerDemo** this, nova_exception_Nova_ExceptionData* exceptionData);
void example_network_Nova_ServerDemo_static_Nova_main(example_network_Nova_ServerDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
void example_network_Nova_ServerDemo_Nova_this(example_network_Nova_ServerDemo* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_network_Nova_ServerDemo_Nova_super(example_network_Nova_ServerDemo* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
