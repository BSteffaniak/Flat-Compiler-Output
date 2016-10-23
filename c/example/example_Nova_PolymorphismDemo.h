#pragma once
#ifndef FILE_example_Nova_PolymorphismDemo_NOVA
#define FILE_example_Nova_PolymorphismDemo_NOVA

typedef struct example_Nova_PolymorphismDemo example_Nova_PolymorphismDemo;


#include <Nova.h>
#include <InterfaceVTAble.h>
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
#include <example/example_Nova_Animal.h>
#include <example/example_Nova_Dog.h>
#include <example/example_Nova_Spider.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct example_PolymorphismDemo_Extension_VTable example_PolymorphismDemo_Extension_VTable;
struct example_PolymorphismDemo_Extension_VTable
{
	nova_Interface_VTable itable;
	char (*nova_operators_Nova_Equals_virtual_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern example_PolymorphismDemo_Extension_VTable example_PolymorphismDemo_Extension_VTable_val;


CCLASS_CLASS
(
	example_Nova_PolymorphismDemo, 
	
	example_PolymorphismDemo_Extension_VTable* vtable;
	nova_Nova_Class* nova_Nova_Object_Nova_class;
)

void example_Nova_PolymorphismDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
example_Nova_PolymorphismDemo* example_Nova_PolymorphismDemo_Nova_construct(example_Nova_PolymorphismDemo* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_PolymorphismDemo_Nova_destroy(example_Nova_PolymorphismDemo** this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_PolymorphismDemo_static_Nova_main(example_Nova_PolymorphismDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
void example_Nova_PolymorphismDemo_Nova_this(example_Nova_PolymorphismDemo* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_PolymorphismDemo_Nova_super(example_Nova_PolymorphismDemo* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
