#ifndef FILE_stabilitytest_Nova_ClientThread_NOVA
#define FILE_stabilitytest_Nova_ClientThread_NOVA

typedef struct stabilitytest_Nova_ClientThread stabilitytest_Nova_ClientThread;
typedef struct stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap;


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
#include <nova/network/nova_network_Nova_ClientSocket.h>
#include <stabilitytest/stabilitytest_Nova_NetworkStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <nova/thread/NativeThread.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	stabilitytest_Nova_ClientThread, 
	
	stabilitytest_ClientThread_Extension_VTable* vtable;
	char nova_thread_Nova_Thread_Nova_active;
	struct Private_stabilitytest_Nova_ClientThread* prv;
)

void stabilitytest_Nova_ClientThread_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
stabilitytest_Nova_ClientThread* stabilitytest_Nova_ClientThread_Nova_construct(stabilitytest_Nova_ClientThread* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program, int port);
void stabilitytest_Nova_ClientThread_Nova_destroy(stabilitytest_Nova_ClientThread** this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_ClientThread_Nova_this(stabilitytest_Nova_ClientThread* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program, int port);
void stabilitytest_Nova_ClientThread_Nova_run(stabilitytest_Nova_ClientThread* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_ClientThread_Nova_super(stabilitytest_Nova_ClientThread* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap, 
	
	stabilitytest_ClientThread_stabilitytest_ClientThreadFunctionMap_Extension_VTable* vtable;
)

void stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap* stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap_Nova_construct(stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap_Nova_destroy(stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap_Nova_this(stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap_Nova_super(stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
