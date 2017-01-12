#ifndef FILE_stabilitytest_Nova_StabilityTest_NOVA
#define FILE_stabilitytest_Nova_StabilityTest_NOVA

typedef struct stabilitytest_Nova_StabilityTest stabilitytest_Nova_StabilityTest;
typedef struct stabilitytest_Nova_StabilityTestFunctionMap stabilitytest_Nova_StabilityTestFunctionMap;
typedef struct stabilitytest_Nova_StabilityTestPropertyMap stabilitytest_Nova_StabilityTestPropertyMap;


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
#include <nova/time/nova_time_Nova_Timer.h>
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_ClosureStability.h>
#include <stabilitytest/stabilitytest_Nova_ExceptionStability.h>
#include <stabilitytest/stabilitytest_Nova_ExternalInnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_FileStability.h>
#include <stabilitytest/stabilitytest_Nova_InnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_LambdaStability.h>
#include <stabilitytest/stabilitytest_Nova_NetworkStability.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphismStability.h>
#include <stabilitytest/stabilitytest_Nova_RegexStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StaticImportStability.h>
#include <stabilitytest/stabilitytest_Nova_SyntaxStability.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	stabilitytest_Nova_StabilityTest, 
	
	stabilitytest_StabilityTest_Extension_VTable* vtable;
	stabilitytest_Nova_StabilityTest* stabilitytest_Nova_StabilityTestCase_Nova_program;
)

void stabilitytest_Nova_StabilityTest_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
stabilitytest_Nova_StabilityTest* stabilitytest_Nova_StabilityTest_Nova_construct(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program);
void stabilitytest_Nova_StabilityTest_Nova_destroy(stabilitytest_Nova_StabilityTest** this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_StabilityTest_static_Nova_main(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
void stabilitytest_Nova_StabilityTest_Nova_this(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program);
void stabilitytest_Nova_StabilityTest_Nova_test(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_StabilityTest_Nova_fail(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, int condition);
void stabilitytest_Nova_StabilityTest_Nova_super(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	stabilitytest_Nova_StabilityTestFunctionMap, 
	
	stabilitytest_StabilityTest_StabilityTestFunctionMap_Extension_VTable* vtable;
)

void stabilitytest_Nova_StabilityTestFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
stabilitytest_Nova_StabilityTestFunctionMap* stabilitytest_Nova_StabilityTestFunctionMap_Nova_construct(stabilitytest_Nova_StabilityTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_StabilityTestFunctionMap_Nova_destroy(stabilitytest_Nova_StabilityTestFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_StabilityTestFunctionMap_Nova_this(stabilitytest_Nova_StabilityTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
stabilitytest_Nova_StabilityTest* stabilitytest_Nova_StabilityTestFunctionMap_functionMapStabilityTestFunctionMap_Nova_construct(stabilitytest_Nova_StabilityTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program);
void stabilitytest_Nova_StabilityTestFunctionMap_functionMap_static_Nova_main(stabilitytest_Nova_StabilityTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
void stabilitytest_Nova_StabilityTestFunctionMap_functionMap_Nova_test(stabilitytest_Nova_StabilityTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* reference);
void stabilitytest_Nova_StabilityTestFunctionMap_functionMap_Nova_fail(stabilitytest_Nova_StabilityTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* reference, nova_Nova_String* message, char condition);
void stabilitytest_Nova_StabilityTestFunctionMap_Nova_super(stabilitytest_Nova_StabilityTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	stabilitytest_Nova_StabilityTestPropertyMap, 
	
	stabilitytest_StabilityTest_StabilityTestPropertyMap_Extension_VTable* vtable;
)

void stabilitytest_Nova_StabilityTestPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
stabilitytest_Nova_StabilityTestPropertyMap* stabilitytest_Nova_StabilityTestPropertyMap_Nova_construct(stabilitytest_Nova_StabilityTestPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_StabilityTestPropertyMap_Nova_destroy(stabilitytest_Nova_StabilityTestPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_StabilityTestPropertyMap_Nova_this(stabilitytest_Nova_StabilityTestPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_StabilityTestPropertyMap_Nova_super(stabilitytest_Nova_StabilityTestPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
