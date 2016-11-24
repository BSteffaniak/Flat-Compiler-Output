#include <precompiled.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_SoftException.h>
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
#include <nova/thread/NativeThread.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



stabilitytest_ThreadImplementation_Extension_VTable stabilitytest_ThreadImplementation_Extension_VTable_val =
{
	0,
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	stabilitytest_Nova_ThreadImplementation_Nova_run,
};


CCLASS_PRIVATE
(
	NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_handle;
	
	int stabilitytest_Nova_ThreadImplementation_Nova_times;
	int stabilitytest_Nova_ThreadImplementation_Nova_millis;
	
)
void stabilitytest_Nova_ThreadImplementation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_ThreadImplementation* stabilitytest_Nova_ThreadImplementation_Nova_construct(stabilitytest_Nova_ThreadImplementation* this, nova_exception_Nova_ExceptionData* exceptionData, int times, int millis)
{
	CCLASS_NEW(stabilitytest_Nova_ThreadImplementation, this);
	this->vtable = &stabilitytest_ThreadImplementation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_Nova_Thread_Nova_super((nova_thread_Nova_Thread*)this, exceptionData);
	stabilitytest_Nova_ThreadImplementation_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_ThreadImplementation_Nova_this(this, exceptionData, times, millis);
	}
	
	return this;
}

void stabilitytest_Nova_ThreadImplementation_Nova_destroy(stabilitytest_Nova_ThreadImplementation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ThreadImplementation_Nova_this(stabilitytest_Nova_ThreadImplementation* this, nova_exception_Nova_ExceptionData* exceptionData, int times, int millis)
{
	this->prv->stabilitytest_Nova_ThreadImplementation_Nova_times = times;
	this->prv->stabilitytest_Nova_ThreadImplementation_Nova_millis = millis;
}

void stabilitytest_Nova_ThreadImplementation_Nova_run(stabilitytest_Nova_ThreadImplementation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l2_Nova_i = 0;
	
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)this->prv->stabilitytest_Nova_ThreadImplementation_Nova_times; l2_Nova_i++)
	{
		nova_thread_Nova_Thread_static_Nova_sleep(0, exceptionData, this->prv->stabilitytest_Nova_ThreadImplementation_Nova_millis);
	}
}

void stabilitytest_Nova_ThreadImplementation_Nova_super(stabilitytest_Nova_ThreadImplementation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->stabilitytest_Nova_ThreadImplementation_Nova_times = 0;
	this->prv->stabilitytest_Nova_ThreadImplementation_Nova_millis = 0;
}

