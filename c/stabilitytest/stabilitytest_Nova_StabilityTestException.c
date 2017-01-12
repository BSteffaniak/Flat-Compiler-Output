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
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/NativeObject.h>



void stabilitytest_Nova_StabilityTestException_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StabilityTestException* stabilitytest_Nova_StabilityTestException_Nova_construct(stabilitytest_Nova_StabilityTestException* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_StabilityTestException, this,);
	this->vtable = &stabilitytest_StabilityTestException_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_exception_Nova_Exception_Nova_super((nova_exception_Nova_Exception*)this, exceptionData);
	stabilitytest_Nova_StabilityTestException_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StabilityTestException_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_StabilityTestException_Nova_destroy(stabilitytest_Nova_StabilityTestException** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityTestException_Nova_this(stabilitytest_Nova_StabilityTestException* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StabilityTestException_Nova_super(stabilitytest_Nova_StabilityTestException* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StabilityTestExceptionFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StabilityTestExceptionFunctionMap* stabilitytest_Nova_StabilityTestExceptionFunctionMap_Nova_construct(stabilitytest_Nova_StabilityTestExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_StabilityTestExceptionFunctionMap, this,);
	this->vtable = &stabilitytest_StabilityTestException_StabilityTestExceptionFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_exception_Nova_ExceptionFunctionMap_Nova_super((nova_exception_Nova_ExceptionFunctionMap*)this, exceptionData);
	stabilitytest_Nova_StabilityTestExceptionFunctionMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StabilityTestExceptionFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_StabilityTestExceptionFunctionMap_Nova_destroy(stabilitytest_Nova_StabilityTestExceptionFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityTestExceptionFunctionMap_Nova_this(stabilitytest_Nova_StabilityTestExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

stabilitytest_Nova_StabilityTestException* stabilitytest_Nova_StabilityTestExceptionFunctionMap_functionMapStabilityTestExceptionFunctionMap_Nova_construct(stabilitytest_Nova_StabilityTestExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return stabilitytest_Nova_StabilityTestException_Nova_construct(0, exceptionData);
}

void stabilitytest_Nova_StabilityTestExceptionFunctionMap_Nova_super(stabilitytest_Nova_StabilityTestExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StabilityTestExceptionPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StabilityTestExceptionPropertyMap* stabilitytest_Nova_StabilityTestExceptionPropertyMap_Nova_construct(stabilitytest_Nova_StabilityTestExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_StabilityTestExceptionPropertyMap, this,);
	this->vtable = &stabilitytest_StabilityTestException_StabilityTestExceptionPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_exception_Nova_ExceptionPropertyMap_Nova_super((nova_exception_Nova_ExceptionPropertyMap*)this, exceptionData);
	stabilitytest_Nova_StabilityTestExceptionPropertyMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StabilityTestExceptionPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_StabilityTestExceptionPropertyMap_Nova_destroy(stabilitytest_Nova_StabilityTestExceptionPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityTestExceptionPropertyMap_Nova_this(stabilitytest_Nova_StabilityTestExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StabilityTestExceptionPropertyMap_Nova_super(stabilitytest_Nova_StabilityTestExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

