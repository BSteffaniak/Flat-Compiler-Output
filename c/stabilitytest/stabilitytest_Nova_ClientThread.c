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
#include <nova/network/nova_network_Nova_ClientSocket.h>
#include <stabilitytest/stabilitytest_Nova_NetworkStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <nova/thread/NativeThread.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



stabilitytest_ClientThread_Extension_VTable stabilitytest_ClientThread_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	stabilitytest_Nova_ClientThread_Nova_run,
};


CCLASS_PRIVATE
(
	NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_handle;
	
	int stabilitytest_Nova_ClientThread_Nova_port;
	stabilitytest_Nova_StabilityTest* stabilitytest_Nova_ClientThread_Nova_program;
	
)
void stabilitytest_Nova_ClientThread_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_ClientThread* stabilitytest_Nova_ClientThread_Nova_construct(stabilitytest_Nova_ClientThread* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program, int port)
{
	CCLASS_NEW(stabilitytest_Nova_ClientThread, this);
	this->vtable = &stabilitytest_ClientThread_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_Nova_Thread_Nova_super((nova_thread_Nova_Thread*)this, exceptionData);
	stabilitytest_Nova_ClientThread_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_ClientThread_Nova_this(this, exceptionData, program, port);
	}
	
	return this;
}

void stabilitytest_Nova_ClientThread_Nova_destroy(stabilitytest_Nova_ClientThread** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	stabilitytest_Nova_StabilityTest_Nova_destroy(&(*this)->prv->stabilitytest_Nova_ClientThread_Nova_program, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ClientThread_Nova_this(stabilitytest_Nova_ClientThread* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program, int port)
{
	this->prv->stabilitytest_Nova_ClientThread_Nova_program = program;
	this->prv->stabilitytest_Nova_ClientThread_Nova_port = port;
}

void stabilitytest_Nova_ClientThread_Nova_run(stabilitytest_Nova_ClientThread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_network_Nova_ClientSocket* l1_Nova_client = (nova_network_Nova_ClientSocket*)nova_null;
	nova_Nova_String* l1_Nova_ip = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_s = (nova_Nova_String*)nova_null;
	
	l1_Nova_client = nova_network_Nova_ClientSocket_Nova_construct(0, exceptionData);
	l1_Nova_ip = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("127.0.0.1"));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ClientSocket attempting to connect to "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_ip)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(":"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->prv->stabilitytest_Nova_ClientThread_Nova_port))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("... ")))))));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->prv->stabilitytest_Nova_ClientThread_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to connect to localhost server")), !nova_network_Nova_ClientSocket_Nova_connect(l1_Nova_client, exceptionData, l1_Nova_ip, this->prv->stabilitytest_Nova_ClientThread_Nova_port));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Waiting for String from ServerSocket... ")));
	l1_Nova_s = (nova_Nova_String*)(nova_io_Nova_InputStream_virtual_Nova_readString((nova_io_Nova_InputStream*)(l1_Nova_client->nova_network_Nova_ClientSocket_Nova_connection->nova_network_Nova_ConnectionSocket_Nova_in), exceptionData));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->prv->stabilitytest_Nova_ClientThread_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Client unable to receive the correct message from server")), l1_Nova_s->nova_Nova_String_Nova_count != stabilitytest_Nova_NetworkStability_Nova_received->nova_Nova_String_Nova_count || !nova_Nova_String_Nova_equals(l1_Nova_s, exceptionData, stabilitytest_Nova_NetworkStability_Nova_received));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Attempting to send String to ServerSocket... ")));
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(l1_Nova_client->nova_network_Nova_ClientSocket_Nova_connection->nova_network_Nova_ConnectionSocket_Nova_out), exceptionData, stabilitytest_Nova_NetworkStability_Nova_received);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Attempting to close ClientSocket... ")));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->prv->stabilitytest_Nova_ClientThread_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to close Client connection")), !nova_network_Nova_ClientSocket_Nova_close(l1_Nova_client, exceptionData));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_ClientThread_Nova_super(stabilitytest_Nova_ClientThread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->stabilitytest_Nova_ClientThread_Nova_port = 0;
	this->prv->stabilitytest_Nova_ClientThread_Nova_program = (stabilitytest_Nova_StabilityTest*)nova_null;
}

