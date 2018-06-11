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
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_Fraction.h>
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <plumbercalc/tests/plumbercalc_tests_Nova_AllTestsRunner.h>
#include <plumbercalc/tests/plumbercalc_tests_Nova_PipeTests.h>
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
} Context196;


void plumbercalc_tests_Nova_FractionTests_Nova_fractionProperties(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_FractionTests_Nova_simplifyFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_FractionTests_Nova_addFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_FractionTests_Nova_subtractFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_FractionTests_Nova_multiplyFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_FractionTests_Nova_divideFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated5(plumbercalc_tests_Nova_FractionTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5);
void plumbercalc_tests_Nova_FractionTests_Nova_lambda175(plumbercalc_tests_Nova_FractionTests* this, novex_nest_Nova_TestResult* _1, Context196* context);


void plumbercalc_tests_Nova_FractionTests_Nova_fractionProperties(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_FractionTests_Nova_simplifyFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_FractionTests_Nova_addFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_FractionTests_Nova_subtractFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_FractionTests_Nova_multiplyFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
void plumbercalc_tests_Nova_FractionTests_Nova_divideFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated5(plumbercalc_tests_Nova_FractionTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5);
void plumbercalc_tests_Nova_FractionTests_Nova_lambda175(plumbercalc_tests_Nova_FractionTests* this, novex_nest_Nova_TestResult* _1, Context196* context);

novex_nest_Nova_TestCase* plumbercalc_tests_Nova_FractionTests_Nova__fractionPropertiesTestCase;
novex_nest_Nova_TestCase* plumbercalc_tests_Nova_FractionTests_Nova__simplifyFractionTestCase;
novex_nest_Nova_TestCase* plumbercalc_tests_Nova_FractionTests_Nova__addFractionTestCase;
novex_nest_Nova_TestCase* plumbercalc_tests_Nova_FractionTests_Nova__subtractFractionTestCase;
novex_nest_Nova_TestCase* plumbercalc_tests_Nova_FractionTests_Nova__multiplyFractionTestCase;
novex_nest_Nova_TestCase* plumbercalc_tests_Nova_FractionTests_Nova__divideFractionTestCase;
novex_nest_Nova_TestRunnerModel* plumbercalc_tests_Nova_FractionTests_Nova__runTestsTestRunner;
char plumbercalc_tests_Nova_FractionTests_Nova_init_static_inited = 0;
void plumbercalc_tests_Nova_FractionTests_Nova_init_static()
{
	if (!plumbercalc_tests_Nova_FractionTests_Nova_init_static_inited) {
		plumbercalc_tests_Nova_FractionTests_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			plumbercalc_tests_Nova_FractionTests_Nova__fractionPropertiesTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("fractionProperties")),
			0);
			plumbercalc_tests_Nova_FractionTests_Nova__simplifyFractionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("simplifyFraction")),
			0);
			plumbercalc_tests_Nova_FractionTests_Nova__addFractionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("addFraction")),
			0);
			plumbercalc_tests_Nova_FractionTests_Nova__subtractFractionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("subtractFraction")),
			0);
			plumbercalc_tests_Nova_FractionTests_Nova__multiplyFractionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("multiplyFraction")),
			0);
			plumbercalc_tests_Nova_FractionTests_Nova__divideFractionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("divideFraction")),
			0);
			plumbercalc_tests_Nova_FractionTests_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated5(0,
					plumbercalc_tests_Nova_FractionTests_Nova__fractionPropertiesTestCase,
					plumbercalc_tests_Nova_FractionTests_Nova__simplifyFractionTestCase,
					plumbercalc_tests_Nova_FractionTests_Nova__addFractionTestCase,
					plumbercalc_tests_Nova_FractionTests_Nova__subtractFractionTestCase,
					plumbercalc_tests_Nova_FractionTests_Nova__multiplyFractionTestCase,
				plumbercalc_tests_Nova_FractionTests_Nova__divideFractionTestCase),
			0);
		}
	}
}

plumbercalc_tests_Nova_FractionTests* plumbercalc_tests_Nova_FractionTests_Nova_construct(plumbercalc_tests_Nova_FractionTests* this)
{
	CCLASS_NEW(plumbercalc_tests_Nova_FractionTests, this,);
	this->vtable = &plumbercalc_tests_Nova_FractionTests_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	plumbercalc_tests_Nova_FractionTests_Nova_super(this);
	
	return plumbercalc_tests_Nova_FractionTests_Nova_this((plumbercalc_tests_Nova_FractionTests*)(this));
}

void plumbercalc_tests_Nova_FractionTests_Nova_destroy(plumbercalc_tests_Nova_FractionTests** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->plumbercalc_tests_Nova_FractionTests_Nova_model);
	
	NOVA_FREE(*this);
}

void plumbercalc_tests_Nova_FractionTests_Nova_fractionProperties(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out)
{
	plumbercalc_pipes_Nova_Fraction* l1_Nova_a = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing fractionProperties ")));
	l1_Nova_a = plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		5,
	1);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int4_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_a->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		5,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Numerator not set correctly")));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int5_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_a->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Denominator not set correctly")));
}

void plumbercalc_tests_Nova_FractionTests_Nova_simplifyFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out)
{
	plumbercalc_pipes_Nova_Fraction* l1_Nova_a = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_simplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing simplifyFraction ")));
	l1_Nova_a = plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		6,
	4);
	l1_Nova_simplified = plumbercalc_pipes_Nova_Fraction_Accessor_Nova_simplified((plumbercalc_pipes_Nova_Fraction*)(l1_Nova_a));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int6_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_a->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		6,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Numerator modified from simplified property call")));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int7_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_a->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		4,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Denominator modified from simplified property call")));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int8_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected simplified numerator to be 3, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int9_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected simplified denominator to be 2, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	plumbercalc_pipes_Nova_Fraction_Nova_simplify((plumbercalc_pipes_Nova_Fraction*)(l1_Nova_a));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int10_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_a->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected mutable simplified numerator to be 3, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_a->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int11_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_a->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected mutable simplified denominator to be 2, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_a->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void plumbercalc_tests_Nova_FractionTests_Nova_addFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out)
{
	plumbercalc_pipes_Nova_Fraction* l1_Nova_a = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_b = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_unsimplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_simplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing addFraction ")));
	l1_Nova_a = plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		5,
	1);
	l1_Nova_b = plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		6,
	4);
	l1_Nova_unsimplified = (plumbercalc_pipes_Nova_Fraction*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(l1_Nova_a),
			(nova_Nova_Object*)(l1_Nova_b)));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int12_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		26,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified numerator 26, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int13_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		4,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified denominator 4, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	l1_Nova_simplified = plumbercalc_pipes_Nova_Fraction_Accessor_Nova_simplified((plumbercalc_pipes_Nova_Fraction*)(l1_Nova_unsimplified));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int14_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		13,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected simplified numerator 13, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int15_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected simplified denominator 2, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int16_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		26,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified numerator to remain 26, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int17_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		4,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified denominator to remain 4, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void plumbercalc_tests_Nova_FractionTests_Nova_subtractFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out)
{
	plumbercalc_pipes_Nova_Fraction* l1_Nova_a = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_b = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_unsimplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_simplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing subtractFraction ")));
	l1_Nova_a = plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		5,
	1);
	l1_Nova_b = plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		6,
	4);
	l1_Nova_unsimplified = (plumbercalc_pipes_Nova_Fraction*)(nova_operators_Nova_MinusOperator_virtual1_Nova_minus((nova_operators_Nova_MinusOperator*)(l1_Nova_a),
			(nova_Nova_Object*)(l1_Nova_b)));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int18_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		14,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified numerator 14, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int19_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		4,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified denominator 4, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	l1_Nova_simplified = plumbercalc_pipes_Nova_Fraction_Accessor_Nova_simplified((plumbercalc_pipes_Nova_Fraction*)(l1_Nova_unsimplified));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int20_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		7,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected simplified numerator 7, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int21_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected simplified denominator 2, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int22_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		14,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified numerator to remain 14, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int23_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		4,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified denominator to remain 4, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void plumbercalc_tests_Nova_FractionTests_Nova_multiplyFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out)
{
	plumbercalc_pipes_Nova_Fraction* l1_Nova_a = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_b = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_unsimplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_simplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing multiplyFraction ")));
	l1_Nova_a = plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		5,
	1);
	l1_Nova_b = plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		6,
	4);
	l1_Nova_unsimplified = (plumbercalc_pipes_Nova_Fraction*)(nova_operators_Nova_MultiplyOperator_virtual1_Nova_multiply((nova_operators_Nova_MultiplyOperator*)(l1_Nova_a),
			(nova_Nova_Object*)(l1_Nova_b)));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int24_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		30,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified numerator 30, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int25_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		4,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified denominator 4, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	l1_Nova_simplified = plumbercalc_pipes_Nova_Fraction_Accessor_Nova_simplified((plumbercalc_pipes_Nova_Fraction*)(l1_Nova_unsimplified));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int26_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		15,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected simplified numerator 15, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int27_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected simplified denominator 2, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int28_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		30,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified numerator to remain 30, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int29_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		4,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified denominator to remain 4, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void plumbercalc_tests_Nova_FractionTests_Nova_divideFraction(plumbercalc_tests_Nova_FractionTests* this, nova_io_Nova_OutputStream* out)
{
	plumbercalc_pipes_Nova_Fraction* l1_Nova_a = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_b = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_unsimplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_simplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing divideFraction ")));
	l1_Nova_a = plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		5,
	1);
	l1_Nova_b = plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		6,
	4);
	l1_Nova_unsimplified = plumbercalc_pipes_Nova_Fraction_Nova_divide((plumbercalc_pipes_Nova_Fraction*)(l1_Nova_a),
	l1_Nova_b);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int30_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		20,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified numerator 20, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int31_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		6,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified denominator 6, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	l1_Nova_simplified = plumbercalc_pipes_Nova_Fraction_Accessor_Nova_simplified((plumbercalc_pipes_Nova_Fraction*)(l1_Nova_unsimplified));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int32_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		10,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected simplified numerator 10, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int33_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected simplified denominator 3, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int34_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator)),
		20,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified numerator to remain 20, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int35_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator)),
		6,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected unsimplified denominator to remain 6, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_unsimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void plumbercalc_tests_Nova_FractionTests_Nova_runTests(plumbercalc_tests_Nova_FractionTests* this, plumbercalc_tests_Nova_FractionTests_closure507_Nova_onResult plumbercalc_tests_Nova_FractionTests_Nova_onResult, void* plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult, void* plumbercalc_tests_Nova_FractionTests_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context196* contextArg175 = NOVA_MALLOC(sizeof(Context196));
	nova_time_Nova_Timer* l1_Nova_fractionPropertiesTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_simplifyFractionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_addFractionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_subtractFractionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_multiplyFractionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_divideFractionTimer = (nova_time_Nova_Timer*)nova_null;
	
	plumbercalc_tests_Nova_FractionTests_Nova_onResult = (plumbercalc_tests_Nova_FractionTests_closure507_Nova_onResult)(plumbercalc_tests_Nova_FractionTests_Nova_onResult == 0 ? (plumbercalc_tests_Nova_FractionTests_closure507_Nova_onResult)&plumbercalc_tests_Nova_FractionTests_Nova_lambda175 : plumbercalc_tests_Nova_FractionTests_Nova_onResult);
	plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult = (void*)(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult == 0 ? (void*)this : plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult);
	plumbercalc_tests_Nova_FractionTests_context_Nova_onResult = (void*)(plumbercalc_tests_Nova_FractionTests_context_Nova_onResult == 0 ? (void*)contextArg175 : plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing FractionTests")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_fractionPropertiesTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_FractionTests_Nova_fractionProperties((plumbercalc_tests_Nova_FractionTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_fractionPropertiesTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_fractionPropertiesTimer,
			plumbercalc_tests_Nova_FractionTests_Nova__fractionPropertiesTestCase);
			plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
				l9_Nova_testResult,
			plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_fractionPropertiesTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_fractionPropertiesTimer,
		plumbercalc_tests_Nova_FractionTests_Nova__fractionPropertiesTestCase);
		plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
			l14_Nova_testResult,
		plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_simplifyFractionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_FractionTests_Nova_simplifyFraction((plumbercalc_tests_Nova_FractionTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_simplifyFractionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_simplifyFractionTimer,
			plumbercalc_tests_Nova_FractionTests_Nova__simplifyFractionTestCase);
			plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
				l42_Nova_testResult,
			plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_simplifyFractionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l47_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_simplifyFractionTimer,
		plumbercalc_tests_Nova_FractionTests_Nova__simplifyFractionTestCase);
		plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
			l47_Nova_testResult,
		plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_addFractionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l75_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_FractionTests_Nova_addFraction((plumbercalc_tests_Nova_FractionTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_addFractionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l75_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_addFractionTimer,
			plumbercalc_tests_Nova_FractionTests_Nova__addFractionTestCase);
			plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
				l75_Nova_testResult,
			plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l80_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l80_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l80_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_addFractionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l80_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l80_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_addFractionTimer,
		plumbercalc_tests_Nova_FractionTests_Nova__addFractionTestCase);
		plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
			l80_Nova_testResult,
		plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_subtractFractionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l108_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_FractionTests_Nova_subtractFraction((plumbercalc_tests_Nova_FractionTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_subtractFractionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l108_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_subtractFractionTimer,
			plumbercalc_tests_Nova_FractionTests_Nova__subtractFractionTestCase);
			plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
				l108_Nova_testResult,
			plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l113_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l113_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l113_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_subtractFractionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l113_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l113_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_subtractFractionTimer,
		plumbercalc_tests_Nova_FractionTests_Nova__subtractFractionTestCase);
		plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
			l113_Nova_testResult,
		plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_multiplyFractionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l141_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_FractionTests_Nova_multiplyFraction((plumbercalc_tests_Nova_FractionTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_multiplyFractionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l141_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_multiplyFractionTimer,
			plumbercalc_tests_Nova_FractionTests_Nova__multiplyFractionTestCase);
			plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
				l141_Nova_testResult,
			plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l146_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l146_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l146_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_multiplyFractionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l146_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l146_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_multiplyFractionTimer,
		plumbercalc_tests_Nova_FractionTests_Nova__multiplyFractionTestCase);
		plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
			l146_Nova_testResult,
		plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_divideFractionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l174_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			plumbercalc_tests_Nova_FractionTests_Nova_divideFraction((plumbercalc_tests_Nova_FractionTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_divideFractionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l174_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_divideFractionTimer,
			plumbercalc_tests_Nova_FractionTests_Nova__divideFractionTestCase);
			plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
				l174_Nova_testResult,
			plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l179_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l179_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l179_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_divideFractionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l179_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l179_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_divideFractionTimer,
		plumbercalc_tests_Nova_FractionTests_Nova__divideFractionTestCase);
		plumbercalc_tests_Nova_FractionTests_Nova_onResult(plumbercalc_tests_Nova_FractionTests_ref_Nova_onResult,
			l179_Nova_testResult,
		plumbercalc_tests_Nova_FractionTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

plumbercalc_tests_Nova_FractionTests* plumbercalc_tests_Nova_FractionTests_Nova_this(plumbercalc_tests_Nova_FractionTests* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated5(plumbercalc_tests_Nova_FractionTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 6);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	l1_Nova_temp[4] = value4;
	l1_Nova_temp[5] = value5;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	6);
}

void plumbercalc_tests_Nova_FractionTests_Nova_lambda175(plumbercalc_tests_Nova_FractionTests* this, novex_nest_Nova_TestResult* _1, Context196* context)
{
}

novex_nest_Nova_TestRunnerModel* plumbercalc_tests_Nova_FractionTests_Accessorfunc_Nova_model(plumbercalc_tests_Nova_FractionTests* this)
{
	return plumbercalc_tests_Nova_FractionTests_Nova__runTestsTestRunner;
}


void plumbercalc_tests_Nova_FractionTests_Nova_super(plumbercalc_tests_Nova_FractionTests* this)
{
	this->plumbercalc_tests_Nova_FractionTests_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

