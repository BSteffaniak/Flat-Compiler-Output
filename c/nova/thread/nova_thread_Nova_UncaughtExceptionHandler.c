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



void nova_thread_Nova_UncaughtExceptionHandler_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_thread_Nova_UncaughtExceptionHandler* nova_thread_Nova_UncaughtExceptionHandler_Nova_construct(nova_thread_Nova_UncaughtExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_thread_Nova_UncaughtExceptionHandler, this,);
	this->vtable = &nova_thread_UncaughtExceptionHandler_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_Nova_UncaughtExceptionHandler_Nova_super(this, exceptionData);
	
	{
		nova_thread_Nova_UncaughtExceptionHandler_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_thread_Nova_UncaughtExceptionHandler_Nova_destroy(nova_thread_Nova_UncaughtExceptionHandler** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_thread_Nova_UncaughtExceptionHandler_Nova_this(nova_thread_Nova_UncaughtExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_thread_Nova_UncaughtExceptionHandler_Nova_uncaughtException(nova_thread_Nova_UncaughtExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread* thread, nova_exception_Nova_Exception* exception)
{
}

void nova_thread_Nova_UncaughtExceptionHandler_Nova_super(nova_thread_Nova_UncaughtExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_thread_Nova_UncaughtExceptionHandler_virtual_Nova_uncaughtException(nova_thread_Nova_UncaughtExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread* thread, nova_exception_Nova_Exception* exception)
{
	this->vtable->nova_thread_Nova_UncaughtExceptionHandler_virtual_Nova_uncaughtException((nova_thread_Nova_UncaughtExceptionHandler*)(this), exceptionData, thread, exception);
}

void nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_thread_Nova_UncaughtExceptionHandlerFunctionMap* nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_construct(nova_thread_Nova_UncaughtExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_thread_Nova_UncaughtExceptionHandlerFunctionMap, this,);
	this->vtable = &nova_thread_UncaughtExceptionHandler_UncaughtExceptionHandlerFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_destroy(nova_thread_Nova_UncaughtExceptionHandlerFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_this(nova_thread_Nova_UncaughtExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_thread_Nova_UncaughtExceptionHandler* nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_functionMapUncaughtExceptionHandlerFunctionMap_Nova_construct(nova_thread_Nova_UncaughtExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_thread_Nova_UncaughtExceptionHandler_Nova_construct(0, exceptionData);
}

void nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_functionMap_Nova_uncaughtException(nova_thread_Nova_UncaughtExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_UncaughtExceptionHandler* reference, nova_thread_Nova_Thread* thread, nova_exception_Nova_Exception* exception)
{
	nova_thread_Nova_UncaughtExceptionHandler_Nova_uncaughtException(reference, exceptionData, thread, exception);
}

void nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_super(nova_thread_Nova_UncaughtExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_virtualfunctionMap_Nova_uncaughtException(nova_thread_Nova_UncaughtExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_UncaughtExceptionHandler* reference, nova_thread_Nova_Thread* thread, nova_exception_Nova_Exception* exception)
{
	this->vtable->nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_virtualfunctionMap_Nova_uncaughtException(this, exceptionData, reference, thread, exception);
}

