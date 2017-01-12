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
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/NativeThread.h>
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	example_network_Nova_ConnectionThread,
	void (*nova_thread_Nova_Thread_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
	void* nova_thread_Nova_Thread_context_Nova_action;
	void* nova_thread_Nova_Thread_reference_Nova_action;
	NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_handle;
	char nova_thread_Nova_Thread_Nova_useAction;
	
	nova_network_Nova_ConnectionSocket* example_network_Nova_ConnectionThread_Nova_socket;
	
)
void example_network_Nova_ConnectionThread_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_network_Nova_ConnectionThread* example_network_Nova_ConnectionThread_Nova_construct(example_network_Nova_ConnectionThread* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_ConnectionSocket* socket)
{
	CCLASS_NEW(example_network_Nova_ConnectionThread, this);
	this->vtable = &example_network_ConnectionThread_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_Nova_Thread_Nova_super((nova_thread_Nova_Thread*)this, exceptionData);
	example_network_Nova_ConnectionThread_Nova_super(this, exceptionData);
	
	{
		example_network_Nova_ConnectionThread_Nova_this(this, exceptionData, socket);
	}
	
	return this;
}

void example_network_Nova_ConnectionThread_Nova_destroy(example_network_Nova_ConnectionThread** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_network_Nova_ConnectionSocket_Nova_destroy(&(*this)->prv->example_network_Nova_ConnectionThread_Nova_socket, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void example_network_Nova_ConnectionThread_Nova_this(example_network_Nova_ConnectionThread* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_ConnectionSocket* socket)
{
	this->prv->example_network_Nova_ConnectionThread_Nova_socket = socket;
}

void example_network_Nova_ConnectionThread_Nova_run(example_network_Nova_ConnectionThread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	while (1)
	{
		nova_Nova_String* l2_Nova_message = (nova_Nova_String*)nova_null;
		
		if (!nova_network_Nova_ConnectionSocket_Nova_validateConnection(this->prv->example_network_Nova_ConnectionThread_Nova_socket, exceptionData))
		{
			nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Disconnected.")));
			break;
		}
		l2_Nova_message = (nova_Nova_String*)(nova_io_Nova_InputStream_virtual_Nova_readString((nova_io_Nova_InputStream*)(this->prv->example_network_Nova_ConnectionThread_Nova_socket->nova_network_Nova_ConnectionSocket_Nova_in), exceptionData));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("HE SAYS: ")), exceptionData, l2_Nova_message)));
	}
}

void example_network_Nova_ConnectionThread_Nova_super(example_network_Nova_ConnectionThread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->example_network_Nova_ConnectionThread_Nova_socket = (nova_network_Nova_ConnectionSocket*)nova_null;
}

void example_network_Nova_ConnectionThreadFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_network_Nova_ConnectionThreadFunctionMap* example_network_Nova_ConnectionThreadFunctionMap_Nova_construct(example_network_Nova_ConnectionThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_network_Nova_ConnectionThreadFunctionMap, this,);
	this->vtable = &example_network_ConnectionThread_ConnectionThreadFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_thread_Nova_ThreadFunctionMap_Nova_super((nova_thread_Nova_ThreadFunctionMap*)this, exceptionData);
	example_network_Nova_ConnectionThreadFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_network_Nova_ConnectionThreadFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_network_Nova_ConnectionThreadFunctionMap_Nova_destroy(example_network_Nova_ConnectionThreadFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_network_Nova_ConnectionThreadFunctionMap_Nova_this(example_network_Nova_ConnectionThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_network_Nova_ConnectionThread* example_network_Nova_ConnectionThreadFunctionMap_functionMapConnectionThreadFunctionMap_Nova_construct(example_network_Nova_ConnectionThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_ConnectionSocket* socket)
{
	return example_network_Nova_ConnectionThread_Nova_construct(0, exceptionData, socket);
}

void example_network_Nova_ConnectionThreadFunctionMap_functionMap_Nova_run(example_network_Nova_ConnectionThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_network_Nova_ConnectionThread* reference)
{
	example_network_Nova_ConnectionThread_Nova_run(reference, exceptionData);
}

void example_network_Nova_ConnectionThreadFunctionMap_Nova_super(example_network_Nova_ConnectionThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_network_Nova_ConnectionThreadPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_network_Nova_ConnectionThreadPropertyMap* example_network_Nova_ConnectionThreadPropertyMap_Nova_construct(example_network_Nova_ConnectionThreadPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_network_Nova_ConnectionThreadPropertyMap, this,);
	this->vtable = &example_network_ConnectionThread_ConnectionThreadPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_thread_Nova_ThreadPropertyMap_Nova_super((nova_thread_Nova_ThreadPropertyMap*)this, exceptionData);
	example_network_Nova_ConnectionThreadPropertyMap_Nova_super(this, exceptionData);
	
	{
		example_network_Nova_ConnectionThreadPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_network_Nova_ConnectionThreadPropertyMap_Nova_destroy(example_network_Nova_ConnectionThreadPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_network_Nova_ConnectionThreadPropertyMap_Nova_this(example_network_Nova_ConnectionThreadPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_network_Nova_ConnectionThreadPropertyMap_Nova_super(example_network_Nova_ConnectionThreadPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

