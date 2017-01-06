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
#include <nova/time/nova_time_Nova_Timer.h>
#include <example/example_Nova_ThreadDemoImplementation.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void example_Nova_ThreadDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_ThreadDemo* example_Nova_ThreadDemo_Nova_construct(example_Nova_ThreadDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_ThreadDemo, this,);
	this->vtable = &example_ThreadDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_ThreadDemo_Nova_super(this, exceptionData);
	
	{
		example_Nova_ThreadDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_ThreadDemo_Nova_destroy(example_Nova_ThreadDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_ThreadDemo_static_Nova_main(example_Nova_ThreadDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	char l1_Nova_c = 0;
	
	l1_Nova_c = 'y';
	while (l1_Nova_c == 'y' || l1_Nova_c == 'Y')
	{
		nova_thread_Nova_Thread* l2_Nova_thread = (nova_thread_Nova_Thread*)nova_null;
		nova_thread_Nova_Thread* l2_Nova_thread2 = (nova_thread_Nova_Thread*)nova_null;
		nova_time_Nova_Timer* l2_Nova_timer = (nova_time_Nova_Timer*)nova_null;
		
		l2_Nova_thread = (nova_thread_Nova_Thread*)(example_Nova_ThreadDemoImplementation_Nova_construct(0, exceptionData, 100, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Thread1"))));
		l2_Nova_thread2 = (nova_thread_Nova_Thread*)(example_Nova_ThreadDemoImplementation_Nova_construct(0, exceptionData, 100, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Thread2"))));
		l2_Nova_timer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
		nova_thread_Nova_Thread_Nova_start(l2_Nova_thread, exceptionData);
		nova_thread_Nova_Thread_Nova_start(l2_Nova_thread2, exceptionData);
		nova_thread_Nova_Thread_Nova_join(l2_Nova_thread, exceptionData);
		nova_thread_Nova_Thread_Nova_join(l2_Nova_thread2, exceptionData);
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l2_Nova_timer), exceptionData);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Time taken: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l2_Nova_timer), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))))));
		nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Run again? (Y/N) ")));
		l1_Nova_c = nova_io_Nova_Console_static_Nova_readChar(0, exceptionData);
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\nFinished")));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_ThreadDemo_Nova_this(example_Nova_ThreadDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_ThreadDemo_Nova_super(example_Nova_ThreadDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_ThreadDemoFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_ThreadDemoFunctionMap* example_Nova_ThreadDemoFunctionMap_Nova_construct(example_Nova_ThreadDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_ThreadDemoFunctionMap, this,);
	this->vtable = &example_ThreadDemo_ThreadDemoFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_ThreadDemoFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_ThreadDemoFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_ThreadDemoFunctionMap_Nova_destroy(example_Nova_ThreadDemoFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_ThreadDemoFunctionMap_Nova_this(example_Nova_ThreadDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_ThreadDemo* example_Nova_ThreadDemoFunctionMap_functionMapThreadDemoFunctionMap_Nova_construct(example_Nova_ThreadDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return example_Nova_ThreadDemo_Nova_construct(0, exceptionData);
}

void example_Nova_ThreadDemoFunctionMap_functionMap_static_Nova_main(example_Nova_ThreadDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	example_Nova_ThreadDemo_static_Nova_main(0, exceptionData, args);
}

void example_Nova_ThreadDemoFunctionMap_Nova_super(example_Nova_ThreadDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

