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



example_ThreadDemoImplementation_Extension_VTable example_ThreadDemoImplementation_Extension_VTable_val =
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
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	example_Nova_ThreadDemoImplementation_Nova_run,
};


CCLASS_PRIVATE
(
	NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_handle;
	
	long_long example_Nova_ThreadDemoImplementation_Nova_millis;
	nova_Nova_String* example_Nova_ThreadDemoImplementation_Nova_word;
	
)
void example_Nova_ThreadDemoImplementation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_ThreadDemoImplementation* example_Nova_ThreadDemoImplementation_Nova_construct(example_Nova_ThreadDemoImplementation* this, nova_exception_Nova_ExceptionData* exceptionData, long_long millis, nova_Nova_String* word)
{
	CCLASS_NEW(example_Nova_ThreadDemoImplementation, this);
	this->vtable = &example_ThreadDemoImplementation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_Nova_Thread_Nova_super((nova_thread_Nova_Thread*)this, exceptionData);
	example_Nova_ThreadDemoImplementation_Nova_super(this, exceptionData);
	
	{
		example_Nova_ThreadDemoImplementation_Nova_this(this, exceptionData, millis, word);
	}
	
	return this;
}

void example_Nova_ThreadDemoImplementation_Nova_destroy(example_Nova_ThreadDemoImplementation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_Nova_String_Nova_destroy(&(*this)->prv->example_Nova_ThreadDemoImplementation_Nova_word, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void example_Nova_ThreadDemoImplementation_Nova_this(example_Nova_ThreadDemoImplementation* this, nova_exception_Nova_ExceptionData* exceptionData, long_long millis, nova_Nova_String* word)
{
	this->prv->example_Nova_ThreadDemoImplementation_Nova_millis = millis;
	this->prv->example_Nova_ThreadDemoImplementation_Nova_word = word;
}

void example_Nova_ThreadDemoImplementation_Nova_run(example_Nova_ThreadDemoImplementation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l2_Nova_i = 0;
	
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)10; l2_Nova_i++)
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, this->prv->example_Nova_ThreadDemoImplementation_Nova_word);
		nova_thread_Nova_Thread_static_Nova_sleep(0, exceptionData, this->prv->example_Nova_ThreadDemoImplementation_Nova_millis);
	}
}

void example_Nova_ThreadDemoImplementation_Nova_super(example_Nova_ThreadDemoImplementation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->example_Nova_ThreadDemoImplementation_Nova_millis = 0;
	this->prv->example_Nova_ThreadDemoImplementation_Nova_word = (nova_Nova_String*)nova_null;
}

