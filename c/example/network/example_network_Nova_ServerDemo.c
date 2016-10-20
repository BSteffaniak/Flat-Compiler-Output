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
#include <nova/network/nova_network_Nova_ServerSocket.h>
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <example/network/example_network_Nova_ConnectionThread.h>
#include <example/network/example_network_Nova_OutputThread.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



example_network_ServerDemo_Extension_VTable example_network_ServerDemo_Extension_VTable_val =
{
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


void example_network_Nova_ServerDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_network_Nova_ServerDemo* example_network_Nova_ServerDemo_Nova_construct(example_network_Nova_ServerDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_network_Nova_ServerDemo, this,);
	this->vtable = &example_network_ServerDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_network_Nova_ServerDemo_Nova_super(this, exceptionData);
	
	{
		example_network_Nova_ServerDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_network_Nova_ServerDemo_Nova_destroy(example_network_Nova_ServerDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_network_Nova_ServerDemo_static_Nova_main(example_network_Nova_ServerDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_datastruct_list_Nova_Array* l1_Nova_connections = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_network_Nova_ServerSocket* l1_Nova_socket = (nova_network_Nova_ServerSocket*)nova_null;
	int l1_Nova_port = 0;
	
	l1_Nova_connections = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_socket = nova_network_Nova_ServerSocket_Nova_construct(0, exceptionData);
	l1_Nova_port = (int)(25560);
	if (!nova_network_Nova_ServerSocket_Nova_start(l1_Nova_socket, exceptionData, l1_Nova_port))
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to start server")));
	}
	else
	{
		nova_network_Nova_ConnectionSocket* l2_Nova_request = (nova_network_Nova_ConnectionSocket*)nova_null;
		
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Started server on port "))), exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, l1_Nova_port)));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Waiting on client...")));
		l2_Nova_request = nova_network_Nova_ServerSocket_Nova_acceptClient(l1_Nova_socket, exceptionData);
		if (l2_Nova_request == (nova_network_Nova_ConnectionSocket*)nova_null)
		{
			nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to accept client")));
		}
		while (l2_Nova_request != (nova_network_Nova_ConnectionSocket*)nova_null)
		{
			example_network_Nova_ConnectionThread* l4_Nova_thread = (example_network_Nova_ConnectionThread*)nova_null;
			example_network_Nova_OutputThread* l4_Nova_othread = (example_network_Nova_OutputThread*)nova_null;
			
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_connections), exceptionData, (nova_Nova_Object*)(l2_Nova_request));
			l4_Nova_thread = example_network_Nova_ConnectionThread_Nova_construct(0, exceptionData, l2_Nova_request);
			nova_thread_Nova_Thread_Nova_start((nova_thread_Nova_Thread*)(l4_Nova_thread), exceptionData);
			l4_Nova_othread = example_network_Nova_OutputThread_Nova_construct(0, exceptionData, l1_Nova_socket, l2_Nova_request);
			nova_thread_Nova_Thread_Nova_start((nova_thread_Nova_Thread*)(l4_Nova_othread), exceptionData);
			nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Waiting on anoter")));
			l2_Nova_request = nova_network_Nova_ServerSocket_Nova_acceptClient(l1_Nova_socket, exceptionData);
		}
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Exiting")));
	}
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_network_Nova_ServerDemo_Nova_this(example_network_Nova_ServerDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_network_Nova_ServerDemo_Nova_super(example_network_Nova_ServerDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

