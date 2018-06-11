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
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_Units.h>
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <plumbercalc/tests/plumbercalc_tests_Nova_AllTestsRunner.h>
#include <plumbercalc/tests/plumbercalc_tests_Nova_FractionTests.h>
#include <plumbercalc/tests/plumbercalc_tests_Nova_PipeTests.h>
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
} Context198;


CCLASS_PRIVATE
(
	plumbercalc_tests_Nova_UnitConversionTests,
	plumbercalc_pipes_Nova_Pipe* plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe;
	
)
void plumbercalc_tests_Nova_UnitConversionTests_Nova_init(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_UnitConversionTests_Nova_clean(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_UnitConversionTests_Nova_metersToInches(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_UnitConversionTests_Nova_metersToFeet(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_UnitConversionTests_Nova_remainingInches(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated7(plumbercalc_tests_Nova_UnitConversionTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
void plumbercalc_tests_Nova_UnitConversionTests_Nova_lambda177(plumbercalc_tests_Nova_UnitConversionTests* this, novex_nest_Nova_TestResult* _1, Context198* context);


void plumbercalc_tests_Nova_UnitConversionTests_Nova_init(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_UnitConversionTests_Nova_clean(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_UnitConversionTests_Nova_metersToInches(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_UnitConversionTests_Nova_metersToFeet(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_UnitConversionTests_Nova_remainingInches(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated7(plumbercalc_tests_Nova_UnitConversionTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
void plumbercalc_tests_Nova_UnitConversionTests_Nova_lambda177(plumbercalc_tests_Nova_UnitConversionTests* this, novex_nest_Nova_TestResult* _1, Context198* context);

novex_nest_Nova_TestCase* plumbercalc_tests_Nova_UnitConversionTests_Nova__metersToInchesTestCase;
novex_nest_Nova_TestCase* plumbercalc_tests_Nova_UnitConversionTests_Nova__metersToFeetTestCase;
novex_nest_Nova_TestCase* plumbercalc_tests_Nova_UnitConversionTests_Nova__remainingInchesTestCase;
novex_nest_Nova_TestRunnerModel* plumbercalc_tests_Nova_UnitConversionTests_Nova__runTestsTestRunner;
char plumbercalc_tests_Nova_UnitConversionTests_Nova_init_static_inited = 0;
void plumbercalc_tests_Nova_UnitConversionTests_Nova_init_static()
{
	if (!plumbercalc_tests_Nova_UnitConversionTests_Nova_init_static_inited) {
		plumbercalc_tests_Nova_UnitConversionTests_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			plumbercalc_tests_Nova_UnitConversionTests_Nova__metersToInchesTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("metersToInches")),
			0);
			plumbercalc_tests_Nova_UnitConversionTests_Nova__metersToFeetTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("metersToFeet")),
			0);
			plumbercalc_tests_Nova_UnitConversionTests_Nova__remainingInchesTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("remainingInches")),
			0);
			plumbercalc_tests_Nova_UnitConversionTests_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated7(0,
					plumbercalc_tests_Nova_UnitConversionTests_Nova__metersToInchesTestCase,
					plumbercalc_tests_Nova_UnitConversionTests_Nova__metersToFeetTestCase,
				plumbercalc_tests_Nova_UnitConversionTests_Nova__remainingInchesTestCase),
			0);
		}
	}
}

plumbercalc_tests_Nova_UnitConversionTests* plumbercalc_tests_Nova_UnitConversionTests_Nova_construct(plumbercalc_tests_Nova_UnitConversionTests* this)
{
	CCLASS_NEW(plumbercalc_tests_Nova_UnitConversionTests, this);
	this->vtable = &plumbercalc_tests_Nova_UnitConversionTests_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	plumbercalc_tests_Nova_UnitConversionTests_Nova_super(this);
	
	return plumbercalc_tests_Nova_UnitConversionTests_Nova_this((plumbercalc_tests_Nova_UnitConversionTests*)(this));
}

void plumbercalc_tests_Nova_UnitConversionTests_Nova_destroy(plumbercalc_tests_Nova_UnitConversionTests** this)
{
	if (!*this)
	{
		return;
	}
	
	plumbercalc_pipes_Nova_Pipe_Nova_destroy(&(*this)->prv->plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe);
	NOVA_FREE((*this)->prv);
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->plumbercalc_tests_Nova_UnitConversionTests_Nova_model);
	
	NOVA_FREE(*this);
}

void plumbercalc_tests_Nova_UnitConversionTests_Nova_init(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	this->prv->plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe = plumbercalc_pipes_Nova_Pipe_Nova_construct(0,
		10,
		5,
	5.5);
}

void plumbercalc_tests_Nova_UnitConversionTests_Nova_clean(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	this->prv->plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe = (plumbercalc_pipes_Nova_Pipe*)((nova_Nova_Object*)nova_null);
}

void plumbercalc_tests_Nova_UnitConversionTests_Nova_metersToInches(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out)
{
	double l1_Nova_inches = 0;
	float l1_Nova_expected = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing metersToInches ")));
	l1_Nova_inches = plumbercalc_pipes_Nova_Units_static_Nova_toInches((plumbercalc_pipes_Nova_Units*)(0),
	this->prv->plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe->plumbercalc_pipes_Nova_Pipe_Nova_length);
	l1_Nova_expected = 393.701;
	novex_nest_Double_Nova_Nest1Double_double_double_String_char_Nova_toBeWithinToleranceOf((novex_nest_Double_Nova_Nest1Double*)(novex_nest_Nova_Nest_double_Nest1Double40_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_inches)),
		l1_Nova_expected,
		0.001,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
						(this->prv->plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe->plumbercalc_pipes_Nova_Pipe_Nova_length))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" => "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
										(l1_Nova_inches))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(" but expected "))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
														(l1_Nova_expected))),
												(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(""))))))))))))));
}

void plumbercalc_tests_Nova_UnitConversionTests_Nova_metersToFeet(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out)
{
	double l1_Nova_feet = 0;
	float l1_Nova_expected = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing metersToFeet ")));
	l1_Nova_feet = plumbercalc_pipes_Nova_Units_static_Nova_toFeet((plumbercalc_pipes_Nova_Units*)(0),
	this->prv->plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe->plumbercalc_pipes_Nova_Pipe_Nova_length);
	l1_Nova_expected = 32.8084;
	novex_nest_Double_Nova_Nest1Double_double_double_String_char_Nova_toBeWithinToleranceOf((novex_nest_Double_Nova_Nest1Double*)(novex_nest_Nova_Nest_double_Nest1Double41_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_feet)),
		l1_Nova_expected,
		0.0001,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
						(this->prv->plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe->plumbercalc_pipes_Nova_Pipe_Nova_length))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" => "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
										(l1_Nova_feet))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(" but expected "))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
														(l1_Nova_expected))),
												(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(""))))))))))))));
}

void plumbercalc_tests_Nova_UnitConversionTests_Nova_remainingInches(plumbercalc_tests_Nova_UnitConversionTests* this, nova_io_Nova_OutputStream* out)
{
	double l1_Nova_remainingInches = 0;
	float l1_Nova_expected = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing remainingInches ")));
	l1_Nova_remainingInches = plumbercalc_pipes_Nova_Units_static_Nova_remainingInches((plumbercalc_pipes_Nova_Units*)(0),
	this->prv->plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe->plumbercalc_pipes_Nova_Pipe_Nova_length);
	l1_Nova_expected = 9.701;
	novex_nest_Double_Nova_Nest1Double_double_double_String_char_Nova_toBeWithinToleranceOf((novex_nest_Double_Nova_Nest1Double*)(novex_nest_Nova_Nest_double_Nest1Double42_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_remainingInches)),
		l1_Nova_expected,
		0.001,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
						(this->prv->plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe->plumbercalc_pipes_Nova_Pipe_Nova_length))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" => "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
										(l1_Nova_remainingInches))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(" but expected "))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
														(l1_Nova_expected))),
												(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(""))))))))))))));
}

void plumbercalc_tests_Nova_UnitConversionTests_Nova_runTests(plumbercalc_tests_Nova_UnitConversionTests* this, plumbercalc_tests_Nova_UnitConversionTests_closure509_Nova_onResult plumbercalc_tests_Nova_UnitConversionTests_Nova_onResult, void* plumbercalc_tests_Nova_UnitConversionTests_ref_Nova_onResult, void* plumbercalc_tests_Nova_UnitConversionTests_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context198* contextArg177 = NOVA_MALLOC(sizeof(Context198));
	nova_time_Nova_Timer* l1_Nova_metersToInchesTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_metersToFeetTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_remainingInchesTimer = (nova_time_Nova_Timer*)nova_null;
	
	plumbercalc_tests_Nova_UnitConversionTests_Nova_onResult = (plumbercalc_tests_Nova_UnitConversionTests_closure509_Nova_onResult)(plumbercalc_tests_Nova_UnitConversionTests_Nova_onResult == 0 ? (plumbercalc_tests_Nova_UnitConversionTests_closure509_Nova_onResult)&plumbercalc_tests_Nova_UnitConversionTests_Nova_lambda177 : plumbercalc_tests_Nova_UnitConversionTests_Nova_onResult);
	plumbercalc_tests_Nova_UnitConversionTests_ref_Nova_onResult = (void*)(plumbercalc_tests_Nova_UnitConversionTests_ref_Nova_onResult == 0 ? (void*)this : plumbercalc_tests_Nova_UnitConversionTests_ref_Nova_onResult);
	plumbercalc_tests_Nova_UnitConversionTests_context_Nova_onResult = (void*)(plumbercalc_tests_Nova_UnitConversionTests_context_Nova_onResult == 0 ? (void*)contextArg177 : plumbercalc_tests_Nova_UnitConversionTests_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing UnitConversionTests")),
		0,
		0,
		(int)(intptr_t)nova_null);
	plumbercalc_tests_Nova_UnitConversionTests_Nova_init((plumbercalc_tests_Nova_UnitConversionTests*)(this),
	out);
	l1_Nova_metersToInchesTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l11_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_UnitConversionTests_Nova_metersToInches((plumbercalc_tests_Nova_UnitConversionTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_metersToInchesTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l11_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_metersToInchesTimer,
			plumbercalc_tests_Nova_UnitConversionTests_Nova__metersToInchesTestCase);
			plumbercalc_tests_Nova_UnitConversionTests_Nova_onResult(plumbercalc_tests_Nova_UnitConversionTests_ref_Nova_onResult,
				l11_Nova_testResult,
			plumbercalc_tests_Nova_UnitConversionTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l16_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l16_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l16_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_metersToInchesTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l16_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l16_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_metersToInchesTimer,
		plumbercalc_tests_Nova_UnitConversionTests_Nova__metersToInchesTestCase);
		plumbercalc_tests_Nova_UnitConversionTests_Nova_onResult(plumbercalc_tests_Nova_UnitConversionTests_ref_Nova_onResult,
			l16_Nova_testResult,
		plumbercalc_tests_Nova_UnitConversionTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	plumbercalc_tests_Nova_UnitConversionTests_Nova_clean((plumbercalc_tests_Nova_UnitConversionTests*)(this),
	out);
	plumbercalc_tests_Nova_UnitConversionTests_Nova_init((plumbercalc_tests_Nova_UnitConversionTests*)(this),
	out);
	l1_Nova_metersToFeetTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l48_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_UnitConversionTests_Nova_metersToFeet((plumbercalc_tests_Nova_UnitConversionTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_metersToFeetTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l48_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_metersToFeetTimer,
			plumbercalc_tests_Nova_UnitConversionTests_Nova__metersToFeetTestCase);
			plumbercalc_tests_Nova_UnitConversionTests_Nova_onResult(plumbercalc_tests_Nova_UnitConversionTests_ref_Nova_onResult,
				l48_Nova_testResult,
			plumbercalc_tests_Nova_UnitConversionTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l53_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l53_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l53_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_metersToFeetTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l53_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l53_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_metersToFeetTimer,
		plumbercalc_tests_Nova_UnitConversionTests_Nova__metersToFeetTestCase);
		plumbercalc_tests_Nova_UnitConversionTests_Nova_onResult(plumbercalc_tests_Nova_UnitConversionTests_ref_Nova_onResult,
			l53_Nova_testResult,
		plumbercalc_tests_Nova_UnitConversionTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	plumbercalc_tests_Nova_UnitConversionTests_Nova_clean((plumbercalc_tests_Nova_UnitConversionTests*)(this),
	out);
	plumbercalc_tests_Nova_UnitConversionTests_Nova_init((plumbercalc_tests_Nova_UnitConversionTests*)(this),
	out);
	l1_Nova_remainingInchesTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l85_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_UnitConversionTests_Nova_remainingInches((plumbercalc_tests_Nova_UnitConversionTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_remainingInchesTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l85_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_remainingInchesTimer,
			plumbercalc_tests_Nova_UnitConversionTests_Nova__remainingInchesTestCase);
			plumbercalc_tests_Nova_UnitConversionTests_Nova_onResult(plumbercalc_tests_Nova_UnitConversionTests_ref_Nova_onResult,
				l85_Nova_testResult,
			plumbercalc_tests_Nova_UnitConversionTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l90_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l90_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l90_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_remainingInchesTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l90_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l90_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_remainingInchesTimer,
		plumbercalc_tests_Nova_UnitConversionTests_Nova__remainingInchesTestCase);
		plumbercalc_tests_Nova_UnitConversionTests_Nova_onResult(plumbercalc_tests_Nova_UnitConversionTests_ref_Nova_onResult,
			l90_Nova_testResult,
		plumbercalc_tests_Nova_UnitConversionTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	plumbercalc_tests_Nova_UnitConversionTests_Nova_clean((plumbercalc_tests_Nova_UnitConversionTests*)(this),
	out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

plumbercalc_tests_Nova_UnitConversionTests* plumbercalc_tests_Nova_UnitConversionTests_Nova_this(plumbercalc_tests_Nova_UnitConversionTests* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated7(plumbercalc_tests_Nova_UnitConversionTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2)
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

void plumbercalc_tests_Nova_UnitConversionTests_Nova_lambda177(plumbercalc_tests_Nova_UnitConversionTests* this, novex_nest_Nova_TestResult* _1, Context198* context)
{
}

novex_nest_Nova_TestRunnerModel* plumbercalc_tests_Nova_UnitConversionTests_Accessorfunc_Nova_model(plumbercalc_tests_Nova_UnitConversionTests* this)
{
	return plumbercalc_tests_Nova_UnitConversionTests_Nova__runTestsTestRunner;
}


void plumbercalc_tests_Nova_UnitConversionTests_Nova_super(plumbercalc_tests_Nova_UnitConversionTests* this)
{
	this->plumbercalc_tests_Nova_UnitConversionTests_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
	this->prv->plumbercalc_tests_Nova_UnitConversionTests_Nova_pipe = (plumbercalc_pipes_Nova_Pipe*)nova_null;
}

