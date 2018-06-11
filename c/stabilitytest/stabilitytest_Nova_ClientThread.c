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
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <nova/network/nova_network_Nova_ClientSocket.h>
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <novex/nest/novex_nest_Nova_TestSuite.h>
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundedIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundlessIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_CastStability.h>
#include <stabilitytest/stabilitytest_Nova_ClassWithProperties.h>
#include <stabilitytest/stabilitytest_Nova_ClosureStability.h>
#include <stabilitytest/stabilitytest_Nova_ExceptionStability.h>
#include <stabilitytest/stabilitytest_Nova_ExternalInnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_FancyOutputStreamTests.h>
#include <stabilitytest/stabilitytest_Nova_FileStability.h>
#include <stabilitytest/stabilitytest_Nova_FirstClassFunctionStability.h>
#include <stabilitytest/stabilitytest_Nova_InnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_IntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_LambdaStability.h>
#include <stabilitytest/stabilitytest_Nova_LibraryLoadingStability.h>
#include <stabilitytest/stabilitytest_Nova_NetworkStability.h>
#include <stabilitytest/stabilitytest_Nova_Node.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSubClass.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSuperClass.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphismStability.h>
#include <stabilitytest/stabilitytest_Nova_PrimitiveOverloadStability.h>
#include <stabilitytest/stabilitytest_Nova_RegexStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityExceptionHandler.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestException.h>
#include <stabilitytest/stabilitytest_Nova_StaticImportStability.h>
#include <stabilitytest/stabilitytest_Nova_SyntaxStability.h>
#include <stabilitytest/stabilitytest_Nova_ThreadImplementation.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <nova/thread/NativeThread.h>
#include <nova/thread/nova_thread_Nova_ThreadLocal.h>
#include <nova/thread/nova_thread_Nova_UncaughtExceptionHandler.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



CCLASS_PRIVATE
(
	stabilitytest_Nova_ClientThread,
	NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_handle;
	/*nova_thread_Nova_Thread_closure1412_Nova_action*/nova_funcStruct* nova_thread_Nova_Thread_Nova_action;
	char nova_thread_Nova_Thread_Nova_useAction;
	
	int stabilitytest_Nova_ClientThread_Nova_port;
	nova_io_Nova_OutputStream* stabilitytest_Nova_ClientThread_Nova_out;
	
)
char stabilitytest_Nova_ClientThread_Nova_init_static_inited = 0;
void stabilitytest_Nova_ClientThread_Nova_init_static()
{
	if (!stabilitytest_Nova_ClientThread_Nova_init_static_inited) {
		stabilitytest_Nova_ClientThread_Nova_init_static_inited = 1;
		{
		}
	}
}

stabilitytest_Nova_ClientThread* stabilitytest_Nova_ClientThread_Nova_construct(stabilitytest_Nova_ClientThread* this, int port, nova_io_Nova_OutputStream* out)
{
	CCLASS_NEW(stabilitytest_Nova_ClientThread, this);
	this->vtable = &stabilitytest_Nova_ClientThread_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	nova_thread_Nova_Thread_Nova_super((nova_thread_Nova_Thread*)this);
	stabilitytest_Nova_ClientThread_Nova_super(this);
	
	return stabilitytest_Nova_ClientThread_Nova_this((stabilitytest_Nova_ClientThread*)(this),
		port,
	out);
}

void stabilitytest_Nova_ClientThread_Nova_destroy(stabilitytest_Nova_ClientThread** this)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

stabilitytest_Nova_ClientThread* stabilitytest_Nova_ClientThread_Nova_this(stabilitytest_Nova_ClientThread* this, int port, nova_io_Nova_OutputStream* out) {
	this->prv->stabilitytest_Nova_ClientThread_Nova_port = port;
	this->prv->stabilitytest_Nova_ClientThread_Nova_out = out;
	return this;
}
void stabilitytest_Nova_ClientThread_Nova_run(stabilitytest_Nova_ClientThread* this)
{
	nova_network_Nova_ClientSocket* l1_Nova_client = (nova_network_Nova_ClientSocket*)nova_null;
	nova_Nova_String* l1_Nova_ip = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_s = (nova_Nova_String*)nova_null;
	
	l1_Nova_client = nova_network_Nova_ClientSocket_Nova_construct(0);
	l1_Nova_ip = nova_Nova_String_1_Nova_construct(0,
		(char*)("127.0.0.1"));
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(this->prv->stabilitytest_Nova_ClientThread_Nova_out),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("ClientSocket attempting to connect to "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_ip)),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(":"))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(this->prv->stabilitytest_Nova_ClientThread_Nova_port))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)("... "))))))))))));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool48_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_network_Nova_ClientSocket_Nova_connect((nova_network_Nova_ClientSocket*)(l1_Nova_client),
					l1_Nova_ip,
		this->prv->stabilitytest_Nova_ClientThread_Nova_port))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to connect to localhost server")));
	nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(this->prv->stabilitytest_Nova_ClientThread_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Success")));
	nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(this->prv->stabilitytest_Nova_ClientThread_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Waiting for String from ServerSocket...")));
	l1_Nova_s = (nova_Nova_String*)(nova_io_Nova_InputStream_virtual_Nova_readString((nova_io_Nova_InputStream*)(l1_Nova_client->nova_network_Nova_ClientSocket_Nova_connection->nova_network_Nova_ConnectionSocket_Nova_in)));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool49_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				l1_Nova_s->nova_Nova_String_Nova_count == stabilitytest_Nova_NetworkStability_Nova_received->nova_Nova_String_Nova_count && nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(l1_Nova_s),
					(nova_Nova_Object*)(stabilitytest_Nova_NetworkStability_Nova_received)))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Client unable to receive the correct message from server")));
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(this->prv->stabilitytest_Nova_ClientThread_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Attempting to send String to ServerSocket... ")));
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(l1_Nova_client->nova_network_Nova_ClientSocket_Nova_connection->nova_network_Nova_ConnectionSocket_Nova_out),
	stabilitytest_Nova_NetworkStability_Nova_received);
	nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(this->prv->stabilitytest_Nova_ClientThread_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Success")));
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(this->prv->stabilitytest_Nova_ClientThread_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Attempting to close ClientSocket... ")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool50_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_network_Nova_ClientSocket_Nova_close((nova_network_Nova_ClientSocket*)(l1_Nova_client)))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Unable to close Client connection")));
	nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(this->prv->stabilitytest_Nova_ClientThread_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Success")));
}

void stabilitytest_Nova_ClientThread_Nova_super(stabilitytest_Nova_ClientThread* this)
{
	this->prv->stabilitytest_Nova_ClientThread_Nova_port = 0;
	this->prv->stabilitytest_Nova_ClientThread_Nova_out = (nova_io_Nova_OutputStream*)nova_null;
}

