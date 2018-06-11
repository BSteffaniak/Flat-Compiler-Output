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
#include <stabilitytest/stabilitytest_Nova_ThreadImplementation.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context132;
typedef struct
{
} Context220;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;

typedef int (*stabilitytest_Nova_SyntaxStability_closure944_Nova_something)(void*, int, void*);

void stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatement(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatementWithIndentation(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatementWithScopes(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testMatchStatementWithVariableCaseValues(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testMatchStatementWithVariableCaseValuesAndFallthrough(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testWhileLoops(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testForLoops(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testUntil(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test1(stabilitytest_Nova_SyntaxStability* this);
nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test2(stabilitytest_Nova_SyntaxStability* this);
nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test3(stabilitytest_Nova_SyntaxStability* this);
char stabilitytest_Nova_SyntaxStability_static_Nova_filterFunc(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* i);
void stabilitytest_Nova_SyntaxStability_static_Nova_foreachClosure(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* s);
void stabilitytest_Nova_SyntaxStability_Nova_testFilterFunctionality(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testIteratorFunctionality(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testForeachLoopFunctionality(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testTernary(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testElvis(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
char stabilitytest_Nova_SyntaxStability_Nova_trueValue(stabilitytest_Nova_SyntaxStability* this);
char stabilitytest_Nova_SyntaxStability_Nova_falseValue(stabilitytest_Nova_SyntaxStability* this);
int stabilitytest_Nova_SyntaxStability_0_Nova_named(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* s, nova_Nova_String* arg, int jum, int jdd, int joe);
int stabilitytest_Nova_SyntaxStability_1_Nova_named(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* s, nova_Nova_String* arg, int num, int add);
void stabilitytest_Nova_SyntaxStability_Nova_testNamedArguments(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
int stabilitytest_Nova_SyntaxStability_Nova_func1(stabilitytest_Nova_SyntaxStability* this, int a);
int stabilitytest_Nova_SyntaxStability_Nova_func2(stabilitytest_Nova_SyntaxStability* this, int a);
int stabilitytest_Nova_SyntaxStability_Nova_myFunc(stabilitytest_Nova_SyntaxStability* this, stabilitytest_Nova_SyntaxStability_closure944_Nova_something stabilitytest_Nova_SyntaxStability_Nova_something, void* stabilitytest_Nova_SyntaxStability_ref_Nova_something, void* stabilitytest_Nova_SyntaxStability_context_Nova_something);
void stabilitytest_Nova_SyntaxStability_Nova_checkDefaultClosureArguments(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_checkZipper(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testSafeNavigation(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testArraySafeNavigation(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
char stabilitytest_Nova_SyntaxStability_Nova_callMeWithNode(stabilitytest_Nova_SyntaxStability* this, stabilitytest_Nova_Node* n);
void stabilitytest_Nova_SyntaxStability_Nova_testSnakeCaseNumbers(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testArrayInitializers(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated29(stabilitytest_Nova_SyntaxStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8, novex_nest_Nova_TestCase* value9, novex_nest_Nova_TestCase* value10, novex_nest_Nova_TestCase* value11, novex_nest_Nova_TestCase* value12, novex_nest_Nova_TestCase* value13, novex_nest_Nova_TestCase* value14, novex_nest_Nova_TestCase* value15, novex_nest_Nova_TestCase* value16, novex_nest_Nova_TestCase* value17, novex_nest_Nova_TestCase* value18, novex_nest_Nova_TestCase* value19);
nova_datastruct_list_Nova_Array* generated56(stabilitytest_Nova_SyntaxStability* this);
nova_datastruct_list_Nova_Array* generated57(stabilitytest_Nova_SyntaxStability* this);
nova_datastruct_list_Nova_Array* generated58(stabilitytest_Nova_SyntaxStability* this);
nova_datastruct_list_Nova_Array* generated59(stabilitytest_Nova_SyntaxStability* this);
nova_datastruct_list_Nova_Array* generated60(stabilitytest_Nova_SyntaxStability* this);
nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_lambda111(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* x, nova_Nova_String* y, Context132* context);
nova_datastruct_list_Nova_Array* generated61(stabilitytest_Nova_SyntaxStability* this);
nova_datastruct_list_Nova_Array* generated62(stabilitytest_Nova_SyntaxStability* this, int value2, int value3);
void stabilitytest_Nova_SyntaxStability_Nova_lambda199(stabilitytest_Nova_SyntaxStability* this, novex_nest_Nova_TestResult* _1, Context220* context);


void stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatement(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatementWithIndentation(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatementWithScopes(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testMatchStatementWithVariableCaseValues(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testMatchStatementWithVariableCaseValuesAndFallthrough(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testWhileLoops(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testForLoops(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testUntil(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test1(stabilitytest_Nova_SyntaxStability* this);
nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test2(stabilitytest_Nova_SyntaxStability* this);
nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test3(stabilitytest_Nova_SyntaxStability* this);
char stabilitytest_Nova_SyntaxStability_static_Nova_filterFunc(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* i);
void stabilitytest_Nova_SyntaxStability_static_Nova_foreachClosure(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* s);
void stabilitytest_Nova_SyntaxStability_Nova_testFilterFunctionality(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testIteratorFunctionality(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testForeachLoopFunctionality(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testTernary(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testElvis(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
char stabilitytest_Nova_SyntaxStability_Nova_trueValue(stabilitytest_Nova_SyntaxStability* this);
char stabilitytest_Nova_SyntaxStability_Nova_falseValue(stabilitytest_Nova_SyntaxStability* this);
int stabilitytest_Nova_SyntaxStability_0_Nova_named(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* s, nova_Nova_String* arg, int jum, int jdd, int joe);
int stabilitytest_Nova_SyntaxStability_1_Nova_named(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* s, nova_Nova_String* arg, int num, int add);
void stabilitytest_Nova_SyntaxStability_Nova_testNamedArguments(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
int stabilitytest_Nova_SyntaxStability_Nova_func1(stabilitytest_Nova_SyntaxStability* this, int a);
int stabilitytest_Nova_SyntaxStability_Nova_func2(stabilitytest_Nova_SyntaxStability* this, int a);
int stabilitytest_Nova_SyntaxStability_Nova_myFunc(stabilitytest_Nova_SyntaxStability* this, stabilitytest_Nova_SyntaxStability_closure944_Nova_something stabilitytest_Nova_SyntaxStability_Nova_something, void* stabilitytest_Nova_SyntaxStability_ref_Nova_something, void* stabilitytest_Nova_SyntaxStability_context_Nova_something);
void stabilitytest_Nova_SyntaxStability_Nova_checkDefaultClosureArguments(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_checkZipper(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testSafeNavigation(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testArraySafeNavigation(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
char stabilitytest_Nova_SyntaxStability_Nova_callMeWithNode(stabilitytest_Nova_SyntaxStability* this, stabilitytest_Nova_Node* n);
void stabilitytest_Nova_SyntaxStability_Nova_testSnakeCaseNumbers(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_SyntaxStability_Nova_testArrayInitializers(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated29(stabilitytest_Nova_SyntaxStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8, novex_nest_Nova_TestCase* value9, novex_nest_Nova_TestCase* value10, novex_nest_Nova_TestCase* value11, novex_nest_Nova_TestCase* value12, novex_nest_Nova_TestCase* value13, novex_nest_Nova_TestCase* value14, novex_nest_Nova_TestCase* value15, novex_nest_Nova_TestCase* value16, novex_nest_Nova_TestCase* value17, novex_nest_Nova_TestCase* value18, novex_nest_Nova_TestCase* value19);
nova_datastruct_list_Nova_Array* generated56(stabilitytest_Nova_SyntaxStability* this);
nova_datastruct_list_Nova_Array* generated57(stabilitytest_Nova_SyntaxStability* this);
nova_datastruct_list_Nova_Array* generated58(stabilitytest_Nova_SyntaxStability* this);
nova_datastruct_list_Nova_Array* generated59(stabilitytest_Nova_SyntaxStability* this);
nova_datastruct_list_Nova_Array* generated60(stabilitytest_Nova_SyntaxStability* this);
nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_lambda111(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* x, nova_Nova_String* y, Context132* context);
nova_datastruct_list_Nova_Array* generated61(stabilitytest_Nova_SyntaxStability* this);
nova_datastruct_list_Nova_Array* generated62(stabilitytest_Nova_SyntaxStability* this, int value2, int value3);
void stabilitytest_Nova_SyntaxStability_Nova_lambda199(stabilitytest_Nova_SyntaxStability* this, novex_nest_Nova_TestResult* _1, Context220* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementWithIndentationTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementWithScopesTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testMatchStatementWithVariableCaseValuesTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testMatchStatementWithVariableCaseValuesAndFallthroughTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testWhileLoopsTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testForLoopsTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testUntilTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testFilterFunctionalityTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testIteratorFunctionalityTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testForeachLoopFunctionalityTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testTernaryTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testElvisTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testNamedArgumentsTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__checkDefaultClosureArgumentsTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__checkZipperTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testSafeNavigationTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testArraySafeNavigationTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testSnakeCaseNumbersTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_SyntaxStability_Nova__testArrayInitializersTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_SyntaxStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_SyntaxStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_SyntaxStability_Nova_init_static()
{
	if (!stabilitytest_Nova_SyntaxStability_Nova_init_static_inited) {
		stabilitytest_Nova_SyntaxStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testSimpleMatchStatement")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing simple match statement")));
			stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementWithIndentationTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testSimpleMatchStatementWithIndentation")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing simple match statement with indentation")));
			stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementWithScopesTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testSimpleMatchStatementWithScopes")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing simple match statement with scopes")));
			stabilitytest_Nova_SyntaxStability_Nova__testMatchStatementWithVariableCaseValuesTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testMatchStatementWithVariableCaseValues")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing match statement with variable case values")));
			stabilitytest_Nova_SyntaxStability_Nova__testMatchStatementWithVariableCaseValuesAndFallthroughTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testMatchStatementWithVariableCaseValuesAndFallthrough")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing match statement with variable case values and fallthrough")));
			stabilitytest_Nova_SyntaxStability_Nova__testWhileLoopsTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testWhileLoops")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing inline while loop")));
			stabilitytest_Nova_SyntaxStability_Nova__testForLoopsTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testForLoops")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing inline for loop")));
			stabilitytest_Nova_SyntaxStability_Nova__testUntilTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testUntil")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing until statement")));
			stabilitytest_Nova_SyntaxStability_Nova__testFilterFunctionalityTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testFilterFunctionality")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing filter functionality")));
			stabilitytest_Nova_SyntaxStability_Nova__testIteratorFunctionalityTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testIteratorFunctionality")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing iterator functionality")));
			stabilitytest_Nova_SyntaxStability_Nova__testForeachLoopFunctionalityTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testForeachLoopFunctionality")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing foreach loop functionality")));
			stabilitytest_Nova_SyntaxStability_Nova__testTernaryTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testTernary")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing ternary functionality")));
			stabilitytest_Nova_SyntaxStability_Nova__testElvisTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testElvis")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing elvis functionality")));
			stabilitytest_Nova_SyntaxStability_Nova__testNamedArgumentsTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testNamedArguments")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing named arguments")));
			stabilitytest_Nova_SyntaxStability_Nova__checkDefaultClosureArgumentsTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("checkDefaultClosureArguments")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing default closure arguments")));
			stabilitytest_Nova_SyntaxStability_Nova__checkZipperTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("checkZipper")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing zip function")));
			stabilitytest_Nova_SyntaxStability_Nova__testSafeNavigationTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testSafeNavigation")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing safe navigation operator")));
			stabilitytest_Nova_SyntaxStability_Nova__testArraySafeNavigationTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testArraySafeNavigation")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing array safe navigation")));
			stabilitytest_Nova_SyntaxStability_Nova__testSnakeCaseNumbersTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testSnakeCaseNumbers")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing snake case numbers")));
			stabilitytest_Nova_SyntaxStability_Nova__testArrayInitializersTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testArrayInitializers")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing array initializers")));
			stabilitytest_Nova_SyntaxStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated29(0,
					stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementWithIndentationTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementWithScopesTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testMatchStatementWithVariableCaseValuesTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testMatchStatementWithVariableCaseValuesAndFallthroughTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testWhileLoopsTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testForLoopsTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testUntilTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testFilterFunctionalityTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testIteratorFunctionalityTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testForeachLoopFunctionalityTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testTernaryTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testElvisTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testNamedArgumentsTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__checkDefaultClosureArgumentsTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__checkZipperTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testSafeNavigationTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testArraySafeNavigationTestCase,
					stabilitytest_Nova_SyntaxStability_Nova__testSnakeCaseNumbersTestCase,
				stabilitytest_Nova_SyntaxStability_Nova__testArrayInitializersTestCase),
			0);
		}
	}
}

stabilitytest_Nova_SyntaxStability* stabilitytest_Nova_SyntaxStability_Nova_construct(stabilitytest_Nova_SyntaxStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_SyntaxStability, this,);
	this->vtable = &stabilitytest_Nova_SyntaxStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_SyntaxStability_Nova_super(this);
	
	return stabilitytest_Nova_SyntaxStability_Nova_this((stabilitytest_Nova_SyntaxStability*)(this));
}

void stabilitytest_Nova_SyntaxStability_Nova_destroy(stabilitytest_Nova_SyntaxStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_SyntaxStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatement(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	char l1_Nova_num = 0;
	char l1_Nova_worked = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing simple match statement ")));
	l1_Nova_num = 3;
	l1_Nova_worked = 0;
	switch ((l1_Nova_num))
	{
		case 1:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
		break;
		case 2:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
		break;
		case 3:
		l1_Nova_worked = 1;
		break;
		case 4:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
		break;
		default:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match failed to accept the correct case")));
	}
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool228_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_worked)),
		1,
	0);
}

void stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatementWithIndentation(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	char l1_Nova_num = 0;
	char l1_Nova_worked = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing simple match statement with indentation ")));
	l1_Nova_num = 3;
	l1_Nova_worked = 0;
	switch ((l1_Nova_num))
	{
		case 1:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
		break;
		case 2:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
		break;
		case 3:
		l1_Nova_worked = 1;
		break;
		case 4:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
		break;
		default:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match failed to accept the correct case")));
	}
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool229_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_worked)),
		1,
	0);
}

void stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatementWithScopes(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	char l1_Nova_num = 0;
	char l1_Nova_worked = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing simple match statement with scopes ")));
	l1_Nova_num = 3;
	l1_Nova_worked = 0;
	switch ((l1_Nova_num))
	{
		case 1:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
		break;
		case 2:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
		break;
		case 3:
		l1_Nova_worked = 1;
		break;
		case 4:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
		break;
		default:
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match failed to accept the correct case")));
	}
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool230_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_worked)),
		1,
	0);
}

void stabilitytest_Nova_SyntaxStability_Nova_testMatchStatementWithVariableCaseValues(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	char l1_Nova_val = 0;
	char l1_Nova_num = 0;
	char l1_Nova_worked = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing match statement with variable case values ")));
	l1_Nova_val = 1;
	l1_Nova_num = 3;
	l1_Nova_worked = 0;
	if ((l1_Nova_num) == l1_Nova_val++)
	{
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
	}
	else if ((l1_Nova_num) == l1_Nova_val++)
	{
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
	}
	else if ((l1_Nova_num) == (l1_Nova_val++))
	{
		l1_Nova_worked = 1;
	}
	else if ((l1_Nova_num) == l1_Nova_val++)
	{
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match accepted incorrect case")));
	}
	else
	{
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Match failed to accept the correct case")));
	}
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool231_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_worked)),
		1,
	0);
}

void stabilitytest_Nova_SyntaxStability_Nova_testMatchStatementWithVariableCaseValuesAndFallthrough(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	char l1_Nova_val = 0;
	char l1_Nova_num = 0;
	char l1_Nova_worked = 0;
	char l1_Nova_worked2 = 0;
	char nova_local_0 = 0;
	int nova_local_1 = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing match statement with variable case values and fallthrough ")));
	l1_Nova_val = 1;
	l1_Nova_num = 3;
	l1_Nova_worked = 0;
	l1_Nova_worked2 = 0;
	nova_local_1 = (l1_Nova_num++);
	do
	{
		if (nova_local_1 == l1_Nova_val++)
		{
			novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Match accepted incorrect case")));
			break;
		}
		else if (nova_local_1 == l1_Nova_val++)
		{
			novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Match accepted incorrect case")));
			break;
		}
		else if (nova_local_1 == l1_Nova_val++)
		{
			l1_Nova_worked = 1;
			nova_local_0 = 1;
		}
		if (nova_local_0 || nova_local_1 == l1_Nova_val++)
		{
			l1_Nova_worked2 = 1;
			break;
		}
		else
		{
			novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Match failed to accept the correct case")));
		}
	}
	while (0);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool232_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_worked && l1_Nova_worked2)),
		1,
	0);
}

void stabilitytest_Nova_SyntaxStability_Nova_testWhileLoops(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	char l1_Nova_num = 0;
	char l1_Nova_num2 = 0;
	char l1_Nova_num3 = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing inline while loop ")));
	l1_Nova_num = 0;
	l1_Nova_num2 = 0;
	l1_Nova_num3 = 0;
	while (l1_Nova_num < 100)
	{
		l1_Nova_num++;
	}
	while (l1_Nova_num2 < 100)
	{
		l1_Nova_num2++;
	}
	while (l1_Nova_num3 < 100)
	{
		if (1)
		{
			if (1)
			{
			}
		}
		l1_Nova_num3++;
	}
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool233_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_num == 100 && l1_Nova_num2 == 100 && l1_Nova_num3 == 100)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Inline while loop failed.")));
}

void stabilitytest_Nova_SyntaxStability_Nova_testForLoops(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	char l1_Nova_num = 0;
	char l1_Nova_num2 = 0;
	char l1_Nova_num3 = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing inline for loop ")));
	l1_Nova_num = 0;
	l1_Nova_num2 = 0;
	l1_Nova_num3 = 0;
	int l7_Nova_i;
	l7_Nova_i = (int)0;
	for (; l7_Nova_i < (int)100; l7_Nova_i++)
	{
		l1_Nova_num++;
	}
	int l18_Nova_i2;
	l18_Nova_i2 = (int)0;
	for (; l18_Nova_i2 < (int)100; l18_Nova_i2++)
	{
		l1_Nova_num2++;
	}
	int l29_Nova_i3;
	l29_Nova_i3 = (int)0;
	for (; l29_Nova_i3 < (int)100; l29_Nova_i3++)
	{
		if (1)
		{
			if (1)
			{
			}
		}
		l1_Nova_num3++;
	}
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool234_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_num == 100 && l1_Nova_num2 == 100 && l1_Nova_num3 == 100)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Inline for loop failed. Expected 100, 100, 100 received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_num))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(l1_Nova_num2))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(", "))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
																(l1_Nova_num3))),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)(""))))))))))))))));
}

void stabilitytest_Nova_SyntaxStability_Nova_testUntil(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	nova_Nova_Object* l1_Nova_obj = (nova_Nova_Object*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing until statement ")));
	if (((l1_Nova_obj)) == (nova_Nova_Object*)nova_null)
	{
		l1_Nova_obj = stabilitytest_Nova_SyntaxStability_static_Nova_test1((stabilitytest_Nova_SyntaxStability*)(this));
		if (((l1_Nova_obj)) == (nova_Nova_Object*)nova_null)
		{
			l1_Nova_obj = stabilitytest_Nova_SyntaxStability_static_Nova_test2((stabilitytest_Nova_SyntaxStability*)(this));
			if (((l1_Nova_obj)) == (nova_Nova_Object*)nova_null)
			{
				l1_Nova_obj = stabilitytest_Nova_SyntaxStability_static_Nova_test3((stabilitytest_Nova_SyntaxStability*)(this));
				if (((l1_Nova_obj)) == (nova_Nova_Object*)nova_null)
				{
					novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
						nova_Nova_String_1_Nova_construct(0,
							(char*)("Failed to stop after correct condition")));
				}
			}
		}
	}
	novex_nest_Nova_Nest_Nova_toNotBe((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_0_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(nova_Nova_Object*)(l1_Nova_obj))),
		(nova_Nova_Object*)((nova_Nova_Object*)nova_null),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to reach correct condition")));
}

nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test1(stabilitytest_Nova_SyntaxStability* this)
{
	return (nova_Nova_Object*)nova_null;
}

nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test2(stabilitytest_Nova_SyntaxStability* this)
{
	return (nova_Nova_Object*)nova_null;
}

nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test3(stabilitytest_Nova_SyntaxStability* this)
{
	return nova_Nova_Object_Nova_construct(0);
}

char stabilitytest_Nova_SyntaxStability_static_Nova_filterFunc(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* i)
{
	return i->nova_Nova_String_Nova_count >= 4;
}

void stabilitytest_Nova_SyntaxStability_static_Nova_foreachClosure(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* s)
{
	if (s->nova_Nova_String_Nova_count < 4)
	{
		THROW(stabilitytest_Nova_UnstableException_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("filtering failed"))), 0);
	}
}

void stabilitytest_Nova_SyntaxStability_Nova_testFilterFunctionality(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_list2 = (nova_datastruct_list_Nova_Array*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing filter functionality ")));
	l1_Nova_list = generated56((stabilitytest_Nova_SyntaxStability*)(this));
	l1_Nova_list2 = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual1_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list),
			(nova_datastruct_list_Nova_List_closure1340_Nova_filterFunc)&stabilitytest_Nova_SyntaxStability_static_Nova_filterFunc, this, nova_null));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, stabilitytest_Nova_UnstableException_VTable_val.classInstance, 0);
		
		{
			nova_datastruct_list_Nova_List_virtual1_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_list2),
				(nova_datastruct_list_Nova_List_closure1336_Nova_func)&stabilitytest_Nova_SyntaxStability_static_Nova_foreachClosure, this, nova_null);
		}
	}
	CATCH (stabilitytest_Nova_UnstableException_VTable_val.classInstance)
	{
		stabilitytest_Nova_UnstableException* l14_Nova_e = (stabilitytest_Nova_UnstableException*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Failed to filter data correctly")));
	}
	FINALLY
	{
	}
	END_TRY;
	int l25_Nova_n;
	l25_Nova_n = (int)0;
	for (; l25_Nova_n < (int)nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_list2)); l25_Nova_n++)
	{
		novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool235_static_Nova_expect((novex_nest_Nova_Nest*)(this),
					(int)(((nova_Nova_String*)nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_list2),
			l25_Nova_n))->nova_Nova_String_Nova_count) >= 4)),
			1,
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Failed to filter data correctly")));
	}
}

void stabilitytest_Nova_SyntaxStability_Nova_testIteratorFunctionality(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_list2 = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Iterator* l1_Nova_iter = (nova_datastruct_list_Nova_Iterator*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing iterator functionality ")));
	l1_Nova_list = generated57((stabilitytest_Nova_SyntaxStability*)(this));
	l1_Nova_list2 = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual1_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list),
			(nova_datastruct_list_Nova_List_closure1340_Nova_filterFunc)&stabilitytest_Nova_SyntaxStability_static_Nova_filterFunc, this, nova_null));
	l1_Nova_iter = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessorfunc_Nova_iterator((nova_datastruct_list_Nova_Iterable*)(l1_Nova_list2)));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessorfunc_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(l1_Nova_iter)))
	{
		novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool236_static_Nova_expect((novex_nest_Nova_Nest*)(this),
					(int)(((nova_Nova_String*)nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(l1_Nova_iter)))->nova_Nova_String_Nova_count) >= 4)),
			1,
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Failed to run iterator")));
	}
}

void stabilitytest_Nova_SyntaxStability_Nova_testForeachLoopFunctionality(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_list2 = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing foreach loop functionality ")));
	l1_Nova_list = generated58((stabilitytest_Nova_SyntaxStability*)(this));
	l1_Nova_list2 = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual1_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list),
			(nova_datastruct_list_Nova_List_closure1340_Nova_filterFunc)&stabilitytest_Nova_SyntaxStability_static_Nova_filterFunc, this, nova_null));
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessorfunc_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l1_Nova_list2))));
	nova_Nova_String* l7_Nova_string;
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessorfunc_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0)))
	{
		l7_Nova_string = (nova_Nova_String*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0)));
		novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool237_static_Nova_expect((novex_nest_Nova_Nest*)(this),
			l7_Nova_string->nova_Nova_String_Nova_count >= 4)),
			1,
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Failed to run foreach loop")));
	}
}

void stabilitytest_Nova_SyntaxStability_Nova_testTernary(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	char l1_Nova_first = 0;
	nova_Nova_String* l1_Nova_second = (nova_Nova_String*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing ternary functionality ")));
	l1_Nova_first = (char)(stabilitytest_Nova_SyntaxStability_Nova_trueValue((stabilitytest_Nova_SyntaxStability*)(this)) ? nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("hey"))),
			(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("hey")))) : nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("hey"))),
			(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("hey2")))));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool238_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_first)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed first ternary test")));
	l1_Nova_second = (nova_Nova_String*)(stabilitytest_Nova_SyntaxStability_Nova_falseValue((stabilitytest_Nova_SyntaxStability*)(this)) ? nova_Nova_String_1_Nova_construct(0,
			(char*)("one")) : nova_Nova_String_1_Nova_construct(0,
			(char*)("two")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool239_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(l1_Nova_second),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("two")))))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed second ternary test")));
}

void stabilitytest_Nova_SyntaxStability_Nova_testElvis(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	nova_Nova_String* l1_Nova_str = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_str2 = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_result1 = (nova_Nova_String*)nova_null;
	nova_Nova_String* nova_local_0 = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_result2 = (nova_Nova_String*)nova_null;
	nova_Nova_String* nova_local_1 = (nova_Nova_String*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing elvis functionality ")));
	l1_Nova_str = nova_Nova_String_1_Nova_construct(0,
		(char*)("this isnt null"));
	l1_Nova_str2 = (nova_Nova_String*)((nova_Nova_Object*)nova_null);
	l1_Nova_result1 = (nova_Nova_String*)((nova_local_0 = l1_Nova_str) != (nova_Nova_String*)nova_null ? nova_local_0 : nova_Nova_String_1_Nova_construct(0,
			(char*)("wtf")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool240_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(l1_Nova_result1),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("wtf")))))),
		0,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed first elvis test")));
	l1_Nova_result2 = (nova_Nova_String*)((nova_local_1 = l1_Nova_str2) != (nova_Nova_String*)nova_null ? nova_local_1 : nova_Nova_String_1_Nova_construct(0,
			(char*)("this is null")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool241_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(l1_Nova_result2),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("this is null")))))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed second elvis test")));
}

char stabilitytest_Nova_SyntaxStability_Nova_trueValue(stabilitytest_Nova_SyntaxStability* this)
{
	return 1;
}

char stabilitytest_Nova_SyntaxStability_Nova_falseValue(stabilitytest_Nova_SyntaxStability* this)
{
	return 0;
}

int stabilitytest_Nova_SyntaxStability_0_Nova_named(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* s, nova_Nova_String* arg, int jum, int jdd, int joe)
{
	jum = (int)(jum == (int)(intptr_t)nova_null ? 4 : jum);
	jdd = (int)(jdd == (int)(intptr_t)nova_null ? 0 : jdd);
	joe = (int)(joe == (int)(intptr_t)nova_null ? 0 : joe);
	return (int)-1;
}

int stabilitytest_Nova_SyntaxStability_1_Nova_named(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* s, nova_Nova_String* arg, int num, int add)
{
	num = (int)(num == (int)(intptr_t)nova_null ? 4 : num);
	add = (int)(add == (int)(intptr_t)nova_null ? 0 : add);
	return num * arg->nova_Nova_String_Nova_count + add;
}

void stabilitytest_Nova_SyntaxStability_Nova_testNamedArguments(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	int l1_Nova_num = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing named arguments ")));
	l1_Nova_num = stabilitytest_Nova_SyntaxStability_1_Nova_named((stabilitytest_Nova_SyntaxStability*)(this),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("")),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("yo")),
		4,
		(int)(intptr_t)nova_null);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool242_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_num == 8)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Default argument failed. Expected 8, received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_num))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	l1_Nova_num = stabilitytest_Nova_SyntaxStability_1_Nova_named((stabilitytest_Nova_SyntaxStability*)(this),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("")),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("heyasdf")),
		5,
	2);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool243_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_num == 37)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Named arguments failed. Expeced 37, received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_num))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" first"))))))));
	l1_Nova_num = stabilitytest_Nova_SyntaxStability_1_Nova_named((stabilitytest_Nova_SyntaxStability*)(this),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("")),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("heyasdf")),
		5,
	2);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool244_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_num == 37)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Named arguments failed. Expeced 37, received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_num))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" second"))))))));
}

int stabilitytest_Nova_SyntaxStability_Nova_func1(stabilitytest_Nova_SyntaxStability* this, int a)
{
	return a * 2;
}

int stabilitytest_Nova_SyntaxStability_Nova_func2(stabilitytest_Nova_SyntaxStability* this, int a)
{
	return a * 4;
}

int stabilitytest_Nova_SyntaxStability_Nova_myFunc(stabilitytest_Nova_SyntaxStability* this, stabilitytest_Nova_SyntaxStability_closure944_Nova_something stabilitytest_Nova_SyntaxStability_Nova_something, void* stabilitytest_Nova_SyntaxStability_ref_Nova_something, void* stabilitytest_Nova_SyntaxStability_context_Nova_something)
{
	stabilitytest_Nova_SyntaxStability_Nova_something = (stabilitytest_Nova_SyntaxStability_closure944_Nova_something)(stabilitytest_Nova_SyntaxStability_Nova_something == 0 ? (stabilitytest_Nova_SyntaxStability_closure944_Nova_something)&stabilitytest_Nova_SyntaxStability_Nova_func2 : stabilitytest_Nova_SyntaxStability_Nova_something);
	stabilitytest_Nova_SyntaxStability_ref_Nova_something = (void*)(stabilitytest_Nova_SyntaxStability_ref_Nova_something == 0 ? (void*)this : stabilitytest_Nova_SyntaxStability_ref_Nova_something);
	stabilitytest_Nova_SyntaxStability_context_Nova_something = (void*)(stabilitytest_Nova_SyntaxStability_context_Nova_something == 0 ? (void*)nova_null : stabilitytest_Nova_SyntaxStability_context_Nova_something);
	return stabilitytest_Nova_SyntaxStability_Nova_something(stabilitytest_Nova_SyntaxStability_ref_Nova_something,
		5,
	stabilitytest_Nova_SyntaxStability_context_Nova_something);
}

void stabilitytest_Nova_SyntaxStability_Nova_checkDefaultClosureArguments(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing default closure arguments ")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool245_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				stabilitytest_Nova_SyntaxStability_Nova_myFunc((stabilitytest_Nova_SyntaxStability*)(this),
		0, 0, 0) == 20)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call default closure")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool246_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				stabilitytest_Nova_SyntaxStability_Nova_myFunc((stabilitytest_Nova_SyntaxStability*)(this),
					(stabilitytest_Nova_SyntaxStability_closure944_Nova_something)&stabilitytest_Nova_SyntaxStability_Nova_func1, this, nova_null) == 10)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call overrided default closure")));
}

void stabilitytest_Nova_SyntaxStability_Nova_checkZipper(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	Context132* contextArg111 = NOVA_MALLOC(sizeof(Context132));
	nova_datastruct_list_Nova_Array* l1_Nova_array1 = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_array2 = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_List* l1_Nova_zipped = (nova_datastruct_list_Nova_List*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing zip function ")));
	l1_Nova_array1 = generated59((stabilitytest_Nova_SyntaxStability*)(this));
	l1_Nova_array2 = generated60((stabilitytest_Nova_SyntaxStability*)(this));
	l1_Nova_zipped = nova_datastruct_list_Nova_List_0_Nova_zip((nova_datastruct_list_Nova_List*)(l1_Nova_array1),
		(nova_datastruct_list_Nova_List*)(l1_Nova_array2),
		(nova_datastruct_list_Nova_List_closure1345_Nova_zipper)&stabilitytest_Nova_SyntaxStability_Nova_lambda111, this, contextArg111);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Zipped: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_zipped)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" "))))))));
}

void stabilitytest_Nova_SyntaxStability_Nova_testSafeNavigation(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	stabilitytest_Nova_Node* l1_Nova_node = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* nova_local_13 = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* nova_local_14 = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* nova_local_15 = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* nova_local_16 = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* nova_local_17 = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* nova_local_18 = (stabilitytest_Nova_Node*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing safe navigation operator ")));
	l1_Nova_node = stabilitytest_Nova_Node_Nova_construct(0);
	l1_Nova_node->stabilitytest_Nova_Node_Nova_value = (int)(1);
	l1_Nova_node->stabilitytest_Nova_Node_Nova_child = stabilitytest_Nova_Node_Nova_construct(0);
	l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_value = (int)(2);
	l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child = stabilitytest_Nova_Node_Nova_construct(0);
	l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_value = (int)(3);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("if statement... ")));
	if ((int)((nova_local_13 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? ((int)((nova_local_14 = nova_local_13->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? ((int)((nova_local_15 = nova_local_14->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_local_15->stabilitytest_Nova_Node_Nova_value) : 0)) : 0)) : 0) == 3 && (int)((nova_local_16 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? ((int)((nova_local_17 = nova_local_16->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_local_17->stabilitytest_Nova_Node_Nova_value) : 0)) : 0) == 2 && (int)((nova_local_18 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? (nova_local_18->stabilitytest_Nova_Node_Nova_value) : 0) == 1)
	{
		nova_datastruct_list_Nova_Array* l5_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
		stabilitytest_Nova_Node* nova_local_0 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_2 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_3 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_4 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_5 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_6 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_7 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_8 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_9 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_10 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_11 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* nova_local_12 = (stabilitytest_Nova_Node*)nova_null;
		
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("assignment... ")));
		if ((nova_local_0 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null)
		{
			stabilitytest_Nova_Node* nova_local_1 = (stabilitytest_Nova_Node*)nova_null;
			
			if ((nova_local_1 = nova_local_0->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null)
			{
				nova_local_1->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_value = (int)(5);
			}
		}
		novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool247_static_Nova_expect((novex_nest_Nova_Nest*)(this),
					(int)((nova_local_2 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? ((int)((nova_local_3 = nova_local_2->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_local_3->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_value) : 0)) : 0) == 5)),
			1,
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Failed to set node value while safely navigating it")));
		l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child = (stabilitytest_Nova_Node*)((nova_Nova_Object*)nova_null);
		novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool248_static_Nova_expect((novex_nest_Nova_Nest*)(this),
					(int)((nova_local_4 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? ((int)((nova_local_5 = nova_local_4->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? ((int)((nova_local_6 = nova_local_5->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_local_6->stabilitytest_Nova_Node_Nova_value) : 0)) : 0)) : 0) == 3)),
			0,
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Failed to skip null child")));
		l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child = stabilitytest_Nova_Node_Nova_construct(0);
		l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child = stabilitytest_Nova_Node_Nova_construct(0);
		l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child = stabilitytest_Nova_Node_Nova_construct(0);
		l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_value = (int)(91);
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("function call... ")));
		stabilitytest_Nova_SyntaxStability_Nova_callMeWithNode((stabilitytest_Nova_SyntaxStability*)(this),
			(stabilitytest_Nova_Node*)((nova_local_7 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? (nova_Nova_Object*)((stabilitytest_Nova_Node*)((nova_local_8 = nova_local_7->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_Nova_Object*)((stabilitytest_Nova_Node*)((nova_local_9 = nova_local_8->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_Nova_Object*)((stabilitytest_Nova_Node*)((nova_local_10 = nova_local_9->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_Nova_Object*)(nova_local_10->stabilitytest_Nova_Node_Nova_child) : (nova_Nova_Object*)(nova_Nova_Object*)nova_null)) : (nova_Nova_Object*)(nova_Nova_Object*)nova_null)) : (nova_Nova_Object*)(nova_Nova_Object*)nova_null)) : (nova_Nova_Object*)(nova_Nova_Object*)nova_null));
		l5_Nova_array = generated61((stabilitytest_Nova_SyntaxStability*)(this));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("array access... ")));
		nova_datastruct_list_Nova_Array_0_Nova_set((nova_datastruct_list_Nova_Array*)(l5_Nova_array),
			(int)((nova_local_11 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? ((int)((nova_local_12 = nova_local_11->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_local_12->stabilitytest_Nova_Node_Nova_value) : 0)) : 0),
			(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("hello"))));
		novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool249_static_Nova_expect((novex_nest_Nova_Nest*)(this),
					nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l5_Nova_array),
						2)),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("hello")))))),
			1,
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Failed to set correct array index with correct value using the safe navigation operator")));
	}
	else
	{
		novex_nest_Nova_Nest_static_Nova_fail((novex_nest_Nova_Nest*)(this),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Failed to safely navigate valid children")));
	}
}

void stabilitytest_Nova_SyntaxStability_Nova_testArraySafeNavigation(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing array safe navigation ")));
}

char stabilitytest_Nova_SyntaxStability_Nova_callMeWithNode(stabilitytest_Nova_SyntaxStability* this, stabilitytest_Nova_Node* n)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool2_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		n->stabilitytest_Nova_Node_Nova_value == 91)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call method with correct safely navigated node")));
}

void stabilitytest_Nova_SyntaxStability_Nova_testSnakeCaseNumbers(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	double l1_Nova_dPos = 0;
	double l1_Nova_dNeg = 0;
	long_long l1_Nova_lPos = 0;
	long_long l1_Nova_lNeg = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing snake case numbers ")));
	l1_Nova_dPos = (double)(51325753.131313);
	l1_Nova_dNeg = (double)(-51325753.131313);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool250_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_dPos == 51325753.131313)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Positive snake case double failed to parse")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool251_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_dNeg == -51325753.131313)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Negative snake case double failed to parse")));
	l1_Nova_lPos = (long_long)(922547211);
	l1_Nova_lNeg = (long_long)(-922547211);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool252_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_lPos == 922547211)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Positive snake case long failed to parse")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool253_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_lNeg == -922547211)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Negative snake case long failed to parse")));
}

void stabilitytest_Nova_SyntaxStability_Nova_testArrayInitializers(stabilitytest_Nova_SyntaxStability* this, nova_io_Nova_OutputStream* out)
{
	int l1_Nova_num1 = 0;
	int l1_Nova_num2 = 0;
	nova_datastruct_list_Nova_Array* l1_Nova_myInts = (nova_datastruct_list_Nova_Array*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing array initializers ")));
	l1_Nova_num1 = (int)(1);
	l1_Nova_num2 = (int)(2);
	l1_Nova_myInts = generated62((stabilitytest_Nova_SyntaxStability*)(this),
		l1_Nova_num1,
	l1_Nova_num2);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool254_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_myInts),
					2)),
					(nova_Nova_Object*)(nova_primitive_number_Nova_Int_Nova_construct(0,
				l1_Nova_num1))) && nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_myInts),
					3)),
					(nova_Nova_Object*)(nova_primitive_number_Nova_Int_Nova_construct(0,
		l1_Nova_num2))))),
		1,
	0);
}

void stabilitytest_Nova_SyntaxStability_Nova_runTests(stabilitytest_Nova_SyntaxStability* this, stabilitytest_Nova_SyntaxStability_closure945_Nova_onResult stabilitytest_Nova_SyntaxStability_Nova_onResult, void* stabilitytest_Nova_SyntaxStability_ref_Nova_onResult, void* stabilitytest_Nova_SyntaxStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context220* contextArg199 = NOVA_MALLOC(sizeof(Context220));
	nova_time_Nova_Timer* l1_Nova_testSimpleMatchStatementTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testSimpleMatchStatementWithIndentationTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testSimpleMatchStatementWithScopesTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testMatchStatementWithVariableCaseValuesTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testMatchStatementWithVariableCaseValuesAndFallthroughTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testWhileLoopsTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testForLoopsTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testUntilTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testFilterFunctionalityTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testIteratorFunctionalityTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testForeachLoopFunctionalityTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testTernaryTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testElvisTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testNamedArgumentsTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_checkDefaultClosureArgumentsTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_checkZipperTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testSafeNavigationTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testArraySafeNavigationTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testSnakeCaseNumbersTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testArrayInitializersTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_SyntaxStability_Nova_onResult = (stabilitytest_Nova_SyntaxStability_closure945_Nova_onResult)(stabilitytest_Nova_SyntaxStability_Nova_onResult == 0 ? (stabilitytest_Nova_SyntaxStability_closure945_Nova_onResult)&stabilitytest_Nova_SyntaxStability_Nova_lambda199 : stabilitytest_Nova_SyntaxStability_Nova_onResult);
	stabilitytest_Nova_SyntaxStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_SyntaxStability_ref_Nova_onResult);
	stabilitytest_Nova_SyntaxStability_context_Nova_onResult = (void*)(stabilitytest_Nova_SyntaxStability_context_Nova_onResult == 0 ? (void*)contextArg199 : stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing SyntaxStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_testSimpleMatchStatementTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatement((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSimpleMatchStatementTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testSimpleMatchStatementTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSimpleMatchStatementTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testSimpleMatchStatementTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testSimpleMatchStatementWithIndentationTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatementWithIndentation((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSimpleMatchStatementWithIndentationTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testSimpleMatchStatementWithIndentationTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementWithIndentationTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l42_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSimpleMatchStatementWithIndentationTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l47_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testSimpleMatchStatementWithIndentationTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementWithIndentationTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l47_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testSimpleMatchStatementWithScopesTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l75_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testSimpleMatchStatementWithScopes((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSimpleMatchStatementWithScopesTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l75_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testSimpleMatchStatementWithScopesTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementWithScopesTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l75_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l80_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l80_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l80_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSimpleMatchStatementWithScopesTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l80_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l80_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testSimpleMatchStatementWithScopesTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testSimpleMatchStatementWithScopesTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l80_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testMatchStatementWithVariableCaseValuesTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l108_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testMatchStatementWithVariableCaseValues((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testMatchStatementWithVariableCaseValuesTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l108_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testMatchStatementWithVariableCaseValuesTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testMatchStatementWithVariableCaseValuesTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l108_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l113_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l113_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l113_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testMatchStatementWithVariableCaseValuesTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l113_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l113_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testMatchStatementWithVariableCaseValuesTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testMatchStatementWithVariableCaseValuesTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l113_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testMatchStatementWithVariableCaseValuesAndFallthroughTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l141_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testMatchStatementWithVariableCaseValuesAndFallthrough((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testMatchStatementWithVariableCaseValuesAndFallthroughTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l141_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testMatchStatementWithVariableCaseValuesAndFallthroughTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testMatchStatementWithVariableCaseValuesAndFallthroughTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l141_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l146_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l146_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l146_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testMatchStatementWithVariableCaseValuesAndFallthroughTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l146_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l146_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testMatchStatementWithVariableCaseValuesAndFallthroughTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testMatchStatementWithVariableCaseValuesAndFallthroughTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l146_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testWhileLoopsTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l174_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testWhileLoops((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testWhileLoopsTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l174_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testWhileLoopsTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testWhileLoopsTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l174_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l179_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l179_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l179_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testWhileLoopsTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l179_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l179_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testWhileLoopsTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testWhileLoopsTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l179_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testForLoopsTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l207_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testForLoops((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testForLoopsTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l207_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testForLoopsTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testForLoopsTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l207_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l212_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l212_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l212_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testForLoopsTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l212_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l212_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testForLoopsTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testForLoopsTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l212_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testUntilTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l240_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testUntil((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testUntilTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l240_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testUntilTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testUntilTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l240_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l245_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l245_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l245_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testUntilTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l245_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l245_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testUntilTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testUntilTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l245_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testFilterFunctionalityTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l273_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testFilterFunctionality((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFilterFunctionalityTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l273_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testFilterFunctionalityTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testFilterFunctionalityTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l273_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l278_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l278_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l278_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFilterFunctionalityTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l278_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l278_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testFilterFunctionalityTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testFilterFunctionalityTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l278_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testIteratorFunctionalityTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l306_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testIteratorFunctionality((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testIteratorFunctionalityTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l306_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testIteratorFunctionalityTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testIteratorFunctionalityTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l306_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l311_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l311_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l311_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testIteratorFunctionalityTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l311_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l311_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testIteratorFunctionalityTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testIteratorFunctionalityTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l311_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testForeachLoopFunctionalityTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l339_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testForeachLoopFunctionality((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testForeachLoopFunctionalityTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l339_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testForeachLoopFunctionalityTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testForeachLoopFunctionalityTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l339_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l344_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l344_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l344_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testForeachLoopFunctionalityTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l344_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l344_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testForeachLoopFunctionalityTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testForeachLoopFunctionalityTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l344_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testTernaryTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l372_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testTernary((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testTernaryTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l372_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testTernaryTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testTernaryTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l372_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l377_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l377_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l377_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testTernaryTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l377_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l377_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testTernaryTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testTernaryTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l377_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testElvisTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l405_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testElvis((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testElvisTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l405_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testElvisTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testElvisTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l405_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l410_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l410_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l410_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testElvisTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l410_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l410_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testElvisTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testElvisTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l410_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testNamedArgumentsTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l438_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testNamedArguments((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testNamedArgumentsTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l438_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testNamedArgumentsTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testNamedArgumentsTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l438_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l443_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l443_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l443_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testNamedArgumentsTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l443_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l443_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testNamedArgumentsTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testNamedArgumentsTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l443_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_checkDefaultClosureArgumentsTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l471_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_checkDefaultClosureArguments((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_checkDefaultClosureArgumentsTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l471_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_checkDefaultClosureArgumentsTimer,
			stabilitytest_Nova_SyntaxStability_Nova__checkDefaultClosureArgumentsTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l471_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l476_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l476_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l476_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_checkDefaultClosureArgumentsTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l476_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l476_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_checkDefaultClosureArgumentsTimer,
		stabilitytest_Nova_SyntaxStability_Nova__checkDefaultClosureArgumentsTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l476_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_checkZipperTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l504_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_checkZipper((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_checkZipperTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l504_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_checkZipperTimer,
			stabilitytest_Nova_SyntaxStability_Nova__checkZipperTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l504_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l509_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l509_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l509_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_checkZipperTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l509_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l509_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_checkZipperTimer,
		stabilitytest_Nova_SyntaxStability_Nova__checkZipperTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l509_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testSafeNavigationTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l537_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testSafeNavigation((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSafeNavigationTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l537_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testSafeNavigationTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testSafeNavigationTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l537_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l542_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l542_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l542_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSafeNavigationTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l542_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l542_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testSafeNavigationTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testSafeNavigationTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l542_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testArraySafeNavigationTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l570_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testArraySafeNavigation((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testArraySafeNavigationTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l570_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testArraySafeNavigationTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testArraySafeNavigationTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l570_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l575_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l575_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l575_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testArraySafeNavigationTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l575_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l575_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testArraySafeNavigationTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testArraySafeNavigationTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l575_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testSnakeCaseNumbersTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l603_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testSnakeCaseNumbers((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSnakeCaseNumbersTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l603_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testSnakeCaseNumbersTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testSnakeCaseNumbersTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l603_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l608_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l608_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l608_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSnakeCaseNumbersTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l608_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l608_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testSnakeCaseNumbersTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testSnakeCaseNumbersTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l608_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testArrayInitializersTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l636_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_SyntaxStability_Nova_testArrayInitializers((stabilitytest_Nova_SyntaxStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testArrayInitializersTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l636_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testArrayInitializersTimer,
			stabilitytest_Nova_SyntaxStability_Nova__testArrayInitializersTestCase);
			stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
				l636_Nova_testResult,
			stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l641_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l641_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l641_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testArrayInitializersTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l641_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l641_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testArrayInitializersTimer,
		stabilitytest_Nova_SyntaxStability_Nova__testArrayInitializersTestCase);
		stabilitytest_Nova_SyntaxStability_Nova_onResult(stabilitytest_Nova_SyntaxStability_ref_Nova_onResult,
			l641_Nova_testResult,
		stabilitytest_Nova_SyntaxStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_SyntaxStability* stabilitytest_Nova_SyntaxStability_Nova_this(stabilitytest_Nova_SyntaxStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated29(stabilitytest_Nova_SyntaxStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8, novex_nest_Nova_TestCase* value9, novex_nest_Nova_TestCase* value10, novex_nest_Nova_TestCase* value11, novex_nest_Nova_TestCase* value12, novex_nest_Nova_TestCase* value13, novex_nest_Nova_TestCase* value14, novex_nest_Nova_TestCase* value15, novex_nest_Nova_TestCase* value16, novex_nest_Nova_TestCase* value17, novex_nest_Nova_TestCase* value18, novex_nest_Nova_TestCase* value19)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 20);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	l1_Nova_temp[4] = value4;
	l1_Nova_temp[5] = value5;
	l1_Nova_temp[6] = value6;
	l1_Nova_temp[7] = value7;
	l1_Nova_temp[8] = value8;
	l1_Nova_temp[9] = value9;
	l1_Nova_temp[10] = value10;
	l1_Nova_temp[11] = value11;
	l1_Nova_temp[12] = value12;
	l1_Nova_temp[13] = value13;
	l1_Nova_temp[14] = value14;
	l1_Nova_temp[15] = value15;
	l1_Nova_temp[16] = value16;
	l1_Nova_temp[17] = value17;
	l1_Nova_temp[18] = value18;
	l1_Nova_temp[19] = value19;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	20);
}

nova_datastruct_list_Nova_Array* generated56(stabilitytest_Nova_SyntaxStability* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 7);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("this"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("is"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("a"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0,
		(char*)("test"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0,
		(char*)("to"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0,
		(char*)("see"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0,
		(char*)("what shows up"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	7);
}

nova_datastruct_list_Nova_Array* generated57(stabilitytest_Nova_SyntaxStability* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 7);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("this"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("is"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("a"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0,
		(char*)("test"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0,
		(char*)("to"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0,
		(char*)("see"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0,
		(char*)("what shows up"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	7);
}

nova_datastruct_list_Nova_Array* generated58(stabilitytest_Nova_SyntaxStability* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 7);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("this"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("is"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("a"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0,
		(char*)("test"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0,
		(char*)("to"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0,
		(char*)("see"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0,
		(char*)("what shows up"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	7);
}

nova_datastruct_list_Nova_Array* generated59(stabilitytest_Nova_SyntaxStability* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 4);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("This"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("is"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("a"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0,
		(char*)("test"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	4);
}

nova_datastruct_list_Nova_Array* generated60(stabilitytest_Nova_SyntaxStability* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 4);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("one"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("two"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("three"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0,
		(char*)("four"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	4);
}

nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_lambda111(stabilitytest_Nova_SyntaxStability* this, nova_Nova_String* x, nova_Nova_String* y, Context132* context)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((x)),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)(" "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((y)),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

nova_datastruct_list_Nova_Array* generated61(stabilitytest_Nova_SyntaxStability* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 5);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("1"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("2"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("3"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0,
		(char*)("4"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0,
		(char*)("5"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	5);
}

nova_datastruct_list_Nova_Array* generated62(stabilitytest_Nova_SyntaxStability* this, int value2, int value3)
{
	nova_primitive_number_Nova_Number** l1_Nova_temp = (nova_primitive_number_Nova_Number**)nova_null;
	
	l1_Nova_temp = (nova_primitive_number_Nova_Number**)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Number) * 5);
	l1_Nova_temp[0] = (nova_primitive_number_Nova_Number*)(nova_primitive_number_Nova_Byte_Nova_construct(0,
	0));
	l1_Nova_temp[1] = (nova_primitive_number_Nova_Number*)(nova_primitive_number_Nova_Byte_Nova_construct(0,
	0));
	l1_Nova_temp[2] = (nova_primitive_number_Nova_Number*)(nova_primitive_number_Nova_Int_Nova_construct(0,
	value2));
	l1_Nova_temp[3] = (nova_primitive_number_Nova_Number*)(nova_primitive_number_Nova_Int_Nova_construct(0,
	value3));
	l1_Nova_temp[4] = (nova_primitive_number_Nova_Number*)(nova_primitive_number_Nova_Byte_Nova_construct(0,
	0));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	5);
}

void stabilitytest_Nova_SyntaxStability_Nova_lambda199(stabilitytest_Nova_SyntaxStability* this, novex_nest_Nova_TestResult* _1, Context220* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_SyntaxStability_Accessorfunc_Nova_model(stabilitytest_Nova_SyntaxStability* this)
{
	return stabilitytest_Nova_SyntaxStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_SyntaxStability_Nova_super(stabilitytest_Nova_SyntaxStability* this)
{
	this->stabilitytest_Nova_SyntaxStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

