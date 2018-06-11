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
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_Pipe.h>
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <plumbercalc/tests/plumbercalc_tests_Nova_AllTestsRunner.h>
#include <plumbercalc/tests/plumbercalc_tests_Nova_FractionTests.h>
#include <plumbercalc/tests/plumbercalc_tests_Nova_UnitConversionTests.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context197;


CCLASS_PRIVATE
(
	plumbercalc_tests_Nova_PipeTests,
	plumbercalc_pipes_Nova_Pipe* plumbercalc_tests_Nova_PipeTests_Nova_pipe;
	
)
void plumbercalc_tests_Nova_PipeTests_Nova_init(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_PipeTests_Nova_clean(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_PipeTests_Nova_pipeFieldValues(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_PipeTests_Nova_pipeProperties(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated6(plumbercalc_tests_Nova_PipeTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1);
void plumbercalc_tests_Nova_PipeTests_Nova_lambda176(plumbercalc_tests_Nova_PipeTests* this, novex_nest_Nova_TestResult* _1, Context197* context);


void plumbercalc_tests_Nova_PipeTests_Nova_init(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_PipeTests_Nova_clean(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_PipeTests_Nova_pipeFieldValues(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_PipeTests_Nova_pipeProperties(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated6(plumbercalc_tests_Nova_PipeTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1);
void plumbercalc_tests_Nova_PipeTests_Nova_lambda176(plumbercalc_tests_Nova_PipeTests* this, novex_nest_Nova_TestResult* _1, Context197* context);

novex_nest_Nova_TestCase* plumbercalc_tests_Nova_PipeTests_Nova__pipeFieldValuesTestCase;
novex_nest_Nova_TestCase* plumbercalc_tests_Nova_PipeTests_Nova__pipePropertiesTestCase;
novex_nest_Nova_TestRunnerModel* plumbercalc_tests_Nova_PipeTests_Nova__runTestsTestRunner;
char plumbercalc_tests_Nova_PipeTests_Nova_init_static_inited = 0;
void plumbercalc_tests_Nova_PipeTests_Nova_init_static()
{
	if (!plumbercalc_tests_Nova_PipeTests_Nova_init_static_inited) {
		plumbercalc_tests_Nova_PipeTests_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			plumbercalc_tests_Nova_PipeTests_Nova__pipeFieldValuesTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("pipeFieldValues")),
			0);
			plumbercalc_tests_Nova_PipeTests_Nova__pipePropertiesTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("pipeProperties")),
			0);
			plumbercalc_tests_Nova_PipeTests_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated6(0,
					plumbercalc_tests_Nova_PipeTests_Nova__pipeFieldValuesTestCase,
				plumbercalc_tests_Nova_PipeTests_Nova__pipePropertiesTestCase),
			0);
		}
	}
}

plumbercalc_tests_Nova_PipeTests* plumbercalc_tests_Nova_PipeTests_Nova_construct(plumbercalc_tests_Nova_PipeTests* this)
{
	CCLASS_NEW(plumbercalc_tests_Nova_PipeTests, this);
	this->vtable = &plumbercalc_tests_Nova_PipeTests_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	plumbercalc_tests_Nova_PipeTests_Nova_super(this);
	
	return plumbercalc_tests_Nova_PipeTests_Nova_this((plumbercalc_tests_Nova_PipeTests*)(this));
}

void plumbercalc_tests_Nova_PipeTests_Nova_destroy(plumbercalc_tests_Nova_PipeTests** this)
{
	if (!*this)
	{
		return;
	}
	
	plumbercalc_pipes_Nova_Pipe_Nova_destroy(&(*this)->prv->plumbercalc_tests_Nova_PipeTests_Nova_pipe);
	NOVA_FREE((*this)->prv);
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->plumbercalc_tests_Nova_PipeTests_Nova_model);
	
	NOVA_FREE(*this);
}

void plumbercalc_tests_Nova_PipeTests_Nova_init(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	this->prv->plumbercalc_tests_Nova_PipeTests_Nova_pipe = plumbercalc_pipes_Nova_Pipe_Nova_construct(0,
		10,
		5,
	5.5);
}

void plumbercalc_tests_Nova_PipeTests_Nova_clean(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	this->prv->plumbercalc_tests_Nova_PipeTests_Nova_pipe = (plumbercalc_pipes_Nova_Pipe*)((nova_Nova_Object*)nova_null);
}

void plumbercalc_tests_Nova_PipeTests_Nova_pipeFieldValues(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing pipeFieldValues ")));
	novex_nest_Double_Nova_Nest1Double_double_String_char_Nova_toBe((novex_nest_Double_Nova_Nest1Double*)(novex_nest_Nova_Nest_double_Nest1Double36_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->plumbercalc_tests_Nova_PipeTests_Nova_pipe->plumbercalc_pipes_Nova_Pipe_Nova_length)),
		10,
	0);
	novex_nest_Double_Nova_Nest1Double_double_String_char_Nova_toBe((novex_nest_Double_Nova_Nest1Double*)(novex_nest_Nova_Nest_double_Nest1Double37_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->plumbercalc_tests_Nova_PipeTests_Nova_pipe->plumbercalc_pipes_Nova_Pipe_Nova_innerDiameter)),
		5,
	0);
	novex_nest_Double_Nova_Nest1Double_double_String_char_Nova_toBe((novex_nest_Double_Nova_Nest1Double*)(novex_nest_Nova_Nest_double_Nest1Double38_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->plumbercalc_tests_Nova_PipeTests_Nova_pipe->plumbercalc_pipes_Nova_Pipe_Nova_outerDiameter)),
		5.5,
	0);
}

void plumbercalc_tests_Nova_PipeTests_Nova_pipeProperties(plumbercalc_tests_Nova_PipeTests* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing pipeProperties ")));
	novex_nest_Double_Nova_Nest1Double_double_String_char_Nova_toBe((novex_nest_Double_Nova_Nest1Double*)(novex_nest_Nova_Nest_double_Nest1Double39_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				plumbercalc_pipes_Nova_Pipe_Accessor_Nova_thickness((plumbercalc_pipes_Nova_Pipe*)(this->prv->plumbercalc_tests_Nova_PipeTests_Nova_pipe)))),
		.5,
	0);
}

void plumbercalc_tests_Nova_PipeTests_Nova_runTests(plumbercalc_tests_Nova_PipeTests* this, plumbercalc_tests_Nova_PipeTests_closure508_Nova_onResult plumbercalc_tests_Nova_PipeTests_Nova_onResult, void* plumbercalc_tests_Nova_PipeTests_ref_Nova_onResult, void* plumbercalc_tests_Nova_PipeTests_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context197* contextArg176 = NOVA_MALLOC(sizeof(Context197));
	nova_time_Nova_Timer* l1_Nova_pipeFieldValuesTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_pipePropertiesTimer = (nova_time_Nova_Timer*)nova_null;
	
	plumbercalc_tests_Nova_PipeTests_Nova_onResult = (plumbercalc_tests_Nova_PipeTests_closure508_Nova_onResult)(plumbercalc_tests_Nova_PipeTests_Nova_onResult == 0 ? (plumbercalc_tests_Nova_PipeTests_closure508_Nova_onResult)&plumbercalc_tests_Nova_PipeTests_Nova_lambda176 : plumbercalc_tests_Nova_PipeTests_Nova_onResult);
	plumbercalc_tests_Nova_PipeTests_ref_Nova_onResult = (void*)(plumbercalc_tests_Nova_PipeTests_ref_Nova_onResult == 0 ? (void*)this : plumbercalc_tests_Nova_PipeTests_ref_Nova_onResult);
	plumbercalc_tests_Nova_PipeTests_context_Nova_onResult = (void*)(plumbercalc_tests_Nova_PipeTests_context_Nova_onResult == 0 ? (void*)contextArg176 : plumbercalc_tests_Nova_PipeTests_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing PipeTests")),
		0,
		0,
		(int)(intptr_t)nova_null);
	plumbercalc_tests_Nova_PipeTests_Nova_init((plumbercalc_tests_Nova_PipeTests*)(this),
	out);
	l1_Nova_pipeFieldValuesTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l11_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_PipeTests_Nova_pipeFieldValues((plumbercalc_tests_Nova_PipeTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_pipeFieldValuesTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l11_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_pipeFieldValuesTimer,
			plumbercalc_tests_Nova_PipeTests_Nova__pipeFieldValuesTestCase);
			plumbercalc_tests_Nova_PipeTests_Nova_onResult(plumbercalc_tests_Nova_PipeTests_ref_Nova_onResult,
				l11_Nova_testResult,
			plumbercalc_tests_Nova_PipeTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l16_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l16_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l16_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_pipeFieldValuesTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l16_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l16_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_pipeFieldValuesTimer,
		plumbercalc_tests_Nova_PipeTests_Nova__pipeFieldValuesTestCase);
		plumbercalc_tests_Nova_PipeTests_Nova_onResult(plumbercalc_tests_Nova_PipeTests_ref_Nova_onResult,
			l16_Nova_testResult,
		plumbercalc_tests_Nova_PipeTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	plumbercalc_tests_Nova_PipeTests_Nova_clean((plumbercalc_tests_Nova_PipeTests*)(this),
	out);
	plumbercalc_tests_Nova_PipeTests_Nova_init((plumbercalc_tests_Nova_PipeTests*)(this),
	out);
	l1_Nova_pipePropertiesTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l48_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_PipeTests_Nova_pipeProperties((plumbercalc_tests_Nova_PipeTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_pipePropertiesTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l48_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_pipePropertiesTimer,
			plumbercalc_tests_Nova_PipeTests_Nova__pipePropertiesTestCase);
			plumbercalc_tests_Nova_PipeTests_Nova_onResult(plumbercalc_tests_Nova_PipeTests_ref_Nova_onResult,
				l48_Nova_testResult,
			plumbercalc_tests_Nova_PipeTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l53_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l53_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l53_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_pipePropertiesTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l53_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l53_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_pipePropertiesTimer,
		plumbercalc_tests_Nova_PipeTests_Nova__pipePropertiesTestCase);
		plumbercalc_tests_Nova_PipeTests_Nova_onResult(plumbercalc_tests_Nova_PipeTests_ref_Nova_onResult,
			l53_Nova_testResult,
		plumbercalc_tests_Nova_PipeTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	plumbercalc_tests_Nova_PipeTests_Nova_clean((plumbercalc_tests_Nova_PipeTests*)(this),
	out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

plumbercalc_tests_Nova_PipeTests* plumbercalc_tests_Nova_PipeTests_Nova_this(plumbercalc_tests_Nova_PipeTests* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated6(plumbercalc_tests_Nova_PipeTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 2);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	2);
}

void plumbercalc_tests_Nova_PipeTests_Nova_lambda176(plumbercalc_tests_Nova_PipeTests* this, novex_nest_Nova_TestResult* _1, Context197* context)
{
}

novex_nest_Nova_TestRunnerModel* plumbercalc_tests_Nova_PipeTests_Accessorfunc_Nova_model(plumbercalc_tests_Nova_PipeTests* this)
{
	return plumbercalc_tests_Nova_PipeTests_Nova__runTestsTestRunner;
}


void plumbercalc_tests_Nova_PipeTests_Nova_super(plumbercalc_tests_Nova_PipeTests* this)
{
	this->plumbercalc_tests_Nova_PipeTests_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
	this->prv->plumbercalc_tests_Nova_PipeTests_Nova_pipe = (plumbercalc_pipes_Nova_Pipe*)nova_null;
}

