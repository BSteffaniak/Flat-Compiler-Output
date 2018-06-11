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
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestException.h>
#include <stabilitytest/stabilitytest_Nova_StaticImportStability.h>
#include <stabilitytest/stabilitytest_Nova_SyntaxStability.h>
#include <stabilitytest/stabilitytest_Nova_ThreadImplementation.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context223;


void stabilitytest_Nova_ToStringStability_Nova_testToString(stabilitytest_Nova_ToStringStability* this);
char stabilitytest_Nova_ToStringStability_0_Nova_checkToString(stabilitytest_Nova_ToStringStability* this, nova_Nova_String* type, nova_primitive_number_Nova_Number* number, nova_Nova_String* expected);
char stabilitytest_Nova_ToStringStability_String_double_String_char1_Nova_checkToString(stabilitytest_Nova_ToStringStability* this, nova_Nova_String* type, double number, nova_Nova_String* expected);
void stabilitytest_Nova_ToStringStability_Nova_lambda202(stabilitytest_Nova_ToStringStability* this, novex_nest_Nova_TestResult* _1, Context223* context);


void stabilitytest_Nova_ToStringStability_Nova_testToString(stabilitytest_Nova_ToStringStability* this);
char stabilitytest_Nova_ToStringStability_0_Nova_checkToString(stabilitytest_Nova_ToStringStability* this, nova_Nova_String* type, nova_primitive_number_Nova_Number* number, nova_Nova_String* expected);
char stabilitytest_Nova_ToStringStability_String_double_String_char1_Nova_checkToString(stabilitytest_Nova_ToStringStability* this, nova_Nova_String* type, double number, nova_Nova_String* expected);
void stabilitytest_Nova_ToStringStability_Nova_lambda202(stabilitytest_Nova_ToStringStability* this, novex_nest_Nova_TestResult* _1, Context223* context);

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_ToStringStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_ToStringStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_ToStringStability_Nova_init_static()
{
	if (!stabilitytest_Nova_ToStringStability_Nova_init_static_inited) {
		stabilitytest_Nova_ToStringStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_ToStringStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				nova_datastruct_list_Nova_Array_1_Nova_construct(0,
					0,
					(int)(intptr_t)nova_null),
			0);
		}
	}
}

stabilitytest_Nova_ToStringStability* stabilitytest_Nova_ToStringStability_Nova_construct(stabilitytest_Nova_ToStringStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_ToStringStability, this,);
	this->vtable = &stabilitytest_Nova_ToStringStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_ToStringStability_Nova_super(this);
	
	return stabilitytest_Nova_ToStringStability_Nova_this((stabilitytest_Nova_ToStringStability*)(this));
}

void stabilitytest_Nova_ToStringStability_Nova_destroy(stabilitytest_Nova_ToStringStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_ToStringStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ToStringStability_Nova_testToString(stabilitytest_Nova_ToStringStability* this)
{
	double l1_Nova_d = 0;
	char l1_Nova_b = 0;
	int l1_Nova_i = 0;
	long_long l1_Nova_l = 0;
	
	l1_Nova_d = (double)(5.232);
	stabilitytest_Nova_ToStringStability_String_double_String_char1_Nova_checkToString((stabilitytest_Nova_ToStringStability*)(this),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Double")),
		l1_Nova_d,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("5.232")));
	l1_Nova_b = 127;
	stabilitytest_Nova_ToStringStability_String_double_String_char1_Nova_checkToString((stabilitytest_Nova_ToStringStability*)(this),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Byte")),
		l1_Nova_b,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("127")));
	l1_Nova_i = 2147483647;
	stabilitytest_Nova_ToStringStability_String_double_String_char1_Nova_checkToString((stabilitytest_Nova_ToStringStability*)(this),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Int")),
		l1_Nova_i,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("2147483647")));
	l1_Nova_l = (-9223372036854775807LL - 1);
	stabilitytest_Nova_ToStringStability_String_double_String_char1_Nova_checkToString((stabilitytest_Nova_ToStringStability*)(this),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Long")),
		l1_Nova_l,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("-9223372036854775808")));
}

char stabilitytest_Nova_ToStringStability_0_Nova_checkToString(stabilitytest_Nova_ToStringStability* this, nova_Nova_String* type, nova_primitive_number_Nova_Number* number, nova_Nova_String* expected)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool3_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(number))),
					(nova_Nova_Object*)(expected)))),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((type)),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(".toString failed. expected "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((expected)),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(" but received "))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((number)))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
																(char*)(" "))),
														(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
																		(nova_datastruct_Nova_Comparable_virtual1_Nova_compareTo((nova_datastruct_Nova_Comparable*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(number))),
																				(nova_Nova_Object*)(expected))))),
																(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																		(char*)(""))))))))))))))))));
}

void stabilitytest_Nova_ToStringStability_Nova_runTests(stabilitytest_Nova_ToStringStability* this, stabilitytest_Nova_ToStringStability_closure948_Nova_onResult stabilitytest_Nova_ToStringStability_Nova_onResult, void* stabilitytest_Nova_ToStringStability_ref_Nova_onResult, void* stabilitytest_Nova_ToStringStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context223* contextArg202 = NOVA_MALLOC(sizeof(Context223));
	stabilitytest_Nova_ToStringStability_Nova_onResult = (stabilitytest_Nova_ToStringStability_closure948_Nova_onResult)(stabilitytest_Nova_ToStringStability_Nova_onResult == 0 ? (stabilitytest_Nova_ToStringStability_closure948_Nova_onResult)&stabilitytest_Nova_ToStringStability_Nova_lambda202 : stabilitytest_Nova_ToStringStability_Nova_onResult);
	stabilitytest_Nova_ToStringStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_ToStringStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_ToStringStability_ref_Nova_onResult);
	stabilitytest_Nova_ToStringStability_context_Nova_onResult = (void*)(stabilitytest_Nova_ToStringStability_context_Nova_onResult == 0 ? (void*)contextArg202 : stabilitytest_Nova_ToStringStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing ToStringStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_ToStringStability* stabilitytest_Nova_ToStringStability_Nova_this(stabilitytest_Nova_ToStringStability* this) {
	return this;
}
char stabilitytest_Nova_ToStringStability_String_double_String_char1_Nova_checkToString(stabilitytest_Nova_ToStringStability* this, nova_Nova_String* type, double number, nova_Nova_String* expected)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool281_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
					number)),
					(nova_Nova_Object*)(expected)))),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((type)),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(".toString failed. expected "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((expected)),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(" but received "))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
																	number)),
																	(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
																					(char*)(" "))),
																			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
																							(nova_datastruct_Nova_Comparable_virtual1_Nova_compareTo((nova_datastruct_Nova_Comparable*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
																									number)),
																									(nova_Nova_Object*)(expected))))),
																					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																							(char*)("")))))))))))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
																(char*)(" "))),
														(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
																		(nova_datastruct_Nova_Comparable_virtual1_Nova_compareTo((nova_datastruct_Nova_Comparable*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
																				number)),
																				(nova_Nova_Object*)(expected))))),
																(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																		(char*)(""))))))))))))))))));
}

void stabilitytest_Nova_ToStringStability_Nova_lambda202(stabilitytest_Nova_ToStringStability* this, novex_nest_Nova_TestResult* _1, Context223* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_ToStringStability_Accessorfunc_Nova_model(stabilitytest_Nova_ToStringStability* this)
{
	return stabilitytest_Nova_ToStringStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_ToStringStability_Nova_super(stabilitytest_Nova_ToStringStability* this)
{
	this->stabilitytest_Nova_ToStringStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

