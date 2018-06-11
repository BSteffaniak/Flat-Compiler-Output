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
#include <nova/network/nova_network_Nova_ServerSocket.h>
#include <nova/network/nova_network_Nova_ClientSocket.h>
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <novex/nest/novex_nest_Nova_TestSuite.h>
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundedIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundlessIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_CastStability.h>
#include <stabilitytest/stabilitytest_Nova_ClassWithProperties.h>
#include <stabilitytest/stabilitytest_Nova_ClientThread.h>
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
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context214;


nova_network_Nova_ServerSocket* stabilitytest_Nova_NetworkStability_Nova_createServer(stabilitytest_Nova_NetworkStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated21(stabilitytest_Nova_NetworkStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1);
void stabilitytest_Nova_NetworkStability_Nova_lambda193(stabilitytest_Nova_NetworkStability* this, novex_nest_Nova_TestResult* _1, Context214* context);


nova_network_Nova_ServerSocket* stabilitytest_Nova_NetworkStability_Nova_createServer(stabilitytest_Nova_NetworkStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated21(stabilitytest_Nova_NetworkStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1);
void stabilitytest_Nova_NetworkStability_Nova_lambda193(stabilitytest_Nova_NetworkStability* this, novex_nest_Nova_TestResult* _1, Context214* context);

nova_Nova_String* stabilitytest_Nova_NetworkStability_Nova_received;
int stabilitytest_Nova_NetworkStability_Nova_PORT;
novex_nest_Nova_TestCase* stabilitytest_Nova_NetworkStability_Nova__createServerTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_NetworkStability_Nova__testTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_NetworkStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_NetworkStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_NetworkStability_Nova_init_static()
{
	if (!stabilitytest_Nova_NetworkStability_Nova_init_static_inited) {
		stabilitytest_Nova_NetworkStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_NetworkStability_Nova_received = nova_Nova_String_1_Nova_construct(0,
				(char*)("THIS IS THE STRING THAT SHOULD BE RECEIVEDTHIS IS THE STRING THAT SHOULD BE RECEIVEDTHIS IS THE STRING THAT SHOULD BE RECEIVEDTHIS IS THE STRING THAT SHOULD BE RECEIVEDTHIS IS THE STRING THAT SHOULD BE RECEIVEDTHIS IS THE STRING THAT SHOULD BE RECEIVEDTHIS IS THE STRING THAT SHOULD BE RECEIVED"));
			stabilitytest_Nova_NetworkStability_Nova_PORT = (int)(24243);
			stabilitytest_Nova_NetworkStability_Nova__createServerTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("createServer")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing creating a ServerSocket")));
			stabilitytest_Nova_NetworkStability_Nova__testTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("test")),
			0);
			stabilitytest_Nova_NetworkStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated21(0,
					stabilitytest_Nova_NetworkStability_Nova__createServerTestCase,
				stabilitytest_Nova_NetworkStability_Nova__testTestCase),
			0);
		}
	}
}

stabilitytest_Nova_NetworkStability* stabilitytest_Nova_NetworkStability_Nova_construct(stabilitytest_Nova_NetworkStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_NetworkStability, this,);
	this->vtable = &stabilitytest_Nova_NetworkStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_NetworkStability_Nova_super(this);
	
	return stabilitytest_Nova_NetworkStability_Nova_this((stabilitytest_Nova_NetworkStability*)(this));
}

void stabilitytest_Nova_NetworkStability_Nova_destroy(stabilitytest_Nova_NetworkStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_NetworkStability_Nova_model);
	
	NOVA_FREE(*this);
}

nova_network_Nova_ServerSocket* stabilitytest_Nova_NetworkStability_Nova_createServer(stabilitytest_Nova_NetworkStability* this, nova_io_Nova_OutputStream* out)
{
	nova_network_Nova_ServerSocket* l1_Nova_socket = (nova_network_Nova_ServerSocket*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing creating a ServerSocket ")));
	l1_Nova_socket = nova_network_Nova_ServerSocket_Nova_construct(0);
	novex_nest_Nova_Nest_Nova_toNotBe((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_0_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(nova_Nova_Object*)(nova_network_Nova_ServerSocket_Nova_start((nova_network_Nova_ServerSocket*)(l1_Nova_socket),
		stabilitytest_Nova_NetworkStability_Nova_PORT)))),
		(nova_Nova_Object*)((nova_Nova_Object*)nova_null),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Unable to start server on port "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(stabilitytest_Nova_NetworkStability_Nova_PORT))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool205_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_network_Nova_ServerSocket_Nova_close((nova_network_Nova_ServerSocket*)(l1_Nova_socket)))),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to close server socket on port "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(stabilitytest_Nova_NetworkStability_Nova_PORT))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void stabilitytest_Nova_NetworkStability_Nova_test(stabilitytest_Nova_NetworkStability* this, nova_io_Nova_OutputStream* out)
{
	nova_network_Nova_ServerSocket* l1_Nova_server = (nova_network_Nova_ServerSocket*)nova_null;
	stabilitytest_Nova_ClientThread* l1_Nova_thread = (stabilitytest_Nova_ClientThread*)nova_null;
	nova_network_Nova_ConnectionSocket* l1_Nova_connection = (nova_network_Nova_ConnectionSocket*)nova_null;
	nova_Nova_String* l1_Nova_s = (nova_Nova_String*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing network stability")));
	l1_Nova_server = nova_network_Nova_ServerSocket_Nova_start((nova_network_Nova_ServerSocket*)(nova_network_Nova_ServerSocket_Nova_construct(0)),
	stabilitytest_Nova_NetworkStability_Nova_PORT);
	l1_Nova_thread = stabilitytest_Nova_ClientThread_Nova_construct(0,
		stabilitytest_Nova_NetworkStability_Nova_PORT,
	out);
	nova_thread_Nova_Thread_Nova_start((nova_thread_Nova_Thread*)(l1_Nova_thread));
	nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Accepting ClientSocket connection")));
	l1_Nova_connection = nova_network_Nova_ServerSocket_Nova_acceptClient((nova_network_Nova_ServerSocket*)(l1_Nova_server));
	novex_nest_Nova_Nest_Nova_toNotBe((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_0_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(nova_Nova_Object*)(l1_Nova_connection))),
		(nova_Nova_Object*)((nova_Nova_Object*)nova_null),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to accept the client")));
	nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Sending String to ClientSocket...")));
	novex_nest_Nova_Nest_Nova_toNotBe((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_0_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(nova_Nova_Object*)(nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(l1_Nova_connection->nova_network_Nova_ConnectionSocket_Nova_out),
		stabilitytest_Nova_NetworkStability_Nova_received)))),
		(nova_Nova_Object*)((nova_Nova_Object*)nova_null),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Server unable to send data to client")));
	nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Waiting for String from ClientSocket...")));
	l1_Nova_s = (nova_Nova_String*)(nova_io_Nova_InputStream_virtual_Nova_readString((nova_io_Nova_InputStream*)(l1_Nova_connection->nova_network_Nova_ConnectionSocket_Nova_in)));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool206_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				l1_Nova_s->nova_Nova_String_Nova_count == stabilitytest_Nova_NetworkStability_Nova_received->nova_Nova_String_Nova_count && nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(l1_Nova_s),
					(nova_Nova_Object*)(stabilitytest_Nova_NetworkStability_Nova_received)))),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Server unable to receive correct message from client. Expected message of size "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(stabilitytest_Nova_NetworkStability_Nova_received->nova_Nova_String_Nova_count))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", but received of size "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(l1_Nova_s->nova_Nova_String_Nova_count))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	nova_thread_Nova_Thread_Nova_join((nova_thread_Nova_Thread*)(l1_Nova_thread));
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Attempting to close ServerSocket connection... ")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool207_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_network_Nova_ServerSocket_Nova_close((nova_network_Nova_ServerSocket*)(l1_Nova_server)))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Unable to close server")));
	nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Success")));
}

void stabilitytest_Nova_NetworkStability_Nova_runTests(stabilitytest_Nova_NetworkStability* this, stabilitytest_Nova_NetworkStability_closure891_Nova_onResult stabilitytest_Nova_NetworkStability_Nova_onResult, void* stabilitytest_Nova_NetworkStability_ref_Nova_onResult, void* stabilitytest_Nova_NetworkStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context214* contextArg193 = NOVA_MALLOC(sizeof(Context214));
	nova_time_Nova_Timer* l1_Nova_createServerTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_NetworkStability_Nova_onResult = (stabilitytest_Nova_NetworkStability_closure891_Nova_onResult)(stabilitytest_Nova_NetworkStability_Nova_onResult == 0 ? (stabilitytest_Nova_NetworkStability_closure891_Nova_onResult)&stabilitytest_Nova_NetworkStability_Nova_lambda193 : stabilitytest_Nova_NetworkStability_Nova_onResult);
	stabilitytest_Nova_NetworkStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_NetworkStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_NetworkStability_ref_Nova_onResult);
	stabilitytest_Nova_NetworkStability_context_Nova_onResult = (void*)(stabilitytest_Nova_NetworkStability_context_Nova_onResult == 0 ? (void*)contextArg193 : stabilitytest_Nova_NetworkStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing NetworkStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_createServerTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_NetworkStability_Nova_createServer((stabilitytest_Nova_NetworkStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_createServerTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_createServerTimer,
			stabilitytest_Nova_NetworkStability_Nova__createServerTestCase);
			stabilitytest_Nova_NetworkStability_Nova_onResult(stabilitytest_Nova_NetworkStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_NetworkStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_createServerTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_createServerTimer,
		stabilitytest_Nova_NetworkStability_Nova__createServerTestCase);
		stabilitytest_Nova_NetworkStability_Nova_onResult(stabilitytest_Nova_NetworkStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_NetworkStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_NetworkStability_Nova_test((stabilitytest_Nova_NetworkStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testTimer));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testTimer,
			stabilitytest_Nova_NetworkStability_Nova__testTestCase);
			stabilitytest_Nova_NetworkStability_Nova_onResult(stabilitytest_Nova_NetworkStability_ref_Nova_onResult,
				l42_Nova_testResult,
			stabilitytest_Nova_NetworkStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testTimer));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testTimer,
		stabilitytest_Nova_NetworkStability_Nova__testTestCase);
		stabilitytest_Nova_NetworkStability_Nova_onResult(stabilitytest_Nova_NetworkStability_ref_Nova_onResult,
			l47_Nova_testResult,
		stabilitytest_Nova_NetworkStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_NetworkStability* stabilitytest_Nova_NetworkStability_Nova_this(stabilitytest_Nova_NetworkStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated21(stabilitytest_Nova_NetworkStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 2);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	2);
}

void stabilitytest_Nova_NetworkStability_Nova_lambda193(stabilitytest_Nova_NetworkStability* this, novex_nest_Nova_TestResult* _1, Context214* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_NetworkStability_Accessorfunc_Nova_model(stabilitytest_Nova_NetworkStability* this)
{
	return stabilitytest_Nova_NetworkStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_NetworkStability_Nova_super(stabilitytest_Nova_NetworkStability* this)
{
	this->stabilitytest_Nova_NetworkStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

