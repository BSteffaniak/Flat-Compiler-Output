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
#include <nova/meta/nova_meta_Nova_Library.h>
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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context213;


void stabilitytest_Nova_LibraryLoadingStability_Nova_lambda192(stabilitytest_Nova_LibraryLoadingStability* this, novex_nest_Nova_TestResult* _1, Context213* context);


void stabilitytest_Nova_LibraryLoadingStability_Nova_lambda192(stabilitytest_Nova_LibraryLoadingStability* this, novex_nest_Nova_TestResult* _1, Context213* context);

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_LibraryLoadingStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_LibraryLoadingStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_LibraryLoadingStability_Nova_init_static()
{
	if (!stabilitytest_Nova_LibraryLoadingStability_Nova_init_static_inited) {
		stabilitytest_Nova_LibraryLoadingStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_LibraryLoadingStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				nova_datastruct_list_Nova_Array_1_Nova_construct(0,
					0,
					(int)(intptr_t)nova_null),
			0);
		}
	}
}

stabilitytest_Nova_LibraryLoadingStability* stabilitytest_Nova_LibraryLoadingStability_Nova_construct(stabilitytest_Nova_LibraryLoadingStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_LibraryLoadingStability, this,);
	this->vtable = &stabilitytest_Nova_LibraryLoadingStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_LibraryLoadingStability_Nova_super(this);
	
	return stabilitytest_Nova_LibraryLoadingStability_Nova_this((stabilitytest_Nova_LibraryLoadingStability*)(this));
}

void stabilitytest_Nova_LibraryLoadingStability_Nova_destroy(stabilitytest_Nova_LibraryLoadingStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_LibraryLoadingStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_LibraryLoadingStability_Nova_runTests(stabilitytest_Nova_LibraryLoadingStability* this, stabilitytest_Nova_LibraryLoadingStability_closure890_Nova_onResult stabilitytest_Nova_LibraryLoadingStability_Nova_onResult, void* stabilitytest_Nova_LibraryLoadingStability_ref_Nova_onResult, void* stabilitytest_Nova_LibraryLoadingStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context213* contextArg192 = NOVA_MALLOC(sizeof(Context213));
	stabilitytest_Nova_LibraryLoadingStability_Nova_onResult = (stabilitytest_Nova_LibraryLoadingStability_closure890_Nova_onResult)(stabilitytest_Nova_LibraryLoadingStability_Nova_onResult == 0 ? (stabilitytest_Nova_LibraryLoadingStability_closure890_Nova_onResult)&stabilitytest_Nova_LibraryLoadingStability_Nova_lambda192 : stabilitytest_Nova_LibraryLoadingStability_Nova_onResult);
	stabilitytest_Nova_LibraryLoadingStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_LibraryLoadingStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_LibraryLoadingStability_ref_Nova_onResult);
	stabilitytest_Nova_LibraryLoadingStability_context_Nova_onResult = (void*)(stabilitytest_Nova_LibraryLoadingStability_context_Nova_onResult == 0 ? (void*)contextArg192 : stabilitytest_Nova_LibraryLoadingStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing LibraryLoadingStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_LibraryLoadingStability* stabilitytest_Nova_LibraryLoadingStability_Nova_this(stabilitytest_Nova_LibraryLoadingStability* this) {
	return this;
}
void stabilitytest_Nova_LibraryLoadingStability_Nova_lambda192(stabilitytest_Nova_LibraryLoadingStability* this, novex_nest_Nova_TestResult* _1, Context213* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_LibraryLoadingStability_Accessorfunc_Nova_model(stabilitytest_Nova_LibraryLoadingStability* this)
{
	return stabilitytest_Nova_LibraryLoadingStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_LibraryLoadingStability_Nova_super(stabilitytest_Nova_LibraryLoadingStability* this)
{
	this->stabilitytest_Nova_LibraryLoadingStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

