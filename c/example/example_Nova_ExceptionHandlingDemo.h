#ifndef FILE_example_Nova_ExceptionHandlingDemo_NOVA
#define FILE_example_Nova_ExceptionHandlingDemo_NOVA

typedef struct example_Nova_ExceptionHandlingDemo example_Nova_ExceptionHandlingDemo;
typedef struct example_Nova_ExceptionHandlingDemoFunctionMap example_Nova_ExceptionHandlingDemoFunctionMap;


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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <example/example_Nova_NonWholeDivisionException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	example_Nova_ExceptionHandlingDemo, 
	
	example_ExceptionHandlingDemo_Extension_VTable* vtable;
)

void example_Nova_ExceptionHandlingDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
example_Nova_ExceptionHandlingDemo* example_Nova_ExceptionHandlingDemo_Nova_construct(example_Nova_ExceptionHandlingDemo* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_ExceptionHandlingDemo_Nova_destroy(example_Nova_ExceptionHandlingDemo** this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_ExceptionHandlingDemo_static_Nova_main(example_Nova_ExceptionHandlingDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
void example_Nova_ExceptionHandlingDemo_Nova_this(example_Nova_ExceptionHandlingDemo* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_ExceptionHandlingDemo_Nova_super(example_Nova_ExceptionHandlingDemo* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	example_Nova_ExceptionHandlingDemoFunctionMap, 
	
	example_ExceptionHandlingDemo_ExceptionHandlingDemoFunctionMap_Extension_VTable* vtable;
)

void example_Nova_ExceptionHandlingDemoFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
example_Nova_ExceptionHandlingDemoFunctionMap* example_Nova_ExceptionHandlingDemoFunctionMap_Nova_construct(example_Nova_ExceptionHandlingDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_ExceptionHandlingDemoFunctionMap_Nova_destroy(example_Nova_ExceptionHandlingDemoFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_ExceptionHandlingDemoFunctionMap_Nova_this(example_Nova_ExceptionHandlingDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
example_Nova_ExceptionHandlingDemo* example_Nova_ExceptionHandlingDemoFunctionMap_functionMapExceptionHandlingDemoFunctionMap_Nova_construct(example_Nova_ExceptionHandlingDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_ExceptionHandlingDemoFunctionMap_functionMap_static_Nova_main(example_Nova_ExceptionHandlingDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
void example_Nova_ExceptionHandlingDemoFunctionMap_Nova_super(example_Nova_ExceptionHandlingDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
