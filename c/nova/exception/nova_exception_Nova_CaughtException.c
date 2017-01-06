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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void nova_exception_Nova_CaughtException_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_exception_Nova_CaughtException* nova_exception_Nova_CaughtException_Nova_construct(nova_exception_Nova_CaughtException* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* type, int soft)
{
	CCLASS_NEW(nova_exception_Nova_CaughtException, this,);
	this->vtable = &nova_exception_CaughtException_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_exception_Nova_CaughtException_Nova_super(this, exceptionData);
	
	{
		nova_exception_Nova_CaughtException_Nova_this(this, exceptionData, type, soft);
	}
	
	return this;
}

void nova_exception_Nova_CaughtException_Nova_destroy(nova_exception_Nova_CaughtException** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_meta_Nova_Class_Nova_destroy(&(*this)->nova_exception_Nova_CaughtException_Nova_type, exceptionData);
	
	
	NOVA_FREE(*this);
}

void nova_exception_Nova_CaughtException_Nova_this(nova_exception_Nova_CaughtException* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* type, int soft)
{
	soft = (int)(soft == (intptr_t)nova_null ? 1 : soft);
	this->nova_exception_Nova_CaughtException_Nova_type = type;
	this->nova_exception_Nova_CaughtException_Nova_soft = soft;
}

void nova_exception_Nova_CaughtException_Nova_super(nova_exception_Nova_CaughtException* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_exception_Nova_CaughtException_Nova_type = (nova_meta_Nova_Class*)nova_null;
	this->nova_exception_Nova_CaughtException_Nova_soft = 0;
}

void nova_exception_Nova_CaughtExceptionFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_exception_Nova_CaughtExceptionFunctionMap* nova_exception_Nova_CaughtExceptionFunctionMap_Nova_construct(nova_exception_Nova_CaughtExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_exception_Nova_CaughtExceptionFunctionMap, this,);
	this->vtable = &nova_exception_CaughtException_CaughtExceptionFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_exception_Nova_CaughtExceptionFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_exception_Nova_CaughtExceptionFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_exception_Nova_CaughtExceptionFunctionMap_Nova_destroy(nova_exception_Nova_CaughtExceptionFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_exception_Nova_CaughtExceptionFunctionMap_Nova_this(nova_exception_Nova_CaughtExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_exception_Nova_CaughtException* nova_exception_Nova_CaughtExceptionFunctionMap_functionMapCaughtExceptionFunctionMap_static_Nova_construct(nova_exception_Nova_CaughtExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* type, int soft)
{
	soft = (int)(soft == (intptr_t)nova_null ? 1 : soft);
	return nova_exception_Nova_CaughtException_Nova_construct(0, exceptionData, type, soft);
}

void nova_exception_Nova_CaughtExceptionFunctionMap_Nova_super(nova_exception_Nova_CaughtExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

