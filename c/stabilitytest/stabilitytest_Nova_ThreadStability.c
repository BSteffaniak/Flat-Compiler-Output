#include <precompiled.h>
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
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <stabilitytest/stabilitytest_Nova_StabilityExceptionHandler.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_ThreadImplementation.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



stabilitytest_ThreadStability_Extension_VTable stabilitytest_ThreadStability_Extension_VTable_val =
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
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	stabilitytest_Nova_ThreadStability_Nova_test,
};



void stabilitytest_Nova_ThreadStability_Nova_createThreads(stabilitytest_Nova_ThreadStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* threads, int amount);
void stabilitytest_Nova_ThreadStability_static_Nova_checkMemoryAccess(stabilitytest_Nova_ThreadStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_ThreadStability_static_Nova_joinThreads(stabilitytest_Nova_ThreadStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* threads, int amount);
void stabilitytest_Nova_ThreadStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_ThreadStability* stabilitytest_Nova_ThreadStability_Nova_construct(stabilitytest_Nova_ThreadStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_ThreadStability, this,);
	this->vtable = &stabilitytest_ThreadStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_ThreadStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_ThreadStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_ThreadStability_Nova_destroy(stabilitytest_Nova_ThreadStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ThreadStability_Nova_this(stabilitytest_Nova_ThreadStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_ThreadStability_Nova_test(stabilitytest_Nova_ThreadStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_threads = (nova_datastruct_list_Nova_Array*)nova_null;
	
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking Thread.nova with 20 Threads... ")));
	l1_Nova_threads = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 20, (intptr_t)nova_null);
	stabilitytest_Nova_ThreadStability_Nova_createThreads(this, exceptionData, l1_Nova_threads, 20);
	stabilitytest_Nova_ThreadStability_static_Nova_checkMemoryAccess(0, exceptionData);
	stabilitytest_Nova_ThreadStability_static_Nova_joinThreads(0, exceptionData, l1_Nova_threads, 20);
}

void stabilitytest_Nova_ThreadStability_Nova_createThreads(stabilitytest_Nova_ThreadStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* threads, int amount)
{
	stabilitytest_Nova_StabilityExceptionHandler* l1_Nova_handler = (stabilitytest_Nova_StabilityExceptionHandler*)nova_null;
	int l2_Nova_i = 0;
	
	l1_Nova_handler = stabilitytest_Nova_StabilityExceptionHandler_Nova_construct(0, exceptionData, this->stabilitytest_Nova_StabilityTestCase_Nova_program);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)amount; l2_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(threads), exceptionData, l2_Nova_i, (nova_Nova_Object*)(stabilitytest_Nova_ThreadImplementation_Nova_construct(0, exceptionData, 10, 10)));
		nova_thread_Nova_Thread_Nova_start((nova_thread_Nova_Thread*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(threads), exceptionData, l2_Nova_i)), exceptionData);
	}
}

void stabilitytest_Nova_ThreadStability_static_Nova_checkMemoryAccess(stabilitytest_Nova_ThreadStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l2_Nova_i = 0;
	
	nova_thread_Nova_Thread_static_Nova_sleep(0, exceptionData, 30);
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking memory access with multi-threading... ")));
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)1000; l2_Nova_i++)
	{
		nova_Nova_String* l2_Nova_s = (nova_Nova_String*)nova_null;
		
		l2_Nova_s = nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, l2_Nova_i);
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_ThreadStability_static_Nova_joinThreads(stabilitytest_Nova_ThreadStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* threads, int amount)
{
	int l2_Nova_i = 0;
	
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)amount; l2_Nova_i++)
	{
		nova_thread_Nova_Thread_Nova_join((nova_thread_Nova_Thread*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(threads), exceptionData, l2_Nova_i)), exceptionData);
	}
}

void stabilitytest_Nova_ThreadStability_Nova_super(stabilitytest_Nova_ThreadStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

