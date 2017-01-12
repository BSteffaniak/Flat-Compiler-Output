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
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/NativeThread.h>
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	example_Nova_ThreadDemoImplementation,
	void (*nova_thread_Nova_Thread_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
	void* nova_thread_Nova_Thread_context_Nova_action;
	void* nova_thread_Nova_Thread_reference_Nova_action;
	NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_handle;
	char nova_thread_Nova_Thread_Nova_useAction;
	
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
	int l3_Nova_i = 0;
	
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)10; l3_Nova_i++)
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, this->prv->example_Nova_ThreadDemoImplementation_Nova_word);
		nova_thread_Nova_Thread_static_Nova_sleep((nova_thread_Nova_Thread*)(this), exceptionData, this->prv->example_Nova_ThreadDemoImplementation_Nova_millis);
	}
}

void example_Nova_ThreadDemoImplementation_Nova_super(example_Nova_ThreadDemoImplementation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->example_Nova_ThreadDemoImplementation_Nova_millis = 0;
	this->prv->example_Nova_ThreadDemoImplementation_Nova_word = (nova_Nova_String*)nova_null;
}

void example_Nova_ThreadDemoImplementationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_ThreadDemoImplementationFunctionMap* example_Nova_ThreadDemoImplementationFunctionMap_Nova_construct(example_Nova_ThreadDemoImplementationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_ThreadDemoImplementationFunctionMap, this,);
	this->vtable = &example_ThreadDemoImplementation_ThreadDemoImplementationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_thread_Nova_ThreadFunctionMap_Nova_super((nova_thread_Nova_ThreadFunctionMap*)this, exceptionData);
	example_Nova_ThreadDemoImplementationFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_ThreadDemoImplementationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_ThreadDemoImplementationFunctionMap_Nova_destroy(example_Nova_ThreadDemoImplementationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_ThreadDemoImplementationFunctionMap_Nova_this(example_Nova_ThreadDemoImplementationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_ThreadDemoImplementation* example_Nova_ThreadDemoImplementationFunctionMap_functionMapThreadDemoImplementationFunctionMap_Nova_construct(example_Nova_ThreadDemoImplementationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long millis, nova_Nova_String* word)
{
	return example_Nova_ThreadDemoImplementation_Nova_construct(0, exceptionData, millis, word);
}

void example_Nova_ThreadDemoImplementationFunctionMap_functionMap_Nova_run(example_Nova_ThreadDemoImplementationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_ThreadDemoImplementation* reference)
{
	example_Nova_ThreadDemoImplementation_Nova_run(reference, exceptionData);
}

void example_Nova_ThreadDemoImplementationFunctionMap_Nova_super(example_Nova_ThreadDemoImplementationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_ThreadDemoImplementationPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_ThreadDemoImplementationPropertyMap* example_Nova_ThreadDemoImplementationPropertyMap_Nova_construct(example_Nova_ThreadDemoImplementationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_ThreadDemoImplementationPropertyMap, this,);
	this->vtable = &example_ThreadDemoImplementation_ThreadDemoImplementationPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_thread_Nova_ThreadPropertyMap_Nova_super((nova_thread_Nova_ThreadPropertyMap*)this, exceptionData);
	example_Nova_ThreadDemoImplementationPropertyMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_ThreadDemoImplementationPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_ThreadDemoImplementationPropertyMap_Nova_destroy(example_Nova_ThreadDemoImplementationPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_ThreadDemoImplementationPropertyMap_Nova_this(example_Nova_ThreadDemoImplementationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_ThreadDemoImplementationPropertyMap_Nova_super(example_Nova_ThreadDemoImplementationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

