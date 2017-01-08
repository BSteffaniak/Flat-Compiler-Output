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



void nova_thread_async_Nova_Async_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_thread_async_Nova_Async* nova_thread_async_Nova_Async_Nova_construct(nova_thread_async_Nova_Async* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_thread_async_Nova_Async, this,);
	this->vtable = &nova_thread_async_Async_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_async_Nova_Async_Nova_super(this, exceptionData);
	
	{
		nova_thread_async_Nova_Async_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_thread_async_Nova_Async_Nova_destroy(nova_thread_async_Nova_Async** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

nova_thread_async_Nova_Task* nova_thread_async_Nova_Async_static_Nova_execute(nova_thread_async_Nova_Async* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_async_Nova_Async_closure4_Nova_func nova_thread_async_Nova_Async_Nova_func, void* nova_thread_async_Nova_Async_ref_Nova_func, void* func_context)
{
	nova_thread_Nova_Thread* l1_Nova_thread = (nova_thread_Nova_Thread*)nova_null;
	nova_thread_async_Nova_Task* l1_Nova_task = (nova_thread_async_Nova_Task*)nova_null;
	
	l1_Nova_thread = nova_thread_Nova_Thread_1_Nova_construct(0, exceptionData, (nova_thread_Nova_Thread_closure4_Nova_action)nova_thread_async_Nova_Async_Nova_func, nova_thread_async_Nova_Async_ref_Nova_func, func_context);
	l1_Nova_task = nova_thread_async_Nova_Task_Nova_construct(0, exceptionData, l1_Nova_thread);
	nova_thread_Nova_Thread_Nova_start(l1_Nova_thread, exceptionData);
	return l1_Nova_task;
}

nova_thread_async_Nova_Task* nova_thread_async_Nova_Async_static_Nova_request(nova_thread_async_Nova_Async* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_async_Nova_Async_closure8_Nova_func nova_thread_async_Nova_Async_Nova_func, void* nova_thread_async_Nova_Async_ref_Nova_func, void* func_context)
{
	nova_thread_Nova_Thread* l1_Nova_thread = (nova_thread_Nova_Thread*)nova_null;
	nova_thread_async_Nova_Task* l1_Nova_task = (nova_thread_async_Nova_Task*)nova_null;
	
	l1_Nova_thread = nova_thread_Nova_Thread_1_Nova_construct(0, exceptionData, (nova_thread_Nova_Thread_closure4_Nova_action)nova_thread_async_Nova_Async_Nova_func, nova_thread_async_Nova_Async_ref_Nova_func, func_context);
	l1_Nova_task = nova_thread_async_Nova_Task_Nova_construct(0, exceptionData, l1_Nova_thread);
	nova_thread_Nova_Thread_Nova_start(l1_Nova_thread, exceptionData);
	return l1_Nova_task;
}

void nova_thread_async_Nova_Async_Nova_this(nova_thread_async_Nova_Async* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_thread_async_Nova_Async_Nova_super(nova_thread_async_Nova_Async* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_thread_async_Nova_AsyncFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_thread_async_Nova_AsyncFunctionMap* nova_thread_async_Nova_AsyncFunctionMap_Nova_construct(nova_thread_async_Nova_AsyncFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_thread_async_Nova_AsyncFunctionMap, this,);
	this->vtable = &nova_thread_async_Async_AsyncFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_thread_async_Nova_AsyncFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_thread_async_Nova_AsyncFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_thread_async_Nova_AsyncFunctionMap_Nova_destroy(nova_thread_async_Nova_AsyncFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_thread_async_Nova_AsyncFunctionMap_Nova_this(nova_thread_async_Nova_AsyncFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_thread_async_Nova_Async* nova_thread_async_Nova_AsyncFunctionMap_functionMapAsyncFunctionMap_Nova_construct(nova_thread_async_Nova_AsyncFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_thread_async_Nova_Async_Nova_construct(0, exceptionData);
}

nova_thread_async_Nova_Task* nova_thread_async_Nova_AsyncFunctionMap_functionMap_static_Nova_execute(nova_thread_async_Nova_AsyncFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_async_Nova_AsyncFunctionMap_closure9_Nova_func nova_thread_async_Nova_AsyncFunctionMap_Nova_func, void* nova_thread_async_Nova_AsyncFunctionMap_ref_Nova_func, void* func_context)
{
	return nova_thread_async_Nova_Async_static_Nova_execute(0, exceptionData, (nova_thread_async_Nova_Async_closure4_Nova_func)nova_thread_async_Nova_AsyncFunctionMap_Nova_func, nova_thread_async_Nova_AsyncFunctionMap_ref_Nova_func, func_context);
}

nova_thread_async_Nova_Task* nova_thread_async_Nova_AsyncFunctionMap_functionMap_static_Nova_request(nova_thread_async_Nova_AsyncFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_async_Nova_AsyncFunctionMap_closure10_Nova_func nova_thread_async_Nova_AsyncFunctionMap_Nova_func, void* nova_thread_async_Nova_AsyncFunctionMap_ref_Nova_func, void* func_context)
{
	return nova_thread_async_Nova_Async_static_Nova_request(0, exceptionData, (nova_thread_async_Nova_Async_closure8_Nova_func)nova_thread_async_Nova_AsyncFunctionMap_Nova_func, nova_thread_async_Nova_AsyncFunctionMap_ref_Nova_func, func_context);
}

void nova_thread_async_Nova_AsyncFunctionMap_Nova_super(nova_thread_async_Nova_AsyncFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

