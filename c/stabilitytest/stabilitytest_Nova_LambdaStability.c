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
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedList.h>
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
#include <stabilitytest/stabilitytest_Nova_FileStability.h>
#include <stabilitytest/stabilitytest_Nova_FirstClassFunctionStability.h>
#include <stabilitytest/stabilitytest_Nova_InnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_IntervalStability.h>
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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context100;
typedef struct
{
} Context101;
typedef struct
{
} Context102;
typedef struct
{
} Context212;


void stabilitytest_Nova_LambdaStability_Nova_testLambdas(stabilitytest_Nova_LambdaStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated20(stabilitytest_Nova_LambdaStability* this, novex_nest_Nova_TestCase* value0);
nova_datastruct_list_Nova_Array* generated54(stabilitytest_Nova_LambdaStability* this);
nova_datastruct_list_Int_Nova_Array1Int* generated55(stabilitytest_Nova_LambdaStability* this);
char stabilitytest_Nova_LambdaStability_Nova_lambda101(stabilitytest_Nova_LambdaStability* this, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context100* context);
nova_Nova_String* stabilitytest_Nova_LambdaStability_Nova_lambda102(stabilitytest_Nova_LambdaStability* this, nova_Nova_String* x, int i, nova_datastruct_list_Nova_Array* _3, Context101* context);
nova_Nova_String* stabilitytest_Nova_LambdaStability_Nova_lambda103(stabilitytest_Nova_LambdaStability* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context102* context);
void stabilitytest_Nova_LambdaStability_Nova_lambda191(stabilitytest_Nova_LambdaStability* this, novex_nest_Nova_TestResult* _1, Context212* context);


void stabilitytest_Nova_LambdaStability_Nova_testLambdas(stabilitytest_Nova_LambdaStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated20(stabilitytest_Nova_LambdaStability* this, novex_nest_Nova_TestCase* value0);
nova_datastruct_list_Nova_Array* generated54(stabilitytest_Nova_LambdaStability* this);
nova_datastruct_list_Int_Nova_Array1Int* generated55(stabilitytest_Nova_LambdaStability* this);
char stabilitytest_Nova_LambdaStability_Nova_lambda101(stabilitytest_Nova_LambdaStability* this, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context100* context);
nova_Nova_String* stabilitytest_Nova_LambdaStability_Nova_lambda102(stabilitytest_Nova_LambdaStability* this, nova_Nova_String* x, int i, nova_datastruct_list_Nova_Array* _3, Context101* context);
nova_Nova_String* stabilitytest_Nova_LambdaStability_Nova_lambda103(stabilitytest_Nova_LambdaStability* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context102* context);
void stabilitytest_Nova_LambdaStability_Nova_lambda191(stabilitytest_Nova_LambdaStability* this, novex_nest_Nova_TestResult* _1, Context212* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_LambdaStability_Nova__testLambdasTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_LambdaStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_LambdaStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_LambdaStability_Nova_init_static()
{
	if (!stabilitytest_Nova_LambdaStability_Nova_init_static_inited) {
		stabilitytest_Nova_LambdaStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_LambdaStability_Nova__testLambdasTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testLambdas")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing lambdas")));
			stabilitytest_Nova_LambdaStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated20(0,
				stabilitytest_Nova_LambdaStability_Nova__testLambdasTestCase),
			0);
		}
	}
}

stabilitytest_Nova_LambdaStability* stabilitytest_Nova_LambdaStability_Nova_construct(stabilitytest_Nova_LambdaStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_LambdaStability, this,);
	this->vtable = &stabilitytest_Nova_LambdaStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_LambdaStability_Nova_super(this);
	
	return stabilitytest_Nova_LambdaStability_Nova_this((stabilitytest_Nova_LambdaStability*)(this));
}

void stabilitytest_Nova_LambdaStability_Nova_destroy(stabilitytest_Nova_LambdaStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_LambdaStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_LambdaStability_Nova_testLambdas(stabilitytest_Nova_LambdaStability* this, nova_io_Nova_OutputStream* out)
{
	Context100* contextArg101 = NOVA_MALLOC(sizeof(Context100));
	Context101* contextArg102 = NOVA_MALLOC(sizeof(Context101));
	Context102* contextArg103 = NOVA_MALLOC(sizeof(Context102));
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Int_Nova_Array1Int* l1_Nova_list2 = (nova_datastruct_list_Int_Nova_Array1Int*)nova_null;
	nova_Nova_String* l1_Nova_mappedOutput = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_mappedExpected = (nova_Nova_String*)nova_null;
	nova_datastruct_list_Nova_LinkedList* l1_Nova_linked = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_repeated = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing lambdas ")));
	l1_Nova_list = generated54((stabilitytest_Nova_LambdaStability*)(this));
	l1_Nova_list2 = generated55((stabilitytest_Nova_LambdaStability*)(this));
	l1_Nova_mappedOutput = (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list),
							(nova_datastruct_list_Nova_List_closure1340_Nova_filterFunc)&stabilitytest_Nova_LambdaStability_Nova_lambda101, this, contextArg101)),
					(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&stabilitytest_Nova_LambdaStability_Nova_lambda102, this, contextArg102)),
			nova_Nova_String_1_Nova_construct(0,
				(char*)(", "))));
	l1_Nova_mappedExpected = nova_Nova_String_1_Nova_construct(0,
		(char*)("0: this?, 1: test?, 2: what shows up?"));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool201_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(l1_Nova_mappedOutput),
					(nova_Nova_Object*)(l1_Nova_mappedExpected)))),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed first list map with 2 args. Expected '"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_mappedExpected)),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("' but received '"))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_mappedOutput)),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)("'"))))))))))));
	l1_Nova_linked = nova_datastruct_list_Nova_LinkedList_Nova_construct(0);
	nova_datastruct_list_Nova_LinkedList_Nova_add((nova_datastruct_list_Nova_LinkedList*)(nova_datastruct_list_Nova_LinkedList_Nova_add((nova_datastruct_list_Nova_LinkedList*)(nova_datastruct_list_Nova_LinkedList_Nova_add((nova_datastruct_list_Nova_LinkedList*)(l1_Nova_linked),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("test"))))),
				(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("test2"))))),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test3"))));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool202_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(l1_Nova_linked))),
							nova_Nova_String_1_Nova_construct(0,
								(char*)(", ")))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("test3, test2, test")))))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed reverse linked list")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool203_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l1_Nova_linked),
							nova_Nova_String_1_Nova_construct(0,
								(char*)(", ")))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("test, test2, test3")))))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed forward linked list")));
	l1_Nova_repeated = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list),
			(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&stabilitytest_Nova_LambdaStability_Nova_lambda103, this, contextArg103));
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessorfunc_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l1_Nova_repeated))));
	nova_Nova_String* l68_Nova_item;
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessorfunc_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0)))
	{
		l68_Nova_item = (nova_Nova_String*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0)));
		novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool204_static_Nova_expect((novex_nest_Nova_Nest*)(this),
					nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(l68_Nova_item),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("test")))))),
			1,
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Map with no arguments failed")));
	}
}

void stabilitytest_Nova_LambdaStability_Nova_runTests(stabilitytest_Nova_LambdaStability* this, stabilitytest_Nova_LambdaStability_closure889_Nova_onResult stabilitytest_Nova_LambdaStability_Nova_onResult, void* stabilitytest_Nova_LambdaStability_ref_Nova_onResult, void* stabilitytest_Nova_LambdaStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context212* contextArg191 = NOVA_MALLOC(sizeof(Context212));
	nova_time_Nova_Timer* l1_Nova_testLambdasTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_LambdaStability_Nova_onResult = (stabilitytest_Nova_LambdaStability_closure889_Nova_onResult)(stabilitytest_Nova_LambdaStability_Nova_onResult == 0 ? (stabilitytest_Nova_LambdaStability_closure889_Nova_onResult)&stabilitytest_Nova_LambdaStability_Nova_lambda191 : stabilitytest_Nova_LambdaStability_Nova_onResult);
	stabilitytest_Nova_LambdaStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_LambdaStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_LambdaStability_ref_Nova_onResult);
	stabilitytest_Nova_LambdaStability_context_Nova_onResult = (void*)(stabilitytest_Nova_LambdaStability_context_Nova_onResult == 0 ? (void*)contextArg191 : stabilitytest_Nova_LambdaStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing LambdaStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_testLambdasTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_LambdaStability_Nova_testLambdas((stabilitytest_Nova_LambdaStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testLambdasTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testLambdasTimer,
			stabilitytest_Nova_LambdaStability_Nova__testLambdasTestCase);
			stabilitytest_Nova_LambdaStability_Nova_onResult(stabilitytest_Nova_LambdaStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_LambdaStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testLambdasTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testLambdasTimer,
		stabilitytest_Nova_LambdaStability_Nova__testLambdasTestCase);
		stabilitytest_Nova_LambdaStability_Nova_onResult(stabilitytest_Nova_LambdaStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_LambdaStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_LambdaStability* stabilitytest_Nova_LambdaStability_Nova_this(stabilitytest_Nova_LambdaStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated20(stabilitytest_Nova_LambdaStability* this, novex_nest_Nova_TestCase* value0)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	1);
}

nova_datastruct_list_Nova_Array* generated54(stabilitytest_Nova_LambdaStability* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 7);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("this"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("is"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("a"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0,
		(char*)("test"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0,
		(char*)("to"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0,
		(char*)("see"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0,
		(char*)("what shows up"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	7);
}

nova_datastruct_list_Int_Nova_Array1Int* generated55(stabilitytest_Nova_LambdaStability* this)
{
	int* l1_Nova_temp = (int*)nova_null;
	
	l1_Nova_temp = (int*)NOVA_MALLOC(sizeof(int) * 7);
	l1_Nova_temp[0] = (int)(1);
	l1_Nova_temp[1] = (int)(2);
	l1_Nova_temp[2] = (int)(3);
	l1_Nova_temp[3] = (int)(4);
	l1_Nova_temp[4] = (int)(5);
	l1_Nova_temp[5] = (int)(6);
	l1_Nova_temp[6] = (int)(7);
	return nova_datastruct_list_Int_Nova_Array1Int_Int_int_Array1Int2_Nova_construct(0,
		l1_Nova_temp,
	7);
}

char stabilitytest_Nova_LambdaStability_Nova_lambda101(stabilitytest_Nova_LambdaStability* this, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context100* context)
{
	return x->nova_Nova_String_Nova_count >= 4;
}

nova_Nova_String* stabilitytest_Nova_LambdaStability_Nova_lambda102(stabilitytest_Nova_LambdaStability* this, nova_Nova_String* x, int i, nova_datastruct_list_Nova_Array* _3, Context101* context)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
		i)),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)(": "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(x),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("?"))))))));
}

nova_Nova_String* stabilitytest_Nova_LambdaStability_Nova_lambda103(stabilitytest_Nova_LambdaStability* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context102* context)
{
	return nova_Nova_String_1_Nova_construct(0,
		(char*)("test"));
}

void stabilitytest_Nova_LambdaStability_Nova_lambda191(stabilitytest_Nova_LambdaStability* this, novex_nest_Nova_TestResult* _1, Context212* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_LambdaStability_Accessorfunc_Nova_model(stabilitytest_Nova_LambdaStability* this)
{
	return stabilitytest_Nova_LambdaStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_LambdaStability_Nova_super(stabilitytest_Nova_LambdaStability* this)
{
	this->stabilitytest_Nova_LambdaStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

