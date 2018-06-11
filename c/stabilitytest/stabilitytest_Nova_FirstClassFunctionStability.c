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

typedef struct
{
	/* let Int input */ int* stabilitytest_Nova_FirstClassFunctionStability_Nova_input;
} Context0;
typedef struct
{
	/* let Int input */ int* stabilitytest_Nova_FirstClassFunctionStability_Nova_input;
} Context1;
typedef struct
{
	/* let Int input */ int* stabilitytest_Nova_FirstClassFunctionStability_Nova_input;
} Context2;
typedef struct
{
	/* let Int input */ int* stabilitytest_Nova_FirstClassFunctionStability_Nova_input;
} Context3;
typedef struct
{
	/* var
	Bool worked */ char* stabilitytest_Nova_FirstClassFunctionStability_Nova_worked;
} Context91;
typedef struct
{
	/* var
	Bool worked */ char* stabilitytest_Nova_FirstClassFunctionStability_Nova_worked;
} Context92;
typedef struct
{
	/* var
	Bool worked */ char* stabilitytest_Nova_FirstClassFunctionStability_Nova_worked;
} Context93;
typedef struct
{
	/* var
	Bool worked */ char* stabilitytest_Nova_FirstClassFunctionStability_Nova_worked;
} Context94;
typedef struct
{
	/* let Int input */ int* stabilitytest_Nova_FirstClassFunctionStability_Nova_input;
} Context95;
typedef struct
{
	/* let Int input */ int* stabilitytest_Nova_FirstClassFunctionStability_Nova_input;
} Context96;
typedef struct
{
} Context97;
typedef struct
{
} Context209;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_String nova_Nova_String;

typedef void (*nova_local_0)(void*, void*);
typedef int (*nova_local_2)(void*, int, nova_Nova_String*, void*);
typedef void (*l1_closure534_Nova_func)(void*, void*);
typedef void (*l1_closure534_Nova_func)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure750_Nova_getFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure750_Nova_getFunc)(void*, void*);
typedef void (*l1_closure534_Nova_func)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure750_Nova_getFunc)(void*, void*);
typedef void (*l1_closure540_Nova_func2)(void*, void*);
typedef void (*l1_closure540_Nova_func2)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure752_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure752_Nova_inlineGetFunc)(void*, void*);
typedef void (*l1_closure540_Nova_func2)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure752_Nova_inlineGetFunc)(void*, void*);
typedef void (*l1_closure546_Nova_func3)(void*, void*);
typedef void (*l1_closure546_Nova_func3)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure754_Nova_inlineGetFunc2)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure754_Nova_inlineGetFunc2)(void*, void*);
typedef void (*l1_closure546_Nova_func3)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure754_Nova_inlineGetFunc2)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure562_Nova_inlineGetFunc*/nova_funcStruct* (*l1_closure559_Nova_chained)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure562_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure562_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure562_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure551_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure562_Nova_inlineGetFunc*/nova_funcStruct* (*l1_closure559_Nova_chained)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure556_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure562_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure562_Nova_inlineGetFunc*/nova_funcStruct* (*l1_closure559_Nova_chained)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure562_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc*/nova_funcStruct* (*l1_closure573_Nova_chained)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure566_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc*/nova_funcStruct* (*l1_closure573_Nova_chained)(void*, void*);
typedef void (*l1_closure577_Nova_c)(void*, void*);
typedef void (*l1_closure577_Nova_c)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc*/nova_funcStruct* (*l1_closure573_Nova_chained)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc)(void*, void*);
typedef void (*l1_closure577_Nova_c)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure602_Nova_chainedFuncReference*/nova_funcStruct* (*l1_closure597_Nova_chainX3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure603_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure602_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure603_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure603_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure603_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure583_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure603_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure602_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure602_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure585_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure602_Nova_chainedFuncReference*/nova_funcStruct* (*l1_closure597_Nova_chainX3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure764_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure591_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure593_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure764_Nova_chainedFuncReference3)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure603_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure603_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure602_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure602_Nova_chainedFuncReference*/nova_funcStruct* (*l1_closure597_Nova_chainX3)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure764_Nova_chainedFuncReference3)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure603_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure603_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure602_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure603_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure636_Nova_chainedFuncReference3*/nova_funcStruct* (*l1_closure629_Nova_chainX4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure638_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure636_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure638_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure609_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure638_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure638_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure611_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure638_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure636_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure636_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure613_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure636_Nova_chainedFuncReference3*/nova_funcStruct* (*l1_closure629_Nova_chainX4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure772_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure620_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure622_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure624_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure772_Nova_chainedFuncReference4)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure638_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure638_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure636_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure636_Nova_chainedFuncReference3*/nova_funcStruct* (*l1_closure629_Nova_chainX4)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure772_Nova_chainedFuncReference4)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure638_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure638_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure636_Nova_chainedFuncReference3)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure638_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure639_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure681_Nova_chainedFuncReference4*/nova_funcStruct* (*l1_closure672_Nova_chainX5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure684_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure681_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure684_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure646_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure648_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure684_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure684_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure650_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure684_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure681_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure681_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure652_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure681_Nova_chainedFuncReference4*/nova_funcStruct* (*l1_closure672_Nova_chainX5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure782_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure660_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure662_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure664_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure666_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure782_Nova_chainedFuncReference5)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure684_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure684_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure681_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure681_Nova_chainedFuncReference4*/nova_funcStruct* (*l1_closure672_Nova_chainX5)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure782_Nova_chainedFuncReference5)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure684_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure684_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure681_Nova_chainedFuncReference4)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure684_Nova_chainedFuncReference3)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure686_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure687_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure738_Nova_chainedFuncReference5*/nova_funcStruct* (*l1_closure727_Nova_chainX6)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure742_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure738_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure742_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure695_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure697_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure699_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure742_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure742_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure701_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure742_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure738_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure738_Nova_chainedFuncReference5*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure703_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure738_Nova_chainedFuncReference5*/nova_funcStruct* (*l1_closure727_Nova_chainX6)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure794_Nova_chainedFuncReference6)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure712_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure714_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure716_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure718_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure720_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure794_Nova_chainedFuncReference6)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure742_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure742_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure738_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure738_Nova_chainedFuncReference5*/nova_funcStruct* (*l1_closure727_Nova_chainX6)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure794_Nova_chainedFuncReference6)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure742_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure742_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure738_Nova_chainedFuncReference5)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure742_Nova_chainedFuncReference4)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure745_Nova_chainedFuncReference3)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure747_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure748_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure750_Nova_getFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure750_Nova_getFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure752_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure752_Nova_inlineGetFunc)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure754_Nova_inlineGetFunc2)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure754_Nova_inlineGetFunc2)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure757_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure764_Nova_chainedFuncReference3)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure762_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure763_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure764_Nova_chainedFuncReference3)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure772_Nova_chainedFuncReference4)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure769_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure770_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure771_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure772_Nova_chainedFuncReference4)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure782_Nova_chainedFuncReference5)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure778_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure779_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure780_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure781_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure782_Nova_chainedFuncReference5)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure794_Nova_chainedFuncReference6)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure789_Nova_inlineGetFunc*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure790_Nova_chainedFuncReference*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure791_Nova_chainedFuncReference3*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure792_Nova_chainedFuncReference4*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5)(void*, void*);
typedef /*stabilitytest_Nova_FirstClassFunctionStability_closure793_Nova_chainedFuncReference5*/nova_funcStruct* (*stabilitytest_Nova_FirstClassFunctionStability_closure794_Nova_chainedFuncReference6)(void*, void*);
typedef void (*func799)(void*, void*);
typedef void (*func799)(void*, void*);
typedef void (*func798)(void*, void*);
typedef void (*func798)(void*, void*);
typedef void (*func799)(void*, void*);
typedef void (*nova_local_0)(void*, void*);
typedef void (*func805)(void*, void*);
typedef void (*func805)(void*, void*);
typedef void (*func804)(void*, void*);
typedef void (*func804)(void*, void*);
typedef void (*func805)(void*, void*);
typedef void (*nova_local_0)(void*, void*);
typedef void (*nova_local_0)(void*, void*);
typedef void (*nova_local_0)(void*, void*);
typedef int (*nova_local_2)(void*, int, nova_Nova_String*, void*);
typedef int (*func814)(void*, int, nova_Nova_String*, void*);
typedef int (*func814)(void*, int, nova_Nova_String*, void*);
typedef int (*func813)(void*, int, nova_Nova_String*, void*);
typedef int (*func813)(void*, int, nova_Nova_String*, void*);
typedef int (*func814)(void*, int, nova_Nova_String*, void*);
typedef int (*nova_local_2)(void*, int, nova_Nova_String*, void*);
typedef int (*nova_local_2)(void*, int, nova_Nova_String*, void*);
typedef int (*nova_local_2)(void*, int, nova_Nova_String*, void*);
typedef void (*l1_closure821_Nova_func)(void*, void*);
typedef void (*l1_closure821_Nova_func)(void*, void*);
typedef void (*l1_closure821_Nova_func)(void*, void*);
typedef void (*l1_closure821_Nova_func)(void*, void*);
typedef void (*stabilitytest_Nova_FirstClassFunctionStability_closure822_Nova_func)(void*, void*);
typedef void (*l1_closure825_Nova_func)(void*, void*);
typedef void (*l1_closure825_Nova_func)(void*, void*);
typedef void (*l1_closure825_Nova_func)(void*, void*);
typedef void (*l1_closure828_Nova_func)(void*, int, void*);
typedef void (*l1_closure828_Nova_func)(void*, int, void*);
typedef void (*l1_closure828_Nova_func)(void*, int, void*);
typedef void (*l1_closure831_Nova_func)(void*, int, void*);
typedef void (*l1_closure831_Nova_func)(void*, int, void*);
typedef void (*l1_closure831_Nova_func)(void*, int, void*);
typedef int (*l1_closure836_Nova_func)(void*, void*);
typedef int (*l1_closure836_Nova_func)(void*, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure839_Nova_returnLambda)(void*, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure839_Nova_returnLambda)(void*, void*);
typedef int (*l1_closure836_Nova_func)(void*, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure839_Nova_returnLambda)(void*, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure839_Nova_returnLambda)(void*, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure839_Nova_returnLambda)(void*, void*);
typedef int (*l1_closure844_Nova_func)(void*, int, int, void*);
typedef int (*l1_closure844_Nova_func)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure847_Nova_returnLambdaWithParameters)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure847_Nova_returnLambdaWithParameters)(void*, int, int, void*);
typedef int (*l1_closure844_Nova_func)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure847_Nova_returnLambdaWithParameters)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure847_Nova_returnLambdaWithParameters)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure847_Nova_returnLambdaWithParameters)(void*, int, int, void*);
typedef int (*l1_closure852_Nova_func)(void*, void*);
typedef int (*l1_closure852_Nova_func)(void*, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure854_Nova_inlineReturnLambda)(void*, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure854_Nova_inlineReturnLambda)(void*, void*);
typedef int (*l1_closure852_Nova_func)(void*, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure854_Nova_inlineReturnLambda)(void*, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure854_Nova_inlineReturnLambda)(void*, void*);
typedef int (*l1_closure859_Nova_func)(void*, int, int, void*);
typedef int (*l1_closure859_Nova_func)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure861_Nova_inlineReturnLambdaWithParameters)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure861_Nova_inlineReturnLambdaWithParameters)(void*, int, int, void*);
typedef int (*l1_closure859_Nova_func)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure861_Nova_inlineReturnLambdaWithParameters)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure861_Nova_inlineReturnLambdaWithParameters)(void*, int, int, void*);
typedef int (*l1_closure866_Nova_func)(void*, int, int, void*);
typedef int (*l1_closure866_Nova_func)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure869_Nova_inlineReturnLambdaWithParametersAndType)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure869_Nova_inlineReturnLambdaWithParametersAndType)(void*, int, int, void*);
typedef int (*l1_closure866_Nova_func)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure869_Nova_inlineReturnLambdaWithParametersAndType)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure869_Nova_inlineReturnLambdaWithParametersAndType)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure869_Nova_inlineReturnLambdaWithParametersAndType)(void*, int, int, void*);
typedef int (*l1_closure874_Nova_func)(void*, int, int, void*);
typedef int (*l1_closure874_Nova_func)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure877_Nova_inlineReturnLambdaWithParametersAndTypeWithBody)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure877_Nova_inlineReturnLambdaWithParametersAndTypeWithBody)(void*, int, int, void*);
typedef int (*l1_closure874_Nova_func)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure877_Nova_inlineReturnLambdaWithParametersAndTypeWithBody)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure877_Nova_inlineReturnLambdaWithParametersAndTypeWithBody)(void*, int, int, void*);
typedef int (*stabilitytest_Nova_FirstClassFunctionStability_closure877_Nova_inlineReturnLambdaWithParametersAndTypeWithBody)(void*, int, int, void*);
typedef void (*l1_closure879_Nova_func)(void*, void*);
typedef void (*l1_closure879_Nova_func)(void*, void*);
typedef void (*l1_closure882_Nova_func)(void*, void*);
typedef void (*l1_closure882_Nova_func)(void*, void*);
typedef void (*l1_closure882_Nova_func)(void*, void*);
typedef void (*l1_closure885_Nova_func)(void*, void*);
typedef void (*l1_closure885_Nova_func)(void*, void*);
typedef void (*l1_closure885_Nova_func)(void*, void*);

CCLASS_PRIVATE
(
	stabilitytest_Nova_FirstClassFunctionStability,
	char stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch;
	int stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount;
	int stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount;
	char stabilitytest_Nova_FirstClassFunctionStability_Nova_bodyWorked;
	
)
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByInlineFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByInlineFunctionWithTypeSpecified(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionReturnedByFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingAssignedChainFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX3(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX4(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX5(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX6(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_refFunc(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure750_Nova_getFunc*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_getFunc(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure752_Nova_inlineGetFunc*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineGetFunc(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure754_Nova_inlineGetFunc2*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineGetFunc2(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure764_Nova_chainedFuncReference3*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference3(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure772_Nova_chainedFuncReference4*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference4(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure782_Nova_chainedFuncReference5*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference5(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure794_Nova_chainedFuncReference6*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference6(stabilitytest_Nova_FirstClassFunctionStability* this);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testSingleFunctionInArray(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingFunctionFromCollection(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingFunctionWithParametersFromCollection(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
int stabilitytest_Nova_FirstClassFunctionStability_Nova_paramFunc(stabilitytest_Nova_FirstClassFunctionStability* this, int x, nova_Nova_String* y);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testParameterlessLambdaVariableFunctionality(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_callFunc(stabilitytest_Nova_FirstClassFunctionStability* this, stabilitytest_Nova_FirstClassFunctionStability_closure822_Nova_func stabilitytest_Nova_FirstClassFunctionStability_Nova_func, void* stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_func, void* stabilitytest_Nova_FirstClassFunctionStability_context_Nova_func);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testParameterlessLocalFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testLambdaVariableWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testLocalFunctionWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testReturningLambda(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure839_Nova_returnLambda*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_returnLambda(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testReturningLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure847_Nova_returnLambdaWithParameters*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_returnLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambda(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure854_Nova_inlineReturnLambda*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambda(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure861_Nova_inlineReturnLambdaWithParameters*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParametersAndType(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure869_Nova_inlineReturnLambdaWithParametersAndType*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParametersAndType(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParametersAndTypeWithBody(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure877_Nova_inlineReturnLambdaWithParametersAndTypeWithBody*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParametersAndTypeWithBody(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testImplicitNullFunctionReference(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testExplicitNullFunctionReference(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testNonNullFunctionReference(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda1(stabilitytest_Nova_FirstClassFunctionStability* this, Context0* context);
int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda2(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context1* context);
int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda3(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context2* context);
int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda4(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context3* context);
nova_datastruct_list_Nova_Array* generated17(stabilitytest_Nova_FirstClassFunctionStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8, novex_nest_Nova_TestCase* value9, novex_nest_Nova_TestCase* value10, novex_nest_Nova_TestCase* value11, novex_nest_Nova_TestCase* value12, novex_nest_Nova_TestCase* value13, novex_nest_Nova_TestCase* value14, novex_nest_Nova_TestCase* value15, novex_nest_Nova_TestCase* value16, novex_nest_Nova_TestCase* value17, novex_nest_Nova_TestCase* value18, novex_nest_Nova_TestCase* value19, novex_nest_Nova_TestCase* value20, novex_nest_Nova_TestCase* value21, novex_nest_Nova_TestCase* value22, novex_nest_Nova_TestCase* value23, novex_nest_Nova_TestCase* value24);
char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda92(stabilitytest_Nova_FirstClassFunctionStability* this, Context91* context);
char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda93(stabilitytest_Nova_FirstClassFunctionStability* this, Context92* context);
char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda94(stabilitytest_Nova_FirstClassFunctionStability* this, int x, Context93* context);
char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda95(stabilitytest_Nova_FirstClassFunctionStability* this, int x, Context94* context);
int stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda96(stabilitytest_Nova_FirstClassFunctionStability* this, Context95* context);
int stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda97(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context96* context);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda98(stabilitytest_Nova_FirstClassFunctionStability* this, Context97* context);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_lambda188(stabilitytest_Nova_FirstClassFunctionStability* this, novex_nest_Nova_TestResult* _1, Context209* context);


void stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByInlineFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByInlineFunctionWithTypeSpecified(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionReturnedByFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingAssignedChainFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX3(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX4(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX5(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX6(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_refFunc(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure750_Nova_getFunc*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_getFunc(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure752_Nova_inlineGetFunc*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineGetFunc(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure754_Nova_inlineGetFunc2*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineGetFunc2(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure764_Nova_chainedFuncReference3*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference3(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure772_Nova_chainedFuncReference4*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference4(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure782_Nova_chainedFuncReference5*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference5(stabilitytest_Nova_FirstClassFunctionStability* this);
/*stabilitytest_Nova_FirstClassFunctionStability_closure794_Nova_chainedFuncReference6*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference6(stabilitytest_Nova_FirstClassFunctionStability* this);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testSingleFunctionInArray(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingFunctionFromCollection(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingFunctionWithParametersFromCollection(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
int stabilitytest_Nova_FirstClassFunctionStability_Nova_paramFunc(stabilitytest_Nova_FirstClassFunctionStability* this, int x, nova_Nova_String* y);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testParameterlessLambdaVariableFunctionality(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_callFunc(stabilitytest_Nova_FirstClassFunctionStability* this, stabilitytest_Nova_FirstClassFunctionStability_closure822_Nova_func stabilitytest_Nova_FirstClassFunctionStability_Nova_func, void* stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_func, void* stabilitytest_Nova_FirstClassFunctionStability_context_Nova_func);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testParameterlessLocalFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testLambdaVariableWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testLocalFunctionWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testReturningLambda(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure839_Nova_returnLambda*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_returnLambda(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testReturningLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure847_Nova_returnLambdaWithParameters*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_returnLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambda(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure854_Nova_inlineReturnLambda*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambda(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure861_Nova_inlineReturnLambdaWithParameters*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParametersAndType(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure869_Nova_inlineReturnLambdaWithParametersAndType*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParametersAndType(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParametersAndTypeWithBody(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
/*stabilitytest_Nova_FirstClassFunctionStability_closure877_Nova_inlineReturnLambdaWithParametersAndTypeWithBody*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParametersAndTypeWithBody(stabilitytest_Nova_FirstClassFunctionStability* this, int input);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testImplicitNullFunctionReference(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testExplicitNullFunctionReference(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_testNonNullFunctionReference(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out);
int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda1(stabilitytest_Nova_FirstClassFunctionStability* this, Context0* context);
int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda2(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context1* context);
int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda3(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context2* context);
int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda4(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context3* context);
nova_datastruct_list_Nova_Array* generated17(stabilitytest_Nova_FirstClassFunctionStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8, novex_nest_Nova_TestCase* value9, novex_nest_Nova_TestCase* value10, novex_nest_Nova_TestCase* value11, novex_nest_Nova_TestCase* value12, novex_nest_Nova_TestCase* value13, novex_nest_Nova_TestCase* value14, novex_nest_Nova_TestCase* value15, novex_nest_Nova_TestCase* value16, novex_nest_Nova_TestCase* value17, novex_nest_Nova_TestCase* value18, novex_nest_Nova_TestCase* value19, novex_nest_Nova_TestCase* value20, novex_nest_Nova_TestCase* value21, novex_nest_Nova_TestCase* value22, novex_nest_Nova_TestCase* value23, novex_nest_Nova_TestCase* value24);
char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda92(stabilitytest_Nova_FirstClassFunctionStability* this, Context91* context);
char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda93(stabilitytest_Nova_FirstClassFunctionStability* this, Context92* context);
char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda94(stabilitytest_Nova_FirstClassFunctionStability* this, int x, Context93* context);
char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda95(stabilitytest_Nova_FirstClassFunctionStability* this, int x, Context94* context);
int stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda96(stabilitytest_Nova_FirstClassFunctionStability* this, Context95* context);
int stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda97(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context96* context);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda98(stabilitytest_Nova_FirstClassFunctionStability* this, Context97* context);
void stabilitytest_Nova_FirstClassFunctionStability_Nova_lambda188(stabilitytest_Nova_FirstClassFunctionStability* this, novex_nest_Nova_TestResult* _1, Context209* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByFunctionTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionWithTypeSpecifiedTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionReturnedByFunctionTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingAssignedChainFunctionTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX3TestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX4TestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX5TestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX6TestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testSingleFunctionInArrayTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionFromCollectionTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionWithParametersFromCollectionTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLambdaVariableFunctionalityTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLocalFunctionTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testLambdaVariableWithParametersTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testLocalFunctionWithParametersTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaWithParametersTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeWithBodyTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testImplicitNullFunctionReferenceTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testExplicitNullFunctionReferenceTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FirstClassFunctionStability_Nova__testNonNullFunctionReferenceTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_FirstClassFunctionStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_FirstClassFunctionStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_FirstClassFunctionStability_Nova_init_static()
{
	if (!stabilitytest_Nova_FirstClassFunctionStability_Nova_init_static_inited) {
		stabilitytest_Nova_FirstClassFunctionStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByFunctionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testFunctionReturnedByFunction")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling a function returned by a function")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testFunctionReturnedByInlineFunction")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling a function returned by an inline function")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionWithTypeSpecifiedTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testFunctionReturnedByInlineFunctionWithTypeSpecified")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling a function returned by an inline function with type specified")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionReturnedByFunctionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testCallingChainedFunctionReturnedByFunction")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling a chained function returned by a function")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingAssignedChainFunctionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testCallingAssignedChainFunction")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling an assigned chained function returned by a function")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX3TestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testCallingChainedFunctionX3")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling a chained function x3 returned by a function")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX4TestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testCallingChainedFunctionX4")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling a chained function x4 returned by a function")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX5TestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testCallingChainedFunctionX5")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling a chained function x5 returned by a function")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX6TestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testCallingChainedFunctionX6")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling a chained function x6 returned by a function")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testSingleFunctionInArrayTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testSingleFunctionInArray")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing single function in Array")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionFromCollectionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testCallingFunctionFromCollection")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling a single function from Array")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionWithParametersFromCollectionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testCallingFunctionWithParametersFromCollection")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing calling a single function with parameters from Array")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLambdaVariableFunctionalityTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testParameterlessLambdaVariableFunctionality")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing parameterless lambda variable functionality")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLocalFunctionTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testParameterlessLocalFunction")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing parameterless local function")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testLambdaVariableWithParametersTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testLambdaVariableWithParameters")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing lambda variable with parameters functionality")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testLocalFunctionWithParametersTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testLocalFunctionWithParameters")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing local function with parameters")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testReturningLambda")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing returning a lambda")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaWithParametersTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testReturningLambdaWithParameters")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing returning a lambda with parameters")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testInlineReturningLambda")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing inline returning a lambda")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testInlineReturningLambdaWithParameters")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing inline returning a lambda with parameters")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testInlineReturningLambdaWithParametersAndType")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing inline returning a lambda with parameters and type predefined")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeWithBodyTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testInlineReturningLambdaWithParametersAndTypeWithBody")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing inline returning a lambda with parameters and type predefined with body")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testImplicitNullFunctionReferenceTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testImplicitNullFunctionReference")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing implicit null function reference")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testExplicitNullFunctionReferenceTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testExplicitNullFunctionReference")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing explicit null function reference")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testNonNullFunctionReferenceTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testNonNullFunctionReference")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing non-null function reference")));
			stabilitytest_Nova_FirstClassFunctionStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated17(0,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByFunctionTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionWithTypeSpecifiedTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionReturnedByFunctionTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingAssignedChainFunctionTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX3TestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX4TestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX5TestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX6TestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testSingleFunctionInArrayTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionFromCollectionTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionWithParametersFromCollectionTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLambdaVariableFunctionalityTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLocalFunctionTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testLambdaVariableWithParametersTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testLocalFunctionWithParametersTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaWithParametersTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeWithBodyTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testImplicitNullFunctionReferenceTestCase,
					stabilitytest_Nova_FirstClassFunctionStability_Nova__testExplicitNullFunctionReferenceTestCase,
				stabilitytest_Nova_FirstClassFunctionStability_Nova__testNonNullFunctionReferenceTestCase),
			0);
		}
	}
}

stabilitytest_Nova_FirstClassFunctionStability* stabilitytest_Nova_FirstClassFunctionStability_Nova_construct(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_FirstClassFunctionStability, this);
	this->vtable = &stabilitytest_Nova_FirstClassFunctionStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_FirstClassFunctionStability_Nova_super(this);
	
	return stabilitytest_Nova_FirstClassFunctionStability_Nova_this((stabilitytest_Nova_FirstClassFunctionStability*)(this));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_destroy(stabilitytest_Nova_FirstClassFunctionStability** this)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	
	NOVA_FREE((*this)->prv);
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_FirstClassFunctionStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure750_Nova_getFunc*/nova_funcStruct* l1_Nova_func = (/*stabilitytest_Nova_FirstClassFunctionStability_closure750_Nova_getFunc*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling a function returned by a function ")));
	l1_Nova_func = stabilitytest_Nova_FirstClassFunctionStability_Nova_getFunc((stabilitytest_Nova_FirstClassFunctionStability*)(this));
	((l1_closure534_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
	l1_Nova_func->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool76_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call first class function returned from function")));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByInlineFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure752_Nova_inlineGetFunc*/nova_funcStruct* l1_Nova_func2 = (/*stabilitytest_Nova_FirstClassFunctionStability_closure752_Nova_inlineGetFunc*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling a function returned by an inline function ")));
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	l1_Nova_func2 = stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineGetFunc((stabilitytest_Nova_FirstClassFunctionStability*)(this));
	((l1_closure540_Nova_func2)l1_Nova_func2->func)(l1_Nova_func2->ref,
	l1_Nova_func2->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool77_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call first class function returned from inline function")));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByInlineFunctionWithTypeSpecified(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure754_Nova_inlineGetFunc2*/nova_funcStruct* l1_Nova_func3 = (/*stabilitytest_Nova_FirstClassFunctionStability_closure754_Nova_inlineGetFunc2*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling a function returned by an inline function with type specified ")));
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	l1_Nova_func3 = stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineGetFunc2((stabilitytest_Nova_FirstClassFunctionStability*)(this));
	((l1_closure546_Nova_func3)l1_Nova_func3->func)(l1_Nova_func3->ref,
	l1_Nova_func3->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool78_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call first class function returned from inline function with type specified")));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionReturnedByFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference*/nova_funcStruct* l1_Nova_chained = (/*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference*/nova_funcStruct*)nova_null;
	/*nova_local_0*/nova_funcStruct* nova_local_0 = (/*nova_local_0*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling a chained function returned by a function ")));
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount = (int)(0);
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	l1_Nova_chained = stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference((stabilitytest_Nova_FirstClassFunctionStability*)(this));
	((stabilitytest_Nova_FirstClassFunctionStability_closure551_Nova_inlineGetFunc)(nova_local_0 = (/*nova_local_0*/nova_funcStruct*)((l1_closure559_Nova_chained)l1_Nova_chained->func)(l1_Nova_chained->ref,
	l1_Nova_chained->context))->func)(nova_local_0->ref,
	nova_local_0->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool79_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch && this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount == 1)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to call first class chained function returned from function: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
								(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingAssignedChainFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference*/nova_funcStruct* l1_Nova_chained = (/*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference*/nova_funcStruct*)nova_null;
	/*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc*/nova_funcStruct* l1_Nova_c = (/*stabilitytest_Nova_FirstClassFunctionStability_closure578_Nova_inlineGetFunc*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling an assigned chained function returned by a function ")));
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount = (int)(0);
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	l1_Nova_chained = stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference((stabilitytest_Nova_FirstClassFunctionStability*)(this));
	l1_Nova_c = ((l1_closure573_Nova_chained)l1_Nova_chained->func)(l1_Nova_chained->ref,
	l1_Nova_chained->context);
	((l1_closure577_Nova_c)l1_Nova_c->func)(l1_Nova_c->ref,
	l1_Nova_c->context);
	((l1_closure577_Nova_c)l1_Nova_c->func)(l1_Nova_c->ref,
	l1_Nova_c->context);
	((l1_closure577_Nova_c)l1_Nova_c->func)(l1_Nova_c->ref,
	l1_Nova_c->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool80_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch && this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount == 3)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to call first class chained function returned from function: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
								(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX3(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure764_Nova_chainedFuncReference3*/nova_funcStruct* l1_Nova_chainX3 = (/*stabilitytest_Nova_FirstClassFunctionStability_closure764_Nova_chainedFuncReference3*/nova_funcStruct*)nova_null;
	/*nova_local_0*/nova_funcStruct* nova_local_0 = (/*nova_local_0*/nova_funcStruct*)nova_null;
	/*nova_local_1*/nova_funcStruct* nova_local_1 = (/*nova_local_1*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling a chained function x3 returned by a function ")));
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount = (int)(0);
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount = (int)(0);
	l1_Nova_chainX3 = stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference3((stabilitytest_Nova_FirstClassFunctionStability*)(this));
	((stabilitytest_Nova_FirstClassFunctionStability_closure585_Nova_chainedFuncReference)(nova_local_1 = (/*nova_local_1*/nova_funcStruct*)((stabilitytest_Nova_FirstClassFunctionStability_closure583_Nova_inlineGetFunc)(nova_local_0 = (/*nova_local_0*/nova_funcStruct*)((l1_closure597_Nova_chainX3)l1_Nova_chainX3->func)(l1_Nova_chainX3->ref,
			l1_Nova_chainX3->context))->func)(nova_local_0->ref,
	nova_local_0->context))->func)(nova_local_1->ref,
	nova_local_1->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool81_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch && this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount == 1 && this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount == 3)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to call first class chained function x3 returned from function: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
								(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(", x"))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
																(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount))),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)(""))))))))))))))));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX4(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure772_Nova_chainedFuncReference4*/nova_funcStruct* l1_Nova_chainX4 = (/*stabilitytest_Nova_FirstClassFunctionStability_closure772_Nova_chainedFuncReference4*/nova_funcStruct*)nova_null;
	/*nova_local_0*/nova_funcStruct* nova_local_0 = (/*nova_local_0*/nova_funcStruct*)nova_null;
	/*nova_local_1*/nova_funcStruct* nova_local_1 = (/*nova_local_1*/nova_funcStruct*)nova_null;
	/*nova_local_2*/nova_funcStruct* nova_local_2 = (/*nova_local_2*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling a chained function x4 returned by a function ")));
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount = (int)(0);
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount = (int)(0);
	l1_Nova_chainX4 = stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference4((stabilitytest_Nova_FirstClassFunctionStability*)(this));
	((stabilitytest_Nova_FirstClassFunctionStability_closure613_Nova_chainedFuncReference3)(nova_local_2 = (/*nova_local_2*/nova_funcStruct*)((stabilitytest_Nova_FirstClassFunctionStability_closure611_Nova_chainedFuncReference)(nova_local_1 = (/*nova_local_1*/nova_funcStruct*)((stabilitytest_Nova_FirstClassFunctionStability_closure609_Nova_inlineGetFunc)(nova_local_0 = (/*nova_local_0*/nova_funcStruct*)((l1_closure629_Nova_chainX4)l1_Nova_chainX4->func)(l1_Nova_chainX4->ref,
					l1_Nova_chainX4->context))->func)(nova_local_0->ref,
			nova_local_0->context))->func)(nova_local_1->ref,
	nova_local_1->context))->func)(nova_local_2->ref,
	nova_local_2->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool82_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch && this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount == 1 && this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount == 4)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to call first class chained function x4 returned from function: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
								(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(", x"))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
																(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount))),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)(""))))))))))))))));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX5(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure782_Nova_chainedFuncReference5*/nova_funcStruct* l1_Nova_chainX5 = (/*stabilitytest_Nova_FirstClassFunctionStability_closure782_Nova_chainedFuncReference5*/nova_funcStruct*)nova_null;
	/*nova_local_0*/nova_funcStruct* nova_local_0 = (/*nova_local_0*/nova_funcStruct*)nova_null;
	/*nova_local_1*/nova_funcStruct* nova_local_1 = (/*nova_local_1*/nova_funcStruct*)nova_null;
	/*nova_local_2*/nova_funcStruct* nova_local_2 = (/*nova_local_2*/nova_funcStruct*)nova_null;
	/*nova_local_3*/nova_funcStruct* nova_local_3 = (/*nova_local_3*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling a chained function x5 returned by a function ")));
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount = (int)(0);
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount = (int)(0);
	l1_Nova_chainX5 = stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference5((stabilitytest_Nova_FirstClassFunctionStability*)(this));
	((stabilitytest_Nova_FirstClassFunctionStability_closure652_Nova_chainedFuncReference4)(nova_local_3 = (/*nova_local_3*/nova_funcStruct*)((stabilitytest_Nova_FirstClassFunctionStability_closure650_Nova_chainedFuncReference3)(nova_local_2 = (/*nova_local_2*/nova_funcStruct*)((stabilitytest_Nova_FirstClassFunctionStability_closure648_Nova_chainedFuncReference)(nova_local_1 = (/*nova_local_1*/nova_funcStruct*)((stabilitytest_Nova_FirstClassFunctionStability_closure646_Nova_inlineGetFunc)(nova_local_0 = (/*nova_local_0*/nova_funcStruct*)((l1_closure672_Nova_chainX5)l1_Nova_chainX5->func)(l1_Nova_chainX5->ref,
							l1_Nova_chainX5->context))->func)(nova_local_0->ref,
					nova_local_0->context))->func)(nova_local_1->ref,
			nova_local_1->context))->func)(nova_local_2->ref,
	nova_local_2->context))->func)(nova_local_3->ref,
	nova_local_3->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool83_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch && this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount == 1 && this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount == 5)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to call first class chained function x5 returned from function: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
								(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(", x"))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
																(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount))),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)(""))))))))))))))));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX6(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure794_Nova_chainedFuncReference6*/nova_funcStruct* l1_Nova_chainX6 = (/*stabilitytest_Nova_FirstClassFunctionStability_closure794_Nova_chainedFuncReference6*/nova_funcStruct*)nova_null;
	/*nova_local_0*/nova_funcStruct* nova_local_0 = (/*nova_local_0*/nova_funcStruct*)nova_null;
	/*nova_local_1*/nova_funcStruct* nova_local_1 = (/*nova_local_1*/nova_funcStruct*)nova_null;
	/*nova_local_2*/nova_funcStruct* nova_local_2 = (/*nova_local_2*/nova_funcStruct*)nova_null;
	/*nova_local_3*/nova_funcStruct* nova_local_3 = (/*nova_local_3*/nova_funcStruct*)nova_null;
	/*nova_local_4*/nova_funcStruct* nova_local_4 = (/*nova_local_4*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling a chained function x6 returned by a function ")));
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount = (int)(0);
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount = (int)(0);
	l1_Nova_chainX6 = stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference6((stabilitytest_Nova_FirstClassFunctionStability*)(this));
	((stabilitytest_Nova_FirstClassFunctionStability_closure703_Nova_chainedFuncReference5)(nova_local_4 = (/*nova_local_4*/nova_funcStruct*)((stabilitytest_Nova_FirstClassFunctionStability_closure701_Nova_chainedFuncReference4)(nova_local_3 = (/*nova_local_3*/nova_funcStruct*)((stabilitytest_Nova_FirstClassFunctionStability_closure699_Nova_chainedFuncReference3)(nova_local_2 = (/*nova_local_2*/nova_funcStruct*)((stabilitytest_Nova_FirstClassFunctionStability_closure697_Nova_chainedFuncReference)(nova_local_1 = (/*nova_local_1*/nova_funcStruct*)((stabilitytest_Nova_FirstClassFunctionStability_closure695_Nova_inlineGetFunc)(nova_local_0 = (/*nova_local_0*/nova_funcStruct*)((l1_closure727_Nova_chainX6)l1_Nova_chainX6->func)(l1_Nova_chainX6->ref,
									l1_Nova_chainX6->context))->func)(nova_local_0->ref,
							nova_local_0->context))->func)(nova_local_1->ref,
					nova_local_1->context))->func)(nova_local_2->ref,
			nova_local_2->context))->func)(nova_local_3->ref,
	nova_local_3->context))->func)(nova_local_4->ref,
	nova_local_4->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool84_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch && this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount == 1 && this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount == 6)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to call first class chained function x6 returned from function: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
								(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(", x"))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
																(this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount))),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)(""))))))))))))))));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_refFunc(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 1;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount++;
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure750_Nova_getFunc*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_getFunc(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_refFunc, this, nova_null);
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure752_Nova_inlineGetFunc*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineGetFunc(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount++;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_refFunc, this, nova_null);
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure754_Nova_inlineGetFunc2*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineGetFunc2(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_refFunc, this, nova_null);
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure758_Nova_chainedFuncReference*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount++;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineGetFunc, this, nova_null);
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure764_Nova_chainedFuncReference3*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference3(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount++;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference, this, nova_null);
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure772_Nova_chainedFuncReference4*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference4(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount++;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference3, this, nova_null);
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure782_Nova_chainedFuncReference5*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference5(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount++;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference4, this, nova_null);
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure794_Nova_chainedFuncReference6*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference6(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount++;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_chainedFuncReference5, this, nova_null);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testSingleFunctionInArray(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing single function in Array ")));
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array),
		(nova_Nova_Object*)(nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_refFunc, this, nova_null)));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingFunctionFromCollection(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	/*nova_local_0*/nova_funcStruct* nova_local_0 = (/*nova_local_0*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling a single function from Array ")));
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array),
		(nova_Nova_Object*)(nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_refFunc, this, nova_null)));
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	((func805)(nova_local_0 = (/*nova_local_0*/nova_funcStruct*)(nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_first((nova_datastruct_list_Nova_List*)(l1_Nova_array))))->func)(nova_local_0->ref,
	nova_local_0->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool85_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch)),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Failed to call single function from collection")));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingFunctionWithParametersFromCollection(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_result = 0;
	/*nova_local_0*/nova_funcStruct* nova_local_0 = (/*nova_local_0*/nova_funcStruct*)nova_null;
	/*nova_local_1*/nova_funcStruct* nova_local_1 = (/*nova_local_1*/nova_funcStruct*)nova_null;
	/*nova_local_2*/nova_funcStruct* nova_local_2 = (/*nova_local_2*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing calling a single function with parameters from Array ")));
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array),
		(nova_Nova_Object*)(nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_paramFunc, this, nova_null)));
	l1_Nova_result = ((func814)(nova_local_1 = (/*nova_local_1*/nova_funcStruct*)(nova_local_0 = (nova_funcStruct*)nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_array),
	0)))->func)(nova_local_0->ref,
		5,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("a")),
	nova_local_0->context);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int86_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_result)),
		5 + 1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to call single function with parameters from collection by array access ("))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(l1_Nova_result))),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)(")"))))))));
	l1_Nova_result = (int)(((func814)(nova_local_2 = (/*nova_local_2*/nova_funcStruct*)(nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_first((nova_datastruct_list_Nova_List*)(l1_Nova_array))))->func)(nova_local_2->ref,
			2,
			nova_Nova_String_1_Nova_construct(0,
				(char*)("4a")),
	nova_local_2->context));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int87_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_result)),
		2 + 2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to call single function with parameters from collection ("))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(l1_Nova_result))),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)(")"))))))));
}

int stabilitytest_Nova_FirstClassFunctionStability_Nova_paramFunc(stabilitytest_Nova_FirstClassFunctionStability* this, int x, nova_Nova_String* y)
{
	return x + y->nova_Nova_String_Nova_count;
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testParameterlessLambdaVariableFunctionality(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	Context91* contextArg92 = NOVA_MALLOC(sizeof(Context91));
	char l1_Nova_worked = 0;
	char* heap91_0 = (char*)NOVA_MALLOC(sizeof(char));
	*heap91_0 = l1_Nova_worked;
	contextArg92->stabilitytest_Nova_FirstClassFunctionStability_Nova_worked = heap91_0;
	/*l1_closure821_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure821_Nova_func*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing parameterless lambda variable functionality ")));
	(*heap91_0) = 0;
	l1_Nova_func = nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda92, this, contextArg92);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool88_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap91_0))),
		0,
	0);
	((l1_closure821_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
	l1_Nova_func->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool89_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap91_0))),
		1,
	0);
	(*heap91_0) = 0;
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool90_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap91_0))),
		0,
	0);
	stabilitytest_Nova_FirstClassFunctionStability_Nova_callFunc((stabilitytest_Nova_FirstClassFunctionStability*)(this),
		(stabilitytest_Nova_FirstClassFunctionStability_closure822_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool91_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap91_0))),
		1,
	0);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_callFunc(stabilitytest_Nova_FirstClassFunctionStability* this, stabilitytest_Nova_FirstClassFunctionStability_closure822_Nova_func stabilitytest_Nova_FirstClassFunctionStability_Nova_func, void* stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_func, void* stabilitytest_Nova_FirstClassFunctionStability_context_Nova_func)
{
	stabilitytest_Nova_FirstClassFunctionStability_Nova_func(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_func,
	stabilitytest_Nova_FirstClassFunctionStability_context_Nova_func);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testParameterlessLocalFunction(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	Context92* contextArg93 = NOVA_MALLOC(sizeof(Context92));
	char l1_Nova_worked = 0;
	char* heap92_0 = (char*)NOVA_MALLOC(sizeof(char));
	*heap92_0 = l1_Nova_worked;
	contextArg93->stabilitytest_Nova_FirstClassFunctionStability_Nova_worked = heap92_0;
	/*l1_closure825_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure825_Nova_func*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing parameterless local function ")));
	(*heap92_0) = 0;
	l1_Nova_func = nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda93, this, contextArg93);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool92_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap92_0))),
		0,
	0);
	((l1_closure825_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
	l1_Nova_func->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool93_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap92_0))),
		1,
	0);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testLambdaVariableWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	Context93* contextArg94 = NOVA_MALLOC(sizeof(Context93));
	char l1_Nova_worked = 0;
	char* heap93_0 = (char*)NOVA_MALLOC(sizeof(char));
	*heap93_0 = l1_Nova_worked;
	contextArg94->stabilitytest_Nova_FirstClassFunctionStability_Nova_worked = heap93_0;
	/*l1_closure828_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure828_Nova_func*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing lambda variable with parameters functionality ")));
	(*heap93_0) = 0;
	l1_Nova_func = nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda94, this, contextArg94);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool94_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap93_0))),
		0,
	0);
	((l1_closure828_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
		3,
	l1_Nova_func->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool95_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap93_0))),
		1,
	0);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testLocalFunctionWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	Context94* contextArg95 = NOVA_MALLOC(sizeof(Context94));
	char l1_Nova_worked = 0;
	char* heap94_0 = (char*)NOVA_MALLOC(sizeof(char));
	*heap94_0 = l1_Nova_worked;
	contextArg95->stabilitytest_Nova_FirstClassFunctionStability_Nova_worked = heap94_0;
	/*l1_closure831_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure831_Nova_func*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing local function with parameters ")));
	(*heap94_0) = 0;
	l1_Nova_func = nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda95, this, contextArg95);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool96_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap94_0))),
		0,
	0);
	((l1_closure831_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
		3,
	l1_Nova_func->context);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool97_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap94_0))),
		1,
	0);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testReturningLambda(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure839_Nova_returnLambda*/nova_funcStruct* l1_Nova_func = (/*stabilitytest_Nova_FirstClassFunctionStability_closure839_Nova_returnLambda*/nova_funcStruct*)nova_null;
	int l1_Nova_returned = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing returning a lambda ")));
	l1_Nova_func = stabilitytest_Nova_FirstClassFunctionStability_Nova_returnLambda((stabilitytest_Nova_FirstClassFunctionStability*)(this),
	5);
	l1_Nova_returned = ((l1_closure836_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
	l1_Nova_func->context);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int98_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_returned)),
		10,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected 10, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_returned))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure839_Nova_returnLambda*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_returnLambda(stabilitytest_Nova_FirstClassFunctionStability* this, int input)
{
	Context95* contextArg96 = NOVA_MALLOC(sizeof(Context95));
	int* heap95_0 = (int*)NOVA_MALLOC(sizeof(int));
	*heap95_0 = input;
	contextArg96->stabilitytest_Nova_FirstClassFunctionStability_Nova_input = heap95_0;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda96, this, contextArg96);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testReturningLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure847_Nova_returnLambdaWithParameters*/nova_funcStruct* l1_Nova_func = (/*stabilitytest_Nova_FirstClassFunctionStability_closure847_Nova_returnLambdaWithParameters*/nova_funcStruct*)nova_null;
	int l1_Nova_returned = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing returning a lambda with parameters ")));
	l1_Nova_func = stabilitytest_Nova_FirstClassFunctionStability_Nova_returnLambdaWithParameters((stabilitytest_Nova_FirstClassFunctionStability*)(this),
	5);
	l1_Nova_returned = ((l1_closure844_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
		3,
		6,
	l1_Nova_func->context);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int99_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_returned)),
		3 * 6 + 5,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
								(3 * 6 + 5))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", but received "))),
								(nova_Nova_Object*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
										(l1_Nova_returned))))))))));
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure847_Nova_returnLambdaWithParameters*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_returnLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, int input)
{
	Context96* contextArg97 = NOVA_MALLOC(sizeof(Context96));
	int* heap96_0 = (int*)NOVA_MALLOC(sizeof(int));
	*heap96_0 = input;
	contextArg97->stabilitytest_Nova_FirstClassFunctionStability_Nova_input = heap96_0;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda97, this, contextArg97);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambda(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure854_Nova_inlineReturnLambda*/nova_funcStruct* l1_Nova_func = (/*stabilitytest_Nova_FirstClassFunctionStability_closure854_Nova_inlineReturnLambda*/nova_funcStruct*)nova_null;
	int l1_Nova_returned = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing inline returning a lambda ")));
	l1_Nova_func = stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambda((stabilitytest_Nova_FirstClassFunctionStability*)(this),
	5);
	l1_Nova_returned = ((l1_closure852_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
	l1_Nova_func->context);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int100_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_returned)),
		10,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected 10, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_returned))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure854_Nova_inlineReturnLambda*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambda(stabilitytest_Nova_FirstClassFunctionStability* this, int input)
{
	Context0* contextArg1 = NOVA_MALLOC(sizeof(Context0));
	int* heap0_0 = (int*)NOVA_MALLOC(sizeof(int));
	*heap0_0 = input;
	contextArg1->stabilitytest_Nova_FirstClassFunctionStability_Nova_input = heap0_0;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda1, this, contextArg1);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure861_Nova_inlineReturnLambdaWithParameters*/nova_funcStruct* l1_Nova_func = (/*stabilitytest_Nova_FirstClassFunctionStability_closure861_Nova_inlineReturnLambdaWithParameters*/nova_funcStruct*)nova_null;
	int l1_Nova_returned = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing inline returning a lambda with parameters ")));
	l1_Nova_func = stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParameters((stabilitytest_Nova_FirstClassFunctionStability*)(this),
	5);
	l1_Nova_returned = ((l1_closure859_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
		3,
		6,
	l1_Nova_func->context);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int101_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_returned)),
		3 * 6 + 5,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
								(3 * 6 + 5))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", but received "))),
								(nova_Nova_Object*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
										(l1_Nova_returned))))))))));
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure861_Nova_inlineReturnLambdaWithParameters*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParameters(stabilitytest_Nova_FirstClassFunctionStability* this, int input)
{
	Context1* contextArg2 = NOVA_MALLOC(sizeof(Context1));
	int* heap1_0 = (int*)NOVA_MALLOC(sizeof(int));
	*heap1_0 = input;
	contextArg2->stabilitytest_Nova_FirstClassFunctionStability_Nova_input = heap1_0;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda2, this, contextArg2);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParametersAndType(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure869_Nova_inlineReturnLambdaWithParametersAndType*/nova_funcStruct* l1_Nova_func = (/*stabilitytest_Nova_FirstClassFunctionStability_closure869_Nova_inlineReturnLambdaWithParametersAndType*/nova_funcStruct*)nova_null;
	int l1_Nova_returned = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing inline returning a lambda with parameters and type predefined ")));
	l1_Nova_func = stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParametersAndType((stabilitytest_Nova_FirstClassFunctionStability*)(this),
	5);
	l1_Nova_returned = ((l1_closure866_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
		3,
		6,
	l1_Nova_func->context);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int102_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_returned)),
		3 * 6 + 5,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
								(3 * 6 + 5))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", but received "))),
								(nova_Nova_Object*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
										(l1_Nova_returned))))))))));
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure869_Nova_inlineReturnLambdaWithParametersAndType*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParametersAndType(stabilitytest_Nova_FirstClassFunctionStability* this, int input)
{
	Context2* contextArg3 = NOVA_MALLOC(sizeof(Context2));
	int* heap2_0 = (int*)NOVA_MALLOC(sizeof(int));
	*heap2_0 = input;
	contextArg3->stabilitytest_Nova_FirstClassFunctionStability_Nova_input = heap2_0;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda3, this, contextArg3);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParametersAndTypeWithBody(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*stabilitytest_Nova_FirstClassFunctionStability_closure877_Nova_inlineReturnLambdaWithParametersAndTypeWithBody*/nova_funcStruct* l1_Nova_func = (/*stabilitytest_Nova_FirstClassFunctionStability_closure877_Nova_inlineReturnLambdaWithParametersAndTypeWithBody*/nova_funcStruct*)nova_null;
	int l1_Nova_returned = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing inline returning a lambda with parameters and type predefined with body ")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool103_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_bodyWorked)),
		0,
	0);
	l1_Nova_func = stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParametersAndTypeWithBody((stabilitytest_Nova_FirstClassFunctionStability*)(this),
	5);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool104_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_bodyWorked)),
		1,
	0);
	l1_Nova_returned = ((l1_closure874_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
		3,
		6,
	l1_Nova_func->context);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int105_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_returned)),
		3 * 6 + 5,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
								(3 * 6 + 5))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", but received "))),
								(nova_Nova_Object*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
										(l1_Nova_returned))))))))));
}

/*stabilitytest_Nova_FirstClassFunctionStability_closure877_Nova_inlineReturnLambdaWithParametersAndTypeWithBody*/nova_funcStruct* stabilitytest_Nova_FirstClassFunctionStability_Nova_inlineReturnLambdaWithParametersAndTypeWithBody(stabilitytest_Nova_FirstClassFunctionStability* this, int input)
{
	Context3* contextArg4 = NOVA_MALLOC(sizeof(Context3));
	int* heap3_0 = (int*)NOVA_MALLOC(sizeof(int));
	*heap3_0 = input;
	contextArg4->stabilitytest_Nova_FirstClassFunctionStability_Nova_input = heap3_0;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_bodyWorked = 1;
	return nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda4, this, contextArg4);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testImplicitNullFunctionReference(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*l1_closure879_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure879_Nova_func*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing implicit null function reference ")));
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testExplicitNullFunctionReference(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	/*l1_closure882_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure882_Nova_func*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing explicit null function reference ")));
	l1_Nova_func = (/*l1_closure882_Nova_func*/nova_funcStruct*)((nova_Nova_Object*)nova_null);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_testNonNullFunctionReference(stabilitytest_Nova_FirstClassFunctionStability* this, nova_io_Nova_OutputStream* out)
{
	Context97* contextArg98 = NOVA_MALLOC(sizeof(Context97));
	/*l1_closure885_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure885_Nova_func*/nova_funcStruct*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing non-null function reference ")));
	l1_Nova_func = nova_get_funcStruct3(&stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda98, this, contextArg98);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_runTests(stabilitytest_Nova_FirstClassFunctionStability* this, stabilitytest_Nova_FirstClassFunctionStability_closure886_Nova_onResult stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult, void* stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult, void* stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context209* contextArg188 = NOVA_MALLOC(sizeof(Context209));
	nova_time_Nova_Timer* l1_Nova_testFunctionReturnedByFunctionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testFunctionReturnedByInlineFunctionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testFunctionReturnedByInlineFunctionWithTypeSpecifiedTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testCallingChainedFunctionReturnedByFunctionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testCallingAssignedChainFunctionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testCallingChainedFunctionX3Timer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testCallingChainedFunctionX4Timer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testCallingChainedFunctionX5Timer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testCallingChainedFunctionX6Timer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testSingleFunctionInArrayTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testCallingFunctionFromCollectionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testCallingFunctionWithParametersFromCollectionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testParameterlessLambdaVariableFunctionalityTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testParameterlessLocalFunctionTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testLambdaVariableWithParametersTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testLocalFunctionWithParametersTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testReturningLambdaTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testReturningLambdaWithParametersTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testInlineReturningLambdaTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testInlineReturningLambdaWithParametersTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testInlineReturningLambdaWithParametersAndTypeTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testInlineReturningLambdaWithParametersAndTypeWithBodyTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testImplicitNullFunctionReferenceTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testExplicitNullFunctionReferenceTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testNonNullFunctionReferenceTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult = (stabilitytest_Nova_FirstClassFunctionStability_closure886_Nova_onResult)(stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult == 0 ? (stabilitytest_Nova_FirstClassFunctionStability_closure886_Nova_onResult)&stabilitytest_Nova_FirstClassFunctionStability_Nova_lambda188 : stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult);
	stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult);
	stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult = (void*)(stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult == 0 ? (void*)contextArg188 : stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing FirstClassFunctionStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_testFunctionReturnedByFunctionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByFunction((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFunctionReturnedByFunctionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testFunctionReturnedByFunctionTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByFunctionTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFunctionReturnedByFunctionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testFunctionReturnedByFunctionTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByFunctionTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testFunctionReturnedByInlineFunctionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByInlineFunction((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFunctionReturnedByInlineFunctionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testFunctionReturnedByInlineFunctionTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l42_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFunctionReturnedByInlineFunctionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l47_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testFunctionReturnedByInlineFunctionTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l47_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testFunctionReturnedByInlineFunctionWithTypeSpecifiedTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l75_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testFunctionReturnedByInlineFunctionWithTypeSpecified((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFunctionReturnedByInlineFunctionWithTypeSpecifiedTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l75_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testFunctionReturnedByInlineFunctionWithTypeSpecifiedTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionWithTypeSpecifiedTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l75_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l80_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l80_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l80_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFunctionReturnedByInlineFunctionWithTypeSpecifiedTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l80_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l80_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testFunctionReturnedByInlineFunctionWithTypeSpecifiedTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testFunctionReturnedByInlineFunctionWithTypeSpecifiedTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l80_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testCallingChainedFunctionReturnedByFunctionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l108_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionReturnedByFunction((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingChainedFunctionReturnedByFunctionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l108_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testCallingChainedFunctionReturnedByFunctionTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionReturnedByFunctionTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l108_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l113_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l113_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l113_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingChainedFunctionReturnedByFunctionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l113_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l113_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testCallingChainedFunctionReturnedByFunctionTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionReturnedByFunctionTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l113_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testCallingAssignedChainFunctionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l141_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingAssignedChainFunction((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingAssignedChainFunctionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l141_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testCallingAssignedChainFunctionTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingAssignedChainFunctionTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l141_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l146_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l146_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l146_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingAssignedChainFunctionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l146_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l146_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testCallingAssignedChainFunctionTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingAssignedChainFunctionTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l146_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testCallingChainedFunctionX3Timer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l174_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX3((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingChainedFunctionX3Timer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l174_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testCallingChainedFunctionX3Timer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX3TestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l174_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l179_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l179_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l179_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingChainedFunctionX3Timer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l179_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l179_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testCallingChainedFunctionX3Timer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX3TestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l179_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testCallingChainedFunctionX4Timer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l207_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX4((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingChainedFunctionX4Timer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l207_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testCallingChainedFunctionX4Timer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX4TestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l207_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l212_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l212_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l212_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingChainedFunctionX4Timer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l212_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l212_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testCallingChainedFunctionX4Timer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX4TestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l212_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testCallingChainedFunctionX5Timer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l240_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX5((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingChainedFunctionX5Timer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l240_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testCallingChainedFunctionX5Timer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX5TestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l240_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l245_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l245_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l245_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingChainedFunctionX5Timer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l245_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l245_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testCallingChainedFunctionX5Timer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX5TestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l245_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testCallingChainedFunctionX6Timer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l273_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingChainedFunctionX6((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingChainedFunctionX6Timer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l273_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testCallingChainedFunctionX6Timer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX6TestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l273_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l278_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l278_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l278_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingChainedFunctionX6Timer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l278_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l278_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testCallingChainedFunctionX6Timer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingChainedFunctionX6TestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l278_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testSingleFunctionInArrayTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l306_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testSingleFunctionInArray((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSingleFunctionInArrayTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l306_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testSingleFunctionInArrayTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testSingleFunctionInArrayTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l306_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l311_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l311_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l311_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testSingleFunctionInArrayTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l311_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l311_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testSingleFunctionInArrayTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testSingleFunctionInArrayTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l311_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testCallingFunctionFromCollectionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l339_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingFunctionFromCollection((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingFunctionFromCollectionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l339_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testCallingFunctionFromCollectionTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionFromCollectionTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l339_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l344_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l344_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l344_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingFunctionFromCollectionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l344_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l344_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testCallingFunctionFromCollectionTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionFromCollectionTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l344_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testCallingFunctionWithParametersFromCollectionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l372_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testCallingFunctionWithParametersFromCollection((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingFunctionWithParametersFromCollectionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l372_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testCallingFunctionWithParametersFromCollectionTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionWithParametersFromCollectionTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l372_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l377_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l377_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l377_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testCallingFunctionWithParametersFromCollectionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l377_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l377_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testCallingFunctionWithParametersFromCollectionTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testCallingFunctionWithParametersFromCollectionTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l377_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testParameterlessLambdaVariableFunctionalityTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l405_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testParameterlessLambdaVariableFunctionality((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testParameterlessLambdaVariableFunctionalityTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l405_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testParameterlessLambdaVariableFunctionalityTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLambdaVariableFunctionalityTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l405_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l410_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l410_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l410_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testParameterlessLambdaVariableFunctionalityTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l410_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l410_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testParameterlessLambdaVariableFunctionalityTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLambdaVariableFunctionalityTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l410_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testParameterlessLocalFunctionTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l438_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testParameterlessLocalFunction((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testParameterlessLocalFunctionTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l438_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testParameterlessLocalFunctionTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLocalFunctionTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l438_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l443_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l443_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l443_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testParameterlessLocalFunctionTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l443_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l443_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testParameterlessLocalFunctionTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testParameterlessLocalFunctionTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l443_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testLambdaVariableWithParametersTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l471_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testLambdaVariableWithParameters((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testLambdaVariableWithParametersTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l471_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testLambdaVariableWithParametersTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testLambdaVariableWithParametersTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l471_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l476_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l476_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l476_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testLambdaVariableWithParametersTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l476_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l476_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testLambdaVariableWithParametersTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testLambdaVariableWithParametersTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l476_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testLocalFunctionWithParametersTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l504_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testLocalFunctionWithParameters((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testLocalFunctionWithParametersTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l504_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testLocalFunctionWithParametersTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testLocalFunctionWithParametersTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l504_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l509_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l509_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l509_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testLocalFunctionWithParametersTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l509_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l509_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testLocalFunctionWithParametersTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testLocalFunctionWithParametersTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l509_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testReturningLambdaTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l537_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testReturningLambda((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testReturningLambdaTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l537_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testReturningLambdaTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l537_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l542_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l542_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l542_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testReturningLambdaTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l542_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l542_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testReturningLambdaTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l542_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testReturningLambdaWithParametersTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l570_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testReturningLambdaWithParameters((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testReturningLambdaWithParametersTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l570_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testReturningLambdaWithParametersTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaWithParametersTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l570_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l575_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l575_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l575_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testReturningLambdaWithParametersTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l575_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l575_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testReturningLambdaWithParametersTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testReturningLambdaWithParametersTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l575_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testInlineReturningLambdaTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l603_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambda((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testInlineReturningLambdaTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l603_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testInlineReturningLambdaTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l603_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l608_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l608_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l608_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testInlineReturningLambdaTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l608_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l608_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testInlineReturningLambdaTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l608_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testInlineReturningLambdaWithParametersTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l636_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParameters((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testInlineReturningLambdaWithParametersTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l636_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testInlineReturningLambdaWithParametersTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l636_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l641_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l641_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l641_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testInlineReturningLambdaWithParametersTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l641_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l641_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testInlineReturningLambdaWithParametersTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l641_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testInlineReturningLambdaWithParametersAndTypeTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l669_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParametersAndType((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testInlineReturningLambdaWithParametersAndTypeTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l669_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testInlineReturningLambdaWithParametersAndTypeTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l669_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l674_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l674_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l674_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testInlineReturningLambdaWithParametersAndTypeTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l674_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l674_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testInlineReturningLambdaWithParametersAndTypeTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l674_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testInlineReturningLambdaWithParametersAndTypeWithBodyTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l702_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testInlineReturningLambdaWithParametersAndTypeWithBody((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testInlineReturningLambdaWithParametersAndTypeWithBodyTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l702_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testInlineReturningLambdaWithParametersAndTypeWithBodyTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeWithBodyTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l702_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l707_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l707_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l707_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testInlineReturningLambdaWithParametersAndTypeWithBodyTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l707_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l707_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testInlineReturningLambdaWithParametersAndTypeWithBodyTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testInlineReturningLambdaWithParametersAndTypeWithBodyTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l707_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testImplicitNullFunctionReferenceTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l735_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testImplicitNullFunctionReference((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testImplicitNullFunctionReferenceTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l735_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testImplicitNullFunctionReferenceTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testImplicitNullFunctionReferenceTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l735_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l740_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l740_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l740_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testImplicitNullFunctionReferenceTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l740_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l740_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testImplicitNullFunctionReferenceTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testImplicitNullFunctionReferenceTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l740_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testExplicitNullFunctionReferenceTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l768_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testExplicitNullFunctionReference((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testExplicitNullFunctionReferenceTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l768_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testExplicitNullFunctionReferenceTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testExplicitNullFunctionReferenceTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l768_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l773_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l773_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l773_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testExplicitNullFunctionReferenceTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l773_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l773_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testExplicitNullFunctionReferenceTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testExplicitNullFunctionReferenceTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l773_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testNonNullFunctionReferenceTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l801_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FirstClassFunctionStability_Nova_testNonNullFunctionReference((stabilitytest_Nova_FirstClassFunctionStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testNonNullFunctionReferenceTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l801_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testNonNullFunctionReferenceTimer,
			stabilitytest_Nova_FirstClassFunctionStability_Nova__testNonNullFunctionReferenceTestCase);
			stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
				l801_Nova_testResult,
			stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l806_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l806_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l806_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testNonNullFunctionReferenceTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l806_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l806_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testNonNullFunctionReferenceTimer,
		stabilitytest_Nova_FirstClassFunctionStability_Nova__testNonNullFunctionReferenceTestCase);
		stabilitytest_Nova_FirstClassFunctionStability_Nova_onResult(stabilitytest_Nova_FirstClassFunctionStability_ref_Nova_onResult,
			l806_Nova_testResult,
		stabilitytest_Nova_FirstClassFunctionStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_FirstClassFunctionStability* stabilitytest_Nova_FirstClassFunctionStability_Nova_this(stabilitytest_Nova_FirstClassFunctionStability* this) {
	return this;
}
int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda1(stabilitytest_Nova_FirstClassFunctionStability* this, Context0* context)
{
	return (*context->stabilitytest_Nova_FirstClassFunctionStability_Nova_input) * 2;
}

int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda2(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context1* context)
{
	return x * y + (*context->stabilitytest_Nova_FirstClassFunctionStability_Nova_input);
}

int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda3(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context2* context)
{
	return x * y + (*context->stabilitytest_Nova_FirstClassFunctionStability_Nova_input);
}

int stabilitytest_Nova_FirstClassFunctionStability_static_Nova_lambda4(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context3* context)
{
	return x * y + (*context->stabilitytest_Nova_FirstClassFunctionStability_Nova_input);
}

nova_datastruct_list_Nova_Array* generated17(stabilitytest_Nova_FirstClassFunctionStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8, novex_nest_Nova_TestCase* value9, novex_nest_Nova_TestCase* value10, novex_nest_Nova_TestCase* value11, novex_nest_Nova_TestCase* value12, novex_nest_Nova_TestCase* value13, novex_nest_Nova_TestCase* value14, novex_nest_Nova_TestCase* value15, novex_nest_Nova_TestCase* value16, novex_nest_Nova_TestCase* value17, novex_nest_Nova_TestCase* value18, novex_nest_Nova_TestCase* value19, novex_nest_Nova_TestCase* value20, novex_nest_Nova_TestCase* value21, novex_nest_Nova_TestCase* value22, novex_nest_Nova_TestCase* value23, novex_nest_Nova_TestCase* value24)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 25);
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
	l1_Nova_temp[20] = value20;
	l1_Nova_temp[21] = value21;
	l1_Nova_temp[22] = value22;
	l1_Nova_temp[23] = value23;
	l1_Nova_temp[24] = value24;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	25);
}

char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda92(stabilitytest_Nova_FirstClassFunctionStability* this, Context91* context)
{
	return (*context->stabilitytest_Nova_FirstClassFunctionStability_Nova_worked) = 1;
}

char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda93(stabilitytest_Nova_FirstClassFunctionStability* this, Context92* context)
{
	return (*context->stabilitytest_Nova_FirstClassFunctionStability_Nova_worked) = 1;
}

char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda94(stabilitytest_Nova_FirstClassFunctionStability* this, int x, Context93* context)
{
	return (*context->stabilitytest_Nova_FirstClassFunctionStability_Nova_worked) = x * 2 == 6;
}

char stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda95(stabilitytest_Nova_FirstClassFunctionStability* this, int x, Context94* context)
{
	return (*context->stabilitytest_Nova_FirstClassFunctionStability_Nova_worked) = x * 2 == 6;
}

int stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda96(stabilitytest_Nova_FirstClassFunctionStability* this, Context95* context)
{
	return (*context->stabilitytest_Nova_FirstClassFunctionStability_Nova_input) * 2;
}

int stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda97(stabilitytest_Nova_FirstClassFunctionStability* this, int x, int y, Context96* context)
{
	return x * y + (*context->stabilitytest_Nova_FirstClassFunctionStability_Nova_input);
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_localLambda98(stabilitytest_Nova_FirstClassFunctionStability* this, Context97* context)
{
}

void stabilitytest_Nova_FirstClassFunctionStability_Nova_lambda188(stabilitytest_Nova_FirstClassFunctionStability* this, novex_nest_Nova_TestResult* _1, Context209* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_FirstClassFunctionStability_Accessorfunc_Nova_model(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	return stabilitytest_Nova_FirstClassFunctionStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_FirstClassFunctionStability_Nova_super(stabilitytest_Nova_FirstClassFunctionStability* this)
{
	this->stabilitytest_Nova_FirstClassFunctionStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcCount = 0;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_chainCount = 0;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_bodyWorked = 0;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_funcSwitch = 0;
	this->prv->stabilitytest_Nova_FirstClassFunctionStability_Nova_bodyWorked = 0;
}

