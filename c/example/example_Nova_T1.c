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
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void example_Nova_T1_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_T1* example_Nova_T1_Nova_construct(example_Nova_T1* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_T1, this,);
	this->vtable = &example_T1_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_T1_Nova_super(this, exceptionData);
	
	{
		example_Nova_T1_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_T1_Nova_destroy(example_Nova_T1** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_T1_Nova_this(example_Nova_T1* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int example_Nova_T1_Accessor_static_Nova_ind(example_Nova_T1* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)1;
}

void example_Nova_T1_Nova_super(example_Nova_T1* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int example_Nova_T1_virtual_Accessor_static_Nova_ind(example_Nova_T1* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->example_Nova_T1_virtual_Accessor_static_Nova_ind(0, exceptionData);
}

void example_Nova_T1FunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_T1FunctionMap* example_Nova_T1FunctionMap_Nova_construct(example_Nova_T1FunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_T1FunctionMap, this,);
	this->vtable = &example_T1_T1FunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_T1FunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_T1FunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_T1FunctionMap_Nova_destroy(example_Nova_T1FunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_T1FunctionMap_Nova_this(example_Nova_T1FunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_T1FunctionMap_Nova_super(example_Nova_T1FunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

