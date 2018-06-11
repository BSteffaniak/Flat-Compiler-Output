#ifndef FILE_stabilitytest_Nova_FirstClassFunctionStability_NOVA
#define FILE_stabilitytest_Nova_FirstClassFunctionStability_NOVA

typedef struct stabilitytest_Nova_FirstClassFunctionStability stabilitytest_Nova_FirstClassFunctionStability;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct novex_nest_Nova_TestResult novex_nest_Nova_TestResult;

typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure886_Nova_onResult)(void*, novex_nest_Nova_TestResult*, void*);

#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
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
#include <stabilitytest/stabilitytest_Nova_CastStability.h>
#include <stabilitytest/stabilitytest_Nova_ClassWithProperties.h>
#include <stabilitytest/stabilitytest_Nova_ClientThread.h>
#include <stabilitytest/stabilitytest_Nova_ClosureStability.h>
#include <stabilitytest/stabilitytest_Nova_ExceptionStability.h>
#include <stabilitytest/stabilitytest_Nova_ExternalInnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_FancyOutputStreamTests.h>
#include <stabilitytest/stabilitytest_Nova_FileStability.h>
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

CCLASS_CLASS
(
	stabilitytest_Nova_FirstClassFunctionStability, 
	
	stabilitytest_Nova_FirstClassFunctionStability_VTable* vtable;
	struct Private_stabilitytest_Nova_FirstClassFunctionStability* prv;
	nova_Nova_String* nova_Nova_Object_Nova_hashCode;
	novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_FirstClassFunctionStability_Nova_model;
)
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByFunctionTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionWithTypeSpecifiedTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionReturnedByFunctionTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingAssignedChainFunctionTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX3TestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX4TestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX5TestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX6TestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testSingleFunctionInArrayTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionFromCollectionTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionWithParametersFromCollectionTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLambdaVariableFunctionalityTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLocalFunctionTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testLambdaVariableWithParametersTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testLocalFunctionWithParametersTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaWithParametersTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeWithBodyTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testImplicitNullFunctionReferenceTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testExplicitNullFunctionReferenceTestCase;
extern novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testNonNullFunctionReferenceTestCase;
extern novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_FirstClassFunctionStability_Nova__runTestsTestRunner;

extern char stabilitytest_Nova_FirstClassFunctionStability_Nova_init_static_inited;
void stabilitytest_Nova_FirstClassFunctionStability_Nova_init_static();
stabilitytest_Nova_FirstClassFunctionStability* stabilitytest_Nova_FirstClassFunctionStability_Nova_construct(stabilitytest_Nova_FirstClassFunctionStability* this);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_destroy(stabilitytest_Nova_FirstClassFunctionStability** this);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_runTests(stabilitytest_Nova_FirstClassFunctionStability* this, stabilitytest_Nova_FirstClassFunctionStability_closure886_Nova_onResult stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult, void* stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult, void* stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult, nova_io_Nova_OutputStream* out);
stabilitytest_Nova_FirstClassFunctionStability* stabilitytest_Nova_FirstClassFunctionStability_Nova_this(stabilitytest_Nova_FirstClassFunctionStability* this);
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_FirstClassFunctionStability_Accessorfunc_Nova_model(stabilitytest_Nova_FirstClassFunctionStability* this);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_super(stabilitytest_Nova_FirstClassFunctionStability* this);

#endif