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
#include <plumbercalc/tests/plumbercalc_tests_Nova_FractionTests.h>
#include <plumbercalc/tests/plumbercalc_tests_Nova_PipeTests.h>
#include <plumbercalc/tests/plumbercalc_tests_Nova_UnitConversionTests.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <novex/nest/novex_nest_Nova_TestSuiteRunnerModel.h>
#include <novex/nest/novex_nest_Nova_TestSuite.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context195;


nova_datastruct_list_Nova_Array* plumbercalc_tests_Nova_AllTestsRunner_static_Nova_v(plumbercalc_tests_Nova_AllTestsRunner* this, nova_datastruct_list_Nova_Array* a);
nova_datastruct_list_Nova_Array* generated3(plumbercalc_tests_Nova_AllTestsRunner* this, novex_nest_Nova_TestRunnerModel* value0, novex_nest_Nova_TestRunnerModel* value1, novex_nest_Nova_TestRunnerModel* value2);
nova_datastruct_list_Nova_Array* generated4(plumbercalc_tests_Nova_AllTestsRunner* this, novex_nest_Nova_TestSuite* value0);
void plumbercalc_tests_Nova_AllTestsRunner_Nova_lambda174(plumbercalc_tests_Nova_AllTestsRunner* this, novex_nest_Nova_TestResult* _1, Context195* context);


nova_datastruct_list_Nova_Array* plumbercalc_tests_Nova_AllTestsRunner_static_Nova_v(plumbercalc_tests_Nova_AllTestsRunner* this, nova_datastruct_list_Nova_Array* a);
nova_datastruct_list_Nova_Array* generated3(plumbercalc_tests_Nova_AllTestsRunner* this, novex_nest_Nova_TestRunnerModel* value0, novex_nest_Nova_TestRunnerModel* value1, novex_nest_Nova_TestRunnerModel* value2);
nova_datastruct_list_Nova_Array* generated4(plumbercalc_tests_Nova_AllTestsRunner* this, novex_nest_Nova_TestSuite* value0);
void plumbercalc_tests_Nova_AllTestsRunner_Nova_lambda174(plumbercalc_tests_Nova_AllTestsRunner* this, novex_nest_Nova_TestResult* _1, Context195* context);

novex_nest_Nova_TestSuiteRunnerModel* plumbercalc_tests_Nova_AllTestsRunner_Nova__runTestsTestSuite;
char plumbercalc_tests_Nova_AllTestsRunner_Nova_init_static_inited = 0;
void plumbercalc_tests_Nova_AllTestsRunner_Nova_init_static()
{
	if (!plumbercalc_tests_Nova_AllTestsRunner_Nova_init_static_inited) {
		plumbercalc_tests_Nova_AllTestsRunner_Nova_init_static_inited = 1;
		novex_nest_Nova_TestSuiteRunnerModel_Nova_init_static();
		novex_nest_Nova_TestSuite_Nova_init_static();
		plumbercalc_tests_Nova_PipeTests_Nova_init_static();
		plumbercalc_tests_Nova_UnitConversionTests_Nova_init_static();
		plumbercalc_tests_Nova_FractionTests_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			plumbercalc_tests_Nova_AllTestsRunner_Nova__runTestsTestSuite = novex_nest_Nova_TestSuiteRunnerModel_Nova_construct(0,
				generated4(0,
					novex_nest_Nova_TestSuite_Nova_construct(0,
						(nova_datastruct_list_Nova_Array*)(generated3(0,
								plumbercalc_tests_Nova_PipeTests_Nova__runTestsTestRunner,
								plumbercalc_tests_Nova_UnitConversionTests_Nova__runTestsTestRunner,
			plumbercalc_tests_Nova_FractionTests_Nova__runTestsTestRunner)))));
		}
	}
}

plumbercalc_tests_Nova_AllTestsRunner* plumbercalc_tests_Nova_AllTestsRunner_Nova_construct(plumbercalc_tests_Nova_AllTestsRunner* this)
{
	CCLASS_NEW(plumbercalc_tests_Nova_AllTestsRunner, this,);
	this->vtable = &plumbercalc_tests_Nova_AllTestsRunner_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	plumbercalc_tests_Nova_AllTestsRunner_Nova_super(this);
	
	return plumbercalc_tests_Nova_AllTestsRunner_Nova_this((plumbercalc_tests_Nova_AllTestsRunner*)(this));
}

void plumbercalc_tests_Nova_AllTestsRunner_Nova_destroy(plumbercalc_tests_Nova_AllTestsRunner** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->plumbercalc_tests_Nova_AllTestsRunner_Nova_model);
	
	NOVA_FREE(*this);
}

nova_datastruct_list_Nova_Array* plumbercalc_tests_Nova_AllTestsRunner_static_Nova_v(plumbercalc_tests_Nova_AllTestsRunner* this, nova_datastruct_list_Nova_Array* a)
{
	return a;
}

void plumbercalc_tests_Nova_AllTestsRunner_static_Nova_main(plumbercalc_tests_Nova_AllTestsRunner* this, nova_datastruct_list_Nova_Array* args)
{
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(plumbercalc_tests_Nova_AllTestsRunner_Nova_construct(0)),
		0, 0, 0,
	0);
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

void plumbercalc_tests_Nova_AllTestsRunner_Nova_runTests(plumbercalc_tests_Nova_AllTestsRunner* this, plumbercalc_tests_Nova_AllTestsRunner_closure500_Nova_onResult plumbercalc_tests_Nova_AllTestsRunner_Nova_onResult, void* plumbercalc_tests_Nova_AllTestsRunner_ref_Nova_onResult, void* plumbercalc_tests_Nova_AllTestsRunner_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context195* contextArg174 = NOVA_MALLOC(sizeof(Context195));
	plumbercalc_tests_Nova_PipeTests* l1_Nova_testPipeTests = (plumbercalc_tests_Nova_PipeTests*)nova_null;
	plumbercalc_tests_Nova_UnitConversionTests* l1_Nova_testUnitConversionTests = (plumbercalc_tests_Nova_UnitConversionTests*)nova_null;
	plumbercalc_tests_Nova_FractionTests* l1_Nova_testFractionTests = (plumbercalc_tests_Nova_FractionTests*)nova_null;
	
	plumbercalc_tests_Nova_AllTestsRunner_Nova_onResult = (plumbercalc_tests_Nova_AllTestsRunner_closure500_Nova_onResult)(plumbercalc_tests_Nova_AllTestsRunner_Nova_onResult == 0 ? (plumbercalc_tests_Nova_AllTestsRunner_closure500_Nova_onResult)&plumbercalc_tests_Nova_AllTestsRunner_Nova_lambda174 : plumbercalc_tests_Nova_AllTestsRunner_Nova_onResult);
	plumbercalc_tests_Nova_AllTestsRunner_ref_Nova_onResult = (void*)(plumbercalc_tests_Nova_AllTestsRunner_ref_Nova_onResult == 0 ? (void*)this : plumbercalc_tests_Nova_AllTestsRunner_ref_Nova_onResult);
	plumbercalc_tests_Nova_AllTestsRunner_context_Nova_onResult = (void*)(plumbercalc_tests_Nova_AllTestsRunner_context_Nova_onResult == 0 ? (void*)contextArg174 : plumbercalc_tests_Nova_AllTestsRunner_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	l1_Nova_testPipeTests = plumbercalc_tests_Nova_PipeTests_Nova_construct(0);
	l1_Nova_testUnitConversionTests = plumbercalc_tests_Nova_UnitConversionTests_Nova_construct(0);
	l1_Nova_testFractionTests = plumbercalc_tests_Nova_FractionTests_Nova_construct(0);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testPipeTests),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)plumbercalc_tests_Nova_AllTestsRunner_Nova_onResult, plumbercalc_tests_Nova_AllTestsRunner_ref_Nova_onResult, plumbercalc_tests_Nova_AllTestsRunner_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testUnitConversionTests),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)plumbercalc_tests_Nova_AllTestsRunner_Nova_onResult, plumbercalc_tests_Nova_AllTestsRunner_ref_Nova_onResult, plumbercalc_tests_Nova_AllTestsRunner_context_Nova_onResult,
	out);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(l1_Nova_testFractionTests),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)plumbercalc_tests_Nova_AllTestsRunner_Nova_onResult, plumbercalc_tests_Nova_AllTestsRunner_ref_Nova_onResult, plumbercalc_tests_Nova_AllTestsRunner_context_Nova_onResult,
	out);
}

plumbercalc_tests_Nova_AllTestsRunner* plumbercalc_tests_Nova_AllTestsRunner_Nova_this(plumbercalc_tests_Nova_AllTestsRunner* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated3(plumbercalc_tests_Nova_AllTestsRunner* this, novex_nest_Nova_TestRunnerModel* value0, novex_nest_Nova_TestRunnerModel* value1, novex_nest_Nova_TestRunnerModel* value2)
{
	nova_Nova_Object** l1_Nova_temp = (nova_Nova_Object**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Object**)NOVA_MALLOC(sizeof(nova_Nova_Object) * 3);
	l1_Nova_temp[0] = (nova_Nova_Object*)(value0);
	l1_Nova_temp[1] = (nova_Nova_Object*)(value1);
	l1_Nova_temp[2] = (nova_Nova_Object*)(value2);
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	3);
}

nova_datastruct_list_Nova_Array* generated4(plumbercalc_tests_Nova_AllTestsRunner* this, novex_nest_Nova_TestSuite* value0)
{
	novex_nest_Nova_TestSuite** l1_Nova_temp = (novex_nest_Nova_TestSuite**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestSuite**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestSuite) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	1);
}

void plumbercalc_tests_Nova_AllTestsRunner_Nova_lambda174(plumbercalc_tests_Nova_AllTestsRunner* this, novex_nest_Nova_TestResult* _1, Context195* context)
{
}

novex_nest_Nova_TestRunnerModel* plumbercalc_tests_Nova_AllTestsRunner_Accessorfunc_Nova_model(plumbercalc_tests_Nova_AllTestsRunner* this)
{
	return (novex_nest_Nova_TestRunnerModel*)plumbercalc_tests_Nova_AllTestsRunner_Nova__runTestsTestSuite;
}


void plumbercalc_tests_Nova_AllTestsRunner_Nova_super(plumbercalc_tests_Nova_AllTestsRunner* this)
{
	this->plumbercalc_tests_Nova_AllTestsRunner_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

