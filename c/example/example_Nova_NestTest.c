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
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <novex/nest/novex_nest_Nova_TestSuite.h>
#include <example/example_Nova_Animal.h>
#include <example/example_Nova_ArrayDemo.h>
#include <example/example_Nova_BodyBuilder.h>
#include <example/example_Nova_ClosureDemo.h>
#include <example/example_Nova_Dog.h>
#include <example/example_Nova_ExceptionHandlingDemo.h>
#include <example/example_Nova_FileTest.h>
#include <example/example_Nova_GenericDemo.h>
#include <example/example_Nova_HashMapDemo.h>
#include <example/example_Nova_HashSetDemo.h>
#include <example/example_Nova_IntegerTest.h>
#include <example/example_Nova_Lab.h>
#include <example/example_Nova_MathDemo.h>
#include <example/example_Nova_NonWholeDivisionException.h>
#include <example/example_Nova_Person.h>
#include <example/example_Nova_Polygon.h>
#include <example/example_Nova_PolymorphismDemo.h>
#include <example/example_Nova_QueueDemo.h>
#include <example/example_Nova_Spider.h>
#include <example/example_Nova_Square.h>
#include <example/example_Nova_SvgChart.h>
#include <example/example_Nova_SvgFractal.h>
#include <example/example_Nova_T1.h>
#include <example/example_Nova_T2.h>
#include <example/example_Nova_Test.h>
#include <example/example_Nova_ThreadDemo.h>
#include <example/example_Nova_ThreadDemoImplementation.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context199;


void example_Nova_NestTest_Nova_lambda178(example_Nova_NestTest* this, novex_nest_Nova_TestResult* _1, Context199* context);

void example_Nova_NestTest_Nova_lambda178(example_Nova_NestTest* this, novex_nest_Nova_TestResult* _1, Context199* context);
novex_nest_Nova_TestCase* example_Nova_NestTest_Nova__testPrimitiveComparisonTestCase;
novex_nest_Nova_TestCase* example_Nova_NestTest_Nova__testPrimitiveNotComparisonTestCase;
novex_nest_Nova_TestCase* example_Nova_NestTest_Nova__testNoMessageGivenTestCase;
char example_Nova_NestTest_Nova_init_static_inited = 0;
void example_Nova_NestTest_Nova_init_static()
{
	if (!example_Nova_NestTest_Nova_init_static_inited) {
		example_Nova_NestTest_Nova_init_static_inited = 1;
		{
		}
	}
}

example_Nova_NestTest* example_Nova_NestTest_Nova_construct(example_Nova_NestTest* this)
{
	CCLASS_NEW(example_Nova_NestTest, this,);
	this->vtable = &example_Nova_NestTest_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_Nova_NestTest_Nova_super(this);
	
	return example_Nova_NestTest_Nova_this((example_Nova_NestTest*)(this));
}

void example_Nova_NestTest_Nova_destroy(example_Nova_NestTest** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_NestTest_static_Nova_main(example_Nova_NestTest* this, nova_datastruct_list_Nova_Array* args)
{
	example_Nova_NestTest* l1_Nova_test = (example_Nova_NestTest*)nova_null;
	
	l1_Nova_test = example_Nova_NestTest_Nova_construct(0);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_test),
		0, 0, 0,
	0);
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

void example_Nova_NestTest_Nova_testPrimitiveComparison(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out)
{
	int l1_Nova_x = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing primitive comparison ")));
	l1_Nova_x = (int)(5);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int43_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_x)),
		5,
	0);
}

void example_Nova_NestTest_Nova_testPrimitiveNotComparison(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out)
{
	int l1_Nova_x = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing primitive not comparison ")));
	l1_Nova_x = (int)(5);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toNotBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int44_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_x)),
		6,
	0);
}

void example_Nova_NestTest_Nova_testNoMessageGiven(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing testNoMessageGiven ")));
}

void example_Nova_NestTest_Nova_beforeTest(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("-- Before test --"))));
}

void example_Nova_NestTest_Nova_afterTest(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("-- After test --"))));
}

void example_Nova_NestTest_Nova_beforeClass(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("-- Before test class --"))));
}

void example_Nova_NestTest_Nova_afterClass(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("-- After test class --"))));
}

void example_Nova_NestTest_Nova_runTests(example_Nova_NestTest* this, example_Nova_NestTest_closure517_Nova_onResult example_Nova_NestTest_Nova_onResult, void* example_Nova_NestTest_ref_Nova_onResult, void* example_Nova_NestTest_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context199* contextArg178 = NOVA_MALLOC(sizeof(Context199));
	nova_time_Nova_Timer* l1_Nova_testPrimitiveComparisonTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testPrimitiveNotComparisonTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testNoMessageGivenTimer = (nova_time_Nova_Timer*)nova_null;
	
	example_Nova_NestTest_Nova_onResult = (example_Nova_NestTest_closure517_Nova_onResult)(example_Nova_NestTest_Nova_onResult == 0 ? (example_Nova_NestTest_closure517_Nova_onResult)&example_Nova_NestTest_Nova_lambda178 : example_Nova_NestTest_Nova_onResult);
	example_Nova_NestTest_ref_Nova_onResult = (void*)(example_Nova_NestTest_ref_Nova_onResult == 0 ? (void*)this : example_Nova_NestTest_ref_Nova_onResult);
	example_Nova_NestTest_context_Nova_onResult = (void*)(example_Nova_NestTest_context_Nova_onResult == 0 ? (void*)contextArg178 : example_Nova_NestTest_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing NestTest")),
		0,
		0,
		(int)(intptr_t)nova_null);
	example_Nova_NestTest_Nova_beforeClass((example_Nova_NestTest*)(this),
	out);
	example_Nova_NestTest_Nova_beforeTest((example_Nova_NestTest*)(this),
	out);
	l1_Nova_testPrimitiveComparisonTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l13_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			example_Nova_NestTest_Nova_testPrimitiveComparison((example_Nova_NestTest*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testPrimitiveComparisonTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l13_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testPrimitiveComparisonTimer,
			example_Nova_NestTest_Nova__testPrimitiveComparisonTestCase);
			example_Nova_NestTest_Nova_onResult(example_Nova_NestTest_ref_Nova_onResult,
				l13_Nova_testResult,
			example_Nova_NestTest_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l18_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l18_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l18_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testPrimitiveComparisonTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l18_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l18_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testPrimitiveComparisonTimer,
		example_Nova_NestTest_Nova__testPrimitiveComparisonTestCase);
		example_Nova_NestTest_Nova_onResult(example_Nova_NestTest_ref_Nova_onResult,
			l18_Nova_testResult,
		example_Nova_NestTest_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	example_Nova_NestTest_Nova_afterTest((example_Nova_NestTest*)(this),
	out);
	example_Nova_NestTest_Nova_beforeTest((example_Nova_NestTest*)(this),
	out);
	l1_Nova_testPrimitiveNotComparisonTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l50_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			example_Nova_NestTest_Nova_testPrimitiveNotComparison((example_Nova_NestTest*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testPrimitiveNotComparisonTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l50_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testPrimitiveNotComparisonTimer,
			example_Nova_NestTest_Nova__testPrimitiveNotComparisonTestCase);
			example_Nova_NestTest_Nova_onResult(example_Nova_NestTest_ref_Nova_onResult,
				l50_Nova_testResult,
			example_Nova_NestTest_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l55_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l55_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l55_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testPrimitiveNotComparisonTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l55_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l55_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testPrimitiveNotComparisonTimer,
		example_Nova_NestTest_Nova__testPrimitiveNotComparisonTestCase);
		example_Nova_NestTest_Nova_onResult(example_Nova_NestTest_ref_Nova_onResult,
			l55_Nova_testResult,
		example_Nova_NestTest_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	example_Nova_NestTest_Nova_afterTest((example_Nova_NestTest*)(this),
	out);
	example_Nova_NestTest_Nova_beforeTest((example_Nova_NestTest*)(this),
	out);
	l1_Nova_testNoMessageGivenTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l87_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			example_Nova_NestTest_Nova_testNoMessageGiven((example_Nova_NestTest*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testNoMessageGivenTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l87_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testNoMessageGivenTimer,
			example_Nova_NestTest_Nova__testNoMessageGivenTestCase);
			example_Nova_NestTest_Nova_onResult(example_Nova_NestTest_ref_Nova_onResult,
				l87_Nova_testResult,
			example_Nova_NestTest_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l92_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l92_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l92_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testNoMessageGivenTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l92_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l92_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testNoMessageGivenTimer,
		example_Nova_NestTest_Nova__testNoMessageGivenTestCase);
		example_Nova_NestTest_Nova_onResult(example_Nova_NestTest_ref_Nova_onResult,
			l92_Nova_testResult,
		example_Nova_NestTest_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	example_Nova_NestTest_Nova_afterTest((example_Nova_NestTest*)(this),
	out);
	example_Nova_NestTest_Nova_afterClass((example_Nova_NestTest*)(this),
	out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

example_Nova_NestTest* example_Nova_NestTest_Nova_this(example_Nova_NestTest* this) {
	return this;
}
void example_Nova_NestTest_Nova_lambda178(example_Nova_NestTest* this, novex_nest_Nova_TestResult* _1, Context199* context)
{
}

void example_Nova_NestTest_Nova_super(example_Nova_NestTest* this)
{
}

