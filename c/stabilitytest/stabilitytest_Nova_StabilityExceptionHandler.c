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
#include <nova/thread/nova_thread_Nova_UncaughtExceptionHandler.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <nova/thread/nova_thread_Nova_UncaughtExceptionHandler.h>
#include <nova/thread/nova_thread_Nova_UncaughtExceptionHandler.h>
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	stabilitytest_Nova_StabilityExceptionHandler,
	stabilitytest_Nova_StabilityTest* stabilitytest_Nova_StabilityExceptionHandler_Nova_program;
	
)
void stabilitytest_Nova_StabilityExceptionHandler_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StabilityExceptionHandler* stabilitytest_Nova_StabilityExceptionHandler_Nova_construct(stabilitytest_Nova_StabilityExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_StabilityExceptionHandler, this);
	this->vtable = &stabilitytest_StabilityExceptionHandler_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_Nova_UncaughtExceptionHandler_Nova_super((nova_thread_Nova_UncaughtExceptionHandler*)this, exceptionData);
	stabilitytest_Nova_StabilityExceptionHandler_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StabilityExceptionHandler_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_StabilityExceptionHandler_Nova_destroy(stabilitytest_Nova_StabilityExceptionHandler** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	stabilitytest_Nova_StabilityTest_Nova_destroy(&(*this)->prv->stabilitytest_Nova_StabilityExceptionHandler_Nova_program, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityExceptionHandler_Nova_this(stabilitytest_Nova_StabilityExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	this->prv->stabilitytest_Nova_StabilityExceptionHandler_Nova_program = program;
}

void stabilitytest_Nova_StabilityExceptionHandler_Nova_uncaughtException(stabilitytest_Nova_StabilityExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread* thread, nova_exception_Nova_Exception* exception)
{
	stabilitytest_Nova_StabilityTest_Nova_fail(this->prv->stabilitytest_Nova_StabilityExceptionHandler_Nova_program, exceptionData, 0, (intptr_t)nova_null);
}

void stabilitytest_Nova_StabilityExceptionHandler_Nova_super(stabilitytest_Nova_StabilityExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->stabilitytest_Nova_StabilityExceptionHandler_Nova_program = (stabilitytest_Nova_StabilityTest*)nova_null;
}

void stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StabilityExceptionHandlerFunctionMap* stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_Nova_construct(stabilitytest_Nova_StabilityExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_StabilityExceptionHandlerFunctionMap, this,);
	this->vtable = &stabilitytest_StabilityExceptionHandler_StabilityExceptionHandlerFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_super((nova_thread_Nova_UncaughtExceptionHandlerFunctionMap*)this, exceptionData);
	stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_Nova_destroy(stabilitytest_Nova_StabilityExceptionHandlerFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_Nova_this(stabilitytest_Nova_StabilityExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

stabilitytest_Nova_StabilityExceptionHandler* stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_functionMapStabilityExceptionHandlerFunctionMap_Nova_construct(stabilitytest_Nova_StabilityExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	return stabilitytest_Nova_StabilityExceptionHandler_Nova_construct(0, exceptionData, program);
}

void stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_functionMap_Nova_uncaughtException(stabilitytest_Nova_StabilityExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityExceptionHandler* reference, nova_thread_Nova_Thread* thread, nova_exception_Nova_Exception* exception)
{
	stabilitytest_Nova_StabilityExceptionHandler_Nova_uncaughtException(reference, exceptionData, thread, exception);
}

void stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_Nova_super(stabilitytest_Nova_StabilityExceptionHandlerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StabilityExceptionHandlerPropertyMap* stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_Nova_construct(stabilitytest_Nova_StabilityExceptionHandlerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_StabilityExceptionHandlerPropertyMap, this,);
	this->vtable = &stabilitytest_StabilityExceptionHandler_StabilityExceptionHandlerPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_thread_Nova_UncaughtExceptionHandlerPropertyMap_Nova_super((nova_thread_Nova_UncaughtExceptionHandlerPropertyMap*)this, exceptionData);
	stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_Nova_destroy(stabilitytest_Nova_StabilityExceptionHandlerPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_Nova_this(stabilitytest_Nova_StabilityExceptionHandlerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_Nova_super(stabilitytest_Nova_StabilityExceptionHandlerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

