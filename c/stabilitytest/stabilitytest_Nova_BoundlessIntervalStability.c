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
#include <nova/time/nova_time_Nova_DateTime.h>
#include <nova/time/nova_time_Nova_DateTime.h>
#include <nova/time/nova_time_Nova_Interval.h>
#include <nova/time/nova_time_Nova_BoundedInterval.h>
#include <nova/time/nova_time_Nova_BoundlessInterval.h>
#include <nova/time/nova_time_Nova_Interval.h>
#include <nova/time/nova_time_Nova_BoundlessInterval.h>
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <novex/nest/novex_nest_Nova_TestSuite.h>
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundedIntervalStability.h>
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
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context83;
typedef struct
{
} Context84;
typedef struct
{
} Context85;
typedef struct
{
} Context86;
typedef struct
{
} Context87;
typedef struct
{
} Context88;
typedef struct
{
	/* let
	Interval interval */ nova_time_Nova_Interval** stabilitytest_Nova_BoundlessIntervalStability_Nova_interval;
} Context89;
typedef struct
{
} Context202;


void stabilitytest_Nova_BoundlessIntervalStability_Nova_invalidBoundlessIntervalBounds(stabilitytest_Nova_BoundlessIntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_validIntervalBounds(stabilitytest_Nova_BoundlessIntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_infiniteIntervalValues(stabilitytest_Nova_BoundlessIntervalStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated10(stabilitytest_Nova_BoundlessIntervalStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda84(stabilitytest_Nova_BoundlessIntervalStability* this, Context83* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda85(stabilitytest_Nova_BoundlessIntervalStability* this, Context84* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda86(stabilitytest_Nova_BoundlessIntervalStability* this, Context85* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda87(stabilitytest_Nova_BoundlessIntervalStability* this, Context86* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda88(stabilitytest_Nova_BoundlessIntervalStability* this, Context87* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda89(stabilitytest_Nova_BoundlessIntervalStability* this, Context88* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda90(stabilitytest_Nova_BoundlessIntervalStability* this, Context89* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda181(stabilitytest_Nova_BoundlessIntervalStability* this, novex_nest_Nova_TestResult* _1, Context202* context);


void stabilitytest_Nova_BoundlessIntervalStability_Nova_invalidBoundlessIntervalBounds(stabilitytest_Nova_BoundlessIntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_validIntervalBounds(stabilitytest_Nova_BoundlessIntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_infiniteIntervalValues(stabilitytest_Nova_BoundlessIntervalStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated10(stabilitytest_Nova_BoundlessIntervalStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda84(stabilitytest_Nova_BoundlessIntervalStability* this, Context83* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda85(stabilitytest_Nova_BoundlessIntervalStability* this, Context84* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda86(stabilitytest_Nova_BoundlessIntervalStability* this, Context85* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda87(stabilitytest_Nova_BoundlessIntervalStability* this, Context86* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda88(stabilitytest_Nova_BoundlessIntervalStability* this, Context87* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda89(stabilitytest_Nova_BoundlessIntervalStability* this, Context88* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda90(stabilitytest_Nova_BoundlessIntervalStability* this, Context89* context);
void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda181(stabilitytest_Nova_BoundlessIntervalStability* this, novex_nest_Nova_TestResult* _1, Context202* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_BoundlessIntervalStability_Nova__invalidBoundlessIntervalBoundsTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_BoundlessIntervalStability_Nova__validIntervalBoundsTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_BoundlessIntervalStability_Nova__infiniteIntervalValuesTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_BoundlessIntervalStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_BoundlessIntervalStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_BoundlessIntervalStability_Nova_init_static()
{
	if (!stabilitytest_Nova_BoundlessIntervalStability_Nova_init_static_inited) {
		stabilitytest_Nova_BoundlessIntervalStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_BoundlessIntervalStability_Nova__invalidBoundlessIntervalBoundsTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("invalidBoundlessIntervalBounds")),
			0);
			stabilitytest_Nova_BoundlessIntervalStability_Nova__validIntervalBoundsTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("validIntervalBounds")),
			0);
			stabilitytest_Nova_BoundlessIntervalStability_Nova__infiniteIntervalValuesTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("infiniteIntervalValues")),
			0);
			stabilitytest_Nova_BoundlessIntervalStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated10(0,
					stabilitytest_Nova_BoundlessIntervalStability_Nova__invalidBoundlessIntervalBoundsTestCase,
					stabilitytest_Nova_BoundlessIntervalStability_Nova__validIntervalBoundsTestCase,
				stabilitytest_Nova_BoundlessIntervalStability_Nova__infiniteIntervalValuesTestCase),
			0);
		}
	}
}

stabilitytest_Nova_BoundlessIntervalStability* stabilitytest_Nova_BoundlessIntervalStability_Nova_construct(stabilitytest_Nova_BoundlessIntervalStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_BoundlessIntervalStability, this,);
	this->vtable = &stabilitytest_Nova_BoundlessIntervalStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_BoundlessIntervalStability_Nova_super(this);
	
	return stabilitytest_Nova_BoundlessIntervalStability_Nova_this((stabilitytest_Nova_BoundlessIntervalStability*)(this));
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_destroy(stabilitytest_Nova_BoundlessIntervalStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_BoundlessIntervalStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_invalidBoundlessIntervalBounds(stabilitytest_Nova_BoundlessIntervalStability* this, nova_io_Nova_OutputStream* out)
{
	Context83* contextArg84 = NOVA_MALLOC(sizeof(Context83));
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing invalidBoundlessIntervalBounds ")));
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda84, this, contextArg84)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_validIntervalBounds(stabilitytest_Nova_BoundlessIntervalStability* this, nova_io_Nova_OutputStream* out)
{
	Context84* contextArg85 = NOVA_MALLOC(sizeof(Context84));
	Context85* contextArg86 = NOVA_MALLOC(sizeof(Context85));
	Context86* contextArg87 = NOVA_MALLOC(sizeof(Context86));
	Context87* contextArg88 = NOVA_MALLOC(sizeof(Context87));
	Context88* contextArg89 = NOVA_MALLOC(sizeof(Context88));
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing validIntervalBounds ")));
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda85, this, contextArg85)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda86, this, contextArg86)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda87, this, contextArg87)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda88, this, contextArg88)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda89, this, contextArg89)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_infiniteIntervalValues(stabilitytest_Nova_BoundlessIntervalStability* this, nova_io_Nova_OutputStream* out)
{
	Context89* contextArg90 = NOVA_MALLOC(sizeof(Context89));
	nova_time_Nova_Interval* l1_Nova_interval = (nova_time_Nova_Interval*)nova_null;
	nova_time_Nova_Interval** heap89_0 = (nova_time_Nova_Interval**)NOVA_MALLOC(sizeof(nova_time_Nova_Interval*));
	*heap89_0 = l1_Nova_interval;
	contextArg90->stabilitytest_Nova_BoundlessIntervalStability_Nova_interval = heap89_0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing infiniteIntervalValues ")));
	(*heap89_0) = nova_time_Nova_Interval_Nova_construct(0,
		(nova_time_Nova_DateTime*)((nova_Nova_Object*)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda90, this, contextArg90)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InfiniteIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_runTests(stabilitytest_Nova_BoundlessIntervalStability* this, stabilitytest_Nova_BoundlessIntervalStability_closure520_Nova_onResult stabilitytest_Nova_BoundlessIntervalStability_Nova_onResult, void* stabilitytest_Nova_BoundlessIntervalStability_ref_Nova_onResult, void* stabilitytest_Nova_BoundlessIntervalStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context202* contextArg181 = NOVA_MALLOC(sizeof(Context202));
	nova_time_Nova_Timer* l1_Nova_invalidBoundlessIntervalBoundsTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_validIntervalBoundsTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_infiniteIntervalValuesTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_BoundlessIntervalStability_Nova_onResult = (stabilitytest_Nova_BoundlessIntervalStability_closure520_Nova_onResult)(stabilitytest_Nova_BoundlessIntervalStability_Nova_onResult == 0 ? (stabilitytest_Nova_BoundlessIntervalStability_closure520_Nova_onResult)&stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda181 : stabilitytest_Nova_BoundlessIntervalStability_Nova_onResult);
	stabilitytest_Nova_BoundlessIntervalStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_BoundlessIntervalStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_BoundlessIntervalStability_ref_Nova_onResult);
	stabilitytest_Nova_BoundlessIntervalStability_context_Nova_onResult = (void*)(stabilitytest_Nova_BoundlessIntervalStability_context_Nova_onResult == 0 ? (void*)contextArg181 : stabilitytest_Nova_BoundlessIntervalStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing BoundlessIntervalStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_invalidBoundlessIntervalBoundsTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_BoundlessIntervalStability_Nova_invalidBoundlessIntervalBounds((stabilitytest_Nova_BoundlessIntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidBoundlessIntervalBoundsTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_invalidBoundlessIntervalBoundsTimer,
			stabilitytest_Nova_BoundlessIntervalStability_Nova__invalidBoundlessIntervalBoundsTestCase);
			stabilitytest_Nova_BoundlessIntervalStability_Nova_onResult(stabilitytest_Nova_BoundlessIntervalStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_BoundlessIntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidBoundlessIntervalBoundsTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_invalidBoundlessIntervalBoundsTimer,
		stabilitytest_Nova_BoundlessIntervalStability_Nova__invalidBoundlessIntervalBoundsTestCase);
		stabilitytest_Nova_BoundlessIntervalStability_Nova_onResult(stabilitytest_Nova_BoundlessIntervalStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_BoundlessIntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_validIntervalBoundsTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_BoundlessIntervalStability_Nova_validIntervalBounds((stabilitytest_Nova_BoundlessIntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_validIntervalBoundsTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_validIntervalBoundsTimer,
			stabilitytest_Nova_BoundlessIntervalStability_Nova__validIntervalBoundsTestCase);
			stabilitytest_Nova_BoundlessIntervalStability_Nova_onResult(stabilitytest_Nova_BoundlessIntervalStability_ref_Nova_onResult,
				l42_Nova_testResult,
			stabilitytest_Nova_BoundlessIntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_validIntervalBoundsTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l47_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_validIntervalBoundsTimer,
		stabilitytest_Nova_BoundlessIntervalStability_Nova__validIntervalBoundsTestCase);
		stabilitytest_Nova_BoundlessIntervalStability_Nova_onResult(stabilitytest_Nova_BoundlessIntervalStability_ref_Nova_onResult,
			l47_Nova_testResult,
		stabilitytest_Nova_BoundlessIntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_infiniteIntervalValuesTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l75_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_BoundlessIntervalStability_Nova_infiniteIntervalValues((stabilitytest_Nova_BoundlessIntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_infiniteIntervalValuesTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l75_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_infiniteIntervalValuesTimer,
			stabilitytest_Nova_BoundlessIntervalStability_Nova__infiniteIntervalValuesTestCase);
			stabilitytest_Nova_BoundlessIntervalStability_Nova_onResult(stabilitytest_Nova_BoundlessIntervalStability_ref_Nova_onResult,
				l75_Nova_testResult,
			stabilitytest_Nova_BoundlessIntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l80_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l80_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l80_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_infiniteIntervalValuesTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l80_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l80_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_infiniteIntervalValuesTimer,
		stabilitytest_Nova_BoundlessIntervalStability_Nova__infiniteIntervalValuesTestCase);
		stabilitytest_Nova_BoundlessIntervalStability_Nova_onResult(stabilitytest_Nova_BoundlessIntervalStability_ref_Nova_onResult,
			l80_Nova_testResult,
		stabilitytest_Nova_BoundlessIntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_BoundlessIntervalStability* stabilitytest_Nova_BoundlessIntervalStability_Nova_this(stabilitytest_Nova_BoundlessIntervalStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated10(stabilitytest_Nova_BoundlessIntervalStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2)
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

void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda84(stabilitytest_Nova_BoundlessIntervalStability* this, Context83* context)
{
	nova_time_Nova_BoundlessInterval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			4,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda85(stabilitytest_Nova_BoundlessIntervalStability* this, Context84* context)
{
	nova_time_Nova_BoundlessInterval_Nova_construct(0,
		0,
	0);
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda86(stabilitytest_Nova_BoundlessIntervalStability* this, Context85* context)
{
	nova_time_Nova_BoundlessInterval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
	0);
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda87(stabilitytest_Nova_BoundlessIntervalStability* this, Context86* context)
{
	nova_time_Nova_BoundlessInterval_Nova_construct(0,
		0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda88(stabilitytest_Nova_BoundlessIntervalStability* this, Context87* context)
{
	nova_time_Nova_BoundlessInterval_Nova_construct(0,
		(nova_time_Nova_DateTime*)((nova_Nova_Object*)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda89(stabilitytest_Nova_BoundlessIntervalStability* this, Context88* context)
{
	nova_time_Nova_BoundlessInterval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			4,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		(nova_time_Nova_DateTime*)((nova_Nova_Object*)nova_null));
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda90(stabilitytest_Nova_BoundlessIntervalStability* this, Context89* context)
{
	nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)((*context->stabilitytest_Nova_BoundlessIntervalStability_Nova_interval)));
}

void stabilitytest_Nova_BoundlessIntervalStability_Nova_lambda181(stabilitytest_Nova_BoundlessIntervalStability* this, novex_nest_Nova_TestResult* _1, Context202* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_BoundlessIntervalStability_Accessorfunc_Nova_model(stabilitytest_Nova_BoundlessIntervalStability* this)
{
	return stabilitytest_Nova_BoundlessIntervalStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_BoundlessIntervalStability_Nova_super(stabilitytest_Nova_BoundlessIntervalStability* this)
{
	this->stabilitytest_Nova_BoundlessIntervalStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

