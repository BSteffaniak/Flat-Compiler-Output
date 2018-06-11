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
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileReader.h>
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/time/nova_time_Nova_Time.h>
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
} Context208;


CCLASS_PRIVATE
(
	stabilitytest_Nova_FileStability,
	nova_io_Nova_File* stabilitytest_Nova_FileStability_Nova_f;
	nova_io_Nova_FileWriter* stabilitytest_Nova_FileStability_Nova_writer;
	nova_io_Nova_FileReader* stabilitytest_Nova_FileStability_Nova_reader;
	
)
void stabilitytest_Nova_FileStability_Nova_initClass(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FileStability_Nova_createFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FileStability_Nova_writeToFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FileStability_Nova_readFromFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FileStability_Nova_deleteFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated16(stabilitytest_Nova_FileStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
void stabilitytest_Nova_FileStability_Nova_lambda187(stabilitytest_Nova_FileStability* this, novex_nest_Nova_TestResult* _1, Context208* context);


void stabilitytest_Nova_FileStability_Nova_initClass(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FileStability_Nova_createFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FileStability_Nova_writeToFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FileStability_Nova_readFromFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FileStability_Nova_deleteFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated16(stabilitytest_Nova_FileStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
void stabilitytest_Nova_FileStability_Nova_lambda187(stabilitytest_Nova_FileStability* this, novex_nest_Nova_TestResult* _1, Context208* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_FileStability_Nova__createFileTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FileStability_Nova__writeToFileTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FileStability_Nova__readFromFileTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_FileStability_Nova__runTestsTestRunner;
nova_Nova_String* stabilitytest_Nova_FileStability_Nova_inputString;
int stabilitytest_Nova_FileStability_Nova_lines;
char stabilitytest_Nova_FileStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_FileStability_Nova_init_static()
{
	if (!stabilitytest_Nova_FileStability_Nova_init_static_inited) {
		stabilitytest_Nova_FileStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_FileStability_Nova_inputString = nova_Nova_String_1_Nova_construct(0,
				(char*)("This is test input..."));
			stabilitytest_Nova_FileStability_Nova_lines = (int)(100);
			stabilitytest_Nova_FileStability_Nova__createFileTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("createFile")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing file creation")));
			stabilitytest_Nova_FileStability_Nova__writeToFileTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("writeToFile")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing writing lines of data to file")));
			stabilitytest_Nova_FileStability_Nova__readFromFileTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("readFromFile")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing reading lines from file")));
			stabilitytest_Nova_FileStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated16(0,
					stabilitytest_Nova_FileStability_Nova__createFileTestCase,
					stabilitytest_Nova_FileStability_Nova__writeToFileTestCase,
				stabilitytest_Nova_FileStability_Nova__readFromFileTestCase),
			0);
		}
	}
}

stabilitytest_Nova_FileStability* stabilitytest_Nova_FileStability_Nova_construct(stabilitytest_Nova_FileStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_FileStability, this);
	this->vtable = &stabilitytest_Nova_FileStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_FileStability_Nova_super(this);
	
	return stabilitytest_Nova_FileStability_Nova_this((stabilitytest_Nova_FileStability*)(this));
}

void stabilitytest_Nova_FileStability_Nova_destroy(stabilitytest_Nova_FileStability** this)
{
	if (!*this)
	{
		return;
	}
	
	nova_io_Nova_File_Nova_destroy(&(*this)->prv->stabilitytest_Nova_FileStability_Nova_f);
	nova_io_Nova_FileWriter_Nova_destroy(&(*this)->prv->stabilitytest_Nova_FileStability_Nova_writer);
	nova_io_Nova_FileReader_Nova_destroy(&(*this)->prv->stabilitytest_Nova_FileStability_Nova_reader);
	NOVA_FREE((*this)->prv);
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_FileStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_FileStability_Nova_initClass(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	this->prv->stabilitytest_Nova_FileStability_Nova_f = nova_io_Nova_File_1_Nova_construct(0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("temp"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Time_Accessor_static_Nova_currentTimeMillis((nova_time_Nova_Time*)(0))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	this->prv->stabilitytest_Nova_FileStability_Nova_writer = nova_io_Nova_FileWriter_0_Nova_construct(0,
	this->prv->stabilitytest_Nova_FileStability_Nova_f);
	this->prv->stabilitytest_Nova_FileStability_Nova_reader = nova_io_Nova_FileReader_0_Nova_construct(0,
	this->prv->stabilitytest_Nova_FileStability_Nova_f);
}

void stabilitytest_Nova_FileStability_Nova_createFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing file creation ")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool71_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_io_Nova_FileWriter_Nova_create((nova_io_Nova_FileWriter*)(this->prv->stabilitytest_Nova_FileStability_Nova_writer)))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to create file")));
}

void stabilitytest_Nova_FileStability_Nova_writeToFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing writing lines of data to file ")));
	int l8_Nova_i;
	l8_Nova_i = (int)0;
	for (; l8_Nova_i < (int)stabilitytest_Nova_FileStability_Nova_lines; l8_Nova_i++)
	{
		nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(this->prv->stabilitytest_Nova_FileStability_Nova_writer),
		stabilitytest_Nova_FileStability_Nova_inputString);
	}
}

void stabilitytest_Nova_FileStability_Nova_readFromFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out)
{
	int l1_Nova_times = 0;
	nova_Nova_String* l1_Nova_line = (nova_Nova_String*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing reading lines from file ")));
	if (!nova_io_Nova_FileReader_Accessorfunc_Nova_isOpen((nova_io_Nova_FileReader*)(this->prv->stabilitytest_Nova_FileStability_Nova_reader)))
	{
		nova_io_Nova_FileReader_Nova_open((nova_io_Nova_FileReader*)(this->prv->stabilitytest_Nova_FileStability_Nova_reader));
	}
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool72_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_io_Nova_FileReader_Accessorfunc_Nova_isOpen((nova_io_Nova_FileReader*)(this->prv->stabilitytest_Nova_FileStability_Nova_reader)))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("File reader failed to open")));
	l1_Nova_times = (int)(0);
	l1_Nova_line = nova_io_Nova_FileReader_Nova_readLine((nova_io_Nova_FileReader*)(this->prv->stabilitytest_Nova_FileStability_Nova_reader));
	while ((l1_Nova_line) != (nova_Nova_String*)nova_null)
	{
		novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool73_static_Nova_expect((novex_nest_Nova_Nest*)(this),
					nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(l1_Nova_line),
						(nova_Nova_Object*)(stabilitytest_Nova_FileStability_Nova_inputString)))),
			1,
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("Reading from file failed: '"))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_line)),
							(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
											(char*)("' != '"))),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((stabilitytest_Nova_FileStability_Nova_inputString)),
											(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
													(char*)("'"))))))))))));
		l1_Nova_line = nova_io_Nova_FileReader_Nova_readLine((nova_io_Nova_FileReader*)(this->prv->stabilitytest_Nova_FileStability_Nova_reader));
		l1_Nova_times++;
	}
	nova_io_Nova_FileReader_Nova_close((nova_io_Nova_FileReader*)(this->prv->stabilitytest_Nova_FileStability_Nova_reader));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool74_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_times != stabilitytest_Nova_FileStability_Nova_lines)),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed; only read "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_times))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("/100 lines"))))))));
}

void stabilitytest_Nova_FileStability_Nova_deleteFile(stabilitytest_Nova_FileStability* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool75_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_io_Nova_FileWriter_Nova_delete((nova_io_Nova_FileWriter*)(this->prv->stabilitytest_Nova_FileStability_Nova_writer)))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to delete file")));
}

void stabilitytest_Nova_FileStability_Nova_runTests(stabilitytest_Nova_FileStability* this, stabilitytest_Nova_FileStability_closure529_Nova_onResult stabilitytest_Nova_FileStability_Nova_onResult, void* stabilitytest_Nova_FileStability_ref_Nova_onResult, void* stabilitytest_Nova_FileStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context208* contextArg187 = NOVA_MALLOC(sizeof(Context208));
	nova_time_Nova_Timer* l1_Nova_createFileTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_writeToFileTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_readFromFileTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_FileStability_Nova_onResult = (stabilitytest_Nova_FileStability_closure529_Nova_onResult)(stabilitytest_Nova_FileStability_Nova_onResult == 0 ? (stabilitytest_Nova_FileStability_closure529_Nova_onResult)&stabilitytest_Nova_FileStability_Nova_lambda187 : stabilitytest_Nova_FileStability_Nova_onResult);
	stabilitytest_Nova_FileStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_FileStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_FileStability_ref_Nova_onResult);
	stabilitytest_Nova_FileStability_context_Nova_onResult = (void*)(stabilitytest_Nova_FileStability_context_Nova_onResult == 0 ? (void*)contextArg187 : stabilitytest_Nova_FileStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing FileStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	stabilitytest_Nova_FileStability_Nova_initClass((stabilitytest_Nova_FileStability*)(this),
	out);
	l1_Nova_createFileTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l11_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FileStability_Nova_createFile((stabilitytest_Nova_FileStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_createFileTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l11_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_createFileTimer,
			stabilitytest_Nova_FileStability_Nova__createFileTestCase);
			stabilitytest_Nova_FileStability_Nova_onResult(stabilitytest_Nova_FileStability_ref_Nova_onResult,
				l11_Nova_testResult,
			stabilitytest_Nova_FileStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l16_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l16_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l16_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_createFileTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l16_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l16_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_createFileTimer,
		stabilitytest_Nova_FileStability_Nova__createFileTestCase);
		stabilitytest_Nova_FileStability_Nova_onResult(stabilitytest_Nova_FileStability_ref_Nova_onResult,
			l16_Nova_testResult,
		stabilitytest_Nova_FileStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_writeToFileTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l44_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FileStability_Nova_writeToFile((stabilitytest_Nova_FileStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_writeToFileTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l44_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_writeToFileTimer,
			stabilitytest_Nova_FileStability_Nova__writeToFileTestCase);
			stabilitytest_Nova_FileStability_Nova_onResult(stabilitytest_Nova_FileStability_ref_Nova_onResult,
				l44_Nova_testResult,
			stabilitytest_Nova_FileStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l49_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l49_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l49_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_writeToFileTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l49_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l49_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_writeToFileTimer,
		stabilitytest_Nova_FileStability_Nova__writeToFileTestCase);
		stabilitytest_Nova_FileStability_Nova_onResult(stabilitytest_Nova_FileStability_ref_Nova_onResult,
			l49_Nova_testResult,
		stabilitytest_Nova_FileStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_readFromFileTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l77_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FileStability_Nova_readFromFile((stabilitytest_Nova_FileStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_readFromFileTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l77_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_readFromFileTimer,
			stabilitytest_Nova_FileStability_Nova__readFromFileTestCase);
			stabilitytest_Nova_FileStability_Nova_onResult(stabilitytest_Nova_FileStability_ref_Nova_onResult,
				l77_Nova_testResult,
			stabilitytest_Nova_FileStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l82_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l82_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l82_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_readFromFileTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l82_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l82_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_readFromFileTimer,
		stabilitytest_Nova_FileStability_Nova__readFromFileTestCase);
		stabilitytest_Nova_FileStability_Nova_onResult(stabilitytest_Nova_FileStability_ref_Nova_onResult,
			l82_Nova_testResult,
		stabilitytest_Nova_FileStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	stabilitytest_Nova_FileStability_Nova_deleteFile((stabilitytest_Nova_FileStability*)(this),
	out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_FileStability* stabilitytest_Nova_FileStability_Nova_this(stabilitytest_Nova_FileStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated16(stabilitytest_Nova_FileStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 3);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	3);
}

void stabilitytest_Nova_FileStability_Nova_lambda187(stabilitytest_Nova_FileStability* this, novex_nest_Nova_TestResult* _1, Context208* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_FileStability_Accessorfunc_Nova_model(stabilitytest_Nova_FileStability* this)
{
	return stabilitytest_Nova_FileStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_FileStability_Nova_super(stabilitytest_Nova_FileStability* this)
{
	this->stabilitytest_Nova_FileStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
	this->prv->stabilitytest_Nova_FileStability_Nova_f = (nova_io_Nova_File*)nova_null;
	this->prv->stabilitytest_Nova_FileStability_Nova_writer = (nova_io_Nova_FileWriter*)nova_null;
	this->prv->stabilitytest_Nova_FileStability_Nova_reader = (nova_io_Nova_FileReader*)nova_null;
}

