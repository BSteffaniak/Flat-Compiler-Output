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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <novex/nest/novex_nest_Nova_TestSuite.h>
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundedIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundlessIntervalStability.h>
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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context203;


void stabilitytest_Nova_CastStability_Nova_validPrimitveNumericCasts(stabilitytest_Nova_CastStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_CastStability_Nova_validArrayTypeCast(stabilitytest_Nova_CastStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_CastStability_Nova_incompatibleCast(stabilitytest_Nova_CastStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated11(stabilitytest_Nova_CastStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
nova_datastruct_list_Int_Nova_Array1Int* generated53(stabilitytest_Nova_CastStability* this);
void stabilitytest_Nova_CastStability_Nova_lambda182(stabilitytest_Nova_CastStability* this, novex_nest_Nova_TestResult* _1, Context203* context);


void stabilitytest_Nova_CastStability_Nova_validPrimitveNumericCasts(stabilitytest_Nova_CastStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_CastStability_Nova_validArrayTypeCast(stabilitytest_Nova_CastStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_CastStability_Nova_incompatibleCast(stabilitytest_Nova_CastStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated11(stabilitytest_Nova_CastStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
nova_datastruct_list_Int_Nova_Array1Int* generated53(stabilitytest_Nova_CastStability* this);
void stabilitytest_Nova_CastStability_Nova_lambda182(stabilitytest_Nova_CastStability* this, novex_nest_Nova_TestResult* _1, Context203* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_CastStability_Nova__validPrimitveNumericCastsTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_CastStability_Nova__validArrayTypeCastTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_CastStability_Nova__incompatibleCastTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_CastStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_CastStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_CastStability_Nova_init_static()
{
	if (!stabilitytest_Nova_CastStability_Nova_init_static_inited) {
		stabilitytest_Nova_CastStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_CastStability_Nova__validPrimitveNumericCastsTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("validPrimitveNumericCasts")),
			0);
			stabilitytest_Nova_CastStability_Nova__validArrayTypeCastTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("validArrayTypeCast")),
			0);
			stabilitytest_Nova_CastStability_Nova__incompatibleCastTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("incompatibleCast")),
			0);
			stabilitytest_Nova_CastStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated11(0,
					stabilitytest_Nova_CastStability_Nova__validPrimitveNumericCastsTestCase,
					stabilitytest_Nova_CastStability_Nova__validArrayTypeCastTestCase,
				stabilitytest_Nova_CastStability_Nova__incompatibleCastTestCase),
			0);
		}
	}
}

stabilitytest_Nova_CastStability* stabilitytest_Nova_CastStability_Nova_construct(stabilitytest_Nova_CastStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_CastStability, this,);
	this->vtable = &stabilitytest_Nova_CastStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_CastStability_Nova_super(this);
	
	return stabilitytest_Nova_CastStability_Nova_this((stabilitytest_Nova_CastStability*)(this));
}

void stabilitytest_Nova_CastStability_Nova_destroy(stabilitytest_Nova_CastStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_CastStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_CastStability_Nova_validPrimitveNumericCasts(stabilitytest_Nova_CastStability* this, nova_io_Nova_OutputStream* out)
{
	int l1_Nova_x = 0;
	long_long l1_Nova_y = 0;
	char l1_Nova_z = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing validPrimitveNumericCasts ")));
	l1_Nova_x = (int)(100);
	l1_Nova_y = (long_long)l1_Nova_x;
	l1_Nova_z = (char)l1_Nova_x;
}

void stabilitytest_Nova_CastStability_Nova_validArrayTypeCast(stabilitytest_Nova_CastStability* this, nova_io_Nova_OutputStream* out)
{
	nova_datastruct_list_Int_Nova_Array1Int* l1_Nova_array = (nova_datastruct_list_Int_Nova_Array1Int*)nova_null;
	long_long l1_Nova_x = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing validArrayTypeCast ")));
	l1_Nova_array = generated53((stabilitytest_Nova_CastStability*)(this));
	l1_Nova_x = (long_long)nova_datastruct_list_Int_Nova_Array1Int_int_int_Nova_get((nova_datastruct_list_Int_Nova_Array1Int*)(l1_Nova_array),
	0);
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long47_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_x)),
		10000,
	0);
}

void stabilitytest_Nova_CastStability_Nova_incompatibleCast(stabilitytest_Nova_CastStability* this, nova_io_Nova_OutputStream* out)
{
	nova_Nova_Object* l1_Nova_x = (nova_Nova_Object*)nova_null;
	nova_primitive_number_Nova_Int* l1_Nova_y = (nova_primitive_number_Nova_Int*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing incompatibleCast ")));
	l1_Nova_x = (nova_Nova_Object*)nova_null;
	l1_Nova_y = (int)((nova_primitive_number_Nova_Int*)l1_Nova_x);
}

void stabilitytest_Nova_CastStability_Nova_runTests(stabilitytest_Nova_CastStability* this, stabilitytest_Nova_CastStability_closure521_Nova_onResult stabilitytest_Nova_CastStability_Nova_onResult, void* stabilitytest_Nova_CastStability_ref_Nova_onResult, void* stabilitytest_Nova_CastStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context203* contextArg182 = NOVA_MALLOC(sizeof(Context203));
	nova_time_Nova_Timer* l1_Nova_validPrimitveNumericCastsTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_validArrayTypeCastTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_incompatibleCastTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_CastStability_Nova_onResult = (stabilitytest_Nova_CastStability_closure521_Nova_onResult)(stabilitytest_Nova_CastStability_Nova_onResult == 0 ? (stabilitytest_Nova_CastStability_closure521_Nova_onResult)&stabilitytest_Nova_CastStability_Nova_lambda182 : stabilitytest_Nova_CastStability_Nova_onResult);
	stabilitytest_Nova_CastStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_CastStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_CastStability_ref_Nova_onResult);
	stabilitytest_Nova_CastStability_context_Nova_onResult = (void*)(stabilitytest_Nova_CastStability_context_Nova_onResult == 0 ? (void*)contextArg182 : stabilitytest_Nova_CastStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing CastStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_validPrimitveNumericCastsTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_CastStability_Nova_validPrimitveNumericCasts((stabilitytest_Nova_CastStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_validPrimitveNumericCastsTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_validPrimitveNumericCastsTimer,
			stabilitytest_Nova_CastStability_Nova__validPrimitveNumericCastsTestCase);
			stabilitytest_Nova_CastStability_Nova_onResult(stabilitytest_Nova_CastStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_CastStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_validPrimitveNumericCastsTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_validPrimitveNumericCastsTimer,
		stabilitytest_Nova_CastStability_Nova__validPrimitveNumericCastsTestCase);
		stabilitytest_Nova_CastStability_Nova_onResult(stabilitytest_Nova_CastStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_CastStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_validArrayTypeCastTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_CastStability_Nova_validArrayTypeCast((stabilitytest_Nova_CastStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_validArrayTypeCastTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_validArrayTypeCastTimer,
			stabilitytest_Nova_CastStability_Nova__validArrayTypeCastTestCase);
			stabilitytest_Nova_CastStability_Nova_onResult(stabilitytest_Nova_CastStability_ref_Nova_onResult,
				l42_Nova_testResult,
			stabilitytest_Nova_CastStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_validArrayTypeCastTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l47_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_validArrayTypeCastTimer,
		stabilitytest_Nova_CastStability_Nova__validArrayTypeCastTestCase);
		stabilitytest_Nova_CastStability_Nova_onResult(stabilitytest_Nova_CastStability_ref_Nova_onResult,
			l47_Nova_testResult,
		stabilitytest_Nova_CastStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_incompatibleCastTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l75_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_CastStability_Nova_incompatibleCast((stabilitytest_Nova_CastStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_incompatibleCastTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l75_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_incompatibleCastTimer,
			stabilitytest_Nova_CastStability_Nova__incompatibleCastTestCase);
			stabilitytest_Nova_CastStability_Nova_onResult(stabilitytest_Nova_CastStability_ref_Nova_onResult,
				l75_Nova_testResult,
			stabilitytest_Nova_CastStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l80_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l80_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l80_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_incompatibleCastTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l80_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l80_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_incompatibleCastTimer,
		stabilitytest_Nova_CastStability_Nova__incompatibleCastTestCase);
		stabilitytest_Nova_CastStability_Nova_onResult(stabilitytest_Nova_CastStability_ref_Nova_onResult,
			l80_Nova_testResult,
		stabilitytest_Nova_CastStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_CastStability* stabilitytest_Nova_CastStability_Nova_this(stabilitytest_Nova_CastStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated11(stabilitytest_Nova_CastStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2)
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

nova_datastruct_list_Int_Nova_Array1Int* generated53(stabilitytest_Nova_CastStability* this)
{
	int* l1_Nova_temp = (int*)nova_null;
	
	l1_Nova_temp = (int*)NOVA_MALLOC(sizeof(int) * 2);
	l1_Nova_temp[0] = (int)(10000);
	l1_Nova_temp[1] = 1212121;
	return nova_datastruct_list_Int_Nova_Array1Int_Int_int_Array1Int2_Nova_construct(0,
		l1_Nova_temp,
	2);
}

void stabilitytest_Nova_CastStability_Nova_lambda182(stabilitytest_Nova_CastStability* this, novex_nest_Nova_TestResult* _1, Context203* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_CastStability_Accessorfunc_Nova_model(stabilitytest_Nova_CastStability* this)
{
	return stabilitytest_Nova_CastStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_CastStability_Nova_super(stabilitytest_Nova_CastStability* this)
{
	this->stabilitytest_Nova_CastStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

