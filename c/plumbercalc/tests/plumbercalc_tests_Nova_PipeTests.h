#ifndef FILE_plumbercalc_tests_Nova_PipeTests_NOVA
#define FILE_plumbercalc_tests_Nova_PipeTests_NOVA

typedef struct plumbercalc_tests_Nova_PipeTests plumbercalc_tests_Nova_PipeTests;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct novex_nest_Nova_TestResult novex_nest_Nova_TestResult;

typedef void (*plumbercalc_tests_Nova_PipeTests_closure508_Nova_onResult)(void*, novex_nest_Nova_TestResult*, void*);

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

CCLASS_CLASS
(
	plumbercalc_tests_Nova_PipeTests, 
	
	plumbercalc_tests_Nova_PipeTests_VTable* vtable;
	struct Private_plumbercalc_tests_Nova_PipeTests* prv;
	nova_Nova_String* nova_Nova_Object_Nova_hashCode;
	novex_nest_Nova_TestRunnerModel* plumbercalc_tests_Nova_PipeTests_Nova_model;
)
extern novex_nest_Nova_TestCase* plumbercalc_tests_Nova_PipeTests_Nova__pipeFieldValuesTestCase;
extern novex_nest_Nova_TestCase* plumbercalc_tests_Nova_PipeTests_Nova__pipePropertiesTestCase;
extern novex_nest_Nova_TestRunnerModel* plumbercalc_tests_Nova_PipeTests_Nova__runTestsTestRunner;

extern char plumbercalc_tests_Nova_PipeTests_Nova_init_static_inited;
void plumbercalc_tests_Nova_PipeTests_Nova_init_static();
plumbercalc_tests_Nova_PipeTests* plumbercalc_tests_Nova_PipeTests_Nova_construct(plumbercalc_tests_Nova_PipeTests* this);
void plumbercalc_tests_Nova_PipeTests_Nova_destroy(plumbercalc_tests_Nova_PipeTests** this);
void plumbercalc_tests_Nova_PipeTests_Nova_runTests(plumbercalc_tests_Nova_PipeTests* this, plumbercalc_tests_Nova_PipeTests_closure508_Nova_onResult plumbercalc_tests_Nova_PipeTests_Nova_onResult, void* plumbercalc_tests_Nova_PipeTests_ref_Nova_onResult, void* plumbercalc_tests_Nova_PipeTests_context_Nova_onResult, nova_io_Nova_OutputStream* out);
plumbercalc_tests_Nova_PipeTests* plumbercalc_tests_Nova_PipeTests_Nova_this(plumbercalc_tests_Nova_PipeTests* this);
novex_nest_Nova_TestRunnerModel* plumbercalc_tests_Nova_PipeTests_Accessorfunc_Nova_model(plumbercalc_tests_Nova_PipeTests* this);
void plumbercalc_tests_Nova_PipeTests_Nova_super(plumbercalc_tests_Nova_PipeTests* this);

#endif
