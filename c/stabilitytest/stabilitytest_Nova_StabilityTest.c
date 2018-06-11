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
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FancyOutputStream.h>
#include <nova/star/nova_star_Nova_Button.h>
#include <nova/star/nova_star_Nova_Label.h>
#include <nova/star/nova_star_Nova_Panel.h>
#include <nova/star/nova_star_Nova_Color.h>
#include <nova/star/nova_star_Nova_ScrollBar.h>
#include <novex/nest/ui/novex_nest_ui_Nova_ResultWindow.h>
#include <novex/nest/ui/novex_nest_ui_Nova_ResultBar.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
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
#include <stabilitytest/stabilitytest_Nova_NetworkStability.h>
#include <stabilitytest/stabilitytest_Nova_Node.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSubClass.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSuperClass.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphismStability.h>
#include <stabilitytest/stabilitytest_Nova_PrimitiveOverloadStability.h>
#include <stabilitytest/stabilitytest_Nova_RegexStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityExceptionHandler.h>
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
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_TestSuiteRunnerModel.h>
#include <novex/nest/novex_nest_Nova_TestSuite.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
	/* let
	Array<TestResult> results */ nova_datastruct_list_Nova_Array** stabilitytest_Nova_StabilityTest_Nova_results;
} Context129;
typedef struct
{
} Context130;
typedef struct
{
} Context131;
typedef struct
{
} Context218;


nova_datastruct_list_Nova_Array* generated25(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestRunnerModel* value0, novex_nest_Nova_TestRunnerModel* value1, novex_nest_Nova_TestRunnerModel* value2, novex_nest_Nova_TestRunnerModel* value3);
nova_datastruct_list_Nova_Array* generated26(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestRunnerModel* value0, novex_nest_Nova_TestRunnerModel* value1, novex_nest_Nova_TestRunnerModel* value2, novex_nest_Nova_TestRunnerModel* value3, novex_nest_Nova_TestRunnerModel* value4, novex_nest_Nova_TestRunnerModel* value5, novex_nest_Nova_TestRunnerModel* value6, novex_nest_Nova_TestRunnerModel* value7, novex_nest_Nova_TestRunnerModel* value8, novex_nest_Nova_TestRunnerModel* value9, novex_nest_Nova_TestRunnerModel* value10, novex_nest_Nova_TestRunnerModel* value11, novex_nest_Nova_TestRunnerModel* value12, novex_nest_Nova_TestRunnerModel* value13, novex_nest_Nova_TestRunnerModel* value14, novex_nest_Nova_TestRunnerModel* value15, novex_nest_Nova_TestRunnerModel* value16, novex_nest_Nova_TestRunnerModel* value17, novex_nest_Nova_TestRunnerModel* value18);
nova_datastruct_list_Nova_Array* generated27(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestSuite* value0, novex_nest_Nova_TestSuite* value1);
void stabilitytest_Nova_StabilityTest_static_Nova_lambda108(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* result, Context129* context);
char stabilitytest_Nova_StabilityTest_static_Nova_lambda109(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context130* context);
void stabilitytest_Nova_StabilityTest_static_Nova_lambda110(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context131* context);
void stabilitytest_Nova_StabilityTest_Nova_lambda197(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* _1, Context218* context);


nova_datastruct_list_Nova_Array* generated25(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestRunnerModel* value0, novex_nest_Nova_TestRunnerModel* value1, novex_nest_Nova_TestRunnerModel* value2, novex_nest_Nova_TestRunnerModel* value3);
nova_datastruct_list_Nova_Array* generated26(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestRunnerModel* value0, novex_nest_Nova_TestRunnerModel* value1, novex_nest_Nova_TestRunnerModel* value2, novex_nest_Nova_TestRunnerModel* value3, novex_nest_Nova_TestRunnerModel* value4, novex_nest_Nova_TestRunnerModel* value5, novex_nest_Nova_TestRunnerModel* value6, novex_nest_Nova_TestRunnerModel* value7, novex_nest_Nova_TestRunnerModel* value8, novex_nest_Nova_TestRunnerModel* value9, novex_nest_Nova_TestRunnerModel* value10, novex_nest_Nova_TestRunnerModel* value11, novex_nest_Nova_TestRunnerModel* value12, novex_nest_Nova_TestRunnerModel* value13, novex_nest_Nova_TestRunnerModel* value14, novex_nest_Nova_TestRunnerModel* value15, novex_nest_Nova_TestRunnerModel* value16, novex_nest_Nova_TestRunnerModel* value17, novex_nest_Nova_TestRunnerModel* value18);
nova_datastruct_list_Nova_Array* generated27(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestSuite* value0, novex_nest_Nova_TestSuite* value1);
void stabilitytest_Nova_StabilityTest_static_Nova_lambda108(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* result, Context129* context);
char stabilitytest_Nova_StabilityTest_static_Nova_lambda109(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context130* context);
void stabilitytest_Nova_StabilityTest_static_Nova_lambda110(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context131* context);
void stabilitytest_Nova_StabilityTest_Nova_lambda197(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* _1, Context218* context);

novex_nest_Nova_TestSuiteRunnerModel* stabilitytest_Nova_StabilityTest_Nova__runTestsTestSuite;
char stabilitytest_Nova_StabilityTest_Nova_init_static_inited = 0;
void stabilitytest_Nova_StabilityTest_Nova_init_static()
{
	if (!stabilitytest_Nova_StabilityTest_Nova_init_static_inited) {
		stabilitytest_Nova_StabilityTest_Nova_init_static_inited = 1;
		novex_nest_Nova_TestSuiteRunnerModel_Nova_init_static();
		novex_nest_Nova_TestSuite_Nova_init_static();
		stabilitytest_Nova_TimeStability_Nova_init_static();
		stabilitytest_Nova_ThreadStability_Nova_init_static();
		stabilitytest_Nova_FileStability_Nova_init_static();
		stabilitytest_Nova_NetworkStability_Nova_init_static();
		stabilitytest_Nova_ExceptionStability_Nova_init_static();
		stabilitytest_Nova_SyntaxStability_Nova_init_static();
		stabilitytest_Nova_ClosureStability_Nova_init_static();
		stabilitytest_Nova_PolymorphismStability_Nova_init_static();
		stabilitytest_Nova_LambdaStability_Nova_init_static();
		stabilitytest_Nova_ToStringStability_Nova_init_static();
		stabilitytest_Nova_AssignmentStability_Nova_init_static();
		stabilitytest_Nova_RegexStability_Nova_init_static();
		stabilitytest_Nova_StaticImportStability_Nova_init_static();
		stabilitytest_Nova_InnerClassStability_Nova_init_static();
		stabilitytest_Nova_ExternalInnerClassStability_Nova_init_static();
		stabilitytest_Nova_PrimitiveOverloadStability_Nova_init_static();
		stabilitytest_Nova_FancyOutputStreamTests_Nova_init_static();
		stabilitytest_Nova_FirstClassFunctionStability_Nova_init_static();
		stabilitytest_Nova_LibraryLoadingStability_Nova_init_static();
		stabilitytest_Nova_IntervalStability_Nova_init_static();
		stabilitytest_Nova_BoundedIntervalStability_Nova_init_static();
		stabilitytest_Nova_BoundlessIntervalStability_Nova_init_static();
		stabilitytest_Nova_CastStability_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_StabilityTest_Nova__runTestsTestSuite = novex_nest_Nova_TestSuiteRunnerModel_Nova_construct(0,
				generated27(0,
					novex_nest_Nova_TestSuite_Nova_construct(0,
						(nova_datastruct_list_Nova_Array*)(generated25(0,
								stabilitytest_Nova_TimeStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_ThreadStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_FileStability_Nova__runTestsTestRunner,
					stabilitytest_Nova_NetworkStability_Nova__runTestsTestRunner))),
					novex_nest_Nova_TestSuite_Nova_construct(0,
						(nova_datastruct_list_Nova_Array*)(generated26(0,
								stabilitytest_Nova_ExceptionStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_SyntaxStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_ClosureStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_PolymorphismStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_LambdaStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_ToStringStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_AssignmentStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_RegexStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_StaticImportStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_InnerClassStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_ExternalInnerClassStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_PrimitiveOverloadStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_FancyOutputStreamTests_Nova__runTestsTestRunner,
								stabilitytest_Nova_FirstClassFunctionStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_LibraryLoadingStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_IntervalStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_BoundedIntervalStability_Nova__runTestsTestRunner,
								stabilitytest_Nova_BoundlessIntervalStability_Nova__runTestsTestRunner,
			stabilitytest_Nova_CastStability_Nova__runTestsTestRunner)))));
		}
	}
}

stabilitytest_Nova_StabilityTest* stabilitytest_Nova_StabilityTest_Nova_construct(stabilitytest_Nova_StabilityTest* this)
{
	CCLASS_NEW(stabilitytest_Nova_StabilityTest, this,);
	this->vtable = &stabilitytest_Nova_StabilityTest_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_StabilityTest_Nova_super(this);
	
	return stabilitytest_Nova_StabilityTest_Nova_this((stabilitytest_Nova_StabilityTest*)(this));
}

void stabilitytest_Nova_StabilityTest_Nova_destroy(stabilitytest_Nova_StabilityTest** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_StabilityTest_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityTest_static_Nova_main(stabilitytest_Nova_StabilityTest* this, nova_datastruct_list_Nova_Array* args)
{
	Context129* contextArg108 = NOVA_MALLOC(sizeof(Context129));
	Context130* contextArg109 = NOVA_MALLOC(sizeof(Context130));
	Context131* contextArg110 = NOVA_MALLOC(sizeof(Context131));
	stabilitytest_Nova_StabilityTest* l1_Nova_test = (stabilitytest_Nova_StabilityTest*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_results = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array** heap129_0 = (nova_datastruct_list_Nova_Array**)NOVA_MALLOC(sizeof(nova_datastruct_list_Nova_Array*));
	*heap129_0 = l1_Nova_results;
	contextArg108->stabilitytest_Nova_StabilityTest_Nova_results = heap129_0;
	nova_io_Nova_FancyOutputStream* l1_Nova_fancy = (nova_io_Nova_FancyOutputStream*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_unsucessful = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_test = stabilitytest_Nova_StabilityTest_Nova_construct(0);
	(*heap129_0) = nova_datastruct_list_Nova_Array_0_Nova_construct(0);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_test),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)&stabilitytest_Nova_StabilityTest_static_Nova_lambda108, nova_null, contextArg108,
	0);
	l1_Nova_fancy = nova_io_Nova_FancyOutputStream_Nova_construct(0,
		0,
		(int)(intptr_t)nova_null,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("/\\")));
	l1_Nova_unsucessful = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual1_Nova_filter((nova_datastruct_list_Nova_List*)((*heap129_0)),
			(nova_datastruct_list_Nova_List_closure1340_Nova_filterFunc)&stabilitytest_Nova_StabilityTest_static_Nova_lambda109, nova_null, contextArg109));
	if (nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_unsucessful)) > 0)
	{
		nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(l1_Nova_fancy),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
							(nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_unsucessful))))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
									(char*)(" Failure"))),
							(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_unsucessful)) == 1 ? nova_Nova_String_1_Nova_construct(0,
													(char*)("")) : nova_Nova_String_1_Nova_construct(0,
													(char*)("s"))))),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" out of "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
															(nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)((*heap129_0)))))),
													(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
																	(char*)(" test"))),
															(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)((*heap129_0))) == 1 ? nova_Nova_String_1_Nova_construct(0,
																					(char*)("")) : nova_Nova_String_1_Nova_construct(0,
																					(char*)("s"))))),
																	(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																			(char*)(""))))))))))))))))),
			nova_Nova_String_1_Nova_construct(0,
				(char*)(":'( ")),
			0,
		1);
		nova_datastruct_list_Nova_List_virtual1_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_unsucessful),
			(nova_datastruct_list_Nova_List_closure1336_Nova_func)&stabilitytest_Nova_StabilityTest_static_Nova_lambda110, nova_null, contextArg110);
	}
	else
	{
		nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(l1_Nova_fancy),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("All "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)((*heap129_0)))))),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)(" Successful"))))))),
			nova_Nova_String_1_Nova_construct(0,
				(char*)(":) ")),
		0,
	1);
}
nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(l1_Nova_fancy),
	nova_Nova_String_1_Nova_construct(0,
		(char*)("Hello")),
	nova_Nova_String_1_Nova_construct(0,
		(char*)("=")),
	0,
	(int)(intptr_t)nova_null);
nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(l1_Nova_fancy),
	nova_Nova_String_1_Nova_construct(0,
		(char*)("Hello")),
	0,
	0,
	(int)(intptr_t)nova_null);
nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(l1_Nova_fancy),
	nova_Nova_String_1_Nova_construct(0,
		(char*)("hi")));
nova_io_Nova_OutputStream_virtual_Nova_writeLine((nova_io_Nova_OutputStream*)(l1_Nova_fancy),
	nova_Nova_String_1_Nova_construct(0,
		(char*)("!!!")));
nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));}

void stabilitytest_Nova_StabilityTest_Nova_runTests(stabilitytest_Nova_StabilityTest* this, stabilitytest_Nova_StabilityTest_closure896_Nova_onResult stabilitytest_Nova_StabilityTest_Nova_onResult, void* stabilitytest_Nova_StabilityTest_ref_Nova_onResult, void* stabilitytest_Nova_StabilityTest_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context218* contextArg197 = NOVA_MALLOC(sizeof(Context218));
	stabilitytest_Nova_ExceptionStability* l1_Nova_testExceptionStability = (stabilitytest_Nova_ExceptionStability*)nova_null;
	stabilitytest_Nova_SyntaxStability* l1_Nova_testSyntaxStability = (stabilitytest_Nova_SyntaxStability*)nova_null;
	stabilitytest_Nova_ClosureStability* l1_Nova_testClosureStability = (stabilitytest_Nova_ClosureStability*)nova_null;
	stabilitytest_Nova_PolymorphismStability* l1_Nova_testPolymorphismStability = (stabilitytest_Nova_PolymorphismStability*)nova_null;
	stabilitytest_Nova_LambdaStability* l1_Nova_testLambdaStability = (stabilitytest_Nova_LambdaStability*)nova_null;
	stabilitytest_Nova_ToStringStability* l1_Nova_testToStringStability = (stabilitytest_Nova_ToStringStability*)nova_null;
	stabilitytest_Nova_AssignmentStability* l1_Nova_testAssignmentStability = (stabilitytest_Nova_AssignmentStability*)nova_null;
	stabilitytest_Nova_RegexStability* l1_Nova_testRegexStability = (stabilitytest_Nova_RegexStability*)nova_null;
	stabilitytest_Nova_StaticImportStability* l1_Nova_testStaticImportStability = (stabilitytest_Nova_StaticImportStability*)nova_null;
	stabilitytest_Nova_InnerClassStability* l1_Nova_testInnerClassStability = (stabilitytest_Nova_InnerClassStability*)nova_null;
	stabilitytest_Nova_ExternalInnerClassStability* l1_Nova_testExternalInnerClassStability = (stabilitytest_Nova_ExternalInnerClassStability*)nova_null;
	stabilitytest_Nova_PrimitiveOverloadStability* l1_Nova_testPrimitiveOverloadStability = (stabilitytest_Nova_PrimitiveOverloadStability*)nova_null;
	stabilitytest_Nova_FancyOutputStreamTests* l1_Nova_testFancyOutputStreamTests = (stabilitytest_Nova_FancyOutputStreamTests*)nova_null;
	stabilitytest_Nova_FirstClassFunctionStability* l1_Nova_testFirstClassFunctionStability = (stabilitytest_Nova_FirstClassFunctionStability*)nova_null;
	stabilitytest_Nova_LibraryLoadingStability* l1_Nova_testLibraryLoadingStability = (stabilitytest_Nova_LibraryLoadingStability*)nova_null;
	stabilitytest_Nova_IntervalStability* l1_Nova_testIntervalStability = (stabilitytest_Nova_IntervalStability*)nova_null;
	stabilitytest_Nova_BoundedIntervalStability* l1_Nova_testBoundedIntervalStability = (stabilitytest_Nova_BoundedIntervalStability*)nova_null;
	stabilitytest_Nova_BoundlessIntervalStability* l1_Nova_testBoundlessIntervalStability = (stabilitytest_Nova_BoundlessIntervalStability*)nova_null;
	stabilitytest_Nova_CastStability* l1_Nova_testCastStability = (stabilitytest_Nova_CastStability*)nova_null;
	stabilitytest_Nova_TimeStability* l1_Nova_testTimeStability = (stabilitytest_Nova_TimeStability*)nova_null;
	stabilitytest_Nova_ThreadStability* l1_Nova_testThreadStability = (stabilitytest_Nova_ThreadStability*)nova_null;
	stabilitytest_Nova_FileStability* l1_Nova_testFileStability = (stabilitytest_Nova_FileStability*)nova_null;
	stabilitytest_Nova_NetworkStability* l1_Nova_testNetworkStability = (stabilitytest_Nova_NetworkStability*)nova_null;
	
	stabilitytest_Nova_StabilityTest_Nova_onResult = (stabilitytest_Nova_StabilityTest_closure896_Nova_onResult)(stabilitytest_Nova_StabilityTest_Nova_onResult == 0 ? (stabilitytest_Nova_StabilityTest_closure896_Nova_onResult)&stabilitytest_Nova_StabilityTest_Nova_lambda197 : stabilitytest_Nova_StabilityTest_Nova_onResult);
	stabilitytest_Nova_StabilityTest_ref_Nova_onResult = (void*)(stabilitytest_Nova_StabilityTest_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_StabilityTest_ref_Nova_onResult);
	stabilitytest_Nova_StabilityTest_context_Nova_onResult = (void*)(stabilitytest_Nova_StabilityTest_context_Nova_onResult == 0 ? (void*)contextArg197 : stabilitytest_Nova_StabilityTest_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	l1_Nova_testExceptionStability = stabilitytest_Nova_ExceptionStability_Nova_construct(0);
	l1_Nova_testSyntaxStability = stabilitytest_Nova_SyntaxStability_Nova_construct(0);
	l1_Nova_testClosureStability = stabilitytest_Nova_ClosureStability_Nova_construct(0);
	l1_Nova_testPolymorphismStability = stabilitytest_Nova_PolymorphismStability_Nova_construct(0);
	l1_Nova_testLambdaStability = stabilitytest_Nova_LambdaStability_Nova_construct(0);
	l1_Nova_testToStringStability = stabilitytest_Nova_ToStringStability_Nova_construct(0);
	l1_Nova_testAssignmentStability = stabilitytest_Nova_AssignmentStability_Nova_construct(0);
	l1_Nova_testRegexStability = stabilitytest_Nova_RegexStability_Nova_construct(0);
	l1_Nova_testStaticImportStability = stabilitytest_Nova_StaticImportStability_Nova_construct(0);
	l1_Nova_testInnerClassStability = stabilitytest_Nova_InnerClassStability_Nova_construct(0);
	l1_Nova_testExternalInnerClassStability = stabilitytest_Nova_ExternalInnerClassStability_Nova_construct(0);
	l1_Nova_testPrimitiveOverloadStability = stabilitytest_Nova_PrimitiveOverloadStability_Nova_construct(0);
	l1_Nova_testFancyOutputStreamTests = stabilitytest_Nova_FancyOutputStreamTests_Nova_construct(0);
	l1_Nova_testFirstClassFunctionStability = stabilitytest_Nova_FirstClassFunctionStability_Nova_construct(0);
	l1_Nova_testLibraryLoadingStability = stabilitytest_Nova_LibraryLoadingStability_Nova_construct(0);
	l1_Nova_testIntervalStability = stabilitytest_Nova_IntervalStability_Nova_construct(0);
	l1_Nova_testBoundedIntervalStability = stabilitytest_Nova_BoundedIntervalStability_Nova_construct(0);
	l1_Nova_testBoundlessIntervalStability = stabilitytest_Nova_BoundlessIntervalStability_Nova_construct(0);
	l1_Nova_testCastStability = stabilitytest_Nova_CastStability_Nova_construct(0);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testExceptionStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testSyntaxStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testClosureStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testPolymorphismStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testLambdaStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testToStringStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testAssignmentStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testRegexStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testStaticImportStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testInnerClassStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testExternalInnerClassStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testPrimitiveOverloadStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testFancyOutputStreamTests),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testFirstClassFunctionStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testLibraryLoadingStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testIntervalStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testBoundedIntervalStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testBoundlessIntervalStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testCastStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	l1_Nova_testTimeStability = stabilitytest_Nova_TimeStability_Nova_construct(0);
	l1_Nova_testThreadStability = stabilitytest_Nova_ThreadStability_Nova_construct(0);
	l1_Nova_testFileStability = stabilitytest_Nova_FileStability_Nova_construct(0);
	l1_Nova_testNetworkStability = stabilitytest_Nova_NetworkStability_Nova_construct(0);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testTimeStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testThreadStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testFileStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testNetworkStability),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)stabilitytest_Nova_StabilityTest_Nova_onResult, stabilitytest_Nova_StabilityTest_ref_Nova_onResult, stabilitytest_Nova_StabilityTest_context_Nova_onResult,
	out);
}

stabilitytest_Nova_StabilityTest* stabilitytest_Nova_StabilityTest_Nova_this(stabilitytest_Nova_StabilityTest* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated25(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestRunnerModel* value0, novex_nest_Nova_TestRunnerModel* value1, novex_nest_Nova_TestRunnerModel* value2, novex_nest_Nova_TestRunnerModel* value3)
{
	nova_Nova_Object** l1_Nova_temp = (nova_Nova_Object**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Object**)NOVA_MALLOC(sizeof(nova_Nova_Object) * 4);
	l1_Nova_temp[0] = (nova_Nova_Object*)(value0);
	l1_Nova_temp[1] = (nova_Nova_Object*)(value1);
	l1_Nova_temp[2] = (nova_Nova_Object*)(value2);
	l1_Nova_temp[3] = (nova_Nova_Object*)(value3);
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	4);
}

nova_datastruct_list_Nova_Array* generated26(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestRunnerModel* value0, novex_nest_Nova_TestRunnerModel* value1, novex_nest_Nova_TestRunnerModel* value2, novex_nest_Nova_TestRunnerModel* value3, novex_nest_Nova_TestRunnerModel* value4, novex_nest_Nova_TestRunnerModel* value5, novex_nest_Nova_TestRunnerModel* value6, novex_nest_Nova_TestRunnerModel* value7, novex_nest_Nova_TestRunnerModel* value8, novex_nest_Nova_TestRunnerModel* value9, novex_nest_Nova_TestRunnerModel* value10, novex_nest_Nova_TestRunnerModel* value11, novex_nest_Nova_TestRunnerModel* value12, novex_nest_Nova_TestRunnerModel* value13, novex_nest_Nova_TestRunnerModel* value14, novex_nest_Nova_TestRunnerModel* value15, novex_nest_Nova_TestRunnerModel* value16, novex_nest_Nova_TestRunnerModel* value17, novex_nest_Nova_TestRunnerModel* value18)
{
	nova_Nova_Object** l1_Nova_temp = (nova_Nova_Object**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Object**)NOVA_MALLOC(sizeof(nova_Nova_Object) * 19);
	l1_Nova_temp[0] = (nova_Nova_Object*)(value0);
	l1_Nova_temp[1] = (nova_Nova_Object*)(value1);
	l1_Nova_temp[2] = (nova_Nova_Object*)(value2);
	l1_Nova_temp[3] = (nova_Nova_Object*)(value3);
	l1_Nova_temp[4] = (nova_Nova_Object*)(value4);
	l1_Nova_temp[5] = (nova_Nova_Object*)(value5);
	l1_Nova_temp[6] = (nova_Nova_Object*)(value6);
	l1_Nova_temp[7] = (nova_Nova_Object*)(value7);
	l1_Nova_temp[8] = (nova_Nova_Object*)(value8);
	l1_Nova_temp[9] = (nova_Nova_Object*)(value9);
	l1_Nova_temp[10] = (nova_Nova_Object*)(value10);
	l1_Nova_temp[11] = (nova_Nova_Object*)(value11);
	l1_Nova_temp[12] = (nova_Nova_Object*)(value12);
	l1_Nova_temp[13] = (nova_Nova_Object*)(value13);
	l1_Nova_temp[14] = (nova_Nova_Object*)(value14);
	l1_Nova_temp[15] = (nova_Nova_Object*)(value15);
	l1_Nova_temp[16] = (nova_Nova_Object*)(value16);
	l1_Nova_temp[17] = (nova_Nova_Object*)(value17);
	l1_Nova_temp[18] = (nova_Nova_Object*)(value18);
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	19);
}

nova_datastruct_list_Nova_Array* generated27(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestSuite* value0, novex_nest_Nova_TestSuite* value1)
{
	novex_nest_Nova_TestSuite** l1_Nova_temp = (novex_nest_Nova_TestSuite**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestSuite**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestSuite) * 2);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	2);
}

void stabilitytest_Nova_StabilityTest_static_Nova_lambda108(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* result, Context129* context)
{
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)((*context->stabilitytest_Nova_StabilityTest_Nova_results)),
		(nova_Nova_Object*)(result));
}

char stabilitytest_Nova_StabilityTest_static_Nova_lambda109(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context130* context)
{
	return !_1->novex_nest_Nova_TestResult_Nova_success;
}

void stabilitytest_Nova_StabilityTest_static_Nova_lambda110(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context131* context)
{
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)))),
				(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
						(char*)(""))))));
}

void stabilitytest_Nova_StabilityTest_Nova_lambda197(stabilitytest_Nova_StabilityTest* this, novex_nest_Nova_TestResult* _1, Context218* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_StabilityTest_Accessorfunc_Nova_model(stabilitytest_Nova_StabilityTest* this)
{
	return (novex_nest_Nova_TestRunnerModel*)stabilitytest_Nova_StabilityTest_Nova__runTestsTestSuite;
}


void stabilitytest_Nova_StabilityTest_Nova_super(stabilitytest_Nova_StabilityTest* this)
{
	this->stabilitytest_Nova_StabilityTest_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

