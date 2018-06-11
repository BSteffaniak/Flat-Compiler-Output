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
} Context204;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;

typedef int (*stabilitytest_Nova_ClosureStability_closure522_Nova_closure)(void*, int, int, void*);
typedef double (*stabilitytest_Nova_ClosureStability_closure523_Nova_closure)(void*, double, void*);
typedef void (*stabilitytest_Nova_ClosureStability_closure524_Nova_closure)(void*, void*);

CCLASS_PRIVATE
(
	stabilitytest_Nova_ClosureStability,
	int stabilitytest_Nova_ClosureStability_Nova_number;
	
)
int stabilitytest_Nova_ClosureStability_Nova_incrementNumber(stabilitytest_Nova_ClosureStability* this);
void stabilitytest_Nova_ClosureStability_Nova_testMathClosures(stabilitytest_Nova_ClosureStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_ClosureStability_Nova_testInstanceClosure(stabilitytest_Nova_ClosureStability* this, nova_io_Nova_OutputStream* out);
int stabilitytest_Nova_ClosureStability_static_Nova_callClosure(stabilitytest_Nova_ClosureStability* this, stabilitytest_Nova_ClosureStability_closure522_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* stabilitytest_Nova_ClosureStability_context_Nova_closure, int a, int b);
double stabilitytest_Nova_ClosureStability_static_Nova_mathClosure(stabilitytest_Nova_ClosureStability* this, stabilitytest_Nova_ClosureStability_closure523_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* stabilitytest_Nova_ClosureStability_context_Nova_closure, double value);
void stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure(stabilitytest_Nova_ClosureStability* this, stabilitytest_Nova_ClosureStability_closure524_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* stabilitytest_Nova_ClosureStability_context_Nova_closure);
int stabilitytest_Nova_ClosureStability_static_Nova_multiply(stabilitytest_Nova_ClosureStability* this, int value1, int value2);
int stabilitytest_Nova_ClosureStability_static_Nova_pow(stabilitytest_Nova_ClosureStability* this, int base, int pow);
nova_datastruct_list_Nova_Array* generated12(stabilitytest_Nova_ClosureStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1);
void stabilitytest_Nova_ClosureStability_Nova_lambda183(stabilitytest_Nova_ClosureStability* this, novex_nest_Nova_TestResult* _1, Context204* context);


int stabilitytest_Nova_ClosureStability_Nova_incrementNumber(stabilitytest_Nova_ClosureStability* this);
void stabilitytest_Nova_ClosureStability_Nova_testMathClosures(stabilitytest_Nova_ClosureStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_ClosureStability_Nova_testInstanceClosure(stabilitytest_Nova_ClosureStability* this, nova_io_Nova_OutputStream* out);
int stabilitytest_Nova_ClosureStability_static_Nova_callClosure(stabilitytest_Nova_ClosureStability* this, stabilitytest_Nova_ClosureStability_closure522_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* stabilitytest_Nova_ClosureStability_context_Nova_closure, int a, int b);
double stabilitytest_Nova_ClosureStability_static_Nova_mathClosure(stabilitytest_Nova_ClosureStability* this, stabilitytest_Nova_ClosureStability_closure523_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* stabilitytest_Nova_ClosureStability_context_Nova_closure, double value);
void stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure(stabilitytest_Nova_ClosureStability* this, stabilitytest_Nova_ClosureStability_closure524_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* stabilitytest_Nova_ClosureStability_context_Nova_closure);
int stabilitytest_Nova_ClosureStability_static_Nova_multiply(stabilitytest_Nova_ClosureStability* this, int value1, int value2);
int stabilitytest_Nova_ClosureStability_static_Nova_pow(stabilitytest_Nova_ClosureStability* this, int base, int pow);
nova_datastruct_list_Nova_Array* generated12(stabilitytest_Nova_ClosureStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1);
void stabilitytest_Nova_ClosureStability_Nova_lambda183(stabilitytest_Nova_ClosureStability* this, novex_nest_Nova_TestResult* _1, Context204* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_ClosureStability_Nova__testMathClosuresTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_ClosureStability_Nova__testInstanceClosureTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_ClosureStability_Nova__runTestsTestRunner;
double stabilitytest_Nova_ClosureStability_Nova_TOLERANCE;
char stabilitytest_Nova_ClosureStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_ClosureStability_Nova_init_static()
{
	if (!stabilitytest_Nova_ClosureStability_Nova_init_static_inited) {
		stabilitytest_Nova_ClosureStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_ClosureStability_Nova_TOLERANCE = (double)(0.0000000001);
			stabilitytest_Nova_ClosureStability_Nova__testMathClosuresTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testMathClosures")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing static math closures")));
			stabilitytest_Nova_ClosureStability_Nova__testInstanceClosureTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testInstanceClosure")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing instance closures")));
			stabilitytest_Nova_ClosureStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated12(0,
					stabilitytest_Nova_ClosureStability_Nova__testMathClosuresTestCase,
				stabilitytest_Nova_ClosureStability_Nova__testInstanceClosureTestCase),
			0);
		}
	}
}

stabilitytest_Nova_ClosureStability* stabilitytest_Nova_ClosureStability_Nova_construct(stabilitytest_Nova_ClosureStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_ClosureStability, this);
	this->vtable = &stabilitytest_Nova_ClosureStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_ClosureStability_Nova_super(this);
	
	return stabilitytest_Nova_ClosureStability_Nova_this((stabilitytest_Nova_ClosureStability*)(this));
}

void stabilitytest_Nova_ClosureStability_Nova_destroy(stabilitytest_Nova_ClosureStability** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_ClosureStability_Nova_model);
	
	NOVA_FREE(*this);
}

int stabilitytest_Nova_ClosureStability_Nova_incrementNumber(stabilitytest_Nova_ClosureStability* this)
{
	return this->prv->stabilitytest_Nova_ClosureStability_Nova_number++;
}

void stabilitytest_Nova_ClosureStability_Nova_testMathClosures(stabilitytest_Nova_ClosureStability* this, nova_io_Nova_OutputStream* out)
{
	int l1_Nova_a = 0;
	int l1_Nova_b = 0;
	double l1_Nova_value = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing static math closures ")));
	l1_Nova_a = (int)(5);
	l1_Nova_b = (int)(3);
	l1_Nova_value = (double)(0.5);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int51_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				stabilitytest_Nova_ClosureStability_static_Nova_callClosure((stabilitytest_Nova_ClosureStability*)(this),
					(stabilitytest_Nova_ClosureStability_closure522_Nova_closure)&stabilitytest_Nova_ClosureStability_static_Nova_multiply, this, nova_null,
					l1_Nova_a,
		l1_Nova_b))),
		stabilitytest_Nova_ClosureStability_static_Nova_multiply((stabilitytest_Nova_ClosureStability*)(this),
			l1_Nova_a,
		l1_Nova_b),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call multiply(Int, Int) closure")));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int52_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				stabilitytest_Nova_ClosureStability_static_Nova_callClosure((stabilitytest_Nova_ClosureStability*)(this),
					(stabilitytest_Nova_ClosureStability_closure522_Nova_closure)&stabilitytest_Nova_ClosureStability_static_Nova_pow, this, nova_null,
					l1_Nova_a,
		l1_Nova_b))),
		stabilitytest_Nova_ClosureStability_static_Nova_pow((stabilitytest_Nova_ClosureStability*)(this),
			l1_Nova_a,
		l1_Nova_b),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call pow(Int, Int) closure")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool53_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				stabilitytest_Nova_ClosureStability_static_Nova_mathClosure((stabilitytest_Nova_ClosureStability*)(this),
					(stabilitytest_Nova_ClosureStability_closure523_Nova_closure)&nova_math_Nova_Math_static_Nova_sin, nova_math_Nova_Math_static_Nova_sin, nova_null,
				l1_Nova_value) - nova_math_Nova_Math_static_Nova_sin((nova_math_Nova_Math*)(0),
		l1_Nova_value) < stabilitytest_Nova_ClosureStability_Nova_TOLERANCE)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call Math.sin(Double) closure")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool54_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				stabilitytest_Nova_ClosureStability_static_Nova_mathClosure((stabilitytest_Nova_ClosureStability*)(this),
					(stabilitytest_Nova_ClosureStability_closure523_Nova_closure)&nova_math_Nova_Math_static_Nova_tan, nova_math_Nova_Math_static_Nova_tan, nova_null,
				l1_Nova_value) - nova_math_Nova_Math_static_Nova_tan((nova_math_Nova_Math*)(0),
		l1_Nova_value) < stabilitytest_Nova_ClosureStability_Nova_TOLERANCE)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call Math.tan(Double) closure")));
}

void stabilitytest_Nova_ClosureStability_Nova_testInstanceClosure(stabilitytest_Nova_ClosureStability* this, nova_io_Nova_OutputStream* out)
{
	stabilitytest_Nova_ClosureStability* l1_Nova_c = (stabilitytest_Nova_ClosureStability*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing instance closures ")));
	l1_Nova_c = stabilitytest_Nova_ClosureStability_Nova_construct(0);
	stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure((stabilitytest_Nova_ClosureStability*)(this),
		(stabilitytest_Nova_ClosureStability_closure524_Nova_closure)&stabilitytest_Nova_ClosureStability_Nova_incrementNumber, l1_Nova_c, nova_null);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool55_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_c->prv->stabilitytest_Nova_ClosureStability_Nova_number == 0)),
		0,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call incrementNumber() instance closure")));
	stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure((stabilitytest_Nova_ClosureStability*)(this),
		(stabilitytest_Nova_ClosureStability_closure524_Nova_closure)&stabilitytest_Nova_ClosureStability_Nova_incrementNumber, stabilitytest_Nova_ClosureStability_Nova_construct(0), nova_null);
	stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure((stabilitytest_Nova_ClosureStability*)(this),
		(stabilitytest_Nova_ClosureStability_closure524_Nova_closure)&stabilitytest_Nova_ClosureStability_Nova_incrementNumber, l1_Nova_c, nova_null);
}

int stabilitytest_Nova_ClosureStability_static_Nova_callClosure(stabilitytest_Nova_ClosureStability* this, stabilitytest_Nova_ClosureStability_closure522_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* stabilitytest_Nova_ClosureStability_context_Nova_closure, int a, int b)
{
	return stabilitytest_Nova_ClosureStability_Nova_closure(stabilitytest_Nova_ClosureStability_ref_Nova_closure,
		a,
		b,
	stabilitytest_Nova_ClosureStability_context_Nova_closure);
}

double stabilitytest_Nova_ClosureStability_static_Nova_mathClosure(stabilitytest_Nova_ClosureStability* this, stabilitytest_Nova_ClosureStability_closure523_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* stabilitytest_Nova_ClosureStability_context_Nova_closure, double value)
{
	return stabilitytest_Nova_ClosureStability_Nova_closure(stabilitytest_Nova_ClosureStability_ref_Nova_closure,
		value,
	stabilitytest_Nova_ClosureStability_context_Nova_closure);
}

void stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure(stabilitytest_Nova_ClosureStability* this, stabilitytest_Nova_ClosureStability_closure524_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* stabilitytest_Nova_ClosureStability_context_Nova_closure)
{
	stabilitytest_Nova_ClosureStability_Nova_closure(stabilitytest_Nova_ClosureStability_ref_Nova_closure,
	stabilitytest_Nova_ClosureStability_context_Nova_closure);
}

int stabilitytest_Nova_ClosureStability_static_Nova_multiply(stabilitytest_Nova_ClosureStability* this, int value1, int value2)
{
	return value1 * value2;
}

int stabilitytest_Nova_ClosureStability_static_Nova_pow(stabilitytest_Nova_ClosureStability* this, int base, int pow)
{
	int l1_Nova_value = 0;
	
	l1_Nova_value = base;
	int l9_Nova_i;
	l9_Nova_i = (int)0;
	for (; l9_Nova_i < (int)(pow - 1); l9_Nova_i++)
	{
		l1_Nova_value *= base;
	}
	return l1_Nova_value;
}

void stabilitytest_Nova_ClosureStability_Nova_runTests(stabilitytest_Nova_ClosureStability* this, stabilitytest_Nova_ClosureStability_closure525_Nova_onResult stabilitytest_Nova_ClosureStability_Nova_onResult, void* stabilitytest_Nova_ClosureStability_ref_Nova_onResult, void* stabilitytest_Nova_ClosureStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context204* contextArg183 = NOVA_MALLOC(sizeof(Context204));
	nova_time_Nova_Timer* l1_Nova_testMathClosuresTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testInstanceClosureTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_ClosureStability_Nova_onResult = (stabilitytest_Nova_ClosureStability_closure525_Nova_onResult)(stabilitytest_Nova_ClosureStability_Nova_onResult == 0 ? (stabilitytest_Nova_ClosureStability_closure525_Nova_onResult)&stabilitytest_Nova_ClosureStability_Nova_lambda183 : stabilitytest_Nova_ClosureStability_Nova_onResult);
	stabilitytest_Nova_ClosureStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_ClosureStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_ClosureStability_ref_Nova_onResult);
	stabilitytest_Nova_ClosureStability_context_Nova_onResult = (void*)(stabilitytest_Nova_ClosureStability_context_Nova_onResult == 0 ? (void*)contextArg183 : stabilitytest_Nova_ClosureStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing ClosureStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_testMathClosuresTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_ClosureStability_Nova_testMathClosures((stabilitytest_Nova_ClosureStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testMathClosuresTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testMathClosuresTimer,
			stabilitytest_Nova_ClosureStability_Nova__testMathClosuresTestCase);
			stabilitytest_Nova_ClosureStability_Nova_onResult(stabilitytest_Nova_ClosureStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_ClosureStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testMathClosuresTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testMathClosuresTimer,
		stabilitytest_Nova_ClosureStability_Nova__testMathClosuresTestCase);
		stabilitytest_Nova_ClosureStability_Nova_onResult(stabilitytest_Nova_ClosureStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_ClosureStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testInstanceClosureTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_ClosureStability_Nova_testInstanceClosure((stabilitytest_Nova_ClosureStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testInstanceClosureTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testInstanceClosureTimer,
			stabilitytest_Nova_ClosureStability_Nova__testInstanceClosureTestCase);
			stabilitytest_Nova_ClosureStability_Nova_onResult(stabilitytest_Nova_ClosureStability_ref_Nova_onResult,
				l42_Nova_testResult,
			stabilitytest_Nova_ClosureStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testInstanceClosureTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l47_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testInstanceClosureTimer,
		stabilitytest_Nova_ClosureStability_Nova__testInstanceClosureTestCase);
		stabilitytest_Nova_ClosureStability_Nova_onResult(stabilitytest_Nova_ClosureStability_ref_Nova_onResult,
			l47_Nova_testResult,
		stabilitytest_Nova_ClosureStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_ClosureStability* stabilitytest_Nova_ClosureStability_Nova_this(stabilitytest_Nova_ClosureStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated12(stabilitytest_Nova_ClosureStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 2);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	2);
}

void stabilitytest_Nova_ClosureStability_Nova_lambda183(stabilitytest_Nova_ClosureStability* this, novex_nest_Nova_TestResult* _1, Context204* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_ClosureStability_Accessorfunc_Nova_model(stabilitytest_Nova_ClosureStability* this)
{
	return stabilitytest_Nova_ClosureStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_ClosureStability_Nova_super(stabilitytest_Nova_ClosureStability* this)
{
	this->stabilitytest_Nova_ClosureStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
	this->prv->stabilitytest_Nova_ClosureStability_Nova_number = 0;
}

